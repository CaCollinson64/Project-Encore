// Copyright Old Doorways Ltd 2023
// All rights  reserved
#include "Extensions/SudsProExtCameraTools.h"

#include "SUDSDialogue.h"
#include "SudsProCameraModifier.h"
#include "SudsProCommon.h"
#include "SudsProSettings.h"
#include "SudsProSubsystem.h"
#include "SUDSScript.h"
#include "Camera/CameraActor.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/PlayerController.h"
#include "Camera/CameraShakeBase.h"
#include "TimerManager.h"
#include "Extensions/SudsProCameraShotProvider.h"

const FString USudsProExtCameraTools::DefaultCameraShotPrefix("DefaultCameraShot.");
const FName USudsProExtCameraTools::CameraCutEventName("CameraCut");
const FName USudsProExtCameraTools::CameraTransitionEventName("CameraTransition");
const FName USudsProExtCameraTools::CameraShakeEventName("CameraShake");
const FName USudsProExtCameraTools::StopCameraShakeEventName("StopCameraShake");
const FName USudsProExtCameraTools::CameraPushInOutEventName("CameraPushInOut");
const FName USudsProExtCameraTools::CameraZoomEventName("CameraZoom");
const FName USudsProExtCameraTools::CameraPanEventName("CameraPan");
const FName USudsProExtCameraTools::CameraPanLocalEventName("CameraPanLocal");
const FName USudsProExtCameraTools::CameraTiltEventName("CameraTilt");
const FName USudsProExtCameraTools::CameraRollEventName("CameraRoll");
const FName USudsProExtCameraTools::CameraDollyEventName("CameraDolly");
const FName USudsProExtCameraTools::CameraBoomEventName("CameraBoom");
const FName USudsProExtCameraTools::CameraBoomLocalEventName("CameraBoomLocal");
const FName USudsProExtCameraTools::WaitCameraEventName("WaitCamera");
const FName USudsProExtCameraTools::FadeOutEventName("FadeOut");
const FName USudsProExtCameraTools::FadeInEventName("FadeIn");
const FName USudsProExtCameraTools::WaitFadeEventName("WaitFade");
const FName USudsProExtCameraTools::KeepCameraShotVarName("CameraKeepShotPostDialogue");
const FName USudsProExtCameraTools::CameraEnterSmoothVarName("CameraEnterSmoothTransition");
const FName USudsProExtCameraTools::CameraExitSmoothVarName("CameraExitSmoothTransition");
const FName USudsProExtCameraTools::CameraDefaultShotCutsDisabledVarName("CameraDefaultShotCutsDisabled");
const float USudsProExtCameraTools::DefaultTransitionSmoothTime = 0.5f;

void USudsProExtCameraTools::DialogueStarting_Implementation(USUDSDialogue* Dialogue)
{
	Super::DialogueStarting_Implementation(Dialogue);

	CurrentDialogue = Dialogue;
	
	// Save the current view target
	OriginalViewTarget = GetCurrentViewTarget();

	// Add our camera modifier
	if (const auto PC = GetWorld()->GetFirstPlayerController())
	{
		if (IsValid(PC->PlayerCameraManager))
		{
			CameraModifier = Cast<USudsProCameraModifier>(PC->PlayerCameraManager->AddNewCameraModifier(USudsProCameraModifier::StaticClass()));
		}
	}

	

	// Read current state of default camera variables
	DefaultCameraShots.Empty();
	for (auto& Pair : Dialogue->GetVariables())
	{
		FString KeyStr = Pair.Key.ToString();
		if (KeyStr.StartsWith(DefaultCameraShotPrefix))
		{
			ExtractDefaultCameraShotFromVar(Dialogue, KeyStr, Pair.Value, 0);
		}
	}
	bExplicitCut = false;
	bAppliedDefaultCameraCut = false;
	bIsFirstCut = true;
	FadeTimeLeft = 0;
	bIsFadeInQueued = false;
	bSuppressDefaultCameraCuts = false;
	
	// We need to know about camera-related dialogue variables changing
	Dialogue->OnVariableChanged.AddDynamic(this, &USudsProExtCameraTools::OnVariableChanged);
}

