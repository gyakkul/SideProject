// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionObjectRadius.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionObjectRadius() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectRadius();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectRadius_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionObjectRadius::StaticRegisterNativesUMaterialExpressionObjectRadius()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionObjectRadius);
	UClass* Z_Construct_UClass_UMaterialExpressionObjectRadius_NoRegister()
	{
		return UMaterialExpressionObjectRadius::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionObjectRadius_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionObjectRadius_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionObjectRadius_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionObjectRadius.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionObjectRadius.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionObjectRadius_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionObjectRadius>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionObjectRadius_Statics::ClassParams = {
		&UMaterialExpressionObjectRadius::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionObjectRadius_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionObjectRadius_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionObjectRadius()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionObjectRadius.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionObjectRadius.OuterSingleton, Z_Construct_UClass_UMaterialExpressionObjectRadius_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionObjectRadius.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionObjectRadius>()
	{
		return UMaterialExpressionObjectRadius::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionObjectRadius);
	UMaterialExpressionObjectRadius::~UMaterialExpressionObjectRadius() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectRadius_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectRadius_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionObjectRadius, UMaterialExpressionObjectRadius::StaticClass, TEXT("UMaterialExpressionObjectRadius"), &Z_Registration_Info_UClass_UMaterialExpressionObjectRadius, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionObjectRadius), 1322537973U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectRadius_h_1440503522(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectRadius_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectRadius_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
