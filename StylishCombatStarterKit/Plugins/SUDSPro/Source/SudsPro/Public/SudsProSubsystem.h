// Copyright Old Doorways Ltd 2023
// All rights  reserved

#pragma once

#include "CoreMinimal.h"
#include "SUDSParticipant.h"
#include "SudsProDialogueExtension.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/GameInstance.h"
#include "Tickable.h"
#include "Engine/World.h"
#include "SudsProUiLink.h"
#include "SudsProSubsystem.generated.h"

class USudsProDialogueExtension;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSudsProDialogueStarting, USUDSDialogue*, Dialogue, FName, Label);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSudsProDialogueFinished, USUDSDialogue*, Dialogue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSudsProSpeakerLineShown, USUDSDialogue*, Dialogue);
/**
 * 
 */
UCLASS()
class SUDSPRO_API USudsProSubsystem : public UGameInstanceSubsystem, public ISUDSParticipant, public FTickableGameObject
{
	GENERATED_BODY()
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	UPROPERTY(BlueprintAssignable, Category="SudsPro")
	FOnSudsProDialogueStarting OnDialogueStarting;
	UPROPERTY(BlueprintAssignable, Category="SudsPro")
	FOnSudsProDialogueFinished OnDialogueFinished;
	/// Event raised just after a new speaker line has been sent to the UI
	UPROPERTY(BlueprintAssignable, Category="SudsPro")
	FOnSudsProSpeakerLineShown OnSpeakerLineShown;
	
	/**
	 * Start running a pre-created dialogue.
	 * @param Dialogue The dialogue instance to run
	 * @param StartLabel The label to start from
	 * @param UiClass The UI to use to drive this dialogue. Leave null to use the default.
	 * @param UiClass
	 */
	UFUNCTION(BlueprintCallable, Category="SudsPro")
	void StartDialogue(USUDSDialogue* Dialogue,
	                   FName StartLabel = NAME_None,
	                   TSubclassOf<USudsProUiLink> UiClass = nullptr);

	/**
	 * Resume dialogue. Will start from wherever the dialogue currently is, or restart if it's at the end.
	 * @param Dialogue The dialogue instance to run. You might have already called RestoreSavedState on it.
	 * @param UiClass The UI to use to drive this dialogue. Leave null to use the default.
	 */
	UFUNCTION(BlueprintCallable, Category="SudsPro")
	void ResumeDialogue(USUDSDialogue* Dialogue,
	                    TSubclassOf<USudsProUiLink> UiClass = nullptr);

	/// Get the currently running dialogue
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="SudsPro")
	USUDSDialogue* GetCurrentDialogue() const { return CurrentDialogue; }

	/**
	 * Add an extension to the system.
	 * @param Ext The extension
	 */
	void AddExtension(USudsProDialogueExtension* Ext);

	/**
	 * Remove an extension from the system.
	 * @param Ext The extension
	 */
	void RemoveExtension(USudsProDialogueExtension* Ext);
	
	/**
	 * Method that extensions should call to indicate they've finished processing the current event asynchronously.
	 * Extensions only need to call this if they indicate they're running async actions in response to an event.
	 * @param Extension The extension sending this confirmation
	 */
	UFUNCTION(BlueprintCallable, Category="SudsPro")
	void EventCompleted(USudsProDialogueExtension* Extension);

	/**
	 * Method that ISudsProCharacter implementations should call to indicate they've finished processing the
	 * character dialogue notification that we have been waiting for. 
	 * @param Character The character sending this confirmation
	 */
	UFUNCTION(BlueprintCallable, Category="SudsPro")
	void CharacterNotifyCompleted(AActor* Character);
	
	/**
	 * Method that extensions should call to indicate they've finished processing their pre-speaker line asynchronous actions.
	 * Extensions only need to call this if they indicate they're running async actions in the pre-speaker line call.
	 * @param Extension The extension sending this confirmation
	 */
	UFUNCTION(BlueprintCallable, Category="SudsPro")
	void PreSpeakerLineCompleted(USudsProDialogueExtension* Extension);

	/// When there are ongoing non-waiting events, get the longest time remaining on any of them
	float GetMaxEventTimeRemaining(bool bForEndDialogue);
	
	// SUDS Participant
	virtual void OnDialogueEvent_Implementation(USUDSDialogue* Dialogue,
		FName EventName,
		const TArray<FSUDSValue>& Arguments) override;
	virtual void OnDialogueVariableChanged_Implementation(USUDSDialogue* Dialogue,
		FName VariableName,
		const FSUDSValue& Value,
		bool bFromScript) override;
	virtual void OnDialogueSpeakerLine_Implementation(USUDSDialogue* Dialogue) override;
	virtual void OnDialogueFinished_Implementation(USUDSDialogue* Dialogue) override;

	template<class T>
	T* FindExtension() const
	{
		static_assert(TPointerIsConvertibleFromTo<T, const USudsProDialogueExtension>::Value, "'T' template parameter to FindExtension must be derived from USudsProDialogueExtension");

		return static_cast<T*>(FindExtension(T::StaticClass()));
	}
	virtual USudsProDialogueExtension* FindExtension(const TSubclassOf<USudsProDialogueExtension> ExtensionClass) const;

	// End SUDS Participant

	// FTickableGameObject
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;
	// End FTickableGameObject
protected:
	UPROPERTY()
	USUDSDialogue* CurrentDialogue = nullptr;
	UPROPERTY()
	TArray<USudsProDialogueExtension*> Extensions;
	UPROPERTY()
	TArray<FSudsProQueuedEvent> QueuedEvents;
	int EventInProgressIdx = -1;
	int EventInProgressAsyncCount = 0;
	int PreSpeakerLineAsyncCount = 0;
	UPROPERTY()
	USudsProUiLink* UiInstance = nullptr;
	bool bInputGrabbed = false;

	bool ShouldDialogueTakeOverInput(USUDSDialogue* Dialogue);
	void PrepareToRunDialogue(USUDSDialogue* Dialogue, TSubclassOf<USudsProUiLink> UiClass);
	void DialogueStep();
	void MaybeShowSpeakerLine();
	void ShowSpeakerLine();
	/// Run as many queued events as we can. Return whether we did all of them synchronously
	bool RunEvents();
	bool ContinueEvents();
	void MaybeContinueEventsAndMaybeNextDialogueStep();
	void CreateUi(TSubclassOf<USudsProUiLink> UiClass);
	void ShutdownDialogueInstance();
	TSubclassOf<USudsProUiLink> GetDefaultUiClass();

};

inline USudsProSubsystem* GetSudsPro(const UWorld* WorldContext)
{
	if (IsValid(WorldContext) && WorldContext->IsGameWorld())
	{
		const auto GI = WorldContext->GetGameInstance();
		if (IsValid(GI))
			return GI->GetSubsystem<USudsProSubsystem>();		
	}
		
	return nullptr;
}
