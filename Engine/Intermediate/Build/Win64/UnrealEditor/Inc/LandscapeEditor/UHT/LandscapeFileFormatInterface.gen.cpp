// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeFileFormatInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeFileFormatInterface() {}
// Cross Module References
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult();
	LANDSCAPEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeFileResolution();
	UPackage* Z_Construct_UPackage__Script_LandscapeEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeImportResult;
	static UEnum* ELandscapeImportResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeImportResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeImportResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult, (UObject*)Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("ELandscapeImportResult"));
		}
		return Z_Registration_Info_UEnum_ELandscapeImportResult.OuterSingleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeImportResult>()
	{
		return ELandscapeImportResult_StaticEnum();
	}
	struct Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult_Statics::Enumerators[] = {
		{ "ELandscapeImportResult::Success", (int64)ELandscapeImportResult::Success },
		{ "ELandscapeImportResult::Warning", (int64)ELandscapeImportResult::Warning },
		{ "ELandscapeImportResult::Error", (int64)ELandscapeImportResult::Error },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult_Statics::Enum_MetaDataParams[] = {
		{ "Error.Name", "ELandscapeImportResult::Error" },
		{ "ModuleRelativePath", "Public/LandscapeFileFormatInterface.h" },
		{ "Success.Name", "ELandscapeImportResult::Success" },
		{ "Warning.Name", "ELandscapeImportResult::Warning" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
		nullptr,
		"ELandscapeImportResult",
		"ELandscapeImportResult",
		Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeImportResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeImportResult.InnerSingleton, Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeImportResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeFileResolution;
class UScriptStruct* FLandscapeFileResolution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeFileResolution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeFileResolution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeFileResolution, (UObject*)Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("LandscapeFileResolution"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeFileResolution.OuterSingleton;
}
template<> LANDSCAPEEDITOR_API UScriptStruct* StaticStruct<FLandscapeFileResolution>()
{
	return FLandscapeFileResolution::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandscapeFileResolution_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFileResolution_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LandscapeFileFormatInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeFileResolution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeFileResolution>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFileResolution_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeFileFormatInterface.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLandscapeFileResolution_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeFileResolution, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFileResolution_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFileResolution_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeFileResolution_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeFileFormatInterface.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLandscapeFileResolution_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeFileResolution, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFileResolution_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFileResolution_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeFileResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFileResolution_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeFileResolution_Statics::NewProp_Height,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeFileResolution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapeEditor,
		nullptr,
		&NewStructOps,
		"LandscapeFileResolution",
		sizeof(FLandscapeFileResolution),
		alignof(FLandscapeFileResolution),
		Z_Construct_UScriptStruct_FLandscapeFileResolution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFileResolution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeFileResolution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeFileResolution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeFileResolution()
	{
		if (!Z_Registration_Info_UScriptStruct_LandscapeFileResolution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeFileResolution.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeFileResolution_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandscapeFileResolution.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeFileFormatInterface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeFileFormatInterface_h_Statics::EnumInfo[] = {
		{ ELandscapeImportResult_StaticEnum, TEXT("ELandscapeImportResult"), &Z_Registration_Info_UEnum_ELandscapeImportResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2081317131U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeFileFormatInterface_h_Statics::ScriptStructInfo[] = {
		{ FLandscapeFileResolution::StaticStruct, Z_Construct_UScriptStruct_FLandscapeFileResolution_Statics::NewStructOps, TEXT("LandscapeFileResolution"), &Z_Registration_Info_UScriptStruct_LandscapeFileResolution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeFileResolution), 1517489915U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeFileFormatInterface_h_3550494886(TEXT("/Script/LandscapeEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeFileFormatInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeFileFormatInterface_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeFileFormatInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeFileFormatInterface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
