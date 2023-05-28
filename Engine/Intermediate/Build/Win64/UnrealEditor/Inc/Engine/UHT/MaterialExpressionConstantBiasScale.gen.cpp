// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionConstantBiasScale.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionConstantBiasScale() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstantBiasScale();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstantBiasScale_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionConstantBiasScale::StaticRegisterNativesUMaterialExpressionConstantBiasScale()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionConstantBiasScale);
	UClass* Z_Construct_UClass_UMaterialExpressionConstantBiasScale_NoRegister()
	{
		return UMaterialExpressionConstantBiasScale::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionConstantBiasScale.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstantBiasScale.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstantBiasScale.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionConstantBiasScale, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::NewProp_Bias_MetaData[] = {
		{ "Category", "MaterialExpressionConstantBiasScale" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstantBiasScale.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionConstantBiasScale, Bias), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::NewProp_Bias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::NewProp_Bias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "MaterialExpressionConstantBiasScale" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstantBiasScale.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionConstantBiasScale, Scale), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::NewProp_Scale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::NewProp_Bias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::NewProp_Scale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionConstantBiasScale>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::ClassParams = {
		&UMaterialExpressionConstantBiasScale::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionConstantBiasScale()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionConstantBiasScale.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionConstantBiasScale.OuterSingleton, Z_Construct_UClass_UMaterialExpressionConstantBiasScale_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionConstantBiasScale.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionConstantBiasScale>()
	{
		return UMaterialExpressionConstantBiasScale::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionConstantBiasScale);
	UMaterialExpressionConstantBiasScale::~UMaterialExpressionConstantBiasScale() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstantBiasScale_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstantBiasScale_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionConstantBiasScale, UMaterialExpressionConstantBiasScale::StaticClass, TEXT("UMaterialExpressionConstantBiasScale"), &Z_Registration_Info_UClass_UMaterialExpressionConstantBiasScale, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionConstantBiasScale), 677287024U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstantBiasScale_h_2199964024(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstantBiasScale_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstantBiasScale_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
