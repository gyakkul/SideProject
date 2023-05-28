// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionParticleRandom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionParticleRandom() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleRandom();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleRandom_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionParticleRandom::StaticRegisterNativesUMaterialExpressionParticleRandom()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionParticleRandom);
	UClass* Z_Construct_UClass_UMaterialExpressionParticleRandom_NoRegister()
	{
		return UMaterialExpressionParticleRandom::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionParticleRandom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionParticleRandom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionParticleRandom_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionParticleRandom.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionParticleRandom.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionParticleRandom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionParticleRandom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionParticleRandom_Statics::ClassParams = {
		&UMaterialExpressionParticleRandom::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionParticleRandom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleRandom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionParticleRandom()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionParticleRandom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionParticleRandom.OuterSingleton, Z_Construct_UClass_UMaterialExpressionParticleRandom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionParticleRandom.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionParticleRandom>()
	{
		return UMaterialExpressionParticleRandom::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionParticleRandom);
	UMaterialExpressionParticleRandom::~UMaterialExpressionParticleRandom() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleRandom_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleRandom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionParticleRandom, UMaterialExpressionParticleRandom::StaticClass, TEXT("UMaterialExpressionParticleRandom"), &Z_Registration_Info_UClass_UMaterialExpressionParticleRandom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionParticleRandom), 374432691U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleRandom_h_387113759(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleRandom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleRandom_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
