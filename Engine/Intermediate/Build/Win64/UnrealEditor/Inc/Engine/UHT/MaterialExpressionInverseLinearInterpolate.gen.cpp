// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionInverseLinearInterpolate.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionInverseLinearInterpolate() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionInverseLinearInterpolate::StaticRegisterNativesUMaterialExpressionInverseLinearInterpolate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionInverseLinearInterpolate);
	UClass* Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_NoRegister()
	{
		return UMaterialExpressionInverseLinearInterpolate::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstA_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampResult_MetaData[];
#endif
		static void NewProp_bClampResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionInverseLinearInterpolate.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionInverseLinearInterpolate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionInverseLinearInterpolate.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstA' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionInverseLinearInterpolate, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionInverseLinearInterpolate.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstB' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionInverseLinearInterpolate, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionInverseLinearInterpolate.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstValue' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionInverseLinearInterpolate, Value), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstA_MetaData[] = {
		{ "Category", "MaterialExpressionInverseLinearInterpolate" },
		{ "Comment", "/** only used if A is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionInverseLinearInterpolate.h" },
		{ "OverridingInputProperty", "A" },
		{ "ToolTip", "only used if A is not hooked up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstA = { "ConstA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionInverseLinearInterpolate, ConstA), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstB_MetaData[] = {
		{ "Category", "MaterialExpressionInverseLinearInterpolate" },
		{ "Comment", "/** only used if B is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionInverseLinearInterpolate.h" },
		{ "OverridingInputProperty", "B" },
		{ "ToolTip", "only used if B is not hooked up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstB = { "ConstB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionInverseLinearInterpolate, ConstB), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstValue_MetaData[] = {
		{ "Category", "MaterialExpressionInverseLinearInterpolate" },
		{ "Comment", "/** only used if Value is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionInverseLinearInterpolate.h" },
		{ "OverridingInputProperty", "Value" },
		{ "ToolTip", "only used if Value is not hooked up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstValue = { "ConstValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionInverseLinearInterpolate, ConstValue), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_bClampResult_MetaData[] = {
		{ "Category", "MaterialExpressionInverseLinearInterpolate" },
		{ "Comment", "/** Clamp the result to 0 to 1 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionInverseLinearInterpolate.h" },
		{ "ToolTip", "Clamp the result to 0 to 1" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_bClampResult_SetBit(void* Obj)
	{
		((UMaterialExpressionInverseLinearInterpolate*)Obj)->bClampResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_bClampResult = { "bClampResult", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMaterialExpressionInverseLinearInterpolate), &Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_bClampResult_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_bClampResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_bClampResult_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_ConstValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::NewProp_bClampResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionInverseLinearInterpolate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::ClassParams = {
		&UMaterialExpressionInverseLinearInterpolate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionInverseLinearInterpolate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionInverseLinearInterpolate.OuterSingleton, Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionInverseLinearInterpolate.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionInverseLinearInterpolate>()
	{
		return UMaterialExpressionInverseLinearInterpolate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionInverseLinearInterpolate);
	UMaterialExpressionInverseLinearInterpolate::~UMaterialExpressionInverseLinearInterpolate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionInverseLinearInterpolate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionInverseLinearInterpolate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionInverseLinearInterpolate, UMaterialExpressionInverseLinearInterpolate::StaticClass, TEXT("UMaterialExpressionInverseLinearInterpolate"), &Z_Registration_Info_UClass_UMaterialExpressionInverseLinearInterpolate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionInverseLinearInterpolate), 3633543673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionInverseLinearInterpolate_h_600113274(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionInverseLinearInterpolate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionInverseLinearInterpolate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
