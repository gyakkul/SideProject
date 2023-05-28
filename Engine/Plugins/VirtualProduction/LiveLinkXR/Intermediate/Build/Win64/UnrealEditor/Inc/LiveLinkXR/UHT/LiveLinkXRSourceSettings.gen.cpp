// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkXRSourceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkXRSourceSettings() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
	LIVELINKXR_API UClass* Z_Construct_UClass_ULiveLinkXRSourceSettings();
	LIVELINKXR_API UClass* Z_Construct_UClass_ULiveLinkXRSourceSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkXR();
// End Cross Module References
	void ULiveLinkXRSourceSettings::StaticRegisterNativesULiveLinkXRSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkXRSourceSettings);
	UClass* Z_Construct_UClass_ULiveLinkXRSourceSettings_NoRegister()
	{
		return ULiveLinkXRSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkXRSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalUpdateRateInHz_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LocalUpdateRateInHz;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkXRSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkXR,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkXRSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkXRSourceSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkXRSourceSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkXRSourceSettings_Statics::NewProp_LocalUpdateRateInHz_MetaData[] = {
		{ "Category", "LiveLinkXR" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Update rate (in Hz) at which to read the tracking data for each device */" },
		{ "ModuleRelativePath", "Public/LiveLinkXRSourceSettings.h" },
		{ "ToolTip", "Update rate (in Hz) at which to read the tracking data for each device" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULiveLinkXRSourceSettings_Statics::NewProp_LocalUpdateRateInHz = { "LocalUpdateRateInHz", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkXRSourceSettings, LocalUpdateRateInHz), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkXRSourceSettings_Statics::NewProp_LocalUpdateRateInHz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkXRSourceSettings_Statics::NewProp_LocalUpdateRateInHz_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkXRSourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkXRSourceSettings_Statics::NewProp_LocalUpdateRateInHz,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkXRSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkXRSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkXRSourceSettings_Statics::ClassParams = {
		&ULiveLinkXRSourceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkXRSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkXRSourceSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkXRSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkXRSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkXRSourceSettings()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkXRSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkXRSourceSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkXRSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkXRSourceSettings.OuterSingleton;
	}
	template<> LIVELINKXR_API UClass* StaticClass<ULiveLinkXRSourceSettings>()
	{
		return ULiveLinkXRSourceSettings::StaticClass();
	}
	ULiveLinkXRSourceSettings::ULiveLinkXRSourceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkXRSourceSettings);
	ULiveLinkXRSourceSettings::~ULiveLinkXRSourceSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkXRSourceSettings, ULiveLinkXRSourceSettings::StaticClass, TEXT("ULiveLinkXRSourceSettings"), &Z_Registration_Info_UClass_ULiveLinkXRSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkXRSourceSettings), 4247837709U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceSettings_h_2957936213(TEXT("/Script/LiveLinkXR"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
