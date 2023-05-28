// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionNormalize.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionNormalize() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNormalize();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNormalize_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionNormalize::StaticRegisterNativesUMaterialExpressionNormalize()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionNormalize);
	UClass* Z_Construct_UClass_UMaterialExpressionNormalize_NoRegister()
	{
		return UMaterialExpressionNormalize::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionNormalize_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionNormalize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNormalize_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionNormalize.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNormalize.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNormalize_Statics::NewProp_VectorInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNormalize.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNormalize_Statics::NewProp_VectorInput = { "VectorInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionNormalize, VectorInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNormalize_Statics::NewProp_VectorInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNormalize_Statics::NewProp_VectorInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionNormalize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNormalize_Statics::NewProp_VectorInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionNormalize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionNormalize>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionNormalize_Statics::ClassParams = {
		&UMaterialExpressionNormalize::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionNormalize_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNormalize_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNormalize_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNormalize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionNormalize()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionNormalize.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionNormalize.OuterSingleton, Z_Construct_UClass_UMaterialExpressionNormalize_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionNormalize.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionNormalize>()
	{
		return UMaterialExpressionNormalize::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionNormalize);
	UMaterialExpressionNormalize::~UMaterialExpressionNormalize() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNormalize_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNormalize_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionNormalize, UMaterialExpressionNormalize::StaticClass, TEXT("UMaterialExpressionNormalize"), &Z_Registration_Info_UClass_UMaterialExpressionNormalize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionNormalize), 418261466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNormalize_h_1723952343(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNormalize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNormalize_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
