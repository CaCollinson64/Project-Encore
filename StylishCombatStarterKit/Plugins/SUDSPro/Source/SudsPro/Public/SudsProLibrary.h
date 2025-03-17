// Copyright Old Doorways Ltd 2023
// All rights  reserved

#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SudsProUiLink.h"
#include "SUDSDialogue.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SudsProLibrary.generated.h"

/**
 * 
 */
UCLASS()
class SUDSPRO_API USudsProLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	* Start a dialogue based on a script, with no participants.
	* Convenience version of calling CreateDialogue followed by SudsProSubsystem::StartDialogue
	* @param WorldContextObject World context
	* @param Owner The owner of this instance. Can be any object but determines the lifespan of this dialogue,
	*   could make sense to make the owner the NPC you're talking to for example.
	* @param Script The script to base this dialogue on
	* @param StartLabel If set to start immediately, which label to start from (None means start from the beginning)
	* @param SavedState Optional saved state to start this dialogue with
	* @param UiClass The UI to use to drive this dialogue. Leave null to use the default.
	* @return The dialogue instance. 
	*/
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"), Category="SudsPro")
	static USUDSDialogue* StartDialogue(UObject* WorldContextObject,
	                                    UObject* Owner,
	                                    USUDSScript* Script,
	                                    FName StartLabel = NAME_None,
	                                    FSUDSDialogueState SavedState = FSUDSDialogueState(),
	                                    TSubclassOf<USudsProUiLink> UiClass = nullptr);

	/**
	* Start a dialogue instance based on a script, with an initial set of participants.
	* Convenience version of calling CreateDialogue followed by SudsProSubsystem::StartDialogue
	* @param WorldContextObject World context
	* @param Owner The owner of this instance. Can be any object but determines the lifespan of this dialogue,
	*   could make sense to make the owner the NPC you're talking to for example.
	* @param Script The script to base this dialogue on
	* @param Participants List of participants, each of which must implement the ISUDSParticipant interface to be used.
	*	Participants are objects that want to be closely involved in the dialogue to provide variables and receive all events.
	*	Other objects can subscribe to events separately but do not have as much control.
	* @param StartLabel If set to start immediately, which label to start from (None means start from the beginning)
	* @param SavedState Optional saved state to start this dialogue with
	* @param UiClass The UI to use to drive this dialogue. Leave null to use the default.
	* @return The dialogue instance. 
	*/
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"), Category="SudsPro")
	static USUDSDialogue* StartDialogueWithParticipants(UObject* WorldContextObject,
	                                                    UObject* Owner,
	                                                    USUDSScript* Script,
	                                                    const TArray<UObject*>& Participants,
	                                                    FName StartLabel = NAME_None,
	                                                    FSUDSDialogueState SavedState = FSUDSDialogueState(),
	                                                    TSubclassOf<USudsProUiLink> UiClass = nullptr);


	/**
	* Start a dialogue instance based on a script, with a single participant.
	* Convenience version of calling CreateDialogue followed by SudsProSubsystem::StartDialogue
	* @param WorldContextObject World context
	* @param Owner The owner of this instance. Can be any object but determines the lifespan of this dialogue,
	*   could make sense to make the owner the NPC you're talking to for example.
	* @param Script The script to base this dialogue on
	* @param Participant The participant, which must implement the ISUDSParticipant interface to be used.
	*	Participants are objects that want to be closely involved in the dialogue to provide variables and receive all events.
	*	Other objects can subscribe to events separately but do not have as much control.
	* @param StartLabel If set to start immediately, which label to start from (None means start from the beginning)
	* @param SavedState Optional saved state to start this dialogue with
	* @param UiClass The UI to use to drive this dialogue. Leave null to use the default.
	* @return The dialogue instance. 
	*/
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"), Category="SudsPro")
	static USUDSDialogue* StartDialogueWithParticipant(UObject* WorldContextObject,
	                                                   UObject* Owner,
	                                                   USUDSScript* Script,
	                                                   UObject* Participant,
	                                                   FName StartLabel = NAME_None,
	                                                   FSUDSDialogueState SavedState = FSUDSDialogueState(),
	                                                   TSubclassOf<USudsProUiLink> UiClass = nullptr);

	/// Helper function to get the project setting "WidgetClass"
	UFUNCTION(BlueprintCallable, Category="SudsPro")
	static TSubclassOf<UUserWidget> GetDialogueWidgetClass();

	/**
	 * Helper function to try to retrieve an actor which implements ISudsProCharacter and answers to the given identifier.
	 * @param Dialogue The dialogue to find the character in
	 * @param CharacterIdentifier The identifier of the character, as reported by ISudsProCharacter::GetDialogueCharacterIdentifier.
	 * @return The character actor. May return null if not found, or if the object responding to this character identifier isn't an actor
	 */
	UFUNCTION(BlueprintCallable, Category="SudsPro")
	static AActor* FindDialogueCharacter(const USUDSDialogue* Dialogue, FName CharacterIdentifier);
	
};
