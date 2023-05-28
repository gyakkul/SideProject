// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundNodeModulatorContinuous.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeModulatorContinuous() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeModulatorContinuous();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeModulatorContinuous_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ModulationParamMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FModulatorContinuousParams();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ModulationParamMode;
	static UEnum* ModulationParamMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ModulationParamMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ModulationParamMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ModulationParamMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ModulationParamMode"));
		}
		return Z_Registration_Info_UEnum_ModulationParamMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ModulationParamMode>()
	{
		return ModulationParamMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ModulationParamMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ModulationParamMode_Statics::Enumerators[] = {
		{ "MPM_Normal", (int64)MPM_Normal },
		{ "MPM_Abs", (int64)MPM_Abs },
		{ "MPM_Direct", (int64)MPM_Direct },
		{ "MPM_MAX", (int64)MPM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ModulationParamMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
		{ "MPM_Abs.DisplayName", "Absolute" },
		{ "MPM_Abs.Name", "MPM_Abs" },
		{ "MPM_Abs.Tooltip", "Same as Normal except that the input value is treated as an absolute value" },
		{ "MPM_Direct.DisplayName", "Direct" },
		{ "MPM_Direct.Name", "MPM_Direct" },
		{ "MPM_Direct.Tooltip", "Use the input value directly without scaling or reference to Min or Max input or output values" },
		{ "MPM_MAX.Name", "MPM_MAX" },
		{ "MPM_Normal.DisplayName", "Normal" },
		{ "MPM_Normal.Name", "MPM_Normal" },
		{ "MPM_Normal.Tooltip", "Clamps input value to the range (MinInput, MaxInput) then maps to the range (MinOutput, MaxOutput)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ModulationParamMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ModulationParamMode",
		"ModulationParamMode",
		Z_Construct_UEnum_Engine_ModulationParamMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ModulationParamMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ModulationParamMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ModulationParamMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ModulationParamMode()
	{
		if (!Z_Registration_Info_UEnum_ModulationParamMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ModulationParamMode.InnerSingleton, Z_Construct_UEnum_Engine_ModulationParamMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ModulationParamMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModulatorContinuousParams;
class UScriptStruct* FModulatorContinuousParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModulatorContinuousParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModulatorContinuousParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModulatorContinuousParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ModulatorContinuousParams"));
	}
	return Z_Registration_Info_UScriptStruct_ModulatorContinuousParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FModulatorContinuousParams>()
{
	return FModulatorContinuousParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Default;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinOutput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxOutput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ParamMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModulatorContinuousParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "ModulatorContinousParameters" },
		{ "Comment", "/** The name of the sound instance parameter that specifies the current value. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
		{ "ToolTip", "The name of the sound instance parameter that specifies the current value." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModulatorContinuousParams, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "ModulatorContinousParameters" },
		{ "Comment", "/** The default value to be used if the parameter is not found. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
		{ "ToolTip", "The default value to be used if the parameter is not found." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModulatorContinuousParams, Default), METADATA_PARAMS(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_Default_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MinInput_MetaData[] = {
		{ "Category", "ModulatorContinousParameters" },
		{ "Comment", "/** The minimum input value. Values will be clamped to the [MinInput, MaxInput] range.*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
		{ "ToolTip", "The minimum input value. Values will be clamped to the [MinInput, MaxInput] range." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MinInput = { "MinInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModulatorContinuousParams, MinInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MinInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MinInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MaxInput_MetaData[] = {
		{ "Category", "ModulatorContinousParameters" },
		{ "Comment", "/** The maximum input value. Values will be clamped to the [MinInput, MaxInput] range.*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
		{ "ToolTip", "The maximum input value. Values will be clamped to the [MinInput, MaxInput] range." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MaxInput = { "MaxInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModulatorContinuousParams, MaxInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MaxInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MaxInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MinOutput_MetaData[] = {
		{ "Category", "ModulatorContinousParameters" },
		{ "Comment", "/** The minimum output value. The input value will be scaled from the range [MinInput, MaxInput] to [MinOut, MaxOutput] */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
		{ "ToolTip", "The minimum output value. The input value will be scaled from the range [MinInput, MaxInput] to [MinOut, MaxOutput]" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MinOutput = { "MinOutput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModulatorContinuousParams, MinOutput), METADATA_PARAMS(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MinOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MinOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MaxOutput_MetaData[] = {
		{ "Category", "ModulatorContinousParameters" },
		{ "Comment", "/** The maximum output value. The input value will be scaled from the range [MinInput, MaxInput] to [MinOut, MaxOutput] */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
		{ "ToolTip", "The maximum output value. The input value will be scaled from the range [MinInput, MaxInput] to [MinOut, MaxOutput]" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MaxOutput = { "MaxOutput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModulatorContinuousParams, MaxOutput), METADATA_PARAMS(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MaxOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MaxOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_ParamMode_MetaData[] = {
		{ "Category", "ModulatorContinousParameters" },
		{ "Comment", "/** The mode with which to treat the input value */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
		{ "ToolTip", "The mode with which to treat the input value" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_ParamMode = { "ParamMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModulatorContinuousParams, ParamMode), Z_Construct_UEnum_Engine_ModulationParamMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_ParamMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_ParamMode_MetaData)) }; // 3120669504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_Default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MinInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MaxInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MinOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_MaxOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewProp_ParamMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ModulatorContinuousParams",
		sizeof(FModulatorContinuousParams),
		alignof(FModulatorContinuousParams),
		Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModulatorContinuousParams()
	{
		if (!Z_Registration_Info_UScriptStruct_ModulatorContinuousParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModulatorContinuousParams.InnerSingleton, Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ModulatorContinuousParams.InnerSingleton;
	}
	void USoundNodeModulatorContinuous::StaticRegisterNativesUSoundNodeModulatorContinuous()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeModulatorContinuous);
	UClass* Z_Construct_UClass_USoundNodeModulatorContinuous_NoRegister()
	{
		return USoundNodeModulatorContinuous::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeModulatorContinuous_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchModulationParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchModulationParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeModulationParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeModulationParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows named parameter based manipulation of pitch and volume\n */" },
		{ "DisplayName", "Continuous Modulator" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeModulatorContinuous.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
		{ "ToolTip", "Allows named parameter based manipulation of pitch and volume" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::NewProp_PitchModulationParams_MetaData[] = {
		{ "Category", "ContinuousModulator" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::NewProp_PitchModulationParams = { "PitchModulationParams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeModulatorContinuous, PitchModulationParams), Z_Construct_UScriptStruct_FModulatorContinuousParams, METADATA_PARAMS(Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::NewProp_PitchModulationParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::NewProp_PitchModulationParams_MetaData)) }; // 1309752967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::NewProp_VolumeModulationParams_MetaData[] = {
		{ "Category", "ContinuousModulator" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulatorContinuous.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::NewProp_VolumeModulationParams = { "VolumeModulationParams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeModulatorContinuous, VolumeModulationParams), Z_Construct_UScriptStruct_FModulatorContinuousParams, METADATA_PARAMS(Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::NewProp_VolumeModulationParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::NewProp_VolumeModulationParams_MetaData)) }; // 1309752967
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::NewProp_PitchModulationParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::NewProp_VolumeModulationParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeModulatorContinuous>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::ClassParams = {
		&USoundNodeModulatorContinuous::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeModulatorContinuous()
	{
		if (!Z_Registration_Info_UClass_USoundNodeModulatorContinuous.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeModulatorContinuous.OuterSingleton, Z_Construct_UClass_USoundNodeModulatorContinuous_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundNodeModulatorContinuous.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundNodeModulatorContinuous>()
	{
		return USoundNodeModulatorContinuous::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeModulatorContinuous);
	USoundNodeModulatorContinuous::~USoundNodeModulatorContinuous() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_Statics::EnumInfo[] = {
		{ ModulationParamMode_StaticEnum, TEXT("ModulationParamMode"), &Z_Registration_Info_UEnum_ModulationParamMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3120669504U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_Statics::ScriptStructInfo[] = {
		{ FModulatorContinuousParams::StaticStruct, Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics::NewStructOps, TEXT("ModulatorContinuousParams"), &Z_Registration_Info_UScriptStruct_ModulatorContinuousParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModulatorContinuousParams), 1309752967U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeModulatorContinuous, USoundNodeModulatorContinuous::StaticClass, TEXT("USoundNodeModulatorContinuous"), &Z_Registration_Info_UClass_USoundNodeModulatorContinuous, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeModulatorContinuous), 3329751311U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_3816757750(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
