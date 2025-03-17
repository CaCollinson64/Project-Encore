// Copyright Old Doorways Ltd 2024
// All rights  reserved
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SUDSDialogue.h"
#include "SUDSParticipant.h"
#include "Extensions/SudsProCameraShotProvider.h"
#include "Extensions/SudsProMarkProvider.h"
#include "Extensions/SudsProSequenceProvider.h"
#include "SudsProRunner.generated.h"

/// A helper base class which organises the loading of a SUDS script and running it with appropriate
/// participants, providing a simple provider of marks, characters and cameras
UCLASS(Blueprintable, BlueprintType, meta=(PrioritizeCategories="SudsPro"))
class SUDSPRO_API ASudsProRunner : public AActor, public ISUDSParticipant,
                                   public ISudsProCameraShotProvider, public ISudsProMarkProvider,
                                   public ISudsProSequenceProvider
{
	GENERATED_BODY()
protected:
	/// The script which will be run. This is a soft object pointer so the script isn't loaded until needed.
	/// A soft reference also eliminates problems with GC when a level is re-loaded
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category="SudsPro|Runner")
	TSoftObjectPtr<class USUDSScript> Script;
	
	/// Optional starting label in the script. Leave blank to start from the beginning. 
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category="SudsPro|Runner")
	FName StartFrom;
	// List of camera shots by name. Each must be an actor with a camera component.
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category="SudsPro|Runner")
	TMap<FName, AActor*> CameraShots;
	/// List of additional NPC participants in the dialogue
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category="SudsPro|Runner")
	TArray<AActor*> NPCs;
	/// List of marks that characters can be told to move to.
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category="SudsPro|Runner")
	TMap<FName, AActor*> Marks;
	/// List of level sequences that this runner can launch by name
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category="SudsPro|Runner|Cutscenes")
	TMap<FName, class ULevelSequence*> Sequences;
	/// List of actors to act as transform origins for a named level sequence. This allows you to play
	/// back sequences at a different origin to that which it was defined in. Alternative to
	/// specifying the transform manually with SequenceTransformOrigins
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category="SudsPro|Runner|Cutscenes")
	TMap<FName, AActor*> SequenceTransformOriginActors;
	/// List of manual transform origins for a named level sequence. This allows you to play
	/// back sequences at a different origin to that which it was defined in.
	/// Alternative: use SequenceTransformOriginActors to use an actor to provide the transform instead
	/// of manually supplying it.
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category="SudsPro|Runner|Cutscenes")
	TMap<FName, FTransform> SequenceTransformOrigins;

	/// The loaded script asset
	UPROPERTY(BlueprintReadOnly, Category="SudsPro|Runner")
	TObjectPtr<USUDSScript> LoadedScriptAsset;
	/// The current dialogue being run
	UPROPERTY(BlueprintReadOnly, Category="SudsPro|Runner")
	TObjectPtr<USUDSDialogue> CurrentDialogue;
	/// The state of the dialogue the last time SnapshotDialogueState was called
	UPROPERTY(BlueprintReadOnly, Category="SudsPro|Runner")
	FSUDSDialogueState DialogueState;

	bool bAsyncLoadQueued = false;

	UFUNCTION()
	void OnScriptAsyncLoaded(FSoftObjectPath LoadedObject);

	virtual void BeginPlay() override;

public:
	ASudsProRunner();

	/// Pre-load the script asynchronously. We recommend you call this when it looks like the script
	/// will be needed soon (e.g. when the player approaches a certain distance). Otherwise calling
	/// StartDialogue will have to load the script synchronously. This probably isn't a huge deal for
	/// small scripts but it's good practice to pre-load if you can.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="SudsPro|Runner")
	void LoadScriptAsync();

	/// Unload the script from memory, if you want to free up memory. Scripts are quite small so it's
	/// not essential to call this, but you can if you want. 
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="SudsPro|Runner")
	void UnloadScript();
	
	/// Start the dialogue as configured
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="SudsPro|Runner")
	USUDSDialogue* StartDialogue(ACharacter* PlayerCharacter);

	/// Take a snapshot of the dialogue state and store it in DialogueState.
	/// Only valid while the dialogue is running. Called automatically just before dialogue end.
	UFUNCTION(BlueprintCallable, Category="SudsPro|Runner")
	const FSUDSDialogueState& SnapshotDialogueState();

	virtual int GetDialogueParticipantPriority_Implementation() const override;
	virtual void OnDialogueFinished_Implementation(USUDSDialogue* Dialogue) override;

	virtual AActor* GetDialogueCameraShot_Implementation(FName ShotName) override;
	virtual bool GetDialogueMark_Implementation(FName Name,
		FVector& OutLocation,
		FRotator& OutRotator) override;
	virtual ULevelSequence* GetDialogueLevelSequence_Implementation(FName Name) override;

	virtual AActor* GetDialogueLevelSequenceTransformOriginActor_Implementation(FName Name) override;
	virtual bool GetDialogueLevelSequenceTransformOrigin_Implementation(FName Name,
		FTransform& OutTransform) override;
};
