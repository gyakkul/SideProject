// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/USDStageEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDStageEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_USDStageEditor();
	USDSTAGEEDITOR_API UClass* Z_Construct_UClass_UUsdStageEditorSettings();
	USDSTAGEEDITOR_API UClass* Z_Construct_UClass_UUsdStageEditorSettings_NoRegister();
// End Cross Module References
	void UUsdStageEditorSettings::StaticRegisterNativesUUsdStageEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdStageEditorSettings);
	UClass* Z_Construct_UClass_UUsdStageEditorSettings_NoRegister()
	{
		return UUsdStageEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UUsdStageEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectionSynced_MetaData[];
#endif
		static void NewProp_bSelectionSynced_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectionSynced;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsolateLayerSyncedWithEditTarget_MetaData[];
#endif
		static void NewProp_bIsolateLayerSyncedWithEditTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsolateLayerSyncedWithEditTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdStageEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_USDStageEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "USDStageEditorSettings.h" },
		{ "ModuleRelativePath", "Private/USDStageEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageEditorSettings_Statics::NewProp_bSelectionSynced_MetaData[] = {
		{ "Category", "USD" },
		{ "Comment", "/** Whether our prim selection in SUSDStageTreeView is kept synchronized with the viewport selection */" },
		{ "ModuleRelativePath", "Private/USDStageEditorSettings.h" },
		{ "ToolTip", "Whether our prim selection in SUSDStageTreeView is kept synchronized with the viewport selection" },
	};
#endif
	void Z_Construct_UClass_UUsdStageEditorSettings_Statics::NewProp_bSelectionSynced_SetBit(void* Obj)
	{
		((UUsdStageEditorSettings*)Obj)->bSelectionSynced = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdStageEditorSettings_Statics::NewProp_bSelectionSynced = { "bSelectionSynced", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdStageEditorSettings), &Z_Construct_UClass_UUsdStageEditorSettings_Statics::NewProp_bSelectionSynced_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdStageEditorSettings_Statics::NewProp_bSelectionSynced_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageEditorSettings_Statics::NewProp_bSelectionSynced_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageEditorSettings_Statics::NewProp_bIsolateLayerSyncedWithEditTarget_MetaData[] = {
		{ "Category", "USD" },
		{ "Comment", "/** Whether to automatically set a layer as edit target when isolating it */" },
		{ "ModuleRelativePath", "Private/USDStageEditorSettings.h" },
		{ "ToolTip", "Whether to automatically set a layer as edit target when isolating it" },
	};
#endif
	void Z_Construct_UClass_UUsdStageEditorSettings_Statics::NewProp_bIsolateLayerSyncedWithEditTarget_SetBit(void* Obj)
	{
		((UUsdStageEditorSettings*)Obj)->bIsolateLayerSyncedWithEditTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdStageEditorSettings_Statics::NewProp_bIsolateLayerSyncedWithEditTarget = { "bIsolateLayerSyncedWithEditTarget", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdStageEditorSettings), &Z_Construct_UClass_UUsdStageEditorSettings_Statics::NewProp_bIsolateLayerSyncedWithEditTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdStageEditorSettings_Statics::NewProp_bIsolateLayerSyncedWithEditTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageEditorSettings_Statics::NewProp_bIsolateLayerSyncedWithEditTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdStageEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageEditorSettings_Statics::NewProp_bSelectionSynced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageEditorSettings_Statics::NewProp_bIsolateLayerSyncedWithEditTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdStageEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdStageEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdStageEditorSettings_Statics::ClassParams = {
		&UUsdStageEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUsdStageEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageEditorSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUsdStageEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUsdStageEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UUsdStageEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdStageEditorSettings.OuterSingleton, Z_Construct_UClass_UUsdStageEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdStageEditorSettings.OuterSingleton;
	}
	template<> USDSTAGEEDITOR_API UClass* StaticClass<UUsdStageEditorSettings>()
	{
		return UUsdStageEditorSettings::StaticClass();
	}
	UUsdStageEditorSettings::UUsdStageEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdStageEditorSettings);
	UUsdStageEditorSettings::~UUsdStageEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Private_USDStageEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Private_USDStageEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUsdStageEditorSettings, UUsdStageEditorSettings::StaticClass, TEXT("UUsdStageEditorSettings"), &Z_Registration_Info_UClass_UUsdStageEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdStageEditorSettings), 1914175119U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Private_USDStageEditorSettings_h_3763748474(TEXT("/Script/USDStageEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Private_USDStageEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Private_USDStageEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
