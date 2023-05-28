// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlendSpaceMotionAnalysis.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendSpaceMotionAnalysis() {}
// Cross Module References
	BLENDSPACEMOTIONANALYSIS_API UClass* Z_Construct_UClass_UCachedMotionAnalysisProperties();
	BLENDSPACEMOTIONANALYSIS_API UClass* Z_Construct_UClass_UCachedMotionAnalysisProperties_NoRegister();
	PERSONA_API UClass* Z_Construct_UClass_UCachedAnalysisProperties();
	UPackage* Z_Construct_UPackage__Script_BlendSpaceMotionAnalysis();
// End Cross Module References
	void UCachedMotionAnalysisProperties::StaticRegisterNativesUCachedMotionAnalysisProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCachedMotionAnalysisProperties);
	UClass* Z_Construct_UClass_UCachedMotionAnalysisProperties_NoRegister()
	{
		return UCachedMotionAnalysisProperties::StaticClass();
	}
	struct Z_Construct_UClass_UCachedMotionAnalysisProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCachedMotionAnalysisProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCachedAnalysisProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_BlendSpaceMotionAnalysis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCachedMotionAnalysisProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//======================================================================================================================\n" },
		{ "IncludePath", "BlendSpaceMotionAnalysis.h" },
		{ "ModuleRelativePath", "Public/BlendSpaceMotionAnalysis.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCachedMotionAnalysisProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCachedMotionAnalysisProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCachedMotionAnalysisProperties_Statics::ClassParams = {
		&UCachedMotionAnalysisProperties::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCachedMotionAnalysisProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCachedMotionAnalysisProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCachedMotionAnalysisProperties()
	{
		if (!Z_Registration_Info_UClass_UCachedMotionAnalysisProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCachedMotionAnalysisProperties.OuterSingleton, Z_Construct_UClass_UCachedMotionAnalysisProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCachedMotionAnalysisProperties.OuterSingleton;
	}
	template<> BLENDSPACEMOTIONANALYSIS_API UClass* StaticClass<UCachedMotionAnalysisProperties>()
	{
		return UCachedMotionAnalysisProperties::StaticClass();
	}
	UCachedMotionAnalysisProperties::UCachedMotionAnalysisProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCachedMotionAnalysisProperties);
	UCachedMotionAnalysisProperties::~UCachedMotionAnalysisProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_BlendSpaceMotionAnalysis_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_BlendSpaceMotionAnalysis_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCachedMotionAnalysisProperties, UCachedMotionAnalysisProperties::StaticClass, TEXT("UCachedMotionAnalysisProperties"), &Z_Registration_Info_UClass_UCachedMotionAnalysisProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCachedMotionAnalysisProperties), 643541788U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_BlendSpaceMotionAnalysis_h_3843484899(TEXT("/Script/BlendSpaceMotionAnalysis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_BlendSpaceMotionAnalysis_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_BlendSpaceMotionAnalysis_Source_BlendSpaceMotionAnalysis_Public_BlendSpaceMotionAnalysis_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
