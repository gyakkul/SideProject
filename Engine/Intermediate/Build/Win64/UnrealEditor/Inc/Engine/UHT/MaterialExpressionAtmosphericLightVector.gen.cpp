// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionAtmosphericLightVector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionAtmosphericLightVector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionAtmosphericLightVector::StaticRegisterNativesUMaterialExpressionAtmosphericLightVector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionAtmosphericLightVector);
	UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_NoRegister()
	{
		return UMaterialExpressionAtmosphericLightVector::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Atmosphere Sun Light Vector" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionAtmosphericLightVector.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAtmosphericLightVector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionAtmosphericLightVector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_Statics::ClassParams = {
		&UMaterialExpressionAtmosphericLightVector::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightVector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightVector.OuterSingleton, Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightVector.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionAtmosphericLightVector>()
	{
		return UMaterialExpressionAtmosphericLightVector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionAtmosphericLightVector);
	UMaterialExpressionAtmosphericLightVector::~UMaterialExpressionAtmosphericLightVector() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericLightVector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericLightVector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector, UMaterialExpressionAtmosphericLightVector::StaticClass, TEXT("UMaterialExpressionAtmosphericLightVector"), &Z_Registration_Info_UClass_UMaterialExpressionAtmosphericLightVector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionAtmosphericLightVector), 904352853U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericLightVector_h_3204893894(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericLightVector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericLightVector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
