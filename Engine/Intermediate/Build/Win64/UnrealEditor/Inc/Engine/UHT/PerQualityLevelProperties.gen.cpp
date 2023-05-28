// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/PerQualityLevelProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerQualityLevelProperties() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPerQualityLevels();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerQualityLevelFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerQualityLevelInt();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPerQualityLevels;
	static UEnum* EPerQualityLevels_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPerQualityLevels.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPerQualityLevels.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPerQualityLevels, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPerQualityLevels"));
		}
		return Z_Registration_Info_UEnum_EPerQualityLevels.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPerQualityLevels>()
	{
		return EPerQualityLevels_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EPerQualityLevels_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EPerQualityLevels_Statics::Enumerators[] = {
		{ "EPerQualityLevels::Low", (int64)EPerQualityLevels::Low },
		{ "EPerQualityLevels::Medium", (int64)EPerQualityLevels::Medium },
		{ "EPerQualityLevels::High", (int64)EPerQualityLevels::High },
		{ "EPerQualityLevels::Epic", (int64)EPerQualityLevels::Epic },
		{ "EPerQualityLevels::Cinematic", (int64)EPerQualityLevels::Cinematic },
		{ "EPerQualityLevels::Num", (int64)EPerQualityLevels::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EPerQualityLevels_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cinematic.Name", "EPerQualityLevels::Cinematic" },
		{ "Epic.Name", "EPerQualityLevels::Epic" },
		{ "High.Name", "EPerQualityLevels::High" },
		{ "Low.Name", "EPerQualityLevels::Low" },
		{ "Medium.Name", "EPerQualityLevels::Medium" },
		{ "ModuleRelativePath", "Public/PerQualityLevelProperties.h" },
		{ "Num.Name", "EPerQualityLevels::Num" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPerQualityLevels_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EPerQualityLevels",
		"EPerQualityLevels",
		Z_Construct_UEnum_Engine_EPerQualityLevels_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPerQualityLevels_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EPerQualityLevels_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPerQualityLevels_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EPerQualityLevels()
	{
		if (!Z_Registration_Info_UEnum_EPerQualityLevels.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPerQualityLevels.InnerSingleton, Z_Construct_UEnum_Engine_EPerQualityLevels_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPerQualityLevels.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerQualityLevelInt;
class UScriptStruct* FPerQualityLevelInt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerQualityLevelInt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerQualityLevelInt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerQualityLevelInt, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PerQualityLevelInt"));
	}
	return Z_Registration_Info_UScriptStruct_PerQualityLevelInt.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPerQualityLevelInt>()
{
	return FPerQualityLevelInt::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Default;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PerQuality_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PerQuality_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerQuality_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerQuality;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerQualityLevelProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerQualityLevelInt>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "PerQualityLevel" },
		{ "ModuleRelativePath", "Public/PerQualityLevelProperties.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerQualityLevelInt, Default), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewProp_Default_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewProp_PerQuality_ValueProp = { "PerQuality", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewProp_PerQuality_Key_KeyProp = { "PerQuality_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewProp_PerQuality_MetaData[] = {
		{ "Category", "PerQualityLevel" },
		{ "ModuleRelativePath", "Public/PerQualityLevelProperties.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewProp_PerQuality = { "PerQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerQualityLevelInt, PerQuality), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewProp_PerQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewProp_PerQuality_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewProp_Default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewProp_PerQuality_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewProp_PerQuality_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewProp_PerQuality,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PerQualityLevelInt",
		sizeof(FPerQualityLevelInt),
		alignof(FPerQualityLevelInt),
		Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerQualityLevelInt()
	{
		if (!Z_Registration_Info_UScriptStruct_PerQualityLevelInt.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerQualityLevelInt.InnerSingleton, Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PerQualityLevelInt.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerQualityLevelFloat;
class UScriptStruct* FPerQualityLevelFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerQualityLevelFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerQualityLevelFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerQualityLevelFloat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PerQualityLevelFloat"));
	}
	return Z_Registration_Info_UScriptStruct_PerQualityLevelFloat.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPerQualityLevelFloat>()
{
	return FPerQualityLevelFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Default;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PerQuality_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PerQuality_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerQuality_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerQuality;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerQualityLevelProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerQualityLevelFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "PerQualityLevel" },
		{ "ModuleRelativePath", "Public/PerQualityLevelProperties.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerQualityLevelFloat, Default), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewProp_Default_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewProp_PerQuality_ValueProp = { "PerQuality", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewProp_PerQuality_Key_KeyProp = { "PerQuality_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewProp_PerQuality_MetaData[] = {
		{ "Category", "PerQualityLevel" },
		{ "ModuleRelativePath", "Public/PerQualityLevelProperties.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewProp_PerQuality = { "PerQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerQualityLevelFloat, PerQuality), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewProp_PerQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewProp_PerQuality_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewProp_Default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewProp_PerQuality_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewProp_PerQuality_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewProp_PerQuality,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PerQualityLevelFloat",
		sizeof(FPerQualityLevelFloat),
		alignof(FPerQualityLevelFloat),
		Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerQualityLevelFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_PerQualityLevelFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerQualityLevelFloat.InnerSingleton, Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PerQualityLevelFloat.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerQualityLevelProperties_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerQualityLevelProperties_h_Statics::EnumInfo[] = {
		{ EPerQualityLevels_StaticEnum, TEXT("EPerQualityLevels"), &Z_Registration_Info_UEnum_EPerQualityLevels, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1281688588U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerQualityLevelProperties_h_Statics::ScriptStructInfo[] = {
		{ FPerQualityLevelInt::StaticStruct, Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewStructOps, TEXT("PerQualityLevelInt"), &Z_Registration_Info_UScriptStruct_PerQualityLevelInt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerQualityLevelInt), 1607049419U) },
		{ FPerQualityLevelFloat::StaticStruct, Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewStructOps, TEXT("PerQualityLevelFloat"), &Z_Registration_Info_UScriptStruct_PerQualityLevelFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerQualityLevelFloat), 965922116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerQualityLevelProperties_h_234389433(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerQualityLevelProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerQualityLevelProperties_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerQualityLevelProperties_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerQualityLevelProperties_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
