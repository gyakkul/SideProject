// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterBrushEffects.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBrushEffects() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBrushEffectBlurring();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBrushEffectCurves();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBrushEffects();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBrushEffectTerracing();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaterBrushEffectBlurring;
class UScriptStruct* FWaterBrushEffectBlurring::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaterBrushEffectBlurring.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaterBrushEffectBlurring.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterBrushEffectBlurring, (UObject*)Z_Construct_UPackage__Script_Water(), TEXT("WaterBrushEffectBlurring"));
	}
	return Z_Registration_Info_UScriptStruct_WaterBrushEffectBlurring.OuterSingleton;
}
template<> WATER_API UScriptStruct* StaticStruct<FWaterBrushEffectBlurring>()
{
	return FWaterBrushEffectBlurring::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlurShape_MetaData[];
#endif
		static void NewProp_bBlurShape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlurShape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterBrushEffectBlurring>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics::NewProp_bBlurShape_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics::NewProp_bBlurShape_SetBit(void* Obj)
	{
		((FWaterBrushEffectBlurring*)Obj)->bBlurShape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics::NewProp_bBlurShape = { "bBlurShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWaterBrushEffectBlurring), &Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics::NewProp_bBlurShape_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics::NewProp_bBlurShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics::NewProp_bBlurShape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffectBlurring, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics::NewProp_Radius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics::NewProp_bBlurShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics::NewProp_Radius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
		nullptr,
		&NewStructOps,
		"WaterBrushEffectBlurring",
		sizeof(FWaterBrushEffectBlurring),
		alignof(FWaterBrushEffectBlurring),
		Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaterBrushEffectBlurring()
	{
		if (!Z_Registration_Info_UScriptStruct_WaterBrushEffectBlurring.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaterBrushEffectBlurring.InnerSingleton, Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaterBrushEffectBlurring.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaterBrushEffectCurlNoise;
class UScriptStruct* FWaterBrushEffectCurlNoise::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaterBrushEffectCurlNoise.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaterBrushEffectCurlNoise.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise, (UObject*)Z_Construct_UPackage__Script_Water(), TEXT("WaterBrushEffectCurlNoise"));
	}
	return Z_Registration_Info_UScriptStruct_WaterBrushEffectCurlNoise.OuterSingleton;
}
template<> WATER_API UScriptStruct* StaticStruct<FWaterBrushEffectCurlNoise>()
{
	return FWaterBrushEffectCurlNoise::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curl1Amount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Curl1Amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curl2Amount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Curl2Amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curl1Tiling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Curl1Tiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curl2Tiling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Curl2Tiling;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterBrushEffectCurlNoise>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::NewProp_Curl1Amount_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::NewProp_Curl1Amount = { "Curl1Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffectCurlNoise, Curl1Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::NewProp_Curl1Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::NewProp_Curl1Amount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::NewProp_Curl2Amount_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::NewProp_Curl2Amount = { "Curl2Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffectCurlNoise, Curl2Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::NewProp_Curl2Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::NewProp_Curl2Amount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::NewProp_Curl1Tiling_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::NewProp_Curl1Tiling = { "Curl1Tiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffectCurlNoise, Curl1Tiling), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::NewProp_Curl1Tiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::NewProp_Curl1Tiling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::NewProp_Curl2Tiling_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::NewProp_Curl2Tiling = { "Curl2Tiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffectCurlNoise, Curl2Tiling), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::NewProp_Curl2Tiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::NewProp_Curl2Tiling_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::NewProp_Curl1Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::NewProp_Curl2Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::NewProp_Curl1Tiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::NewProp_Curl2Tiling,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
		nullptr,
		&NewStructOps,
		"WaterBrushEffectCurlNoise",
		sizeof(FWaterBrushEffectCurlNoise),
		alignof(FWaterBrushEffectCurlNoise),
		Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise()
	{
		if (!Z_Registration_Info_UScriptStruct_WaterBrushEffectCurlNoise.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaterBrushEffectCurlNoise.InnerSingleton, Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaterBrushEffectCurlNoise.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaterBrushEffectCurves;
class UScriptStruct* FWaterBrushEffectCurves::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaterBrushEffectCurves.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaterBrushEffectCurves.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterBrushEffectCurves, (UObject*)Z_Construct_UPackage__Script_Water(), TEXT("WaterBrushEffectCurves"));
	}
	return Z_Registration_Info_UScriptStruct_WaterBrushEffectCurves.OuterSingleton;
}
template<> WATER_API UScriptStruct* StaticStruct<FWaterBrushEffectCurves>()
{
	return FWaterBrushEffectCurves::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCurveChannel_MetaData[];
#endif
		static void NewProp_bUseCurveChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCurveChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElevationCurveAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ElevationCurveAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelEdgeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChannelEdgeOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelDepth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChannelDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveRampWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveRampWidth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterBrushEffectCurves>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_bUseCurveChannel_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_bUseCurveChannel_SetBit(void* Obj)
	{
		((FWaterBrushEffectCurves*)Obj)->bUseCurveChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_bUseCurveChannel = { "bUseCurveChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWaterBrushEffectCurves), &Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_bUseCurveChannel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_bUseCurveChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_bUseCurveChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_ElevationCurveAsset_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_ElevationCurveAsset = { "ElevationCurveAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffectCurves, ElevationCurveAsset), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_ElevationCurveAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_ElevationCurveAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_ChannelEdgeOffset_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_ChannelEdgeOffset = { "ChannelEdgeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffectCurves, ChannelEdgeOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_ChannelEdgeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_ChannelEdgeOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_ChannelDepth_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_ChannelDepth = { "ChannelDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffectCurves, ChannelDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_ChannelDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_ChannelDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_CurveRampWidth_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_CurveRampWidth = { "CurveRampWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffectCurves, CurveRampWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_CurveRampWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_CurveRampWidth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_bUseCurveChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_ElevationCurveAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_ChannelEdgeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_ChannelDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewProp_CurveRampWidth,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
		nullptr,
		&NewStructOps,
		"WaterBrushEffectCurves",
		sizeof(FWaterBrushEffectCurves),
		alignof(FWaterBrushEffectCurves),
		Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaterBrushEffectCurves()
	{
		if (!Z_Registration_Info_UScriptStruct_WaterBrushEffectCurves.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaterBrushEffectCurves.InnerSingleton, Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaterBrushEffectCurves.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaterBrushEffectDisplacement;
class UScriptStruct* FWaterBrushEffectDisplacement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaterBrushEffectDisplacement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaterBrushEffectDisplacement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement, (UObject*)Z_Construct_UPackage__Script_Water(), TEXT("WaterBrushEffectDisplacement"));
	}
	return Z_Registration_Info_UScriptStruct_WaterBrushEffectDisplacement.OuterSingleton;
}
template<> WATER_API UScriptStruct* StaticStruct<FWaterBrushEffectDisplacement>()
{
	return FWaterBrushEffectDisplacement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplacementHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplacementHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplacementTiling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplacementTiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Midpoint_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Midpoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapInfluence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightmapInfluence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterBrushEffectDisplacement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_DisplacementHeight_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_DisplacementHeight = { "DisplacementHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffectDisplacement, DisplacementHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_DisplacementHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_DisplacementHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_DisplacementTiling_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_DisplacementTiling = { "DisplacementTiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffectDisplacement, DisplacementTiling), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_DisplacementTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_DisplacementTiling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffectDisplacement, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_Midpoint_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_Midpoint = { "Midpoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffectDisplacement, Midpoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_Midpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_Midpoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffectDisplacement, Channel), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_Channel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_WeightmapInfluence_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_WeightmapInfluence = { "WeightmapInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffectDisplacement, WeightmapInfluence), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_WeightmapInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_WeightmapInfluence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_DisplacementHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_DisplacementTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_Midpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewProp_WeightmapInfluence,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
		nullptr,
		&NewStructOps,
		"WaterBrushEffectDisplacement",
		sizeof(FWaterBrushEffectDisplacement),
		alignof(FWaterBrushEffectDisplacement),
		Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement()
	{
		if (!Z_Registration_Info_UScriptStruct_WaterBrushEffectDisplacement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaterBrushEffectDisplacement.InnerSingleton, Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaterBrushEffectDisplacement.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaterBrushEffectSmoothBlending;
class UScriptStruct* FWaterBrushEffectSmoothBlending::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaterBrushEffectSmoothBlending.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaterBrushEffectSmoothBlending.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending, (UObject*)Z_Construct_UPackage__Script_Water(), TEXT("WaterBrushEffectSmoothBlending"));
	}
	return Z_Registration_Info_UScriptStruct_WaterBrushEffectSmoothBlending.OuterSingleton;
}
template<> WATER_API UScriptStruct* StaticStruct<FWaterBrushEffectSmoothBlending>()
{
	return FWaterBrushEffectSmoothBlending::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerSmoothDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerSmoothDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterSmoothDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterSmoothDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterBrushEffectSmoothBlending>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending_Statics::NewProp_InnerSmoothDistance_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending_Statics::NewProp_InnerSmoothDistance = { "InnerSmoothDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffectSmoothBlending, InnerSmoothDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending_Statics::NewProp_InnerSmoothDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending_Statics::NewProp_InnerSmoothDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending_Statics::NewProp_OuterSmoothDistance_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending_Statics::NewProp_OuterSmoothDistance = { "OuterSmoothDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffectSmoothBlending, OuterSmoothDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending_Statics::NewProp_OuterSmoothDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending_Statics::NewProp_OuterSmoothDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending_Statics::NewProp_InnerSmoothDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending_Statics::NewProp_OuterSmoothDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
		nullptr,
		&NewStructOps,
		"WaterBrushEffectSmoothBlending",
		sizeof(FWaterBrushEffectSmoothBlending),
		alignof(FWaterBrushEffectSmoothBlending),
		Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending()
	{
		if (!Z_Registration_Info_UScriptStruct_WaterBrushEffectSmoothBlending.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaterBrushEffectSmoothBlending.InnerSingleton, Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaterBrushEffectSmoothBlending.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaterBrushEffectTerracing;
class UScriptStruct* FWaterBrushEffectTerracing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaterBrushEffectTerracing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaterBrushEffectTerracing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterBrushEffectTerracing, (UObject*)Z_Construct_UPackage__Script_Water(), TEXT("WaterBrushEffectTerracing"));
	}
	return Z_Registration_Info_UScriptStruct_WaterBrushEffectTerracing.OuterSingleton;
}
template<> WATER_API UScriptStruct* StaticStruct<FWaterBrushEffectTerracing>()
{
	return FWaterBrushEffectTerracing::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerraceAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TerraceAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerraceSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TerraceSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerraceSmoothness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TerraceSmoothness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaskLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskStartOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaskStartOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterBrushEffectTerracing>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_TerraceAlpha_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_TerraceAlpha = { "TerraceAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffectTerracing, TerraceAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_TerraceAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_TerraceAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_TerraceSpacing_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_TerraceSpacing = { "TerraceSpacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffectTerracing, TerraceSpacing), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_TerraceSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_TerraceSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_TerraceSmoothness_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_TerraceSmoothness = { "TerraceSmoothness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffectTerracing, TerraceSmoothness), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_TerraceSmoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_TerraceSmoothness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_MaskLength_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_MaskLength = { "MaskLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffectTerracing, MaskLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_MaskLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_MaskLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_MaskStartOffset_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_MaskStartOffset = { "MaskStartOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffectTerracing, MaskStartOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_MaskStartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_MaskStartOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_TerraceAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_TerraceSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_TerraceSmoothness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_MaskLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewProp_MaskStartOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
		nullptr,
		&NewStructOps,
		"WaterBrushEffectTerracing",
		sizeof(FWaterBrushEffectTerracing),
		alignof(FWaterBrushEffectTerracing),
		Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaterBrushEffectTerracing()
	{
		if (!Z_Registration_Info_UScriptStruct_WaterBrushEffectTerracing.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaterBrushEffectTerracing.InnerSingleton, Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaterBrushEffectTerracing.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaterBrushEffects;
class UScriptStruct* FWaterBrushEffects::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaterBrushEffects.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaterBrushEffects.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterBrushEffects, (UObject*)Z_Construct_UPackage__Script_Water(), TEXT("WaterBrushEffects"));
	}
	return Z_Registration_Info_UScriptStruct_WaterBrushEffects.OuterSingleton;
}
template<> WATER_API UScriptStruct* StaticStruct<FWaterBrushEffects>()
{
	return FWaterBrushEffects::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaterBrushEffects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blurring_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Blurring;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurlNoise_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurlNoise;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Displacement_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Displacement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothBlending_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothBlending;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Terracing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Terracing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterBrushEffects>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_Blurring_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_Blurring = { "Blurring", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffects, Blurring), Z_Construct_UScriptStruct_FWaterBrushEffectBlurring, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_Blurring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_Blurring_MetaData)) }; // 1308305492
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_CurlNoise_MetaData[] = {
		{ "Category", "FalloffSettings" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_CurlNoise = { "CurlNoise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffects, CurlNoise), Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_CurlNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_CurlNoise_MetaData)) }; // 1713839264
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_Displacement_MetaData[] = {
		{ "Category", "FalloffSettings" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_Displacement = { "Displacement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffects, Displacement), Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_Displacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_Displacement_MetaData)) }; // 2271327494
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_SmoothBlending_MetaData[] = {
		{ "Category", "FalloffSettings" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_SmoothBlending = { "SmoothBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffects, SmoothBlending), Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_SmoothBlending_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_SmoothBlending_MetaData)) }; // 347165124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_Terracing_MetaData[] = {
		{ "Category", "FalloffSettings" },
		{ "ModuleRelativePath", "Public/WaterBrushEffects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_Terracing = { "Terracing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushEffects, Terracing), Z_Construct_UScriptStruct_FWaterBrushEffectTerracing, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_Terracing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_Terracing_MetaData)) }; // 3847489348
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_Blurring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_CurlNoise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_Displacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_SmoothBlending,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewProp_Terracing,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
		nullptr,
		&NewStructOps,
		"WaterBrushEffects",
		sizeof(FWaterBrushEffects),
		alignof(FWaterBrushEffects),
		Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaterBrushEffects()
	{
		if (!Z_Registration_Info_UScriptStruct_WaterBrushEffects.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaterBrushEffects.InnerSingleton, Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaterBrushEffects.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushEffects_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushEffects_h_Statics::ScriptStructInfo[] = {
		{ FWaterBrushEffectBlurring::StaticStruct, Z_Construct_UScriptStruct_FWaterBrushEffectBlurring_Statics::NewStructOps, TEXT("WaterBrushEffectBlurring"), &Z_Registration_Info_UScriptStruct_WaterBrushEffectBlurring, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterBrushEffectBlurring), 1308305492U) },
		{ FWaterBrushEffectCurlNoise::StaticStruct, Z_Construct_UScriptStruct_FWaterBrushEffectCurlNoise_Statics::NewStructOps, TEXT("WaterBrushEffectCurlNoise"), &Z_Registration_Info_UScriptStruct_WaterBrushEffectCurlNoise, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterBrushEffectCurlNoise), 1713839264U) },
		{ FWaterBrushEffectCurves::StaticStruct, Z_Construct_UScriptStruct_FWaterBrushEffectCurves_Statics::NewStructOps, TEXT("WaterBrushEffectCurves"), &Z_Registration_Info_UScriptStruct_WaterBrushEffectCurves, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterBrushEffectCurves), 1990837686U) },
		{ FWaterBrushEffectDisplacement::StaticStruct, Z_Construct_UScriptStruct_FWaterBrushEffectDisplacement_Statics::NewStructOps, TEXT("WaterBrushEffectDisplacement"), &Z_Registration_Info_UScriptStruct_WaterBrushEffectDisplacement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterBrushEffectDisplacement), 2271327494U) },
		{ FWaterBrushEffectSmoothBlending::StaticStruct, Z_Construct_UScriptStruct_FWaterBrushEffectSmoothBlending_Statics::NewStructOps, TEXT("WaterBrushEffectSmoothBlending"), &Z_Registration_Info_UScriptStruct_WaterBrushEffectSmoothBlending, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterBrushEffectSmoothBlending), 347165124U) },
		{ FWaterBrushEffectTerracing::StaticStruct, Z_Construct_UScriptStruct_FWaterBrushEffectTerracing_Statics::NewStructOps, TEXT("WaterBrushEffectTerracing"), &Z_Registration_Info_UScriptStruct_WaterBrushEffectTerracing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterBrushEffectTerracing), 3847489348U) },
		{ FWaterBrushEffects::StaticStruct, Z_Construct_UScriptStruct_FWaterBrushEffects_Statics::NewStructOps, TEXT("WaterBrushEffects"), &Z_Registration_Info_UScriptStruct_WaterBrushEffects, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterBrushEffects), 2711930548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushEffects_h_3975327772(TEXT("/Script/Water"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushEffects_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBrushEffects_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