void USudsProExtCameraTools::DialogueFinished_Implementation(USUDSDialogue* Dialogue)
{
	Super::DialogueFinished_Implementation(Dialogue);

	Dialogue->OnVariableChanged.RemoveDynamic(this, &USudsProExtCameraTools::OnVariableChanged);

	if (const auto PC = GetWorld()->GetFirstPlayerController())
	{
		if (IsValid(CameraModifier) && IsValid(PC->PlayerCameraManager))
		{
			PC->PlayerCameraManager->RemoveCameraModifier(CameraModifier);
			CameraModifier = nullptr;
		}
	}

	// Restore original camera
	if (IsValid(OriginalViewTarget) && !Dialogue->GetVariableBoolean(KeepCameraShotVarName))
	{
		const bool bSmooth = !ShouldHardCutOutOfDialogue(Dialogue);
		float Duration = 0.5f;
		if (const auto Settings = GetDefault<USudsProSettings>())
		{
			Duration = Settings->ExitDialogueSmoothCameraDuration;
		}
		PerformCameraCutToTarget(OriginalViewTarget, bSmooth, Duration);

		// And if we're restoring the original camera, make sure we're faded back up
		if (IsFadedOut())
		{
			if (bSmooth)
			{
				PerformFade(Dialogue, false, Duration, LastFadeColour, bLastAudioFade);
			}
			else
			{
				SetManualFade(0, FLinearColor::Black, true);
			}
		}
		
	}
	
}

void USudsProExtCameraTools::Tick_Implementation(float DeltaTime)
{
	// We have no other way of tracking camera shake finishing sadly
	if (ShakeTimeRemaining > 0)
	{
		ShakeTimeRemaining =  FMath::Max(0, ShakeTimeRemaining - DeltaTime);
	}

	// Same with fade
	if (FadeTimeLeft > 0)
	{
		FadeTimeLeft =  FMath::Max(0, FadeTimeLeft - DeltaTime);

		if (FadeTimeLeft <= 0)
		{
			if (bIsActiveFadeAFadeOut)
			{
				OnFadeOutFinished.Broadcast();
			}
			// Fire off queued fade in if needed
			if (bIsFadeInQueued && CurrentDialogue.IsValid())
			{
				PerformFade(CurrentDialogue.Get(), false, QueuedFadeInTime, QueuedFadeColour, bQueuedAudioFade);
				FadeTimeLeft = QueuedFadeInTime;
				bIsFadeInQueued = false;
			}
		}
	}
	
}

AActor* USudsProExtCameraTools::GetCurrentViewTarget() const
{
	if (const auto PC = GetWorld()->GetFirstPlayerController())
	{
		return PC->GetViewTarget();
	}
	return nullptr;
}

UCameraComponent* USudsProExtCameraTools::GetCurrentCamera() const
{
	if (const auto V = GetCurrentViewTarget())
	{
		return GetCameraComponentFromActor(V);
	}
	return nullptr;
}

UCameraComponent* USudsProExtCameraTools::GetCameraComponentFromActor(const AActor* Actor) const
{
	if (const auto CA = Cast<ACameraActor>(Actor))
	{
		return CA->GetCameraComponent();
	}

	TArray<UCameraComponent*> CameraComponents;
	Actor->GetComponents(CameraComponents);

	// Active component
	for (UCameraComponent* CC : CameraComponents)
	{
		if (CC->IsActive())
		{
			return CC;
		}
	}

	// Fallback to first component
	if (CameraComponents.Num() > 0)
	{
		return CameraComponents[0];
	}

	
	return nullptr;
}

void USudsProExtCameraTools::ExtractDefaultCameraShotFromVar(const USUDSDialogue* Dialogue, const FString& KeyStr, const FSUDSValue& Value, int SourceLine)
{
	// we should have already checked that this is prefixed with DefaultCameraShot
	if (Value.GetType() == ESUDSValueType::Name)
	{
		FString SpeakerID = KeyStr.RightChop(DefaultCameraShotPrefix.Len());
		FName Shot = Value.GetNameValue();
		DefaultCameraShots.Add(SpeakerID, Shot);
	}
	else
	{
		UE_LOG(LogSudsPro, Error, TEXT("%s line %d: Variable %s should be of type Name (use backtick quotes)"), *Dialogue->GetScript()->GetName(), SourceLine, *KeyStr);
	}
}

