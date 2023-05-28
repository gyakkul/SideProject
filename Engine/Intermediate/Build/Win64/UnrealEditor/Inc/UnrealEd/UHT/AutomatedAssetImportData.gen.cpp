// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/AutomatedAssetImportData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomatedAssetImportData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UAutomatedAssetImportData();
	UNREALED_API UClass* Z_Construct_UClass_UAutomatedAssetImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAutomatedAssetImportData::StaticRegisterNativesUAutomatedAssetImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomatedAssetImportData);
	UClass* Z_Construct_UClass_UAutomatedAssetImportData_NoRegister()
	{
		return UAutomatedAssetImportData::StaticClass();
	}
	struct Z_Construct_UClass_UAutomatedAssetImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filenames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filenames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Filenames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FactoryName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FactoryName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceExisting_MetaData[];
#endif
		static void NewProp_bReplaceExisting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceExisting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipReadOnly_MetaData[];
#endif
		static void NewProp_bSkipReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipReadOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Factory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Factory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelToLoad_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelToLoad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutomatedAssetImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedAssetImportData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contains data for a group of assets to import\n */" },
		{ "IncludePath", "AutomatedAssetImportData.h" },
		{ "ModuleRelativePath", "Public/AutomatedAssetImportData.h" },
		{ "ToolTip", "Contains data for a group of assets to import" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Asset Import Data" },
		{ "Comment", "/** Display name of the group. This is for logging purposes only. */" },
		{ "ModuleRelativePath", "Public/AutomatedAssetImportData.h" },
		{ "ToolTip", "Display name of the group. This is for logging purposes only." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomatedAssetImportData, GroupName), METADATA_PARAMS(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_GroupName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Filenames_Inner = { "Filenames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Filenames_MetaData[] = {
		{ "Category", "Asset Import Data" },
		{ "Comment", "/** Filenames to import */" },
		{ "ModuleRelativePath", "Public/AutomatedAssetImportData.h" },
		{ "ToolTip", "Filenames to import" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Filenames = { "Filenames", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomatedAssetImportData, Filenames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Filenames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Filenames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_DestinationPath_MetaData[] = {
		{ "Category", "Asset Import Data" },
		{ "Comment", "/** Content path in the projects content directory where assets will be imported */" },
		{ "ModuleRelativePath", "Public/AutomatedAssetImportData.h" },
		{ "ToolTip", "Content path in the projects content directory where assets will be imported" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_DestinationPath = { "DestinationPath", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomatedAssetImportData, DestinationPath), METADATA_PARAMS(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_DestinationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_DestinationPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_FactoryName_MetaData[] = {
		{ "Category", "Asset Import Data" },
		{ "Comment", "/** Name of the factory to use when importing these assets. If not specified the factory type will be auto detected */" },
		{ "ModuleRelativePath", "Public/AutomatedAssetImportData.h" },
		{ "ToolTip", "Name of the factory to use when importing these assets. If not specified the factory type will be auto detected" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_FactoryName = { "FactoryName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomatedAssetImportData, FactoryName), METADATA_PARAMS(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_FactoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_FactoryName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bReplaceExisting_MetaData[] = {
		{ "Category", "Asset Import Data" },
		{ "Comment", "/** Whether or not to replace existing assets */" },
		{ "ModuleRelativePath", "Public/AutomatedAssetImportData.h" },
		{ "ToolTip", "Whether or not to replace existing assets" },
	};
#endif
	void Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bReplaceExisting_SetBit(void* Obj)
	{
		((UAutomatedAssetImportData*)Obj)->bReplaceExisting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bReplaceExisting = { "bReplaceExisting", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAutomatedAssetImportData), &Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bReplaceExisting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bReplaceExisting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bReplaceExisting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bSkipReadOnly_MetaData[] = {
		{ "Category", "Asset Import Data" },
		{ "Comment", "/** Whether or not to skip importing over read only assets that could not be checked out */" },
		{ "ModuleRelativePath", "Public/AutomatedAssetImportData.h" },
		{ "ToolTip", "Whether or not to skip importing over read only assets that could not be checked out" },
	};
#endif
	void Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bSkipReadOnly_SetBit(void* Obj)
	{
		((UAutomatedAssetImportData*)Obj)->bSkipReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bSkipReadOnly = { "bSkipReadOnly", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAutomatedAssetImportData), &Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bSkipReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bSkipReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bSkipReadOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Factory_MetaData[] = {
		{ "Category", "Asset Import Data" },
		{ "Comment", "/** Pointer to the factory currently being used */" },
		{ "ModuleRelativePath", "Public/AutomatedAssetImportData.h" },
		{ "ToolTip", "Pointer to the factory currently being used" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Factory = { "Factory", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomatedAssetImportData, Factory), Z_Construct_UClass_UFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Factory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Factory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_LevelToLoad_MetaData[] = {
		{ "Category", "Asset Import Data" },
		{ "Comment", "/** Full path to level to load before importing this group (only matters if importing assets into a level) */" },
		{ "ModuleRelativePath", "Public/AutomatedAssetImportData.h" },
		{ "ToolTip", "Full path to level to load before importing this group (only matters if importing assets into a level)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_LevelToLoad = { "LevelToLoad", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomatedAssetImportData, LevelToLoad), METADATA_PARAMS(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_LevelToLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_LevelToLoad_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutomatedAssetImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Filenames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Filenames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_DestinationPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_FactoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bReplaceExisting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_bSkipReadOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_Factory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomatedAssetImportData_Statics::NewProp_LevelToLoad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutomatedAssetImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomatedAssetImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomatedAssetImportData_Statics::ClassParams = {
		&UAutomatedAssetImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAutomatedAssetImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedAssetImportData_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAutomatedAssetImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomatedAssetImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutomatedAssetImportData()
	{
		if (!Z_Registration_Info_UClass_UAutomatedAssetImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomatedAssetImportData.OuterSingleton, Z_Construct_UClass_UAutomatedAssetImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAutomatedAssetImportData.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UAutomatedAssetImportData>()
	{
		return UAutomatedAssetImportData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomatedAssetImportData);
	UAutomatedAssetImportData::~UAutomatedAssetImportData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_AutomatedAssetImportData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_AutomatedAssetImportData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAutomatedAssetImportData, UAutomatedAssetImportData::StaticClass, TEXT("UAutomatedAssetImportData"), &Z_Registration_Info_UClass_UAutomatedAssetImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomatedAssetImportData), 4277457463U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_AutomatedAssetImportData_h_581429358(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_AutomatedAssetImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_AutomatedAssetImportData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
