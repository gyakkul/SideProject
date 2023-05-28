// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FalloffSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFalloffSettings() {}
// Cross Module References
	LANDMASS_API UEnum* Z_Construct_UEnum_Landmass_EBrushFalloffMode();
	LANDMASS_API UScriptStruct* Z_Construct_UScriptStruct_FLandmassFalloffSettings();
	UPackage* Z_Construct_UPackage__Script_Landmass();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBrushFalloffMode;
	static UEnum* EBrushFalloffMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBrushFalloffMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBrushFalloffMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landmass_EBrushFalloffMode, (UObject*)Z_Construct_UPackage__Script_Landmass(), TEXT("EBrushFalloffMode"));
		}
		return Z_Registration_Info_UEnum_EBrushFalloffMode.OuterSingleton;
	}
	template<> LANDMASS_API UEnum* StaticEnum<EBrushFalloffMode>()
	{
		return EBrushFalloffMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Landmass_EBrushFalloffMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Landmass_EBrushFalloffMode_Statics::Enumerators[] = {
		{ "EBrushFalloffMode::Angle", (int64)EBrushFalloffMode::Angle },
		{ "EBrushFalloffMode::Width", (int64)EBrushFalloffMode::Width },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Landmass_EBrushFalloffMode_Statics::Enum_MetaDataParams[] = {
		{ "Angle.Name", "EBrushFalloffMode::Angle" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FalloffSettings.h" },
		{ "Width.Name", "EBrushFalloffMode::Width" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landmass_EBrushFalloffMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Landmass,
		nullptr,
		"EBrushFalloffMode",
		"EBrushFalloffMode",
		Z_Construct_UEnum_Landmass_EBrushFalloffMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Landmass_EBrushFalloffMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Landmass_EBrushFalloffMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Landmass_EBrushFalloffMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Landmass_EBrushFalloffMode()
	{
		if (!Z_Registration_Info_UEnum_EBrushFalloffMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBrushFalloffMode.InnerSingleton, Z_Construct_UEnum_Landmass_EBrushFalloffMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBrushFalloffMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandmassFalloffSettings;
class UScriptStruct* FLandmassFalloffSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandmassFalloffSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandmassFalloffSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandmassFalloffSettings, (UObject*)Z_Construct_UPackage__Script_Landmass(), TEXT("LandmassFalloffSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LandmassFalloffSettings.OuterSingleton;
}
template<> LANDMASS_API UScriptStruct* StaticStruct<FLandmassFalloffSettings>()
{
	return FLandmassFalloffSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalloffMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalloffAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FalloffAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalloffWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FalloffWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FalloffSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandmassFalloffSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_FalloffMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_FalloffMode_MetaData[] = {
		{ "Category", "FalloffSettings" },
		{ "ModuleRelativePath", "Public/FalloffSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_FalloffMode = { "FalloffMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandmassFalloffSettings, FalloffMode), Z_Construct_UEnum_Landmass_EBrushFalloffMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_FalloffMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_FalloffMode_MetaData)) }; // 3821428793
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_FalloffAngle_MetaData[] = {
		{ "Category", "FalloffSettings" },
		{ "ModuleRelativePath", "Public/FalloffSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_FalloffAngle = { "FalloffAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandmassFalloffSettings, FalloffAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_FalloffAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_FalloffAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_FalloffWidth_MetaData[] = {
		{ "Category", "FalloffSettings" },
		{ "ModuleRelativePath", "Public/FalloffSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_FalloffWidth = { "FalloffWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandmassFalloffSettings, FalloffWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_FalloffWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_FalloffWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_EdgeOffset_MetaData[] = {
		{ "Category", "FalloffSettings" },
		{ "ModuleRelativePath", "Public/FalloffSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_EdgeOffset = { "EdgeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandmassFalloffSettings, EdgeOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_EdgeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_EdgeOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_ZOffset_MetaData[] = {
		{ "Category", "FalloffSettings" },
		{ "ModuleRelativePath", "Public/FalloffSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandmassFalloffSettings, ZOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_ZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_ZOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_FalloffMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_FalloffMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_FalloffAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_FalloffWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_EdgeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewProp_ZOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landmass,
		nullptr,
		&NewStructOps,
		"LandmassFalloffSettings",
		sizeof(FLandmassFalloffSettings),
		alignof(FLandmassFalloffSettings),
		Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandmassFalloffSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LandmassFalloffSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandmassFalloffSettings.InnerSingleton, Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandmassFalloffSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_FalloffSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_FalloffSettings_h_Statics::EnumInfo[] = {
		{ EBrushFalloffMode_StaticEnum, TEXT("EBrushFalloffMode"), &Z_Registration_Info_UEnum_EBrushFalloffMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3821428793U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_FalloffSettings_h_Statics::ScriptStructInfo[] = {
		{ FLandmassFalloffSettings::StaticStruct, Z_Construct_UScriptStruct_FLandmassFalloffSettings_Statics::NewStructOps, TEXT("LandmassFalloffSettings"), &Z_Registration_Info_UScriptStruct_LandmassFalloffSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandmassFalloffSettings), 201546117U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_FalloffSettings_h_882821083(TEXT("/Script/Landmass"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_FalloffSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_FalloffSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_FalloffSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_FalloffSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