bool USudsProExtCameraTools::ProcessDialogueEvent_Implementation(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	// Process camera events

	// Look out for FadeIn events, even though they aren't our business, because they should trigger DEFAULT camera
	// cuts to happen before the fade in rather than at the speaker

	if (Evt.Name == CameraCutEventName)
	{
		return CameraCutEvent(Dialogue, Evt);	
	}
	else if (Evt.Name == CameraTransitionEventName)
	{
		return CameraTransitionEvent(Dialogue, Evt);
	}
	else if (Evt.Name == CameraShakeEventName)
	{
		return CameraShakeEvent(Dialogue, Evt);
	}
	else if (Evt.Name == StopCameraShakeEventName)
	{
		return StopCameraShakeEvent(Dialogue, Evt);
	}
	else if (Evt.Name == CameraPushInOutEventName)
	{
		return CameraPushInOutEvent(Dialogue, Evt);
	}
	else if (Evt.Name == CameraZoomEventName)
	{
		return CameraZoomEvent(Dialogue, Evt);
	}
	else if (Evt.Name == CameraDollyEventName)
	{
		return CameraDollyEvent(Dialogue, Evt);
	}
	else if (Evt.Name == CameraBoomEventName)
	{
		return CameraBoomEvent(Dialogue, Evt, false);
	}
	else if (Evt.Name == CameraBoomLocalEventName)
	{
		return CameraBoomEvent(Dialogue, Evt, true);
	}
	else if (Evt.Name == CameraPanEventName)
	{
		return CameraPanEvent(Dialogue, Evt, false);
	}
	else if (Evt.Name == CameraPanLocalEventName)
	{
		return CameraPanEvent(Dialogue, Evt, true);
	}
	else if (Evt.Name == CameraTiltEventName)
	{
		// Always tilt in local space, not sure it's useful to do otherwise
		return CameraTiltEvent(Dialogue, Evt, true);
	}
	else if (Evt.Name == CameraRollEventName)
	{
		// Always roll in local space, not sure it's useful to do otherwise
		return CameraRollEvent(Dialogue, Evt, true);
	}
	else if (Evt.Name == WaitCameraEventName)
	{
		return WaitCameraEvent(Dialogue, Evt);
	}
	else if (Evt.Name == FadeOutEventName)
	{
		return FadeEvent(Dialogue, Evt, true);	
	}
	else if (Evt.Name == FadeInEventName)
	{
		return FadeEvent(Dialogue, Evt, false);
	}
	else if (Evt.Name == WaitFadeEventName)
	{
		return WaitFadeEvent(Dialogue, Evt);
	}
	
	return false;
}

bool USudsProExtCameraTools::PreDialogueSpeakerLineShown_Implementation(USUDSDialogue* Dialogue)
{
	// If we're fading out and fading in later, perform default cut then
	if (!(FadeTimeLeft > 0 && bIsFadeInQueued))
	{
		// Apply any default camera cut if no manual cut has been made
		MaybeApplyDefaultCameraCut(Dialogue);
	}

	// Reset for next speaker line
	bExplicitCut = false;
	bAppliedDefaultCameraCut = false;
	
	
	return false;
}


bool USudsProExtCameraTools::IsFadedOut() const
{

	if (auto PC = GetWorld()->GetFirstPlayerController())
	{
		if (IsValid(PC->PlayerCameraManager))
		{
			return PC->PlayerCameraManager->bEnableFading && PC->PlayerCameraManager->FadeAmount > 0.99f;
		}
	}

	return false;
}

bool USudsProExtCameraTools::ShouldHardCutInToDialogue(const USUDSDialogue* Dialogue) const
{
	// If faded out, always hard cut for convenience
	if (IsFadedOut())
		return true;

	if (Dialogue->IsVariableSet(CameraEnterSmoothVarName))
	{
		return !Dialogue->GetVariableBoolean(CameraEnterSmoothVarName);
	}
	if (const auto Settings = GetDefault<USudsProSettings>())
	{
		return !Settings->bEnterDialogueViaSmoothCameraTransition;
	}
	return true;
}

bool USudsProExtCameraTools::ShouldHardCutOutOfDialogue(const USUDSDialogue* Dialogue) const
{
	// If faded out, always hard cut for convenience
	if (IsFadedOut())
		return true;

	if (Dialogue->IsVariableSet(CameraExitSmoothVarName))
	{
		return !Dialogue->GetVariableBoolean(CameraExitSmoothVarName);
	}
	if (const auto Settings = GetDefault<USudsProSettings>())
	{
		return !Settings->bExitDialogueViaSmoothCameraTransition;
	}
	return true;
}

bool USudsProExtCameraTools::MaybeApplyDefaultCameraCut(USUDSDialogue* Dialogue)
{
	// Note: FadeIn and other effects could have applied this early
	// Things that disable default cut:
	//  - Having done an explicit cut
	//  - Code suppressing via SetSuppressDefaultCameraCuts
	//  - Dialogue variable CameraDefaultShotCutsDisabled
	if (!bExplicitCut && !bAppliedDefaultCameraCut &&
		!bSuppressDefaultCameraCuts &&
		!Dialogue->GetVariableBoolean(CameraDefaultShotCutsDisabledVarName))
	{
		ApplyDefaultCameraCut(Dialogue);
		return true;
	}

	return false;
	
}

void USudsProExtCameraTools::ApplyDefaultCameraCut(USUDSDialogue* Dialogue)
{
	if (const FName* pShotName = DefaultCameraShots.Find(Dialogue->GetSpeakerID()))
	{
		// Default to smooth out the initial cut
		const bool bDefaultSmooth = bIsFirstCut && !ShouldHardCutInToDialogue(Dialogue);
		float Duration = 0.5f;
		if (bDefaultSmooth)
		{
			if (const auto Settings = GetDefault<USudsProSettings>())
			{
				Duration = Settings->EnterDialogueSmoothCameraDuration;
			}
		}
		PerformCameraCut(Dialogue, *pShotName, bDefaultSmooth, Duration);
		bAppliedDefaultCameraCut = true;
	}
}

