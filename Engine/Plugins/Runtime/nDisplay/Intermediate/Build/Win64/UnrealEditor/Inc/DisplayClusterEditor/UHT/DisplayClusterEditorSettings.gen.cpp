// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Settings/DisplayClusterEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DISPLAYCLUSTEREDITOR_API UClass* Z_Construct_UClass_UDisplayClusterEditorSettings();
	DISPLAYCLUSTEREDITOR_API UClass* Z_Construct_UClass_UDisplayClusterEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterEditor();
// End Cross Module References
	void UDisplayClusterEditorSettings::StaticRegisterNativesUDisplayClusterEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterEditorSettings);
	UClass* Z_Construct_UClass_UDisplayClusterEditorSettings_NoRegister()
	{
		return UDisplayClusterEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements nDisplay settings\n **/" },
		{ "IncludePath", "Settings/DisplayClusterEditorSettings.h" },
		{ "ModuleRelativePath", "Private/Settings/DisplayClusterEditorSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements nDisplay settings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterEditorSettings_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Main" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/Settings/DisplayClusterEditorSettings.h" },
		{ "ToolTip", "When enabled, replaces the original GameEngine to DisplayClusterGameEngine" },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterEditorSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UDisplayClusterEditorSettings*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterEditorSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplayClusterEditorSettings), &Z_Construct_UClass_UDisplayClusterEditorSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterEditorSettings_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterEditorSettings_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterEditorSettings_Statics::NewProp_bEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterEditorSettings_Statics::ClassParams = {
		&UDisplayClusterEditorSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterEditorSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterEditorSettings.OuterSingleton, Z_Construct_UClass_UDisplayClusterEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterEditorSettings.OuterSingleton;
	}
	template<> DISPLAYCLUSTEREDITOR_API UClass* StaticClass<UDisplayClusterEditorSettings>()
	{
		return UDisplayClusterEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterEditorSettings);
	UDisplayClusterEditorSettings::~UDisplayClusterEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterEditor_Private_Settings_DisplayClusterEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterEditor_Private_Settings_DisplayClusterEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterEditorSettings, UDisplayClusterEditorSettings::StaticClass, TEXT("UDisplayClusterEditorSettings"), &Z_Registration_Info_UClass_UDisplayClusterEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterEditorSettings), 1246047703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterEditor_Private_Settings_DisplayClusterEditorSettings_h_4286066712(TEXT("/Script/DisplayClusterEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterEditor_Private_Settings_DisplayClusterEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterEditor_Private_Settings_DisplayClusterEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
