// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectMixerEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectMixerEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	OBJECTMIXEREDITOR_API UClass* Z_Construct_UClass_UObjectMixerEditorSettings();
	OBJECTMIXEREDITOR_API UClass* Z_Construct_UClass_UObjectMixerEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ObjectMixerEditor();
// End Cross Module References
	void UObjectMixerEditorSettings::StaticRegisterNativesUObjectMixerEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectMixerEditorSettings);
	UClass* Z_Construct_UClass_UObjectMixerEditorSettings_NoRegister()
	{
		return UObjectMixerEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UObjectMixerEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSyncSelection_MetaData[];
#endif
		static void NewProp_bSyncSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExpandTreeViewItemsByDefault_MetaData[];
#endif
		static void NewProp_bExpandTreeViewItemsByDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpandTreeViewItemsByDefault;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectMixerEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectMixerEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectMixerEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectMixerEditorSettings.h" },
		{ "ModuleRelativePath", "Public/ObjectMixerEditorSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectMixerEditorSettings_Statics::NewProp_bSyncSelection_MetaData[] = {
		{ "Category", "Object Mixer" },
		{ "Comment", "/**\n\x09 * If enabled, clicking an item in the mixer list will also select the item in the Scene Outliner.\n\x09 * Alt + Click to select items in mixer without selecting the item in the Scene outliner.\n\x09 * If disabled, selections will not sync unless Alt is held. Effectively, this is the opposite behavior.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectMixerEditorSettings.h" },
		{ "ToolTip", "If enabled, clicking an item in the mixer list will also select the item in the Scene Outliner.\nAlt + Click to select items in mixer without selecting the item in the Scene outliner.\nIf disabled, selections will not sync unless Alt is held. Effectively, this is the opposite behavior." },
	};
#endif
	void Z_Construct_UClass_UObjectMixerEditorSettings_Statics::NewProp_bSyncSelection_SetBit(void* Obj)
	{
		((UObjectMixerEditorSettings*)Obj)->bSyncSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjectMixerEditorSettings_Statics::NewProp_bSyncSelection = { "bSyncSelection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UObjectMixerEditorSettings), &Z_Construct_UClass_UObjectMixerEditorSettings_Statics::NewProp_bSyncSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjectMixerEditorSettings_Statics::NewProp_bSyncSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectMixerEditorSettings_Statics::NewProp_bSyncSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectMixerEditorSettings_Statics::NewProp_bExpandTreeViewItemsByDefault_MetaData[] = {
		{ "Category", "Object Mixer" },
		{ "Comment", "/**\n\x09 * If false, a new object will be created every time the filter object is accessed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectMixerEditorSettings.h" },
		{ "ToolTip", "If false, a new object will be created every time the filter object is accessed." },
	};
#endif
	void Z_Construct_UClass_UObjectMixerEditorSettings_Statics::NewProp_bExpandTreeViewItemsByDefault_SetBit(void* Obj)
	{
		((UObjectMixerEditorSettings*)Obj)->bExpandTreeViewItemsByDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjectMixerEditorSettings_Statics::NewProp_bExpandTreeViewItemsByDefault = { "bExpandTreeViewItemsByDefault", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UObjectMixerEditorSettings), &Z_Construct_UClass_UObjectMixerEditorSettings_Statics::NewProp_bExpandTreeViewItemsByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjectMixerEditorSettings_Statics::NewProp_bExpandTreeViewItemsByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectMixerEditorSettings_Statics::NewProp_bExpandTreeViewItemsByDefault_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectMixerEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectMixerEditorSettings_Statics::NewProp_bSyncSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectMixerEditorSettings_Statics::NewProp_bExpandTreeViewItemsByDefault,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectMixerEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectMixerEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectMixerEditorSettings_Statics::ClassParams = {
		&UObjectMixerEditorSettings::StaticClass,
		"ObjectMixer",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UObjectMixerEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectMixerEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectMixerEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectMixerEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectMixerEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UObjectMixerEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectMixerEditorSettings.OuterSingleton, Z_Construct_UClass_UObjectMixerEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectMixerEditorSettings.OuterSingleton;
	}
	template<> OBJECTMIXEREDITOR_API UClass* StaticClass<UObjectMixerEditorSettings>()
	{
		return UObjectMixerEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectMixerEditorSettings);
	UObjectMixerEditorSettings::~UObjectMixerEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectMixerEditorSettings, UObjectMixerEditorSettings::StaticClass, TEXT("UObjectMixerEditorSettings"), &Z_Registration_Info_UClass_UObjectMixerEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectMixerEditorSettings), 2858586410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSettings_h_2828397157(TEXT("/Script/ObjectMixerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
