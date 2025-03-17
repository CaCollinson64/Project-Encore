// Copyright Old Doorways Ltd 2023
// All rights  reserved

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LevelSequence.h"
#include "SudsProSequenceProvider.generated.h"

// This class does not need to be modified.
UINTERFACE()
class USudsProSequenceProvider : public UInterface
{
	GENERATED_BODY()
};

/**
 * Interface that Participants in dialogues can additionally implement to provide access to Level Sequence assets.
 * Because we refer to sequences by short names in the dialogue, this interface provides a way to map those names to
 * actual assets. You probably want to combine implementations of this with other providers like ISudsProMarkProvider,
 * ISudsProCameraShotProvider etc.
 */
class SUDSPRO_API ISudsProSequenceProvider
{
	GENERATED_BODY()

public:
	/**
	 * Try to get a named Level Sequence.
	 * @param Name The name of the sequence
	 * @return The level sequence asset, or null if this provider doesn't provide this named sequence.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="SudsPro|Sequences")
	ULevelSequence* GetDialogueLevelSequence(FName Name);


	/**
	 * Try to get an instance transform actor for a named Level Sequence. This allows you to offset the origin
	 * location of a sequence in a specific use case.
	 * @see https://dev.epicgames.com/documentation/en-us/unreal-engine/creating-level-sequences-with-dynamic-transforms-in-unreal-engine
	 * @param Name The name of the sequence
	 * @return An actor which should be used as the origin for the sequence instance, or null if no transform should be applied.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="SudsPro|Sequences")
	AActor* GetDialogueLevelSequenceTransformOriginActor(FName Name);

	/**
	 * Try to get an instance transform for a named Level Sequence. This allows you to offset the origin
	 * location of a sequence in a specific use case to an explicit transform.
	 * @see https://dev.epicgames.com/documentation/en-us/unreal-engine/creating-level-sequences-with-dynamic-transforms-in-unreal-engine
	 * @param Name The name of the sequence
	 * @param OutTransform Return the transform to be applied to the level sequence.
	 * @return True if a transform is provided, false otherwise
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="SudsPro|Sequences")
	bool GetDialogueLevelSequenceTransformOrigin(FName Name, FTransform& OutTransform);


};
