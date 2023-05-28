// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioRadialSlider.h"
#include "Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioRadialSlider() {}
// Cross Module References
	AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioFrequencyRadialSlider();
	AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioFrequencyRadialSlider_NoRegister();
	AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioRadialSlider();
	AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioRadialSlider_NoRegister();
	AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioVolumeRadialSlider();
	AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioVolumeRadialSlider_NoRegister();
	AUDIOWIDGETS_API UEnum* Z_Construct_UEnum_AudioWidgets_EAudioRadialSliderLayout();
	AUDIOWIDGETS_API UFunction* Z_Construct_UDelegateFunction_AudioWidgets_OnAudioRadialSliderValueChangedEvent__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AudioWidgets_OnAudioRadialSliderValueChangedEvent__DelegateSignature_Statics
	{
		struct _Script_AudioWidgets_eventOnAudioRadialSliderValueChangedEvent_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AudioWidgets_OnAudioRadialSliderValueChangedEvent__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AudioWidgets_eventOnAudioRadialSliderValueChangedEvent_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioWidgets_OnAudioRadialSliderValueChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioWidgets_OnAudioRadialSliderValueChangedEvent__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioWidgets_OnAudioRadialSliderValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioWidgets_OnAudioRadialSliderValueChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioWidgets, nullptr, "OnAudioRadialSliderValueChangedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AudioWidgets_OnAudioRadialSliderValueChangedEvent__DelegateSignature_Statics::_Script_AudioWidgets_eventOnAudioRadialSliderValueChangedEvent_Parms), Z_Construct_UDelegateFunction_AudioWidgets_OnAudioRadialSliderValueChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioWidgets_OnAudioRadialSliderValueChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioWidgets_OnAudioRadialSliderValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioWidgets_OnAudioRadialSliderValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioWidgets_OnAudioRadialSliderValueChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioWidgets_OnAudioRadialSliderValueChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAudioRadialSliderValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnAudioRadialSliderValueChangedEvent, float Value)
{
	struct _Script_AudioWidgets_eventOnAudioRadialSliderValueChangedEvent_Parms
	{
		float Value;
	};
	_Script_AudioWidgets_eventOnAudioRadialSliderValueChangedEvent_Parms Parms;
	Parms.Value=Value;
	OnAudioRadialSliderValueChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAudioRadialSlider::execSetOutputRange)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InOutputRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutputRange(Z_Param_InOutputRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioRadialSlider::execSetSliderThickness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InThickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSliderThickness(Z_Param_InThickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioRadialSlider::execSetShowUnitsText)
	{
		P_GET_UBOOL(Z_Param_bShowUnitsText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowUnitsText(Z_Param_bShowUnitsText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioRadialSlider::execSetShowLabelOnlyOnHover)
	{
		P_GET_UBOOL(Z_Param_bShowLabelOnlyOnHover);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowLabelOnlyOnHover(Z_Param_bShowLabelOnlyOnHover);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioRadialSlider::execSetValueTextReadOnly)
	{
		P_GET_UBOOL(Z_Param_bIsReadOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueTextReadOnly(Z_Param_bIsReadOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioRadialSlider::execSetUnitsTextReadOnly)
	{
		P_GET_UBOOL(Z_Param_bIsReadOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUnitsTextReadOnly(Z_Param_bIsReadOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioRadialSlider::execSetUnitsText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_Units);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUnitsText(Z_Param_Units);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioRadialSlider::execSetTextLabelBackgroundColor)
	{
		P_GET_STRUCT(FSlateColor,Z_Param_InColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextLabelBackgroundColor(Z_Param_InColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioRadialSlider::execSetHandStartEndRatio)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InHandStartEndRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHandStartEndRatio(Z_Param_InHandStartEndRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioRadialSlider::execSetSliderBarColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSliderBarColor(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioRadialSlider::execSetSliderProgressColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSliderProgressColor(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioRadialSlider::execSetCenterBackgroundColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCenterBackgroundColor(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioRadialSlider::execSetWidgetLayout)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InLayout);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetLayout(EAudioRadialSliderLayout(Z_Param_InLayout));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioRadialSlider::execGetSliderValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_OutputValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSliderValue(Z_Param_OutputValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioRadialSlider::execGetOutputValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSliderValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetOutputValue(Z_Param_InSliderValue);
		P_NATIVE_END;
	}
	void UAudioRadialSlider::StaticRegisterNativesUAudioRadialSlider()
	{
		UClass* Class = UAudioRadialSlider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOutputValue", &UAudioRadialSlider::execGetOutputValue },
			{ "GetSliderValue", &UAudioRadialSlider::execGetSliderValue },
			{ "SetCenterBackgroundColor", &UAudioRadialSlider::execSetCenterBackgroundColor },
			{ "SetHandStartEndRatio", &UAudioRadialSlider::execSetHandStartEndRatio },
			{ "SetOutputRange", &UAudioRadialSlider::execSetOutputRange },
			{ "SetShowLabelOnlyOnHover", &UAudioRadialSlider::execSetShowLabelOnlyOnHover },
			{ "SetShowUnitsText", &UAudioRadialSlider::execSetShowUnitsText },
			{ "SetSliderBarColor", &UAudioRadialSlider::execSetSliderBarColor },
			{ "SetSliderProgressColor", &UAudioRadialSlider::execSetSliderProgressColor },
			{ "SetSliderThickness", &UAudioRadialSlider::execSetSliderThickness },
			{ "SetTextLabelBackgroundColor", &UAudioRadialSlider::execSetTextLabelBackgroundColor },
			{ "SetUnitsText", &UAudioRadialSlider::execSetUnitsText },
			{ "SetUnitsTextReadOnly", &UAudioRadialSlider::execSetUnitsTextReadOnly },
			{ "SetValueTextReadOnly", &UAudioRadialSlider::execSetValueTextReadOnly },
			{ "SetWidgetLayout", &UAudioRadialSlider::execSetWidgetLayout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioRadialSlider_GetOutputValue_Statics
	{
		struct AudioRadialSlider_eventGetOutputValue_Parms
		{
			float InSliderValue;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSliderValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InSliderValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_GetOutputValue_Statics::NewProp_InSliderValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioRadialSlider_GetOutputValue_Statics::NewProp_InSliderValue = { "InSliderValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioRadialSlider_eventGetOutputValue_Parms, InSliderValue), METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_GetOutputValue_Statics::NewProp_InSliderValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_GetOutputValue_Statics::NewProp_InSliderValue_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioRadialSlider_GetOutputValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioRadialSlider_eventGetOutputValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioRadialSlider_GetOutputValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioRadialSlider_GetOutputValue_Statics::NewProp_InSliderValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioRadialSlider_GetOutputValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_GetOutputValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Get output value from normalized linear (0 - 1) based on internal lin to output mapping. */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "Get output value from normalized linear (0 - 1) based on internal lin to output mapping." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioRadialSlider_GetOutputValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioRadialSlider, nullptr, "GetOutputValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioRadialSlider_GetOutputValue_Statics::AudioRadialSlider_eventGetOutputValue_Parms), Z_Construct_UFunction_UAudioRadialSlider_GetOutputValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_GetOutputValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_GetOutputValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_GetOutputValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioRadialSlider_GetOutputValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioRadialSlider_GetOutputValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioRadialSlider_GetSliderValue_Statics
	{
		struct AudioRadialSlider_eventGetSliderValue_Parms
		{
			float OutputValue;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_GetSliderValue_Statics::NewProp_OutputValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioRadialSlider_GetSliderValue_Statics::NewProp_OutputValue = { "OutputValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioRadialSlider_eventGetSliderValue_Parms, OutputValue), METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_GetSliderValue_Statics::NewProp_OutputValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_GetSliderValue_Statics::NewProp_OutputValue_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioRadialSlider_GetSliderValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioRadialSlider_eventGetSliderValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioRadialSlider_GetSliderValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioRadialSlider_GetSliderValue_Statics::NewProp_OutputValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioRadialSlider_GetSliderValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_GetSliderValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Get normalized linear (0 - 1) slider value from output based on internal lin to output mapping. */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "Get normalized linear (0 - 1) slider value from output based on internal lin to output mapping." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioRadialSlider_GetSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioRadialSlider, nullptr, "GetSliderValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioRadialSlider_GetSliderValue_Statics::AudioRadialSlider_eventGetSliderValue_Parms), Z_Construct_UFunction_UAudioRadialSlider_GetSliderValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_GetSliderValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_GetSliderValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_GetSliderValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioRadialSlider_GetSliderValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioRadialSlider_GetSliderValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioRadialSlider_SetCenterBackgroundColor_Statics
	{
		struct AudioRadialSlider_eventSetCenterBackgroundColor_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioRadialSlider_SetCenterBackgroundColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioRadialSlider_eventSetCenterBackgroundColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioRadialSlider_SetCenterBackgroundColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioRadialSlider_SetCenterBackgroundColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_SetCenterBackgroundColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the label background color */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "Sets the label background color" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioRadialSlider_SetCenterBackgroundColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioRadialSlider, nullptr, "SetCenterBackgroundColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioRadialSlider_SetCenterBackgroundColor_Statics::AudioRadialSlider_eventSetCenterBackgroundColor_Parms), Z_Construct_UFunction_UAudioRadialSlider_SetCenterBackgroundColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetCenterBackgroundColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_SetCenterBackgroundColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetCenterBackgroundColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioRadialSlider_SetCenterBackgroundColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioRadialSlider_SetCenterBackgroundColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioRadialSlider_SetHandStartEndRatio_Statics
	{
		struct AudioRadialSlider_eventSetHandStartEndRatio_Parms
		{
			FVector2D InHandStartEndRatio;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InHandStartEndRatio_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InHandStartEndRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_SetHandStartEndRatio_Statics::NewProp_InHandStartEndRatio_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioRadialSlider_SetHandStartEndRatio_Statics::NewProp_InHandStartEndRatio = { "InHandStartEndRatio", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioRadialSlider_eventSetHandStartEndRatio_Parms, InHandStartEndRatio), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_SetHandStartEndRatio_Statics::NewProp_InHandStartEndRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetHandStartEndRatio_Statics::NewProp_InHandStartEndRatio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioRadialSlider_SetHandStartEndRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioRadialSlider_SetHandStartEndRatio_Statics::NewProp_InHandStartEndRatio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_SetHandStartEndRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the start and end of the hand as a ratio to the slider radius (so 0.0 to 1.0 is from the slider center to the handle). */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "Sets the start and end of the hand as a ratio to the slider radius (so 0.0 to 1.0 is from the slider center to the handle)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioRadialSlider_SetHandStartEndRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioRadialSlider, nullptr, "SetHandStartEndRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioRadialSlider_SetHandStartEndRatio_Statics::AudioRadialSlider_eventSetHandStartEndRatio_Parms), Z_Construct_UFunction_UAudioRadialSlider_SetHandStartEndRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetHandStartEndRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_SetHandStartEndRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetHandStartEndRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioRadialSlider_SetHandStartEndRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioRadialSlider_SetHandStartEndRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioRadialSlider_SetOutputRange_Statics
	{
		struct AudioRadialSlider_eventSetOutputRange_Parms
		{
			FVector2D InOutputRange;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOutputRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InOutputRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_SetOutputRange_Statics::NewProp_InOutputRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioRadialSlider_SetOutputRange_Statics::NewProp_InOutputRange = { "InOutputRange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioRadialSlider_eventSetOutputRange_Parms, InOutputRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_SetOutputRange_Statics::NewProp_InOutputRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetOutputRange_Statics::NewProp_InOutputRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioRadialSlider_SetOutputRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioRadialSlider_SetOutputRange_Statics::NewProp_InOutputRange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_SetOutputRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the output range */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "Sets the output range" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioRadialSlider_SetOutputRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioRadialSlider, nullptr, "SetOutputRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioRadialSlider_SetOutputRange_Statics::AudioRadialSlider_eventSetOutputRange_Parms), Z_Construct_UFunction_UAudioRadialSlider_SetOutputRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetOutputRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_SetOutputRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetOutputRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioRadialSlider_SetOutputRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioRadialSlider_SetOutputRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover_Statics
	{
		struct AudioRadialSlider_eventSetShowLabelOnlyOnHover_Parms
		{
			bool bShowLabelOnlyOnHover;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowLabelOnlyOnHover_MetaData[];
#endif
		static void NewProp_bShowLabelOnlyOnHover_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLabelOnlyOnHover;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover_Statics::NewProp_bShowLabelOnlyOnHover_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover_Statics::NewProp_bShowLabelOnlyOnHover_SetBit(void* Obj)
	{
		((AudioRadialSlider_eventSetShowLabelOnlyOnHover_Parms*)Obj)->bShowLabelOnlyOnHover = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover_Statics::NewProp_bShowLabelOnlyOnHover = { "bShowLabelOnlyOnHover", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioRadialSlider_eventSetShowLabelOnlyOnHover_Parms), &Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover_Statics::NewProp_bShowLabelOnlyOnHover_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover_Statics::NewProp_bShowLabelOnlyOnHover_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover_Statics::NewProp_bShowLabelOnlyOnHover_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover_Statics::NewProp_bShowLabelOnlyOnHover,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** If true, show text label only on hover; if false always show label. */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "If true, show text label only on hover; if false always show label." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioRadialSlider, nullptr, "SetShowLabelOnlyOnHover", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover_Statics::AudioRadialSlider_eventSetShowLabelOnlyOnHover_Parms), Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText_Statics
	{
		struct AudioRadialSlider_eventSetShowUnitsText_Parms
		{
			bool bShowUnitsText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowUnitsText_MetaData[];
#endif
		static void NewProp_bShowUnitsText_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowUnitsText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText_Statics::NewProp_bShowUnitsText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText_Statics::NewProp_bShowUnitsText_SetBit(void* Obj)
	{
		((AudioRadialSlider_eventSetShowUnitsText_Parms*)Obj)->bShowUnitsText = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText_Statics::NewProp_bShowUnitsText = { "bShowUnitsText", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioRadialSlider_eventSetShowUnitsText_Parms), &Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText_Statics::NewProp_bShowUnitsText_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText_Statics::NewProp_bShowUnitsText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText_Statics::NewProp_bShowUnitsText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText_Statics::NewProp_bShowUnitsText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets whether to show the units text */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "Sets whether to show the units text" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioRadialSlider, nullptr, "SetShowUnitsText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText_Statics::AudioRadialSlider_eventSetShowUnitsText_Parms), Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioRadialSlider_SetSliderBarColor_Statics
	{
		struct AudioRadialSlider_eventSetSliderBarColor_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioRadialSlider_SetSliderBarColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioRadialSlider_eventSetSliderBarColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioRadialSlider_SetSliderBarColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioRadialSlider_SetSliderBarColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_SetSliderBarColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the slider bar color */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "Sets the slider bar color" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioRadialSlider_SetSliderBarColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioRadialSlider, nullptr, "SetSliderBarColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioRadialSlider_SetSliderBarColor_Statics::AudioRadialSlider_eventSetSliderBarColor_Parms), Z_Construct_UFunction_UAudioRadialSlider_SetSliderBarColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetSliderBarColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_SetSliderBarColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetSliderBarColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioRadialSlider_SetSliderBarColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioRadialSlider_SetSliderBarColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioRadialSlider_SetSliderProgressColor_Statics
	{
		struct AudioRadialSlider_eventSetSliderProgressColor_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioRadialSlider_SetSliderProgressColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioRadialSlider_eventSetSliderProgressColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioRadialSlider_SetSliderProgressColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioRadialSlider_SetSliderProgressColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_SetSliderProgressColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the slider progress color */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "Sets the slider progress color" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioRadialSlider_SetSliderProgressColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioRadialSlider, nullptr, "SetSliderProgressColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioRadialSlider_SetSliderProgressColor_Statics::AudioRadialSlider_eventSetSliderProgressColor_Parms), Z_Construct_UFunction_UAudioRadialSlider_SetSliderProgressColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetSliderProgressColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_SetSliderProgressColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetSliderProgressColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioRadialSlider_SetSliderProgressColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioRadialSlider_SetSliderProgressColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioRadialSlider_SetSliderThickness_Statics
	{
		struct AudioRadialSlider_eventSetSliderThickness_Parms
		{
			float InThickness;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InThickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_SetSliderThickness_Statics::NewProp_InThickness_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioRadialSlider_SetSliderThickness_Statics::NewProp_InThickness = { "InThickness", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioRadialSlider_eventSetSliderThickness_Parms, InThickness), METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_SetSliderThickness_Statics::NewProp_InThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetSliderThickness_Statics::NewProp_InThickness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioRadialSlider_SetSliderThickness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioRadialSlider_SetSliderThickness_Statics::NewProp_InThickness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_SetSliderThickness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the slider thickness */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "Sets the slider thickness" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioRadialSlider_SetSliderThickness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioRadialSlider, nullptr, "SetSliderThickness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioRadialSlider_SetSliderThickness_Statics::AudioRadialSlider_eventSetSliderThickness_Parms), Z_Construct_UFunction_UAudioRadialSlider_SetSliderThickness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetSliderThickness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_SetSliderThickness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetSliderThickness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioRadialSlider_SetSliderThickness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioRadialSlider_SetSliderThickness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioRadialSlider_SetTextLabelBackgroundColor_Statics
	{
		struct AudioRadialSlider_eventSetTextLabelBackgroundColor_Parms
		{
			FSlateColor InColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioRadialSlider_SetTextLabelBackgroundColor_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioRadialSlider_eventSetTextLabelBackgroundColor_Parms, InColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) }; // 3007839000
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioRadialSlider_SetTextLabelBackgroundColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioRadialSlider_SetTextLabelBackgroundColor_Statics::NewProp_InColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_SetTextLabelBackgroundColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the label background color */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "Sets the label background color" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioRadialSlider_SetTextLabelBackgroundColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioRadialSlider, nullptr, "SetTextLabelBackgroundColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioRadialSlider_SetTextLabelBackgroundColor_Statics::AudioRadialSlider_eventSetTextLabelBackgroundColor_Parms), Z_Construct_UFunction_UAudioRadialSlider_SetTextLabelBackgroundColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetTextLabelBackgroundColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_SetTextLabelBackgroundColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetTextLabelBackgroundColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioRadialSlider_SetTextLabelBackgroundColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioRadialSlider_SetTextLabelBackgroundColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioRadialSlider_SetUnitsText_Statics
	{
		struct AudioRadialSlider_eventSetUnitsText_Parms
		{
			FText Units;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Units_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Units;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_SetUnitsText_Statics::NewProp_Units_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAudioRadialSlider_SetUnitsText_Statics::NewProp_Units = { "Units", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioRadialSlider_eventSetUnitsText_Parms, Units), METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_SetUnitsText_Statics::NewProp_Units_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetUnitsText_Statics::NewProp_Units_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioRadialSlider_SetUnitsText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioRadialSlider_SetUnitsText_Statics::NewProp_Units,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_SetUnitsText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the units text */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "Sets the units text" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioRadialSlider_SetUnitsText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioRadialSlider, nullptr, "SetUnitsText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioRadialSlider_SetUnitsText_Statics::AudioRadialSlider_eventSetUnitsText_Parms), Z_Construct_UFunction_UAudioRadialSlider_SetUnitsText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetUnitsText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_SetUnitsText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetUnitsText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioRadialSlider_SetUnitsText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioRadialSlider_SetUnitsText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly_Statics
	{
		struct AudioRadialSlider_eventSetUnitsTextReadOnly_Parms
		{
			bool bIsReadOnly;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsReadOnly_MetaData[];
#endif
		static void NewProp_bIsReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly_Statics::NewProp_bIsReadOnly_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
	{
		((AudioRadialSlider_eventSetUnitsTextReadOnly_Parms*)Obj)->bIsReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly_Statics::NewProp_bIsReadOnly = { "bIsReadOnly", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioRadialSlider_eventSetUnitsTextReadOnly_Parms), &Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly_Statics::NewProp_bIsReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly_Statics::NewProp_bIsReadOnly_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly_Statics::NewProp_bIsReadOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets whether the units text is read only*/" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "Sets whether the units text is read only" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioRadialSlider, nullptr, "SetUnitsTextReadOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly_Statics::AudioRadialSlider_eventSetUnitsTextReadOnly_Parms), Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly_Statics
	{
		struct AudioRadialSlider_eventSetValueTextReadOnly_Parms
		{
			bool bIsReadOnly;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsReadOnly_MetaData[];
#endif
		static void NewProp_bIsReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly_Statics::NewProp_bIsReadOnly_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
	{
		((AudioRadialSlider_eventSetValueTextReadOnly_Parms*)Obj)->bIsReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly_Statics::NewProp_bIsReadOnly = { "bIsReadOnly", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioRadialSlider_eventSetValueTextReadOnly_Parms), &Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly_Statics::NewProp_bIsReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly_Statics::NewProp_bIsReadOnly_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly_Statics::NewProp_bIsReadOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets whether the value text is read only*/" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "Sets whether the value text is read only" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioRadialSlider, nullptr, "SetValueTextReadOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly_Statics::AudioRadialSlider_eventSetValueTextReadOnly_Parms), Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioRadialSlider_SetWidgetLayout_Statics
	{
		struct AudioRadialSlider_eventSetWidgetLayout_Parms
		{
			TEnumAsByte<EAudioRadialSliderLayout> InLayout;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InLayout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioRadialSlider_SetWidgetLayout_Statics::NewProp_InLayout = { "InLayout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioRadialSlider_eventSetWidgetLayout_Parms, InLayout), Z_Construct_UEnum_AudioWidgets_EAudioRadialSliderLayout, METADATA_PARAMS(nullptr, 0) }; // 105602739
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioRadialSlider_SetWidgetLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioRadialSlider_SetWidgetLayout_Statics::NewProp_InLayout,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRadialSlider_SetWidgetLayout_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the widget layout */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "Sets the widget layout" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioRadialSlider_SetWidgetLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioRadialSlider, nullptr, "SetWidgetLayout", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioRadialSlider_SetWidgetLayout_Statics::AudioRadialSlider_eventSetWidgetLayout_Parms), Z_Construct_UFunction_UAudioRadialSlider_SetWidgetLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetWidgetLayout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioRadialSlider_SetWidgetLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRadialSlider_SetWidgetLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioRadialSlider_SetWidgetLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioRadialSlider_SetWidgetLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioRadialSlider);
	UClass* Z_Construct_UClass_UAudioRadialSlider_NoRegister()
	{
		return UAudioRadialSlider::StaticClass();
	}
	struct Z_Construct_UClass_UAudioRadialSlider_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetLayout_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WidgetLayout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CenterBackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderProgressColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SliderProgressColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderBarColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SliderBarColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandStartEndRatio_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandStartEndRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitsText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_UnitsText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextLabelBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextLabelBackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowLabelOnlyOnHover_MetaData[];
#endif
		static void NewProp_ShowLabelOnlyOnHover_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowLabelOnlyOnHover;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowUnitsText_MetaData[];
#endif
		static void NewProp_ShowUnitsText_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowUnitsText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsUnitsTextReadOnly_MetaData[];
#endif
		static void NewProp_IsUnitsTextReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsUnitsTextReadOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsValueTextReadOnly_MetaData[];
#endif
		static void NewProp_IsValueTextReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValueTextReadOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SliderThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnValueChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioRadialSlider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioRadialSlider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioRadialSlider_GetOutputValue, "GetOutputValue" }, // 1763490390
		{ &Z_Construct_UFunction_UAudioRadialSlider_GetSliderValue, "GetSliderValue" }, // 3129297411
		{ &Z_Construct_UFunction_UAudioRadialSlider_SetCenterBackgroundColor, "SetCenterBackgroundColor" }, // 271841507
		{ &Z_Construct_UFunction_UAudioRadialSlider_SetHandStartEndRatio, "SetHandStartEndRatio" }, // 1861619945
		{ &Z_Construct_UFunction_UAudioRadialSlider_SetOutputRange, "SetOutputRange" }, // 1669856252
		{ &Z_Construct_UFunction_UAudioRadialSlider_SetShowLabelOnlyOnHover, "SetShowLabelOnlyOnHover" }, // 1381152417
		{ &Z_Construct_UFunction_UAudioRadialSlider_SetShowUnitsText, "SetShowUnitsText" }, // 3193764888
		{ &Z_Construct_UFunction_UAudioRadialSlider_SetSliderBarColor, "SetSliderBarColor" }, // 3375994828
		{ &Z_Construct_UFunction_UAudioRadialSlider_SetSliderProgressColor, "SetSliderProgressColor" }, // 2933896153
		{ &Z_Construct_UFunction_UAudioRadialSlider_SetSliderThickness, "SetSliderThickness" }, // 1973627528
		{ &Z_Construct_UFunction_UAudioRadialSlider_SetTextLabelBackgroundColor, "SetTextLabelBackgroundColor" }, // 724032467
		{ &Z_Construct_UFunction_UAudioRadialSlider_SetUnitsText, "SetUnitsText" }, // 2420495536
		{ &Z_Construct_UFunction_UAudioRadialSlider_SetUnitsTextReadOnly, "SetUnitsTextReadOnly" }, // 3009407143
		{ &Z_Construct_UFunction_UAudioRadialSlider_SetValueTextReadOnly, "SetValueTextReadOnly" }, // 1045835467
		{ &Z_Construct_UFunction_UAudioRadialSlider_SetWidgetLayout, "SetWidgetLayout" }, // 2258688723
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioRadialSlider_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An audio radial slider widget. \n */" },
		{ "IncludePath", "AudioRadialSlider.h" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "An audio radial slider widget." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The normalized linear (0 - 1) slider value position. */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "The normalized linear (0 - 1) slider value position." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioRadialSlider, Value), METADATA_PARAMS(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_ValueDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the value of the widget */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the value of the widget" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_ValueDelegate = { "ValueDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioRadialSlider, ValueDelegate), Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_ValueDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_ValueDelegate_MetaData)) }; // 3819155322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_WidgetLayout_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The layout of the widget (position of text label). */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "The layout of the widget (position of text label)." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_WidgetLayout = { "WidgetLayout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioRadialSlider, WidgetLayout), Z_Construct_UEnum_AudioWidgets_EAudioRadialSliderLayout, METADATA_PARAMS(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_WidgetLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_WidgetLayout_MetaData)) }; // 105602739
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_CenterBackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the widget background. */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "The color to draw the widget background." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_CenterBackgroundColor = { "CenterBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioRadialSlider, CenterBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_CenterBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_CenterBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_SliderProgressColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the slider progress bar in. */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "The color to draw the slider progress bar in." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_SliderProgressColor = { "SliderProgressColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioRadialSlider, SliderProgressColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_SliderProgressColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_SliderProgressColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_SliderBarColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the slider bar in. */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "The color to draw the slider bar in." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_SliderBarColor = { "SliderBarColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioRadialSlider, SliderBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_SliderBarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_SliderBarColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_HandStartEndRatio_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Start and end of the hand as a ratio to the slider radius (so 0.0 to 1.0 is from the slider center to the handle). */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "Start and end of the hand as a ratio to the slider radius (so 0.0 to 1.0 is from the slider center to the handle)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_HandStartEndRatio = { "HandStartEndRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioRadialSlider, HandStartEndRatio), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_HandStartEndRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_HandStartEndRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_UnitsText_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The text label units */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "The text label units" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_UnitsText = { "UnitsText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioRadialSlider, UnitsText), METADATA_PARAMS(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_UnitsText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_UnitsText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_TextLabelBackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The color to draw the text label background. */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "The color to draw the text label background." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_TextLabelBackgroundColor = { "TextLabelBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioRadialSlider, TextLabelBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_TextLabelBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_TextLabelBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_ShowLabelOnlyOnHover_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** If true, show text label only on hover; if false always show label. */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "If true, show text label only on hover; if false always show label." },
	};
#endif
	void Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_ShowLabelOnlyOnHover_SetBit(void* Obj)
	{
		((UAudioRadialSlider*)Obj)->ShowLabelOnlyOnHover = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_ShowLabelOnlyOnHover = { "ShowLabelOnlyOnHover", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAudioRadialSlider), &Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_ShowLabelOnlyOnHover_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_ShowLabelOnlyOnHover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_ShowLabelOnlyOnHover_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_ShowUnitsText_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether to show the units part of the text label. */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "Whether to show the units part of the text label." },
	};
#endif
	void Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_ShowUnitsText_SetBit(void* Obj)
	{
		((UAudioRadialSlider*)Obj)->ShowUnitsText = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_ShowUnitsText = { "ShowUnitsText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAudioRadialSlider), &Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_ShowUnitsText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_ShowUnitsText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_ShowUnitsText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_IsUnitsTextReadOnly_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether to set the units part of the text label read only. */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "Whether to set the units part of the text label read only." },
	};
#endif
	void Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_IsUnitsTextReadOnly_SetBit(void* Obj)
	{
		((UAudioRadialSlider*)Obj)->IsUnitsTextReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_IsUnitsTextReadOnly = { "IsUnitsTextReadOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAudioRadialSlider), &Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_IsUnitsTextReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_IsUnitsTextReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_IsUnitsTextReadOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_IsValueTextReadOnly_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether to set the value part of the text label read only. */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "Whether to set the value part of the text label read only." },
	};
#endif
	void Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_IsValueTextReadOnly_SetBit(void* Obj)
	{
		((UAudioRadialSlider*)Obj)->IsValueTextReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_IsValueTextReadOnly = { "IsValueTextReadOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAudioRadialSlider), &Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_IsValueTextReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_IsValueTextReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_IsValueTextReadOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_SliderThickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The slider thickness. */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "The slider thickness." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_SliderThickness = { "SliderThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioRadialSlider, SliderThickness), METADATA_PARAMS(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_SliderThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_SliderThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_OutputRange_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Output range */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "Output range" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_OutputRange = { "OutputRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioRadialSlider, OutputRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_OutputRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_OutputRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_OnValueChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called when the value is changed by slider or typing. */" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "Called when the value is changed by slider or typing." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_OnValueChanged = { "OnValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioRadialSlider, OnValueChanged), Z_Construct_UDelegateFunction_AudioWidgets_OnAudioRadialSliderValueChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_OnValueChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_OnValueChanged_MetaData)) }; // 2543617634
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioRadialSlider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_ValueDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_WidgetLayout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_CenterBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_SliderProgressColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_SliderBarColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_HandStartEndRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_UnitsText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_TextLabelBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_ShowLabelOnlyOnHover,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_ShowUnitsText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_IsUnitsTextReadOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_IsValueTextReadOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_SliderThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_OutputRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioRadialSlider_Statics::NewProp_OnValueChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioRadialSlider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioRadialSlider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioRadialSlider_Statics::ClassParams = {
		&UAudioRadialSlider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAudioRadialSlider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioRadialSlider_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioRadialSlider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioRadialSlider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioRadialSlider()
	{
		if (!Z_Registration_Info_UClass_UAudioRadialSlider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioRadialSlider.OuterSingleton, Z_Construct_UClass_UAudioRadialSlider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioRadialSlider.OuterSingleton;
	}
	template<> AUDIOWIDGETS_API UClass* StaticClass<UAudioRadialSlider>()
	{
		return UAudioRadialSlider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioRadialSlider);
	UAudioRadialSlider::~UAudioRadialSlider() {}
	void UAudioVolumeRadialSlider::StaticRegisterNativesUAudioVolumeRadialSlider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioVolumeRadialSlider);
	UClass* Z_Construct_UClass_UAudioVolumeRadialSlider_NoRegister()
	{
		return UAudioVolumeRadialSlider::StaticClass();
	}
	struct Z_Construct_UClass_UAudioVolumeRadialSlider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioVolumeRadialSlider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioRadialSlider,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioVolumeRadialSlider_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An audio slider widget, for use with volume.\n */" },
		{ "IncludePath", "AudioRadialSlider.h" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "An audio slider widget, for use with volume." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioVolumeRadialSlider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioVolumeRadialSlider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioVolumeRadialSlider_Statics::ClassParams = {
		&UAudioVolumeRadialSlider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioVolumeRadialSlider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioVolumeRadialSlider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioVolumeRadialSlider()
	{
		if (!Z_Registration_Info_UClass_UAudioVolumeRadialSlider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioVolumeRadialSlider.OuterSingleton, Z_Construct_UClass_UAudioVolumeRadialSlider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioVolumeRadialSlider.OuterSingleton;
	}
	template<> AUDIOWIDGETS_API UClass* StaticClass<UAudioVolumeRadialSlider>()
	{
		return UAudioVolumeRadialSlider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioVolumeRadialSlider);
	UAudioVolumeRadialSlider::~UAudioVolumeRadialSlider() {}
	void UAudioFrequencyRadialSlider::StaticRegisterNativesUAudioFrequencyRadialSlider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioFrequencyRadialSlider);
	UClass* Z_Construct_UClass_UAudioFrequencyRadialSlider_NoRegister()
	{
		return UAudioFrequencyRadialSlider::StaticClass();
	}
	struct Z_Construct_UClass_UAudioFrequencyRadialSlider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioFrequencyRadialSlider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioRadialSlider,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioFrequencyRadialSlider_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An audio slider widget, for use with frequency.\n */" },
		{ "IncludePath", "AudioRadialSlider.h" },
		{ "ModuleRelativePath", "Public/AudioRadialSlider.h" },
		{ "ToolTip", "An audio slider widget, for use with frequency." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioFrequencyRadialSlider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioFrequencyRadialSlider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioFrequencyRadialSlider_Statics::ClassParams = {
		&UAudioFrequencyRadialSlider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioFrequencyRadialSlider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioFrequencyRadialSlider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioFrequencyRadialSlider()
	{
		if (!Z_Registration_Info_UClass_UAudioFrequencyRadialSlider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioFrequencyRadialSlider.OuterSingleton, Z_Construct_UClass_UAudioFrequencyRadialSlider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioFrequencyRadialSlider.OuterSingleton;
	}
	template<> AUDIOWIDGETS_API UClass* StaticClass<UAudioFrequencyRadialSlider>()
	{
		return UAudioFrequencyRadialSlider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioFrequencyRadialSlider);
	UAudioFrequencyRadialSlider::~UAudioFrequencyRadialSlider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioRadialSlider, UAudioRadialSlider::StaticClass, TEXT("UAudioRadialSlider"), &Z_Registration_Info_UClass_UAudioRadialSlider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioRadialSlider), 4037941556U) },
		{ Z_Construct_UClass_UAudioVolumeRadialSlider, UAudioVolumeRadialSlider::StaticClass, TEXT("UAudioVolumeRadialSlider"), &Z_Registration_Info_UClass_UAudioVolumeRadialSlider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioVolumeRadialSlider), 2368798041U) },
		{ Z_Construct_UClass_UAudioFrequencyRadialSlider, UAudioFrequencyRadialSlider::StaticClass, TEXT("UAudioFrequencyRadialSlider"), &Z_Registration_Info_UClass_UAudioFrequencyRadialSlider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioFrequencyRadialSlider), 3188065730U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_1232635726(TEXT("/Script/AudioWidgets"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
