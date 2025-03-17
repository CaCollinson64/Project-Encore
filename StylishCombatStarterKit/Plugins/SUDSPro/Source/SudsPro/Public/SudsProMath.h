// Copyright Old Doorways Ltd 2023
// All rights  reserved
#pragma once

#include "CoreMinimal.h"

/// Easing functions
/// See https://easings.net/
/// Could have used UE EEasingFunc but it's missing some nice options like back/elastic

enum class ESudsProEaseFunction : uint8
{
	Linear,
	EaseIn_Sine,
	EaseOut_Sine,
	EaseInOut_Sine,
	EaseIn_Quad,
	EaseOut_Quad,
	EaseInOut_Quad,
	EaseIn_Cubic,
	EaseOut_Cubic,
	EaseInOut_Cubic,
	EaseIn_Quart,
	EaseOut_Quart,
	EaseInOut_Quart,
	EaseIn_Quint,
	EaseOut_Quint,
	EaseInOut_Quint,
	EaseIn_Expo,
	EaseOut_Expo,
	EaseInOut_Expo,
	EaseIn_Circ,
	EaseOut_Circ,
	EaseInOut_Circ,
	EaseIn_Back,
	EaseOut_Back,
	EaseInOut_Back,
	EaseIn_Elastic,
	EaseOut_Elastic,
	EaseInOut_Elastic,
	EaseIn_Bounce,
	EaseOut_Bounce,
	EaseInOut_Bounce
};

class FSudsProMath
{
public:

	static float EaseAlpha(float InAlpha, ESudsProEaseFunction Func);

	static float EaseFloat(float A, float B, float Alpha, ESudsProEaseFunction Func)
	{
		return A + EaseAlpha(Alpha, Func) * (B - A);
	}
	static FVector EaseVector(const FVector& A, const FVector& B, float Alpha, ESudsProEaseFunction Func)
	{
		return A + EaseAlpha(Alpha, Func) * (B - A);
	}
	static FRotator EaseRotator(const FRotator& A, const FRotator& B, float Alpha, ESudsProEaseFunction Func, bool bShortest)
	{
		if (bShortest)
			return EaseQuat(FQuat(A), FQuat(B), Alpha, Func).Rotator();

		return A + EaseAlpha(Alpha, Func) * (B - A);
	}
	static FQuat EaseQuat(const FQuat& A, const FQuat& B, float Alpha, ESudsProEaseFunction Func)
	{
		return FQuat::Slerp(A, B, EaseAlpha(Alpha, Func));
	}	
	static FTransform EaseTransform(const FTransform& A, const FTransform& B, float Alpha, ESudsProEaseFunction Func)
	{
		return FTransform(
			EaseQuat(A.GetRotation(), B.GetRotation(), Alpha, Func),
			EaseVector(A.GetLocation(), B.GetLocation(), Alpha, Func),
			EaseVector(A.GetScale3D(), B.GetScale3D(), Alpha, Func));
	}	
	
	
};
