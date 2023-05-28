// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DatasmithFileProducer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithFileProducer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepContentProducer();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCommonTessellationOptions_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithOptionsBase_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithScene_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithDirProducer();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithDirProducer_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithFileProducer();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithFileProducer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithImporter();
// End Cross Module References
	void UDatasmithFileProducer::StaticRegisterNativesUDatasmithFileProducer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithFileProducer);
	UClass* Z_Construct_UClass_UDatasmithFileProducer_NoRegister()
	{
		return UDatasmithFileProducer::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithFileProducer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DatasmithScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DatasmithScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransientPackage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransientPackage;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslatorImportOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslatorImportOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TranslatorImportOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTranslatorImportOptionsInitialized_MetaData[];
#endif
		static void NewProp_bTranslatorImportOptionsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTranslatorImportOptionsInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithFileProducer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepContentProducer,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithFileProducer_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "DatasmithProducer_Internal" },
		{ "IncludePath", "DatasmithFileProducer.h" },
		{ "ModuleRelativePath", "Private/DatasmithFileProducer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_FilePath_MetaData[] = {
		{ "Category", "DatasmithProducer" },
		{ "Comment", "// End UDataprepContentProducer overrides\n" },
		{ "ModuleRelativePath", "Private/DatasmithFileProducer.h" },
		{ "ToolTip", "End UDataprepContentProducer overrides" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithFileProducer, FilePath), METADATA_PARAMS(Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_DatasmithScene_MetaData[] = {
		{ "ModuleRelativePath", "Private/DatasmithFileProducer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_DatasmithScene = { "DatasmithScene", nullptr, (EPropertyFlags)0x0044000000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithFileProducer, DatasmithScene), Z_Construct_UClass_UDatasmithScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_DatasmithScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_DatasmithScene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_TransientPackage_MetaData[] = {
		{ "ModuleRelativePath", "Private/DatasmithFileProducer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_TransientPackage = { "TransientPackage", nullptr, (EPropertyFlags)0x0044000000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithFileProducer, TransientPackage), Z_Construct_UClass_UPackage, METADATA_PARAMS(Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_TransientPackage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_TransientPackage_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_TranslatorImportOptions_Inner = { "TranslatorImportOptions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDatasmithOptionsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_TranslatorImportOptions_MetaData[] = {
		{ "ModuleRelativePath", "Private/DatasmithFileProducer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_TranslatorImportOptions = { "TranslatorImportOptions", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithFileProducer, TranslatorImportOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_TranslatorImportOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_TranslatorImportOptions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_bTranslatorImportOptionsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Private/DatasmithFileProducer.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_bTranslatorImportOptionsInitialized_SetBit(void* Obj)
	{
		((UDatasmithFileProducer*)Obj)->bTranslatorImportOptionsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_bTranslatorImportOptionsInitialized = { "bTranslatorImportOptionsInitialized", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithFileProducer), &Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_bTranslatorImportOptionsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_bTranslatorImportOptionsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_bTranslatorImportOptionsInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithFileProducer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_DatasmithScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_TransientPackage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_TranslatorImportOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_TranslatorImportOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithFileProducer_Statics::NewProp_bTranslatorImportOptionsInitialized,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithFileProducer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithFileProducer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithFileProducer_Statics::ClassParams = {
		&UDatasmithFileProducer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithFileProducer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithFileProducer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithFileProducer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithFileProducer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithFileProducer()
	{
		if (!Z_Registration_Info_UClass_UDatasmithFileProducer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithFileProducer.OuterSingleton, Z_Construct_UClass_UDatasmithFileProducer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithFileProducer.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithFileProducer>()
	{
		return UDatasmithFileProducer::StaticClass();
	}
	UDatasmithFileProducer::UDatasmithFileProducer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithFileProducer);
	UDatasmithFileProducer::~UDatasmithFileProducer() {}
	void UDatasmithDirProducer::StaticRegisterNativesUDatasmithDirProducer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithDirProducer);
	UClass* Z_Construct_UClass_UDatasmithDirProducer_NoRegister()
	{
		return UDatasmithDirProducer::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithDirProducer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FolderPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtensionString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecursive_MetaData[];
#endif
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileProducer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FileProducer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TessellationOptions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TessellationOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithDirProducer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepContentProducer,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDirProducer_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "DatasmithDirProducer_Internal" },
		{ "IncludePath", "DatasmithFileProducer.h" },
		{ "ModuleRelativePath", "Private/DatasmithFileProducer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_FolderPath_MetaData[] = {
		{ "Category", "DatasmithDirProducer_Internal" },
		{ "Comment", "// The folder were datasmith will look for files to import\n" },
		{ "ModuleRelativePath", "Private/DatasmithFileProducer.h" },
		{ "ToolTip", "The folder were datasmith will look for files to import" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithDirProducer, FolderPath), METADATA_PARAMS(Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_FolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_FolderPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_ExtensionString_MetaData[] = {
		{ "Category", "DatasmithDirProducer" },
		{ "Comment", "// Semi-column separated string containing the extensions to consider. By default, set to * to get all extensions.\n" },
		{ "ModuleRelativePath", "Private/DatasmithFileProducer.h" },
		{ "ToolTip", "Semi-column separated string containing the extensions to consider. By default, set to * to get all extensions." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_ExtensionString = { "ExtensionString", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithDirProducer, ExtensionString), METADATA_PARAMS(Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_ExtensionString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_ExtensionString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_bRecursive_MetaData[] = {
		{ "Category", "DatasmithDirProducer" },
		{ "ModuleRelativePath", "Private/DatasmithFileProducer.h" },
		{ "ToolTip", "If checked, sub-directories will be traversed" },
	};
#endif
	void Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((UDatasmithDirProducer*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithDirProducer), &Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_bRecursive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_bRecursive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_FileProducer_MetaData[] = {
		{ "ModuleRelativePath", "Private/DatasmithFileProducer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_FileProducer = { "FileProducer", nullptr, (EPropertyFlags)0x0044000000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithDirProducer, FileProducer), Z_Construct_UClass_UDatasmithFileProducer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_FileProducer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_FileProducer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_TessellationOptions_MetaData[] = {
		{ "ModuleRelativePath", "Private/DatasmithFileProducer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_TessellationOptions = { "TessellationOptions", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithDirProducer, TessellationOptions), Z_Construct_UClass_UDatasmithCommonTessellationOptions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_TessellationOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_TessellationOptions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithDirProducer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_FolderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_ExtensionString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_FileProducer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDirProducer_Statics::NewProp_TessellationOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithDirProducer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithDirProducer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithDirProducer_Statics::ClassParams = {
		&UDatasmithDirProducer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithDirProducer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDirProducer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithDirProducer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDirProducer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithDirProducer()
	{
		if (!Z_Registration_Info_UClass_UDatasmithDirProducer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithDirProducer.OuterSingleton, Z_Construct_UClass_UDatasmithDirProducer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithDirProducer.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithDirProducer>()
	{
		return UDatasmithDirProducer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithDirProducer);
	UDatasmithDirProducer::~UDatasmithDirProducer() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDatasmithDirProducer)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithFileProducer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithFileProducer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithFileProducer, UDatasmithFileProducer::StaticClass, TEXT("UDatasmithFileProducer"), &Z_Registration_Info_UClass_UDatasmithFileProducer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithFileProducer), 850114408U) },
		{ Z_Construct_UClass_UDatasmithDirProducer, UDatasmithDirProducer::StaticClass, TEXT("UDatasmithDirProducer"), &Z_Registration_Info_UClass_UDatasmithDirProducer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithDirProducer), 3462442090U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithFileProducer_h_3472805565(TEXT("/Script/DatasmithImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithFileProducer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithFileProducer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
