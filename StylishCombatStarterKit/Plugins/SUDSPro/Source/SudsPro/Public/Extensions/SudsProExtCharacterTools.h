// Copyright Old Doorways Ltd 2023
// All rights  reserved

#pragma once

#include "CoreMinimal.h"
#include "SudsProDialogueExtension.h"
#include "SudsProExtCharacterTools.generated.h"


USTRUCT(BlueprintType)
struct FSudsProQueuedCharacterMove
{
	GENERATED_BODY()
public:
	UPROPERTY()
	AActor* Actor;
	FVector Location;
	FRotator Rotation;

	FSudsProQueuedCharacterMove(): Actor(nullptr)
	{
	}

	FSudsProQueuedCharacterMove(AActor* InActor,
		const FVector& InLoc,
		const FRotator& InRot)
		: Actor(InActor),
		  Location(InLoc),
		  Rotation(InRot)
	{
	}
};
/**
 * Extension which provides support for character stuff in dialogues
 * 
 */
UCLASS(Blueprintable)
class SUDSPRO_API USudsProExtCharacterTools : public USudsProDialogueExtension
{
	GENERATED_BODY()

public:

	static const FName CharacterMoveEventName;
	static const FName CharacterAnimEventName;
	static const FName CharacterAnimStopEventName;
	static const FName CharacterNotifyEventName;
	static const FName CharacterPropSetEventName;
	static const FName WaitCharacterEventName;
	static const FName CharacterMoveWhileFadingVarName;

	static const FName AnimDefaultSlotName;
	
	virtual void DialogueStarting_Implementation(USUDSDialogue* Dialogue) override;
	virtual void DialogueFinished_Implementation(USUDSDialogue* Dialogue) override;
	virtual bool ProcessDialogueEvent_Implementation(USUDSDialogue* Dialogue,
	                                                 const FSudsProQueuedEvent& Evt) override;
	virtual float GetTimeRemaining_Implementation(bool bForEndDialogue) override;

	virtual void Tick_Implementation(float DeltaTime) override;

protected:
	TWeakObjectPtr<class USudsProExtCameraTools> CameraTools;

	UPROPERTY()
	TArray<FSudsProQueuedCharacterMove> QueuedMoves;

	TMap<FName, float> CharacterAnimTimeLeft;
	
	
	bool CharacterMoveEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	bool CharacterAnimEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	bool CharacterAnimStopEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	bool CharacterNotifyEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	bool WaitCharacterEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	bool CharacterPropSetEvent(USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	AActor* FindCharacter(USUDSDialogue* Dialogue, FName Name);
	AActor* FindCharacterChecked(USUDSDialogue* Dialogue, FName Name, const FSudsProQueuedEvent& Evt);
	USkeletalMeshComponent* GetSkeletalMeshComponentChecked(USUDSDialogue* Dialogue,
	                                                        AActor* Char,
	                                                        const FName& AnimName,
	                                                        const FSudsProQueuedEvent& Evt);
	bool FindMark(USUDSDialogue* Dialogue, FName Name, FVector& OutLocation, FRotator& OutRotator);
	void PerformMove(AActor* Actor, const FVector& Location, const FRotator& Rotator);
	class UAnimSequenceBase* FindCharacterAnimation(USUDSDialogue* Dialogue,
	                                          AActor* Character,
	                                          const FName& CharName,
	                                          const FName& AnimName);
	FProperty* FindProperty(UObject* Obj, const FName& PropName);
	void SetPropertyValue(UObject* Obj, FProperty* Prop, const FSUDSValue& Value, USUDSDialogue* Dialogue, const FSudsProQueuedEvent& Evt);
	float GetMaxAnimTimeLeft() const;

	UFUNCTION()
	void OnFadeOutFinished();
	
};
