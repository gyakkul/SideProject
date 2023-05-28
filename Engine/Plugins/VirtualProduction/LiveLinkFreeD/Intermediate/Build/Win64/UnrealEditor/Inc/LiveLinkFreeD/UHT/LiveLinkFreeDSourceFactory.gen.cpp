// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkFreeDSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkFreeDSourceFactory() {}
// Cross Module References
	LIVELINKFREED_API UClass* Z_Construct_UClass_ULiveLinkFreeDSourceFactory();
	LIVELINKFREED_API UClass* Z_Construct_UClass_ULiveLinkFreeDSourceFactory_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	UPackage* Z_Construct_UPackage__Script_LiveLinkFreeD();
// End Cross Module References
	void ULiveLinkFreeDSourceFactory::StaticRegisterNativesULiveLinkFreeDSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkFreeDSourceFactory);
	UClass* Z_Construct_UClass_ULiveLinkFreeDSourceFactory_NoRegister()
	{
		return ULiveLinkFreeDSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkFreeDSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkFreeDSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkFreeD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkFreeDSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkFreeDSourceFactory.h" },
		{ "ModuleRelativePath", "Public/LiveLinkFreeDSourceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkFreeDSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkFreeDSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkFreeDSourceFactory_Statics::ClassParams = {
		&ULiveLinkFreeDSourceFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkFreeDSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkFreeDSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkFreeDSourceFactory()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkFreeDSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkFreeDSourceFactory.OuterSingleton, Z_Construct_UClass_ULiveLinkFreeDSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkFreeDSourceFactory.OuterSingleton;
	}
	template<> LIVELINKFREED_API UClass* StaticClass<ULiveLinkFreeDSourceFactory>()
	{
		return ULiveLinkFreeDSourceFactory::StaticClass();
	}
	ULiveLinkFreeDSourceFactory::ULiveLinkFreeDSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkFreeDSourceFactory);
	ULiveLinkFreeDSourceFactory::~ULiveLinkFreeDSourceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkFreeD_Source_LiveLinkFreeD_Public_LiveLinkFreeDSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkFreeD_Source_LiveLinkFreeD_Public_LiveLinkFreeDSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkFreeDSourceFactory, ULiveLinkFreeDSourceFactory::StaticClass, TEXT("ULiveLinkFreeDSourceFactory"), &Z_Registration_Info_UClass_ULiveLinkFreeDSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkFreeDSourceFactory), 2490360366U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkFreeD_Source_LiveLinkFreeD_Public_LiveLinkFreeDSourceFactory_h_1597429053(TEXT("/Script/LiveLinkFreeD"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkFreeD_Source_LiveLinkFreeD_Public_LiveLinkFreeDSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkFreeD_Source_LiveLinkFreeD_Public_LiveLinkFreeDSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
