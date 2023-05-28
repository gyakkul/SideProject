// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LiveLinkVirtualSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkVirtualSource() {}
// Cross Module References
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
	void ULiveLinkVirtualSubjectSourceSettings::StaticRegisterNativesULiveLinkVirtualSubjectSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkVirtualSubjectSourceSettings);
	UClass* Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_NoRegister()
	{
		return ULiveLinkVirtualSubjectSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** VirtualSubjectSource Settings to be able to differentiate from live sources and keep a name associated to the source */" },
		{ "IncludePath", "LiveLinkVirtualSource.h" },
		{ "ModuleRelativePath", "Private/LiveLinkVirtualSource.h" },
		{ "ToolTip", "VirtualSubjectSource Settings to be able to differentiate from live sources and keep a name associated to the source" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::NewProp_SourceName_MetaData[] = {
		{ "ModuleRelativePath", "Private/LiveLinkVirtualSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkVirtualSubjectSourceSettings, SourceName), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::NewProp_SourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::NewProp_SourceName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::NewProp_SourceName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkVirtualSubjectSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::ClassParams = {
		&ULiveLinkVirtualSubjectSourceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkVirtualSubjectSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkVirtualSubjectSourceSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkVirtualSubjectSourceSettings.OuterSingleton;
	}
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkVirtualSubjectSourceSettings>()
	{
		return ULiveLinkVirtualSubjectSourceSettings::StaticClass();
	}
	ULiveLinkVirtualSubjectSourceSettings::ULiveLinkVirtualSubjectSourceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkVirtualSubjectSourceSettings);
	ULiveLinkVirtualSubjectSourceSettings::~ULiveLinkVirtualSubjectSourceSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkVirtualSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkVirtualSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkVirtualSubjectSourceSettings, ULiveLinkVirtualSubjectSourceSettings::StaticClass, TEXT("ULiveLinkVirtualSubjectSourceSettings"), &Z_Registration_Info_UClass_ULiveLinkVirtualSubjectSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkVirtualSubjectSourceSettings), 3602359171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkVirtualSource_h_1696021293(TEXT("/Script/LiveLink"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkVirtualSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Private_LiveLinkVirtualSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
