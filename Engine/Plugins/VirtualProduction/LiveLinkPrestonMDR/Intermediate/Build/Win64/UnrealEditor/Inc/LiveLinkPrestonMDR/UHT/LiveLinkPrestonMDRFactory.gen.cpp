// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkPrestonMDRFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkPrestonMDRFactory() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	LIVELINKPRESTONMDR_API UClass* Z_Construct_UClass_ULiveLinkPrestonMDRSourceFactory();
	LIVELINKPRESTONMDR_API UClass* Z_Construct_UClass_ULiveLinkPrestonMDRSourceFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkPrestonMDR();
// End Cross Module References
	void ULiveLinkPrestonMDRSourceFactory::StaticRegisterNativesULiveLinkPrestonMDRSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkPrestonMDRSourceFactory);
	UClass* Z_Construct_UClass_ULiveLinkPrestonMDRSourceFactory_NoRegister()
	{
		return ULiveLinkPrestonMDRSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkPrestonMDRSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkPrestonMDRSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkPrestonMDR,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkPrestonMDRSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkPrestonMDRFactory.h" },
		{ "ModuleRelativePath", "Public/LiveLinkPrestonMDRFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkPrestonMDRSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkPrestonMDRSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkPrestonMDRSourceFactory_Statics::ClassParams = {
		&ULiveLinkPrestonMDRSourceFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkPrestonMDRSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPrestonMDRSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkPrestonMDRSourceFactory()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkPrestonMDRSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkPrestonMDRSourceFactory.OuterSingleton, Z_Construct_UClass_ULiveLinkPrestonMDRSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkPrestonMDRSourceFactory.OuterSingleton;
	}
	template<> LIVELINKPRESTONMDR_API UClass* StaticClass<ULiveLinkPrestonMDRSourceFactory>()
	{
		return ULiveLinkPrestonMDRSourceFactory::StaticClass();
	}
	ULiveLinkPrestonMDRSourceFactory::ULiveLinkPrestonMDRSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkPrestonMDRSourceFactory);
	ULiveLinkPrestonMDRSourceFactory::~ULiveLinkPrestonMDRSourceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Public_LiveLinkPrestonMDRFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Public_LiveLinkPrestonMDRFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkPrestonMDRSourceFactory, ULiveLinkPrestonMDRSourceFactory::StaticClass, TEXT("ULiveLinkPrestonMDRSourceFactory"), &Z_Registration_Info_UClass_ULiveLinkPrestonMDRSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkPrestonMDRSourceFactory), 144159591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Public_LiveLinkPrestonMDRFactory_h_2583489695(TEXT("/Script/LiveLinkPrestonMDR"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Public_LiveLinkPrestonMDRFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Public_LiveLinkPrestonMDRFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
