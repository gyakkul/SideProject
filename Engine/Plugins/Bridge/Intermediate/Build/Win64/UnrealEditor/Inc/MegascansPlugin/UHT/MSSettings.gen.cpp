// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MSSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMaterialAssetSettings();
	MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMaterialAssetSettings_NoRegister();
	MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMaterialBlendSettings();
	MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMaterialBlendSettings_NoRegister();
	MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMaterialPresetsSettings();
	MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMaterialPresetsSettings_NoRegister();
	MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMegascansSettings();
	MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMegascansSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MegascansPlugin();
// End Cross Module References
	void UMegascansSettings::StaticRegisterNativesUMegascansSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMegascansSettings);
	UClass* Z_Construct_UClass_UMegascansSettings_NoRegister()
	{
		return UMegascansSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMegascansSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateFoliage_MetaData[];
#endif
		static void NewProp_bCreateFoliage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateFoliage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyToSelection_MetaData[];
#endif
		static void NewProp_bApplyToSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyToSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMegascansSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMegascansSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MSSettings.h" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bCreateFoliage_MetaData[] = {
		{ "Category", "MegascansSettings" },
		{ "Comment", "/** Populate Foliage Editor with Foliage Types for 3D Plants. */" },
		{ "DisplayName", "Auto-Populate Foliage Painter" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
		{ "ToolTip", "Populate Foliage Editor with Foliage Types for 3D Plants." },
	};
#endif
	void Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bCreateFoliage_SetBit(void* Obj)
	{
		((UMegascansSettings*)Obj)->bCreateFoliage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bCreateFoliage = { "bCreateFoliage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMegascansSettings), &Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bCreateFoliage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bCreateFoliage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bCreateFoliage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bApplyToSelection_MetaData[] = {
		{ "Category", "MegascansSettings" },
		{ "Comment", "/** Apply imported Surface on selected Actors in Editor. */" },
		{ "DisplayName", "Apply to Selection" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
		{ "ToolTip", "Apply imported Surface on selected Actors in Editor." },
	};
#endif
	void Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bApplyToSelection_SetBit(void* Obj)
	{
		((UMegascansSettings*)Obj)->bApplyToSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bApplyToSelection = { "bApplyToSelection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMegascansSettings), &Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bApplyToSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bApplyToSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bApplyToSelection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMegascansSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bCreateFoliage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMegascansSettings_Statics::NewProp_bApplyToSelection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMegascansSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMegascansSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMegascansSettings_Statics::ClassParams = {
		&UMegascansSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMegascansSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMegascansSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMegascansSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMegascansSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMegascansSettings()
	{
		if (!Z_Registration_Info_UClass_UMegascansSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMegascansSettings.OuterSingleton, Z_Construct_UClass_UMegascansSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMegascansSettings.OuterSingleton;
	}
	template<> MEGASCANSPLUGIN_API UClass* StaticClass<UMegascansSettings>()
	{
		return UMegascansSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMegascansSettings);
	UMegascansSettings::~UMegascansSettings() {}
	void UMaterialBlendSettings::StaticRegisterNativesUMaterialBlendSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialBlendSettings);
	UClass* Z_Construct_UClass_UMaterialBlendSettings_NoRegister()
	{
		return UMaterialBlendSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialBlendSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendedMaterialName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BlendedMaterialName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendedMaterialPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendedMaterialPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialBlendSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialBlendSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MSSettings.h" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialName_MetaData[] = {
		{ "Category", "MaterialBlendSettings" },
		{ "Comment", "/** Package name for Material Blend instance. */" },
		{ "DisplayName", "Material Name" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
		{ "ToolTip", "Package name for Material Blend instance." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialName = { "BlendedMaterialName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialBlendSettings, BlendedMaterialName), METADATA_PARAMS(Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialPath_MetaData[] = {
		{ "Category", "MaterialBlendSettings" },
		{ "Comment", "/** Destination path for Material Blend instance. */" },
		{ "ContentDir", "" },
		{ "DisplayName", "Destination Path" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
		{ "ToolTip", "Destination path for Material Blend instance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialPath = { "BlendedMaterialPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialBlendSettings, BlendedMaterialPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialBlendSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialBlendSettings_Statics::NewProp_BlendedMaterialPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialBlendSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialBlendSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialBlendSettings_Statics::ClassParams = {
		&UMaterialBlendSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialBlendSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialBlendSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialBlendSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialBlendSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialBlendSettings()
	{
		if (!Z_Registration_Info_UClass_UMaterialBlendSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialBlendSettings.OuterSingleton, Z_Construct_UClass_UMaterialBlendSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialBlendSettings.OuterSingleton;
	}
	template<> MEGASCANSPLUGIN_API UClass* StaticClass<UMaterialBlendSettings>()
	{
		return UMaterialBlendSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialBlendSettings);
	UMaterialBlendSettings::~UMaterialBlendSettings() {}
	void UMaterialAssetSettings::StaticRegisterNativesUMaterialAssetSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialAssetSettings);
	UClass* Z_Construct_UClass_UMaterialAssetSettings_NoRegister()
	{
		return UMaterialAssetSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialAssetSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterMaterial3d_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MasterMaterial3d;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterMaterialSurface_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MasterMaterialSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterMaterialPlant_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MasterMaterialPlant;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialAssetSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialAssetSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MSSettings.h" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterial3d_MetaData[] = {
		{ "Category", "MasterMaterialOverrides" },
		{ "DisplayName", "3D Master Material" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterial3d = { "MasterMaterial3d", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialAssetSettings, MasterMaterial3d), METADATA_PARAMS(Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterial3d_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterial3d_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialSurface_MetaData[] = {
		{ "Category", "MasterMaterialOverrides" },
		{ "DisplayName", "Surface Master Material" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialSurface = { "MasterMaterialSurface", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialAssetSettings, MasterMaterialSurface), METADATA_PARAMS(Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialSurface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialPlant_MetaData[] = {
		{ "Category", "MasterMaterialOverrides" },
		{ "DisplayName", "Plant Master Material" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialPlant = { "MasterMaterialPlant", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialAssetSettings, MasterMaterialPlant), METADATA_PARAMS(Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialPlant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialPlant_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialAssetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterial3d,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialAssetSettings_Statics::NewProp_MasterMaterialPlant,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialAssetSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialAssetSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialAssetSettings_Statics::ClassParams = {
		&UMaterialAssetSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialAssetSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialAssetSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialAssetSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialAssetSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialAssetSettings()
	{
		if (!Z_Registration_Info_UClass_UMaterialAssetSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialAssetSettings.OuterSingleton, Z_Construct_UClass_UMaterialAssetSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialAssetSettings.OuterSingleton;
	}
	template<> MEGASCANSPLUGIN_API UClass* StaticClass<UMaterialAssetSettings>()
	{
		return UMaterialAssetSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialAssetSettings);
	UMaterialAssetSettings::~UMaterialAssetSettings() {}
	void UMaterialPresetsSettings::StaticRegisterNativesUMaterialPresetsSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialPresetsSettings);
	UClass* Z_Construct_UClass_UMaterialPresetsSettings_NoRegister()
	{
		return UMaterialPresetsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialPresetsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterMaterial3d_MetaData[];
#endif
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_MasterMaterial3d;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterMaterialSurface_MetaData[];
#endif
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_MasterMaterialSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterMaterialPlant_MetaData[];
#endif
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_MasterMaterialPlant;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialPresetsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialPresetsSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MSSettings.h" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterial3d_MetaData[] = {
		{ "Category", "MasterMaterialOverrides" },
		{ "Comment", "/** Replace default master material with your own custom master material for all 3D assets. Default material is used if field is left empty. */" },
		{ "DisplayName", "3D Master Material" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
		{ "ToolTip", "Replace default master material with your own custom master material for all 3D assets. Default material is used if field is left empty." },
	};
#endif
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterial3d = { "MasterMaterial3d", nullptr, (EPropertyFlags)0x0014000000002001, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialPresetsSettings, MasterMaterial3d), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterial3d_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterial3d_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialSurface_MetaData[] = {
		{ "Category", "MasterMaterialOverrides" },
		{ "Comment", "/** Replace default master material with your own custom master material for all Surfaces. Default material is used if field is left empty. */" },
		{ "DisplayName", "Surface Master Material" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
		{ "ToolTip", "Replace default master material with your own custom master material for all Surfaces. Default material is used if field is left empty." },
	};
#endif
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialSurface = { "MasterMaterialSurface", nullptr, (EPropertyFlags)0x0014000000002001, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialPresetsSettings, MasterMaterialSurface), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialSurface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialPlant_MetaData[] = {
		{ "Category", "MasterMaterialOverrides" },
		{ "Comment", "/** Replace default master material with your own custom master material for all 3D Plants. Default material is used if field is left empty. */" },
		{ "DisplayName", "Plant Master Material" },
		{ "ModuleRelativePath", "Public/MSSettings.h" },
		{ "ToolTip", "Replace default master material with your own custom master material for all 3D Plants. Default material is used if field is left empty." },
	};
#endif
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialPlant = { "MasterMaterialPlant", nullptr, (EPropertyFlags)0x0014000000002001, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialPresetsSettings, MasterMaterialPlant), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialPlant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialPlant_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialPresetsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterial3d,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialPresetsSettings_Statics::NewProp_MasterMaterialPlant,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialPresetsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialPresetsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialPresetsSettings_Statics::ClassParams = {
		&UMaterialPresetsSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialPresetsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialPresetsSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialPresetsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialPresetsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialPresetsSettings()
	{
		if (!Z_Registration_Info_UClass_UMaterialPresetsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialPresetsSettings.OuterSingleton, Z_Construct_UClass_UMaterialPresetsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialPresetsSettings.OuterSingleton;
	}
	template<> MEGASCANSPLUGIN_API UClass* StaticClass<UMaterialPresetsSettings>()
	{
		return UMaterialPresetsSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialPresetsSettings);
	UMaterialPresetsSettings::~UMaterialPresetsSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Bridge_Source_MegascansPlugin_Public_MSSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Bridge_Source_MegascansPlugin_Public_MSSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMegascansSettings, UMegascansSettings::StaticClass, TEXT("UMegascansSettings"), &Z_Registration_Info_UClass_UMegascansSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMegascansSettings), 3593769727U) },
		{ Z_Construct_UClass_UMaterialBlendSettings, UMaterialBlendSettings::StaticClass, TEXT("UMaterialBlendSettings"), &Z_Registration_Info_UClass_UMaterialBlendSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialBlendSettings), 862712691U) },
		{ Z_Construct_UClass_UMaterialAssetSettings, UMaterialAssetSettings::StaticClass, TEXT("UMaterialAssetSettings"), &Z_Registration_Info_UClass_UMaterialAssetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialAssetSettings), 144343202U) },
		{ Z_Construct_UClass_UMaterialPresetsSettings, UMaterialPresetsSettings::StaticClass, TEXT("UMaterialPresetsSettings"), &Z_Registration_Info_UClass_UMaterialPresetsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialPresetsSettings), 1015709556U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Bridge_Source_MegascansPlugin_Public_MSSettings_h_2426914279(TEXT("/Script/MegascansPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Bridge_Source_MegascansPlugin_Public_MSSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Bridge_Source_MegascansPlugin_Public_MSSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
