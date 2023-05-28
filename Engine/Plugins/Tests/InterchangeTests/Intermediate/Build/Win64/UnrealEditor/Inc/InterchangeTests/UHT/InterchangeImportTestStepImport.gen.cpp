// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeImportTestStepImport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeImportTestStepImport() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase_NoRegister();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UInterchangeImportTestStepBase();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UInterchangeImportTestStepImport();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UInterchangeImportTestStepImport_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeTests();
// End Cross Module References
	void UInterchangeImportTestStepImport::StaticRegisterNativesUInterchangeImportTestStepImport()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeImportTestStepImport);
	UClass* Z_Construct_UClass_UInterchangeImportTestStepImport_NoRegister()
	{
		return UInterchangeImportTestStepImport::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeImportTestStepImport_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PipelineStack_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PipelineStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PipelineStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PipelineStack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEmptyDestinationFolderPriorToImport_MetaData[];
#endif
		static void NewProp_bEmptyDestinationFolderPriorToImport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmptyDestinationFolderPriorToImport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveThenReloadImportedAssets_MetaData[];
#endif
		static void NewProp_bSaveThenReloadImportedAssets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveThenReloadImportedAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportIntoLevel_MetaData[];
#endif
		static void NewProp_bImportIntoLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportIntoLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeImportTestStepBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeTests,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "General Test" },
		{ "BlueprintType", "true" },
		{ "DisplayName", "Import a file" },
		{ "IncludePath", "InterchangeImportTestStepImport.h" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestStepImport.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_SourceFile_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The source file to import (path relative to the json script) */" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestStepImport.h" },
		{ "ToolTip", "The source file to import (path relative to the json script)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_SourceFile = { "SourceFile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeImportTestStepImport, SourceFile), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_SourceFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_SourceFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_PipelineStack_Inner_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The pipeline stack to use when importing (an empty array will use the defaults) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestStepImport.h" },
		{ "ToolTip", "The pipeline stack to use when importing (an empty array will use the defaults)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_PipelineStack_Inner = { "PipelineStack", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInterchangePipelineBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_PipelineStack_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_PipelineStack_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_PipelineStack_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The pipeline stack to use when importing (an empty array will use the defaults) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestStepImport.h" },
		{ "ToolTip", "The pipeline stack to use when importing (an empty array will use the defaults)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_PipelineStack = { "PipelineStack", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeImportTestStepImport, PipelineStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_PipelineStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_PipelineStack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_bEmptyDestinationFolderPriorToImport_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether the destination folder should be emptied prior to import */" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestStepImport.h" },
		{ "ToolTip", "Whether the destination folder should be emptied prior to import" },
	};
#endif
	void Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_bEmptyDestinationFolderPriorToImport_SetBit(void* Obj)
	{
		((UInterchangeImportTestStepImport*)Obj)->bEmptyDestinationFolderPriorToImport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_bEmptyDestinationFolderPriorToImport = { "bEmptyDestinationFolderPriorToImport", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeImportTestStepImport), &Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_bEmptyDestinationFolderPriorToImport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_bEmptyDestinationFolderPriorToImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_bEmptyDestinationFolderPriorToImport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_bSaveThenReloadImportedAssets_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether imported assets should be saved and freshly reloaded after import */" },
		{ "EditCondition", "!bImportIntoLevel" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestStepImport.h" },
		{ "ToolTip", "Whether imported assets should be saved and freshly reloaded after import" },
	};
#endif
	void Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_bSaveThenReloadImportedAssets_SetBit(void* Obj)
	{
		((UInterchangeImportTestStepImport*)Obj)->bSaveThenReloadImportedAssets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_bSaveThenReloadImportedAssets = { "bSaveThenReloadImportedAssets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeImportTestStepImport), &Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_bSaveThenReloadImportedAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_bSaveThenReloadImportedAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_bSaveThenReloadImportedAssets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_bImportIntoLevel_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether we should use the import into level workflow */" },
		{ "ModuleRelativePath", "Public/InterchangeImportTestStepImport.h" },
		{ "ToolTip", "Whether we should use the import into level workflow" },
	};
#endif
	void Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_bImportIntoLevel_SetBit(void* Obj)
	{
		((UInterchangeImportTestStepImport*)Obj)->bImportIntoLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_bImportIntoLevel = { "bImportIntoLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeImportTestStepImport), &Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_bImportIntoLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_bImportIntoLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_bImportIntoLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_SourceFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_PipelineStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_PipelineStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_bEmptyDestinationFolderPriorToImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_bSaveThenReloadImportedAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::NewProp_bImportIntoLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeImportTestStepImport>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::ClassParams = {
		&UInterchangeImportTestStepImport::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeImportTestStepImport()
	{
		if (!Z_Registration_Info_UClass_UInterchangeImportTestStepImport.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeImportTestStepImport.OuterSingleton, Z_Construct_UClass_UInterchangeImportTestStepImport_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeImportTestStepImport.OuterSingleton;
	}
	template<> INTERCHANGETESTS_API UClass* StaticClass<UInterchangeImportTestStepImport>()
	{
		return UInterchangeImportTestStepImport::StaticClass();
	}
	UInterchangeImportTestStepImport::UInterchangeImportTestStepImport(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeImportTestStepImport);
	UInterchangeImportTestStepImport::~UInterchangeImportTestStepImport() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepImport_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepImport_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeImportTestStepImport, UInterchangeImportTestStepImport::StaticClass, TEXT("UInterchangeImportTestStepImport"), &Z_Registration_Info_UClass_UInterchangeImportTestStepImport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeImportTestStepImport), 721781917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepImport_h_4192858783(TEXT("/Script/InterchangeTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepImport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_InterchangeImportTestStepImport_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
