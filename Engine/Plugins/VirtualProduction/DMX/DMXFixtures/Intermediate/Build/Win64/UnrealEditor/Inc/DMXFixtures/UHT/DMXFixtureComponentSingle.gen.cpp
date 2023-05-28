// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXFixtureComponentSingle.h"
#include "DMXFixtureComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXFixtureComponentSingle() {}
// Cross Module References
	DMXFIXTURES_API UClass* Z_Construct_UClass_UDMXFixtureComponent();
	DMXFIXTURES_API UClass* Z_Construct_UClass_UDMXFixtureComponentSingle();
	DMXFIXTURES_API UClass* Z_Construct_UClass_UDMXFixtureComponentSingle_NoRegister();
	DMXFIXTURES_API UScriptStruct* Z_Construct_UScriptStruct_FDMXChannelData();
	UPackage* Z_Construct_UPackage__Script_DMXFixtures();
// End Cross Module References
	DEFINE_FUNCTION(UDMXFixtureComponentSingle::execIsDMXInterpolationDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDMXInterpolationDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXFixtureComponentSingle::execGetDMXTargetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDMXTargetValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXFixtureComponentSingle::execGetDMXInterpolatedValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDMXInterpolatedValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXFixtureComponentSingle::execGetDMXInterpolatedStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDMXInterpolatedStep();
		P_NATIVE_END;
	}
	struct DMXFixtureComponentSingle_eventSetValueNoInterp_Parms
	{
		float NewValue;
	};
	static FName NAME_UDMXFixtureComponentSingle_SetValueNoInterp = FName(TEXT("SetValueNoInterp"));
	void UDMXFixtureComponentSingle::SetValueNoInterp(float NewValue)
	{
		DMXFixtureComponentSingle_eventSetValueNoInterp_Parms Parms;
		Parms.NewValue=NewValue;
		ProcessEvent(FindFunctionChecked(NAME_UDMXFixtureComponentSingle_SetValueNoInterp),&Parms);
	}
	void UDMXFixtureComponentSingle::StaticRegisterNativesUDMXFixtureComponentSingle()
	{
		UClass* Class = UDMXFixtureComponentSingle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDMXInterpolatedStep", &UDMXFixtureComponentSingle::execGetDMXInterpolatedStep },
			{ "GetDMXInterpolatedValue", &UDMXFixtureComponentSingle::execGetDMXInterpolatedValue },
			{ "GetDMXTargetValue", &UDMXFixtureComponentSingle::execGetDMXTargetValue },
			{ "IsDMXInterpolationDone", &UDMXFixtureComponentSingle::execIsDMXInterpolationDone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedStep_Statics
	{
		struct DMXFixtureComponentSingle_eventGetDMXInterpolatedStep_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureComponentSingle_eventGetDMXInterpolatedStep_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Gets the interpolation delta value (step) for this frame */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponentSingle.h" },
		{ "ToolTip", "Gets the interpolation delta value (step) for this frame" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXFixtureComponentSingle, nullptr, "GetDMXInterpolatedStep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedStep_Statics::DMXFixtureComponentSingle_eventGetDMXInterpolatedStep_Parms), Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedValue_Statics
	{
		struct DMXFixtureComponentSingle_eventGetDMXInterpolatedValue_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureComponentSingle_eventGetDMXInterpolatedValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Gets the current interpolated value */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponentSingle.h" },
		{ "ToolTip", "Gets the current interpolated value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXFixtureComponentSingle, nullptr, "GetDMXInterpolatedValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedValue_Statics::DMXFixtureComponentSingle_eventGetDMXInterpolatedValue_Parms), Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXTargetValue_Statics
	{
		struct DMXFixtureComponentSingle_eventGetDMXTargetValue_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXTargetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureComponentSingle_eventGetDMXTargetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXTargetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXTargetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXTargetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Gets the target value towards which the component interpolates */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponentSingle.h" },
		{ "ToolTip", "Gets the target value towards which the component interpolates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXTargetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXFixtureComponentSingle, nullptr, "GetDMXTargetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXTargetValue_Statics::DMXFixtureComponentSingle_eventGetDMXTargetValue_Parms), Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXTargetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXTargetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXTargetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXTargetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXTargetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXTargetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXFixtureComponentSingle_IsDMXInterpolationDone_Statics
	{
		struct DMXFixtureComponentSingle_eventIsDMXInterpolationDone_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDMXFixtureComponentSingle_IsDMXInterpolationDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXFixtureComponentSingle_eventIsDMXInterpolationDone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXFixtureComponentSingle_IsDMXInterpolationDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXFixtureComponentSingle_eventIsDMXInterpolationDone_Parms), &Z_Construct_UFunction_UDMXFixtureComponentSingle_IsDMXInterpolationDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXFixtureComponentSingle_IsDMXInterpolationDone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponentSingle_IsDMXInterpolationDone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXFixtureComponentSingle_IsDMXInterpolationDone_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** True if the target value is reached and no interpolation is required */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponentSingle.h" },
		{ "ToolTip", "True if the target value is reached and no interpolation is required" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXFixtureComponentSingle_IsDMXInterpolationDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXFixtureComponentSingle, nullptr, "IsDMXInterpolationDone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXFixtureComponentSingle_IsDMXInterpolationDone_Statics::DMXFixtureComponentSingle_eventIsDMXInterpolationDone_Parms), Z_Construct_UFunction_UDMXFixtureComponentSingle_IsDMXInterpolationDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentSingle_IsDMXInterpolationDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXFixtureComponentSingle_IsDMXInterpolationDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentSingle_IsDMXInterpolationDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXFixtureComponentSingle_IsDMXInterpolationDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXFixtureComponentSingle_IsDMXInterpolationDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXFixtureComponentSingle_SetValueNoInterp_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMXFixtureComponentSingle_SetValueNoInterp_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureComponentSingle_eventSetValueNoInterp_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXFixtureComponentSingle_SetValueNoInterp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponentSingle_SetValueNoInterp_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXFixtureComponentSingle_SetValueNoInterp_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX Component" },
		{ "Comment", "/** Called to set the value. When interpolation is enabled this function is called by the plugin until the target value is reached, else just once. */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponentSingle.h" },
		{ "ToolTip", "Called to set the value. When interpolation is enabled this function is called by the plugin until the target value is reached, else just once." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXFixtureComponentSingle_SetValueNoInterp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXFixtureComponentSingle, nullptr, "SetValueNoInterp", nullptr, nullptr, sizeof(DMXFixtureComponentSingle_eventSetValueNoInterp_Parms), Z_Construct_UFunction_UDMXFixtureComponentSingle_SetValueNoInterp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentSingle_SetValueNoInterp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXFixtureComponentSingle_SetValueNoInterp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentSingle_SetValueNoInterp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXFixtureComponentSingle_SetValueNoInterp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXFixtureComponentSingle_SetValueNoInterp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXFixtureComponentSingle);
	UClass* Z_Construct_UClass_UDMXFixtureComponentSingle_NoRegister()
	{
		return UDMXFixtureComponentSingle::StaticClass();
	}
	struct Z_Construct_UClass_UDMXFixtureComponentSingle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DMXChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXFixtureComponentSingle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXFixtureComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXFixtures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXFixtureComponentSingle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedStep, "GetDMXInterpolatedStep" }, // 1019778995
		{ &Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXInterpolatedValue, "GetDMXInterpolatedValue" }, // 3254719530
		{ &Z_Construct_UFunction_UDMXFixtureComponentSingle_GetDMXTargetValue, "GetDMXTargetValue" }, // 2640125644
		{ &Z_Construct_UFunction_UDMXFixtureComponentSingle_IsDMXInterpolationDone, "IsDMXInterpolationDone" }, // 3517275873
		{ &Z_Construct_UFunction_UDMXFixtureComponentSingle_SetValueNoInterp, "SetValueNoInterp" }, // 287158037
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixtureComponentSingle_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "FixtureComponent" },
		{ "Comment", "// Component that uses 1 DMX channel\n" },
		{ "IncludePath", "DMXFixtureComponentSingle.h" },
		{ "IsBlueprintBase", "TRUE" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponentSingle.h" },
		{ "ToolTip", "Component that uses 1 DMX channel" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixtureComponentSingle_Statics::NewProp_DMXChannel_MetaData[] = {
		{ "Category", "DMX Channels" },
		{ "Comment", "//~ End DMXFixtureComponent interface\n" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponentSingle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXFixtureComponentSingle_Statics::NewProp_DMXChannel = { "DMXChannel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXFixtureComponentSingle, DMXChannel), Z_Construct_UScriptStruct_FDMXChannelData, METADATA_PARAMS(Z_Construct_UClass_UDMXFixtureComponentSingle_Statics::NewProp_DMXChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureComponentSingle_Statics::NewProp_DMXChannel_MetaData)) }; // 2484573544
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXFixtureComponentSingle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXFixtureComponentSingle_Statics::NewProp_DMXChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXFixtureComponentSingle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXFixtureComponentSingle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXFixtureComponentSingle_Statics::ClassParams = {
		&UDMXFixtureComponentSingle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDMXFixtureComponentSingle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureComponentSingle_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXFixtureComponentSingle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureComponentSingle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXFixtureComponentSingle()
	{
		if (!Z_Registration_Info_UClass_UDMXFixtureComponentSingle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXFixtureComponentSingle.OuterSingleton, Z_Construct_UClass_UDMXFixtureComponentSingle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXFixtureComponentSingle.OuterSingleton;
	}
	template<> DMXFIXTURES_API UClass* StaticClass<UDMXFixtureComponentSingle>()
	{
		return UDMXFixtureComponentSingle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXFixtureComponentSingle);
	UDMXFixtureComponentSingle::~UDMXFixtureComponentSingle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentSingle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentSingle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXFixtureComponentSingle, UDMXFixtureComponentSingle::StaticClass, TEXT("UDMXFixtureComponentSingle"), &Z_Registration_Info_UClass_UDMXFixtureComponentSingle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXFixtureComponentSingle), 2774407285U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentSingle_h_2676536447(TEXT("/Script/DMXFixtures"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentSingle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentSingle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
