// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/AssetExportTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetExportTask() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetExportTask();
	ENGINE_API UClass* Z_Construct_UClass_UAssetExportTask_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UExporter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAssetExportTask::StaticRegisterNativesUAssetExportTask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetExportTask);
	UClass* Z_Construct_UClass_UAssetExportTask_NoRegister()
	{
		return UAssetExportTask::StaticClass();
	}
	struct Z_Construct_UClass_UAssetExportTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Exporter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Exporter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[];
#endif
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceIdentical_MetaData[];
#endif
		static void NewProp_bReplaceIdentical_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceIdentical;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrompt_MetaData[];
#endif
		static void NewProp_bPrompt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrompt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutomated_MetaData[];
#endif
		static void NewProp_bAutomated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFileArchive_MetaData[];
#endif
		static void NewProp_bUseFileArchive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFileArchive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWriteEmptyFiles_MetaData[];
#endif
		static void NewProp_bWriteEmptyFiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteEmptyFiles;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IgnoreObjectList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreObjectList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoreObjectList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Options;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Errors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Errors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Errors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetExportTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contains data for a group of assets to export\n */" },
		{ "IncludePath", "AssetExportTask.h" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Contains data for a group of assets to export" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/** Asset to export */" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Asset to export" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetExportTask, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Exporter_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/** Optional exporter, otherwise it will be determined automatically */" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Optional exporter, otherwise it will be determined automatically" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Exporter = { "Exporter", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetExportTask, Exporter), Z_Construct_UClass_UExporter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Exporter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Exporter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Filename_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/** File to export as */" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "File to export as" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetExportTask, Filename), METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bSelected_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/** Export selected only */" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Export selected only" },
	};
#endif
	void Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((UAssetExportTask*)Obj)->bSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetExportTask), &Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bReplaceIdentical_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/** Replace identical files */" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Replace identical files" },
	};
#endif
	void Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bReplaceIdentical_SetBit(void* Obj)
	{
		((UAssetExportTask*)Obj)->bReplaceIdentical = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bReplaceIdentical = { "bReplaceIdentical", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetExportTask), &Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bReplaceIdentical_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bReplaceIdentical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bReplaceIdentical_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bPrompt_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/** Allow dialog prompts */" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Allow dialog prompts" },
	};
#endif
	void Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bPrompt_SetBit(void* Obj)
	{
		((UAssetExportTask*)Obj)->bPrompt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bPrompt = { "bPrompt", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetExportTask), &Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bPrompt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bPrompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bPrompt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bAutomated_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/** Unattended export */" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Unattended export" },
	};
#endif
	void Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bAutomated_SetBit(void* Obj)
	{
		((UAssetExportTask*)Obj)->bAutomated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bAutomated = { "bAutomated", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetExportTask), &Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bAutomated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bAutomated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bAutomated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bUseFileArchive_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/** Save to a file archive */" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Save to a file archive" },
	};
#endif
	void Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bUseFileArchive_SetBit(void* Obj)
	{
		((UAssetExportTask*)Obj)->bUseFileArchive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bUseFileArchive = { "bUseFileArchive", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetExportTask), &Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bUseFileArchive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bUseFileArchive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bUseFileArchive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bWriteEmptyFiles_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/** Write even if file empty */" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Write even if file empty" },
	};
#endif
	void Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bWriteEmptyFiles_SetBit(void* Obj)
	{
		((UAssetExportTask*)Obj)->bWriteEmptyFiles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bWriteEmptyFiles = { "bWriteEmptyFiles", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetExportTask), &Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bWriteEmptyFiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bWriteEmptyFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bWriteEmptyFiles_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_IgnoreObjectList_Inner = { "IgnoreObjectList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_IgnoreObjectList_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/** Array of objects to ignore exporting */" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Array of objects to ignore exporting" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_IgnoreObjectList = { "IgnoreObjectList", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetExportTask, IgnoreObjectList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_IgnoreObjectList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_IgnoreObjectList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/** Exporter specific options */" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Exporter specific options" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetExportTask, Options), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Options_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Errors_Inner = { "Errors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Errors_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/** Array of error messages encountered during exporter */" },
		{ "ModuleRelativePath", "Public/AssetExportTask.h" },
		{ "ToolTip", "Array of error messages encountered during exporter" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Errors = { "Errors", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetExportTask, Errors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Errors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Errors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetExportTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Exporter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bReplaceIdentical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bPrompt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bAutomated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bUseFileArchive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_bWriteEmptyFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_IgnoreObjectList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_IgnoreObjectList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Errors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetExportTask_Statics::NewProp_Errors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetExportTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetExportTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetExportTask_Statics::ClassParams = {
		&UAssetExportTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetExportTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetExportTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetExportTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetExportTask()
	{
		if (!Z_Registration_Info_UClass_UAssetExportTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetExportTask.OuterSingleton, Z_Construct_UClass_UAssetExportTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetExportTask.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAssetExportTask>()
	{
		return UAssetExportTask::StaticClass();
	}
	UAssetExportTask::UAssetExportTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetExportTask);
	UAssetExportTask::~UAssetExportTask() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AssetExportTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AssetExportTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetExportTask, UAssetExportTask::StaticClass, TEXT("UAssetExportTask"), &Z_Registration_Info_UClass_UAssetExportTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetExportTask), 4092782094U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AssetExportTask_h_1221748319(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AssetExportTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AssetExportTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
