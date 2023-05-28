// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/OpenCVLensCalibrator.h"
#include "OpenCVLensDistortionParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenCVLensCalibrator() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	OPENCVLENSCALIBRATION_API UClass* Z_Construct_UClass_UOpenCVLensCalibrator();
	OPENCVLENSCALIBRATION_API UClass* Z_Construct_UClass_UOpenCVLensCalibrator_NoRegister();
	OPENCVLENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FOpenCVCameraViewInfo();
	OPENCVLENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters();
	UPackage* Z_Construct_UPackage__Script_OpenCVLensCalibration();
// End Cross Module References
	DEFINE_FUNCTION(UOpenCVLensCalibrator::execCalculateLensParameters)
	{
		P_GET_STRUCT_REF(FOpenCVLensDistortionParameters,Z_Param_Out_LensDistortionParameters);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MarginOfError);
		P_GET_STRUCT_REF(FOpenCVCameraViewInfo,Z_Param_Out_CameraViewInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CalculateLensParameters(Z_Param_Out_LensDistortionParameters,Z_Param_Out_MarginOfError,Z_Param_Out_CameraViewInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenCVLensCalibrator::execFeedImage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FeedImage(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenCVLensCalibrator::execFeedRenderTarget)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FeedRenderTarget(Z_Param_TextureRenderTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenCVLensCalibrator::execCreateCalibrator)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BoardWidth);
		P_GET_PROPERTY(FIntProperty,Z_Param_BoardHeight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SquareSize);
		P_GET_UBOOL(Z_Param_bUseFisheyeModel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOpenCVLensCalibrator**)Z_Param__Result=UOpenCVLensCalibrator::CreateCalibrator(Z_Param_BoardWidth,Z_Param_BoardHeight,Z_Param_SquareSize,Z_Param_bUseFisheyeModel);
		P_NATIVE_END;
	}
	void UOpenCVLensCalibrator::StaticRegisterNativesUOpenCVLensCalibrator()
	{
		UClass* Class = UOpenCVLensCalibrator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateLensParameters", &UOpenCVLensCalibrator::execCalculateLensParameters },
			{ "CreateCalibrator", &UOpenCVLensCalibrator::execCreateCalibrator },
			{ "FeedImage", &UOpenCVLensCalibrator::execFeedImage },
			{ "FeedRenderTarget", &UOpenCVLensCalibrator::execFeedRenderTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters_Statics
	{
		struct OpenCVLensCalibrator_eventCalculateLensParameters_Parms
		{
			FOpenCVLensDistortionParameters LensDistortionParameters;
			float MarginOfError;
			FOpenCVCameraViewInfo CameraViewInfo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LensDistortionParameters;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MarginOfError;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraViewInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters_Statics::NewProp_LensDistortionParameters = { "LensDistortionParameters", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVLensCalibrator_eventCalculateLensParameters_Parms, LensDistortionParameters), Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters, METADATA_PARAMS(nullptr, 0) }; // 1893023535
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters_Statics::NewProp_MarginOfError = { "MarginOfError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVLensCalibrator_eventCalculateLensParameters_Parms, MarginOfError), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters_Statics::NewProp_CameraViewInfo = { "CameraViewInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVLensCalibrator_eventCalculateLensParameters_Parms, CameraViewInfo), Z_Construct_UScriptStruct_FOpenCVCameraViewInfo, METADATA_PARAMS(nullptr, 0) }; // 2776755653
	void Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenCVLensCalibrator_eventCalculateLensParameters_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OpenCVLensCalibrator_eventCalculateLensParameters_Parms), &Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters_Statics::NewProp_LensDistortionParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters_Statics::NewProp_MarginOfError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters_Statics::NewProp_CameraViewInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "LensDistortion|OpenCV|Calibration" },
		{ "Comment", "/**\n\x09 * @param LensDistortionParameters the calculated distortion data from the images passed into the calibrator.\n\x09 * @param MarginOfError returned reprojection error of the calibration\n\x09 * @param CameraViewInfo returned information about the camera view obtained from calibration parameters\n\x09 * @return true if there was enough data to calculate the distortion\n\x09 */" },
		{ "ModuleRelativePath", "Private/OpenCVLensCalibrator.h" },
		{ "ToolTip", "@param LensDistortionParameters the calculated distortion data from the images passed into the calibrator.\n@param MarginOfError returned reprojection error of the calibration\n@param CameraViewInfo returned information about the camera view obtained from calibration parameters\n@return true if there was enough data to calculate the distortion" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenCVLensCalibrator, nullptr, "CalculateLensParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters_Statics::OpenCVLensCalibrator_eventCalculateLensParameters_Parms), Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics
	{
		struct OpenCVLensCalibrator_eventCreateCalibrator_Parms
		{
			int32 BoardWidth;
			int32 BoardHeight;
			float SquareSize;
			bool bUseFisheyeModel;
			UOpenCVLensCalibrator* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoardWidth;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoardHeight;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SquareSize;
		static void NewProp_bUseFisheyeModel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFisheyeModel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::NewProp_BoardWidth = { "BoardWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVLensCalibrator_eventCreateCalibrator_Parms, BoardWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::NewProp_BoardHeight = { "BoardHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVLensCalibrator_eventCreateCalibrator_Parms, BoardHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::NewProp_SquareSize = { "SquareSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVLensCalibrator_eventCreateCalibrator_Parms, SquareSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::NewProp_bUseFisheyeModel_SetBit(void* Obj)
	{
		((OpenCVLensCalibrator_eventCreateCalibrator_Parms*)Obj)->bUseFisheyeModel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::NewProp_bUseFisheyeModel = { "bUseFisheyeModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OpenCVLensCalibrator_eventCreateCalibrator_Parms), &Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::NewProp_bUseFisheyeModel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVLensCalibrator_eventCreateCalibrator_Parms, ReturnValue), Z_Construct_UClass_UOpenCVLensCalibrator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::NewProp_BoardWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::NewProp_BoardHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::NewProp_SquareSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::NewProp_bUseFisheyeModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::Function_MetaDataParams[] = {
		{ "Category", "LensDistortion|OpenCV|Calibration" },
		{ "Comment", "/**\n\x09 * @param BoardWidth The width of the checkerboard used to calibrate the camera counted as number of inner edges.\n\x09 * @param BoardHeight The height of the checkerboard used to calibrate the camera counted as number of inner edges.\n\x09 * @param SquareSize The width of each square in (potentially arbitrary) world units.\n\x09 * @param bUseFisheyeModel Specifies if the calibrator is to use the fisheye camera model from OpenCV\n\x09 */" },
		{ "CPP_Default_BoardHeight", "5" },
		{ "CPP_Default_BoardWidth", "7" },
		{ "CPP_Default_bUseFisheyeModel", "false" },
		{ "CPP_Default_SquareSize", "3.000000" },
		{ "ModuleRelativePath", "Private/OpenCVLensCalibrator.h" },
		{ "ToolTip", "@param BoardWidth The width of the checkerboard used to calibrate the camera counted as number of inner edges.\n@param BoardHeight The height of the checkerboard used to calibrate the camera counted as number of inner edges.\n@param SquareSize The width of each square in (potentially arbitrary) world units.\n@param bUseFisheyeModel Specifies if the calibrator is to use the fisheye camera model from OpenCV" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenCVLensCalibrator, nullptr, "CreateCalibrator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::OpenCVLensCalibrator_eventCreateCalibrator_Parms), Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage_Statics
	{
		struct OpenCVLensCalibrator_eventFeedImage_Parms
		{
			FString FilePath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVLensCalibrator_eventFeedImage_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage_Statics::NewProp_FilePath_MetaData)) };
	void Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenCVLensCalibrator_eventFeedImage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OpenCVLensCalibrator_eventFeedImage_Parms), &Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "LensDistortion|OpenCV|Calibration" },
		{ "Comment", "/**\n\x09 * Feeds an image to the calibration. It must contain a checkerboard somewhere in the image.\n\x09 * The images fed in should come from the same camera.\n\x09 * @return true if the calibrator found a checkerboard in the image.\n\x09 */" },
		{ "ModuleRelativePath", "Private/OpenCVLensCalibrator.h" },
		{ "ToolTip", "Feeds an image to the calibration. It must contain a checkerboard somewhere in the image.\nThe images fed in should come from the same camera.\n@return true if the calibrator found a checkerboard in the image." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenCVLensCalibrator, nullptr, "FeedImage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage_Statics::OpenCVLensCalibrator_eventFeedImage_Parms), Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenCVLensCalibrator_FeedRenderTarget_Statics
	{
		struct OpenCVLensCalibrator_eventFeedRenderTarget_Parms
		{
			UTextureRenderTarget2D* TextureRenderTarget;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenCVLensCalibrator_FeedRenderTarget_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVLensCalibrator_eventFeedRenderTarget_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOpenCVLensCalibrator_FeedRenderTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenCVLensCalibrator_eventFeedRenderTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenCVLensCalibrator_FeedRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OpenCVLensCalibrator_eventFeedRenderTarget_Parms), &Z_Construct_UFunction_UOpenCVLensCalibrator_FeedRenderTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenCVLensCalibrator_FeedRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensCalibrator_FeedRenderTarget_Statics::NewProp_TextureRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensCalibrator_FeedRenderTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVLensCalibrator_FeedRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "LensDistortion|OpenCV|Calibration" },
		{ "Comment", "/**\n\x09 * Feeds a render target to the calibration. It must contain a checkerboard somewhere in the image.\n\x09 * The images fed in should come from the same camera.\n\x09 * @return true if the calibrator found a checkerboard in the image.\n\x09 */" },
		{ "ModuleRelativePath", "Private/OpenCVLensCalibrator.h" },
		{ "ToolTip", "Feeds a render target to the calibration. It must contain a checkerboard somewhere in the image.\nThe images fed in should come from the same camera.\n@return true if the calibrator found a checkerboard in the image." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenCVLensCalibrator_FeedRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenCVLensCalibrator, nullptr, "FeedRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenCVLensCalibrator_FeedRenderTarget_Statics::OpenCVLensCalibrator_eventFeedRenderTarget_Parms), Z_Construct_UFunction_UOpenCVLensCalibrator_FeedRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensCalibrator_FeedRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVLensCalibrator_FeedRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensCalibrator_FeedRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenCVLensCalibrator_FeedRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenCVLensCalibrator_FeedRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenCVLensCalibrator);
	UClass* Z_Construct_UClass_UOpenCVLensCalibrator_NoRegister()
	{
		return UOpenCVLensCalibrator::StaticClass();
	}
	struct Z_Construct_UClass_UOpenCVLensCalibrator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumCornerCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinimumCornerCoordinates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumCornerCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaximumCornerCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenCVLensCalibrator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCVLensCalibration,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenCVLensCalibrator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters, "CalculateLensParameters" }, // 842326844
		{ &Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator, "CreateCalibrator" }, // 3253414591
		{ &Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage, "FeedImage" }, // 1570750506
		{ &Z_Construct_UFunction_UOpenCVLensCalibrator_FeedRenderTarget, "FeedRenderTarget" }, // 2895181894
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenCVLensCalibrator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "IncludePath", "OpenCVLensCalibrator.h" },
		{ "ModuleRelativePath", "Private/OpenCVLensCalibrator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenCVLensCalibrator_Statics::NewProp_MinimumCornerCoordinates_MetaData[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** Smallest coordinates of a grid corner that was found. For best result, try to cover full resolution of the input. */" },
		{ "ModuleRelativePath", "Private/OpenCVLensCalibrator.h" },
		{ "ToolTip", "Smallest coordinates of a grid corner that was found. For best result, try to cover full resolution of the input." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenCVLensCalibrator_Statics::NewProp_MinimumCornerCoordinates = { "MinimumCornerCoordinates", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOpenCVLensCalibrator, MinimumCornerCoordinates), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UOpenCVLensCalibrator_Statics::NewProp_MinimumCornerCoordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenCVLensCalibrator_Statics::NewProp_MinimumCornerCoordinates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenCVLensCalibrator_Statics::NewProp_MaximumCornerCoordinates_MetaData[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** Biggest coordinates of a grid corner that was found. For best result, try to cover full resolution of the input. */" },
		{ "ModuleRelativePath", "Private/OpenCVLensCalibrator.h" },
		{ "ToolTip", "Biggest coordinates of a grid corner that was found. For best result, try to cover full resolution of the input." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenCVLensCalibrator_Statics::NewProp_MaximumCornerCoordinates = { "MaximumCornerCoordinates", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOpenCVLensCalibrator, MaximumCornerCoordinates), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UOpenCVLensCalibrator_Statics::NewProp_MaximumCornerCoordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenCVLensCalibrator_Statics::NewProp_MaximumCornerCoordinates_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenCVLensCalibrator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenCVLensCalibrator_Statics::NewProp_MinimumCornerCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenCVLensCalibrator_Statics::NewProp_MaximumCornerCoordinates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenCVLensCalibrator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenCVLensCalibrator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenCVLensCalibrator_Statics::ClassParams = {
		&UOpenCVLensCalibrator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOpenCVLensCalibrator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenCVLensCalibrator_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenCVLensCalibrator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenCVLensCalibrator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenCVLensCalibrator()
	{
		if (!Z_Registration_Info_UClass_UOpenCVLensCalibrator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenCVLensCalibrator.OuterSingleton, Z_Construct_UClass_UOpenCVLensCalibrator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenCVLensCalibrator.OuterSingleton;
	}
	template<> OPENCVLENSCALIBRATION_API UClass* StaticClass<UOpenCVLensCalibrator>()
	{
		return UOpenCVLensCalibrator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenCVLensCalibrator);
	UOpenCVLensCalibrator::~UOpenCVLensCalibrator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOpenCVLensCalibrator, UOpenCVLensCalibrator::StaticClass, TEXT("UOpenCVLensCalibrator"), &Z_Registration_Info_UClass_UOpenCVLensCalibrator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenCVLensCalibrator), 4200438912U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_1647386763(TEXT("/Script/OpenCVLensCalibration"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
