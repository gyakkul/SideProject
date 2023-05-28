// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SmartObjectAssetEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectAssetEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SMARTOBJECTSEDITORMODULE_API UClass* Z_Construct_UClass_USmartObjectAssetEditorSettings();
	SMARTOBJECTSEDITORMODULE_API UClass* Z_Construct_UClass_USmartObjectAssetEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsEditorModule();
// End Cross Module References
	void USmartObjectAssetEditorSettings::StaticRegisterNativesUSmartObjectAssetEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectAssetEditorSettings);
	UClass* Z_Construct_UClass_USmartObjectAssetEditorSettings_NoRegister()
	{
		return USmartObjectAssetEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectAssetEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowGridByDefault_MetaData[];
#endif
		static void NewProp_bShowGridByDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGridByDefault;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectAssetEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsEditorModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectAssetEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the SmartObject asset editor\n */" },
		{ "IncludePath", "SmartObjectAssetEditorSettings.h" },
		{ "ModuleRelativePath", "Private/SmartObjectAssetEditorSettings.h" },
		{ "ToolTip", "Settings for the SmartObject asset editor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectAssetEditorSettings_Statics::NewProp_bShowGridByDefault_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "/** Indicates whether or not the grid must be shown by default when the editor is opened */" },
		{ "ModuleRelativePath", "Private/SmartObjectAssetEditorSettings.h" },
		{ "ToolTip", "Indicates whether or not the grid must be shown by default when the editor is opened" },
	};
#endif
	void Z_Construct_UClass_USmartObjectAssetEditorSettings_Statics::NewProp_bShowGridByDefault_SetBit(void* Obj)
	{
		((USmartObjectAssetEditorSettings*)Obj)->bShowGridByDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmartObjectAssetEditorSettings_Statics::NewProp_bShowGridByDefault = { "bShowGridByDefault", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USmartObjectAssetEditorSettings), &Z_Construct_UClass_USmartObjectAssetEditorSettings_Statics::NewProp_bShowGridByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_USmartObjectAssetEditorSettings_Statics::NewProp_bShowGridByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectAssetEditorSettings_Statics::NewProp_bShowGridByDefault_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmartObjectAssetEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectAssetEditorSettings_Statics::NewProp_bShowGridByDefault,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectAssetEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectAssetEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectAssetEditorSettings_Statics::ClassParams = {
		&USmartObjectAssetEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USmartObjectAssetEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectAssetEditorSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USmartObjectAssetEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectAssetEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartObjectAssetEditorSettings()
	{
		if (!Z_Registration_Info_UClass_USmartObjectAssetEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectAssetEditorSettings.OuterSingleton, Z_Construct_UClass_USmartObjectAssetEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectAssetEditorSettings.OuterSingleton;
	}
	template<> SMARTOBJECTSEDITORMODULE_API UClass* StaticClass<USmartObjectAssetEditorSettings>()
	{
		return USmartObjectAssetEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectAssetEditorSettings);
	USmartObjectAssetEditorSettings::~USmartObjectAssetEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectAssetEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectAssetEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectAssetEditorSettings, USmartObjectAssetEditorSettings::StaticClass, TEXT("USmartObjectAssetEditorSettings"), &Z_Registration_Info_UClass_USmartObjectAssetEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectAssetEditorSettings), 1913280436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectAssetEditorSettings_h_304305944(TEXT("/Script/SmartObjectsEditorModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectAssetEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsEditorModule_Private_SmartObjectAssetEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
