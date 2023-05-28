// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionTextureSampleParameterCube.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureSampleParameterCube() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCube();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCube_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionTextureSampleParameterCube::StaticRegisterNativesUMaterialExpressionTextureSampleParameterCube()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTextureSampleParameterCube);
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCube_NoRegister()
	{
		return UMaterialExpressionTextureSampleParameterCube::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCube_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureSampleParameterCube.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameterCube.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureSampleParameterCube>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCube_Statics::ClassParams = {
		&UMaterialExpressionTextureSampleParameterCube::StaticClass,
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
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCube_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCube()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterCube.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterCube.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCube_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterCube.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTextureSampleParameterCube>()
	{
		return UMaterialExpressionTextureSampleParameterCube::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureSampleParameterCube);
	UMaterialExpressionTextureSampleParameterCube::~UMaterialExpressionTextureSampleParameterCube() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterCube_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterCube_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTextureSampleParameterCube, UMaterialExpressionTextureSampleParameterCube::StaticClass, TEXT("UMaterialExpressionTextureSampleParameterCube"), &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterCube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTextureSampleParameterCube), 1602423442U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterCube_h_3531705201(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterCube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameterCube_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
