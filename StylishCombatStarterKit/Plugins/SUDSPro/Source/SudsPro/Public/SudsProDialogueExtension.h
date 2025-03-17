// Copyright Old Doorways Ltd 2023
// All rights  reserved

#pragma once

#include "CoreMinimal.h"
#include "SUDSValue.h"
#include "SudsProDialogueExtension.generated.h"


USTRUCT(BlueprintType)
struct FSudsProQueuedEvent
{
	GENERATED_BODY()

public:
	/// The event name
	UPROPERTY(BlueprintReadOnly, Category="SudsPro")
	FName Name;
	/// The event arguments
	UPROPERTY(BlueprintReadOnly, Category="SudsPro")
	TArray<FSUDSValue> Args;
	/// The source line number the event has come from
	UPROPERTY(BlueprintReadOnly, Category="SudsPro")
	int SourceLineNo;

	FSudsProQueuedEvent(const FName& InName, const TArray<FSUDSValue> InArgs, int InSourceLine)
		: Name(InName), Args(InArgs), SourceLineNo(InSourceLine) {}
	
	FSudsProQueuedEvent(): SourceLineNo(0)
	{
	}
};

class USUDSDialogue;

/// Base class for dialogue processing extension that can perform custom actions in between dialogue lines
/// These can be queued via dialogue script events so that we can perform fades, move characters, trigger sequences etc
/// Each extension can provide multiple custom events
UCLASS(Blueprintable, BlueprintType)
class SUDSPRO_API USudsProDialogueExtension : public UObject
{
	GENERATED_BODY()

public:

	/// Notification that dialogue is starting
	UFUNCTION(BlueprintNativeEvent)
	void DialogueStarting(USUDSDialogue* Dialogue);
	
	/// Notification that dialogue has finished
	UFUNCTION(BlueprintNativeEvent)
	void DialogueFinished(USUDSDialogue* Dialogue);
	
	/**
	 * Possibly act on a queued event.
	 * Every extension will be given the opportunity to act on events which occur between speaker lines. These events
	 * will be queued up and issued to extensions just before the speaker line they precede. This implementation can
	 * be asynchronous, but if it is it must return true, and call USudsProSubsystem's EventCompleted() when done.
	 * All extensions get to process an event simultaneously, and any number of them can be async. 
	 * @param Dialogue The dialogue being executed
	 * @return Whether this event is performing asynchronous actions in response to this event, AND subsequent events /
	 *   speaker lines should not execute until it's finished. If true, you must EventCompleted() on USudsProSubsystem when done.
	 *   Note: you can still do async actions and NOT make anything wait by default by returning false from this call.
	 *   You could then have a different event which caused an optional wait.
	 */
	UFUNCTION(BlueprintNativeEvent)
	bool ProcessDialogueEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);

	/**
	 * Called after all events have been processed from all extensions, but just before the speaker line is displayed.
	 * At this point you know you've received all the events queued before this speaker line. Use this to perform any
	 * combined actions that needed to consider more than one event, or the lack of any event. This implementation
	 * can be asynchronous, but if it is it must set OutIsAsync to true, and call PreSpeakerLineCompleted() when done.
	 * @param Dialogue The dialogue being executed
	 * @return Whether this extension is performing asynchronous tasks. If true, the speaker line
	 *     will not be displayed until PreSpeakerLineCompleted() is called on USudsProSubsystem. All extensions will get
	 *     to run their PreDialogueSpeakerLineShown simultaneously.
	 */
	UFUNCTION(BlueprintNativeEvent)
	bool PreDialogueSpeakerLineShown(USUDSDialogue* Dialogue);

	
	/**
	 * For all things this extension is running in parallel, get the maximum time remaining on any of them.
	 * This is for if we want to wait for everything to finish before continuing.
	 * @param bForEndDialogue If true, we're asking for the end of the dialogue. Do not include times for anything which
	 *	should not delay the ending of the dialogue.
	 * @return Time
	 */
	UFUNCTION(BlueprintNativeEvent)
	float GetTimeRemaining(bool bForEndDialogue);

	/// Queue a callback to let the system know an event is completed
	UFUNCTION(BlueprintCallable, Category="SudsPro")
	void QueueEventCompleted(float Delay);

	UFUNCTION(BlueprintCallable, Category="SudsPro")
	void FireEventCompleted();

	/// Tick function for extensions
	UFUNCTION(BlueprintNativeEvent)
	void Tick(float DeltaTime);

};