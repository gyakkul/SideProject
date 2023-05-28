// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDStageOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDStageOptions() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_USDClasses();
	USDCLASSES_API UEnum* Z_Construct_UEnum_USDClasses_EUsdUpAxis();
	USDCLASSES_API UScriptStruct* Z_Construct_UScriptStruct_FUsdStageOptions();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdUpAxis;
	static UEnum* EUsdUpAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUsdUpAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUsdUpAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_USDClasses_EUsdUpAxis, (UObject*)Z_Construct_UPackage__Script_USDClasses(), TEXT("EUsdUpAxis"));
		}
		return Z_Registration_Info_UEnum_EUsdUpAxis.OuterSingleton;
	}
	template<> USDCLASSES_API UEnum* StaticEnum<EUsdUpAxis>()
	{
		return EUsdUpAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_USDClasses_EUsdUpAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_USDClasses_EUsdUpAxis_Statics::Enumerators[] = {
		{ "EUsdUpAxis::YAxis", (int64)EUsdUpAxis::YAxis },
		{ "EUsdUpAxis::ZAxis", (int64)EUsdUpAxis::ZAxis },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_USDClasses_EUsdUpAxis_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/USDStageOptions.h" },
		{ "YAxis.Name", "EUsdUpAxis::YAxis" },
		{ "ZAxis.Name", "EUsdUpAxis::ZAxis" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_USDClasses_EUsdUpAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_USDClasses,
		nullptr,
		"EUsdUpAxis",
		"EUsdUpAxis",
		Z_Construct_UEnum_USDClasses_EUsdUpAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_USDClasses_EUsdUpAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_USDClasses_EUsdUpAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_USDClasses_EUsdUpAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_USDClasses_EUsdUpAxis()
	{
		if (!Z_Registration_Info_UEnum_EUsdUpAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdUpAxis.InnerSingleton, Z_Construct_UEnum_USDClasses_EUsdUpAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUsdUpAxis.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UsdStageOptions;
class UScriptStruct* FUsdStageOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UsdStageOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UsdStageOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUsdStageOptions, (UObject*)Z_Construct_UPackage__Script_USDClasses(), TEXT("UsdStageOptions"));
	}
	return Z_Registration_Info_UScriptStruct_UsdStageOptions.OuterSingleton;
}
template<> USDCLASSES_API UScriptStruct* StaticStruct<FUsdStageOptions>()
{
	return FUsdStageOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUsdStageOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetersPerUnit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MetersPerUnit;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UpAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UpAxis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdStageOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/USDStageOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUsdStageOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUsdStageOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdStageOptions_Statics::NewProp_MetersPerUnit_MetaData[] = {
		{ "Category", "Stage options" },
		{ "Comment", "/** MetersPerUnit to use for the stage. Defaults to 0.01 (i.e. 1cm per unit, which equals UE units) */" },
		{ "ModuleRelativePath", "Public/USDStageOptions.h" },
		{ "ToolTip", "MetersPerUnit to use for the stage. Defaults to 0.01 (i.e. 1cm per unit, which equals UE units)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUsdStageOptions_Statics::NewProp_MetersPerUnit = { "MetersPerUnit", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdStageOptions, MetersPerUnit), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdStageOptions_Statics::NewProp_MetersPerUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdStageOptions_Statics::NewProp_MetersPerUnit_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUsdStageOptions_Statics::NewProp_UpAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsdStageOptions_Statics::NewProp_UpAxis_MetaData[] = {
		{ "Category", "Stage options" },
		{ "Comment", "/** UpAxis to use for the stage. Defaults to ZAxis, which equals the UE convention */" },
		{ "ModuleRelativePath", "Public/USDStageOptions.h" },
		{ "ToolTip", "UpAxis to use for the stage. Defaults to ZAxis, which equals the UE convention" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUsdStageOptions_Statics::NewProp_UpAxis = { "UpAxis", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUsdStageOptions, UpAxis), Z_Construct_UEnum_USDClasses_EUsdUpAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdStageOptions_Statics::NewProp_UpAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdStageOptions_Statics::NewProp_UpAxis_MetaData)) }; // 4035715269
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUsdStageOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdStageOptions_Statics::NewProp_MetersPerUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdStageOptions_Statics::NewProp_UpAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsdStageOptions_Statics::NewProp_UpAxis,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUsdStageOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_USDClasses,
		nullptr,
		&NewStructOps,
		"UsdStageOptions",
		sizeof(FUsdStageOptions),
		alignof(FUsdStageOptions),
		Z_Construct_UScriptStruct_FUsdStageOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdStageOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUsdStageOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsdStageOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUsdStageOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_UsdStageOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UsdStageOptions.InnerSingleton, Z_Construct_UScriptStruct_FUsdStageOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UsdStageOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDStageOptions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDStageOptions_h_Statics::EnumInfo[] = {
		{ EUsdUpAxis_StaticEnum, TEXT("EUsdUpAxis"), &Z_Registration_Info_UEnum_EUsdUpAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4035715269U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDStageOptions_h_Statics::ScriptStructInfo[] = {
		{ FUsdStageOptions::StaticStruct, Z_Construct_UScriptStruct_FUsdStageOptions_Statics::NewStructOps, TEXT("UsdStageOptions"), &Z_Registration_Info_UScriptStruct_UsdStageOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUsdStageOptions), 3802012082U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDStageOptions_h_1431421757(TEXT("/Script/USDClasses"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDStageOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDStageOptions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDStageOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClasses_Public_USDStageOptions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
