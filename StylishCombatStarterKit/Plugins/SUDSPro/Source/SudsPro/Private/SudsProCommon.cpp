// Copyright Old Doorways Ltd 2023
// All rights  reserved
#include "SudsProCommon.h"

const TMap<FName, EViewTargetBlendFunction> USudsProCommon::ViewBlendFunctionsByName{
	{FName("Linear"), EViewTargetBlendFunction::VTBlend_Linear},
	{FName("Cubic"), EViewTargetBlendFunction::VTBlend_Cubic},
	{FName("EaseIn"), EViewTargetBlendFunction::VTBlend_EaseIn},
	{FName("EaseOut"), EViewTargetBlendFunction::VTBlend_EaseOut},
	{FName("EaseInOut"), EViewTargetBlendFunction::VTBlend_EaseInOut}
};

const TMap<FName, ESudsProEaseFunction> USudsProCommon::BlendFunctionsByName{
	{FName("Linear"), ESudsProEaseFunction::Linear},
	{FName("SineIn"), ESudsProEaseFunction::EaseIn_Sine},
	{FName("SineOut"), ESudsProEaseFunction::EaseOut_Sine},
	{FName("SineInOut"), ESudsProEaseFunction::EaseInOut_Sine},
	{FName("CubicIn"), ESudsProEaseFunction::EaseIn_Cubic},
	{FName("CubicOut"), ESudsProEaseFunction::EaseOut_Cubic},
	{FName("CubicInOut"), ESudsProEaseFunction::EaseInOut_Cubic},
	{FName("QuadIn"), ESudsProEaseFunction::EaseIn_Quad},
	{FName("QuadOut"), ESudsProEaseFunction::EaseOut_Quad},
	{FName("QuadInOut"), ESudsProEaseFunction::EaseInOut_Quad},
	{FName("QuartIn"), ESudsProEaseFunction::EaseIn_Quart},
	{FName("QuartOut"), ESudsProEaseFunction::EaseOut_Quart},
	{FName("QuartInOut"), ESudsProEaseFunction::EaseInOut_Quart},
	{FName("QuintIn"), ESudsProEaseFunction::EaseIn_Quint},
	{FName("QuintOut"), ESudsProEaseFunction::EaseOut_Quint},
	{FName("QuintInOut"), ESudsProEaseFunction::EaseInOut_Quint},
	{FName("ExpoIn"), ESudsProEaseFunction::EaseIn_Expo},
	{FName("ExpoOut"), ESudsProEaseFunction::EaseOut_Expo},
	{FName("ExpoInOut"), ESudsProEaseFunction::EaseInOut_Expo},
	{FName("CircIn"), ESudsProEaseFunction::EaseIn_Circ},
	{FName("CircOut"), ESudsProEaseFunction::EaseOut_Circ},
	{FName("CircInOut"), ESudsProEaseFunction::EaseInOut_Circ},
	{FName("BackIn"), ESudsProEaseFunction::EaseIn_Back},
	{FName("BackOut"), ESudsProEaseFunction::EaseOut_Back},
	{FName("BackInOut"), ESudsProEaseFunction::EaseInOut_Back},
	{FName("ElasticIn"), ESudsProEaseFunction::EaseIn_Elastic},
	{FName("ElasticOut"), ESudsProEaseFunction::EaseOut_Elastic},
	{FName("ElasticInOut"), ESudsProEaseFunction::EaseInOut_Elastic},
	{FName("BounceIn"), ESudsProEaseFunction::EaseIn_Bounce},
	{FName("BounceOut"), ESudsProEaseFunction::EaseOut_Bounce},
	{FName("BounceInOut"), ESudsProEaseFunction::EaseInOut_Bounce},
	// Compatibility with view blends, for simplicity
	{FName("Cubic"), ESudsProEaseFunction::EaseInOut_Cubic},
	{FName("EaseIn"), ESudsProEaseFunction::EaseIn_Cubic},
	{FName("EaseOut"), ESudsProEaseFunction::EaseOut_Cubic},
	{FName("EaseInOut"), ESudsProEaseFunction::EaseInOut_Cubic}
};


bool USudsProCommon::ParseViewBlendFunction(FName BlendName, EViewTargetBlendFunction& OutFunc)
{

	if (auto pFunc = ViewBlendFunctionsByName.Find(BlendName))
	{
		OutFunc = *pFunc;
		return true;
	}

	return false;
}

bool USudsProCommon::ParseEaseFunction(FName EaseName, ESudsProEaseFunction& OutFunc)
{
	if (auto pFunc = BlendFunctionsByName.Find(EaseName))
	{
		OutFunc = *pFunc;
		return true;
	}

	return false;
	
}
