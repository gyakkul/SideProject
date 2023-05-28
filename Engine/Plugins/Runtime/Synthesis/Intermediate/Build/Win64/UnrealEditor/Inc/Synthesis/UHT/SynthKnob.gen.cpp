// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/UI/SynthKnob.h"
#include "../Public/UI/SynthKnobStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthKnob() {}
// Cross Module References
	SYNTHESIS_API UClass* Z_Construct_UClass_USynthKnob();
	SYNTHESIS_API UClass* Z_Construct_UClass_USynthKnob_NoRegister();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSynthKnobStyle();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnControllerCaptureBeginEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnControllerCaptureEndEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnMouseCaptureBeginEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnMouseCaptureEndEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	DEFINE_FUNCTION(USynthKnob::execSetStepSize)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStepSize(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthKnob::execSetLocked)
	{
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocked(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthKnob::execSetValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValue(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USynthKnob::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	void USynthKnob::StaticRegisterNativesUSynthKnob()
	{
		UClass* Class = USynthKnob::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValue", &USynthKnob::execGetValue },
			{ "SetLocked", &USynthKnob::execSetLocked },
			{ "SetStepSize", &USynthKnob::execSetStepSize },
			{ "SetValue", &USynthKnob::execSetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USynthKnob_GetValue_Statics
	{
		struct SynthKnob_eventGetValue_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthKnob_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthKnob_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthKnob_GetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthKnob_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthKnob_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Gets the current value of the slider. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Gets the current value of the slider." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthKnob_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthKnob, nullptr, "GetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthKnob_GetValue_Statics::SynthKnob_eventGetValue_Parms), Z_Construct_UFunction_USynthKnob_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthKnob_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthKnob_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthKnob_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthKnob_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthKnob_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthKnob_SetLocked_Statics
	{
		struct SynthKnob_eventSetLocked_Parms
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
	void Z_Construct_UFunction_USynthKnob_SetLocked_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((SynthKnob_eventSetLocked_Parms*)Obj)->InValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USynthKnob_SetLocked_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SynthKnob_eventSetLocked_Parms), &Z_Construct_UFunction_USynthKnob_SetLocked_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthKnob_SetLocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthKnob_SetLocked_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthKnob_SetLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the handle to be interactive or fixed */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Sets the handle to be interactive or fixed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthKnob_SetLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthKnob, nullptr, "SetLocked", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthKnob_SetLocked_Statics::SynthKnob_eventSetLocked_Parms), Z_Construct_UFunction_USynthKnob_SetLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthKnob_SetLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthKnob_SetLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthKnob_SetLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthKnob_SetLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthKnob_SetLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthKnob_SetStepSize_Statics
	{
		struct SynthKnob_eventSetStepSize_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthKnob_eventSetStepSize_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the amount to adjust the value by, when using a controller or keyboard */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Sets the amount to adjust the value by, when using a controller or keyboard" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthKnob, nullptr, "SetStepSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::SynthKnob_eventSetStepSize_Parms), Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthKnob_SetStepSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthKnob_SetStepSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USynthKnob_SetValue_Statics
	{
		struct SynthKnob_eventSetValue_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USynthKnob_SetValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SynthKnob_eventSetValue_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USynthKnob_SetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USynthKnob_SetValue_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USynthKnob_SetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Sets the current value of the slider. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Sets the current value of the slider." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USynthKnob_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USynthKnob, nullptr, "SetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_USynthKnob_SetValue_Statics::SynthKnob_eventSetValue_Parms), Z_Construct_UFunction_USynthKnob_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthKnob_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USynthKnob_SetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USynthKnob_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USynthKnob_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USynthKnob_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynthKnob);
	UClass* Z_Construct_UClass_USynthKnob_NoRegister()
	{
		return USynthKnob::StaticClass();
	}
	struct Z_Construct_UClass_USynthKnob_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseFineTuneSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseFineTuneSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowTooltipInfo_MetaData[];
#endif
		static void NewProp_ShowTooltipInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowTooltipInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterUnits_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ParameterUnits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_ValueDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Locked_MetaData[];
#endif
		static void NewProp_Locked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Locked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsFocusable_MetaData[];
#endif
		static void NewProp_IsFocusable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFocusable;
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
	UObject* (*const Z_Construct_UClass_USynthKnob_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USynthKnob_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USynthKnob_GetValue, "GetValue" }, // 203149480
		{ &Z_Construct_UFunction_USynthKnob_SetLocked, "SetLocked" }, // 2064469849
		{ &Z_Construct_UFunction_USynthKnob_SetStepSize, "SetStepSize" }, // 3373640247
		{ &Z_Construct_UFunction_USynthKnob_SetValue, "SetValue" }, // 3825661111
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthKnob_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A simple widget that shows a sliding bar with a handle that allows you to control the value between 0..1.\n *\n * * No Children\n */" },
		{ "IncludePath", "UI/SynthKnob.h" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "A simple widget that shows a sliding bar with a handle that allows you to control the value between 0..1.\n\n* No Children" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthKnob_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The volume value to display. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "The volume value to display." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthKnob, Value), METADATA_PARAMS(Z_Construct_UClass_USynthKnob_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthKnob_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthKnob_Statics::NewProp_StepSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The amount to adjust the value by, when using a controller or keyboard */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "The amount to adjust the value by, when using a controller or keyboard" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthKnob, StepSize), METADATA_PARAMS(Z_Construct_UClass_USynthKnob_Statics::NewProp_StepSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthKnob_Statics::NewProp_StepSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthKnob_Statics::NewProp_MouseSpeed_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The speed of the mouse knob control */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "The speed of the mouse knob control" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_MouseSpeed = { "MouseSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthKnob, MouseSpeed), METADATA_PARAMS(Z_Construct_UClass_USynthKnob_Statics::NewProp_MouseSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthKnob_Statics::NewProp_MouseSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthKnob_Statics::NewProp_MouseFineTuneSpeed_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The speed of the mouse knob control when fine-tuning the knob */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "The speed of the mouse knob control when fine-tuning the knob" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_MouseFineTuneSpeed = { "MouseFineTuneSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthKnob, MouseFineTuneSpeed), METADATA_PARAMS(Z_Construct_UClass_USynthKnob_Statics::NewProp_MouseFineTuneSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthKnob_Statics::NewProp_MouseFineTuneSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthKnob_Statics::NewProp_ShowTooltipInfo_MetaData[] = {
		{ "Category", "SynthTooltip" },
		{ "Comment", "/** Enable tool tip window to show parameter information while knob turns */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Enable tool tip window to show parameter information while knob turns" },
	};
#endif
	void Z_Construct_UClass_USynthKnob_Statics::NewProp_ShowTooltipInfo_SetBit(void* Obj)
	{
		((USynthKnob*)Obj)->ShowTooltipInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_ShowTooltipInfo = { "ShowTooltipInfo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USynthKnob), &Z_Construct_UClass_USynthKnob_Statics::NewProp_ShowTooltipInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_USynthKnob_Statics::NewProp_ShowTooltipInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthKnob_Statics::NewProp_ShowTooltipInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthKnob_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "SynthTooltip" },
		{ "Comment", "/** The name of the pararameter. Will show when knob turns. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "The name of the pararameter. Will show when knob turns." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthKnob, ParameterName), METADATA_PARAMS(Z_Construct_UClass_USynthKnob_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthKnob_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthKnob_Statics::NewProp_ParameterUnits_MetaData[] = {
		{ "Category", "SynthTooltip" },
		{ "Comment", "/** The parameter units (e.g. hz). Will append to synth tooltip info. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "The parameter units (e.g. hz). Will append to synth tooltip info." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_ParameterUnits = { "ParameterUnits", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthKnob, ParameterUnits), METADATA_PARAMS(Z_Construct_UClass_USynthKnob_Statics::NewProp_ParameterUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthKnob_Statics::NewProp_ParameterUnits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthKnob_Statics::NewProp_ValueDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the value of the widget */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the value of the widget" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_ValueDelegate = { "ValueDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthKnob, ValueDelegate), Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USynthKnob_Statics::NewProp_ValueDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthKnob_Statics::NewProp_ValueDelegate_MetaData)) }; // 3819155322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthKnob_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The synth knob style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "The synth knob style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthKnob, WidgetStyle), Z_Construct_UScriptStruct_FSynthKnobStyle, METADATA_PARAMS(Z_Construct_UClass_USynthKnob_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthKnob_Statics::NewProp_WidgetStyle_MetaData)) }; // 2666983424
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthKnob_Statics::NewProp_Locked_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether the handle is interactive or fixed. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Whether the handle is interactive or fixed." },
	};
#endif
	void Z_Construct_UClass_USynthKnob_Statics::NewProp_Locked_SetBit(void* Obj)
	{
		((USynthKnob*)Obj)->Locked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_Locked = { "Locked", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USynthKnob), &Z_Construct_UClass_USynthKnob_Statics::NewProp_Locked_SetBit, METADATA_PARAMS(Z_Construct_UClass_USynthKnob_Statics::NewProp_Locked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthKnob_Statics::NewProp_Locked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthKnob_Statics::NewProp_IsFocusable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Should the slider be focusable? */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Should the slider be focusable?" },
	};
#endif
	void Z_Construct_UClass_USynthKnob_Statics::NewProp_IsFocusable_SetBit(void* Obj)
	{
		((USynthKnob*)Obj)->IsFocusable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_IsFocusable = { "IsFocusable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USynthKnob), &Z_Construct_UClass_USynthKnob_Statics::NewProp_IsFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_USynthKnob_Statics::NewProp_IsFocusable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthKnob_Statics::NewProp_IsFocusable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthKnob_Statics::NewProp_OnMouseCaptureBegin_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Invoked when the mouse is pressed and a capture begins. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Invoked when the mouse is pressed and a capture begins." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_OnMouseCaptureBegin = { "OnMouseCaptureBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthKnob, OnMouseCaptureBegin), Z_Construct_UDelegateFunction_UMG_OnMouseCaptureBeginEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USynthKnob_Statics::NewProp_OnMouseCaptureBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthKnob_Statics::NewProp_OnMouseCaptureBegin_MetaData)) }; // 506200144
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthKnob_Statics::NewProp_OnMouseCaptureEnd_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Invoked when the mouse is released and a capture ends. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Invoked when the mouse is released and a capture ends." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_OnMouseCaptureEnd = { "OnMouseCaptureEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthKnob, OnMouseCaptureEnd), Z_Construct_UDelegateFunction_UMG_OnMouseCaptureEndEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USynthKnob_Statics::NewProp_OnMouseCaptureEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthKnob_Statics::NewProp_OnMouseCaptureEnd_MetaData)) }; // 4118740634
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthKnob_Statics::NewProp_OnControllerCaptureBegin_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Invoked when the controller capture begins. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Invoked when the controller capture begins." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_OnControllerCaptureBegin = { "OnControllerCaptureBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthKnob, OnControllerCaptureBegin), Z_Construct_UDelegateFunction_UMG_OnControllerCaptureBeginEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USynthKnob_Statics::NewProp_OnControllerCaptureBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthKnob_Statics::NewProp_OnControllerCaptureBegin_MetaData)) }; // 2734853032
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthKnob_Statics::NewProp_OnControllerCaptureEnd_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Invoked when the controller capture ends. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Invoked when the controller capture ends." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_OnControllerCaptureEnd = { "OnControllerCaptureEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthKnob, OnControllerCaptureEnd), Z_Construct_UDelegateFunction_UMG_OnControllerCaptureEndEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USynthKnob_Statics::NewProp_OnControllerCaptureEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthKnob_Statics::NewProp_OnControllerCaptureEnd_MetaData)) }; // 2999277929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthKnob_Statics::NewProp_OnValueChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called when the value is changed by slider or typing. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnob.h" },
		{ "ToolTip", "Called when the value is changed by slider or typing." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USynthKnob_Statics::NewProp_OnValueChanged = { "OnValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USynthKnob, OnValueChanged), Z_Construct_UDelegateFunction_UMG_OnFloatValueChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USynthKnob_Statics::NewProp_OnValueChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USynthKnob_Statics::NewProp_OnValueChanged_MetaData)) }; // 74366326
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USynthKnob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_StepSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_MouseSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_MouseFineTuneSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_ShowTooltipInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_ParameterUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_ValueDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_WidgetStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_Locked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_IsFocusable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_OnMouseCaptureBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_OnMouseCaptureEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_OnControllerCaptureBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_OnControllerCaptureEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USynthKnob_Statics::NewProp_OnValueChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USynthKnob_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynthKnob>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USynthKnob_Statics::ClassParams = {
		&USynthKnob::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USynthKnob_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USynthKnob_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USynthKnob_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USynthKnob_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USynthKnob()
	{
		if (!Z_Registration_Info_UClass_USynthKnob.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynthKnob.OuterSingleton, Z_Construct_UClass_USynthKnob_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USynthKnob.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<USynthKnob>()
	{
		return USynthKnob::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USynthKnob);
	USynthKnob::~USynthKnob() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USynthKnob, USynthKnob::StaticClass, TEXT("USynthKnob"), &Z_Registration_Info_UClass_USynthKnob, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynthKnob), 513108835U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_3648704718(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