AActor* USudsProExtCameraTools::FindCameraForShot(USUDSDialogue* Dialogue, FName ShotName)
{
	// Find cameras from participants
	for (auto P : Dialogue->GetParticipants())
	{
		if (IsValid(P) && P->Implements<USudsProCameraShotProvider>())
		{
			if (auto CamActor = ISudsProCameraShotProvider::Execute_GetDialogueCameraShot(P, ShotName))
			{
				return CamActor;
			}
		}
	}
	return nullptr;
}



void USudsProExtCameraTools::PerformCameraCut(USUDSDialogue* Dialogue, FName ShotName, bool bSmooth, float SmoothTime, EViewTargetBlendFunction Blend, float BlendExp)
{
	// Note how we only support camera actors, not camera components
	// This is because you can only SetViewTarget on actors, and the first active component is used
	// It's too error prone to enable/disable components on other actors we don't own, so only support actors
	// If you want a camera attached to a player or something, you should do it via camera actors attached to the player,
	// not camera components in the player (which are the usual frist person/third person cameras anyway
	if (AActor* Camera = FindCameraForShot(Dialogue, ShotName))
	{
		PerformCameraCutToTarget(Camera, bSmooth, SmoothTime, Blend, BlendExp);
	}
}

void USudsProExtCameraTools::PerformCameraCutToTarget(AActor* Target, bool bSmooth, float SmoothTime, EViewTargetBlendFunction Blend, float BlendExp)
{
	if (auto PC = GetWorld()->GetFirstPlayerController())
	{
		if (GetCurrentViewTarget() != Target)
		{
			// Explicit cuts reset all movements but only IF it's a different shot
			if (CameraModifier)
			{
				CameraModifier->Reset();
			}
			
			if (bSmooth)
			{
				// Note that we don't set "Lock Outgoing" to true; in theory this would be better to do, because we could then
				// destroy any sequencer that preceded this immediately. However, when I've tried this it's locked to the previous
				// view target the PC knew about, not the outgoing sequence camera, which causes a jump.
				// Possibly we should be setting the view target to the sequence camera cut camera at the end, but this is tricky
				// to match exactly. For now, we only destroy sequencers after this transition has occurred, which is safe.
				PC->SetViewTargetWithBlend(Target, SmoothTime, Blend, BlendExp, false);
			}
			else
			{
				PC->SetViewTarget(Target);
			}
		}
		bIsFirstCut = false;
	}
}

bool USudsProExtCameraTools::PerformCameraShake(TSubclassOf<UCameraShakeBase> ShakeClass, float Scale)
{
	if (auto PC = GetWorld()->GetFirstPlayerController())
	{
		if (IsValid(PC->PlayerCameraManager))
		{
			CurrentCameraShake = PC->PlayerCameraManager->StartCameraShake(ShakeClass, Scale);
			return true;
		}
	}

	return false;
}
void USudsProExtCameraTools::OnVariableChanged(USUDSDialogue* Dialogue,
                                               FName VariableName,
                                               const FSUDSValue& Value,
                                               bool bFromScript)
{
	// Watch out for default camera shot changes
	const FString NameStr = VariableName.ToString();
	if (NameStr.StartsWith(DefaultCameraShotPrefix))
	{
		ExtractDefaultCameraShotFromVar(Dialogue, NameStr, Value, bFromScript ? Dialogue->GetCurrentSourceLine() : 0);
	}
}

