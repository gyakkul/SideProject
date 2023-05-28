// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMessageBusSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMessageBusSourceFactory() {}
// Cross Module References
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceFactory();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
	void ULiveLinkMessageBusSourceFactory::StaticRegisterNativesULiveLinkMessageBusSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkMessageBusSourceFactory);
	UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_NoRegister()
	{
		return ULiveLinkMessageBusSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkMessageBusSourceFactory.h" },
		{ "ModuleRelativePath", "Public/LiveLinkMessageBusSourceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkMessageBusSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics::ClassParams = {
		&ULiveLinkMessageBusSourceFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceFactory()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkMessageBusSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkMessageBusSourceFactory.OuterSingleton, Z_Construct_UClass_ULiveLinkMessageBusSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkMessageBusSourceFactory.OuterSingleton;
	}
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkMessageBusSourceFactory>()
	{
		return ULiveLinkMessageBusSourceFactory::StaticClass();
	}
	ULiveLinkMessageBusSourceFactory::ULiveLinkMessageBusSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkMessageBusSourceFactory);
	ULiveLinkMessageBusSourceFactory::~ULiveLinkMessageBusSourceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkMessageBusSourceFactory, ULiveLinkMessageBusSourceFactory::StaticClass, TEXT("ULiveLinkMessageBusSourceFactory"), &Z_Registration_Info_UClass_ULiveLinkMessageBusSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkMessageBusSourceFactory), 2092671507U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceFactory_h_1641951145(TEXT("/Script/LiveLink"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
