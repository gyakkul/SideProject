// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterFalloffSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterFalloffSettings() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UEnum* Z_Construct_UEnum_Water_EWaterBrushFalloffMode();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterFalloffSettings();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWaterBrushFalloffMode;
	static UEnum* EWaterBrushFalloffMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWaterBrushFalloffMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWaterBrushFalloffMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Water_EWaterBrushFalloffMode, (UObject*)Z_Construct_UPackage__Script_Water(), TEXT("EWaterBrushFalloffMode"));
		}
		return Z_Registration_Info_UEnum_EWaterBrushFalloffMode.OuterSingleton;
	}
	template<> WATER_API UEnum* StaticEnum<EWaterBrushFalloffMode>()
	{
		return EWaterBrushFalloffMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Water_EWaterBrushFalloffMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Water_EWaterBrushFalloffMode_Statics::Enumerators[] = {
		{ "EWaterBrushFalloffMode::Angle", (int64)EWaterBrushFalloffMode::Angle },
		{ "EWaterBrushFalloffMode::Width", (int64)EWaterBrushFalloffMode::Width },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Water_EWaterBrushFalloffMode_Statics::Enum_MetaDataParams[] = {
		{ "Angle.Name", "EWaterBrushFalloffMode::Angle" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WaterFalloffSettings.h" },
		{ "Width.Name", "EWaterBrushFalloffMode::Width" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Water_EWaterBrushFalloffMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Water,
		nullptr,
		"EWaterBrushFalloffMode",
		"EWaterBrushFalloffMode",
		Z_Construct_UEnum_Water_EWaterBrushFalloffMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Water_EWaterBrushFalloffMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Water_EWaterBrushFalloffMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Water_EWaterBrushFalloffMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Water_EWaterBrushFalloffMode()
	{
		if (!Z_Registration_Info_UEnum_EWaterBrushFalloffMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWaterBrushFalloffMode.InnerSingleton, Z_Construct_UEnum_Water_EWaterBrushFalloffMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWaterBrushFalloffMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaterFalloffSettings;
class UScriptStruct* FWaterFalloffSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaterFalloffSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaterFalloffSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterFalloffSettings, (UObject*)Z_Construct_UPackage__Script_Water(), TEXT("WaterFalloffSettings"));
	}
	return Z_Registration_Info_UScriptStruct_WaterFalloffSettings.OuterSingleton;
}
template<> WATER_API UScriptStruct* StaticStruct<FWaterFalloffSettings>()
{
	return FWaterFalloffSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WaterFalloffSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterFalloffSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_FalloffMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_FalloffMode_MetaData[] = {
		{ "Category", "FalloffSettings" },
		{ "ModuleRelativePath", "Public/WaterFalloffSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_FalloffMode = { "FalloffMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterFalloffSettings, FalloffMode), Z_Construct_UEnum_Water_EWaterBrushFalloffMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_FalloffMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_FalloffMode_MetaData)) }; // 3726076979
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_FalloffAngle_MetaData[] = {
		{ "Category", "FalloffSettings" },
		{ "EditCondition", "FalloffMode == EWaterBrushFalloffMode::Angle" },
		{ "ModuleRelativePath", "Public/WaterFalloffSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_FalloffAngle = { "FalloffAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterFalloffSettings, FalloffAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_FalloffAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_FalloffAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_FalloffWidth_MetaData[] = {
		{ "Category", "FalloffSettings" },
		{ "ClampMin", "0.1" },
		{ "EditCondition", "FalloffMode == EWaterBrushFalloffMode::Width" },
		{ "ModuleRelativePath", "Public/WaterFalloffSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_FalloffWidth = { "FalloffWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterFalloffSettings, FalloffWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_FalloffWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_FalloffWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_EdgeOffset_MetaData[] = {
		{ "Category", "FalloffSettings" },
		{ "ModuleRelativePath", "Public/WaterFalloffSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_EdgeOffset = { "EdgeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterFalloffSettings, EdgeOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_EdgeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_EdgeOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_ZOffset_MetaData[] = {
		{ "Category", "FalloffSettings" },
		{ "ModuleRelativePath", "Public/WaterFalloffSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterFalloffSettings, ZOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_ZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_ZOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_FalloffMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_FalloffMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_FalloffAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_FalloffWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_EdgeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewProp_ZOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
		nullptr,
		&NewStructOps,
		"WaterFalloffSettings",
		sizeof(FWaterFalloffSettings),
		alignof(FWaterFalloffSettings),
		Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaterFalloffSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_WaterFalloffSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaterFalloffSettings.InnerSingleton, Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaterFalloffSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterFalloffSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterFalloffSettings_h_Statics::EnumInfo[] = {
		{ EWaterBrushFalloffMode_StaticEnum, TEXT("EWaterBrushFalloffMode"), &Z_Registration_Info_UEnum_EWaterBrushFalloffMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3726076979U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterFalloffSettings_h_Statics::ScriptStructInfo[] = {
		{ FWaterFalloffSettings::StaticStruct, Z_Construct_UScriptStruct_FWaterFalloffSettings_Statics::NewStructOps, TEXT("WaterFalloffSettings"), &Z_Registration_Info_UScriptStruct_WaterFalloffSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterFalloffSettings), 4094740673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterFalloffSettings_h_3146749597(TEXT("/Script/Water"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterFalloffSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterFalloffSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterFalloffSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterFalloffSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
