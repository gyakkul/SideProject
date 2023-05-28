// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/SpringInterpolator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpringInterpolator() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics
	{
		struct FFloatRK4SpringInterpolator
		{
			float StiffnessConstant;
			float DampeningRatio;
		};

#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StiffnessConstant_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StiffnessConstant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampeningRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DampeningRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SpringInterpolator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::NewProp_StiffnessConstant_MetaData[] = {
		{ "Category", "FloatRK4SpringInterpolator" },
		{ "ModuleRelativePath", "Classes/Engine/SpringInterpolator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::NewProp_StiffnessConstant = { "StiffnessConstant", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFloatRK4SpringInterpolator, StiffnessConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::NewProp_StiffnessConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::NewProp_StiffnessConstant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::NewProp_DampeningRatio_MetaData[] = {
		{ "Category", "FloatRK4SpringInterpolator" },
		{ "Comment", "/** 0 = Undamped, <1 = Underdamped, 1 = Critically damped, >1 = Over damped */" },
		{ "ModuleRelativePath", "Classes/Engine/SpringInterpolator.h" },
		{ "ToolTip", "0 = Undamped, <1 = Underdamped, 1 = Critically damped, >1 = Over damped" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::NewProp_DampeningRatio = { "DampeningRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFloatRK4SpringInterpolator, DampeningRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::NewProp_DampeningRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::NewProp_DampeningRatio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::NewProp_StiffnessConstant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::NewProp_DampeningRatio,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		nullptr,
		"FloatRK4SpringInterpolator",
		sizeof(FFloatRK4SpringInterpolator),
		alignof(FFloatRK4SpringInterpolator),
		Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator()
	{
		static UScriptStruct* ReturnStruct = nullptr;
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	struct Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics
	{
		struct FVectorRK4SpringInterpolator
		{
			float StiffnessConstant;
			float DampeningRatio;
		};

#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StiffnessConstant_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StiffnessConstant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampeningRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DampeningRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SpringInterpolator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::NewProp_StiffnessConstant_MetaData[] = {
		{ "Category", "VectorRK4SpringInterpolator" },
		{ "ModuleRelativePath", "Classes/Engine/SpringInterpolator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::NewProp_StiffnessConstant = { "StiffnessConstant", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVectorRK4SpringInterpolator, StiffnessConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::NewProp_StiffnessConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::NewProp_StiffnessConstant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::NewProp_DampeningRatio_MetaData[] = {
		{ "Category", "VectorRK4SpringInterpolator" },
		{ "Comment", "/** 0 = Undamped, <1 = Underdamped, 1 = Critically damped, >1 = Over damped */" },
		{ "ModuleRelativePath", "Classes/Engine/SpringInterpolator.h" },
		{ "ToolTip", "0 = Undamped, <1 = Underdamped, 1 = Critically damped, >1 = Over damped" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::NewProp_DampeningRatio = { "DampeningRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVectorRK4SpringInterpolator, DampeningRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::NewProp_DampeningRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::NewProp_DampeningRatio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::NewProp_StiffnessConstant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::NewProp_DampeningRatio,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		nullptr,
		"VectorRK4SpringInterpolator",
		sizeof(FVectorRK4SpringInterpolator),
		alignof(FVectorRK4SpringInterpolator),
		Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator()
	{
		static UScriptStruct* ReturnStruct = nullptr;
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
