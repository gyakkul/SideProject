// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DatasmithVREDImportOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithVREDImportOptions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	DATASMITHFBXTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithFBXImportOptions();
	DATASMITHVREDTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithVREDImportOptions();
	DATASMITHVREDTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithVREDImportOptions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithVREDTranslator();
// End Cross Module References
	void UDatasmithVREDImportOptions::StaticRegisterNativesUDatasmithVREDImportOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithVREDImportOptions);
	UClass* Z_Construct_UClass_UDatasmithVREDImportOptions_NoRegister()
	{
		return UDatasmithVREDImportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithVREDImportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportMats_MetaData[];
#endif
		static void NewProp_bImportMats_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatsPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MatsPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportVar_MetaData[];
#endif
		static void NewProp_bImportVar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportVar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCleanVar_MetaData[];
#endif
		static void NewProp_bCleanVar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCleanVar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VarPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VarPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportLightInfo_MetaData[];
#endif
		static void NewProp_bImportLightInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportLightInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightInfoPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightInfoPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportClipInfo_MetaData[];
#endif
		static void NewProp_bImportClipInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportClipInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipInfoPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClipInfoPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithFBXImportOptions,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithVREDTranslator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Debug DebugProperty" },
		{ "IncludePath", "DatasmithVREDImportOptions.h" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportMats_MetaData[] = {
		{ "Category", "AssetImporting" },
		{ "DisplayName", "Import materials file" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportOptions.h" },
		{ "ToolTip", "Uses the *.mats file saved alongside the exported FBX for a more accurate material reproduction" },
	};
#endif
	void Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportMats_SetBit(void* Obj)
	{
		((UDatasmithVREDImportOptions*)Obj)->bImportMats = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportMats = { "bImportMats", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithVREDImportOptions), &Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportMats_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportMats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportMats_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_MatsPath_MetaData[] = {
		{ "Category", "AssetImporting" },
		{ "DisplayName", "Materials file path" },
		{ "EditCondition", "bImportMats" },
		{ "FilePathFilter", "mats" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportOptions.h" },
		{ "ToolTip", "Path to the *.mats file. By default it will search for a *.mats file in the same folder as the FBX file, with the same base filename as it" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_MatsPath = { "MatsPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithVREDImportOptions, MatsPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_MatsPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_MatsPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportVar_MetaData[] = {
		{ "Category", "AssetImporting" },
		{ "DisplayName", "Import variants file" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportOptions.h" },
		{ "ToolTip", "Uses the *.var file saved alongside the exported FBX" },
	};
#endif
	void Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportVar_SetBit(void* Obj)
	{
		((UDatasmithVREDImportOptions*)Obj)->bImportVar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportVar = { "bImportVar", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithVREDImportOptions), &Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportVar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportVar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bCleanVar_MetaData[] = {
		{ "Category", "AssetImporting" },
		{ "DisplayName", "Clean variants" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportOptions.h" },
		{ "ToolTip", "Removes empty variants, variant sets and invalid options. All discarded items will be logged to console." },
	};
#endif
	void Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bCleanVar_SetBit(void* Obj)
	{
		((UDatasmithVREDImportOptions*)Obj)->bCleanVar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bCleanVar = { "bCleanVar", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithVREDImportOptions), &Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bCleanVar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bCleanVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bCleanVar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_VarPath_MetaData[] = {
		{ "Category", "AssetImporting" },
		{ "DisplayName", "Variants file path" },
		{ "EditCondition", "bImportVar" },
		{ "FilePathFilter", "var" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportOptions.h" },
		{ "ToolTip", "Path to the *.var file. By default it will search for a *.var file in the same folder as the FBX file, with the same base filename as it" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_VarPath = { "VarPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithVREDImportOptions, VarPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_VarPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_VarPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportLightInfo_MetaData[] = {
		{ "Category", "AssetImporting" },
		{ "DisplayName", "Import lights file" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportOptions.h" },
		{ "ToolTip", "Uses the *.lights file saved alongside the exported FBX to import extra information about lights not saved in the FBX file" },
	};
#endif
	void Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportLightInfo_SetBit(void* Obj)
	{
		((UDatasmithVREDImportOptions*)Obj)->bImportLightInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportLightInfo = { "bImportLightInfo", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithVREDImportOptions), &Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportLightInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportLightInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportLightInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_LightInfoPath_MetaData[] = {
		{ "Category", "AssetImporting" },
		{ "DisplayName", "Lights file path" },
		{ "EditCondition", "bImportLightInfo" },
		{ "FilePathFilter", "lights" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportOptions.h" },
		{ "ToolTip", "Path to the *.lights file. By default it will search for a *.light file in the same folder as the FBX file, with the same base filename as it" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_LightInfoPath = { "LightInfoPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithVREDImportOptions, LightInfoPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_LightInfoPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_LightInfoPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportClipInfo_MetaData[] = {
		{ "Category", "AssetImporting" },
		{ "DisplayName", "Import clips file" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportOptions.h" },
		{ "ToolTip", "Uses the *.clips file saved alongside the exported FBX to import information about animation clips and blocks, mirroring VRED's animation system" },
	};
#endif
	void Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportClipInfo_SetBit(void* Obj)
	{
		((UDatasmithVREDImportOptions*)Obj)->bImportClipInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportClipInfo = { "bImportClipInfo", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithVREDImportOptions), &Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportClipInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportClipInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportClipInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_ClipInfoPath_MetaData[] = {
		{ "Category", "AssetImporting" },
		{ "DisplayName", "AnimClips file path" },
		{ "EditCondition", "bImportClipInfo" },
		{ "FilePathFilter", "clips" },
		{ "ModuleRelativePath", "Private/DatasmithVREDImportOptions.h" },
		{ "ToolTip", "Path to the *.clips file. By default it will search for a *.clips file in the same folder as the FBX file, with the same base filename as it" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_ClipInfoPath = { "ClipInfoPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithVREDImportOptions, ClipInfoPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_ClipInfoPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_ClipInfoPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportMats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_MatsPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportVar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bCleanVar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_VarPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportLightInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_LightInfoPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_bImportClipInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::NewProp_ClipInfoPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithVREDImportOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::ClassParams = {
		&UDatasmithVREDImportOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithVREDImportOptions()
	{
		if (!Z_Registration_Info_UClass_UDatasmithVREDImportOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithVREDImportOptions.OuterSingleton, Z_Construct_UClass_UDatasmithVREDImportOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithVREDImportOptions.OuterSingleton;
	}
	template<> DATASMITHVREDTRANSLATOR_API UClass* StaticClass<UDatasmithVREDImportOptions>()
	{
		return UDatasmithVREDImportOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithVREDImportOptions);
	UDatasmithVREDImportOptions::~UDatasmithVREDImportOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithVREDTranslator_Private_DatasmithVREDImportOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithVREDTranslator_Private_DatasmithVREDImportOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithVREDImportOptions, UDatasmithVREDImportOptions::StaticClass, TEXT("UDatasmithVREDImportOptions"), &Z_Registration_Info_UClass_UDatasmithVREDImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithVREDImportOptions), 1826814853U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithVREDTranslator_Private_DatasmithVREDImportOptions_h_3207327059(TEXT("/Script/DatasmithVREDTranslator"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithVREDTranslator_Private_DatasmithVREDImportOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithVREDTranslator_Private_DatasmithVREDImportOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
