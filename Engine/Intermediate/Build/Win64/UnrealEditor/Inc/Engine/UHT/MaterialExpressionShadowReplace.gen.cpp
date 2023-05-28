// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionShadowReplace.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionShadowReplace() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionShadowReplace();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionShadowReplace_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionShadowReplace::StaticRegisterNativesUMaterialExpressionShadowReplace()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionShadowReplace);
	UClass* Z_Construct_UClass_UMaterialExpressionShadowReplace_NoRegister()
	{
		return UMaterialExpressionShadowReplace::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Default;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shadow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shadow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "ShadowPassSwitch" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionShadowReplace.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionShadowReplace.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::NewProp_Default_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionShadowReplace.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Input will be used when rendering into non-ShadowMap passes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionShadowReplace, Default), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::NewProp_Default_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::NewProp_Shadow_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionShadowReplace.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Input will be used when rendering into ShadowMap" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::NewProp_Shadow = { "Shadow", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionShadowReplace, Shadow), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::NewProp_Shadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::NewProp_Shadow_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::NewProp_Default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::NewProp_Shadow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionShadowReplace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::ClassParams = {
		&UMaterialExpressionShadowReplace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::PropPointers),
		0,
		0x000000B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionShadowReplace()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionShadowReplace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionShadowReplace.OuterSingleton, Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionShadowReplace.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionShadowReplace>()
	{
		return UMaterialExpressionShadowReplace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionShadowReplace);
	UMaterialExpressionShadowReplace::~UMaterialExpressionShadowReplace() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShadowReplace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShadowReplace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionShadowReplace, UMaterialExpressionShadowReplace::StaticClass, TEXT("UMaterialExpressionShadowReplace"), &Z_Registration_Info_UClass_UMaterialExpressionShadowReplace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionShadowReplace), 3024772040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShadowReplace_h_1269649219(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShadowReplace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShadowReplace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
