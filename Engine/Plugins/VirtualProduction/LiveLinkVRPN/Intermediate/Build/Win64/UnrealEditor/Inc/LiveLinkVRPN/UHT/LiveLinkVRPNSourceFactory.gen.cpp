// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Source/LiveLinkVRPN/Public/LiveLinkVRPNSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkVRPNSourceFactory() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	LIVELINKVRPN_API UClass* Z_Construct_UClass_ULiveLinkVRPNSourceFactory();
	LIVELINKVRPN_API UClass* Z_Construct_UClass_ULiveLinkVRPNSourceFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkVRPN();
// End Cross Module References
	void ULiveLinkVRPNSourceFactory::StaticRegisterNativesULiveLinkVRPNSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkVRPNSourceFactory);
	UClass* Z_Construct_UClass_ULiveLinkVRPNSourceFactory_NoRegister()
	{
		return ULiveLinkVRPNSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkVRPNSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkVRPNSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkVRPN,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkVRPNSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkVRPNSourceFactory.h" },
		{ "ModuleRelativePath", "Public/LiveLinkVRPNSourceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkVRPNSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkVRPNSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkVRPNSourceFactory_Statics::ClassParams = {
		&ULiveLinkVRPNSourceFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkVRPNSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVRPNSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkVRPNSourceFactory()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkVRPNSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkVRPNSourceFactory.OuterSingleton, Z_Construct_UClass_ULiveLinkVRPNSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkVRPNSourceFactory.OuterSingleton;
	}
	template<> LIVELINKVRPN_API UClass* StaticClass<ULiveLinkVRPNSourceFactory>()
	{
		return ULiveLinkVRPNSourceFactory::StaticClass();
	}
	ULiveLinkVRPNSourceFactory::ULiveLinkVRPNSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkVRPNSourceFactory);
	ULiveLinkVRPNSourceFactory::~ULiveLinkVRPNSourceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkVRPNSourceFactory, ULiveLinkVRPNSourceFactory::StaticClass, TEXT("ULiveLinkVRPNSourceFactory"), &Z_Registration_Info_UClass_ULiveLinkVRPNSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkVRPNSourceFactory), 2851903030U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceFactory_h_2310489481(TEXT("/Script/LiveLinkVRPN"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
