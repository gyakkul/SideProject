// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionTemporalSobol.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTemporalSobol() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTemporalSobol();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTemporalSobol_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionTemporalSobol::StaticRegisterNativesUMaterialExpressionTemporalSobol()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTemporalSobol);
	UClass* Z_Construct_UClass_UMaterialExpressionTemporalSobol_NoRegister()
	{
		return UMaterialExpressionTemporalSobol::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ConstIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstSeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstSeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionTemporalSobol.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTemporalSobol.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTemporalSobol.h" },
		{ "RequiredInput", "false" },
		{ "Tooltip", "Sobol point number. Use Const Index if not connected." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTemporalSobol, Index), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_Seed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTemporalSobol.h" },
		{ "RequiredInput", "false" },
		{ "Tooltip", "2D Seed for sequence randomization (0,0)-(1,1). Use Const Seed if not connected." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTemporalSobol, Seed), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_ConstIndex_MetaData[] = {
		{ "Category", "MaterialExpressionSobol" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTemporalSobol.h" },
		{ "OverridingInputProperty", "Index" },
		{ "Tooltip", "Sobol point number. Only used if Index is not connected." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_ConstIndex = { "ConstIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTemporalSobol, ConstIndex), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_ConstIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_ConstIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_ConstSeed_MetaData[] = {
		{ "Category", "MaterialExpressionSobol" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTemporalSobol.h" },
		{ "OverridingInputProperty", "Seed" },
		{ "Tooltip", "2D Seed for sequence randomization. Only used if Seed is not connected." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_ConstSeed = { "ConstSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTemporalSobol, ConstSeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_ConstSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_ConstSeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_ConstIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_ConstSeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTemporalSobol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::ClassParams = {
		&UMaterialExpressionTemporalSobol::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionTemporalSobol()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionTemporalSobol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTemporalSobol.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionTemporalSobol.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTemporalSobol>()
	{
		return UMaterialExpressionTemporalSobol::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTemporalSobol);
	UMaterialExpressionTemporalSobol::~UMaterialExpressionTemporalSobol() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTemporalSobol_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTemporalSobol_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTemporalSobol, UMaterialExpressionTemporalSobol::StaticClass, TEXT("UMaterialExpressionTemporalSobol"), &Z_Registration_Info_UClass_UMaterialExpressionTemporalSobol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTemporalSobol), 2933550297U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTemporalSobol_h_397064545(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTemporalSobol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTemporalSobol_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
