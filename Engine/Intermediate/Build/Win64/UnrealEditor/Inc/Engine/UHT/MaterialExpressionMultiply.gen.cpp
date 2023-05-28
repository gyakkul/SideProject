// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionMultiply.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionMultiply() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMultiply();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMultiply_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionMultiply::StaticRegisterNativesUMaterialExpressionMultiply()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionMultiply);
	UClass* Z_Construct_UClass_UMaterialExpressionMultiply_NoRegister()
	{
		return UMaterialExpressionMultiply::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionMultiply_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstA_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionMultiply_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMultiply_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionMultiply.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMultiply.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMultiply_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMultiply.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstA' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMultiply_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionMultiply, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMultiply_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMultiply_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMultiply_Statics::NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMultiply.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstB' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMultiply_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionMultiply, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMultiply_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMultiply_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMultiply_Statics::NewProp_ConstA_MetaData[] = {
		{ "Category", "MaterialExpressionMultiply" },
		{ "Comment", "/** only used if A is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMultiply.h" },
		{ "OverridingInputProperty", "A" },
		{ "ToolTip", "only used if A is not hooked up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionMultiply_Statics::NewProp_ConstA = { "ConstA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionMultiply, ConstA), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMultiply_Statics::NewProp_ConstA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMultiply_Statics::NewProp_ConstA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMultiply_Statics::NewProp_ConstB_MetaData[] = {
		{ "Category", "MaterialExpressionMultiply" },
		{ "Comment", "/** only used if B is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMultiply.h" },
		{ "OverridingInputProperty", "B" },
		{ "ToolTip", "only used if B is not hooked up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionMultiply_Statics::NewProp_ConstB = { "ConstB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionMultiply, ConstB), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMultiply_Statics::NewProp_ConstB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMultiply_Statics::NewProp_ConstB_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionMultiply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMultiply_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMultiply_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMultiply_Statics::NewProp_ConstA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMultiply_Statics::NewProp_ConstB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionMultiply_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionMultiply>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionMultiply_Statics::ClassParams = {
		&UMaterialExpressionMultiply::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionMultiply_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMultiply_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMultiply_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMultiply_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionMultiply()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionMultiply.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionMultiply.OuterSingleton, Z_Construct_UClass_UMaterialExpressionMultiply_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionMultiply.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionMultiply>()
	{
		return UMaterialExpressionMultiply::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMultiply);
	UMaterialExpressionMultiply::~UMaterialExpressionMultiply() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMultiply_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMultiply_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionMultiply, UMaterialExpressionMultiply::StaticClass, TEXT("UMaterialExpressionMultiply"), &Z_Registration_Info_UClass_UMaterialExpressionMultiply, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionMultiply), 958498240U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMultiply_h_3545344377(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMultiply_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMultiply_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
