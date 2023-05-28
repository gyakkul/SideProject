// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LiveLinkMasterLockitSourceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMasterLockitSourceSettings() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
	LIVELINKMASTERLOCKIT_API UClass* Z_Construct_UClass_ULiveLinkMasterLockitSourceSettings();
	LIVELINKMASTERLOCKIT_API UClass* Z_Construct_UClass_ULiveLinkMasterLockitSourceSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkMasterLockit();
// End Cross Module References
	void ULiveLinkMasterLockitSourceSettings::StaticRegisterNativesULiveLinkMasterLockitSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkMasterLockitSourceSettings);
	UClass* Z_Construct_UClass_ULiveLinkMasterLockitSourceSettings_NoRegister()
	{
		return ULiveLinkMasterLockitSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkMasterLockitSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkMasterLockitSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMasterLockit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkMasterLockitSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkMasterLockitSourceSettings.h" },
		{ "ModuleRelativePath", "Private/LiveLinkMasterLockitSourceSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkMasterLockitSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkMasterLockitSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkMasterLockitSourceSettings_Statics::ClassParams = {
		&ULiveLinkMasterLockitSourceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkMasterLockitSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMasterLockitSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkMasterLockitSourceSettings()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkMasterLockitSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkMasterLockitSourceSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkMasterLockitSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkMasterLockitSourceSettings.OuterSingleton;
	}
	template<> LIVELINKMASTERLOCKIT_API UClass* StaticClass<ULiveLinkMasterLockitSourceSettings>()
	{
		return ULiveLinkMasterLockitSourceSettings::StaticClass();
	}
	ULiveLinkMasterLockitSourceSettings::ULiveLinkMasterLockitSourceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkMasterLockitSourceSettings);
	ULiveLinkMasterLockitSourceSettings::~ULiveLinkMasterLockitSourceSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkMasterLockit_Source_LiveLinkMasterLockit_Private_LiveLinkMasterLockitSourceSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkMasterLockit_Source_LiveLinkMasterLockit_Private_LiveLinkMasterLockitSourceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkMasterLockitSourceSettings, ULiveLinkMasterLockitSourceSettings::StaticClass, TEXT("ULiveLinkMasterLockitSourceSettings"), &Z_Registration_Info_UClass_ULiveLinkMasterLockitSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkMasterLockitSourceSettings), 1596702604U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkMasterLockit_Source_LiveLinkMasterLockit_Private_LiveLinkMasterLockitSourceSettings_h_2817454970(TEXT("/Script/LiveLinkMasterLockit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkMasterLockit_Source_LiveLinkMasterLockit_Private_LiveLinkMasterLockitSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkMasterLockit_Source_LiveLinkMasterLockit_Private_LiveLinkMasterLockitSourceSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
