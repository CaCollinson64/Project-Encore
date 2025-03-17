
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SudsProAnimationProvider.generated.h"

UINTERFACE()
class USudsProAnimationProvider : public UInterface
{
	GENERATED_BODY()
};

/// Optional interface through which a general participant cam provide animations
class SUDSPRO_API ISudsProAnimationProvider
{
	GENERATED_BODY()

public:

	/**
	 * Return the animation (sequence or montage) for a named character,
	 * corresponding to the incoming animation name used in dialogue script.
	 * This may be used by the [event CharacterAnim `CharacterName`, `AnimName`] script command,
	 * but only if no animation is returned from the character itself via ISudsProCharacter's GetDialogueAnimation.
	 * This allows you to provide animations more generally from other classes.
	 * @param CharacterName The name of the character
	 * @param AnimName The name of the animation.
	 * @return An animation sequence, or animation montage.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="SudsPro|Character")
	class UAnimSequenceBase* GetDialogueCharacterAnimation(FName CharacterName, FName AnimName);

};
