// Copyright Old Doorways Ltd 2023
// All rights  reserved
#include "Extensions/SudsProExtCharacterTools.h"
#include "SudsProCommon.h"
#include "SUDSDialogue.h"
#include "SudsProSubsystem.h"
#include "SUDSScript.h"
#include "Extensions/SudsProCharacter.h"
#include "Extensions/SudsProExtCameraTools.h"
#include "Extensions/SudsProMarkProvider.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GameFramework/Pawn.h"
#include "Animation/AnimMontage.h"
#include "Animation/AnimSequenceBase.h"
#include "Animation/AnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "Extensions/SudsProAnimationProvider.h"

const FName USudsProExtCharacterTools::CharacterMoveEventName("CharacterMove");
const FName USudsProExtCharacterTools::CharacterAnimEventName("CharacterAnim");
const FName USudsProExtCharacterTools::CharacterAnimStopEventName("CharacterAnimStop");
const FName USudsProExtCharacterTools::CharacterNotifyEventName("CharacterNotify");
const FName USudsProExtCharacterTools::CharacterPropSetEventName("CharacterPropSet");
const FName USudsProExtCharacterTools::WaitCharacterEventName("WaitCharacter");
const FName USudsProExtCharacterTools::CharacterMoveWhileFadingVarName("CharacterMoveWhileFading");

const FName USudsProExtCharacterTools::AnimDefaultSlotName("DefaultSlot"); // default slot on Mannequins

void USudsProExtCharacterTools::DialogueStarting_Implementation(USUDSDialogue* Dialogue)
{
	// we need notification when the camera tools fade out finishes
	CameraTools = GetSudsPro(GetWorld())->FindExtension<USudsProExtCameraTools>();
	if (CameraTools.IsValid())
	{
		CameraTools->OnFadeOutFinished.AddUObject(this, &USudsProExtCharacterTools::OnFadeOutFinished);
	}
	CharacterAnimTimeLeft.Empty();
}

void USudsProExtCharacterTools::DialogueFinished_Implementation(USUDSDialogue* Dialogue)
{
	if (CameraTools.IsValid())
	{
		CameraTools->OnFadeOutFinished.RemoveAll(this);
		CameraTools.Reset();
	}

	// We don't cancel animations left running here; user might want them to spill over and can use CharacterAnimStop if not.
	
}

bool USudsProExtCharacterTools::ProcessDialogueEvent_Implementation(USUDSDialogue* Dialogue,
                                                                    const FSudsProQueuedEvent& Evt)
{

	if (Evt.Name == CharacterMoveEventName)
	{
		return CharacterMoveEvent(Dialogue, Evt);
	}
	else if (Evt.Name == CharacterAnimEventName)
	{
		return CharacterAnimEvent(Dialogue, Evt);
	}
	else if (Evt.Name == CharacterAnimStopEventName)
	{
		return CharacterAnimStopEvent(Dialogue, Evt);
	}
	else if (Evt.Name == CharacterNotifyEventName)
	{
		return CharacterNotifyEvent(Dialogue, Evt);
	}
	else if (Evt.Name == CharacterPropSetEventName)
	{
		return CharacterPropSetEvent(Dialogue, Evt);
	}
	else if (Evt.Name == WaitCharacterEventName)
	{
		return WaitCharacterEvent(Dialogue, Evt);
	}
	
	return false;
}

