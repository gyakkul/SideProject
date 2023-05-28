// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMasterLockitFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMasterLockitFactory() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	LIVELINKMASTERLOCKIT_API UClass* Z_Construct_UClass_ULiveLinkMasterLockitSourceFactory();
	LIVELINKMASTERLOCKIT_API UClass* Z_Construct_UClass_ULiveLinkMasterLockitSourceFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkMasterLockit();
// End Cross Module References
	void ULiveLinkMasterLockitSourceFactory::StaticRegisterNativesULiveLinkMasterLockitSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkMasterLockitSourceFactory);
	UClass* Z_Construct_UClass_ULiveLinkMasterLockitSourceFactory_NoRegister()
	{
		return ULiveLinkMasterLockitSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkMasterLockitSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkMasterLockitSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMasterLockit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkMasterLockitSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkMasterLockitFactory.h" },
		{ "ModuleRelativePath", "Public/LiveLinkMasterLockitFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkMasterLockitSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkMasterLockitSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkMasterLockitSourceFactory_Statics::ClassParams = {
		&ULiveLinkMasterLockitSourceFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkMasterLockitSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMasterLockitSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkMasterLockitSourceFactory()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkMasterLockitSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkMasterLockitSourceFactory.OuterSingleton, Z_Construct_UClass_ULiveLinkMasterLockitSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkMasterLockitSourceFactory.OuterSingleton;
	}
	template<> LIVELINKMASTERLOCKIT_API UClass* StaticClass<ULiveLinkMasterLockitSourceFactory>()
	{
		return ULiveLinkMasterLockitSourceFactory::StaticClass();
	}
	ULiveLinkMasterLockitSourceFactory::ULiveLinkMasterLockitSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkMasterLockitSourceFactory);
	ULiveLinkMasterLockitSourceFactory::~ULiveLinkMasterLockitSourceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkMasterLockit_Source_LiveLinkMasterLockit_Public_LiveLinkMasterLockitFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkMasterLockit_Source_LiveLinkMasterLockit_Public_LiveLinkMasterLockitFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkMasterLockitSourceFactory, ULiveLinkMasterLockitSourceFactory::StaticClass, TEXT("ULiveLinkMasterLockitSourceFactory"), &Z_Registration_Info_UClass_ULiveLinkMasterLockitSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkMasterLockitSourceFactory), 2640322535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkMasterLockit_Source_LiveLinkMasterLockit_Public_LiveLinkMasterLockitFactory_h_2465349458(TEXT("/Script/LiveLinkMasterLockit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkMasterLockit_Source_LiveLinkMasterLockit_Public_LiveLinkMasterLockitFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkMasterLockit_Source_LiveLinkMasterLockit_Public_LiveLinkMasterLockitFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
