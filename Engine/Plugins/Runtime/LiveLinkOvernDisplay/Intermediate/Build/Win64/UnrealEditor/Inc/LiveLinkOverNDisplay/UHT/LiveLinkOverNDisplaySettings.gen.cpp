// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkOverNDisplaySettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkOverNDisplaySettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVELINKOVERNDISPLAY_API UClass* Z_Construct_UClass_ULiveLinkOverNDisplaySettings();
	LIVELINKOVERNDISPLAY_API UClass* Z_Construct_UClass_ULiveLinkOverNDisplaySettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkOverNDisplay();
// End Cross Module References
	void ULiveLinkOverNDisplaySettings::StaticRegisterNativesULiveLinkOverNDisplaySettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkOverNDisplaySettings);
	UClass* Z_Construct_UClass_ULiveLinkOverNDisplaySettings_NoRegister()
	{
		return ULiveLinkOverNDisplaySettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkOverNDisplaySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkOverNDisplaySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkOverNDisplay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkOverNDisplaySettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkOverNDisplaySettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkOverNDisplaySettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkOverNDisplaySettings_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "LiveLinkOverNDisplay Settings" },
		{ "Comment", "/** \n\x09 * Enables nDisplay specific LiveLink subjects management across nDisplay cluster. \n\x09 * @note Can be overrided via the command line using -EnableLiveLinkOverNDisplay=false\n\x09 */" },
		{ "ModuleRelativePath", "Public/LiveLinkOverNDisplaySettings.h" },
		{ "ToolTip", "Enables nDisplay specific LiveLink subjects management across nDisplay cluster.\n@note Can be overrided via the command line using -EnableLiveLinkOverNDisplay=false" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkOverNDisplaySettings_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((ULiveLinkOverNDisplaySettings*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkOverNDisplaySettings_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveLinkOverNDisplaySettings), &Z_Construct_UClass_ULiveLinkOverNDisplaySettings_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkOverNDisplaySettings_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkOverNDisplaySettings_Statics::NewProp_bIsEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkOverNDisplaySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkOverNDisplaySettings_Statics::NewProp_bIsEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkOverNDisplaySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkOverNDisplaySettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkOverNDisplaySettings_Statics::ClassParams = {
		&ULiveLinkOverNDisplaySettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkOverNDisplaySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkOverNDisplaySettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkOverNDisplaySettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkOverNDisplaySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkOverNDisplaySettings()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkOverNDisplaySettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkOverNDisplaySettings.OuterSingleton, Z_Construct_UClass_ULiveLinkOverNDisplaySettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkOverNDisplaySettings.OuterSingleton;
	}
	template<> LIVELINKOVERNDISPLAY_API UClass* StaticClass<ULiveLinkOverNDisplaySettings>()
	{
		return ULiveLinkOverNDisplaySettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkOverNDisplaySettings);
	ULiveLinkOverNDisplaySettings::~ULiveLinkOverNDisplaySettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LiveLinkOvernDisplay_Source_LiveLinkOverNDisplay_Public_LiveLinkOverNDisplaySettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LiveLinkOvernDisplay_Source_LiveLinkOverNDisplay_Public_LiveLinkOverNDisplaySettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkOverNDisplaySettings, ULiveLinkOverNDisplaySettings::StaticClass, TEXT("ULiveLinkOverNDisplaySettings"), &Z_Registration_Info_UClass_ULiveLinkOverNDisplaySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkOverNDisplaySettings), 3261240662U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LiveLinkOvernDisplay_Source_LiveLinkOverNDisplay_Public_LiveLinkOverNDisplaySettings_h_2371908621(TEXT("/Script/LiveLinkOverNDisplay"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LiveLinkOvernDisplay_Source_LiveLinkOverNDisplay_Public_LiveLinkOverNDisplaySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LiveLinkOvernDisplay_Source_LiveLinkOverNDisplay_Public_LiveLinkOverNDisplaySettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
