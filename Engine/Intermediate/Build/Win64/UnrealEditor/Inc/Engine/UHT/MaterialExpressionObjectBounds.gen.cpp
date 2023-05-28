// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionObjectBounds.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionObjectBounds() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectBounds();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectBounds_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionObjectBounds::StaticRegisterNativesUMaterialExpressionObjectBounds()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionObjectBounds);
	UClass* Z_Construct_UClass_UMaterialExpressionObjectBounds_NoRegister()
	{
		return UMaterialExpressionObjectBounds::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionObjectBounds_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionObjectBounds_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionObjectBounds_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionObjectBounds.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionObjectBounds.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionObjectBounds_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionObjectBounds>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionObjectBounds_Statics::ClassParams = {
		&UMaterialExpressionObjectBounds::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionObjectBounds_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionObjectBounds_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionObjectBounds()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionObjectBounds.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionObjectBounds.OuterSingleton, Z_Construct_UClass_UMaterialExpressionObjectBounds_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionObjectBounds.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionObjectBounds>()
	{
		return UMaterialExpressionObjectBounds::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionObjectBounds);
	UMaterialExpressionObjectBounds::~UMaterialExpressionObjectBounds() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectBounds_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectBounds_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionObjectBounds, UMaterialExpressionObjectBounds::StaticClass, TEXT("UMaterialExpressionObjectBounds"), &Z_Registration_Info_UClass_UMaterialExpressionObjectBounds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionObjectBounds), 1927284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectBounds_h_2542522996(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectBounds_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectBounds_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
