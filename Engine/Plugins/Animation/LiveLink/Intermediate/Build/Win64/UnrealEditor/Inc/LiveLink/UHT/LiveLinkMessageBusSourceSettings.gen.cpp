// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LiveLinkMessageBusSourceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMessageBusSourceSettings() {}
// Cross Module References
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceSettings();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
	void ULiveLinkMessageBusSourceSettings::StaticRegisterNativesULiveLinkMessageBusSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkMessageBusSourceSettings);
	UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_NoRegister()
	{
		return ULiveLinkMessageBusSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for LiveLinkMessageBusSource.\n * Used to apply default Evaluation mode from project settings when constructed\n */" },
		{ "IncludePath", "LiveLinkMessageBusSourceSettings.h" },
		{ "ModuleRelativePath", "Private/LiveLinkMessageBusSourceSettings.h" },
		{ "ToolTip", "Settings for LiveLinkMessageBusSource.\nUsed to apply default Evaluation mode from project settings when constructed" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkMessageBusSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics::ClassParams = {
		&ULiveLinkMessageBusSourceSettings::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceSettings()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkMessageBusSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkMessageBusSourceSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkMessageBusSourceSettings.OuterSingleton;
	}
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkMessageBusSourceSettings>()
	{
		return ULiveLinkMessageBusSourceSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkMessageBusSourceSettings);
	ULiveLinkMessageBusSourceSettings::~ULiveLinkMessageBusSourceSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkMessageBusSourceSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkMessageBusSourceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkMessageBusSourceSettings, ULiveLinkMessageBusSourceSettings::StaticClass, TEXT("ULiveLinkMessageBusSourceSettings"), &Z_Registration_Info_UClass_ULiveLinkMessageBusSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkMessageBusSourceSettings), 2415280818U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkMessageBusSourceSettings_h_580405522(TEXT("/Script/LiveLink"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkMessageBusSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkMessageBusSourceSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
