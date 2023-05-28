// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionSceneTexelSize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSceneTexelSize() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneTexelSize();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneTexelSize_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionSceneTexelSize::StaticRegisterNativesUMaterialExpressionSceneTexelSize()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSceneTexelSize);
	UClass* Z_Construct_UClass_UMaterialExpressionSceneTexelSize_NoRegister()
	{
		return UMaterialExpressionSceneTexelSize::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSceneTexelSize_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSceneTexelSize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneTexelSize_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSceneTexelSize.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneTexelSize.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSceneTexelSize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSceneTexelSize>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSceneTexelSize_Statics::ClassParams = {
		&UMaterialExpressionSceneTexelSize::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneTexelSize_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneTexelSize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSceneTexelSize()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSceneTexelSize.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSceneTexelSize.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSceneTexelSize_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSceneTexelSize.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSceneTexelSize>()
	{
		return UMaterialExpressionSceneTexelSize::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSceneTexelSize);
	UMaterialExpressionSceneTexelSize::~UMaterialExpressionSceneTexelSize() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexelSize_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexelSize_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSceneTexelSize, UMaterialExpressionSceneTexelSize::StaticClass, TEXT("UMaterialExpressionSceneTexelSize"), &Z_Registration_Info_UClass_UMaterialExpressionSceneTexelSize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSceneTexelSize), 946633624U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexelSize_h_720274328(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexelSize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexelSize_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
