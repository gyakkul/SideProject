// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionParticleRadius.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionParticleRadius() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleRadius();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleRadius_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionParticleRadius::StaticRegisterNativesUMaterialExpressionParticleRadius()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionParticleRadius);
	UClass* Z_Construct_UClass_UMaterialExpressionParticleRadius_NoRegister()
	{
		return UMaterialExpressionParticleRadius::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionParticleRadius_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionParticleRadius_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionParticleRadius_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionParticleRadius.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionParticleRadius.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionParticleRadius_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionParticleRadius>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionParticleRadius_Statics::ClassParams = {
		&UMaterialExpressionParticleRadius::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionParticleRadius_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleRadius_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionParticleRadius()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionParticleRadius.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionParticleRadius.OuterSingleton, Z_Construct_UClass_UMaterialExpressionParticleRadius_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionParticleRadius.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionParticleRadius>()
	{
		return UMaterialExpressionParticleRadius::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionParticleRadius);
	UMaterialExpressionParticleRadius::~UMaterialExpressionParticleRadius() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleRadius_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleRadius_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionParticleRadius, UMaterialExpressionParticleRadius::StaticClass, TEXT("UMaterialExpressionParticleRadius"), &Z_Registration_Info_UClass_UMaterialExpressionParticleRadius, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionParticleRadius), 2664632891U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleRadius_h_2293031683(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleRadius_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleRadius_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
