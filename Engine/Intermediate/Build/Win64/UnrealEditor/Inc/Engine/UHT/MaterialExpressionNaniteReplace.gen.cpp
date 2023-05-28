// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionNaniteReplace.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionNaniteReplace() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNaniteReplace();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNaniteReplace_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionNaniteReplace::StaticRegisterNativesUMaterialExpressionNaniteReplace()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionNaniteReplace);
	UClass* Z_Construct_UClass_UMaterialExpressionNaniteReplace_NoRegister()
	{
		return UMaterialExpressionNaniteReplace::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nanite_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Nanite;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "NaniteSwitch" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionNaniteReplace.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNaniteReplace.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics::NewProp_Default_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNaniteReplace.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Input will be used when rendering into non-Nanite passes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionNaniteReplace, Default), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics::NewProp_Default_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics::NewProp_Nanite_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNaniteReplace.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Input will be used when rendering into Nanite passes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics::NewProp_Nanite = { "Nanite", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionNaniteReplace, Nanite), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics::NewProp_Nanite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics::NewProp_Nanite_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics::NewProp_Default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics::NewProp_Nanite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionNaniteReplace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics::ClassParams = {
		&UMaterialExpressionNaniteReplace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics::PropPointers),
		0,
		0x000000B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionNaniteReplace()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionNaniteReplace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionNaniteReplace.OuterSingleton, Z_Construct_UClass_UMaterialExpressionNaniteReplace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionNaniteReplace.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionNaniteReplace>()
	{
		return UMaterialExpressionNaniteReplace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionNaniteReplace);
	UMaterialExpressionNaniteReplace::~UMaterialExpressionNaniteReplace() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNaniteReplace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNaniteReplace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionNaniteReplace, UMaterialExpressionNaniteReplace::StaticClass, TEXT("UMaterialExpressionNaniteReplace"), &Z_Registration_Info_UClass_UMaterialExpressionNaniteReplace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionNaniteReplace), 3541378457U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNaniteReplace_h_2005465374(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNaniteReplace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNaniteReplace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
