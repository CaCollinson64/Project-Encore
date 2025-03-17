// Copyright Old Doorways Ltd 2024
// All rights  reserved

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SudsProQueuedEventHandler.generated.h"

class USUDSDialogue;

// This class does not need to be modified.
UINTERFACE()
class USudsProQueuedEventHandler : public UInterface
{
	GENERATED_BODY()
};

/**
 * Interface that Participants in dialogues can additionally implement to receive QUEUED dialogue
 * events from the SUDS Pro event queue. Dialogue events are usually received by participants immediately,
 * as soon as they enter scope between speaker lines - any "wait" events make no difference. Sometimes
 * this is what you want, but other times you'd like to sync your own custom events to the other SUDS Pro
 * events which DO respect waits (this is a nuance of the fact that SUDS Pro is built on top of SUDS,
 * where all events are immediate).
 *
 * If you implement this interface, OnQueuedDialogueEvent will be called only once all waits have
 * been resolved. Note that OnDialogueEvent from the regular ISudsParticipant interface will still
 * be called immediately *as well*.
 *
 * Alternatively you could implement your own USudsProDialogueExtension, which could be a better option
 * for more complex cases and always get queued events. But for a simpler option, implement this interface
 * on your participant.
 * 
 */
class SUDSPRO_API ISudsProQueuedEventHandler
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	/**
	 * Called when a queued event from dialogue is due to be delivered, respecting "wait" events in
	 * the dialogue. This differs from the regular ISudsParticipant which calls OnDialogueEvent
	 * immediately that the event enters scope between speaker lines. 
	 * @param Dialogue The dialogue instance
	 * @param EventName The name of the event that has been raised
	 * @param Arguments List of arguments
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="SudsPro|Events")
	void OnQueuedDialogueEvent(USUDSDialogue* Dialogue, FName EventName, const TArray<FSUDSValue>& Arguments);
};
