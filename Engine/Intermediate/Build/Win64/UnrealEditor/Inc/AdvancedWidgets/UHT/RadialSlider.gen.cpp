// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/RadialSlider.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadialSlider() {}
// Cross Module References
	ADVANCEDWIDGETS_API UClass* Z_Construct_UClass_URadialSlider();
	ADVANCEDWIDGETS_API UClass* Z_Construct_UClass_URadialSlider_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSliderStyle();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnControllerCaptureBeginEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnControllerCaptureEndEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnMouseCaptureBeginEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnMouseCaptureEndEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvancedWidgets();
// End Cross Module References
	DEFINE_FUNCTION(URadialSlider::execSetShowSliderHand)
	{
		P_GET_UBOOL(Z_Param_InShowSliderHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowSliderHand(Z_Param_InShowSliderHand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadialSlider::execSetShowSliderHandle)
	{
		P_GET_UBOOL(Z_Param_InShowSliderHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowSliderHandle(Z_Param_InShowSliderHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadialSlider::execSetUseVerticalDrag)
	{
		P_GET_UBOOL(Z_Param_InUseVerticalDrag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseVerticalDrag(Z_Param_InUseVerticalDrag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadialSlider::execSetCenterBackgroundColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCenterBackgroundColor(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadialSlider::execSetSliderHandleColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSliderHandleColor(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadialSlider::execSetSliderProgressColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSliderProgressColor(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadialSlider::execSetSliderBarColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSliderBarColor(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadialSlider::execSetStepSize)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStepSize(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadialSlider::execSetLocked)
	{
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocked(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadialSlider::execSetHandStartEndRatio)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHandStartEndRatio(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadialSlider::execSetAngularOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngularOffset(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadialSlider::execSetSliderHandleEndAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSliderHandleEndAngle(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadialSlider::execSetSliderHandleStartAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSliderHandleStartAngle(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadialSlider::execSetValueTags)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_InValueTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueTags(Z_Param_Out_InValueTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadialSlider::execSetSliderRange)
	{
		P_GET_STRUCT_REF(FRuntimeFloatCurve,Z_Param_Out_InSliderRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSliderRange(Z_Param_Out_InSliderRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadialSlider::execSetCustomDefaultValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomDefaultValue(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadialSlider::execSetValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValue(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadialSlider::execGetNormalizedSliderHandlePosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNormalizedSliderHandlePosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadialSlider::execGetCustomDefaultValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCustomDefaultValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadialSlider::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	void URadialSlider::StaticRegisterNativesURadialSlider()
	{
		UClass* Class = URadialSlider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomDefaultValue", &URadialSlider::execGetCustomDefaultValue },
			{ "GetNormalizedSliderHandlePosition", &URadialSlider::execGetNormalizedSliderHandlePosition },
			{ "GetValue", &URadialSlider::execGetValue },
			{ "SetAngularOffset", &URadialSlider::execSetAngularOffset },
			{ "SetCenterBackgroundColor", &URadialSlider::execSetCenterBackgroundColor },
			{ "SetCustomDefaultValue", &URadialSlider::execSetCustomDefaultValue },
			{ "SetHandStartEndRatio", &URadialSlider::execSetHandStartEndRatio },
			{ "SetLocked", &URadialSlider::execSetLocked },
			{ "SetShowSliderHand", &URadialSlider::execSetShowSliderHand },
			{ "SetShowSliderHandle", &URadialSlider::execSetShowSliderHandle },
			{ "SetSliderBarColor", &URadialSlider::execSetSliderBarColor },
			{ "SetSliderHandleColor", &URadialSlider::execSetSliderHandleColor },
			{ "SetSliderHandleEndAngle", &URadialSlider::execSetSliderHandleEndAngle },
			{ "SetSliderHandleStartAngle", &URadialSlider::execSetSliderHandleStartAngle },
			{ "SetSliderProgressColor", &URadialSlider::execSetSliderProgressColor },
			{ "SetSliderRange", &URadialSlider::execSetSliderRange },
			{ "SetStepSize", &URadialSlider::execSetStepSize },
			{ "SetUseVerticalDrag", &URadialSlider::execSetUseVerticalDrag },
			{ "SetValue", &URadialSlider::execSetValue },
			{ "SetValueTags", &URadialSlider::execSetValueTags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URadialSlider_GetCustomDefaultValue_Statics
	{
		struct RadialSlider_eventGetCustomDefaultValue_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URadialSlider_GetCustomDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RadialSlider_eventGetCustomDefaultValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialSlider_GetCustomDefaultValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialSlider_GetCustomDefaultValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialSlider_GetCustomDefaultValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Gets the current custom default value of the slider. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Gets the current custom default value of the slider." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialSlider_GetCustomDefaultValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialSlider, nullptr, "GetCustomDefaultValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadialSlider_GetCustomDefaultValue_Statics::RadialSlider_eventGetCustomDefaultValue_Parms), Z_Construct_UFunction_URadialSlider_GetCustomDefaultValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_GetCustomDefaultValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialSlider_GetCustomDefaultValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_GetCustomDefaultValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialSlider_GetCustomDefaultValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialSlider_GetCustomDefaultValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialSlider_GetNormalizedSliderHandlePosition_Statics
	{
		struct RadialSlider_eventGetNormalizedSliderHandlePosition_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URadialSlider_GetNormalizedSliderHandlePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RadialSlider_eventGetNormalizedSliderHandlePosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialSlider_GetNormalizedSliderHandlePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialSlider_GetNormalizedSliderHandlePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialSlider_GetNormalizedSliderHandlePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Get the current raw slider alpha from 0 to 1 */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Get the current raw slider alpha from 0 to 1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialSlider_GetNormalizedSliderHandlePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialSlider, nullptr, "GetNormalizedSliderHandlePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadialSlider_GetNormalizedSliderHandlePosition_Statics::RadialSlider_eventGetNormalizedSliderHandlePosition_Parms), Z_Construct_UFunction_URadialSlider_GetNormalizedSliderHandlePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_GetNormalizedSliderHandlePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialSlider_GetNormalizedSliderHandlePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_GetNormalizedSliderHandlePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialSlider_GetNormalizedSliderHandlePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialSlider_GetNormalizedSliderHandlePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialSlider_GetValue_Statics
	{
		struct RadialSlider_eventGetValue_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URadialSlider_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RadialSlider_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialSlider_GetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialSlider_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialSlider_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Gets the current value of the slider. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Gets the current value of the slider." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialSlider_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialSlider, nullptr, "GetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadialSlider_GetValue_Statics::RadialSlider_eventGetValue_Parms), Z_Construct_UFunction_URadialSlider_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialSlider_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialSlider_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialSlider_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialSlider_SetAngularOffset_Statics
	{
		struct RadialSlider_eventSetAngularOffset_Parms
		{
			float InValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URadialSlider_SetAngularOffset_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RadialSlider_eventSetAngularOffset_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialSlider_SetAngularOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialSlider_SetAngularOffset_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialSlider_SetAngularOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behaviour" },
		{ "Comment", "/** Sets the Angular Offset for the slider. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Sets the Angular Offset for the slider." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialSlider_SetAngularOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialSlider, nullptr, "SetAngularOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadialSlider_SetAngularOffset_Statics::RadialSlider_eventSetAngularOffset_Parms), Z_Construct_UFunction_URadialSlider_SetAngularOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetAngularOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialSlider_SetAngularOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetAngularOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialSlider_SetAngularOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialSlider_SetAngularOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialSlider_SetCenterBackgroundColor_Statics
	{
		struct RadialSlider_eventSetCenterBackgroundColor_Parms
		{
			FLinearColor InValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URadialSlider_SetCenterBackgroundColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RadialSlider_eventSetCenterBackgroundColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialSlider_SetCenterBackgroundColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialSlider_SetCenterBackgroundColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialSlider_SetCenterBackgroundColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the color of the slider bar */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Sets the color of the slider bar" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialSlider_SetCenterBackgroundColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialSlider, nullptr, "SetCenterBackgroundColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadialSlider_SetCenterBackgroundColor_Statics::RadialSlider_eventSetCenterBackgroundColor_Parms), Z_Construct_UFunction_URadialSlider_SetCenterBackgroundColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetCenterBackgroundColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialSlider_SetCenterBackgroundColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetCenterBackgroundColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialSlider_SetCenterBackgroundColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialSlider_SetCenterBackgroundColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialSlider_SetCustomDefaultValue_Statics
	{
		struct RadialSlider_eventSetCustomDefaultValue_Parms
		{
			float InValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URadialSlider_SetCustomDefaultValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RadialSlider_eventSetCustomDefaultValue_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialSlider_SetCustomDefaultValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialSlider_SetCustomDefaultValue_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialSlider_SetCustomDefaultValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the current custom default value of the slider. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Sets the current custom default value of the slider." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialSlider_SetCustomDefaultValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialSlider, nullptr, "SetCustomDefaultValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadialSlider_SetCustomDefaultValue_Statics::RadialSlider_eventSetCustomDefaultValue_Parms), Z_Construct_UFunction_URadialSlider_SetCustomDefaultValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetCustomDefaultValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialSlider_SetCustomDefaultValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetCustomDefaultValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialSlider_SetCustomDefaultValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialSlider_SetCustomDefaultValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialSlider_SetHandStartEndRatio_Statics
	{
		struct RadialSlider_eventSetHandStartEndRatio_Parms
		{
			FVector2D InValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URadialSlider_SetHandStartEndRatio_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RadialSlider_eventSetHandStartEndRatio_Parms, InValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialSlider_SetHandStartEndRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialSlider_SetHandStartEndRatio_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialSlider_SetHandStartEndRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the start and end of the hand as a ratio to the slider radius (so 0.0 to 1.0 is from the slider center to the handle). */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Sets the start and end of the hand as a ratio to the slider radius (so 0.0 to 1.0 is from the slider center to the handle)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialSlider_SetHandStartEndRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialSlider, nullptr, "SetHandStartEndRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadialSlider_SetHandStartEndRatio_Statics::RadialSlider_eventSetHandStartEndRatio_Parms), Z_Construct_UFunction_URadialSlider_SetHandStartEndRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetHandStartEndRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialSlider_SetHandStartEndRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetHandStartEndRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialSlider_SetHandStartEndRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialSlider_SetHandStartEndRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialSlider_SetLocked_Statics
	{
		struct RadialSlider_eventSetLocked_Parms
		{
			bool InValue;
		};
		static void NewProp_InValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URadialSlider_SetLocked_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((RadialSlider_eventSetLocked_Parms*)Obj)->InValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URadialSlider_SetLocked_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RadialSlider_eventSetLocked_Parms), &Z_Construct_UFunction_URadialSlider_SetLocked_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialSlider_SetLocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialSlider_SetLocked_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialSlider_SetLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the handle to be interactive or fixed */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Sets the handle to be interactive or fixed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialSlider_SetLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialSlider, nullptr, "SetLocked", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadialSlider_SetLocked_Statics::RadialSlider_eventSetLocked_Parms), Z_Construct_UFunction_URadialSlider_SetLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialSlider_SetLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialSlider_SetLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialSlider_SetLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialSlider_SetShowSliderHand_Statics
	{
		struct RadialSlider_eventSetShowSliderHand_Parms
		{
			bool InShowSliderHand;
		};
		static void NewProp_InShowSliderHand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InShowSliderHand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URadialSlider_SetShowSliderHand_Statics::NewProp_InShowSliderHand_SetBit(void* Obj)
	{
		((RadialSlider_eventSetShowSliderHand_Parms*)Obj)->InShowSliderHand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URadialSlider_SetShowSliderHand_Statics::NewProp_InShowSliderHand = { "InShowSliderHand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RadialSlider_eventSetShowSliderHand_Parms), &Z_Construct_UFunction_URadialSlider_SetShowSliderHand_Statics::NewProp_InShowSliderHand_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialSlider_SetShowSliderHand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialSlider_SetShowSliderHand_Statics::NewProp_InShowSliderHand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialSlider_SetShowSliderHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether to show the slider hand. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Whether to show the slider hand." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialSlider_SetShowSliderHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialSlider, nullptr, "SetShowSliderHand", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadialSlider_SetShowSliderHand_Statics::RadialSlider_eventSetShowSliderHand_Parms), Z_Construct_UFunction_URadialSlider_SetShowSliderHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetShowSliderHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialSlider_SetShowSliderHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetShowSliderHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialSlider_SetShowSliderHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialSlider_SetShowSliderHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialSlider_SetShowSliderHandle_Statics
	{
		struct RadialSlider_eventSetShowSliderHandle_Parms
		{
			bool InShowSliderHandle;
		};
		static void NewProp_InShowSliderHandle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InShowSliderHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URadialSlider_SetShowSliderHandle_Statics::NewProp_InShowSliderHandle_SetBit(void* Obj)
	{
		((RadialSlider_eventSetShowSliderHandle_Parms*)Obj)->InShowSliderHandle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URadialSlider_SetShowSliderHandle_Statics::NewProp_InShowSliderHandle = { "InShowSliderHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RadialSlider_eventSetShowSliderHandle_Parms), &Z_Construct_UFunction_URadialSlider_SetShowSliderHandle_Statics::NewProp_InShowSliderHandle_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialSlider_SetShowSliderHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialSlider_SetShowSliderHandle_Statics::NewProp_InShowSliderHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialSlider_SetShowSliderHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether to show the slider handle (thumb). */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Whether to show the slider handle (thumb)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialSlider_SetShowSliderHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialSlider, nullptr, "SetShowSliderHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadialSlider_SetShowSliderHandle_Statics::RadialSlider_eventSetShowSliderHandle_Parms), Z_Construct_UFunction_URadialSlider_SetShowSliderHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetShowSliderHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialSlider_SetShowSliderHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetShowSliderHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialSlider_SetShowSliderHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialSlider_SetShowSliderHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialSlider_SetSliderBarColor_Statics
	{
		struct RadialSlider_eventSetSliderBarColor_Parms
		{
			FLinearColor InValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URadialSlider_SetSliderBarColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RadialSlider_eventSetSliderBarColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialSlider_SetSliderBarColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialSlider_SetSliderBarColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialSlider_SetSliderBarColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the color of the slider bar */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Sets the color of the slider bar" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialSlider_SetSliderBarColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialSlider, nullptr, "SetSliderBarColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadialSlider_SetSliderBarColor_Statics::RadialSlider_eventSetSliderBarColor_Parms), Z_Construct_UFunction_URadialSlider_SetSliderBarColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetSliderBarColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialSlider_SetSliderBarColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetSliderBarColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialSlider_SetSliderBarColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialSlider_SetSliderBarColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialSlider_SetSliderHandleColor_Statics
	{
		struct RadialSlider_eventSetSliderHandleColor_Parms
		{
			FLinearColor InValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URadialSlider_SetSliderHandleColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RadialSlider_eventSetSliderHandleColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialSlider_SetSliderHandleColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialSlider_SetSliderHandleColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialSlider_SetSliderHandleColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the color of the handle bar */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Sets the color of the handle bar" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialSlider_SetSliderHandleColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialSlider, nullptr, "SetSliderHandleColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadialSlider_SetSliderHandleColor_Statics::RadialSlider_eventSetSliderHandleColor_Parms), Z_Construct_UFunction_URadialSlider_SetSliderHandleColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetSliderHandleColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialSlider_SetSliderHandleColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetSliderHandleColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialSlider_SetSliderHandleColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialSlider_SetSliderHandleColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialSlider_SetSliderHandleEndAngle_Statics
	{
		struct RadialSlider_eventSetSliderHandleEndAngle_Parms
		{
			float InValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URadialSlider_SetSliderHandleEndAngle_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RadialSlider_eventSetSliderHandleEndAngle_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialSlider_SetSliderHandleEndAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialSlider_SetSliderHandleEndAngle_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialSlider_SetSliderHandleEndAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the maximum angle of the slider. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Sets the maximum angle of the slider." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialSlider_SetSliderHandleEndAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialSlider, nullptr, "SetSliderHandleEndAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadialSlider_SetSliderHandleEndAngle_Statics::RadialSlider_eventSetSliderHandleEndAngle_Parms), Z_Construct_UFunction_URadialSlider_SetSliderHandleEndAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetSliderHandleEndAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialSlider_SetSliderHandleEndAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetSliderHandleEndAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialSlider_SetSliderHandleEndAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialSlider_SetSliderHandleEndAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialSlider_SetSliderHandleStartAngle_Statics
	{
		struct RadialSlider_eventSetSliderHandleStartAngle_Parms
		{
			float InValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URadialSlider_SetSliderHandleStartAngle_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RadialSlider_eventSetSliderHandleStartAngle_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialSlider_SetSliderHandleStartAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialSlider_SetSliderHandleStartAngle_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialSlider_SetSliderHandleStartAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the minimum angle of the slider. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Sets the minimum angle of the slider." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialSlider_SetSliderHandleStartAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialSlider, nullptr, "SetSliderHandleStartAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadialSlider_SetSliderHandleStartAngle_Statics::RadialSlider_eventSetSliderHandleStartAngle_Parms), Z_Construct_UFunction_URadialSlider_SetSliderHandleStartAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetSliderHandleStartAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialSlider_SetSliderHandleStartAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetSliderHandleStartAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialSlider_SetSliderHandleStartAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialSlider_SetSliderHandleStartAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialSlider_SetSliderProgressColor_Statics
	{
		struct RadialSlider_eventSetSliderProgressColor_Parms
		{
			FLinearColor InValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URadialSlider_SetSliderProgressColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RadialSlider_eventSetSliderProgressColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialSlider_SetSliderProgressColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialSlider_SetSliderProgressColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialSlider_SetSliderProgressColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the progress color of the slider bar */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Sets the progress color of the slider bar" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialSlider_SetSliderProgressColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialSlider, nullptr, "SetSliderProgressColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadialSlider_SetSliderProgressColor_Statics::RadialSlider_eventSetSliderProgressColor_Parms), Z_Construct_UFunction_URadialSlider_SetSliderProgressColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetSliderProgressColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialSlider_SetSliderProgressColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetSliderProgressColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialSlider_SetSliderProgressColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialSlider_SetSliderProgressColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialSlider_SetSliderRange_Statics
	{
		struct RadialSlider_eventSetSliderRange_Parms
		{
			FRuntimeFloatCurve InSliderRange;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSliderRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSliderRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialSlider_SetSliderRange_Statics::NewProp_InSliderRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URadialSlider_SetSliderRange_Statics::NewProp_InSliderRange = { "InSliderRange", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RadialSlider_eventSetSliderRange_Parms, InSliderRange), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UFunction_URadialSlider_SetSliderRange_Statics::NewProp_InSliderRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetSliderRange_Statics::NewProp_InSliderRange_MetaData)) }; // 1477693291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialSlider_SetSliderRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialSlider_SetSliderRange_Statics::NewProp_InSliderRange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialSlider_SetSliderRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behaviour" },
		{ "Comment", "/** Sets the curve for the slider range*/" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Sets the curve for the slider range" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialSlider_SetSliderRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialSlider, nullptr, "SetSliderRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadialSlider_SetSliderRange_Statics::RadialSlider_eventSetSliderRange_Parms), Z_Construct_UFunction_URadialSlider_SetSliderRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetSliderRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialSlider_SetSliderRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetSliderRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialSlider_SetSliderRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialSlider_SetSliderRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialSlider_SetStepSize_Statics
	{
		struct RadialSlider_eventSetStepSize_Parms
		{
			float InValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URadialSlider_SetStepSize_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RadialSlider_eventSetStepSize_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialSlider_SetStepSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialSlider_SetStepSize_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialSlider_SetStepSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the amount to adjust the value by, when using a controller or keyboard */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Sets the amount to adjust the value by, when using a controller or keyboard" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialSlider_SetStepSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialSlider, nullptr, "SetStepSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadialSlider_SetStepSize_Statics::RadialSlider_eventSetStepSize_Parms), Z_Construct_UFunction_URadialSlider_SetStepSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetStepSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialSlider_SetStepSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetStepSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialSlider_SetStepSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialSlider_SetStepSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialSlider_SetUseVerticalDrag_Statics
	{
		struct RadialSlider_eventSetUseVerticalDrag_Parms
		{
			bool InUseVerticalDrag;
		};
		static void NewProp_InUseVerticalDrag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InUseVerticalDrag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URadialSlider_SetUseVerticalDrag_Statics::NewProp_InUseVerticalDrag_SetBit(void* Obj)
	{
		((RadialSlider_eventSetUseVerticalDrag_Parms*)Obj)->InUseVerticalDrag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URadialSlider_SetUseVerticalDrag_Statics::NewProp_InUseVerticalDrag = { "InUseVerticalDrag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RadialSlider_eventSetUseVerticalDrag_Parms), &Z_Construct_UFunction_URadialSlider_SetUseVerticalDrag_Statics::NewProp_InUseVerticalDrag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialSlider_SetUseVerticalDrag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialSlider_SetUseVerticalDrag_Statics::NewProp_InUseVerticalDrag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialSlider_SetUseVerticalDrag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Set whether the value is changed when dragging vertically as opposed to along the radial curve.  */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Set whether the value is changed when dragging vertically as opposed to along the radial curve." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialSlider_SetUseVerticalDrag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialSlider, nullptr, "SetUseVerticalDrag", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadialSlider_SetUseVerticalDrag_Statics::RadialSlider_eventSetUseVerticalDrag_Parms), Z_Construct_UFunction_URadialSlider_SetUseVerticalDrag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetUseVerticalDrag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialSlider_SetUseVerticalDrag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetUseVerticalDrag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialSlider_SetUseVerticalDrag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialSlider_SetUseVerticalDrag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialSlider_SetValue_Statics
	{
		struct RadialSlider_eventSetValue_Parms
		{
			float InValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URadialSlider_SetValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RadialSlider_eventSetValue_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialSlider_SetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialSlider_SetValue_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialSlider_SetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the current value of the slider. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Sets the current value of the slider." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialSlider_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialSlider, nullptr, "SetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadialSlider_SetValue_Statics::RadialSlider_eventSetValue_Parms), Z_Construct_UFunction_URadialSlider_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialSlider_SetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialSlider_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialSlider_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialSlider_SetValueTags_Statics
	{
		struct RadialSlider_eventSetValueTags_Parms
		{
			TArray<float> InValueTags;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValueTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValueTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InValueTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URadialSlider_SetValueTags_Statics::NewProp_InValueTags_Inner = { "InValueTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialSlider_SetValueTags_Statics::NewProp_InValueTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URadialSlider_SetValueTags_Statics::NewProp_InValueTags = { "InValueTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RadialSlider_eventSetValueTags_Parms, InValueTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URadialSlider_SetValueTags_Statics::NewProp_InValueTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetValueTags_Statics::NewProp_InValueTags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialSlider_SetValueTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialSlider_SetValueTags_Statics::NewProp_InValueTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialSlider_SetValueTags_Statics::NewProp_InValueTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialSlider_SetValueTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behaviour" },
		{ "Comment", "/** Adds value tags to the slider. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Adds value tags to the slider." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialSlider_SetValueTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialSlider, nullptr, "SetValueTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadialSlider_SetValueTags_Statics::RadialSlider_eventSetValueTags_Parms), Z_Construct_UFunction_URadialSlider_SetValueTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetValueTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialSlider_SetValueTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialSlider_SetValueTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialSlider_SetValueTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialSlider_SetValueTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URadialSlider);
	UClass* Z_Construct_UClass_URadialSlider_NoRegister()
	{
		return URadialSlider::StaticClass();
	}
	struct Z_Construct_UClass_URadialSlider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_ValueDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomDefaultValue_MetaData[];
#endif
		static void NewProp_bUseCustomDefaultValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomDefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomDefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomDefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SliderRange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ValueTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ValueTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderHandleStartAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SliderHandleStartAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderHandleEndAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SliderHandleEndAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandStartEndRatio_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandStartEndRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderBarColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SliderBarColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderProgressColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SliderProgressColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderHandleColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SliderHandleColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CenterBackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Locked_MetaData[];
#endif
		static void NewProp_Locked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Locked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseUsesStep_MetaData[];
#endif
		static void NewProp_MouseUsesStep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MouseUsesStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiresControllerLock_MetaData[];
#endif
		static void NewProp_RequiresControllerLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RequiresControllerLock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsFocusable_MetaData[];
#endif
		static void NewProp_IsFocusable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFocusable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseVerticalDrag_MetaData[];
#endif
		static void NewProp_UseVerticalDrag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseVerticalDrag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowSliderHandle_MetaData[];
#endif
		static void NewProp_ShowSliderHandle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowSliderHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowSliderHand_MetaData[];
#endif
		static void NewProp_ShowSliderHand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowSliderHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseCaptureBegin_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMouseCaptureBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseCaptureEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMouseCaptureEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnControllerCaptureBegin_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControllerCaptureBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnControllerCaptureEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControllerCaptureEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnValueChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URadialSlider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedWidgets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URadialSlider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URadialSlider_GetCustomDefaultValue, "GetCustomDefaultValue" }, // 427937687
		{ &Z_Construct_UFunction_URadialSlider_GetNormalizedSliderHandlePosition, "GetNormalizedSliderHandlePosition" }, // 880692479
		{ &Z_Construct_UFunction_URadialSlider_GetValue, "GetValue" }, // 4254721120
		{ &Z_Construct_UFunction_URadialSlider_SetAngularOffset, "SetAngularOffset" }, // 1911660997
		{ &Z_Construct_UFunction_URadialSlider_SetCenterBackgroundColor, "SetCenterBackgroundColor" }, // 548241978
		{ &Z_Construct_UFunction_URadialSlider_SetCustomDefaultValue, "SetCustomDefaultValue" }, // 955636998
		{ &Z_Construct_UFunction_URadialSlider_SetHandStartEndRatio, "SetHandStartEndRatio" }, // 3699389297
		{ &Z_Construct_UFunction_URadialSlider_SetLocked, "SetLocked" }, // 3008536844
		{ &Z_Construct_UFunction_URadialSlider_SetShowSliderHand, "SetShowSliderHand" }, // 794047723
		{ &Z_Construct_UFunction_URadialSlider_SetShowSliderHandle, "SetShowSliderHandle" }, // 1831135047
		{ &Z_Construct_UFunction_URadialSlider_SetSliderBarColor, "SetSliderBarColor" }, // 3508924678
		{ &Z_Construct_UFunction_URadialSlider_SetSliderHandleColor, "SetSliderHandleColor" }, // 476611811
		{ &Z_Construct_UFunction_URadialSlider_SetSliderHandleEndAngle, "SetSliderHandleEndAngle" }, // 2059360363
		{ &Z_Construct_UFunction_URadialSlider_SetSliderHandleStartAngle, "SetSliderHandleStartAngle" }, // 1933827679
		{ &Z_Construct_UFunction_URadialSlider_SetSliderProgressColor, "SetSliderProgressColor" }, // 2874500970
		{ &Z_Construct_UFunction_URadialSlider_SetSliderRange, "SetSliderRange" }, // 1441497
		{ &Z_Construct_UFunction_URadialSlider_SetStepSize, "SetStepSize" }, // 739557409
		{ &Z_Construct_UFunction_URadialSlider_SetUseVerticalDrag, "SetUseVerticalDrag" }, // 1782942366
		{ &Z_Construct_UFunction_URadialSlider_SetValue, "SetValue" }, // 3409082877
		{ &Z_Construct_UFunction_URadialSlider_SetValueTags, "SetValueTags" }, // 2545478626
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A simple widget that shows a sliding bar with a handle that allows you to control the value between 0..1.\n *\n * * No Children\n */" },
		{ "IncludePath", "Components/RadialSlider.h" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "A simple widget that shows a sliding bar with a handle that allows you to control the value between 0..1.\n\n* No Children" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_Value_MetaData[] = {
		{ "BlueprintSetter", "SetValue" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The slider value to display. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "The slider value to display." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialSlider, Value), METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_ValueDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the value of the widget */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the value of the widget" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_ValueDelegate = { "ValueDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialSlider, ValueDelegate), Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_ValueDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_ValueDelegate_MetaData)) }; // 3819155322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_bUseCustomDefaultValue_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether the slider should draw it's progress bar from a custom value on the slider */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Whether the slider should draw it's progress bar from a custom value on the slider" },
	};
#endif
	void Z_Construct_UClass_URadialSlider_Statics::NewProp_bUseCustomDefaultValue_SetBit(void* Obj)
	{
		((URadialSlider*)Obj)->bUseCustomDefaultValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_bUseCustomDefaultValue = { "bUseCustomDefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URadialSlider), &Z_Construct_UClass_URadialSlider_Statics::NewProp_bUseCustomDefaultValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_bUseCustomDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_bUseCustomDefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_CustomDefaultValue_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  The value where the slider should draw it's progress bar from, independent of direction */" },
		{ "EditCondition", "bUseCustomDefaultValue" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "The value where the slider should draw it's progress bar from, independent of direction" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_CustomDefaultValue = { "CustomDefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialSlider, CustomDefaultValue), METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_CustomDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_CustomDefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderRange_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** A curve that defines how the slider should be sampled. Default is linear. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "A curve that defines how the slider should be sampled. Default is linear." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderRange = { "SliderRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialSlider, SliderRange), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderRange_MetaData)) }; // 1477693291
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_ValueTags_Inner = { "ValueTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_ValueTags_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Adds text tags to the radial slider at the value's position. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Adds text tags to the radial slider at the value's position." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_ValueTags = { "ValueTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialSlider, ValueTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_ValueTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_ValueTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderHandleStartAngle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The angle at which the Slider Handle will start. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "The angle at which the Slider Handle will start." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderHandleStartAngle = { "SliderHandleStartAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialSlider, SliderHandleStartAngle), METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderHandleStartAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderHandleStartAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderHandleEndAngle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The angle at which the Slider Handle will end. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "The angle at which the Slider Handle will end." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderHandleEndAngle = { "SliderHandleEndAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialSlider, SliderHandleEndAngle), METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderHandleEndAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderHandleEndAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_AngularOffset_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Rotates radial slider by arbitrary offset to support full gamut of configurations. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Rotates radial slider by arbitrary offset to support full gamut of configurations." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_AngularOffset = { "AngularOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialSlider, AngularOffset), METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_AngularOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_AngularOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_HandStartEndRatio_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Start and end of the hand as a ratio to the slider radius (so 0.0 to 1.0 is from the slider center to the handle). */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Start and end of the hand as a ratio to the slider radius (so 0.0 to 1.0 is from the slider center to the handle)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_HandStartEndRatio = { "HandStartEndRatio", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialSlider, HandStartEndRatio), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_HandStartEndRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_HandStartEndRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The progress bar style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "The progress bar style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialSlider, WidgetStyle), Z_Construct_UScriptStruct_FSliderStyle, METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_WidgetStyle_MetaData)) }; // 4127039365
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderBarColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the slider bar in. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "The color to draw the slider bar in." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderBarColor = { "SliderBarColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialSlider, SliderBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderBarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderBarColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderProgressColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the completed progress of the slider bar in. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "The color to draw the completed progress of the slider bar in." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderProgressColor = { "SliderProgressColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialSlider, SliderProgressColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderProgressColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderProgressColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderHandleColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the slider handle in. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "The color to draw the slider handle in." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderHandleColor = { "SliderHandleColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialSlider, SliderHandleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderHandleColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderHandleColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_CenterBackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the center background in. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "The color to draw the center background in." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_CenterBackgroundColor = { "CenterBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialSlider, CenterBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_CenterBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_CenterBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_Locked_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether the handle is interactive or fixed. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Whether the handle is interactive or fixed." },
	};
#endif
	void Z_Construct_UClass_URadialSlider_Statics::NewProp_Locked_SetBit(void* Obj)
	{
		((URadialSlider*)Obj)->Locked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_Locked = { "Locked", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URadialSlider), &Z_Construct_UClass_URadialSlider_Statics::NewProp_Locked_SetBit, METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_Locked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_Locked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_MouseUsesStep_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets new value if mouse position is greater/less than half the step size. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Sets new value if mouse position is greater/less than half the step size." },
	};
#endif
	void Z_Construct_UClass_URadialSlider_Statics::NewProp_MouseUsesStep_SetBit(void* Obj)
	{
		((URadialSlider*)Obj)->MouseUsesStep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_MouseUsesStep = { "MouseUsesStep", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URadialSlider), &Z_Construct_UClass_URadialSlider_Statics::NewProp_MouseUsesStep_SetBit, METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_MouseUsesStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_MouseUsesStep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_RequiresControllerLock_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets whether we have to lock input to change the slider value. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Sets whether we have to lock input to change the slider value." },
	};
#endif
	void Z_Construct_UClass_URadialSlider_Statics::NewProp_RequiresControllerLock_SetBit(void* Obj)
	{
		((URadialSlider*)Obj)->RequiresControllerLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_RequiresControllerLock = { "RequiresControllerLock", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URadialSlider), &Z_Construct_UClass_URadialSlider_Statics::NewProp_RequiresControllerLock_SetBit, METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_RequiresControllerLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_RequiresControllerLock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_StepSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The amount to adjust the value by, when using a controller or keyboard */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "The amount to adjust the value by, when using a controller or keyboard" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialSlider, StepSize), METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_StepSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_StepSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_IsFocusable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Should the slider be focusable? */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Should the slider be focusable?" },
	};
#endif
	void Z_Construct_UClass_URadialSlider_Statics::NewProp_IsFocusable_SetBit(void* Obj)
	{
		((URadialSlider*)Obj)->IsFocusable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_IsFocusable = { "IsFocusable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URadialSlider), &Z_Construct_UClass_URadialSlider_Statics::NewProp_IsFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_IsFocusable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_IsFocusable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_UseVerticalDrag_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Whether the value is changed when dragging vertically as opposed to along the radial curve.  */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Whether the value is changed when dragging vertically as opposed to along the radial curve." },
	};
#endif
	void Z_Construct_UClass_URadialSlider_Statics::NewProp_UseVerticalDrag_SetBit(void* Obj)
	{
		((URadialSlider*)Obj)->UseVerticalDrag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_UseVerticalDrag = { "UseVerticalDrag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URadialSlider), &Z_Construct_UClass_URadialSlider_Statics::NewProp_UseVerticalDrag_SetBit, METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_UseVerticalDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_UseVerticalDrag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_ShowSliderHandle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether to show the slider handle (thumb).  */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Whether to show the slider handle (thumb)." },
	};
#endif
	void Z_Construct_UClass_URadialSlider_Statics::NewProp_ShowSliderHandle_SetBit(void* Obj)
	{
		((URadialSlider*)Obj)->ShowSliderHandle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_ShowSliderHandle = { "ShowSliderHandle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URadialSlider), &Z_Construct_UClass_URadialSlider_Statics::NewProp_ShowSliderHandle_SetBit, METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_ShowSliderHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_ShowSliderHandle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_ShowSliderHand_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether to show the slider hand.  */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Whether to show the slider hand." },
	};
#endif
	void Z_Construct_UClass_URadialSlider_Statics::NewProp_ShowSliderHand_SetBit(void* Obj)
	{
		((URadialSlider*)Obj)->ShowSliderHand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_ShowSliderHand = { "ShowSliderHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URadialSlider), &Z_Construct_UClass_URadialSlider_Statics::NewProp_ShowSliderHand_SetBit, METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_ShowSliderHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_ShowSliderHand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_OnMouseCaptureBegin_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Invoked when the mouse is pressed and a capture begins. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Invoked when the mouse is pressed and a capture begins." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_OnMouseCaptureBegin = { "OnMouseCaptureBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialSlider, OnMouseCaptureBegin), Z_Construct_UDelegateFunction_UMG_OnMouseCaptureBeginEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_OnMouseCaptureBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_OnMouseCaptureBegin_MetaData)) }; // 506200144
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_OnMouseCaptureEnd_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Invoked when the mouse is released and a capture ends. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Invoked when the mouse is released and a capture ends." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_OnMouseCaptureEnd = { "OnMouseCaptureEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialSlider, OnMouseCaptureEnd), Z_Construct_UDelegateFunction_UMG_OnMouseCaptureEndEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_OnMouseCaptureEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_OnMouseCaptureEnd_MetaData)) }; // 4118740634
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_OnControllerCaptureBegin_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Invoked when the controller capture begins. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Invoked when the controller capture begins." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_OnControllerCaptureBegin = { "OnControllerCaptureBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialSlider, OnControllerCaptureBegin), Z_Construct_UDelegateFunction_UMG_OnControllerCaptureBeginEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_OnControllerCaptureBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_OnControllerCaptureBegin_MetaData)) }; // 2734853032
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_OnControllerCaptureEnd_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Invoked when the controller capture ends. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Invoked when the controller capture ends." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_OnControllerCaptureEnd = { "OnControllerCaptureEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialSlider, OnControllerCaptureEnd), Z_Construct_UDelegateFunction_UMG_OnControllerCaptureEndEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_OnControllerCaptureEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_OnControllerCaptureEnd_MetaData)) }; // 2999277929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialSlider_Statics::NewProp_OnValueChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called when the value is changed by slider or typing. */" },
		{ "ModuleRelativePath", "Public/Components/RadialSlider.h" },
		{ "ToolTip", "Called when the value is changed by slider or typing." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URadialSlider_Statics::NewProp_OnValueChanged = { "OnValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialSlider, OnValueChanged), Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::NewProp_OnValueChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::NewProp_OnValueChanged_MetaData)) }; // 74366326
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URadialSlider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_ValueDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_bUseCustomDefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_CustomDefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_ValueTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_ValueTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderHandleStartAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderHandleEndAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_AngularOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_HandStartEndRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_WidgetStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderBarColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderProgressColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_SliderHandleColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_CenterBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_Locked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_MouseUsesStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_RequiresControllerLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_StepSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_IsFocusable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_UseVerticalDrag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_ShowSliderHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_ShowSliderHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_OnMouseCaptureBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_OnMouseCaptureEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_OnControllerCaptureBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_OnControllerCaptureEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialSlider_Statics::NewProp_OnValueChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URadialSlider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URadialSlider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URadialSlider_Statics::ClassParams = {
		&URadialSlider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URadialSlider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URadialSlider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URadialSlider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URadialSlider()
	{
		if (!Z_Registration_Info_UClass_URadialSlider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URadialSlider.OuterSingleton, Z_Construct_UClass_URadialSlider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URadialSlider.OuterSingleton;
	}
	template<> ADVANCEDWIDGETS_API UClass* StaticClass<URadialSlider>()
	{
		return URadialSlider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URadialSlider);
	URadialSlider::~URadialSlider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URadialSlider, URadialSlider::StaticClass, TEXT("URadialSlider"), &Z_Registration_Info_UClass_URadialSlider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URadialSlider), 1847827512U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_1644027043(TEXT("/Script/AdvancedWidgets"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
