// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithOpenNurbsImportOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithOpenNurbsImportOptions() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithOptionsBase();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithTessellationOptions();
	DATASMITHOPENNURBSTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithOpenNurbsImportOptions();
	DATASMITHOPENNURBSTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithOpenNurbsImportOptions_NoRegister();
	DATASMITHOPENNURBSTRANSLATOR_API UEnum* Z_Construct_UEnum_DatasmithOpenNurbsTranslator_EDatasmithOpenNurbsBrepTessellatedSource();
	DATASMITHOPENNURBSTRANSLATOR_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithOpenNurbsOptions();
	UPackage* Z_Construct_UPackage__Script_DatasmithOpenNurbsTranslator();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithOpenNurbsBrepTessellatedSource;
	static UEnum* EDatasmithOpenNurbsBrepTessellatedSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithOpenNurbsBrepTessellatedSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDatasmithOpenNurbsBrepTessellatedSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithOpenNurbsTranslator_EDatasmithOpenNurbsBrepTessellatedSource, (UObject*)Z_Construct_UPackage__Script_DatasmithOpenNurbsTranslator(), TEXT("EDatasmithOpenNurbsBrepTessellatedSource"));
		}
		return Z_Registration_Info_UEnum_EDatasmithOpenNurbsBrepTessellatedSource.OuterSingleton;
	}
	template<> DATASMITHOPENNURBSTRANSLATOR_API UEnum* StaticEnum<EDatasmithOpenNurbsBrepTessellatedSource>()
	{
		return EDatasmithOpenNurbsBrepTessellatedSource_StaticEnum();
	}
	struct Z_Construct_UEnum_DatasmithOpenNurbsTranslator_EDatasmithOpenNurbsBrepTessellatedSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DatasmithOpenNurbsTranslator_EDatasmithOpenNurbsBrepTessellatedSource_Statics::Enumerators[] = {
		{ "EDatasmithOpenNurbsBrepTessellatedSource::UseUnrealNurbsTessellation", (int64)EDatasmithOpenNurbsBrepTessellatedSource::UseUnrealNurbsTessellation },
		{ "EDatasmithOpenNurbsBrepTessellatedSource::UseRenderMeshes", (int64)EDatasmithOpenNurbsBrepTessellatedSource::UseRenderMeshes },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DatasmithOpenNurbsTranslator_EDatasmithOpenNurbsBrepTessellatedSource_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DatasmithOpenNurbsImportOptions.h" },
		{ "UseRenderMeshes.Comment", "/** Use render meshes stored in the scene file */" },
		{ "UseRenderMeshes.DisplayName", "Import Rhino Meshes and UVs" },
		{ "UseRenderMeshes.Name", "EDatasmithOpenNurbsBrepTessellatedSource::UseRenderMeshes" },
		{ "UseRenderMeshes.ToolTip", "Use render meshes stored in the scene file" },
		{ "UseUnrealNurbsTessellation.Comment", "/** Tessellate all Breps on import */" },
		{ "UseUnrealNurbsTessellation.DisplayName", "Import as NURBS, Tessellate in Unreal" },
		{ "UseUnrealNurbsTessellation.Name", "EDatasmithOpenNurbsBrepTessellatedSource::UseUnrealNurbsTessellation" },
		{ "UseUnrealNurbsTessellation.ToolTip", "Tessellate all Breps on import" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithOpenNurbsTranslator_EDatasmithOpenNurbsBrepTessellatedSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DatasmithOpenNurbsTranslator,
		nullptr,
		"EDatasmithOpenNurbsBrepTessellatedSource",
		"EDatasmithOpenNurbsBrepTessellatedSource",
		Z_Construct_UEnum_DatasmithOpenNurbsTranslator_EDatasmithOpenNurbsBrepTessellatedSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithOpenNurbsTranslator_EDatasmithOpenNurbsBrepTessellatedSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DatasmithOpenNurbsTranslator_EDatasmithOpenNurbsBrepTessellatedSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithOpenNurbsTranslator_EDatasmithOpenNurbsBrepTessellatedSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DatasmithOpenNurbsTranslator_EDatasmithOpenNurbsBrepTessellatedSource()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithOpenNurbsBrepTessellatedSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithOpenNurbsBrepTessellatedSource.InnerSingleton, Z_Construct_UEnum_DatasmithOpenNurbsTranslator_EDatasmithOpenNurbsBrepTessellatedSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDatasmithOpenNurbsBrepTessellatedSource.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDatasmithOpenNurbsOptions>() == std::is_polymorphic<FDatasmithTessellationOptions>(), "USTRUCT FDatasmithOpenNurbsOptions cannot be polymorphic unless super FDatasmithTessellationOptions is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithOpenNurbsOptions;
class UScriptStruct* FDatasmithOpenNurbsOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithOpenNurbsOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithOpenNurbsOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithOpenNurbsOptions, (UObject*)Z_Construct_UPackage__Script_DatasmithOpenNurbsTranslator(), TEXT("DatasmithOpenNurbsOptions"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithOpenNurbsOptions.OuterSingleton;
}
template<> DATASMITHOPENNURBSTRANSLATOR_API UScriptStruct* StaticStruct<FDatasmithOpenNurbsOptions>()
{
	return FDatasmithOpenNurbsOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDatasmithOpenNurbsOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Geometry_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Geometry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithOpenNurbsOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DatasmithOpenNurbsImportOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithOpenNurbsOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithOpenNurbsOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatasmithOpenNurbsOptions_Statics::NewProp_Geometry_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithOpenNurbsOptions_Statics::NewProp_Geometry_MetaData[] = {
		{ "Category", "Geometry & Tessellation Options" },
		{ "ModuleRelativePath", "Public/DatasmithOpenNurbsImportOptions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDatasmithOpenNurbsOptions_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDatasmithOpenNurbsOptions, Geometry), Z_Construct_UEnum_DatasmithOpenNurbsTranslator_EDatasmithOpenNurbsBrepTessellatedSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithOpenNurbsOptions_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithOpenNurbsOptions_Statics::NewProp_Geometry_MetaData)) }; // 2353667614
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithOpenNurbsOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithOpenNurbsOptions_Statics::NewProp_Geometry_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithOpenNurbsOptions_Statics::NewProp_Geometry,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithOpenNurbsOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithOpenNurbsTranslator,
		Z_Construct_UScriptStruct_FDatasmithTessellationOptions,
		&NewStructOps,
		"DatasmithOpenNurbsOptions",
		sizeof(FDatasmithOpenNurbsOptions),
		alignof(FDatasmithOpenNurbsOptions),
		Z_Construct_UScriptStruct_FDatasmithOpenNurbsOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithOpenNurbsOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithOpenNurbsOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithOpenNurbsOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithOpenNurbsOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_DatasmithOpenNurbsOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithOpenNurbsOptions.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithOpenNurbsOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DatasmithOpenNurbsOptions.InnerSingleton;
	}
	void UDatasmithOpenNurbsImportOptions::StaticRegisterNativesUDatasmithOpenNurbsImportOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithOpenNurbsImportOptions);
	UClass* Z_Construct_UClass_UDatasmithOpenNurbsImportOptions_NoRegister()
	{
		return UDatasmithOpenNurbsImportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithOpenNurbsImportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithOpenNurbsImportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithOptionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithOpenNurbsTranslator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithOpenNurbsImportOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DatasmithOpenNurbsImportOptions.h" },
		{ "ModuleRelativePath", "Public/DatasmithOpenNurbsImportOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithOpenNurbsImportOptions_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "Geometry & Tessellation Options" },
		{ "ModuleRelativePath", "Public/DatasmithOpenNurbsImportOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithOpenNurbsImportOptions_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithOpenNurbsImportOptions, Options), Z_Construct_UScriptStruct_FDatasmithOpenNurbsOptions, METADATA_PARAMS(Z_Construct_UClass_UDatasmithOpenNurbsImportOptions_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithOpenNurbsImportOptions_Statics::NewProp_Options_MetaData)) }; // 62804612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithOpenNurbsImportOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithOpenNurbsImportOptions_Statics::NewProp_Options,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithOpenNurbsImportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithOpenNurbsImportOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithOpenNurbsImportOptions_Statics::ClassParams = {
		&UDatasmithOpenNurbsImportOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithOpenNurbsImportOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithOpenNurbsImportOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithOpenNurbsImportOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithOpenNurbsImportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithOpenNurbsImportOptions()
	{
		if (!Z_Registration_Info_UClass_UDatasmithOpenNurbsImportOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithOpenNurbsImportOptions.OuterSingleton, Z_Construct_UClass_UDatasmithOpenNurbsImportOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithOpenNurbsImportOptions.OuterSingleton;
	}
	template<> DATASMITHOPENNURBSTRANSLATOR_API UClass* StaticClass<UDatasmithOpenNurbsImportOptions>()
	{
		return UDatasmithOpenNurbsImportOptions::StaticClass();
	}
	UDatasmithOpenNurbsImportOptions::UDatasmithOpenNurbsImportOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithOpenNurbsImportOptions);
	UDatasmithOpenNurbsImportOptions::~UDatasmithOpenNurbsImportOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_DatasmithOpenNurbsTranslator_Public_DatasmithOpenNurbsImportOptions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_DatasmithOpenNurbsTranslator_Public_DatasmithOpenNurbsImportOptions_h_Statics::EnumInfo[] = {
		{ EDatasmithOpenNurbsBrepTessellatedSource_StaticEnum, TEXT("EDatasmithOpenNurbsBrepTessellatedSource"), &Z_Registration_Info_UEnum_EDatasmithOpenNurbsBrepTessellatedSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2353667614U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_DatasmithOpenNurbsTranslator_Public_DatasmithOpenNurbsImportOptions_h_Statics::ScriptStructInfo[] = {
		{ FDatasmithOpenNurbsOptions::StaticStruct, Z_Construct_UScriptStruct_FDatasmithOpenNurbsOptions_Statics::NewStructOps, TEXT("DatasmithOpenNurbsOptions"), &Z_Registration_Info_UScriptStruct_DatasmithOpenNurbsOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithOpenNurbsOptions), 62804612U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_DatasmithOpenNurbsTranslator_Public_DatasmithOpenNurbsImportOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithOpenNurbsImportOptions, UDatasmithOpenNurbsImportOptions::StaticClass, TEXT("UDatasmithOpenNurbsImportOptions"), &Z_Registration_Info_UClass_UDatasmithOpenNurbsImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithOpenNurbsImportOptions), 736304670U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_DatasmithOpenNurbsTranslator_Public_DatasmithOpenNurbsImportOptions_h_683552477(TEXT("/Script/DatasmithOpenNurbsTranslator"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_DatasmithOpenNurbsTranslator_Public_DatasmithOpenNurbsImportOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_DatasmithOpenNurbsTranslator_Public_DatasmithOpenNurbsImportOptions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_DatasmithOpenNurbsTranslator_Public_DatasmithOpenNurbsImportOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_DatasmithOpenNurbsTranslator_Public_DatasmithOpenNurbsImportOptions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_DatasmithOpenNurbsTranslator_Public_DatasmithOpenNurbsImportOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_DatasmithOpenNurbsTranslator_Public_DatasmithOpenNurbsImportOptions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
