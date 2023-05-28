// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionStep.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionStep() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStep();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStep_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionStep::StaticRegisterNativesUMaterialExpressionStep()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionStep);
	UClass* Z_Construct_UClass_UMaterialExpressionStep_NoRegister()
	{
		return UMaterialExpressionStep::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstX;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStep_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionStep.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStep.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStep.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstY' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionStep, Y), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStep.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstX' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionStep, X), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstY_MetaData[] = {
		{ "Category", "MaterialExpressionStep" },
		{ "Comment", "/** only used if Y is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStep.h" },
		{ "OverridingInputProperty", "Y" },
		{ "ToolTip", "only used if Y is not hooked up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstY = { "ConstY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionStep, ConstY), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstX_MetaData[] = {
		{ "Category", "MaterialExpressionStep" },
		{ "Comment", "/** only used if X is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStep.h" },
		{ "OverridingInputProperty", "X" },
		{ "ToolTip", "only used if X is not hooked up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstX = { "ConstX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionStep, ConstX), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstX_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStep_Statics::NewProp_ConstX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionStep>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionStep_Statics::ClassParams = {
		&UMaterialExpressionStep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionStep_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStep_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionStep()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionStep.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionStep.OuterSingleton, Z_Construct_UClass_UMaterialExpressionStep_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionStep.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionStep>()
	{
		return UMaterialExpressionStep::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStep);
	UMaterialExpressionStep::~UMaterialExpressionStep() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStep_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStep_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionStep, UMaterialExpressionStep::StaticClass, TEXT("UMaterialExpressionStep"), &Z_Registration_Info_UClass_UMaterialExpressionStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionStep), 1891733377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStep_h_273511745(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStep_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStep_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
