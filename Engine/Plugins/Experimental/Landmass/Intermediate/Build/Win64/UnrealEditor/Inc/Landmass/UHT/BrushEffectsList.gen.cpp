// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BrushEffectsList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrushEffectsList() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	LANDMASS_API UScriptStruct* Z_Construct_UScriptStruct_FBrushEffectBlurring();
	LANDMASS_API UScriptStruct* Z_Construct_UScriptStruct_FBrushEffectCurlNoise();
	LANDMASS_API UScriptStruct* Z_Construct_UScriptStruct_FBrushEffectCurves();
	LANDMASS_API UScriptStruct* Z_Construct_UScriptStruct_FBrushEffectDisplacement();
	LANDMASS_API UScriptStruct* Z_Construct_UScriptStruct_FBrushEffectSmoothBlending();
	LANDMASS_API UScriptStruct* Z_Construct_UScriptStruct_FBrushEffectTerracing();
	LANDMASS_API UScriptStruct* Z_Construct_UScriptStruct_FLandmassBrushEffectsList();
	UPackage* Z_Construct_UPackage__Script_Landmass();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BrushEffectBlurring;
class UScriptStruct* FBrushEffectBlurring::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BrushEffectBlurring.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BrushEffectBlurring.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBrushEffectBlurring, (UObject*)Z_Construct_UPackage__Script_Landmass(), TEXT("BrushEffectBlurring"));
	}
	return Z_Registration_Info_UScriptStruct_BrushEffectBlurring.OuterSingleton;
}
template<> LANDMASS_API UScriptStruct* StaticStruct<FBrushEffectBlurring>()
{
	return FBrushEffectBlurring::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBrushEffectBlurring>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics::NewProp_bBlurShape_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics::NewProp_bBlurShape_SetBit(void* Obj)
	{
		((FBrushEffectBlurring*)Obj)->bBlurShape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics::NewProp_bBlurShape = { "bBlurShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBrushEffectBlurring), &Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics::NewProp_bBlurShape_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics::NewProp_bBlurShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics::NewProp_bBlurShape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushEffectBlurring, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics::NewProp_Radius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics::NewProp_bBlurShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics::NewProp_Radius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landmass,
		nullptr,
		&NewStructOps,
		"BrushEffectBlurring",
		sizeof(FBrushEffectBlurring),
		alignof(FBrushEffectBlurring),
		Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBrushEffectBlurring()
	{
		if (!Z_Registration_Info_UScriptStruct_BrushEffectBlurring.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BrushEffectBlurring.InnerSingleton, Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BrushEffectBlurring.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BrushEffectCurlNoise;
class UScriptStruct* FBrushEffectCurlNoise::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BrushEffectCurlNoise.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BrushEffectCurlNoise.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBrushEffectCurlNoise, (UObject*)Z_Construct_UPackage__Script_Landmass(), TEXT("BrushEffectCurlNoise"));
	}
	return Z_Registration_Info_UScriptStruct_BrushEffectCurlNoise.OuterSingleton;
}
template<> LANDMASS_API UScriptStruct* StaticStruct<FBrushEffectCurlNoise>()
{
	return FBrushEffectCurlNoise::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBrushEffectCurlNoise>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::NewProp_Curl1Amount_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::NewProp_Curl1Amount = { "Curl1Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushEffectCurlNoise, Curl1Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::NewProp_Curl1Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::NewProp_Curl1Amount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::NewProp_Curl2Amount_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::NewProp_Curl2Amount = { "Curl2Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushEffectCurlNoise, Curl2Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::NewProp_Curl2Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::NewProp_Curl2Amount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::NewProp_Curl1Tiling_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::NewProp_Curl1Tiling = { "Curl1Tiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushEffectCurlNoise, Curl1Tiling), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::NewProp_Curl1Tiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::NewProp_Curl1Tiling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::NewProp_Curl2Tiling_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::NewProp_Curl2Tiling = { "Curl2Tiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushEffectCurlNoise, Curl2Tiling), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::NewProp_Curl2Tiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::NewProp_Curl2Tiling_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::NewProp_Curl1Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::NewProp_Curl2Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::NewProp_Curl1Tiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::NewProp_Curl2Tiling,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landmass,
		nullptr,
		&NewStructOps,
		"BrushEffectCurlNoise",
		sizeof(FBrushEffectCurlNoise),
		alignof(FBrushEffectCurlNoise),
		Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBrushEffectCurlNoise()
	{
		if (!Z_Registration_Info_UScriptStruct_BrushEffectCurlNoise.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BrushEffectCurlNoise.InnerSingleton, Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BrushEffectCurlNoise.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BrushEffectCurves;
class UScriptStruct* FBrushEffectCurves::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BrushEffectCurves.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BrushEffectCurves.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBrushEffectCurves, (UObject*)Z_Construct_UPackage__Script_Landmass(), TEXT("BrushEffectCurves"));
	}
	return Z_Registration_Info_UScriptStruct_BrushEffectCurves.OuterSingleton;
}
template<> LANDMASS_API UScriptStruct* StaticStruct<FBrushEffectCurves>()
{
	return FBrushEffectCurves::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBrushEffectCurves_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBrushEffectCurves>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_bUseCurveChannel_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_bUseCurveChannel_SetBit(void* Obj)
	{
		((FBrushEffectCurves*)Obj)->bUseCurveChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_bUseCurveChannel = { "bUseCurveChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBrushEffectCurves), &Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_bUseCurveChannel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_bUseCurveChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_bUseCurveChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_ElevationCurveAsset_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_ElevationCurveAsset = { "ElevationCurveAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushEffectCurves, ElevationCurveAsset), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_ElevationCurveAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_ElevationCurveAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_ChannelEdgeOffset_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_ChannelEdgeOffset = { "ChannelEdgeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushEffectCurves, ChannelEdgeOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_ChannelEdgeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_ChannelEdgeOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_ChannelDepth_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_ChannelDepth = { "ChannelDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushEffectCurves, ChannelDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_ChannelDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_ChannelDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_CurveRampWidth_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_CurveRampWidth = { "CurveRampWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushEffectCurves, CurveRampWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_CurveRampWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_CurveRampWidth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_bUseCurveChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_ElevationCurveAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_ChannelEdgeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_ChannelDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewProp_CurveRampWidth,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landmass,
		nullptr,
		&NewStructOps,
		"BrushEffectCurves",
		sizeof(FBrushEffectCurves),
		alignof(FBrushEffectCurves),
		Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBrushEffectCurves()
	{
		if (!Z_Registration_Info_UScriptStruct_BrushEffectCurves.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BrushEffectCurves.InnerSingleton, Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BrushEffectCurves.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BrushEffectDisplacement;
class UScriptStruct* FBrushEffectDisplacement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BrushEffectDisplacement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BrushEffectDisplacement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBrushEffectDisplacement, (UObject*)Z_Construct_UPackage__Script_Landmass(), TEXT("BrushEffectDisplacement"));
	}
	return Z_Registration_Info_UScriptStruct_BrushEffectDisplacement.OuterSingleton;
}
template<> LANDMASS_API UScriptStruct* StaticStruct<FBrushEffectDisplacement>()
{
	return FBrushEffectDisplacement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBrushEffectDisplacement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_DisplacementHeight_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_DisplacementHeight = { "DisplacementHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushEffectDisplacement, DisplacementHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_DisplacementHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_DisplacementHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_DisplacementTiling_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_DisplacementTiling = { "DisplacementTiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushEffectDisplacement, DisplacementTiling), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_DisplacementTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_DisplacementTiling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushEffectDisplacement, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_Midpoint_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_Midpoint = { "Midpoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushEffectDisplacement, Midpoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_Midpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_Midpoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushEffectDisplacement, Channel), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_Channel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_WeightmapInfluence_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_WeightmapInfluence = { "WeightmapInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushEffectDisplacement, WeightmapInfluence), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_WeightmapInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_WeightmapInfluence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_DisplacementHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_DisplacementTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_Midpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewProp_WeightmapInfluence,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landmass,
		nullptr,
		&NewStructOps,
		"BrushEffectDisplacement",
		sizeof(FBrushEffectDisplacement),
		alignof(FBrushEffectDisplacement),
		Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBrushEffectDisplacement()
	{
		if (!Z_Registration_Info_UScriptStruct_BrushEffectDisplacement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BrushEffectDisplacement.InnerSingleton, Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BrushEffectDisplacement.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BrushEffectSmoothBlending;
class UScriptStruct* FBrushEffectSmoothBlending::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BrushEffectSmoothBlending.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BrushEffectSmoothBlending.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBrushEffectSmoothBlending, (UObject*)Z_Construct_UPackage__Script_Landmass(), TEXT("BrushEffectSmoothBlending"));
	}
	return Z_Registration_Info_UScriptStruct_BrushEffectSmoothBlending.OuterSingleton;
}
template<> LANDMASS_API UScriptStruct* StaticStruct<FBrushEffectSmoothBlending>()
{
	return FBrushEffectSmoothBlending::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBrushEffectSmoothBlending_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectSmoothBlending_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBrushEffectSmoothBlending_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBrushEffectSmoothBlending>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectSmoothBlending_Statics::NewProp_InnerSmoothDistance_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushEffectSmoothBlending_Statics::NewProp_InnerSmoothDistance = { "InnerSmoothDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushEffectSmoothBlending, InnerSmoothDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectSmoothBlending_Statics::NewProp_InnerSmoothDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectSmoothBlending_Statics::NewProp_InnerSmoothDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectSmoothBlending_Statics::NewProp_OuterSmoothDistance_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushEffectSmoothBlending_Statics::NewProp_OuterSmoothDistance = { "OuterSmoothDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushEffectSmoothBlending, OuterSmoothDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectSmoothBlending_Statics::NewProp_OuterSmoothDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectSmoothBlending_Statics::NewProp_OuterSmoothDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBrushEffectSmoothBlending_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectSmoothBlending_Statics::NewProp_InnerSmoothDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectSmoothBlending_Statics::NewProp_OuterSmoothDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBrushEffectSmoothBlending_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landmass,
		nullptr,
		&NewStructOps,
		"BrushEffectSmoothBlending",
		sizeof(FBrushEffectSmoothBlending),
		alignof(FBrushEffectSmoothBlending),
		Z_Construct_UScriptStruct_FBrushEffectSmoothBlending_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectSmoothBlending_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectSmoothBlending_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectSmoothBlending_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBrushEffectSmoothBlending()
	{
		if (!Z_Registration_Info_UScriptStruct_BrushEffectSmoothBlending.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BrushEffectSmoothBlending.InnerSingleton, Z_Construct_UScriptStruct_FBrushEffectSmoothBlending_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BrushEffectSmoothBlending.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BrushEffectTerracing;
class UScriptStruct* FBrushEffectTerracing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BrushEffectTerracing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BrushEffectTerracing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBrushEffectTerracing, (UObject*)Z_Construct_UPackage__Script_Landmass(), TEXT("BrushEffectTerracing"));
	}
	return Z_Registration_Info_UScriptStruct_BrushEffectTerracing.OuterSingleton;
}
template<> LANDMASS_API UScriptStruct* StaticStruct<FBrushEffectTerracing>()
{
	return FBrushEffectTerracing::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBrushEffectTerracing>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_TerraceAlpha_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_TerraceAlpha = { "TerraceAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushEffectTerracing, TerraceAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_TerraceAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_TerraceAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_TerraceSpacing_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_TerraceSpacing = { "TerraceSpacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushEffectTerracing, TerraceSpacing), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_TerraceSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_TerraceSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_TerraceSmoothness_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_TerraceSmoothness = { "TerraceSmoothness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushEffectTerracing, TerraceSmoothness), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_TerraceSmoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_TerraceSmoothness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_MaskLength_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_MaskLength = { "MaskLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushEffectTerracing, MaskLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_MaskLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_MaskLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_MaskStartOffset_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_MaskStartOffset = { "MaskStartOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushEffectTerracing, MaskStartOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_MaskStartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_MaskStartOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_TerraceAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_TerraceSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_TerraceSmoothness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_MaskLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewProp_MaskStartOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landmass,
		nullptr,
		&NewStructOps,
		"BrushEffectTerracing",
		sizeof(FBrushEffectTerracing),
		alignof(FBrushEffectTerracing),
		Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBrushEffectTerracing()
	{
		if (!Z_Registration_Info_UScriptStruct_BrushEffectTerracing.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BrushEffectTerracing.InnerSingleton, Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BrushEffectTerracing.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandmassBrushEffectsList;
class UScriptStruct* FLandmassBrushEffectsList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandmassBrushEffectsList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandmassBrushEffectsList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandmassBrushEffectsList, (UObject*)Z_Construct_UPackage__Script_Landmass(), TEXT("LandmassBrushEffectsList"));
	}
	return Z_Registration_Info_UScriptStruct_LandmassBrushEffectsList.OuterSingleton;
}
template<> LANDMASS_API UScriptStruct* StaticStruct<FLandmassBrushEffectsList>()
{
	return FLandmassBrushEffectsList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandmassBrushEffectsList>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_Blurring_MetaData[] = {
		{ "Category", "BrushEffects" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_Blurring = { "Blurring", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandmassBrushEffectsList, Blurring), Z_Construct_UScriptStruct_FBrushEffectBlurring, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_Blurring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_Blurring_MetaData)) }; // 18980898
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_CurlNoise_MetaData[] = {
		{ "Category", "FalloffSettings" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_CurlNoise = { "CurlNoise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandmassBrushEffectsList, CurlNoise), Z_Construct_UScriptStruct_FBrushEffectCurlNoise, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_CurlNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_CurlNoise_MetaData)) }; // 2504480470
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_Displacement_MetaData[] = {
		{ "Category", "FalloffSettings" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_Displacement = { "Displacement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandmassBrushEffectsList, Displacement), Z_Construct_UScriptStruct_FBrushEffectDisplacement, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_Displacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_Displacement_MetaData)) }; // 2773971928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_SmoothBlending_MetaData[] = {
		{ "Category", "FalloffSettings" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_SmoothBlending = { "SmoothBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandmassBrushEffectsList, SmoothBlending), Z_Construct_UScriptStruct_FBrushEffectSmoothBlending, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_SmoothBlending_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_SmoothBlending_MetaData)) }; // 3835747182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_Terracing_MetaData[] = {
		{ "Category", "FalloffSettings" },
		{ "ModuleRelativePath", "Public/BrushEffectsList.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_Terracing = { "Terracing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandmassBrushEffectsList, Terracing), Z_Construct_UScriptStruct_FBrushEffectTerracing, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_Terracing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_Terracing_MetaData)) }; // 3470422934
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_Blurring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_CurlNoise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_Displacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_SmoothBlending,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewProp_Terracing,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landmass,
		nullptr,
		&NewStructOps,
		"LandmassBrushEffectsList",
		sizeof(FLandmassBrushEffectsList),
		alignof(FLandmassBrushEffectsList),
		Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandmassBrushEffectsList()
	{
		if (!Z_Registration_Info_UScriptStruct_LandmassBrushEffectsList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandmassBrushEffectsList.InnerSingleton, Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandmassBrushEffectsList.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_BrushEffectsList_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_BrushEffectsList_h_Statics::ScriptStructInfo[] = {
		{ FBrushEffectBlurring::StaticStruct, Z_Construct_UScriptStruct_FBrushEffectBlurring_Statics::NewStructOps, TEXT("BrushEffectBlurring"), &Z_Registration_Info_UScriptStruct_BrushEffectBlurring, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBrushEffectBlurring), 18980898U) },
		{ FBrushEffectCurlNoise::StaticStruct, Z_Construct_UScriptStruct_FBrushEffectCurlNoise_Statics::NewStructOps, TEXT("BrushEffectCurlNoise"), &Z_Registration_Info_UScriptStruct_BrushEffectCurlNoise, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBrushEffectCurlNoise), 2504480470U) },
		{ FBrushEffectCurves::StaticStruct, Z_Construct_UScriptStruct_FBrushEffectCurves_Statics::NewStructOps, TEXT("BrushEffectCurves"), &Z_Registration_Info_UScriptStruct_BrushEffectCurves, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBrushEffectCurves), 3300761385U) },
		{ FBrushEffectDisplacement::StaticStruct, Z_Construct_UScriptStruct_FBrushEffectDisplacement_Statics::NewStructOps, TEXT("BrushEffectDisplacement"), &Z_Registration_Info_UScriptStruct_BrushEffectDisplacement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBrushEffectDisplacement), 2773971928U) },
		{ FBrushEffectSmoothBlending::StaticStruct, Z_Construct_UScriptStruct_FBrushEffectSmoothBlending_Statics::NewStructOps, TEXT("BrushEffectSmoothBlending"), &Z_Registration_Info_UScriptStruct_BrushEffectSmoothBlending, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBrushEffectSmoothBlending), 3835747182U) },
		{ FBrushEffectTerracing::StaticStruct, Z_Construct_UScriptStruct_FBrushEffectTerracing_Statics::NewStructOps, TEXT("BrushEffectTerracing"), &Z_Registration_Info_UScriptStruct_BrushEffectTerracing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBrushEffectTerracing), 3470422934U) },
		{ FLandmassBrushEffectsList::StaticStruct, Z_Construct_UScriptStruct_FLandmassBrushEffectsList_Statics::NewStructOps, TEXT("LandmassBrushEffectsList"), &Z_Registration_Info_UScriptStruct_LandmassBrushEffectsList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandmassBrushEffectsList), 1346357647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_BrushEffectsList_h_574691072(TEXT("/Script/Landmass"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_BrushEffectsList_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_BrushEffectsList_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
