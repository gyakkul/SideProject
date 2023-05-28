// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXFixtureComponentDouble.h"
#include "DMXFixtureComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXFixtureComponentDouble() {}
// Cross Module References
	DMXFIXTURES_API UClass* Z_Construct_UClass_UDMXFixtureComponent();
	DMXFIXTURES_API UClass* Z_Construct_UClass_UDMXFixtureComponentDouble();
	DMXFIXTURES_API UClass* Z_Construct_UClass_UDMXFixtureComponentDouble_NoRegister();
	DMXFIXTURES_API UScriptStruct* Z_Construct_UScriptStruct_FDMXChannelData();
	UPackage* Z_Construct_UPackage__Script_DMXFixtures();
// End Cross Module References
	DEFINE_FUNCTION(UDMXFixtureComponentDouble::execIsDMXInterpolationDone)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ChannelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDMXInterpolationDone(Z_Param_ChannelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXFixtureComponentDouble::execGetDMXTargetValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ChannelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDMXTargetValue(Z_Param_ChannelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXFixtureComponentDouble::execGetDMXInterpolatedValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ChannelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDMXInterpolatedValue(Z_Param_ChannelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXFixtureComponentDouble::execGetDMXInterpolatedStep)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ChannelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDMXInterpolatedStep(Z_Param_ChannelIndex);
		P_NATIVE_END;
	}
	struct DMXFixtureComponentDouble_eventSetChannel1ValueNoInterp_Parms
	{
		float Channel1Value;
	};
	struct DMXFixtureComponentDouble_eventSetChannel2ValueNoInterp_Parms
	{
		float Channel2Value;
	};
	static FName NAME_UDMXFixtureComponentDouble_SetChannel1ValueNoInterp = FName(TEXT("SetChannel1ValueNoInterp"));
	void UDMXFixtureComponentDouble::SetChannel1ValueNoInterp(float Channel1Value)
	{
		DMXFixtureComponentDouble_eventSetChannel1ValueNoInterp_Parms Parms;
		Parms.Channel1Value=Channel1Value;
		ProcessEvent(FindFunctionChecked(NAME_UDMXFixtureComponentDouble_SetChannel1ValueNoInterp),&Parms);
	}
	static FName NAME_UDMXFixtureComponentDouble_SetChannel2ValueNoInterp = FName(TEXT("SetChannel2ValueNoInterp"));
	void UDMXFixtureComponentDouble::SetChannel2ValueNoInterp(float Channel2Value)
	{
		DMXFixtureComponentDouble_eventSetChannel2ValueNoInterp_Parms Parms;
		Parms.Channel2Value=Channel2Value;
		ProcessEvent(FindFunctionChecked(NAME_UDMXFixtureComponentDouble_SetChannel2ValueNoInterp),&Parms);
	}
	void UDMXFixtureComponentDouble::StaticRegisterNativesUDMXFixtureComponentDouble()
	{
		UClass* Class = UDMXFixtureComponentDouble::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDMXInterpolatedStep", &UDMXFixtureComponentDouble::execGetDMXInterpolatedStep },
			{ "GetDMXInterpolatedValue", &UDMXFixtureComponentDouble::execGetDMXInterpolatedValue },
			{ "GetDMXTargetValue", &UDMXFixtureComponentDouble::execGetDMXTargetValue },
			{ "IsDMXInterpolationDone", &UDMXFixtureComponentDouble::execIsDMXInterpolationDone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedStep_Statics
	{
		struct DMXFixtureComponentDouble_eventGetDMXInterpolatedStep_Parms
		{
			int32 ChannelIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedStep_Statics::NewProp_ChannelIndex = { "ChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureComponentDouble_eventGetDMXInterpolatedStep_Parms, ChannelIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureComponentDouble_eventGetDMXInterpolatedStep_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedStep_Statics::NewProp_ChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Gets the interpolation delta value (step) for this frame */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponentDouble.h" },
		{ "ToolTip", "Gets the interpolation delta value (step) for this frame" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXFixtureComponentDouble, nullptr, "GetDMXInterpolatedStep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedStep_Statics::DMXFixtureComponentDouble_eventGetDMXInterpolatedStep_Parms), Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedValue_Statics
	{
		struct DMXFixtureComponentDouble_eventGetDMXInterpolatedValue_Parms
		{
			int32 ChannelIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedValue_Statics::NewProp_ChannelIndex = { "ChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureComponentDouble_eventGetDMXInterpolatedValue_Parms, ChannelIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureComponentDouble_eventGetDMXInterpolatedValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedValue_Statics::NewProp_ChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Gets the current interpolated value */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponentDouble.h" },
		{ "ToolTip", "Gets the current interpolated value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXFixtureComponentDouble, nullptr, "GetDMXInterpolatedValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedValue_Statics::DMXFixtureComponentDouble_eventGetDMXInterpolatedValue_Parms), Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXTargetValue_Statics
	{
		struct DMXFixtureComponentDouble_eventGetDMXTargetValue_Parms
		{
			int32 ChannelIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXTargetValue_Statics::NewProp_ChannelIndex = { "ChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureComponentDouble_eventGetDMXTargetValue_Parms, ChannelIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXTargetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureComponentDouble_eventGetDMXTargetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXTargetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXTargetValue_Statics::NewProp_ChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXTargetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXTargetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Gets the target value towards which the component interpolates */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponentDouble.h" },
		{ "ToolTip", "Gets the target value towards which the component interpolates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXTargetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXFixtureComponentDouble, nullptr, "GetDMXTargetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXTargetValue_Statics::DMXFixtureComponentDouble_eventGetDMXTargetValue_Parms), Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXTargetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXTargetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXTargetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXTargetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXTargetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXTargetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXFixtureComponentDouble_IsDMXInterpolationDone_Statics
	{
		struct DMXFixtureComponentDouble_eventIsDMXInterpolationDone_Parms
		{
			int32 ChannelIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDMXFixtureComponentDouble_IsDMXInterpolationDone_Statics::NewProp_ChannelIndex = { "ChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureComponentDouble_eventIsDMXInterpolationDone_Parms, ChannelIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDMXFixtureComponentDouble_IsDMXInterpolationDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXFixtureComponentDouble_eventIsDMXInterpolationDone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXFixtureComponentDouble_IsDMXInterpolationDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXFixtureComponentDouble_eventIsDMXInterpolationDone_Parms), &Z_Construct_UFunction_UDMXFixtureComponentDouble_IsDMXInterpolationDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXFixtureComponentDouble_IsDMXInterpolationDone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponentDouble_IsDMXInterpolationDone_Statics::NewProp_ChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponentDouble_IsDMXInterpolationDone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXFixtureComponentDouble_IsDMXInterpolationDone_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** True if the target value is reached and no interpolation is required */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponentDouble.h" },
		{ "ToolTip", "True if the target value is reached and no interpolation is required" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXFixtureComponentDouble_IsDMXInterpolationDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXFixtureComponentDouble, nullptr, "IsDMXInterpolationDone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXFixtureComponentDouble_IsDMXInterpolationDone_Statics::DMXFixtureComponentDouble_eventIsDMXInterpolationDone_Parms), Z_Construct_UFunction_UDMXFixtureComponentDouble_IsDMXInterpolationDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentDouble_IsDMXInterpolationDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXFixtureComponentDouble_IsDMXInterpolationDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentDouble_IsDMXInterpolationDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXFixtureComponentDouble_IsDMXInterpolationDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXFixtureComponentDouble_IsDMXInterpolationDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel1ValueNoInterp_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Channel1Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel1ValueNoInterp_Statics::NewProp_Channel1Value = { "Channel1Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureComponentDouble_eventSetChannel1ValueNoInterp_Parms, Channel1Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel1ValueNoInterp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel1ValueNoInterp_Statics::NewProp_Channel1Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel1ValueNoInterp_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "//  Sets first value of the second channel. When interpolation is enabled this function should be called until the value is reached, else just once */\n" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponentDouble.h" },
		{ "ToolTip", "Sets first value of the second channel. When interpolation is enabled this function should be called until the value is reached, else just once */" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel1ValueNoInterp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXFixtureComponentDouble, nullptr, "SetChannel1ValueNoInterp", nullptr, nullptr, sizeof(DMXFixtureComponentDouble_eventSetChannel1ValueNoInterp_Parms), Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel1ValueNoInterp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel1ValueNoInterp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel1ValueNoInterp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel1ValueNoInterp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel1ValueNoInterp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel1ValueNoInterp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel2ValueNoInterp_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Channel2Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel2ValueNoInterp_Statics::NewProp_Channel2Value = { "Channel2Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureComponentDouble_eventSetChannel2ValueNoInterp_Parms, Channel2Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel2ValueNoInterp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel2ValueNoInterp_Statics::NewProp_Channel2Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel2ValueNoInterp_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Sets second value of the second channel. When interpolation is enabled this function should be called until the value is reached, else just once */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponentDouble.h" },
		{ "ToolTip", "Sets second value of the second channel. When interpolation is enabled this function should be called until the value is reached, else just once" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel2ValueNoInterp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXFixtureComponentDouble, nullptr, "SetChannel2ValueNoInterp", nullptr, nullptr, sizeof(DMXFixtureComponentDouble_eventSetChannel2ValueNoInterp_Parms), Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel2ValueNoInterp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel2ValueNoInterp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel2ValueNoInterp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel2ValueNoInterp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel2ValueNoInterp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel2ValueNoInterp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXFixtureComponentDouble);
	UClass* Z_Construct_UClass_UDMXFixtureComponentDouble_NoRegister()
	{
		return UDMXFixtureComponentDouble::StaticClass();
	}
	struct Z_Construct_UClass_UDMXFixtureComponentDouble_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXChannel1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DMXChannel1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXChannel2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DMXChannel2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXFixtureComponentDouble_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXFixtureComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXFixtures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXFixtureComponentDouble_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedStep, "GetDMXInterpolatedStep" }, // 3005628298
		{ &Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXInterpolatedValue, "GetDMXInterpolatedValue" }, // 2964726740
		{ &Z_Construct_UFunction_UDMXFixtureComponentDouble_GetDMXTargetValue, "GetDMXTargetValue" }, // 3602293680
		{ &Z_Construct_UFunction_UDMXFixtureComponentDouble_IsDMXInterpolationDone, "IsDMXInterpolationDone" }, // 4224336853
		{ &Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel1ValueNoInterp, "SetChannel1ValueNoInterp" }, // 2782284003
		{ &Z_Construct_UFunction_UDMXFixtureComponentDouble_SetChannel2ValueNoInterp, "SetChannel2ValueNoInterp" }, // 576550783
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixtureComponentDouble_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "FixtureComponent" },
		{ "Comment", "// Component that uses 2 DMX channels\n" },
		{ "IncludePath", "DMXFixtureComponentDouble.h" },
		{ "IsBlueprintBase", "TRUE" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponentDouble.h" },
		{ "ToolTip", "Component that uses 2 DMX channels" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixtureComponentDouble_Statics::NewProp_DMXChannel1_MetaData[] = {
		{ "Category", "DMX Channels" },
		{ "Comment", "/** The first dmx attribute the component handles */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponentDouble.h" },
		{ "ToolTip", "The first dmx attribute the component handles" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXFixtureComponentDouble_Statics::NewProp_DMXChannel1 = { "DMXChannel1", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXFixtureComponentDouble, DMXChannel1), Z_Construct_UScriptStruct_FDMXChannelData, METADATA_PARAMS(Z_Construct_UClass_UDMXFixtureComponentDouble_Statics::NewProp_DMXChannel1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureComponentDouble_Statics::NewProp_DMXChannel1_MetaData)) }; // 2484573544
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixtureComponentDouble_Statics::NewProp_DMXChannel2_MetaData[] = {
		{ "Category", "DMX Channels" },
		{ "Comment", "/** The second dmx attribute the component handles */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponentDouble.h" },
		{ "ToolTip", "The second dmx attribute the component handles" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXFixtureComponentDouble_Statics::NewProp_DMXChannel2 = { "DMXChannel2", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXFixtureComponentDouble, DMXChannel2), Z_Construct_UScriptStruct_FDMXChannelData, METADATA_PARAMS(Z_Construct_UClass_UDMXFixtureComponentDouble_Statics::NewProp_DMXChannel2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureComponentDouble_Statics::NewProp_DMXChannel2_MetaData)) }; // 2484573544
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXFixtureComponentDouble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXFixtureComponentDouble_Statics::NewProp_DMXChannel1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXFixtureComponentDouble_Statics::NewProp_DMXChannel2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXFixtureComponentDouble_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXFixtureComponentDouble>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXFixtureComponentDouble_Statics::ClassParams = {
		&UDMXFixtureComponentDouble::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDMXFixtureComponentDouble_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureComponentDouble_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXFixtureComponentDouble_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureComponentDouble_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXFixtureComponentDouble()
	{
		if (!Z_Registration_Info_UClass_UDMXFixtureComponentDouble.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXFixtureComponentDouble.OuterSingleton, Z_Construct_UClass_UDMXFixtureComponentDouble_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXFixtureComponentDouble.OuterSingleton;
	}
	template<> DMXFIXTURES_API UClass* StaticClass<UDMXFixtureComponentDouble>()
	{
		return UDMXFixtureComponentDouble::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXFixtureComponentDouble);
	UDMXFixtureComponentDouble::~UDMXFixtureComponentDouble() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentDouble_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentDouble_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXFixtureComponentDouble, UDMXFixtureComponentDouble::StaticClass, TEXT("UDMXFixtureComponentDouble"), &Z_Registration_Info_UClass_UDMXFixtureComponentDouble, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXFixtureComponentDouble), 2316675175U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentDouble_h_2997154273(TEXT("/Script/DMXFixtures"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentDouble_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentDouble_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
