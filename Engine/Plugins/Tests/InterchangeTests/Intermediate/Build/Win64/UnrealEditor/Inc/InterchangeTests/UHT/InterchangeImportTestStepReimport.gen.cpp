// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeImportTestStepReimport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeImportTestStepReimport() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UInterchangeImportTestStepBase();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UInterchangeImportTestStepReimport();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UInterchangeImportTestStepReimport_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeTests();
// End Cross Module References
	void UInterchangeImportTestStepReimport::StaticRegisterNativesUInterchangeImportTestStepReimport()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeImportTestStepReimport);
	UClass* Z_Construct_UClass_UInterchangeImportTestStepReimport_NoRegister()
	{
		return UInterchangeImportTestStepReimport::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFileToReimport_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceFileToReimport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetTypeToReimport_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AssetTypeToReimport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetNameToReimport_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetNameToReimport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveThenReloadImportedAssets_MetaData[];
#endif
		static void NewProp_bSaveThenReloadImportedAssets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveThenReloadImportedAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeImportTestStepBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeTests,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "General Test" },
		{ "BlueprintType", "true" },
		{ "DisplayName", "Reimport a file" },
		{ "IncludePath", "InterchangeImportTestStepReimport.h" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestStepReimport.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::NewProp_SourceFileToReimport_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The source file to import (path relative to the json script) */" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestStepReimport.h" },
		{ "ToolTip", "The source file to import (path relative to the json script)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::NewProp_SourceFileToReimport = { "SourceFileToReimport", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeImportTestStepReimport, SourceFileToReimport), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::NewProp_SourceFileToReimport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::NewProp_SourceFileToReimport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::NewProp_AssetTypeToReimport_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The type of the asset to reimport. In the case that only one such asset were imported, this is unambiguous */" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestStepReimport.h" },
		{ "ToolTip", "The type of the asset to reimport. In the case that only one such asset were imported, this is unambiguous" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::NewProp_AssetTypeToReimport = { "AssetTypeToReimport", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeImportTestStepReimport, AssetTypeToReimport), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::NewProp_AssetTypeToReimport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::NewProp_AssetTypeToReimport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::NewProp_AssetNameToReimport_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** If there were multiple assets of the above type imported, specify the concrete name here */" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestStepReimport.h" },
		{ "ToolTip", "If there were multiple assets of the above type imported, specify the concrete name here" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::NewProp_AssetNameToReimport = { "AssetNameToReimport", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeImportTestStepReimport, AssetNameToReimport), METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::NewProp_AssetNameToReimport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::NewProp_AssetNameToReimport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::NewProp_bSaveThenReloadImportedAssets_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether imported assets should be saved and freshly reloaded after import */" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestStepReimport.h" },
		{ "ToolTip", "Whether imported assets should be saved and freshly reloaded after import" },
	};
#endif
	void Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::NewProp_bSaveThenReloadImportedAssets_SetBit(void* Obj)
	{
		((UInterchangeImportTestStepReimport*)Obj)->bSaveThenReloadImportedAssets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::NewProp_bSaveThenReloadImportedAssets = { "bSaveThenReloadImportedAssets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeImportTestStepReimport), &Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::NewProp_bSaveThenReloadImportedAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::NewProp_bSaveThenReloadImportedAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::NewProp_bSaveThenReloadImportedAssets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::NewProp_SourceFileToReimport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::NewProp_AssetTypeToReimport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::NewProp_AssetNameToReimport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::NewProp_bSaveThenReloadImportedAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeImportTestStepReimport>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::ClassParams = {
		&UInterchangeImportTestStepReimport::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeImportTestStepReimport()
	{
		if (!Z_Registration_Info_UClass_UInterchangeImportTestStepReimport.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeImportTestStepReimport.OuterSingleton, Z_Construct_UClass_UInterchangeImportTestStepReimport_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeImportTestStepReimport.OuterSingleton;
	}
	template<> INTERCHANGETESTS_API UClass* StaticClass<UInterchangeImportTestStepReimport>()
	{
		return UInterchangeImportTestStepReimport::StaticClass();
	}
	UInterchangeImportTestStepReimport::UInterchangeImportTestStepReimport(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeImportTestStepReimport);
	UInterchangeImportTestStepReimport::~UInterchangeImportTestStepReimport() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepReimport_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepReimport_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeImportTestStepReimport, UInterchangeImportTestStepReimport::StaticClass, TEXT("UInterchangeImportTestStepReimport"), &Z_Registration_Info_UClass_UInterchangeImportTestStepReimport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeImportTestStepReimport), 1350915164U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepReimport_h_2580270710(TEXT("/Script/InterchangeTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepReimport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepReimport_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
