// Copyright Old Doorways Ltd 2023
// All rights  reserved
#pragma once

#include "CoreMinimal.h"
#include "SudsProMath.h"
#include "Camera/CameraModifier.h"
#include "SudsProCameraModifier.generated.h"


enum class ESudsProCameraModifierSpace
{
	/// Camera local space (as judged from ORIGINAL camera rotation)
	Local,
	/// Global axes
	Global
};
/// Camera modifier that applies supplemental animation
/// There is only one instance of this; all camera effects are applied by this one instance
UCLASS()
class SUDSPRO_API USudsProCameraModifier : public UCameraModifier
{
	GENERATED_BODY()
public:
	enum class ECameraTranslationType
	{
		PushInOut,
		Dolly,
		Boom
	};
	enum class ECameraRotationType
	{
		Pan,
		Tilt,
		Roll
	};
protected:
	enum class ECameraModType
	{
		Translate,
		Rotate,
		FovChange
	};
	/// You can apply multiple camera modifications in parallel, with different application times
	/// They won't appear here until they're active, so only a time remaining is needed
	/// But each might end at a different time due to waiting in between
	/// Motions are always in camera-local space
	struct FCameraModEntry
	{
	public:
		// ID the type so we can remove overlapping ones
		int TypeID;
		ECameraModType ModType;
		FVector VectorStart;
		FVector VectorEnd;
		FRotator RotatorStart;
		FRotator RotatorEnd;
		float ScalarStart;
		float ScalarEnd;
		ESudsProCameraModifierSpace Space;
		float Duration;
		ESudsProEaseFunction EaseFunction;
		float CurrentTime;

		FCameraModEntry(int InTypeID,
			ECameraModType InModType,
			const FVector& InVectorStart,
			const FVector& InVectorEnd,
			ESudsProCameraModifierSpace InSpace,
			float InDuration,
			ESudsProEaseFunction InEaseFunction)
			: TypeID(InTypeID),
			  ModType(InModType),
			  VectorStart(InVectorStart),
			  VectorEnd(InVectorEnd),
			  ScalarStart(0),
			  ScalarEnd(0),
			  Space(InSpace),
			  Duration(InDuration),
			  EaseFunction(InEaseFunction),
			  CurrentTime(0)
		{
		}

		FCameraModEntry(int InTypeID,
		                ECameraModType InModType,
		                float InScalarStart,
		                float InScalarEnd,
		                float InDuration,
		                ESudsProEaseFunction InEaseFunction)
			: TypeID(InTypeID),
			  ModType(InModType),
			  ScalarStart(InScalarStart),
			  ScalarEnd(InScalarEnd),
			  Space(ESudsProCameraModifierSpace::Local),
			  Duration(InDuration),
			  EaseFunction(InEaseFunction),
			  CurrentTime(0)
		{
		}

		FCameraModEntry(int InTypeID,
		                ECameraModType InModType,
		                const FRotator& InRotatorStart,
		                const FRotator& InRotatorEnd,
		                ESudsProCameraModifierSpace InSpace,
		                float InDuration,
		                ESudsProEaseFunction InEaseFunction)
			: TypeID(InTypeID),
			  ModType(InModType),
			  RotatorStart(InRotatorStart),
			  RotatorEnd(InRotatorEnd),
			  ScalarStart(0),
			  ScalarEnd(0),
			  Space(InSpace),
			  Duration(InDuration),
			  EaseFunction(InEaseFunction),
			  CurrentTime(0)
		{
		}
	};

	TArray<FCameraModEntry> CameraMods;
	bool bCompleted = false;
	
	virtual void ModifyCamera(float DeltaTime,
		FVector ViewLocation,
		FRotator ViewRotation,
		float FOV,
		FVector& NewViewLocation,
		FRotator& NewViewRotation,
		float& NewFOV) override;

	void AddOrReplaceMod(const FCameraModEntry& Mod);
public:

	/// Remove modifications that aren't at Time=0
	/// This is useful for getting rid of completed or part-completed movements from previous cameras but still allowing
	/// queued motions for the next camea
	void RemoveModsNotAtStart();
	/// Reset all mods back to doing nothing. Probably done on cut only, because you don't want to reset while maintaining
	/// a shot, if it moved the camera away from its defaults
	void Reset();

	/// Add a translation mod
	/// You don't have to add all mods at the same time, more can be added in the middle of others applying
	void AddTranslation(ECameraTranslationType TType, const FVector& DeltaStart, const FVector& DeltaEnd, ESudsProCameraModifierSpace Space, float Duration, ESudsProEaseFunction EaseFunction);
	/// Add a rotation mod
	void AddRotation(ECameraRotationType RType, const FRotator& DeltaStart, const FRotator& DeltaEnd, ESudsProCameraModifierSpace Space, float Duration, ESudsProEaseFunction EaseFunction);
	/// Add a FOV mod
	void AddFOVChange(float DeltaStart, float DeltaEnd, float Duration, ESudsProEaseFunction EaseFunction);
	/// Get the max time remaining on any change
	float GetTimeRemaining();
};
