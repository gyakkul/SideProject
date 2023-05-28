// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightMixerEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightMixerEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIGHTMIXER_API UClass* Z_Construct_UClass_ULightMixerEditorSettings();
	LIGHTMIXER_API UClass* Z_Construct_UClass_ULightMixerEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LightMixer();
// End Cross Module References
	void ULightMixerEditorSettings::StaticRegisterNativesULightMixerEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightMixerEditorSettings);
	UClass* Z_Construct_UClass_ULightMixerEditorSettings_NoRegister()
	{
		return ULightMixerEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULightMixerEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideObjectMixerMenuItem_MetaData[];
#endif
		static void NewProp_bHideObjectMixerMenuItem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideObjectMixerMenuItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightMixerEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LightMixer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightMixerEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LightMixerEditorSettings.h" },
		{ "ModuleRelativePath", "Public/LightMixerEditorSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightMixerEditorSettings_Statics::NewProp_bHideObjectMixerMenuItem_MetaData[] = {
		{ "Category", "Light Mixer" },
		{ "Comment", "/**\n\x09 * If true, the Object Mixer menu item will be disabled and removed.\n\x09 * This is useful if you only want to use Light Mixer and to avoid cluttering the menus.\n\x09 */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/LightMixerEditorSettings.h" },
		{ "ToolTip", "If true, the Object Mixer menu item will be disabled and removed.\nThis is useful if you only want to use Light Mixer and to avoid cluttering the menus." },
	};
#endif
	void Z_Construct_UClass_ULightMixerEditorSettings_Statics::NewProp_bHideObjectMixerMenuItem_SetBit(void* Obj)
	{
		((ULightMixerEditorSettings*)Obj)->bHideObjectMixerMenuItem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightMixerEditorSettings_Statics::NewProp_bHideObjectMixerMenuItem = { "bHideObjectMixerMenuItem", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULightMixerEditorSettings), &Z_Construct_UClass_ULightMixerEditorSettings_Statics::NewProp_bHideObjectMixerMenuItem_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightMixerEditorSettings_Statics::NewProp_bHideObjectMixerMenuItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightMixerEditorSettings_Statics::NewProp_bHideObjectMixerMenuItem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightMixerEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightMixerEditorSettings_Statics::NewProp_bHideObjectMixerMenuItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightMixerEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightMixerEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightMixerEditorSettings_Statics::ClassParams = {
		&ULightMixerEditorSettings::StaticClass,
		"ObjectMixer",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULightMixerEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULightMixerEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULightMixerEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightMixerEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightMixerEditorSettings()
	{
		if (!Z_Registration_Info_UClass_ULightMixerEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightMixerEditorSettings.OuterSingleton, Z_Construct_UClass_ULightMixerEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULightMixerEditorSettings.OuterSingleton;
	}
	template<> LIGHTMIXER_API UClass* StaticClass<ULightMixerEditorSettings>()
	{
		return ULightMixerEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightMixerEditorSettings);
	ULightMixerEditorSettings::~ULightMixerEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_LightMixer_Source_LightMixer_Public_LightMixerEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_LightMixer_Source_LightMixer_Public_LightMixerEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULightMixerEditorSettings, ULightMixerEditorSettings::StaticClass, TEXT("ULightMixerEditorSettings"), &Z_Registration_Info_UClass_ULightMixerEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightMixerEditorSettings), 2020308603U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_LightMixer_Source_LightMixer_Public_LightMixerEditorSettings_h_1700639558(TEXT("/Script/LightMixer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_LightMixer_Source_LightMixer_Public_LightMixerEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_LightMixer_Source_LightMixer_Public_LightMixerEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