bool USudsProExtCharacterTools::CharacterMoveEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	// [event CharacterMove `CharacterName`, `MarkName`]

	if (Evt.Args.Num() < 2)
	{
		UE_LOG(LogSudsPro, Error, TEXT("%s line %d: CharacterMove requires 2 arguments"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
		return false;
	}
	if (Evt.Args[0].GetType() != ESUDSValueType::Name ||
		Evt.Args[1].GetType() != ESUDSValueType::Name)
	{
		UE_LOG(LogSudsPro, Error, TEXT("%s line %d: CharacterMove arguments must be Names (`backticks`)"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
		return false;
	}

	const FName CharacterName = Evt.Args[0].GetNameValue();
	if (AActor* Char = FindCharacterChecked(Dialogue, CharacterName, Evt))
	{
		const FName MarkName = Evt.Args[1].GetNameValue();
		FVector DestLocation;
		FRotator DestRotation;
		if (!FindMark(Dialogue, MarkName, DestLocation, DestRotation))
		{
			UE_LOG(LogSudsPro, Error, TEXT("%s line %d: cannot find a mark named %s"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo, *MarkName.ToString());
			return false;
		}

		if (!ISudsProCharacter::Execute_PreDialogueMoveCharacter(Char, DestLocation, DestRotation))
		{
			// Returning false from this method means the character doesn't want to move itself, we do it
			// However, if we're fading out, queue teleport until fully faded
			if (CameraTools.IsValid() && CameraTools->IsFadingOut() &&
				!Dialogue->GetVariableBoolean(CharacterMoveWhileFadingVarName)) // overrides this wait behaviour
			{
				QueuedMoves.Add(FSudsProQueuedCharacterMove(Char, DestLocation, DestRotation));
				// Fade out completion will trigger the actual move
			}
			else
			{
				PerformMove(Char, DestLocation, DestRotation);
				ISudsProCharacter::Execute_PostDialogueMoveCharacter(Char);
			}
	
		}
	}
	
	// By default we wait for nothing, use [event WaitCharacter] or [event WaitAll] to wait for finish
	return false;
}

void USudsProExtCharacterTools::OnFadeOutFinished()
{
	for (auto QM : QueuedMoves)
	{
		if (IsValid(QM.Actor))
		{
			PerformMove(QM.Actor, QM.Location, QM.Rotation);
			ISudsProCharacter::Execute_PostDialogueMoveCharacter(QM.Actor);
		}
	}
	QueuedMoves.Empty();	
}

void USudsProExtCharacterTools::PerformMove(AActor* Actor, const FVector& Location, const FRotator& Rotation)
{
	Actor->TeleportTo(Location, Rotation, false, true);
	if (auto Pawn = Cast<APawn>(Actor))
	{
		auto MC = Pawn->GetMovementComponent();
		MC->StopMovementImmediately();
	}
}

UAnimSequenceBase* USudsProExtCharacterTools::FindCharacterAnimation(USUDSDialogue* Dialogue, AActor* Character, const FName& CharName, const FName& AnimName)
{
	// Prefer character
	if (auto Anim = ISudsProCharacter::Execute_GetDialogueAnimation(Character, AnimName))
	{
		return Anim;
	}

	// Fallback to ISudsProAnimationProvider
	for (auto P : Dialogue->GetParticipants())
	{
		if (IsValid(P) && P->Implements<USudsProAnimationProvider>())
		{
			if (auto Anim = ISudsProAnimationProvider::Execute_GetDialogueCharacterAnimation(P, CharName, AnimName))
			{
				return Anim;
			}
		}
	}
	return nullptr;
}


bool USudsProExtCharacterTools::CharacterAnimEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	// [event CharacterAnim `CharacterName`, `AnimationName`, OptionalLoops=1, OptionalSlot=`DefaultSlot`]
	
	if (Evt.Args.Num() < 2)
	{
		UE_LOG(LogSudsPro, Error, TEXT("%s line %d: CharacterAnim requires 2 arguments"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
		return false;
	}
	if (Evt.Args[0].GetType() != ESUDSValueType::Name ||
		Evt.Args[1].GetType() != ESUDSValueType::Name)
	{
		UE_LOG(LogSudsPro, Error, TEXT("%s line %d: CharacterAnim arguments must be Names (`backticks`)"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
		return false;
	}

	const FName CharacterName = Evt.Args[0].GetNameValue();
	if (AActor* Char = FindCharacterChecked(Dialogue, CharacterName, Evt))
	{
		const FName AnimName = Evt.Args[1].GetNameValue();
		if (USkeletalMeshComponent* SkelComp = GetSkeletalMeshComponentChecked(Dialogue, Char, AnimName, Evt))
		{
			if (auto Anim = FindCharacterAnimation(Dialogue, Char, CharacterName, AnimName))
			{
				int Loops = 1;
				float BlendInTime = 0.25f;
				float BlendOutTime = 0.25f;
				float PlayRate = 1;
				
				if (auto Montage = Cast<UAnimMontage>(Anim))
				{
					// This is a montage, slots & looping are defined in the montage itself
					SkelComp->GetAnimInstance()->Montage_Play(Montage);
				}
				else
				{
					if (Evt.Args.Num() > 2 && Evt.Args[2].IsNumeric())
					{
						Loops = Evt.Args[2].GetIntValue();
					}
					FName SlotName = AnimDefaultSlotName;
					if (Evt.Args.Num() > 3 && Evt.Args[3].GetType() == ESUDSValueType::Name)
					{
						SlotName = Evt.Args[3].GetNameValue();
					}
					if (Evt.Args.Num() > 4 && Evt.Args[4].IsNumeric())
					{
						BlendInTime = Evt.Args[4].GetFloatValue();
					}
					if (Evt.Args.Num() > 5 && Evt.Args[5].IsNumeric())
					{
						BlendOutTime = Evt.Args[5].GetFloatValue();
					}
					if (Evt.Args.Num() > 6 && Evt.Args[6].IsNumeric())
					{
						PlayRate = Evt.Args[6].GetFloatValue();
					}
					// Just an animation sequence, play via dynamic montage
					// Use defaults for blend in/out, not exposed right now
					SkelComp->GetAnimInstance()->PlaySlotAnimationAsDynamicMontage(Anim, SlotName, BlendInTime, BlendOutTime, PlayRate, Loops);
				}
				const float AnimTime = Anim->GetPlayLength() * Loops;
				// Since we can now play more than one anim at once if different skeletons (face, body)
				if (auto pTimeLeft = CharacterAnimTimeLeft.Find(CharacterName))
				{
					*pTimeLeft = FMath::Max(*pTimeLeft, AnimTime);
				}
				else
				{
					CharacterAnimTimeLeft.Add(CharacterName, AnimTime);
				}
			}
			else
			{
				UE_LOG(LogSudsPro,
					   Error,
					   TEXT("%s line %d: cannot find animation `%s` for character `%s`"),
					   *Dialogue->GetScript()->GetName(),
					   Evt.SourceLineNo,
					   *AnimName.ToString(),
					   *CharacterName.ToString());
			}
		}
	}	
	
	return false;
}

bool USudsProExtCharacterTools::CharacterAnimStopEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	// [event CharacterAnimStop `CharacterName`, `OptionalAnimName`]

	if (Evt.Args.Num() < 1)
	{
		UE_LOG(LogSudsPro, Error, TEXT("%s line %d: CharacterAnimStop requires 1 argument"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
		return false;
	}
	if (Evt.Args[0].GetType() != ESUDSValueType::Name)
	{
		UE_LOG(LogSudsPro, Error, TEXT("%s line %d: CharacterAnimStop argument must be a Name (`backticks`)"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
		return false;
	}
	FName AnimName = NAME_None;
	
	if (Evt.Args.Num() > 1)
	{
		if (Evt.Args[1].GetType() == ESUDSValueType::Name)
		{
			AnimName = Evt.Args[1].GetNameValue();
		}
		else
		{
			UE_LOG(LogSudsPro, Error, TEXT("%s line %d: CharacterAnimStop argument must be a Name (`backticks`)"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
			// Continue anyway
		}
	}

	const FName CharacterName = Evt.Args[0].GetNameValue();
	if (AActor* Char = FindCharacterChecked(Dialogue, CharacterName, Evt))
	{
		if (USkeletalMeshComponent* SkelComp = GetSkeletalMeshComponentChecked(Dialogue, Char, AnimName, Evt))
		{
			// We stop ALL slot montages for simplicity. Realistically while in dialogue there shouldn't be any fighting 
			SkelComp->GetAnimInstance()->StopSlotAnimation();
		}
	}

	CharacterAnimTimeLeft.Remove(CharacterName);

	return false;
}

bool USudsProExtCharacterTools::CharacterNotifyEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	// [event CharacterNotify `CharacterName`, `NotificationName`, Args...]
	if (Evt.Args.Num() < 2)
	{
		UE_LOG(LogSudsPro, Error, TEXT("%s line %d: CharacterNotify requires 2 arguments"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
		return false;
	}
	if (Evt.Args[0].GetType() != ESUDSValueType::Name ||
		Evt.Args[1].GetType() != ESUDSValueType::Name)
	{
		UE_LOG(LogSudsPro, Error, TEXT("%s line %d: CharacterNotify arguments must be Names (`backticks`)"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
		return false;
	}

	const FName CharacterName = Evt.Args[0].GetNameValue();
	if (AActor* Char = FindCharacterChecked(Dialogue, CharacterName, Evt))
	{
		const FName NotifyName = Evt.Args[1].GetNameValue();
		TArray<FSUDSValue> NotifyArgs;
		for (int i = 2; i < Evt.Args.Num(); ++i)
		{
			NotifyArgs.Add(Evt.Args[i]);
		}
		// If this returns true, then the character must call USudsProSubsystem::CharacterNotifyComplete
		return ISudsProCharacter::Execute_OnDialogueNotify(Char, NotifyName, NotifyArgs);
	}
	
	return false;
}

bool USudsProExtCharacterTools::WaitCharacterEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	// [event WaitCharacter `CharacterName`]
	if (Evt.Args.Num() < 1 || Evt.Args[0].GetType() != ESUDSValueType::Name)
	{
		UE_LOG(LogSudsPro, Error, TEXT("%s line %d: WaitCharacter requires a character name argument (backticks"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
		return false;
	}

	
	float Time = 0;
	FName CharacterName = Evt.Args[0].GetNameValue();
	if (float* pT = CharacterAnimTimeLeft.Find(CharacterName))
	{
		Time = *pT;
	}
	// Ignore lack of character entry, could have been removed due to expiry
	
	if (Time > 0)
	{
		QueueEventCompleted(Time);
		return true;
	}

	return false;
}

bool USudsProExtCharacterTools::CharacterPropSetEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	// [event CharacterPropSet `CharacterName`, `PropertyName`, Value]
	if (Evt.Args.Num() < 3)
	{
		UE_LOG(LogSudsPro, Error, TEXT("%s line %d: CharacterPropSet requires 3 arguments"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
		return false;
	}
	if (Evt.Args[0].GetType() != ESUDSValueType::Name ||
		Evt.Args[1].GetType() != ESUDSValueType::Name)
	{
		UE_LOG(LogSudsPro, Error, TEXT("%s line %d: CharacterPropSet first 2 arguments must be Names (`backticks`)"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo);
		return false;
	}
	
	const FName CharacterName = Evt.Args[0].GetNameValue();
	if (AActor* Char = FindCharacterChecked(Dialogue, CharacterName, Evt))
	{
		const FName PropName = Evt.Args[1].GetNameValue();
		const FSUDSValue Value = Evt.Args[2];

		// Try to find property
		if (auto Prop = FindProperty(Char, PropName))
		{
			SetPropertyValue(Char, Prop, Value, Dialogue, Evt);
		}
		else
		{
			UE_LOG(LogSudsPro, Error, TEXT("%s line %d: CharacterPropSet property `%s` was not found on object %s"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo, *PropName.ToString(), *Char->GetName());
		}
		
	}
	return false;
	
}

FProperty* USudsProExtCharacterTools::FindProperty(UObject* Obj, const FName& PropName)
{
	const FString PropNameStr = PropName.ToString();
	for (TFieldIterator<FProperty>PIT(Obj->GetClass(), EFieldIteratorFlags::IncludeSuper); PIT; ++PIT)
	{
		// Note: we only support top-level properties
		if (PIT->GetNameCPP().Compare(PropNameStr, ESearchCase::IgnoreCase) == 0)
		{
			return *PIT;
		}
	}

	return nullptr;
}

void USudsProExtCharacterTools::SetPropertyValue(UObject* Obj, FProperty* Prop, const FSUDSValue& Value, USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt)
{
	void* DataPtr = Prop->ContainerPtrToValuePtr<void>(Obj);

	if (const auto TProp = CastField<FTextProperty>(Prop))
	{
		if (Value.GetType() == ESUDSValueType::Text)
		{
			TProp->SetPropertyValue(DataPtr, Value.GetTextValue());
		}
		else
		{
			TProp->SetPropertyValue(DataPtr, FText::FromString(Value.ToString()));
		}
	}
	else if (const auto StrProp = CastField<FStrProperty>(Prop))
	{
		StrProp->SetPropertyValue(DataPtr, Value.ToString());
	}
	else if (const auto IntProp = CastField<FIntProperty>(Prop))
	{
		if (Value.GetType() == ESUDSValueType::Int)
		{
			IntProp->SetPropertyValue(DataPtr, Value.GetIntValue());
		}
		// Allow narrowing of floats, in case using a variable to set
		else if (Value.GetType() == ESUDSValueType::Float)
		{
			IntProp->SetPropertyValue(DataPtr, static_cast<int>(Value.GetFloatValue()));
		}
		else
		{
			UE_LOG(LogSudsPro,
				   Error,
				   TEXT("%s line %d: Tried to set Int property %s using a value of type %s"),
				   *Dialogue->GetScript()->GetName(),
				   Evt.SourceLineNo,
				   *Prop->GetNameCPP(),
				   *StaticEnum<ESUDSValueType>()->GetValueAsString(Value.GetType()));
		}
	}
	else if (const auto FloatProp = CastField<FFloatProperty>(Prop))
	{
		// Floats can be expanded from any numeric
		if (Value.IsNumeric())
		{
			FloatProp->SetPropertyValue(DataPtr, Value.GetFloatValue());
		}
		else
		{
			UE_LOG(LogSudsPro,
				   Error,
				   TEXT("%s line %d: Tried to set Float property %s using a value of type %s"),
				   *Dialogue->GetScript()->GetName(),
				   Evt.SourceLineNo,
				   *Prop->GetNameCPP(),
				   *StaticEnum<ESUDSValueType>()->GetValueAsString(Value.GetType()));
		}
	}
	else if (const auto BProp = CastField<FBoolProperty>(Prop))
	{
		if (Value.GetType() == ESUDSValueType::Boolean)
		{
			BProp->SetPropertyValue(DataPtr, Value.GetBooleanValue());
		}
		else
		{
			UE_LOG(LogSudsPro,
				   Error,
				   TEXT("%s line %d: Tried to set Boolean property %s using a value of type %s"),
				   *Dialogue->GetScript()->GetName(),
				   Evt.SourceLineNo,
				   *Prop->GetNameCPP(),
				   *StaticEnum<ESUDSValueType>()->GetValueAsString(Value.GetType()));
		}
	}
	else if (const auto NProp = CastField<FNameProperty>(Prop))
	{
		if (Value.GetType() == ESUDSValueType::Name)
		{
			NProp->SetPropertyValue(DataPtr, Value.GetNameValue());
		}
		else
		{
			UE_LOG(LogSudsPro,
				   Error,
				   TEXT("%s line %d: Tried to set Name property %s using a value of type %s"),
				   *Dialogue->GetScript()->GetName(),
				   Evt.SourceLineNo,
				   *Prop->GetNameCPP(),
				   *StaticEnum<ESUDSValueType>()->GetValueAsString(Value.GetType()));
		}
	}
	else
	{
		UE_LOG(LogSudsPro,
			   Error,
			   TEXT("%s line %d: Tried to set unsupported property %s using a value of type %s"),
			   *Dialogue->GetScript()->GetName(),
			   Evt.SourceLineNo,
			   *Prop->GetNameCPP(),
			   *StaticEnum<ESUDSValueType>()->GetValueAsString(Value.GetType()));
		
	}
}

float USudsProExtCharacterTools::GetTimeRemaining_Implementation(bool bForEndDialogue)
{
	if (bForEndDialogue)
	{
		// Character animations should not delay dialogue ending
		return 0;
	}
	
	return GetMaxAnimTimeLeft();
}

void USudsProExtCharacterTools::Tick_Implementation(float DeltaTime)
{
	// Tick down character anim times
	for (auto It = CharacterAnimTimeLeft.CreateIterator(); It; ++It)
	{
		const float NewT = FMath::Max(0, It.Value() - DeltaTime);
		if (NewT == 0)
		{
			It.RemoveCurrent();
		}
		else
		{
			It.Value() = NewT;
		}
	}
}

float USudsProExtCharacterTools::GetMaxAnimTimeLeft() const
{
	float MaxTime = 0;
	for (auto Pair : CharacterAnimTimeLeft)
	{
		MaxTime = FMath::Max(MaxTime, Pair.Value);
	}
	return MaxTime;
}

AActor* USudsProExtCharacterTools::FindCharacter(USUDSDialogue* Dialogue, FName Name)
{
	for (auto P : Dialogue->GetParticipants())
	{
		if (IsValid(P) && P->Implements<USudsProCharacter>())
		{
			FName CharacterID = ISudsProCharacter::Execute_GetDialogueCharacterIdentifier(P);
#if WITH_EDITOR
			if (CharacterID.IsNone())
			{
				UE_LOG(LogSudsPro, Warning, TEXT("Warning: character %s is not returning a valid ID from GetDialogueCharacterIdentifier, you probably need to fix this"), *P->GetClass()->GetClassPathName().ToString());
			}
#endif
			if (Name == CharacterID)
			{
				AActor* RetActor = Cast<AActor>(P);
				checkf(RetActor, TEXT("%s: Implementation of ISudsProCharacter must be an actor"), *P->GetName());
				return RetActor;
			}
		}
	}
	
	return nullptr;
}

AActor* USudsProExtCharacterTools::FindCharacterChecked(USUDSDialogue* Dialogue, FName Name, const FSudsProQueuedEvent& Evt)
{
	AActor* Ret = FindCharacter(Dialogue, Name);
	if (!Ret)
	{
		UE_LOG(LogSudsPro, Error, TEXT("%s line %d: cannot find a character named %s"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo, *Name.ToString());
	}
	return Ret;
}

bool USudsProExtCharacterTools::FindMark(USUDSDialogue* Dialogue,
                                         FName Name,
                                         FVector& OutLocation,
                                         FRotator& OutRotator)
{
	FVector TempLoc;
	FRotator TempRot;
	for (auto P : Dialogue->GetParticipants())
	{
		if (IsValid(P) && P->Implements<USudsProMarkProvider>())
		{
			if (ISudsProMarkProvider::Execute_GetDialogueMark(P, Name, TempLoc, TempRot))
			{
				OutLocation = TempLoc;
				OutRotator = TempRot;
				return true;
			}
		}
	}
	return false;
}

USkeletalMeshComponent* USudsProExtCharacterTools::GetSkeletalMeshComponentChecked(USUDSDialogue* Dialogue, AActor* Char, const FName& AnimName, const FSudsProQueuedEvent& Evt)
{

	// First, give the character the option to specify a skeletal mesh component
	if (Char->Implements<USudsProCharacter>())
	{
		if (auto CharSkel = ISudsProCharacter::Execute_GetDialogueSkeleton(Char, AnimName))
		{
			return CharSkel;
		}
	}
	
	auto DefaultSkel = Char->FindComponentByClass<USkeletalMeshComponent>();
	if (!DefaultSkel)
	{
		UE_LOG(LogSudsPro, Error, TEXT("%s line %d: cannot find a skeletal mesh component on actor %s"), *Dialogue->GetScript()->GetName(), Evt.SourceLineNo, *Char->GetName());
	}
	return DefaultSkel;
}
