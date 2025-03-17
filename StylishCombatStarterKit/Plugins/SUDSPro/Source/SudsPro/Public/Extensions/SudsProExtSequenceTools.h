// Copyright Old Doorways Ltd 2023
// All rights  reserved

#pragma once

#include "CoreMinimal.h"
#include "SudsProDialogueExtension.h"
#include "Engine/TimerHandle.h"
#include "SudsProExtSequenceTools.generated.h"

class ULevelSequence;
class ALevelSequenceActor;

UCLASS(Blueprintable)
class SUDSPRO_API USudsProExtSequenceTools : public USudsProDialogueExtension
{
	GENERATED_BODY()

public:
	virtual bool ProcessDialogueEvent_Implementation(USUDSDialogue* Dialogue,
												 const FSudsProQueuedEvent& Evt) override;
	virtual void DialogueFinished_Implementation(USUDSDialogue* Dialogue) override;
	virtual bool PreDialogueSpeakerLineShown_Implementation(USUDSDialogue* Dialogue) override;

	virtual void Tick_Implementation(float DeltaTime) override;

	static const FName SequenceStartEventName;
	static const FName SequenceResumeEventName;
	static const FName WaitSequenceEndEventName;
	static const FName WaitSequenceNotifyEventName;

	
	/**
	 * Send a notification to dialogue that an event has occurred. Dialogue which is waiting on this notification
	 * will then continue.
	 * @param WorldContextObject Required world context object (automatically provided in Blueprints)
	 * @param NotificationName Optional notification name, for if you need to wait on different notifications.
	 */
	UFUNCTION(BlueprintCallable, Category="SudsPro|Sequence", DisplayName="Notify Dialogue Of Sequence Event", meta=(WorldContext="WorldContextObject"))
	static void NotifyFromSequence(const UObject* WorldContextObject, const FName NotificationName = NAME_None);

	/**
	 * Pause a level sequence being played by dialogue. 
	 * @param WorldContextObject Required world context object (automatically provided in Blueprints)
	 */
	UFUNCTION(BlueprintCallable, Category="SudsPro|Sequence", DisplayName="Pause Dialogue Sequence", meta=(WorldContext="WorldContextObject"))
	static void PauseSequence(const UObject* WorldContextObject);

	/**
	 * Cancel a level sequence being played by dialogue. Useful for cancelling cutscenes.
	 * @param WorldContextObject Required world context object (automatically provided in Blueprints)
	 */
	UFUNCTION(BlueprintCallable, Category="SudsPro|Sequence", DisplayName="Cancel Dialogue Sequence", meta=(WorldContext="WorldContextObject"))
	static void CancelSequence(const UObject* WorldContextObject);

	/**
	 * Return whether a level sequence is currently active; which means either playing, or paused but not at the end.
	 * @param WorldContextObject Required world context object (automatically provided in Blueprints)
	 */
	UFUNCTION(BlueprintCallable, Category="SudsPro|Sequence", DisplayName="Is Dialogue Sequence Active", meta=(WorldContext="WorldContextObject"))
	static bool IsSequenceActive(const UObject* WorldContextObject);

	static USudsProExtSequenceTools* Get(const UObject* WorldContextObject);

protected:

	FTimerHandle DestroySequenceTimer;
	UPROPERTY()
	ALevelSequenceActor* SequenceActor;
	bool bIsSequencePaused;
	bool bIsSequenceEnded;
	bool bIsWaitingForEnd;
	bool bIsWaitingForNamedNotify;
	FName WaitForNotifyName;
	TMap<FName, int> NotificationsPending;
	bool bDestroyActorScheduled;
	float CameraTransitionTimeLeft;
	int QueuedResumeCount;

	bool SequenceStartEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	bool SequenceResumeEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	bool WaitSequenceEndEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	bool ConsumePendingNotification(FName Name);
	bool WaitSequenceNotifyEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	bool CameraTransitionEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	void NotifyFromSequenceImpl(const FName NotificationName);
	void CancelSequenceImpl();
	bool IsSequenceActiveImpl();
	void PauseSequenceImpl();
	ULevelSequence* FindSequence(const USUDSDialogue* Dialogue, FName SequenceName, bool& OutHasTransform, AActor*& OverrideTransformActor, FTransform& OutTransform);
	void CreateSequencePlayer(ULevelSequence* Sequence, bool bHidePlayer);
	void SuppressDefaultCameraCuts(bool bSuppress);
	void ScheduleSequenceActorDestroy();
	void CheckSequenceActorDestroy();

	UFUNCTION()
	void OnSequenceFinished();

};
