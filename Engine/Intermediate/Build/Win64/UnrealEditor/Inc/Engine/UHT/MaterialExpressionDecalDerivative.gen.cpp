// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionDecalDerivative.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDecalDerivative() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDecalDerivative();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDecalDerivative_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionDecalDerivative::StaticRegisterNativesUMaterialExpressionDecalDerivative()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDecalDerivative);
	UClass* Z_Construct_UClass_UMaterialExpressionDecalDerivative_NoRegister()
	{
		return UMaterialExpressionDecalDerivative::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionDecalDerivative_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionDecalDerivative_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDecalDerivative_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDecalDerivative.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDecalDerivative.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionDecalDerivative_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDecalDerivative>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDecalDerivative_Statics::ClassParams = {
		&UMaterialExpressionDecalDerivative::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDecalDerivative_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalDerivative_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionDecalDerivative()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionDecalDerivative.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDecalDerivative.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDecalDerivative_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionDecalDerivative.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDecalDerivative>()
	{
		return UMaterialExpressionDecalDerivative::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDecalDerivative);
	UMaterialExpressionDecalDerivative::~UMaterialExpressionDecalDerivative() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalDerivative_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalDerivative_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDecalDerivative, UMaterialExpressionDecalDerivative::StaticClass, TEXT("UMaterialExpressionDecalDerivative"), &Z_Registration_Info_UClass_UMaterialExpressionDecalDerivative, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDecalDerivative), 3680670221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalDerivative_h_3425827854(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalDerivative_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalDerivative_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
