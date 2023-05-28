// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionTextureSampleParameter2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureSampleParameter2D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionTextureSampleParameter2D::StaticRegisterNativesUMaterialExpressionTextureSampleParameter2D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTextureSampleParameter2D);
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D_NoRegister()
	{
		return UMaterialExpressionTextureSampleParameter2D::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureSampleParameter2D.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameter2D.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureSampleParameter2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D_Statics::ClassParams = {
		&UMaterialExpressionTextureSampleParameter2D::StaticClass,
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
		0x001020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter2D.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter2D.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTextureSampleParameter2D>()
	{
		return UMaterialExpressionTextureSampleParameter2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureSampleParameter2D);
	UMaterialExpressionTextureSampleParameter2D::~UMaterialExpressionTextureSampleParameter2D() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameter2D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameter2D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D, UMaterialExpressionTextureSampleParameter2D::StaticClass, TEXT("UMaterialExpressionTextureSampleParameter2D"), &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameter2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTextureSampleParameter2D), 3660834009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameter2D_h_1837171811(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameter2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameter2D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
