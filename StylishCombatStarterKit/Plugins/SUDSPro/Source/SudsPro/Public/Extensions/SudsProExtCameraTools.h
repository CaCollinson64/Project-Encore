// Copyright Old Doorways Ltd 2023
// All rights  reserved

#pragma once

#include "CoreMinimal.h"
#include "SudsProDialogueExtension.h"
#include "SudsProMath.h"
#include "Camera/PlayerCameraManager.h"
#include "SudsProExtCameraTools.generated.h"

class UCameraComponent;
class USudsProCameraModifier;
class UCameraShakeBase;

DECLARE_MULTICAST_DELEGATE(FOnCameraFadeOutFinished);
/**
 * Extension which provides support for camera stuff in dialogues
 * 
 */
UCLASS(Blueprintable)
class SUDSPRO_API USudsProExtCameraTools : public USudsProDialogueExtension
{
	GENERATED_BODY()

public:
	virtual void DialogueStarting_Implementation(USUDSDialogue* Dialogue) override;
	virtual void DialogueFinished_Implementation(USUDSDialogue* Dialogue) override;
	virtual bool ProcessDialogueEvent_Implementation(USUDSDialogue* Dialogue,
	                                                 const FSudsProQueuedEvent& Evt) override;
	virtual bool PreDialogueSpeakerLineShown_Implementation(USUDSDialogue* Dialogue) override;
	virtual float GetTimeRemaining_Implementation(bool bForEndDialogue) override;
	virtual void Tick_Implementation(float DeltaTime) override;
	bool IsFadingOut() const;
	void SetSuppressDefaultCameraCuts(bool bSuppress) { bSuppressDefaultCameraCuts = bSuppress; }
	
	static const FName CameraCutEventName;
	static const FName CameraTransitionEventName;
	static const FName CameraShakeEventName;
	static const FName StopCameraShakeEventName;
	static const FName CameraPushInOutEventName;
	static const FName CameraZoomEventName;
	static const FName CameraPanEventName;
	static const FName CameraPanLocalEventName;
	static const FName CameraTiltEventName;
	static const FName CameraRollEventName;
	static const FName CameraDollyEventName;
	static const FName CameraBoomEventName;
	static const FName CameraBoomLocalEventName;
	static const FName WaitCameraEventName;
	static const FName FadeOutEventName;
	static const FName FadeInEventName;
	static const FName WaitFadeEventName;
	static const FName KeepCameraShotVarName;
	static const FName CameraEnterSmoothVarName;
	static const FName CameraExitSmoothVarName;
	static const FName CameraDefaultShotCutsDisabledVarName;
	static const float DefaultTransitionSmoothTime;

	FOnCameraFadeOutFinished OnFadeOutFinished;
	
protected:
	static const FString DefaultCameraShotPrefix;
	TWeakObjectPtr<USUDSDialogue> CurrentDialogue;

	// Map of speaker ID to shot name
	TMap<FString, FName> DefaultCameraShots;
	bool bExplicitCut = false;
	bool bAppliedDefaultCameraCut = false;
	bool bIsFirstCut = true;
	float ShakeTimeRemaining = 0;
	UPROPERTY()
	AActor* OriginalViewTarget = nullptr;
	UPROPERTY()
	USudsProCameraModifier* CameraModifier;
	TWeakObjectPtr<UCameraShakeBase> CurrentCameraShake;

	float FadeTimeLeft;
	bool bIsActiveFadeAFadeOut;

	// To allow easy fade out/in chaining
	bool bIsFadeInQueued = false;
	float QueuedFadeInTime;
	FLinearColor QueuedFadeColour;
	bool bQueuedAudioFade = false;;
	FLinearColor LastFadeColour = FLinearColor::Black;
	bool bLastAudioFade = false;
	bool bSuppressDefaultCameraCuts = false;

	UFUNCTION()
	void OnVariableChanged(class USUDSDialogue* Dialogue, FName VariableName, const FSUDSValue& Value, bool bFromScript);
	void ExtractDefaultCameraShotFromVar(const USUDSDialogue* Dialogue, const FString& KeyStr, const FSUDSValue& Value, int SourceLine);
	bool MaybeApplyDefaultCameraCut(USUDSDialogue* Dialogue);
	void ApplyDefaultCameraCut(USUDSDialogue* Dialogue);
	void PerformCameraCut(USUDSDialogue* Dialogue, FName ShotName, bool bSmooth, float SmoothTime = 0.5f, EViewTargetBlendFunction Blend = VTBlend_EaseInOut, float
	                      BlendExp = 3);
	void PerformCameraCutToTarget(AActor* Target, bool bSmooth, float SmoothTime = 0.5f, EViewTargetBlendFunction Blend = VTBlend_EaseInOut, float
	                              BlendExp = 3);
	bool PerformCameraShake(TSubclassOf<UCameraShakeBase> ShakeClass, float Scale);
	AActor* FindCameraForShot(USUDSDialogue* Dialogue, FName ShotName);
	void PerformFade(USUDSDialogue* Dialogue, bool bIsFadeOut, float Time, FLinearColor Colour, bool bAudioFade);
	void SetManualFade(float Alpha, FLinearColor Colour, bool bAudioFade);
	bool IsFadedOut() const;
	bool ShouldHardCutInToDialogue(const USUDSDialogue* Dialogue) const;
	bool ShouldHardCutOutOfDialogue(const USUDSDialogue* Dialogue) const;

	bool CameraCutEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	bool CameraTransitionEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	bool CameraShakeEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	bool StopCameraShakeEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	bool CameraPushInOutEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	bool CameraZoomEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	bool CameraPanEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt, bool bLocalSpace);
	bool CameraTiltEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt, bool bLocalSpace);
	bool CameraRollEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt, bool bLocalSpace);
	bool CameraDollyEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	bool CameraBoomEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt, bool bLocalSpace);
	bool FadeEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt, bool bIsFadeOut);
	bool WaitFadeEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	bool WaitCameraEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	static ESudsProEaseFunction ParseEaseArg(const USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt, int ArgIdx);
	static bool ParseCameraAnimArgs(const USUDSDialogue* Dialogue,
	                                  const FName& Context,
	                                  const FSudsProQueuedEvent& Evt,
	                                  float& OutStart,
	                                  float& OutEnd,
	                                  float& OutTime,
	                                  ESudsProEaseFunction& Ease);
	AActor* GetCurrentViewTarget() const;
	UCameraComponent* GetCurrentCamera() const;
	UCameraComponent* GetCameraComponentFromActor(const AActor* Actor) const;
	bool ParseColour(const FName& ColourName, FLinearColor& OutColour);
	
	
};
