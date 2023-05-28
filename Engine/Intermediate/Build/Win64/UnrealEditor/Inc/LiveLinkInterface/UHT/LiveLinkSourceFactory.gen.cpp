// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkSourceFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	void ULiveLinkSourceFactory::StaticRegisterNativesULiveLinkSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkSourceFactory);
	UClass* Z_Construct_UClass_ULiveLinkSourceFactory_NoRegister()
	{
		return ULiveLinkSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class of factory that creates Source. A source can be created in the editor via the Live Link panel or at runtime via a connection string.\n */" },
		{ "IncludePath", "LiveLinkSourceFactory.h" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceFactory.h" },
		{ "ToolTip", "Base class of factory that creates Source. A source can be created in the editor via the Live Link panel or at runtime via a connection string." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkSourceFactory_Statics::ClassParams = {
		&ULiveLinkSourceFactory::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkSourceFactory()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkSourceFactory.OuterSingleton, Z_Construct_UClass_ULiveLinkSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkSourceFactory.OuterSingleton;
	}
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkSourceFactory>()
	{
		return ULiveLinkSourceFactory::StaticClass();
	}
	ULiveLinkSourceFactory::ULiveLinkSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkSourceFactory);
	ULiveLinkSourceFactory::~ULiveLinkSourceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkSourceFactory, ULiveLinkSourceFactory::StaticClass, TEXT("ULiveLinkSourceFactory"), &Z_Registration_Info_UClass_ULiveLinkSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkSourceFactory), 1542331569U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceFactory_h_329483016(TEXT("/Script/LiveLinkInterface"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
