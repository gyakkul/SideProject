// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionVertexColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionVertexColor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVertexColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVertexColor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionVertexColor::StaticRegisterNativesUMaterialExpressionVertexColor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionVertexColor);
	UClass* Z_Construct_UClass_UMaterialExpressionVertexColor_NoRegister()
	{
		return UMaterialExpressionVertexColor::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionVertexColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionVertexColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVertexColor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionVertexColor.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVertexColor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionVertexColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVertexColor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVertexColor_Statics::ClassParams = {
		&UMaterialExpressionVertexColor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVertexColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVertexColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionVertexColor()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionVertexColor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionVertexColor.OuterSingleton, Z_Construct_UClass_UMaterialExpressionVertexColor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionVertexColor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionVertexColor>()
	{
		return UMaterialExpressionVertexColor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVertexColor);
	UMaterialExpressionVertexColor::~UMaterialExpressionVertexColor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexColor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexColor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionVertexColor, UMaterialExpressionVertexColor::StaticClass, TEXT("UMaterialExpressionVertexColor"), &Z_Registration_Info_UClass_UMaterialExpressionVertexColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionVertexColor), 2994940365U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexColor_h_691171364(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexColor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
