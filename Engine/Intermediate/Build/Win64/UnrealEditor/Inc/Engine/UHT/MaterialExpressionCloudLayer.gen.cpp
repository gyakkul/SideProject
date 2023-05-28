// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionCloudLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionCloudLayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionCloudSampleAttribute::StaticRegisterNativesUMaterialExpressionCloudSampleAttribute()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionCloudSampleAttribute);
	UClass* Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_NoRegister()
	{
		return UMaterialExpressionCloudSampleAttribute::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionCloudLayer.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCloudLayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionCloudSampleAttribute>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics::ClassParams = {
		&UMaterialExpressionCloudSampleAttribute::StaticClass,
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
		0x000000B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionCloudSampleAttribute.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionCloudSampleAttribute.OuterSingleton, Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionCloudSampleAttribute.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionCloudSampleAttribute>()
	{
		return UMaterialExpressionCloudSampleAttribute::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionCloudSampleAttribute);
	UMaterialExpressionCloudSampleAttribute::~UMaterialExpressionCloudSampleAttribute() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCloudLayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCloudLayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute, UMaterialExpressionCloudSampleAttribute::StaticClass, TEXT("UMaterialExpressionCloudSampleAttribute"), &Z_Registration_Info_UClass_UMaterialExpressionCloudSampleAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionCloudSampleAttribute), 338468448U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCloudLayer_h_2137353919(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCloudLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCloudLayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
