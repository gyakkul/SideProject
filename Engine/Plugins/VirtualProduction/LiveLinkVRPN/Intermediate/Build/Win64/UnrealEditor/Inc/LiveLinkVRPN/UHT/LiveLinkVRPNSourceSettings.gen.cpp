// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Source/LiveLinkVRPN/Public/LiveLinkVRPNSourceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkVRPNSourceSettings() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
	LIVELINKVRPN_API UClass* Z_Construct_UClass_ULiveLinkVRPNSourceSettings();
	LIVELINKVRPN_API UClass* Z_Construct_UClass_ULiveLinkVRPNSourceSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkVRPN();
// End Cross Module References
	void ULiveLinkVRPNSourceSettings::StaticRegisterNativesULiveLinkVRPNSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkVRPNSourceSettings);
	UClass* Z_Construct_UClass_ULiveLinkVRPNSourceSettings_NoRegister()
	{
		return ULiveLinkVRPNSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkVRPNSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkVRPNSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkVRPN,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkVRPNSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkVRPNSourceSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkVRPNSourceSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkVRPNSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkVRPNSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkVRPNSourceSettings_Statics::ClassParams = {
		&ULiveLinkVRPNSourceSettings::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkVRPNSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVRPNSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkVRPNSourceSettings()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkVRPNSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkVRPNSourceSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkVRPNSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkVRPNSourceSettings.OuterSingleton;
	}
	template<> LIVELINKVRPN_API UClass* StaticClass<ULiveLinkVRPNSourceSettings>()
	{
		return ULiveLinkVRPNSourceSettings::StaticClass();
	}
	ULiveLinkVRPNSourceSettings::ULiveLinkVRPNSourceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkVRPNSourceSettings);
	ULiveLinkVRPNSourceSettings::~ULiveLinkVRPNSourceSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkVRPNSourceSettings, ULiveLinkVRPNSourceSettings::StaticClass, TEXT("ULiveLinkVRPNSourceSettings"), &Z_Registration_Info_UClass_ULiveLinkVRPNSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkVRPNSourceSettings), 1960189407U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceSettings_h_202457584(TEXT("/Script/LiveLinkVRPN"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
