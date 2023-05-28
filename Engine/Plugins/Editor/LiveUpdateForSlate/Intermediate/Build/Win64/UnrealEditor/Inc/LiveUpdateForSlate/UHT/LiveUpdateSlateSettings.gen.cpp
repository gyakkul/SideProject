// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveUpdateSlateSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveUpdateSlateSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVEUPDATEFORSLATE_API UClass* Z_Construct_UClass_ULiveUpdateSlateSettings();
	LIVEUPDATEFORSLATE_API UClass* Z_Construct_UClass_ULiveUpdateSlateSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveUpdateForSlate();
// End Cross Module References
	void ULiveUpdateSlateSettings::StaticRegisterNativesULiveUpdateSlateSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveUpdateSlateSettings);
	UClass* Z_Construct_UClass_ULiveUpdateSlateSettings_NoRegister()
	{
		return ULiveUpdateSlateSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveUpdateSlateSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLiveUpdateForSlate_MetaData[];
#endif
		static void NewProp_bEnableLiveUpdateForSlate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLiveUpdateForSlate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveUpdateSlateSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveUpdateForSlate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveUpdateSlateSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveUpdateSlateSettings.h" },
		{ "ModuleRelativePath", "Public/LiveUpdateSlateSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveUpdateSlateSettings_Statics::NewProp_bEnableLiveUpdateForSlate_MetaData[] = {
		{ "Category", "Slate" },
		{ "ModuleRelativePath", "Public/LiveUpdateSlateSettings.h" },
		{ "ToolTip", "Refreshes the editor's Slate layout when Live Coding patches are complete." },
	};
#endif
	void Z_Construct_UClass_ULiveUpdateSlateSettings_Statics::NewProp_bEnableLiveUpdateForSlate_SetBit(void* Obj)
	{
		((ULiveUpdateSlateSettings*)Obj)->bEnableLiveUpdateForSlate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveUpdateSlateSettings_Statics::NewProp_bEnableLiveUpdateForSlate = { "bEnableLiveUpdateForSlate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveUpdateSlateSettings), &Z_Construct_UClass_ULiveUpdateSlateSettings_Statics::NewProp_bEnableLiveUpdateForSlate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveUpdateSlateSettings_Statics::NewProp_bEnableLiveUpdateForSlate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveUpdateSlateSettings_Statics::NewProp_bEnableLiveUpdateForSlate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveUpdateSlateSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveUpdateSlateSettings_Statics::NewProp_bEnableLiveUpdateForSlate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveUpdateSlateSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveUpdateSlateSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveUpdateSlateSettings_Statics::ClassParams = {
		&ULiveUpdateSlateSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveUpdateSlateSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveUpdateSlateSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveUpdateSlateSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveUpdateSlateSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveUpdateSlateSettings()
	{
		if (!Z_Registration_Info_UClass_ULiveUpdateSlateSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveUpdateSlateSettings.OuterSingleton, Z_Construct_UClass_ULiveUpdateSlateSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveUpdateSlateSettings.OuterSingleton;
	}
	template<> LIVEUPDATEFORSLATE_API UClass* StaticClass<ULiveUpdateSlateSettings>()
	{
		return ULiveUpdateSlateSettings::StaticClass();
	}
	ULiveUpdateSlateSettings::ULiveUpdateSlateSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveUpdateSlateSettings);
	ULiveUpdateSlateSettings::~ULiveUpdateSlateSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_LiveUpdateForSlate_Source_LiveUpdateForSlate_Public_LiveUpdateSlateSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_LiveUpdateForSlate_Source_LiveUpdateForSlate_Public_LiveUpdateSlateSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveUpdateSlateSettings, ULiveUpdateSlateSettings::StaticClass, TEXT("ULiveUpdateSlateSettings"), &Z_Registration_Info_UClass_ULiveUpdateSlateSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveUpdateSlateSettings), 636941659U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_LiveUpdateForSlate_Source_LiveUpdateForSlate_Public_LiveUpdateSlateSettings_h_3297325140(TEXT("/Script/LiveUpdateForSlate"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_LiveUpdateForSlate_Source_LiveUpdateForSlate_Public_LiveUpdateSlateSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_LiveUpdateForSlate_Source_LiveUpdateForSlate_Public_LiveUpdateSlateSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
