// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionDotProduct.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDotProduct() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDotProduct();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDotProduct_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionDotProduct::StaticRegisterNativesUMaterialExpressionDotProduct()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDotProduct);
	UClass* Z_Construct_UClass_UMaterialExpressionDotProduct_NoRegister()
	{
		return UMaterialExpressionDotProduct::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionDotProduct_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionDotProduct_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDotProduct_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDotProduct.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDotProduct.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDotProduct_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDotProduct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDotProduct_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDotProduct, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDotProduct_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDotProduct_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDotProduct_Statics::NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDotProduct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDotProduct_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDotProduct, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDotProduct_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDotProduct_Statics::NewProp_B_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDotProduct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDotProduct_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDotProduct_Statics::NewProp_B,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionDotProduct_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDotProduct>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDotProduct_Statics::ClassParams = {
		&UMaterialExpressionDotProduct::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionDotProduct_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDotProduct_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDotProduct_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDotProduct_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionDotProduct()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionDotProduct.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDotProduct.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDotProduct_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionDotProduct.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDotProduct>()
	{
		return UMaterialExpressionDotProduct::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDotProduct);
	UMaterialExpressionDotProduct::~UMaterialExpressionDotProduct() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDotProduct_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDotProduct_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDotProduct, UMaterialExpressionDotProduct::StaticClass, TEXT("UMaterialExpressionDotProduct"), &Z_Registration_Info_UClass_UMaterialExpressionDotProduct, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDotProduct), 889574270U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDotProduct_h_2253074360(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDotProduct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDotProduct_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
