// Copyright Old Doorways Ltd 2023
// All rights  reserved

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SudsProMarkProvider.generated.h"

// This class does not need to be modified.
UINTERFACE()
class USudsProMarkProvider : public UInterface
{
	GENERATED_BODY()
};

/**
 * Interface that Participants in dialogues can additionally implement to provide "marks", i.e. places in the scene
 * that characters can be made to move to in the dialogue script. This can be used just in dialogue setup, or
 * as a simplified way to vary character positioning between shots rather than using a Level Sequence.
 * To provide marks, an object should add itself to the dialogue as a participant and implement this interface.
 */
class SUDSPRO_API ISudsProMarkProvider
{
	GENERATED_BODY()

public:
	/**
	 * Try to get a named "Mark", ie a location and rotation that a character should stand in.
	 * @param Name The name of the shot
	 * @param OutLocation
	 * @param OutRotator
	 * @return Whether the mark was successfully found
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="SudsPro|Marks")
	bool GetDialogueMark(FName Name, FVector& OutLocation, FRotator& OutRotator);
};
