// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/HierarchicalLOD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHierarchicalLOD() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalLODSetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UHierarchicalLODSettings();
	UNREALED_API UClass* Z_Construct_UClass_UHierarchicalLODSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UHierarchicalLODSettings::StaticRegisterNativesUHierarchicalLODSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHierarchicalLODSettings);
	UClass* Z_Construct_UClass_UHierarchicalLODSettings_NoRegister()
	{
		return UHierarchicalLODSettings::StaticClass();
	}
	struct Z_Construct_UClass_UHierarchicalLODSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceSettingsInAllMaps_MetaData[];
#endif
		static void NewProp_bForceSettingsInAllMaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceSettingsInAllMaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveLODActorsToHLODPackages_MetaData[];
#endif
		static void NewProp_bSaveLODActorsToHLODPackages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveLODActorsToHLODPackages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSetup_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultSetup;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectoriesForHLODCommandlet_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoriesForHLODCommandlet_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectoriesForHLODCommandlet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MapsToBuild_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapsToBuild_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MapsToBuild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BaseMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHierarchicalLODSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalLODSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Hierarchical LOD" },
		{ "IncludePath", "HierarchicalLOD.h" },
		{ "ModuleRelativePath", "Public/HierarchicalLOD.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bForceSettingsInAllMaps_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "Comment", "/** If enabled will force the project set HLOD level settings to be used across all levels in the project when Building Clusters */" },
		{ "ModuleRelativePath", "Public/HierarchicalLOD.h" },
		{ "ToolTip", "If enabled will force the project set HLOD level settings to be used across all levels in the project when Building Clusters" },
	};
#endif
	void Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bForceSettingsInAllMaps_SetBit(void* Obj)
	{
		((UHierarchicalLODSettings*)Obj)->bForceSettingsInAllMaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bForceSettingsInAllMaps = { "bForceSettingsInAllMaps", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHierarchicalLODSettings), &Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bForceSettingsInAllMaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bForceSettingsInAllMaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bForceSettingsInAllMaps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bSaveLODActorsToHLODPackages_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "Comment", "/** If enabled, will save LOD actors descriptions in the HLOD packages */" },
		{ "ModuleRelativePath", "Public/HierarchicalLOD.h" },
		{ "ToolTip", "If enabled, will save LOD actors descriptions in the HLOD packages" },
	};
#endif
	void Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bSaveLODActorsToHLODPackages_SetBit(void* Obj)
	{
		((UHierarchicalLODSettings*)Obj)->bSaveLODActorsToHLODPackages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bSaveLODActorsToHLODPackages = { "bSaveLODActorsToHLODPackages", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHierarchicalLODSettings), &Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bSaveLODActorsToHLODPackages_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bSaveLODActorsToHLODPackages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bSaveLODActorsToHLODPackages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DefaultSetup_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "Comment", "/** When set in combination with */" },
		{ "editcondition", "bForceSettingsInAllMaps" },
		{ "ModuleRelativePath", "Public/HierarchicalLOD.h" },
		{ "ToolTip", "When set in combination with" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DefaultSetup = { "DefaultSetup", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHierarchicalLODSettings, DefaultSetup), Z_Construct_UClass_UHierarchicalLODSetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DefaultSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DefaultSetup_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DirectoriesForHLODCommandlet_Inner = { "DirectoriesForHLODCommandlet", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DirectoriesForHLODCommandlet_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "DisplayName", "Directories containing maps used for building HLOD data through the commandlet" },
		{ "ModuleRelativePath", "Public/HierarchicalLOD.h" },
		{ "RelativeToGameContentDir", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DirectoriesForHLODCommandlet = { "DirectoriesForHLODCommandlet", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHierarchicalLODSettings, DirectoriesForHLODCommandlet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DirectoriesForHLODCommandlet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DirectoriesForHLODCommandlet_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_MapsToBuild_Inner = { "MapsToBuild", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_MapsToBuild_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "DisplayName", "Map UAssets used for building HLOD data through the" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/HierarchicalLOD.h" },
		{ "RelativeToGameContentDir", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_MapsToBuild = { "MapsToBuild", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHierarchicalLODSettings, MapsToBuild), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_MapsToBuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_MapsToBuild_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_BaseMaterial_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "Comment", "/** Base material used for creating a Constant Material Instance as the Proxy Material */" },
		{ "ModuleRelativePath", "Public/HierarchicalLOD.h" },
		{ "ToolTip", "Base material used for creating a Constant Material Instance as the Proxy Material" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHierarchicalLODSettings, BaseMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_BaseMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_BaseMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHierarchicalLODSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bForceSettingsInAllMaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_bSaveLODActorsToHLODPackages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DefaultSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DirectoriesForHLODCommandlet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_DirectoriesForHLODCommandlet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_MapsToBuild_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_MapsToBuild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSettings_Statics::NewProp_BaseMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHierarchicalLODSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHierarchicalLODSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHierarchicalLODSettings_Statics::ClassParams = {
		&UHierarchicalLODSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHierarchicalLODSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UHierarchicalLODSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHierarchicalLODSettings()
	{
		if (!Z_Registration_Info_UClass_UHierarchicalLODSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHierarchicalLODSettings.OuterSingleton, Z_Construct_UClass_UHierarchicalLODSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHierarchicalLODSettings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UHierarchicalLODSettings>()
	{
		return UHierarchicalLODSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHierarchicalLODSettings);
	UHierarchicalLODSettings::~UHierarchicalLODSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHierarchicalLODSettings, UHierarchicalLODSettings::StaticClass, TEXT("UHierarchicalLODSettings"), &Z_Registration_Info_UClass_UHierarchicalLODSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHierarchicalLODSettings), 2229199157U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_1925086307(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLOD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
