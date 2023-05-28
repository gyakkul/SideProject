// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Models/AnamorphicLensModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnamorphicLensModel() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UAnamorphicLensModel();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UAnamorphicLensModel_NoRegister();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensModel();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAnamorphicDistortionParameters();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnamorphicDistortionParameters;
class UScriptStruct* FAnamorphicDistortionParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnamorphicDistortionParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnamorphicDistortionParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("AnamorphicDistortionParameters"));
	}
	return Z_Registration_Info_UScriptStruct_AnamorphicDistortionParameters.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FAnamorphicDistortionParameters>()
{
	return FAnamorphicDistortionParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelAspect_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelAspect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CX02_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CX02;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CX04_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CX04;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CX22_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CX22;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CX24_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CX24;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CX44_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CX44;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CY02_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CY02;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CY04_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CY04;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CY22_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CY22;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CY24_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CY24;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CY44_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CY44;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SqueezeX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SqueezeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SqueezeY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SqueezeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LensRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Lens distortion parameters for the 3DE4 Anamorphic - Standard Degree 4 model\n * All parameters are unitless and represent the coefficients used to undistort a distorted image\n * For complete model description, see \"tde4_ldm_standard.pdf\" from https://www.3dequalizer.com/ in the Lens Distortion Plugin Kit v2.8 \n */" },
		{ "ModuleRelativePath", "Public/Models/AnamorphicLensModel.h" },
		{ "ToolTip", "Lens distortion parameters for the 3DE4 Anamorphic - Standard Degree 4 model\nAll parameters are unitless and represent the coefficients used to undistort a distorted image\nFor complete model description, see \"tde4_ldm_standard.pdf\" from https://www.3dequalizer.com/ in the Lens Distortion Plugin Kit v2.8" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnamorphicDistortionParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_PixelAspect_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Anamorphic Squeeze (the ratio of the filmback size to the size of the rasterized image) */" },
		{ "ModuleRelativePath", "Public/Models/AnamorphicLensModel.h" },
		{ "ToolTip", "Anamorphic Squeeze (the ratio of the filmback size to the size of the rasterized image)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_PixelAspect = { "PixelAspect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnamorphicDistortionParameters, PixelAspect), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_PixelAspect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_PixelAspect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX02_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** X coefficient of the r^2 term */" },
		{ "ModuleRelativePath", "Public/Models/AnamorphicLensModel.h" },
		{ "ToolTip", "X coefficient of the r^2 term" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX02 = { "CX02", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnamorphicDistortionParameters, CX02), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX02_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX02_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX04_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** X coefficient of the r^4 term */" },
		{ "ModuleRelativePath", "Public/Models/AnamorphicLensModel.h" },
		{ "ToolTip", "X coefficient of the r^4 term" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX04 = { "CX04", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnamorphicDistortionParameters, CX04), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX04_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX04_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX22_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** X coefficient of the r^2*cos(2*phi) term */" },
		{ "ModuleRelativePath", "Public/Models/AnamorphicLensModel.h" },
		{ "ToolTip", "X coefficient of the r^2*cos(2*phi) term" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX22 = { "CX22", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnamorphicDistortionParameters, CX22), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX22_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX22_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX24_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** X coefficient of the r^4*cos(2*phi) term */" },
		{ "ModuleRelativePath", "Public/Models/AnamorphicLensModel.h" },
		{ "ToolTip", "X coefficient of the r^4*cos(2*phi) term" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX24 = { "CX24", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnamorphicDistortionParameters, CX24), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX24_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX24_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX44_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** X coefficient of the r^4*cos(4*phi) term */" },
		{ "ModuleRelativePath", "Public/Models/AnamorphicLensModel.h" },
		{ "ToolTip", "X coefficient of the r^4*cos(4*phi) term" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX44 = { "CX44", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnamorphicDistortionParameters, CX44), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX44_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX44_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY02_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Y coefficient of the r^2 term */" },
		{ "ModuleRelativePath", "Public/Models/AnamorphicLensModel.h" },
		{ "ToolTip", "Y coefficient of the r^2 term" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY02 = { "CY02", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnamorphicDistortionParameters, CY02), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY02_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY02_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY04_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Y coefficient of the r^4 term */" },
		{ "ModuleRelativePath", "Public/Models/AnamorphicLensModel.h" },
		{ "ToolTip", "Y coefficient of the r^4 term" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY04 = { "CY04", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnamorphicDistortionParameters, CY04), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY04_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY04_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY22_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Y coefficient of the r^2*cos(2*phi) term */" },
		{ "ModuleRelativePath", "Public/Models/AnamorphicLensModel.h" },
		{ "ToolTip", "Y coefficient of the r^2*cos(2*phi) term" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY22 = { "CY22", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnamorphicDistortionParameters, CY22), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY22_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY22_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY24_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Y coefficient of the r^4*cos(2*phi) term */" },
		{ "ModuleRelativePath", "Public/Models/AnamorphicLensModel.h" },
		{ "ToolTip", "Y coefficient of the r^4*cos(2*phi) term" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY24 = { "CY24", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnamorphicDistortionParameters, CY24), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY24_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY24_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY44_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Y coefficient of the r^4*cos(4*phi) term */" },
		{ "ModuleRelativePath", "Public/Models/AnamorphicLensModel.h" },
		{ "ToolTip", "Y coefficient of the r^4*cos(4*phi) term" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY44 = { "CY44", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnamorphicDistortionParameters, CY44), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY44_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY44_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_SqueezeX_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Squeeze Factor (should be small, relatively close to 1.0) */" },
		{ "ModuleRelativePath", "Public/Models/AnamorphicLensModel.h" },
		{ "ToolTip", "Squeeze Factor (should be small, relatively close to 1.0)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_SqueezeX = { "SqueezeX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnamorphicDistortionParameters, SqueezeX), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_SqueezeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_SqueezeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_SqueezeY_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Squeeze Factor (should be small, relatively close to 1.0) */" },
		{ "ModuleRelativePath", "Public/Models/AnamorphicLensModel.h" },
		{ "ToolTip", "Squeeze Factor (should be small, relatively close to 1.0)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_SqueezeY = { "SqueezeY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnamorphicDistortionParameters, SqueezeY), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_SqueezeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_SqueezeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_LensRotation_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Lens Rotation in degrees. Represents mounting inaccuracies (should be small, between -2 and +2 degrees) */" },
		{ "ModuleRelativePath", "Public/Models/AnamorphicLensModel.h" },
		{ "ToolTip", "Lens Rotation in degrees. Represents mounting inaccuracies (should be small, between -2 and +2 degrees)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_LensRotation = { "LensRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnamorphicDistortionParameters, LensRotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_LensRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_LensRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_PixelAspect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX02,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX04,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX22,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX24,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CX44,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY02,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY04,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY22,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY24,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_CY44,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_SqueezeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_SqueezeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewProp_LensRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"AnamorphicDistortionParameters",
		sizeof(FAnamorphicDistortionParameters),
		alignof(FAnamorphicDistortionParameters),
		Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnamorphicDistortionParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_AnamorphicDistortionParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnamorphicDistortionParameters.InnerSingleton, Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnamorphicDistortionParameters.InnerSingleton;
	}
	void UAnamorphicLensModel::StaticRegisterNativesUAnamorphicLensModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnamorphicLensModel);
	UClass* Z_Construct_UClass_UAnamorphicLensModel_NoRegister()
	{
		return UAnamorphicLensModel::StaticClass();
	}
	struct Z_Construct_UClass_UAnamorphicLensModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnamorphicLensModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULensModel,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnamorphicLensModel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Anamorphic lens model, using Anamorphic lens distortion parameters\n */" },
		{ "DisplayName", "Anamorphic Lens Model" },
		{ "IncludePath", "Models/AnamorphicLensModel.h" },
		{ "ModuleRelativePath", "Public/Models/AnamorphicLensModel.h" },
		{ "ToolTip", "Anamorphic lens model, using Anamorphic lens distortion parameters" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnamorphicLensModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnamorphicLensModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnamorphicLensModel_Statics::ClassParams = {
		&UAnamorphicLensModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnamorphicLensModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnamorphicLensModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnamorphicLensModel()
	{
		if (!Z_Registration_Info_UClass_UAnamorphicLensModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnamorphicLensModel.OuterSingleton, Z_Construct_UClass_UAnamorphicLensModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnamorphicLensModel.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UClass* StaticClass<UAnamorphicLensModel>()
	{
		return UAnamorphicLensModel::StaticClass();
	}
	UAnamorphicLensModel::UAnamorphicLensModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnamorphicLensModel);
	UAnamorphicLensModel::~UAnamorphicLensModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_AnamorphicLensModel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_AnamorphicLensModel_h_Statics::ScriptStructInfo[] = {
		{ FAnamorphicDistortionParameters::StaticStruct, Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics::NewStructOps, TEXT("AnamorphicDistortionParameters"), &Z_Registration_Info_UScriptStruct_AnamorphicDistortionParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnamorphicDistortionParameters), 1593408769U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_AnamorphicLensModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnamorphicLensModel, UAnamorphicLensModel::StaticClass, TEXT("UAnamorphicLensModel"), &Z_Registration_Info_UClass_UAnamorphicLensModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnamorphicLensModel), 2590791613U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_AnamorphicLensModel_h_3867702144(TEXT("/Script/CameraCalibrationCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_AnamorphicLensModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_AnamorphicLensModel_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_AnamorphicLensModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_AnamorphicLensModel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
