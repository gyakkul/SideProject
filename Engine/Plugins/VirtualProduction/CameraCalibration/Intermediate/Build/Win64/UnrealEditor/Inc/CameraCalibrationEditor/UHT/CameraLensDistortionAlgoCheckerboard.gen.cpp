// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Calibrators/CameraLensDistortionAlgoCheckerboard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraLensDistortionAlgoCheckerboard() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraLensDistortionAlgo();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UCameraLensDistortionAlgoCheckerboard();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UCameraLensDistortionAlgoCheckerboard_NoRegister();
	CAMERACALIBRATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData();
	CAMERACALIBRATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensDistortionCheckerboardCameraData;
class UScriptStruct* FLensDistortionCheckerboardCameraData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensDistortionCheckerboardCameraData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensDistortionCheckerboardCameraData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationEditor(), TEXT("LensDistortionCheckerboardCameraData"));
	}
	return Z_Registration_Info_UScriptStruct_LensDistortionCheckerboardCameraData.OuterSingleton;
}
template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<FLensDistortionCheckerboardCameraData>()
{
	return FLensDistortionCheckerboardCameraData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputFocus_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputFocus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputZoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds camera information that can be used to add the samples */" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoCheckerboard.h" },
		{ "ToolTip", "Holds camera information that can be used to add the samples" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensDistortionCheckerboardCameraData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Comment", "// True if the rest of the contents are valid.\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoCheckerboard.h" },
		{ "ToolTip", "True if the rest of the contents are valid." },
	};
