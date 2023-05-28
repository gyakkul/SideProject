// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionParticleSpeed.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionParticleSpeed() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleSpeed();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParticleSpeed_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionParticleSpeed::StaticRegisterNativesUMaterialExpressionParticleSpeed()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionParticleSpeed);
	UClass* Z_Construct_UClass_UMaterialExpressionParticleSpeed_NoRegister()
	{
		return UMaterialExpressionParticleSpeed::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionParticleSpeed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionParticleSpeed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionParticleSpeed_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionParticleSpeed.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionParticleSpeed.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionParticleSpeed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionParticleSpeed>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionParticleSpeed_Statics::ClassParams = {
		&UMaterialExpressionParticleSpeed::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionParticleSpeed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionParticleSpeed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionParticleSpeed()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionParticleSpeed.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionParticleSpeed.OuterSingleton, Z_Construct_UClass_UMaterialExpressionParticleSpeed_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionParticleSpeed.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionParticleSpeed>()
	{
		return UMaterialExpressionParticleSpeed::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionParticleSpeed);
	UMaterialExpressionParticleSpeed::~UMaterialExpressionParticleSpeed() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSpeed_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSpeed_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionParticleSpeed, UMaterialExpressionParticleSpeed::StaticClass, TEXT("UMaterialExpressionParticleSpeed"), &Z_Registration_Info_UClass_UMaterialExpressionParticleSpeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionParticleSpeed), 3999049854U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSpeed_h_1785666578(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSpeed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSpeed_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
