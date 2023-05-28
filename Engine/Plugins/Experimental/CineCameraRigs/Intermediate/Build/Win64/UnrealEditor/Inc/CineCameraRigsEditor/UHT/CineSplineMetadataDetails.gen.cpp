// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../CineCameraRigsEditor/Private/CineSplineMetadataDetails.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCineSplineMetadataDetails() {}
// Cross Module References
	CINECAMERARIGSEDITOR_API UClass* Z_Construct_UClass_UCineSplineMetadataDetailsFactory();
	CINECAMERARIGSEDITOR_API UClass* Z_Construct_UClass_UCineSplineMetadataDetailsFactory_NoRegister();
	DETAILCUSTOMIZATIONS_API UClass* Z_Construct_UClass_USplineMetadataDetailsFactoryBase();
	UPackage* Z_Construct_UPackage__Script_CineCameraRigsEditor();
// End Cross Module References
	void UCineSplineMetadataDetailsFactory::StaticRegisterNativesUCineSplineMetadataDetailsFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCineSplineMetadataDetailsFactory);
	UClass* Z_Construct_UClass_UCineSplineMetadataDetailsFactory_NoRegister()
	{
		return UCineSplineMetadataDetailsFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCineSplineMetadataDetailsFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCineSplineMetadataDetailsFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineMetadataDetailsFactoryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CineCameraRigsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineSplineMetadataDetailsFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CineSplineMetadataDetails.h" },
		{ "ModuleRelativePath", "Private/CineSplineMetadataDetails.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCineSplineMetadataDetailsFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCineSplineMetadataDetailsFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCineSplineMetadataDetailsFactory_Statics::ClassParams = {
		&UCineSplineMetadataDetailsFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCineSplineMetadataDetailsFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCineSplineMetadataDetailsFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCineSplineMetadataDetailsFactory()
	{
		if (!Z_Registration_Info_UClass_UCineSplineMetadataDetailsFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCineSplineMetadataDetailsFactory.OuterSingleton, Z_Construct_UClass_UCineSplineMetadataDetailsFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCineSplineMetadataDetailsFactory.OuterSingleton;
	}
	template<> CINECAMERARIGSEDITOR_API UClass* StaticClass<UCineSplineMetadataDetailsFactory>()
	{
		return UCineSplineMetadataDetailsFactory::StaticClass();
	}
	UCineSplineMetadataDetailsFactory::UCineSplineMetadataDetailsFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCineSplineMetadataDetailsFactory);
	UCineSplineMetadataDetailsFactory::~UCineSplineMetadataDetailsFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigsEditor_Private_CineSplineMetadataDetails_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigsEditor_Private_CineSplineMetadataDetails_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCineSplineMetadataDetailsFactory, UCineSplineMetadataDetailsFactory::StaticClass, TEXT("UCineSplineMetadataDetailsFactory"), &Z_Registration_Info_UClass_UCineSplineMetadataDetailsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCineSplineMetadataDetailsFactory), 3866197933U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigsEditor_Private_CineSplineMetadataDetails_h_2267885274(TEXT("/Script/CineCameraRigsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigsEditor_Private_CineSplineMetadataDetails_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigsEditor_Private_CineSplineMetadataDetails_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
