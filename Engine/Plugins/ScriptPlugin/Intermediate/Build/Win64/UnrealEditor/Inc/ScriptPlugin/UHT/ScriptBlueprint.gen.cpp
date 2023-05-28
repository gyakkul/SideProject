// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScriptBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptBlueprint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	SCRIPTPLUGIN_API UClass* Z_Construct_UClass_UScriptBlueprint();
	SCRIPTPLUGIN_API UClass* Z_Construct_UClass_UScriptBlueprint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ScriptPlugin();
// End Cross Module References
	void UScriptBlueprint::StaticRegisterNativesUScriptBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScriptBlueprint);
	UClass* Z_Construct_UClass_UScriptBlueprint_NoRegister()
	{
		return UScriptBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UScriptBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_ByteCode_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ByteCode_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScriptBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Script blueprint generates script-defined classes\n */" },
		{ "DevelopmentStatus", "EarlyAccess" },
		{ "IncludePath", "ScriptBlueprint.h" },
		{ "ModuleRelativePath", "Classes/ScriptBlueprint.h" },
		{ "ToolTip", "The Script blueprint generates script-defined classes" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptBlueprint_Statics::NewProp_SourceFilePath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ScriptBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UScriptBlueprint_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptBlueprint, SourceFilePath_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UScriptBlueprint_Statics::NewProp_SourceFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptBlueprint_Statics::NewProp_SourceFilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptBlueprint_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ScriptBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UScriptBlueprint_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptBlueprint, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScriptBlueprint_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptBlueprint_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScriptBlueprint_Statics::NewProp_ByteCode_Inner = { "ByteCode", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptBlueprint_Statics::NewProp_ByteCode_MetaData[] = {
		{ "Comment", "/** Generated script bytecode */" },
		{ "ModuleRelativePath", "Classes/ScriptBlueprint.h" },
		{ "ToolTip", "Generated script bytecode" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UScriptBlueprint_Statics::NewProp_ByteCode = { "ByteCode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptBlueprint, ByteCode), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UScriptBlueprint_Statics::NewProp_ByteCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptBlueprint_Statics::NewProp_ByteCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptBlueprint_Statics::NewProp_SourceCode_MetaData[] = {
		{ "Comment", "/** Script source code. @todo: this should be editor-only */" },
		{ "ModuleRelativePath", "Classes/ScriptBlueprint.h" },
		{ "ToolTip", "Script source code. @todo: this should be editor-only" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UScriptBlueprint_Statics::NewProp_SourceCode = { "SourceCode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptBlueprint, SourceCode), METADATA_PARAMS(Z_Construct_UClass_UScriptBlueprint_Statics::NewProp_SourceCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptBlueprint_Statics::NewProp_SourceCode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScriptBlueprint_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptBlueprint_Statics::NewProp_SourceFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptBlueprint_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptBlueprint_Statics::NewProp_ByteCode_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptBlueprint_Statics::NewProp_ByteCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptBlueprint_Statics::NewProp_SourceCode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScriptBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScriptBlueprint_Statics::ClassParams = {
		&UScriptBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UScriptBlueprint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UScriptBlueprint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UScriptBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScriptBlueprint()
	{
		if (!Z_Registration_Info_UClass_UScriptBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScriptBlueprint.OuterSingleton, Z_Construct_UClass_UScriptBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScriptBlueprint.OuterSingleton;
	}
	template<> SCRIPTPLUGIN_API UClass* StaticClass<UScriptBlueprint>()
	{
		return UScriptBlueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptBlueprint);
	UScriptBlueprint::~UScriptBlueprint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScriptBlueprint, UScriptBlueprint::StaticClass, TEXT("UScriptBlueprint"), &Z_Registration_Info_UClass_UScriptBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScriptBlueprint), 38188877U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_3564913214(TEXT("/Script/ScriptPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
