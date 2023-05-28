// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionVectorNoise.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionVectorNoise() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVectorNoise();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVectorNoise_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVectorNoiseFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVectorNoiseFunction;
	static UEnum* EVectorNoiseFunction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVectorNoiseFunction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVectorNoiseFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVectorNoiseFunction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVectorNoiseFunction"));
		}
		return Z_Registration_Info_UEnum_EVectorNoiseFunction.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVectorNoiseFunction>()
	{
		return EVectorNoiseFunction_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EVectorNoiseFunction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EVectorNoiseFunction_Statics::Enumerators[] = {
		{ "VNF_CellnoiseALU", (int64)VNF_CellnoiseALU },
		{ "VNF_VectorALU", (int64)VNF_VectorALU },
		{ "VNF_GradientALU", (int64)VNF_GradientALU },
		{ "VNF_CurlALU", (int64)VNF_CurlALU },
		{ "VNF_VoronoiALU", (int64)VNF_VoronoiALU },
		{ "VNF_MAX", (int64)VNF_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EVectorNoiseFunction_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorNoise.h" },
		{ "VNF_CellnoiseALU.Comment", "/** Random color for each unit cell in 3D space.\n\x09  * RGB output range 0 to 1\n\x09  * R only = 9 instructions, RGB = 11 instructions\n\x09  */" },
		{ "VNF_CellnoiseALU.DisplayName", "Cellnoise" },
		{ "VNF_CellnoiseALU.Name", "VNF_CellnoiseALU" },
		{ "VNF_CellnoiseALU.ToolTip", "Random color for each unit cell in 3D space.\nRGB output range 0 to 1\nR only = 9 instructions, RGB = 11 instructions" },
		{ "VNF_CurlALU.Comment", "/** Curl of Perlin noise, useful for 3D flow directions.\n\x09  * RGB = signed curl vector\n\x09  * ~162 instructions\n\x09  */" },
		{ "VNF_CurlALU.DisplayName", "Perlin Curl" },
		{ "VNF_CurlALU.Name", "VNF_CurlALU" },
		{ "VNF_CurlALU.ToolTip", "Curl of Perlin noise, useful for 3D flow directions.\nRGB = signed curl vector\n~162 instructions" },
		{ "VNF_GradientALU.Comment", "/** Gradient of Perlin noise, useful for bumps.\n\x09  * RGB = Gradient of scalar noise (signed 3D vector)\n\x09  * A = Base scalar noise with range -1 to 1\n\x09  * A only = ~83 instructions, RGBA = ~106 instructions\n\x09  */" },
		{ "VNF_GradientALU.DisplayName", "Perlin Gradient" },
		{ "VNF_GradientALU.Name", "VNF_GradientALU" },
		{ "VNF_GradientALU.ToolTip", "Gradient of Perlin noise, useful for bumps.\nRGB = Gradient of scalar noise (signed 3D vector)\nA = Base scalar noise with range -1 to 1\nA only = ~83 instructions, RGBA = ~106 instructions" },
		{ "VNF_MAX.Name", "VNF_MAX" },
		{ "VNF_VectorALU.Comment", "/** Perlin-style noise with 3D vector/color output.\n\x09  * RGB output range -1 to 1\n\x09  * R only = ~83 instructions, RGB = ~125 instructions\n\x09  */" },
		{ "VNF_VectorALU.DisplayName", "Perlin 3D Noise" },
		{ "VNF_VectorALU.Name", "VNF_VectorALU" },
		{ "VNF_VectorALU.ToolTip", "Perlin-style noise with 3D vector/color output.\nRGB output range -1 to 1\nR only = ~83 instructions, RGB = ~125 instructions" },
		{ "VNF_VoronoiALU.Comment", "/** Also known as Worley or Cellular noise.\n\x09  * RGB = *position* of closest point at center of Voronoi cell\n\x09  * A = distance to closest point with range 0 to about 4\n\x09  * Quality levels 1-4 search 8, 16, 27 & 32 cells\n\x09  * All ~20 instructions per cell searched\n\x09  */" },
		{ "VNF_VoronoiALU.DisplayName", "Voronoi" },
		{ "VNF_VoronoiALU.Name", "VNF_VoronoiALU" },
		{ "VNF_VoronoiALU.ToolTip", "Also known as Worley or Cellular noise.\nRGB = *position* of closest point at center of Voronoi cell\nA = distance to closest point with range 0 to about 4\nQuality levels 1-4 search 8, 16, 27 & 32 cells\nAll ~20 instructions per cell searched" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVectorNoiseFunction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EVectorNoiseFunction",
		"EVectorNoiseFunction",
		Z_Construct_UEnum_Engine_EVectorNoiseFunction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVectorNoiseFunction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EVectorNoiseFunction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVectorNoiseFunction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EVectorNoiseFunction()
	{
		if (!Z_Registration_Info_UEnum_EVectorNoiseFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVectorNoiseFunction.InnerSingleton, Z_Construct_UEnum_Engine_EVectorNoiseFunction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVectorNoiseFunction.InnerSingleton;
	}
	void UMaterialExpressionVectorNoise::StaticRegisterNativesUMaterialExpressionVectorNoise()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionVectorNoise);
	UClass* Z_Construct_UClass_UMaterialExpressionVectorNoise_NoRegister()
	{
		return UMaterialExpressionVectorNoise::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseFunction_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NoiseFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTiling_MetaData[];
#endif
		static void NewProp_bTiling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TileSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionVectorNoise.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorNoise.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "/** 2 to 3 dimensional vector */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorNoise.h" },
		{ "ToolTip", "2 to 3 dimensional vector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionVectorNoise, Position), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_NoiseFunction_MetaData[] = {
		{ "Category", "MaterialExpressionVectorNoise" },
		{ "Comment", "/** Noise function, affects performance and look */" },
		{ "DisplayName", "Function" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorNoise.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Noise function, affects performance and look" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_NoiseFunction = { "NoiseFunction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionVectorNoise, NoiseFunction), Z_Construct_UEnum_Engine_EVectorNoiseFunction, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_NoiseFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_NoiseFunction_MetaData)) }; // 293795529
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Quality_MetaData[] = {
		{ "Category", "MaterialExpressionVectorNoise" },
		{ "Comment", "/** For noise functions where applicable, lower numbers are faster and lower quality, higher numbers are slower and higher quality */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorNoise.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "For noise functions where applicable, lower numbers are faster and lower quality, higher numbers are slower and higher quality" },
		{ "UIMax", "4" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionVectorNoise, Quality), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Quality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Quality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_bTiling_MetaData[] = {
		{ "Category", "MaterialExpressionVectorNoise" },
		{ "Comment", "/** Whether tile the noise pattern, useful for baking to seam-free repeating textures */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorNoise.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Whether tile the noise pattern, useful for baking to seam-free repeating textures" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_bTiling_SetBit(void* Obj)
	{
		((UMaterialExpressionVectorNoise*)Obj)->bTiling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_bTiling = { "bTiling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionVectorNoise), &Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_bTiling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_bTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_bTiling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_TileSize_MetaData[] = {
		{ "Category", "MaterialExpressionVectorNoise" },
		{ "Comment", "/** How many units in each tile (if Tiling is on) \n\x09  * For Perlin noise functions, Tile Size must be a multiple of three\n\x09  */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorNoise.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "How many units in each tile (if Tiling is on)\nFor Perlin noise functions, Tile Size must be a multiple of three" },
		{ "UIMin", "4" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionVectorNoise, TileSize), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_TileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_TileSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_NoiseFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Quality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_bTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_TileSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVectorNoise>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::ClassParams = {
		&UMaterialExpressionVectorNoise::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionVectorNoise()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionVectorNoise.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionVectorNoise.OuterSingleton, Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionVectorNoise.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionVectorNoise>()
	{
		return UMaterialExpressionVectorNoise::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVectorNoise);
	UMaterialExpressionVectorNoise::~UMaterialExpressionVectorNoise() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_Statics::EnumInfo[] = {
		{ EVectorNoiseFunction_StaticEnum, TEXT("EVectorNoiseFunction"), &Z_Registration_Info_UEnum_EVectorNoiseFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 293795529U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionVectorNoise, UMaterialExpressionVectorNoise::StaticClass, TEXT("UMaterialExpressionVectorNoise"), &Z_Registration_Info_UClass_UMaterialExpressionVectorNoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionVectorNoise), 3963767588U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_2720802771(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
