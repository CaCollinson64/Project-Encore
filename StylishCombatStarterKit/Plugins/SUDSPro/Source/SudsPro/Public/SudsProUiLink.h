// Copyright Old Doorways Ltd 2023
// All rights  reserved

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SudsProUiLink.generated.h"

class USUDSDialogue;
/**
 * Provides the link between SudsPro running the dialogue and the UI which displays it.
 * We provide a basic implementation of this which just opens a dialogue widget. You can either
 * point to a different widget, or do something more custom by supplying your own subclass.
 */
UCLASS(Blueprintable, BlueprintType)
class SUDSPRO_API USudsProUiLink : public UObject
{
	GENERATED_BODY()
public:
	
	/**
	 * Notification that dialogue is starting. The UI should NOT show any speaker lines here though, this is just for
	 * information, if the UI wants to do some general intro animation or something even before any speaker lines appear.
	 * Speaker lines themselves may be delayed by asynchronous events in between the dialogue starting and the first
	 * line, such as fade effects or intro animations.
	 * This UI class might for example just want to add itself to the viewport but with all elements hidden.
	 * @param Dialogue The dialogue being started.
	 * @param bShouldTakeOverInput Whether the dialogue UI should commandeer player input (disable character movement, maybe show pointer etc)
	 */
	UFUNCTION(BlueprintNativeEvent)
	void DialogueStarting(USUDSDialogue* Dialogue, bool bShouldTakeOverInput);

	/**
	 * Notification that dialogue has finished. The UI should remove itself at this point.
	 * @param Dialogue The dialogue ending.
	 * @param bShouldRestoreInput Whether the UI should restore normal player input.
	 */
	UFUNCTION(BlueprintNativeEvent)
	void DialogueFinished(USUDSDialogue* Dialogue, bool bShouldRestoreInput);

	/**
	 * Called when it's time to display the next speaker line.
	 * The UI should display the speaker line, and potentially any choices at this point.
	 * From this point, the UI is in control of the dialogue and can use its own choice for timing for displaying the
	 * elements. Nothing else will happen until the UI calls a Dialogue method such as Continue(), Choose() or End().
	 * Once the UI calls one of these methods, it MUST wait for the next call to ShowSpeakerLine() or DialogueEnding(). 
	 * @param Dialogue The dialogue
	 */
	UFUNCTION(BlueprintNativeEvent)
	void ShowSpeakerLine(USUDSDialogue* Dialogue);

	/// Need to override this so usable for creating widgets etc
	virtual UWorld* GetWorld() const override;
};
