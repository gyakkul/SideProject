// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionNoise.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionNoise() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNoise();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNoise_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENoiseFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENoiseFunction;
	static UEnum* ENoiseFunction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENoiseFunction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENoiseFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENoiseFunction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENoiseFunction"));
		}
		return Z_Registration_Info_UEnum_ENoiseFunction.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENoiseFunction>()
	{
		return ENoiseFunction_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ENoiseFunction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ENoiseFunction_Statics::Enumerators[] = {
		{ "NOISEFUNCTION_SimplexTex", (int64)NOISEFUNCTION_SimplexTex },
		{ "NOISEFUNCTION_GradientTex", (int64)NOISEFUNCTION_GradientTex },
		{ "NOISEFUNCTION_GradientTex3D", (int64)NOISEFUNCTION_GradientTex3D },
		{ "NOISEFUNCTION_GradientALU", (int64)NOISEFUNCTION_GradientALU },
		{ "NOISEFUNCTION_ValueALU", (int64)NOISEFUNCTION_ValueALU },
		{ "NOISEFUNCTION_VoronoiALU", (int64)NOISEFUNCTION_VoronoiALU },
		{ "NOISEFUNCTION_MAX", (int64)NOISEFUNCTION_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ENoiseFunction_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "NOISEFUNCTION_GradientALU.Comment", "/** High quality for direct use and bumps\n\x09 * Non-tiled: ~80 instructions per level, no textures\n\x09 * Tiling: ~143 instructions per level, no textures\n\x09 */" },
		{ "NOISEFUNCTION_GradientALU.DisplayName", "Gradient - Computational" },
		{ "NOISEFUNCTION_GradientALU.Name", "NOISEFUNCTION_GradientALU" },
		{ "NOISEFUNCTION_GradientALU.ToolTip", "High quality for direct use and bumps\nNon-tiled: ~80 instructions per level, no textures\nTiling: ~143 instructions per level, no textures" },
		{ "NOISEFUNCTION_GradientTex.Comment", "/** High quality for direct use and bumps\n\x09 * Non-tiled: ~61 instructions per level, 8 texture lookups\n\x09 * Tiling: ~74 instructions per level, 8 texture lookups\n\x09 * Even \"non-tiled\" mode has a repeat of 128. Useful Repeat Size range <= 128\n\x09 * Formerly labeled as Perlin noise\n\x09 */" },
		{ "NOISEFUNCTION_GradientTex.DisplayName", "Gradient - Texture Based" },
		{ "NOISEFUNCTION_GradientTex.Name", "NOISEFUNCTION_GradientTex" },
		{ "NOISEFUNCTION_GradientTex.ToolTip", "High quality for direct use and bumps\nNon-tiled: ~61 instructions per level, 8 texture lookups\nTiling: ~74 instructions per level, 8 texture lookups\nEven \"non-tiled\" mode has a repeat of 128. Useful Repeat Size range <= 128\nFormerly labeled as Perlin noise" },
		{ "NOISEFUNCTION_GradientTex3D.Comment", "/** High quality for direct use, BAD for bumps; doesn't work on Mobile\n\x09 * ~16 instructions per level, 1 texture lookup\n\x09 * Always tiles with a repeat of 16, \"Tiling\" mode is not an option for Fast Gradient noise\n\x09 */" },
		{ "NOISEFUNCTION_GradientTex3D.DisplayName", "Fast Gradient - 3D Texture" },
		{ "NOISEFUNCTION_GradientTex3D.Name", "NOISEFUNCTION_GradientTex3D" },
		{ "NOISEFUNCTION_GradientTex3D.ToolTip", "High quality for direct use, BAD for bumps; doesn't work on Mobile\n~16 instructions per level, 1 texture lookup\nAlways tiles with a repeat of 16, \"Tiling\" mode is not an option for Fast Gradient noise" },
		{ "NOISEFUNCTION_MAX.Name", "NOISEFUNCTION_MAX" },
		{ "NOISEFUNCTION_SimplexTex.Comment", "/** High quality for direct use and bumps \n\x09 * ~77 instructions per level, 4 texture lookups\n\x09 * Cannot tile\n\x09 */" },
		{ "NOISEFUNCTION_SimplexTex.DisplayName", "Simplex - Texture Based" },
		{ "NOISEFUNCTION_SimplexTex.Name", "NOISEFUNCTION_SimplexTex" },
		{ "NOISEFUNCTION_SimplexTex.ToolTip", "High quality for direct use and bumps\n~77 instructions per level, 4 texture lookups\nCannot tile" },
		{ "NOISEFUNCTION_ValueALU.Comment", "/** Low quality, but pure computation\n\x09 * Non-tiled: ~53 instructions per level, no textures\n\x09 * Tiling: ~118 instructions per level, no textures\n\x09 * Formerly mis-labeled as Gradient noise\n\x09 */" },
		{ "NOISEFUNCTION_ValueALU.DisplayName", "Value - Computational" },
		{ "NOISEFUNCTION_ValueALU.Name", "NOISEFUNCTION_ValueALU" },
		{ "NOISEFUNCTION_ValueALU.ToolTip", "Low quality, but pure computation\nNon-tiled: ~53 instructions per level, no textures\nTiling: ~118 instructions per level, no textures\nFormerly mis-labeled as Gradient noise" },
		{ "NOISEFUNCTION_VoronoiALU.Comment", "/** Also known as Worley or Cellular noise\n\x09  * Quality=1 searches 8 cells, Quality=2 searches 16 cells\n\x09  * Quality=3 searches 27 cells, Quality=4 searches 32 cells\n\x09  * All are about 20 instructions per cell searched\n\x09  */" },
		{ "NOISEFUNCTION_VoronoiALU.DisplayName", "Voronoi" },
		{ "NOISEFUNCTION_VoronoiALU.Name", "NOISEFUNCTION_VoronoiALU" },
		{ "NOISEFUNCTION_VoronoiALU.ToolTip", "Also known as Worley or Cellular noise\nQuality=1 searches 8 cells, Quality=2 searches 16 cells\nQuality=3 searches 27 cells, Quality=4 searches 32 cells\nAll are about 20 instructions per cell searched" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENoiseFunction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ENoiseFunction",
		"ENoiseFunction",
		Z_Construct_UEnum_Engine_ENoiseFunction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENoiseFunction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ENoiseFunction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENoiseFunction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ENoiseFunction()
	{
		if (!Z_Registration_Info_UEnum_ENoiseFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENoiseFunction.InnerSingleton, Z_Construct_UEnum_Engine_ENoiseFunction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENoiseFunction.InnerSingleton;
	}
	void UMaterialExpressionNoise::StaticRegisterNativesUMaterialExpressionNoise()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionNoise);
	UClass* Z_Construct_UClass_UMaterialExpressionNoise_NoRegister()
	{
		return UMaterialExpressionNoise::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionNoise_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterWidth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilterWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseFunction_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NoiseFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTurbulence_MetaData[];
#endif
		static void NewProp_bTurbulence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTurbulence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Levels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Levels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTiling_MetaData[];
#endif
		static void NewProp_bTiling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepeatSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_RepeatSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionNoise.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "/** 2 to 3 dimensional vector */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "2 to 3 dimensional vector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionNoise, Position), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_FilterWidth_MetaData[] = {
		{ "Comment", "/** scalar, to clamp the Levels at pixel level, can be computed like this: max(length(ddx(Position)), length(ddy(Position)) */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "scalar, to clamp the Levels at pixel level, can be computed like this: max(length(ddx(Position)), length(ddy(Position))" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_FilterWidth = { "FilterWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionNoise, FilterWidth), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_FilterWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_FilterWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "Comment", "/** can also be done with a multiply on the Position */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "can also be done with a multiply on the Position" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionNoise, Scale), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Quality_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "Comment", "/** Lower numbers are faster and lower quality, higher numbers are slower and higher quality */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "Lower numbers are faster and lower quality, higher numbers are slower and higher quality" },
		{ "UIMax", "4" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionNoise, Quality), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Quality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Quality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_NoiseFunction_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "Comment", "/** Noise function, affects performance and look */" },
		{ "DisplayName", "Function" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "Noise function, affects performance and look" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_NoiseFunction = { "NoiseFunction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionNoise, NoiseFunction), Z_Construct_UEnum_Engine_ENoiseFunction, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_NoiseFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_NoiseFunction_MetaData)) }; // 3361230312
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTurbulence_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "Comment", "/** How multiple frequencies are getting combined */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "How multiple frequencies are getting combined" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTurbulence_SetBit(void* Obj)
	{
		((UMaterialExpressionNoise*)Obj)->bTurbulence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTurbulence = { "bTurbulence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionNoise), &Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTurbulence_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTurbulence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTurbulence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Levels_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "Comment", "/** 1 = fast but little detail, .. larger numbers cost more performance */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "1 = fast but little detail, .. larger numbers cost more performance" },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Levels = { "Levels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionNoise, Levels), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Levels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Levels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMin_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMin = { "OutputMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionNoise, OutputMin), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMax_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMax = { "OutputMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionNoise, OutputMax), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_LevelScale_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "Comment", "/** usually 2 but higher values allow efficient use of few levels */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "usually 2 but higher values allow efficient use of few levels" },
		{ "UIMax", "8" },
		{ "UIMin", "2" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_LevelScale = { "LevelScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionNoise, LevelScale), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_LevelScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_LevelScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTiling_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "Comment", "/** Whether to use tiling noise pattern, useful for baking to seam-free repeating textures */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "Whether to use tiling noise pattern, useful for baking to seam-free repeating textures" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTiling_SetBit(void* Obj)
	{
		((UMaterialExpressionNoise*)Obj)->bTiling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTiling = { "bTiling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionNoise), &Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTiling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTiling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_RepeatSize_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "Comment", "/** How many units in each tile (if Tiling is on) */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "How many units in each tile (if Tiling is on)" },
		{ "UIMin", "4" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_RepeatSize = { "RepeatSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionNoise, RepeatSize), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_RepeatSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_RepeatSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_FilterWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Quality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_NoiseFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTurbulence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Levels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_LevelScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_RepeatSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionNoise>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::ClassParams = {
		&UMaterialExpressionNoise::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionNoise_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionNoise()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionNoise.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionNoise.OuterSingleton, Z_Construct_UClass_UMaterialExpressionNoise_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionNoise.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionNoise>()
	{
		return UMaterialExpressionNoise::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionNoise);
	UMaterialExpressionNoise::~UMaterialExpressionNoise() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_Statics::EnumInfo[] = {
		{ ENoiseFunction_StaticEnum, TEXT("ENoiseFunction"), &Z_Registration_Info_UEnum_ENoiseFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3361230312U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionNoise, UMaterialExpressionNoise::StaticClass, TEXT("UMaterialExpressionNoise"), &Z_Registration_Info_UClass_UMaterialExpressionNoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionNoise), 2790549269U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_2683438297(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
