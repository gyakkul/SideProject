// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ViewModels/NiagaraScriptStatsViewModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScriptStatsViewModel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraScripStatsViewModelSettings();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraScripStatsViewModelSettings::StaticRegisterNativesUNiagaraScripStatsViewModelSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraScripStatsViewModelSettings);
	UClass* Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_NoRegister()
	{
		return UNiagaraScripStatsViewModelSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EnabledPlatforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnabledPlatforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EnabledPlatforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ViewModels/NiagaraScriptStatsViewModel.h" },
		{ "ModuleRelativePath", "Private/ViewModels/NiagaraScriptStatsViewModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_Statics::NewProp_EnabledPlatforms_Inner = { "EnabledPlatforms", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_Statics::NewProp_EnabledPlatforms_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Private/ViewModels/NiagaraScriptStatsViewModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_Statics::NewProp_EnabledPlatforms = { "EnabledPlatforms", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScripStatsViewModelSettings, EnabledPlatforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_Statics::NewProp_EnabledPlatforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_Statics::NewProp_EnabledPlatforms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_Statics::NewProp_EnabledPlatforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_Statics::NewProp_EnabledPlatforms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraScripStatsViewModelSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_Statics::ClassParams = {
		&UNiagaraScripStatsViewModelSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraScripStatsViewModelSettings()
	{
		if (!Z_Registration_Info_UClass_UNiagaraScripStatsViewModelSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraScripStatsViewModelSettings.OuterSingleton, Z_Construct_UClass_UNiagaraScripStatsViewModelSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraScripStatsViewModelSettings.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraScripStatsViewModelSettings>()
	{
		return UNiagaraScripStatsViewModelSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraScripStatsViewModelSettings);
	UNiagaraScripStatsViewModelSettings::~UNiagaraScripStatsViewModelSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_ViewModels_NiagaraScriptStatsViewModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_ViewModels_NiagaraScriptStatsViewModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraScripStatsViewModelSettings, UNiagaraScripStatsViewModelSettings::StaticClass, TEXT("UNiagaraScripStatsViewModelSettings"), &Z_Registration_Info_UClass_UNiagaraScripStatsViewModelSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraScripStatsViewModelSettings), 3645882742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_ViewModels_NiagaraScriptStatsViewModel_h_2520529446(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_ViewModels_NiagaraScriptStatsViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_ViewModels_NiagaraScriptStatsViewModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
