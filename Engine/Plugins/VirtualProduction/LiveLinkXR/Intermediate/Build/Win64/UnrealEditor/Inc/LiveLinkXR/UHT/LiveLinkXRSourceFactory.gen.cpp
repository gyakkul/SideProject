// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkXRSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkXRSourceFactory() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	LIVELINKXR_API UClass* Z_Construct_UClass_ULiveLinkXRSourceFactory();
	LIVELINKXR_API UClass* Z_Construct_UClass_ULiveLinkXRSourceFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkXR();
// End Cross Module References
	void ULiveLinkXRSourceFactory::StaticRegisterNativesULiveLinkXRSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkXRSourceFactory);
	UClass* Z_Construct_UClass_ULiveLinkXRSourceFactory_NoRegister()
	{
		return ULiveLinkXRSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkXRSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkXRSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkXR,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkXRSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkXRSourceFactory.h" },
		{ "ModuleRelativePath", "Public/LiveLinkXRSourceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkXRSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkXRSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkXRSourceFactory_Statics::ClassParams = {
		&ULiveLinkXRSourceFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkXRSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkXRSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkXRSourceFactory()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkXRSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkXRSourceFactory.OuterSingleton, Z_Construct_UClass_ULiveLinkXRSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkXRSourceFactory.OuterSingleton;
	}
	template<> LIVELINKXR_API UClass* StaticClass<ULiveLinkXRSourceFactory>()
	{
		return ULiveLinkXRSourceFactory::StaticClass();
	}
	ULiveLinkXRSourceFactory::ULiveLinkXRSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkXRSourceFactory);
	ULiveLinkXRSourceFactory::~ULiveLinkXRSourceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkXRSourceFactory, ULiveLinkXRSourceFactory::StaticClass, TEXT("ULiveLinkXRSourceFactory"), &Z_Registration_Info_UClass_ULiveLinkXRSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkXRSourceFactory), 3514902763U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceFactory_h_3752186512(TEXT("/Script/LiveLinkXR"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkXR_Source_LiveLinkXR_Public_LiveLinkXRSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
