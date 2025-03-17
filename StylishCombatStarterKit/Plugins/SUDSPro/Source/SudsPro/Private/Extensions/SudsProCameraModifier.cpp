// Copyright Old Doorways Ltd 2023
// All rights  reserved
#include "SudsProCameraModifier.h"

#include "Kismet/KismetMathLibrary.h"

void USudsProCameraModifier::ModifyCamera(float DeltaTime,
                                          FVector ViewLocation,
                                          FRotator ViewRotation,
                                          float FOV,
                                          FVector& NewViewLocation,
                                          FRotator& NewViewRotation,
                                          float& NewFOV)
{
	Super::ModifyCamera(DeltaTime, ViewLocation, ViewRotation, FOV, NewViewLocation, NewViewRotation, NewFOV);

	// Default to not changing anything
	FVector DeltaLocation = FVector::ZeroVector;
	FRotator DeltaRotatorLocal = FRotator::ZeroRotator;
	FRotator DeltaRotatorGlobal = FRotator::ZeroRotator;
	float DeltaFOV = 0;

	if (!IsDisabled())
	{
		// We combine all mods together into deltas based on incoming values
		for (auto& Mod : CameraMods)
		{
			// Clamp to end - we keep ticking and keep applying until told otherwise
			// This means when we reach the end we retain the state
			Mod.CurrentTime = FMath::Min(Mod.CurrentTime + DeltaTime, Mod.Duration);

			const float T = Mod.CurrentTime / Mod.Duration;

			switch(Mod.ModType)
			{
			case ECameraModType::Translate:
				if (Mod.Space == ESudsProCameraModifierSpace::Local)
				{
					// translation is local, convert it here
					FVector LocalDelta = FSudsProMath::EaseVector(Mod.VectorStart, Mod.VectorEnd, T, Mod.EaseFunction); 
					DeltaLocation += ViewRotation.RotateVector(LocalDelta);
				}
				else
				{
					DeltaLocation += FSudsProMath::EaseVector(Mod.VectorStart, Mod.VectorEnd, T, Mod.EaseFunction);
				}
				break;
			case ECameraModType::Rotate:
				if (Mod.Space == ESudsProCameraModifierSpace::Local)
				{
					// rotation is local, adjust axes here
					FRotator LocalRot = FSudsProMath::EaseRotator(Mod.RotatorStart, Mod.RotatorEnd, T, Mod.EaseFunction, false);
					DeltaRotatorLocal = UKismetMathLibrary::ComposeRotators(LocalRot, DeltaRotatorLocal);
				}
				else
				{
					FRotator GlobalRot = FSudsProMath::EaseRotator(Mod.RotatorStart, Mod.RotatorEnd, T, Mod.EaseFunction, false);
					DeltaRotatorGlobal = UKismetMathLibrary::ComposeRotators(DeltaRotatorGlobal, GlobalRot);					
				}
				break;
			case ECameraModType::FovChange:
				DeltaFOV += FSudsProMath::EaseFloat(Mod.ScalarStart, Mod.ScalarEnd, T, Mod.EaseFunction);
				break;
			default: ;
			}
		
		}
	}

	// Apply but respect Alpha (the blending in/out of this mod)
	NewViewLocation = ViewLocation + DeltaLocation * Alpha;
	NewViewRotation = UKismetMathLibrary::ComposeRotators(
		UKismetMathLibrary::ComposeRotators(DeltaRotatorLocal * Alpha, ViewRotation),
		DeltaRotatorGlobal);
	NewFOV = FOV + DeltaFOV * Alpha;

}

void USudsProCameraModifier::RemoveModsNotAtStart()
{
	for (auto It = CameraMods.CreateIterator(); It; ++It)
	{
		if (It->CurrentTime > 0)
			It.RemoveCurrent();
	}
}

void USudsProCameraModifier::Reset()
{
	CameraMods.Empty();
}

void USudsProCameraModifier::AddTranslation(USudsProCameraModifier::ECameraTranslationType TType,
                                            const FVector& DeltaStart,
                                            const FVector& DeltaEnd,
                                            ESudsProCameraModifierSpace Space,
                                            float Duration,
                                            ESudsProEaseFunction EaseFunction)
{
	AddOrReplaceMod(FCameraModEntry(static_cast<int>(TType), ECameraModType::Translate, DeltaStart, DeltaEnd, Space, Duration, EaseFunction));
}

void USudsProCameraModifier::AddRotation(ECameraRotationType RType,
                                         const FRotator& DeltaStart,
                                         const FRotator& DeltaEnd,
                                         ESudsProCameraModifierSpace Space,
                                         float Duration,
                                         ESudsProEaseFunction EaseFunction)
{
	AddOrReplaceMod(FCameraModEntry(static_cast<int>(RType), ECameraModType::Rotate, DeltaStart, DeltaEnd, Space, Duration, EaseFunction));
}

void USudsProCameraModifier::AddFOVChange(float DeltaStart,
	float DeltaEnd,
	float Duration,
	ESudsProEaseFunction EaseFunction)
{
	AddOrReplaceMod(FCameraModEntry(0, ECameraModType::FovChange, DeltaStart, DeltaEnd, Duration, EaseFunction));
}

void USudsProCameraModifier::AddOrReplaceMod(const FCameraModEntry& InMod)
{
	// We don't want to have "fighting" mods of the same type. We keep mods after their duration is over so that
	// the camera remains in that spot, but afterwards any mods of the same TypeID (Dolly, Pan etc) must replace the
	// previous one.
	for (auto& Mod : CameraMods)
	{
		if (Mod.ModType == InMod.ModType && Mod.TypeID == InMod.TypeID)
		{
			// Replace this one
			Mod = InMod;
			return;
		}
	}

	CameraMods.Add(InMod);

}

float USudsProCameraModifier::GetTimeRemaining()
{
	float Ret = 0;
	for (auto& Mod : CameraMods)
	{
		Ret = FMath::Max(Ret, Mod.Duration - Mod.CurrentTime);
	}
	return Ret;
}
