// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamVREditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamVREditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	STEAMVREDITOR_API UClass* Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings();
	STEAMVREDITOR_API UClass* Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamVREditor();
// End Cross Module References
	void UDEPRECATED_USteamVREditorSettings::StaticRegisterNativesUDEPRECATED_USteamVREditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_USteamVREditorSettings);
	UClass* Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings_NoRegister()
	{
		return UDEPRECATED_USteamVREditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowSteamVrInputToolbarButton_MetaData[];
#endif
		static void NewProp_bShowSteamVrInputToolbarButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSteamVrInputToolbarButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVREditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DeprecationMessage", "SteamVR plugin is deprecated; please use the OpenXR plugin." },
		{ "IncludePath", "SteamVREditorSettings.h" },
		{ "ModuleRelativePath", "Public/SteamVREditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings_Statics::NewProp_bShowSteamVrInputToolbarButton_MetaData[] = {
		{ "Category", "SteamVR Editor Settings" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVREditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings_Statics::NewProp_bShowSteamVrInputToolbarButton_SetBit(void* Obj)
	{
		((UDEPRECATED_USteamVREditorSettings*)Obj)->bShowSteamVrInputToolbarButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings_Statics::NewProp_bShowSteamVrInputToolbarButton = { "bShowSteamVrInputToolbarButton", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_USteamVREditorSettings), &Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings_Statics::NewProp_bShowSteamVrInputToolbarButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings_Statics::NewProp_bShowSteamVrInputToolbarButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings_Statics::NewProp_bShowSteamVrInputToolbarButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings_Statics::NewProp_bShowSteamVrInputToolbarButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_USteamVREditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings_Statics::ClassParams = {
		&UDEPRECATED_USteamVREditorSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings_Statics::PropPointers),
		0,
		0x021002A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_USteamVREditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_USteamVREditorSettings.OuterSingleton, Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_USteamVREditorSettings.OuterSingleton;
	}
	template<> STEAMVREDITOR_API UClass* StaticClass<UDEPRECATED_USteamVREditorSettings>()
	{
		return UDEPRECATED_USteamVREditorSettings::StaticClass();
	}
	UDEPRECATED_USteamVREditorSettings::UDEPRECATED_USteamVREditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_USteamVREditorSettings);
	UDEPRECATED_USteamVREditorSettings::~UDEPRECATED_USteamVREditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVREditor_Public_SteamVREditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVREditor_Public_SteamVREditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_USteamVREditorSettings, UDEPRECATED_USteamVREditorSettings::StaticClass, TEXT("UDEPRECATED_USteamVREditorSettings"), &Z_Registration_Info_UClass_UDEPRECATED_USteamVREditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_USteamVREditorSettings), 1452872686U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVREditor_Public_SteamVREditorSettings_h_1791861056(TEXT("/Script/SteamVREditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVREditor_Public_SteamVREditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVREditor_Public_SteamVREditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
