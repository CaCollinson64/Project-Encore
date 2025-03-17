// Copyright Old Doorways Ltd 2023
// All rights  reserved

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SudsProCameraShotProvider.generated.h"

UINTERFACE()
class USudsProCameraShotProvider : public UInterface
{
	GENERATED_BODY()
};

/**
 * Interface that Participants in dialogues can additionally implement to provide camera shots.
 * To provide camera shots, an object should add itself to the dialogue as a participant and implement this
 * interface.
 */
class SUDSPRO_API ISudsProCameraShotProvider
{
	GENERATED_BODY()

public:
	/**
	 * Try to get an actor with a camera component that represents a camera shot, given a shot name.
	 * The actor should be compatible with SetViewTarget(), i.e. have an active camera or cine camera component.
	 * @param ShotName The name of the shot
	 * @return An actor which has an active camera component, or null if this provider can't fulfil this shot.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="SudsPro|Cameras")
	AActor* GetDialogueCameraShot(FName ShotName);
};
