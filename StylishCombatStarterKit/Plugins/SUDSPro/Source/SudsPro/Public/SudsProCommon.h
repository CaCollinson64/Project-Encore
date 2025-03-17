// Copyright Old Doorways Ltd 2023
// All rights  reserved
#pragma once

#include "CoreMinimal.h"
#include "SudsProMath.h"
#include "Camera/PlayerCameraManager.h"
#include "SudsProCommon.generated.h"

DECLARE_LOG_CATEGORY_CLASS(LogSudsPro, Log, Log)

UCLASS()
class SUDSPRO_API USudsProCommon : public UObject
{
	GENERATED_BODY()
protected:
	static const TMap<FName, EViewTargetBlendFunction> ViewBlendFunctionsByName;
	static const TMap<FName, ESudsProEaseFunction> BlendFunctionsByName;
public:
	/// More limited view target blend functions
	static bool ParseViewBlendFunction(FName BlendName, EViewTargetBlendFunction& OutFunc);
	/// Our general ease functions
	static bool ParseEaseFunction(FName EaseName, ESudsProEaseFunction& OutFunc);

};
