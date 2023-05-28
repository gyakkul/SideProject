// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionParticleMotionBlurFade.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionParticleMotionBlurFade() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionParticleMotionBlurFade::StaticRegisterNativesUMaterialExpressionParticleMotionBlurFade()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionParticleMotionBlurFade);
	UClass* Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade_NoRegister()
	{
		return UMaterialExpressionParticleMotionBlurFade::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionParticleMotionBlurFade.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionParticleMotionBlurFade.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionParticleMotionBlurFade>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade_Statics::ClassParams = {
		&UMaterialExpressionParticleMotionBlurFade::StaticClass,
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
		0x000020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionParticleMotionBlurFade.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionParticleMotionBlurFade.OuterSingleton, Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionParticleMotionBlurFade.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionParticleMotionBlurFade>()
	{
		return UMaterialExpressionParticleMotionBlurFade::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionParticleMotionBlurFade);
	UMaterialExpressionParticleMotionBlurFade::~UMaterialExpressionParticleMotionBlurFade() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleMotionBlurFade_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleMotionBlurFade_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionParticleMotionBlurFade, UMaterialExpressionParticleMotionBlurFade::StaticClass, TEXT("UMaterialExpressionParticleMotionBlurFade"), &Z_Registration_Info_UClass_UMaterialExpressionParticleMotionBlurFade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionParticleMotionBlurFade), 3956690001U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleMotionBlurFade_h_2490687339(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleMotionBlurFade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleMotionBlurFade_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
