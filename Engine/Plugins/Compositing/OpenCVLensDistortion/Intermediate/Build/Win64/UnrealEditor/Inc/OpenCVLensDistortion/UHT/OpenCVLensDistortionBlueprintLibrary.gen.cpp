// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenCVLensDistortionBlueprintLibrary.h"
#include "OpenCVLensDistortionParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenCVLensDistortionBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	OPENCVLENSDISTORTION_API UClass* Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary();
	OPENCVLENSDISTORTION_API UClass* Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary_NoRegister();
	OPENCVLENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FOpenCVCameraViewInfo();
	OPENCVLENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters();
	UPackage* Z_Construct_UPackage__Script_OpenCVLensDistortion();
// End Cross Module References
	DEFINE_FUNCTION(UOpenCVLensDistortionBlueprintLibrary::execNotEqual_CompareLensDistortionModels)
	{
		P_GET_STRUCT_REF(FOpenCVLensDistortionParameters,Z_Param_Out_A);
		P_GET_STRUCT_REF(FOpenCVLensDistortionParameters,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOpenCVLensDistortionBlueprintLibrary::NotEqual_CompareLensDistortionModels(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenCVLensDistortionBlueprintLibrary::execEqualEqual_CompareLensDistortionModels)
	{
		P_GET_STRUCT_REF(FOpenCVLensDistortionParameters,Z_Param_Out_A);
		P_GET_STRUCT_REF(FOpenCVLensDistortionParameters,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOpenCVLensDistortionBlueprintLibrary::EqualEqual_CompareLensDistortionModels(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenCVLensDistortionBlueprintLibrary::execCreateUndistortUVDisplacementMap)
	{
		P_GET_STRUCT_REF(FOpenCVLensDistortionParameters,Z_Param_Out_LensParameters);
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_ImageSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CroppingFactor);
		P_GET_STRUCT_REF(FOpenCVCameraViewInfo,Z_Param_Out_CameraViewInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UOpenCVLensDistortionBlueprintLibrary::CreateUndistortUVDisplacementMap(Z_Param_Out_LensParameters,Z_Param_Out_ImageSize,Z_Param_CroppingFactor,Z_Param_Out_CameraViewInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOpenCVLensDistortionBlueprintLibrary::execDrawDisplacementMapToRenderTarget)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutputRenderTarget);
		P_GET_OBJECT(UTexture2D,Z_Param_PreComputedUndistortDisplacementMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOpenCVLensDistortionBlueprintLibrary::DrawDisplacementMapToRenderTarget(Z_Param_WorldContextObject,Z_Param_OutputRenderTarget,Z_Param_PreComputedUndistortDisplacementMap);
		P_NATIVE_END;
	}
	void UOpenCVLensDistortionBlueprintLibrary::StaticRegisterNativesUOpenCVLensDistortionBlueprintLibrary()
	{
		UClass* Class = UOpenCVLensDistortionBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateUndistortUVDisplacementMap", &UOpenCVLensDistortionBlueprintLibrary::execCreateUndistortUVDisplacementMap },
			{ "DrawDisplacementMapToRenderTarget", &UOpenCVLensDistortionBlueprintLibrary::execDrawDisplacementMapToRenderTarget },
			{ "EqualEqual_CompareLensDistortionModels", &UOpenCVLensDistortionBlueprintLibrary::execEqualEqual_CompareLensDistortionModels },
			{ "NotEqual_CompareLensDistortionModels", &UOpenCVLensDistortionBlueprintLibrary::execNotEqual_CompareLensDistortionModels },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics
	{
		struct OpenCVLensDistortionBlueprintLibrary_eventCreateUndistortUVDisplacementMap_Parms
		{
			FOpenCVLensDistortionParameters LensParameters;
			FIntPoint ImageSize;
			float CroppingFactor;
			FOpenCVCameraViewInfo CameraViewInfo;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LensParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImageSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CroppingFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CroppingFactor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraViewInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::NewProp_LensParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::NewProp_LensParameters = { "LensParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVLensDistortionBlueprintLibrary_eventCreateUndistortUVDisplacementMap_Parms, LensParameters), Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::NewProp_LensParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::NewProp_LensParameters_MetaData)) }; // 1893023535
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::NewProp_ImageSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::NewProp_ImageSize = { "ImageSize", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVLensDistortionBlueprintLibrary_eventCreateUndistortUVDisplacementMap_Parms, ImageSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::NewProp_ImageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::NewProp_ImageSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::NewProp_CroppingFactor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::NewProp_CroppingFactor = { "CroppingFactor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVLensDistortionBlueprintLibrary_eventCreateUndistortUVDisplacementMap_Parms, CroppingFactor), METADATA_PARAMS(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::NewProp_CroppingFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::NewProp_CroppingFactor_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::NewProp_CameraViewInfo = { "CameraViewInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVLensDistortionBlueprintLibrary_eventCreateUndistortUVDisplacementMap_Parms, CameraViewInfo), Z_Construct_UScriptStruct_FOpenCVCameraViewInfo, METADATA_PARAMS(nullptr, 0) }; // 2776755653
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVLensDistortionBlueprintLibrary_eventCreateUndistortUVDisplacementMap_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::NewProp_LensParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::NewProp_ImageSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::NewProp_CroppingFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::NewProp_CameraViewInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion | OpenCV" },
		{ "Comment", "/**\n\x09 * Creates a texture containing a DisplacementMap in the Red and the Green channel for undistorting a camera image.\n\x09 * This call can take quite some time to process depending on the resolution.\n\x09 * @param LensParameters The Lens distortion parameters with which to compute the UV displacement map.\n\x09 * @param ImageSize The size of the camera image to be undistorted in pixels. Scaled down resolution will have an impact. \n\x09 * @param CroppingFactor One means OpenCV will attempt to crop out all empty pixels resulting from the process (essentially zooming the image). Zero will keep all pixels.\n\x09 * @param CameraViewInfo Information computed by OpenCV about the undistorted space. Can be used with SceneCapture to adjust FOV.\n\x09 * @return Texture2D containing the distort to undistort space displacement map.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OpenCVLensDistortionBlueprintLibrary.h" },
		{ "ToolTip", "Creates a texture containing a DisplacementMap in the Red and the Green channel for undistorting a camera image.\nThis call can take quite some time to process depending on the resolution.\n@param LensParameters The Lens distortion parameters with which to compute the UV displacement map.\n@param ImageSize The size of the camera image to be undistorted in pixels. Scaled down resolution will have an impact.\n@param CroppingFactor One means OpenCV will attempt to crop out all empty pixels resulting from the process (essentially zooming the image). Zero will keep all pixels.\n@param CameraViewInfo Information computed by OpenCV about the undistorted space. Can be used with SceneCapture to adjust FOV.\n@return Texture2D containing the distort to undistort space displacement map." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary, nullptr, "CreateUndistortUVDisplacementMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::OpenCVLensDistortionBlueprintLibrary_eventCreateUndistortUVDisplacementMap_Parms), Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Statics
	{
		struct OpenCVLensDistortionBlueprintLibrary_eventDrawDisplacementMapToRenderTarget_Parms
		{
			const UObject* WorldContextObject;
			UTextureRenderTarget2D* OutputRenderTarget;
			UTexture2D* PreComputedUndistortDisplacementMap;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputRenderTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreComputedUndistortDisplacementMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVLensDistortionBlueprintLibrary_eventDrawDisplacementMapToRenderTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Statics::NewProp_OutputRenderTarget = { "OutputRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVLensDistortionBlueprintLibrary_eventDrawDisplacementMapToRenderTarget_Parms, OutputRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Statics::NewProp_PreComputedUndistortDisplacementMap = { "PreComputedUndistortDisplacementMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVLensDistortionBlueprintLibrary_eventDrawDisplacementMapToRenderTarget_Parms, PreComputedUndistortDisplacementMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Statics::NewProp_OutputRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Statics::NewProp_PreComputedUndistortDisplacementMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion | OpenCV" },
		{ "Comment", "/** Draws UV displacement map within the output render target.\n\x09 * - Red & green channels hold the distort to undistort displacement;\n\x09 * - Blue & alpha channels hold the undistort to distort displacement.\n\x09 * @param WorldContextObject Current world to get the rendering settings from (such as feature level).\n\x09 * @param OutputRenderTarget The render target to draw to. Don't necessarily need to have same resolution or aspect ratio as distorted render.\n\x09 * @param PreComputedUndistortDisplacementMap Distort to undistort displacement pre computed using OpenCV in engine or externally.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OpenCVLensDistortionBlueprintLibrary.h" },
		{ "ToolTip", "Draws UV displacement map within the output render target.\n- Red & green channels hold the distort to undistort displacement;\n- Blue & alpha channels hold the undistort to distort displacement.\n@param WorldContextObject Current world to get the rendering settings from (such as feature level).\n@param OutputRenderTarget The render target to draw to. Don't necessarily need to have same resolution or aspect ratio as distorted render.\n@param PreComputedUndistortDisplacementMap Distort to undistort displacement pre computed using OpenCV in engine or externally." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary, nullptr, "DrawDisplacementMapToRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Statics::OpenCVLensDistortionBlueprintLibrary_eventDrawDisplacementMapToRenderTarget_Parms), Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics
	{
		struct OpenCVLensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms
		{
			FOpenCVLensDistortionParameters A;
			FOpenCVLensDistortionParameters B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVLensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms, A), Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_A_MetaData)) }; // 1893023535
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVLensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms, B), Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_B_MetaData)) }; // 1893023535
	void Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenCVLensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OpenCVLensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms), &Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
		{ "Comment", "/* Returns true if A is equal to B (A == B) */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (LensDistortionParameters)" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Public/OpenCVLensDistortionBlueprintLibrary.h" },
		{ "ScriptOperator", "==" },
		{ "ToolTip", "Returns true if A is equal to B (A == B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary, nullptr, "EqualEqual_CompareLensDistortionModels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::OpenCVLensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms), Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics
	{
		struct OpenCVLensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms
		{
			FOpenCVLensDistortionParameters A;
			FOpenCVLensDistortionParameters B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVLensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms, A), Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_A_MetaData)) }; // 1893023535
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenCVLensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms, B), Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_B_MetaData)) }; // 1893023535
	void Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenCVLensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OpenCVLensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms), &Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
		{ "Comment", "/* Returns true if A is not equal to B (A != B) */" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "NotEqual (LensDistortionParameters)" },
		{ "Keywords", "!= not equal" },
		{ "ModuleRelativePath", "Public/OpenCVLensDistortionBlueprintLibrary.h" },
		{ "ScriptOperator", "!=" },
		{ "ToolTip", "Returns true if A is not equal to B (A != B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary, nullptr, "NotEqual_CompareLensDistortionModels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::OpenCVLensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms), Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenCVLensDistortionBlueprintLibrary);
	UClass* Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary_NoRegister()
	{
		return UOpenCVLensDistortionBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCVLensDistortion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap, "CreateUndistortUVDisplacementMap" }, // 75698381
		{ &Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget, "DrawDisplacementMapToRenderTarget" }, // 4253724773
		{ &Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels, "EqualEqual_CompareLensDistortionModels" }, // 2638675076
		{ &Z_Construct_UFunction_UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels, "NotEqual_CompareLensDistortionModels" }, // 4062769211
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OpenCVLensDistortionBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/OpenCVLensDistortionBlueprintLibrary.h" },
		{ "ScriptName", "OpenCVLensDistortionLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenCVLensDistortionBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary_Statics::ClassParams = {
		&UOpenCVLensDistortionBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UOpenCVLensDistortionBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenCVLensDistortionBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenCVLensDistortionBlueprintLibrary.OuterSingleton;
	}
	template<> OPENCVLENSDISTORTION_API UClass* StaticClass<UOpenCVLensDistortionBlueprintLibrary>()
	{
		return UOpenCVLensDistortionBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenCVLensDistortionBlueprintLibrary);
	UOpenCVLensDistortionBlueprintLibrary::~UOpenCVLensDistortionBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOpenCVLensDistortionBlueprintLibrary, UOpenCVLensDistortionBlueprintLibrary::StaticClass, TEXT("UOpenCVLensDistortionBlueprintLibrary"), &Z_Registration_Info_UClass_UOpenCVLensDistortionBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenCVLensDistortionBlueprintLibrary), 1976635237U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_2545181968(TEXT("/Script/OpenCVLensDistortion"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