#endif
	void Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FLensDistortionCheckerboardCameraData*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLensDistortionCheckerboardCameraData), &Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::NewProp_bIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::NewProp_InputFocus_MetaData[] = {
		{ "Comment", "// Input focus from lens file evaluation data\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoCheckerboard.h" },
		{ "ToolTip", "Input focus from lens file evaluation data" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::NewProp_InputFocus = { "InputFocus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionCheckerboardCameraData, InputFocus), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::NewProp_InputFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::NewProp_InputFocus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::NewProp_InputZoom_MetaData[] = {
		{ "Comment", "// Input zoom from lens file evaluation data\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoCheckerboard.h" },
		{ "ToolTip", "Input zoom from lens file evaluation data" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::NewProp_InputZoom = { "InputZoom", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionCheckerboardCameraData, InputZoom), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::NewProp_InputZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::NewProp_InputZoom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::NewProp_InputFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::NewProp_InputZoom,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
		nullptr,
		&NewStructOps,
		"LensDistortionCheckerboardCameraData",
		sizeof(FLensDistortionCheckerboardCameraData),
		alignof(FLensDistortionCheckerboardCameraData),
		Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData()
	{
		if (!Z_Registration_Info_UScriptStruct_LensDistortionCheckerboardCameraData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensDistortionCheckerboardCameraData.InnerSingleton, Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LensDistortionCheckerboardCameraData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensDistortionCheckerboardRowData;
class UScriptStruct* FLensDistortionCheckerboardRowData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensDistortionCheckerboardRowData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensDistortionCheckerboardRowData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationEditor(), TEXT("LensDistortionCheckerboardRowData"));
	}
	return Z_Registration_Info_UScriptStruct_LensDistortionCheckerboardRowData.OuterSingleton;
}
template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<FLensDistortionCheckerboardRowData>()
{
	return FLensDistortionCheckerboardRowData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points2d_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points2d_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points2d;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points3d_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points3d_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points3d;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalibratorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CalibratorName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCornerRows_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCornerRows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCornerCols_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCornerCols;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SquareSideInCm_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SquareSideInCm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImageWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImageHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds information of the calibration row */" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoCheckerboard.h" },
		{ "ToolTip", "Holds information of the calibration row" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensDistortionCheckerboardRowData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_Index_MetaData[] = {
		{ "Comment", "// Index to display in list\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoCheckerboard.h" },
		{ "ToolTip", "Index to display in list" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionCheckerboardRowData, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_Points2d_Inner = { "Points2d", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_Points2d_MetaData[] = {
		{ "Comment", "// Checkerboard corners in 2d image pixel coordinates.\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoCheckerboard.h" },
		{ "ToolTip", "Checkerboard corners in 2d image pixel coordinates." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_Points2d = { "Points2d", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionCheckerboardRowData, Points2d), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_Points2d_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_Points2d_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_Points3d_Inner = { "Points3d", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_Points3d_MetaData[] = {
		{ "Comment", "// Checkerboard corners in 3d local space.\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoCheckerboard.h" },
		{ "ToolTip", "Checkerboard corners in 3d local space." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_Points3d = { "Points3d", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionCheckerboardRowData, Points3d), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_Points3d_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_Points3d_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_CalibratorName_MetaData[] = {
		{ "Comment", "// Which calibrator was used\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoCheckerboard.h" },
		{ "ToolTip", "Which calibrator was used" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_CalibratorName = { "CalibratorName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionCheckerboardRowData, CalibratorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_CalibratorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_CalibratorName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_NumCornerRows_MetaData[] = {
		{ "Comment", "// Number of corner rows in pattern\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoCheckerboard.h" },
		{ "ToolTip", "Number of corner rows in pattern" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_NumCornerRows = { "NumCornerRows", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionCheckerboardRowData, NumCornerRows), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_NumCornerRows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_NumCornerRows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_NumCornerCols_MetaData[] = {
		{ "Comment", "// Number of corner columns in pattern\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoCheckerboard.h" },
		{ "ToolTip", "Number of corner columns in pattern" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_NumCornerCols = { "NumCornerCols", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionCheckerboardRowData, NumCornerCols), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_NumCornerCols_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_NumCornerCols_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_SquareSideInCm_MetaData[] = {
		{ "Comment", "// Side dimension in cm\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoCheckerboard.h" },
		{ "ToolTip", "Side dimension in cm" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_SquareSideInCm = { "SquareSideInCm", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionCheckerboardRowData, SquareSideInCm), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_SquareSideInCm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_SquareSideInCm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_ImageWidth_MetaData[] = {
		{ "Comment", "// Width of image\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoCheckerboard.h" },
		{ "ToolTip", "Width of image" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_ImageWidth = { "ImageWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionCheckerboardRowData, ImageWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_ImageWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_ImageWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_ImageHeight_MetaData[] = {
		{ "Comment", "// Height of image\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoCheckerboard.h" },
		{ "ToolTip", "Height of image" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_ImageHeight = { "ImageHeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionCheckerboardRowData, ImageHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_ImageHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_ImageHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_CameraData_MetaData[] = {
		{ "Comment", "// Holds information of the camera data for this sample\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoCheckerboard.h" },
		{ "ToolTip", "Holds information of the camera data for this sample" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_CameraData = { "CameraData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionCheckerboardRowData, CameraData), Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_CameraData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_CameraData_MetaData)) }; // 960350804
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_Points2d_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_Points2d,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_Points3d_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_Points3d,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_CalibratorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_NumCornerRows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_NumCornerCols,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_SquareSideInCm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_ImageWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_ImageHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewProp_CameraData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
		nullptr,
		&NewStructOps,
		"LensDistortionCheckerboardRowData",
		sizeof(FLensDistortionCheckerboardRowData),
		alignof(FLensDistortionCheckerboardRowData),
		Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData()
	{
		if (!Z_Registration_Info_UScriptStruct_LensDistortionCheckerboardRowData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensDistortionCheckerboardRowData.InnerSingleton, Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LensDistortionCheckerboardRowData.InnerSingleton;
	}
	void UCameraLensDistortionAlgoCheckerboard::StaticRegisterNativesUCameraLensDistortionAlgoCheckerboard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraLensDistortionAlgoCheckerboard);
	UClass* Z_Construct_UClass_UCameraLensDistortionAlgoCheckerboard_NoRegister()
	{
		return UCameraLensDistortionAlgoCheckerboard::StaticClass();
	}
	struct Z_Construct_UClass_UCameraLensDistortionAlgoCheckerboard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraLensDistortionAlgoCheckerboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraLensDistortionAlgo,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraLensDistortionAlgoCheckerboard_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Implements a lens distortion calibration algorithm. It requires a checkerboard pattern\n */" },
		{ "IncludePath", "Calibrators/CameraLensDistortionAlgoCheckerboard.h" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoCheckerboard.h" },
		{ "ToolTip", "Implements a lens distortion calibration algorithm. It requires a checkerboard pattern" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraLensDistortionAlgoCheckerboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraLensDistortionAlgoCheckerboard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraLensDistortionAlgoCheckerboard_Statics::ClassParams = {
		&UCameraLensDistortionAlgoCheckerboard::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraLensDistortionAlgoCheckerboard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraLensDistortionAlgoCheckerboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraLensDistortionAlgoCheckerboard()
	{
		if (!Z_Registration_Info_UClass_UCameraLensDistortionAlgoCheckerboard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraLensDistortionAlgoCheckerboard.OuterSingleton, Z_Construct_UClass_UCameraLensDistortionAlgoCheckerboard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraLensDistortionAlgoCheckerboard.OuterSingleton;
	}
	template<> CAMERACALIBRATIONEDITOR_API UClass* StaticClass<UCameraLensDistortionAlgoCheckerboard>()
	{
		return UCameraLensDistortionAlgoCheckerboard::StaticClass();
	}
	UCameraLensDistortionAlgoCheckerboard::UCameraLensDistortionAlgoCheckerboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraLensDistortionAlgoCheckerboard);
	UCameraLensDistortionAlgoCheckerboard::~UCameraLensDistortionAlgoCheckerboard() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraLensDistortionAlgoCheckerboard_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraLensDistortionAlgoCheckerboard_h_Statics::ScriptStructInfo[] = {
		{ FLensDistortionCheckerboardCameraData::StaticStruct, Z_Construct_UScriptStruct_FLensDistortionCheckerboardCameraData_Statics::NewStructOps, TEXT("LensDistortionCheckerboardCameraData"), &Z_Registration_Info_UScriptStruct_LensDistortionCheckerboardCameraData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensDistortionCheckerboardCameraData), 960350804U) },
		{ FLensDistortionCheckerboardRowData::StaticStruct, Z_Construct_UScriptStruct_FLensDistortionCheckerboardRowData_Statics::NewStructOps, TEXT("LensDistortionCheckerboardRowData"), &Z_Registration_Info_UScriptStruct_LensDistortionCheckerboardRowData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensDistortionCheckerboardRowData), 2355282368U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraLensDistortionAlgoCheckerboard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraLensDistortionAlgoCheckerboard, UCameraLensDistortionAlgoCheckerboard::StaticClass, TEXT("UCameraLensDistortionAlgoCheckerboard"), &Z_Registration_Info_UClass_UCameraLensDistortionAlgoCheckerboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraLensDistortionAlgoCheckerboard), 1925867418U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraLensDistortionAlgoCheckerboard_h_3613888323(TEXT("/Script/CameraCalibrationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraLensDistortionAlgoCheckerboard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraLensDistortionAlgoCheckerboard_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraLensDistortionAlgoCheckerboard_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraLensDistortionAlgoCheckerboard_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
