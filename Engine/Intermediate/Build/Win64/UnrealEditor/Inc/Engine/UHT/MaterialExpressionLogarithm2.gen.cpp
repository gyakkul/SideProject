// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionLogarithm2.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLogarithm2() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLogarithm2();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLogarithm2_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionLogarithm2::StaticRegisterNativesUMaterialExpressionLogarithm2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionLogarithm2);
	UClass* Z_Construct_UClass_UMaterialExpressionLogarithm2_NoRegister()
	{
		return UMaterialExpressionLogarithm2::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_X;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionLogarithm2.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLogarithm2.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLogarithm2.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLogarithm2, X), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::NewProp_X_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::NewProp_X,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLogarithm2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::ClassParams = {
		&UMaterialExpressionLogarithm2::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionLogarithm2()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionLogarithm2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionLogarithm2.OuterSingleton, Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionLogarithm2.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionLogarithm2>()
	{
		return UMaterialExpressionLogarithm2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLogarithm2);
	UMaterialExpressionLogarithm2::~UMaterialExpressionLogarithm2() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLogarithm2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLogarithm2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionLogarithm2, UMaterialExpressionLogarithm2::StaticClass, TEXT("UMaterialExpressionLogarithm2"), &Z_Registration_Info_UClass_UMaterialExpressionLogarithm2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionLogarithm2), 1598959983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLogarithm2_h_3650236441(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLogarithm2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLogarithm2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
