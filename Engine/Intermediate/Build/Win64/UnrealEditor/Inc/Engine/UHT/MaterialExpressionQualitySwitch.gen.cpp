// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionQualitySwitch.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionQualitySwitch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionQualitySwitch();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionQualitySwitch_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionQualitySwitch::StaticRegisterNativesUMaterialExpressionQualitySwitch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionQualitySwitch);
	UClass* Z_Construct_UClass_UMaterialExpressionQualitySwitch_NoRegister()
	{
		return UMaterialExpressionQualitySwitch::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionQualitySwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionQualitySwitch.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics::NewProp_Default_MetaData[] = {
		{ "Comment", "/** Default connection, used when a specific quality level input is missing. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionQualitySwitch.h" },
		{ "ToolTip", "Default connection, used when a specific quality level input is missing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionQualitySwitch, Default), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics::NewProp_Default_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics::NewProp_Inputs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionQualitySwitch.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Inputs, UMaterialExpressionQualitySwitch), nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionQualitySwitch, Inputs), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics::NewProp_Inputs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics::NewProp_Default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics::NewProp_Inputs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionQualitySwitch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics::ClassParams = {
		&UMaterialExpressionQualitySwitch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionQualitySwitch()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionQualitySwitch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionQualitySwitch.OuterSingleton, Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionQualitySwitch.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionQualitySwitch>()
	{
		return UMaterialExpressionQualitySwitch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionQualitySwitch);
	UMaterialExpressionQualitySwitch::~UMaterialExpressionQualitySwitch() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionQualitySwitch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionQualitySwitch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionQualitySwitch, UMaterialExpressionQualitySwitch::StaticClass, TEXT("UMaterialExpressionQualitySwitch"), &Z_Registration_Info_UClass_UMaterialExpressionQualitySwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionQualitySwitch), 4124917976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionQualitySwitch_h_1818479595(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionQualitySwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionQualitySwitch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
