// Copyright Old Doorways Ltd 2023
// All rights  reserved
#pragma once

#include "CoreMinimal.h"
#include "SudsProDialogueExtension.h"
#include "SudsProExtWait.generated.h"

UCLASS(Blueprintable)
class SUDSPRO_API USudsProExtWait : public USudsProDialogueExtension
{
	GENERATED_BODY()

public:
	static const FName WaitAllEventName;
	static const FName WaitSecondsEventName;
	static const FName WaitNotifyEventName;

	virtual void DialogueStarting_Implementation(USUDSDialogue* Dialogue) override;
	virtual bool ProcessDialogueEvent_Implementation(USUDSDialogue* Dialogue,
	                                                 const FSudsProQueuedEvent& Evt) override;

	/**
	 * Send a notification to a waiting dialogue. Dialogue which is awaiting this notification
	 * will then continue.
	 * @param WorldContextObject Required world context object (automatically provided in Blueprints)
	 * @param NotificationName Optional notification name, for if you need to wait on different notifications.
	 */
	UFUNCTION(BlueprintCallable, Category="SudsPro|Waiting", DisplayName="Notify Waiting Dialogue Of Event", meta=(WorldContext="WorldContextObject"))
	static void NotifyWaitingDialogue(const UObject* WorldContextObject, const FName NotificationName = NAME_None);

	static USudsProExtWait* Get(const UObject* WorldContextObject);
protected:

	bool bIsWaitingForNamedNotify;
	FName WaitForNotifyName;
	TMap<FName, int> NotificationsPending;

	bool WaitAllEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	bool WaitSecondsEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	bool WaitNotifyEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	bool ConsumePendingNotification(FName WaitName);
	void NotifyDialogueImpl(FName Name);
};