bool USudsProExtCameraTools::CameraCutEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	// Hard cut. This is what DefaultCameraShot does if no camera events are received before a line
	// [event CameraCut ShotName]
	if (Evt.Args.Num() > 0 && Evt.Args[0].GetType() == ESUDSValueType::Name)
	{
		const FName ShotName = Evt.Args[0].GetNameValue();
		PerformCameraCut(Dialogue, ShotName, false);
		bExplicitCut = true;
	}
	else
	{
		UE_LOG(LogSudsPro, Error, TEXT("%s line %d: CameraCut event must have 1 argument of type Name (backtick quotes)"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
	}
	return false;
}

bool USudsProExtCameraTools::CameraTransitionEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	// Smooth transition from current to new shot
	// [event CameraTransition ShotName, OptionalSmoothTime=0.5]
	if (Evt.Args.Num() > 0 && Evt.Args[0].GetType() == ESUDSValueType::Name)
	{
		const FName ShotName = Evt.Args[0].GetNameValue();
		float SmoothTime = DefaultTransitionSmoothTime;
		if (Evt.Args.Num() > 1)
		{
			if (Evt.Args[1].IsNumeric())
			{
				SmoothTime = Evt.Args[1].GetFloatValue();
			}
			else
			{
				UE_LOG(LogSudsPro, Error, TEXT("%s line %d: CameraTransition - Time argument must be numeric"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
			}
		}
		EViewTargetBlendFunction BlendFunc = VTBlend_EaseInOut;
		float BlendExp = 3;
		if (Evt.Args.Num() > 2)
		{
			if (Evt.Args[2].GetType() == ESUDSValueType::Name)
			{
				if (!USudsProCommon::ParseViewBlendFunction(Evt.Args[2].GetNameValue(), BlendFunc))
				{
					UE_LOG(LogSudsPro, Error, TEXT("%s line %d: CameraTransition Blend argument '%s' is not valid"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo, *Evt.Args[2].GetNameValue().ToString());	
				}
			}
			else
			{
				UE_LOG(LogSudsPro, Error, TEXT("%s line %d: CameraTransition Blend argument must be a Name (backtick quoted)"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
			}

			if (Evt.Args.Num() > 3)
			{
				if (Evt.Args[3].IsNumeric())
				{
					BlendExp = Evt.Args[3].GetFloatValue();
				}
				else
				{
					UE_LOG(LogSudsPro, Error, TEXT("%s line %d: CameraTransition - BlendExp argument must be numeric"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
				}
			}
		}

		PerformCameraCut(Dialogue, ShotName, true, SmoothTime, BlendFunc, BlendExp);
		bExplicitCut = true;

		// Because we're async, need to notify on complete
		FTimerHandle TempHandle;
		GetWorld()->GetTimerManager().SetTimer(TempHandle,[this]()
		{
			GetSudsPro(GetWorld())->EventCompleted(this);
		}, SmoothTime, false);

		// Smooth camera is async
		return true;
	}
	else
	{
		UE_LOG(LogSudsPro, Error, TEXT("%s line %d: CameraCut event must have 1 argument of type Name (backtick quotes)"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
		return false;
	}

}

ESudsProEaseFunction USudsProExtCameraTools::ParseEaseArg(const USUDSDialogue* Dialogue,
                                                          const FSudsProQueuedEvent& Evt,
                                                          int ArgIdx)
{
	if (Evt.Args.Num() > ArgIdx)
	{
		if (Evt.Args[ArgIdx].GetType() == ESUDSValueType::Name)
		{
			const FName EaseName = Evt.Args[ArgIdx].GetNameValue();
			ESudsProEaseFunction Func;
			if (USudsProCommon::ParseEaseFunction(EaseName, Func))
			{
				return Func;
			}
			else
			{
				UE_LOG(LogSudsPro, Error, TEXT("%s line %d: Argument '%s' was not a valid easing function"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo, *EaseName.ToString());
			}
		}
		else
		{
			UE_LOG(LogSudsPro, Error, TEXT("%s line %d: Argument 'ease' should be a Name (backticks)"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
		}
	}
	return ESudsProEaseFunction::EaseInOut_Cubic;
	
}

bool USudsProExtCameraTools::CameraShakeEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	// Camera shake (ShakeName links to asset via plugin settings)
	// [event CameraShake OptionalShakeName=`Default`, OptionalScale=1.0]

	// We don't have to worry about timing this with cuts, the player camera manager applies this to all player cameras

	FName ShakeName("Default");
	if (Evt.Args.Num() > 0 && Evt.Args[0].GetType() == ESUDSValueType::Name)
	{
		ShakeName = Evt.Args[0].GetNameValue();
	}
	// Find the shake class
	TSubclassOf<UCameraShakeBase> ShakeClass = nullptr;
	if (auto Settings = GetDefault<USudsProSettings>())
	{
		if (const TSubclassOf<UCameraShakeBase>* pShakeClass = Settings->CameraShakes.Find(ShakeName))
		{
			ShakeClass = *pShakeClass;
		}
	}

	if (ShakeClass)
	{
		// Get args
		float scale = 1.0;
		if (Evt.Args.Num() > 1)
		{
			if (Evt.Args[1].IsNumeric())
			{
				scale = Evt.Args[1].GetFloatValue();
			}
			else
			{
				UE_LOG(LogSudsPro, Error, TEXT("%s line %d: CameraShake second argument 'scale' should be a number (ignoring)"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
			}
			
		}

		// Try to perform the shake
		if (PerformCameraShake(ShakeClass, scale))
		{
			// Note how long it will take, in case we need to wait for it
			auto CDO = ShakeClass->GetDefaultObject<UCameraShakeBase>();
			auto Duration = CDO->GetCameraShakeDuration();
			if (!Duration.IsInfinite())
			{
				ShakeTimeRemaining = FMath::Max(ShakeTimeRemaining, Duration.Get());
			}
		}
	}
	else
	{
		UE_LOG(LogSudsPro, Error, TEXT("%s line %d: cannot find CameraShake asset named `%s`, check plugin settings"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo, *ShakeName.ToString());
		return false;
	}

	// By default we wait for nothing, use [event WaitCamera] or [event WaitAll] to wait for finish
	return false;
	
}

bool USudsProExtCameraTools::StopCameraShakeEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	if (CurrentCameraShake.IsValid())
	{
		if (auto PC = GetWorld()->GetFirstPlayerController())
		{
			if (IsValid(PC->PlayerCameraManager))
			{
				PC->PlayerCameraManager->StopCameraShake(CurrentCameraShake.Get());
			}
		}
	}
	return false;
}

bool USudsProExtCameraTools::ParseCameraAnimArgs(const USUDSDialogue* Dialogue,
                                                 const FName& Context,
                                                 const FSudsProQueuedEvent& Evt,
                                                 float& OutStart,
                                                 float& OutEnd,
                                                 float& OutTime,
                                                 ESudsProEaseFunction& Ease)
{
	if (Evt.Args.Num() < 3)
	{
		UE_LOG(LogSudsPro, Error, TEXT("%s line %d: %s event requires at least 3 parameters"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo, *Context.ToString());
		return false;
	}
	if (!Evt.Args[0].IsNumeric() || !Evt.Args[1].IsNumeric() || !Evt.Args[2].IsNumeric())
	{
		UE_LOG(LogSudsPro, Error, TEXT("%s line %d: %s event first 3 parameters should all be numeric"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo, *Context.ToString());
		return false;
	}
	
	OutStart = Evt.Args[0].GetFloatValue();
	OutEnd = Evt.Args[1].GetFloatValue();
	OutTime = Evt.Args[2].GetFloatValue();

	// Ease is optional
	Ease = ParseEaseArg(Dialogue, Evt, 3);

	return true;
}

bool USudsProExtCameraTools::CameraPushInOutEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	// Camera push-in (dolly in to camera position along camera's local X from a distance back)
	// [event CameraPushInOut DeltaXStart, DeltaXEnd, Time, OptionalCurve=EaseInOut]

	if (!CameraModifier)
		return false;
	
	float XStart, XEnd, Time;
	ESudsProEaseFunction Ease;
	if (ParseCameraAnimArgs(Dialogue, CameraPushInOutEventName, Evt, XStart, XEnd, Time, Ease))
	{
		// PushIn / PullOut is always in local space
		CameraModifier->AddTranslation(USudsProCameraModifier::ECameraTranslationType::PushInOut,
		                               FVector(XStart, 0, 0),
		                               FVector(XEnd, 0, 0),
		                               ESudsProCameraModifierSpace::Local,
		                               Time,
		                               Ease);
	}
	
	// By default we wait for nothing, use [event WaitCamera] or [event WaitAll] to wait for finish
	return false;
	
}


bool USudsProExtCameraTools::CameraZoomEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	// Camera zoom (set camera FOV wider, then crash zoom in to camera settings)
	// [event CameraZoom FOVDeltaStart, FOVDeltaEnd, Time, OptionalCurve=EaseInOut]

	if (!CameraModifier)
		return false;

	float FovStart, FovEnd, Time;
	ESudsProEaseFunction Ease;
	if (ParseCameraAnimArgs(Dialogue, CameraZoomEventName, Evt, FovStart, FovEnd, Time, Ease))
	{
		CameraModifier->AddFOVChange(FovStart, FovEnd, Time, Ease);
	}
	
	// By default we wait for nothing, use [event WaitCamera] or [event WaitAll] to wait for finish
	return false;
}

bool USudsProExtCameraTools::CameraPanEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt, bool bLocalSpace)
{
	// [event CameraPan DeltaYawStart, DeltaYawEnd, Time, OptionalCurve=EaseInOut]
	// [event CameraPanLocal DeltaYawStart, DeltaYawEnd, Time, OptionalCurve=EaseInOut]

	if (!CameraModifier)
		return false;

	float DeltaStart, DeltaEnd, Time;
	ESudsProEaseFunction Ease;
	if (ParseCameraAnimArgs(Dialogue, CameraPanEventName, Evt, DeltaStart, DeltaEnd, Time, Ease))
	{
		const FRotator RotFrom = FRotator(0, DeltaStart, 0);
		const FRotator RotTo = FRotator(0, DeltaEnd, 0);

		CameraModifier->AddRotation(USudsProCameraModifier::ECameraRotationType::Pan,
		                            RotFrom,
		                            RotTo,
		                            bLocalSpace
			                            ? ESudsProCameraModifierSpace::Local
			                            : ESudsProCameraModifierSpace::Global,
		                            Time,
		                            Ease);
	}
	
	// By default we wait for nothing, use [event WaitCamera] or [event WaitAll] to wait for finish
	return false;
}

bool USudsProExtCameraTools::CameraTiltEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt, bool bLocalSpace)
{
	// [event CameraTilt DeltaPitchStart, DeltaPitchEnd, Time, OptionalCurve=EaseInOut]
	// [event CameraTiltLocal DeltaPitchStart, DeltaPitchEnd, Time, OptionalCurve=EaseInOut]
	
	if (!CameraModifier)
		return false;

	float DeltaStart, DeltaEnd, Time;
	ESudsProEaseFunction Ease;
	if (ParseCameraAnimArgs(Dialogue, CameraTiltEventName, Evt, DeltaStart, DeltaEnd, Time, Ease))
	{
		const FRotator RotFrom = FRotator(DeltaStart, 0, 0);
		const FRotator RotTo = FRotator(DeltaEnd, 0, 0);

		CameraModifier->AddRotation(USudsProCameraModifier::ECameraRotationType::Tilt,
		                            RotFrom,
		                            RotTo,
		                            bLocalSpace
			                            ? ESudsProCameraModifierSpace::Local
			                            : ESudsProCameraModifierSpace::Global,
		                            Time,
		                            Ease);
	}
	
	// By default we wait for nothing, use [event WaitCamera] or [event WaitAll] to wait for finish
	return false;
}

bool USudsProExtCameraTools::CameraRollEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt, bool bLocalSpace)
{
	// [event CameraRoll DeltaPitchStart, DeltaPitchEnd, Time, OptionalCurve=EaseInOut]
	
	if (!CameraModifier)
		return false;

	float DeltaStart, DeltaEnd, Time;
	ESudsProEaseFunction Ease;
	if (ParseCameraAnimArgs(Dialogue, CameraRollEventName, Evt, DeltaStart, DeltaEnd, Time, Ease))
	{
		const FRotator RotFrom = FRotator(0, 0, DeltaStart);
		const FRotator RotTo = FRotator(0, 0, DeltaEnd);

		CameraModifier->AddRotation(USudsProCameraModifier::ECameraRotationType::Roll,RotFrom,
									RotTo,
									bLocalSpace
										? ESudsProCameraModifierSpace::Local
										: ESudsProCameraModifierSpace::Global,
									Time,
									Ease);
	}
	
	// By default we wait for nothing, use [event WaitCamera] or [event WaitAll] to wait for finish
	return false;
}

bool USudsProExtCameraTools::CameraDollyEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	// [event CameraDolly DeltaYStart, DeltaYEnd, Time, OptionalCurve=EaseInOut]	

	if (!CameraModifier)
		return false;
	
	float YStart, YEnd, Time;
	ESudsProEaseFunction Ease;
	if (ParseCameraAnimArgs(Dialogue, CameraDollyEventName, Evt, YStart, YEnd, Time, Ease))
	{
		// Dolly is always in local space
		CameraModifier->AddTranslation(USudsProCameraModifier::ECameraTranslationType::Dolly,
		                               FVector(0, YStart, 0),
		                               FVector(0, YEnd, 0),
		                               ESudsProCameraModifierSpace::Local,
		                               Time,
		                               Ease);
	}
	
	// By default we wait for nothing, use [event WaitCamera] or [event WaitAll] to wait for finish
	return false;
}

bool USudsProExtCameraTools::CameraBoomEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt, bool bLocalSpace)
{
	// Unlike PushInOut/Dolly, Boom is GLOBAL Z by default
	// [event CameraBoom DeltaZStart, DeltaZEnd, Time, OptionalCurve=EaseInOut]
	// [event CameraBoomLocal DeltaZStart, DeltaZEnd, Time, OptionalCurve=EaseInOut]

	if (!CameraModifier)
		return false;
	
	float ZStart, ZEnd, Time;
	ESudsProEaseFunction Ease;
	if (ParseCameraAnimArgs(Dialogue, CameraBoomEventName, Evt, ZStart, ZEnd, Time, Ease))
	{
		CameraModifier->AddTranslation(USudsProCameraModifier::ECameraTranslationType::Boom,
		                               FVector(0, 0, ZStart),
		                               FVector(0, 0, ZEnd),
		                               bLocalSpace
			                               ? ESudsProCameraModifierSpace::Local
			                               : ESudsProCameraModifierSpace::Global,
		                               Time,
		                               Ease);
	}
	
	// By default we wait for nothing, use [event WaitCamera] or [event WaitAll] to wait for finish
	return false;
}
void USudsProExtCameraTools::PerformFade(USUDSDialogue* Dialogue, bool bIsFadeOut, float Time, FLinearColor Colour, bool bAudioFade)
{
	if (auto PC = GetWorld()->GetFirstPlayerController())
	{
		if (IsValid(PC->PlayerCameraManager))
		{
			if (!bIsFadeOut)
			{
				// Apply any default camera cut now before fade-in
				MaybeApplyDefaultCameraCut(Dialogue);
			}

			PC->PlayerCameraManager->StartCameraFade(
				bIsFadeOut ? 0 : 1,
				bIsFadeOut ? 1 : 0,
				Time, Colour, bAudioFade,
				true); // hold at end, we don't want to pop back by default unless told
			LastFadeColour = Colour;
			bLastAudioFade = bAudioFade;
		}
	}
}

void USudsProExtCameraTools::SetManualFade(float Alpha, FLinearColor Colour, bool bAudioFade)
{
	if (auto PC = GetWorld()->GetFirstPlayerController())
	{
		if (IsValid(PC->PlayerCameraManager))
		{
			PC->PlayerCameraManager->SetManualCameraFade(Alpha, Colour, bAudioFade);
		}
	}	
}

bool USudsProExtCameraTools::FadeEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt, bool bIsFadeOut)
{
	// [event FadeIn Time=1, OptionalColour=`Black`, OptionalAlsoAudio=false]

	// Get args
	float Time = 0.5f;
	FLinearColor Colour = FLinearColor::Black;
	bool bAudioFade = false;
	if (Evt.Args.Num() > 0)
	{
		if (Evt.Args[0].IsNumeric())
		{
			Time = Evt.Args[0].GetFloatValue();
		}
		else
		{
			UE_LOG(LogSudsPro, Error, TEXT("%s line %d: first argument to fades should be a number (time)"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
		}
	}
	
	if (Evt.Args.Num() > 1)
	{
		if (Evt.Args[1].GetType() != ESUDSValueType::Name ||
			!ParseColour(Evt.Args[1].GetNameValue(), Colour))
		{
			UE_LOG(LogSudsPro, Error, TEXT("%s line %d: 2nd argument to fades should be the name of a valid colour (eg `Black`)"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
		}
	}
	if (Evt.Args.Num() > 2)
	{
		if (Evt.Args[2].GetType() == ESUDSValueType::Boolean)
		{
			bAudioFade = Evt.Args[2].GetBooleanValue(); 
		}
		else
		{
			UE_LOG(LogSudsPro, Error, TEXT("%s line %d: FadeIn 3rd argument to fades should be a boolean (fade audio)"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
		}
	}

	// Special case a fade in while a fade out is going so we don't need to require a wait in between
	if (IsFadingOut() && !bIsFadeOut)
	{
		bIsFadeInQueued = true;
		QueuedFadeInTime = Time;
		QueuedFadeColour = Colour;
		bQueuedAudioFade = bAudioFade;
		return false;
	}
	else
	{
		PerformFade(Dialogue, bIsFadeOut, Time, Colour, bAudioFade);
	}
	FadeTimeLeft = Time;
	bIsActiveFadeAFadeOut = bIsFadeOut;
	
	// By default we wait for nothing, use [event WaitFade] or [event WaitAll] to wait for finish
	return false;
}

bool USudsProExtCameraTools::IsFadingOut() const
{
	return FadeTimeLeft > 0 && bIsActiveFadeAFadeOut;
}

bool USudsProExtCameraTools::WaitFadeEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	// Wait for the number of seconds left on any fade (but NOT cameras)
	const float Time = FadeTimeLeft;
	if (Time > 0)
	{
		QueueEventCompleted(Time);
		return true;
	}
	return false;
	
}

bool USudsProExtCameraTools::ParseColour(const FName& ColourName, FLinearColor& OutColour)
{
	static const FName BlackName("Black");
	static const FName WhiteName("White");
	static const FName GreyName("Grey");
	static const FName GrayName("Gray");
	static const FName BlueName("Blue");
	static const FName GreenName("Green");
	static const FName RedName("Red");
	static const FName YellowName("Yellow");
	
	if (ColourName == BlackName)
	{
		OutColour = FLinearColor::Black;
		return true;
	}
	else if (ColourName == WhiteName)
	{
		OutColour = FLinearColor::White;
		return true;
	}
	else if (ColourName == GreyName || ColourName == GrayName)
	{
		OutColour = FLinearColor::Gray;
		return true;
	}
	else if (ColourName == RedName)
	{
		OutColour = FLinearColor::Red;
		return true;
	}
	else if (ColourName == GreenName)
	{
		OutColour = FLinearColor::Green;
		return true;
	}
	else if (ColourName == BlueName)
	{
		OutColour = FLinearColor::Blue;
		return true;
	}
	else if (ColourName == YellowName)
	{
		OutColour = FLinearColor::Yellow;
		return true;
	}
	return false;
}

float USudsProExtCameraTools::GetTimeRemaining_Implementation(bool bForEndDialogue)
{
	float Time = ShakeTimeRemaining;
	if (CameraModifier)
	{
		Time = FMath::Max(Time, CameraModifier->GetTimeRemaining());
	}
	Time = FMath::Max(Time, FadeTimeLeft);
	return Time;
}

bool USudsProExtCameraTools::WaitCameraEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	// Wait for the number of seconds left on any camera shakes / animations (but NOT fade)
	float Time = ShakeTimeRemaining;
	if (CameraModifier)
	{
		Time = FMath::Max(Time, CameraModifier->GetTimeRemaining());
	}
	
	if (Time > 0)
	{
		QueueEventCompleted(Time);
		return true;
	}
	return false;
}

