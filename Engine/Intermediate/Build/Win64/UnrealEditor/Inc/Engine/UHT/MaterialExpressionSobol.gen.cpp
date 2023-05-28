// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionSobol.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSobol() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSobol();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSobol_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionSobol::StaticRegisterNativesUMaterialExpressionSobol()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSobol);
	UClass* Z_Construct_UClass_UMaterialExpressionSobol_NoRegister()
	{
		return UMaterialExpressionSobol::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSobol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cell_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cell;
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
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSobol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSobol_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSobol.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSobol.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_Cell_MetaData[] = {
		{ "Comment", "/** 2D integer cell in 256x256 grid.\n\x09  * Uses cell (0,0) if not connected */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSobol.h" },
		{ "ToolTip", "2D integer cell in 256x256 grid.\nUses cell (0,0) if not connected" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_Cell = { "Cell", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSobol, Cell), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_Cell_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_Cell_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSobol.h" },
		{ "RequiredInput", "false" },
		{ "Tooltip", "Sobol point number. Use Const Index if not connected." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSobol, Index), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_Seed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSobol.h" },
		{ "RequiredInput", "false" },
		{ "Tooltip", "2D Seed for sequence randomization (0,0)-(1,1). Use Const Seed if not connected." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSobol, Seed), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_ConstIndex_MetaData[] = {
		{ "Category", "MaterialExpressionSobol" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSobol.h" },
		{ "OverridingInputProperty", "Index" },
		{ "Tooltip", "Sobol point number. Only used if Index is not connected." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_ConstIndex = { "ConstIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSobol, ConstIndex), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_ConstIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_ConstIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_ConstSeed_MetaData[] = {
		{ "Category", "MaterialExpressionSobol" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSobol.h" },
		{ "OverridingInputProperty", "Seed" },
		{ "Tooltip", "2D Seed for sequence randomization. Only used if Seed is not connected." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_ConstSeed = { "ConstSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSobol, ConstSeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_ConstSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_ConstSeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSobol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_Cell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_ConstIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSobol_Statics::NewProp_ConstSeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSobol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSobol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSobol_Statics::ClassParams = {
		&UMaterialExpressionSobol::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSobol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSobol_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSobol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSobol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSobol()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSobol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSobol.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSobol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSobol.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSobol>()
	{
		return UMaterialExpressionSobol::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSobol);
	UMaterialExpressionSobol::~UMaterialExpressionSobol() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSobol_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSobol_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSobol, UMaterialExpressionSobol::StaticClass, TEXT("UMaterialExpressionSobol"), &Z_Registration_Info_UClass_UMaterialExpressionSobol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSobol), 792892279U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSobol_h_3480441990(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSobol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSobol_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
