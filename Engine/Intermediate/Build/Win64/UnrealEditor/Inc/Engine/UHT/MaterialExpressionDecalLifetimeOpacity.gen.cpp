// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionDecalLifetimeOpacity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDecalLifetimeOpacity() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionDecalLifetimeOpacity::StaticRegisterNativesUMaterialExpressionDecalLifetimeOpacity()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDecalLifetimeOpacity);
	UClass* Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_NoRegister()
	{
		return UMaterialExpressionDecalLifetimeOpacity::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDecalLifetimeOpacity.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDecalLifetimeOpacity.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDecalLifetimeOpacity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics::ClassParams = {
		&UMaterialExpressionDecalLifetimeOpacity::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionDecalLifetimeOpacity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDecalLifetimeOpacity.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionDecalLifetimeOpacity.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDecalLifetimeOpacity>()
	{
		return UMaterialExpressionDecalLifetimeOpacity::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDecalLifetimeOpacity);
	UMaterialExpressionDecalLifetimeOpacity::~UMaterialExpressionDecalLifetimeOpacity() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalLifetimeOpacity_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalLifetimeOpacity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity, UMaterialExpressionDecalLifetimeOpacity::StaticClass, TEXT("UMaterialExpressionDecalLifetimeOpacity"), &Z_Registration_Info_UClass_UMaterialExpressionDecalLifetimeOpacity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDecalLifetimeOpacity), 628160157U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalLifetimeOpacity_h_2230530596(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalLifetimeOpacity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalLifetimeOpacity_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
