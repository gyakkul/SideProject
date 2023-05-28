// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoogleARCoreFunctionLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "ARTraceResult.h"
#include "GoogleARCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleARCoreFunctionLibrary() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateImage_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPin_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPlaneGeometry_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSessionConfig_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedPoint_NoRegister();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARTraceResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreAugmentedFace_NoRegister();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreAugmentedImage_NoRegister();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreCameraImage_NoRegister();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreCameraIntrinsics_NoRegister();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreEventManager_NoRegister();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_NoRegister();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCorePointCloud_NoRegister();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreSessionConfig_NoRegister();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_NoRegister();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAvailability();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCoordinates2DType();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreFunctionStatus();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallRequestResult();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreLineTraceChannel();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingFailureReason();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingState();
	GOOGLEARCOREBASE_API UScriptStruct* Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig();
	GOOGLEARCOREBASE_API UScriptStruct* Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate();
	UPackage* Z_Construct_UPackage__Script_GoogleARCoreBase();
// End Cross Module References
	DEFINE_FUNCTION(UGoogleARCoreSessionFunctionLibrary::execAddRuntimeCandidateImageFromRawbytes)
	{
		P_GET_OBJECT(UARSessionConfig,Z_Param_SessionConfig);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_ImageGrayscalePixels);
		P_GET_PROPERTY(FIntProperty,Z_Param_ImageWidth);
		P_GET_PROPERTY(FIntProperty,Z_Param_ImageHeight);
		P_GET_PROPERTY(FStrProperty,Z_Param_FriendlyName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PhysicalWidth);
		P_GET_OBJECT(UTexture2D,Z_Param_CandidateTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARCandidateImage**)Z_Param__Result=UGoogleARCoreSessionFunctionLibrary::AddRuntimeCandidateImageFromRawbytes(Z_Param_SessionConfig,Z_Param_Out_ImageGrayscalePixels,Z_Param_ImageWidth,Z_Param_ImageHeight,Z_Param_FriendlyName,Z_Param_PhysicalWidth,Z_Param_CandidateTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreSessionFunctionLibrary::execGetAllAugmentedFaces)
	{
		P_GET_TARRAY_REF(UGoogleARCoreAugmentedFace*,Z_Param_Out_OutAugmentedFaceList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleARCoreSessionFunctionLibrary::GetAllAugmentedFaces(Z_Param_Out_OutAugmentedFaceList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreSessionFunctionLibrary::execGetAllAugmentedImages)
	{
		P_GET_TARRAY_REF(UGoogleARCoreAugmentedImage*,Z_Param_Out_OutAugmentedImageList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleARCoreSessionFunctionLibrary::GetAllAugmentedImages(Z_Param_Out_OutAugmentedImageList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreSessionFunctionLibrary::execGetAllTrackablePoints)
	{
		P_GET_TARRAY_REF(UARTrackedPoint*,Z_Param_Out_OutTrackablePointList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleARCoreSessionFunctionLibrary::GetAllTrackablePoints(Z_Param_Out_OutTrackablePointList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreSessionFunctionLibrary::execGetAllPlanes)
	{
		P_GET_TARRAY_REF(UARPlaneGeometry*,Z_Param_Out_OutPlaneList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleARCoreSessionFunctionLibrary::GetAllPlanes(Z_Param_Out_OutPlaneList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreSessionFunctionLibrary::execGetPassthroughCameraImageUV)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_InUV);
		P_GET_TARRAY_REF(float,Z_Param_Out_OutUV);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleARCoreSessionFunctionLibrary::GetPassthroughCameraImageUV(Z_Param_Out_InUV,Z_Param_Out_OutUV);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreSessionFunctionLibrary::execSetPassthroughCameraRenderingEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleARCoreSessionFunctionLibrary::SetPassthroughCameraRenderingEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreSessionFunctionLibrary::execIsPassthroughCameraRenderingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGoogleARCoreSessionFunctionLibrary::IsPassthroughCameraRenderingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreSessionFunctionLibrary::execGetARCoreCameraConfig)
	{
		P_GET_STRUCT_REF(FGoogleARCoreCameraConfig,Z_Param_Out_OutCurrentCameraConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGoogleARCoreSessionFunctionLibrary::GetARCoreCameraConfig(Z_Param_Out_OutCurrentCameraConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreSessionFunctionLibrary::execSetARCoreCameraConfig)
	{
		P_GET_STRUCT(FGoogleARCoreCameraConfig,Z_Param_TargetCameraConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGoogleARCoreSessionFunctionLibrary::SetARCoreCameraConfig(Z_Param_TargetCameraConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreSessionFunctionLibrary::execStartARCoreSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(UGoogleARCoreSessionConfig,Z_Param_Configuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleARCoreSessionFunctionLibrary::StartARCoreSession(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Configuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreSessionFunctionLibrary::execGetARCoreEventManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGoogleARCoreEventManager**)Z_Param__Result=UGoogleARCoreSessionFunctionLibrary::GetARCoreEventManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreSessionFunctionLibrary::execInstallARCoreService)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_ENUM_REF(EGoogleARCoreInstallRequestResult,Z_Param_Out_OutInstallResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleARCoreSessionFunctionLibrary::InstallARCoreService(Z_Param_WorldContextObject,Z_Param_LatentInfo,(EGoogleARCoreInstallRequestResult&)(Z_Param_Out_OutInstallResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreSessionFunctionLibrary::execCheckARCoreAvailability)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_ENUM_REF(EGoogleARCoreAvailability,Z_Param_Out_OutAvailability);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleARCoreSessionFunctionLibrary::CheckARCoreAvailability(Z_Param_WorldContextObject,Z_Param_LatentInfo,(EGoogleARCoreAvailability&)(Z_Param_Out_OutAvailability));
		P_NATIVE_END;
	}
	void UGoogleARCoreSessionFunctionLibrary::StaticRegisterNativesUGoogleARCoreSessionFunctionLibrary()
	{
		UClass* Class = UGoogleARCoreSessionFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRuntimeCandidateImageFromRawbytes", &UGoogleARCoreSessionFunctionLibrary::execAddRuntimeCandidateImageFromRawbytes },
			{ "CheckARCoreAvailability", &UGoogleARCoreSessionFunctionLibrary::execCheckARCoreAvailability },
			{ "GetAllAugmentedFaces", &UGoogleARCoreSessionFunctionLibrary::execGetAllAugmentedFaces },
			{ "GetAllAugmentedImages", &UGoogleARCoreSessionFunctionLibrary::execGetAllAugmentedImages },
			{ "GetAllPlanes", &UGoogleARCoreSessionFunctionLibrary::execGetAllPlanes },
			{ "GetAllTrackablePoints", &UGoogleARCoreSessionFunctionLibrary::execGetAllTrackablePoints },
			{ "GetARCoreCameraConfig", &UGoogleARCoreSessionFunctionLibrary::execGetARCoreCameraConfig },
			{ "GetARCoreEventManager", &UGoogleARCoreSessionFunctionLibrary::execGetARCoreEventManager },
			{ "GetPassthroughCameraImageUV", &UGoogleARCoreSessionFunctionLibrary::execGetPassthroughCameraImageUV },
			{ "InstallARCoreService", &UGoogleARCoreSessionFunctionLibrary::execInstallARCoreService },
			{ "IsPassthroughCameraRenderingEnabled", &UGoogleARCoreSessionFunctionLibrary::execIsPassthroughCameraRenderingEnabled },
			{ "SetARCoreCameraConfig", &UGoogleARCoreSessionFunctionLibrary::execSetARCoreCameraConfig },
			{ "SetPassthroughCameraRenderingEnabled", &UGoogleARCoreSessionFunctionLibrary::execSetPassthroughCameraRenderingEnabled },
			{ "StartARCoreSession", &UGoogleARCoreSessionFunctionLibrary::execStartARCoreSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics
	{
		struct GoogleARCoreSessionFunctionLibrary_eventAddRuntimeCandidateImageFromRawbytes_Parms
		{
			UARSessionConfig* SessionConfig;
			TArray<uint8> ImageGrayscalePixels;
			int32 ImageWidth;
			int32 ImageHeight;
			FString FriendlyName;
			float PhysicalWidth;
			UTexture2D* CandidateTexture;
			UARCandidateImage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SessionConfig;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImageGrayscalePixels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageGrayscalePixels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImageGrayscalePixels;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ImageWidth;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ImageHeight;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicalWidth;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CandidateTexture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_SessionConfig = { "SessionConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventAddRuntimeCandidateImageFromRawbytes_Parms, SessionConfig), Z_Construct_UClass_UARSessionConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ImageGrayscalePixels_Inner = { "ImageGrayscalePixels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ImageGrayscalePixels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ImageGrayscalePixels = { "ImageGrayscalePixels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventAddRuntimeCandidateImageFromRawbytes_Parms, ImageGrayscalePixels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ImageGrayscalePixels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ImageGrayscalePixels_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ImageWidth = { "ImageWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventAddRuntimeCandidateImageFromRawbytes_Parms, ImageWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ImageHeight = { "ImageHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventAddRuntimeCandidateImageFromRawbytes_Parms, ImageHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventAddRuntimeCandidateImageFromRawbytes_Parms, FriendlyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_PhysicalWidth = { "PhysicalWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventAddRuntimeCandidateImageFromRawbytes_Parms, PhysicalWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_CandidateTexture = { "CandidateTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventAddRuntimeCandidateImageFromRawbytes_Parms, CandidateTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventAddRuntimeCandidateImageFromRawbytes_Parms, ReturnValue), Z_Construct_UClass_UARCandidateImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_SessionConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ImageGrayscalePixels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ImageGrayscalePixels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ImageWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ImageHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_FriendlyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_PhysicalWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_CandidateTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/**\n\x09 * Create an ARCandidateImage object from the raw pixel data and add it to the ARCandidateImageList of the given \\c UARSessionConfig object.\n\x09 *\n\x09 * Note that you need to restart the AR session with the \\c UARSessionConfig you are adding to to make the change take effect.\n\x09 *\n\x09 * On ARCore platform, you can leave the PhysicalWidth and PhysicalHeight to 0 if you don't know the physical size of the image or\n\x09 * the physical size is dynamic. And this function takes time to perform non-trivial image processing (20ms - 30ms),\n\x09 * and should be run on a background thread.\n\x09 *\n\x09 * @return A \\c UARCandidateImage Object pointer if the underlying ARPlatform added the candidate image at runtime successfully.\n\x09 *\x09\x09  Return nullptr otherwise.\n\x09 */" },
		{ "CPP_Default_CandidateTexture", "None" },
		{ "Keywords", "ar augmentedreality augmented reality candidate image" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
		{ "ToolTip", "Create an ARCandidateImage object from the raw pixel data and add it to the ARCandidateImageList of the given \\c UARSessionConfig object.\n\nNote that you need to restart the AR session with the \\c UARSessionConfig you are adding to to make the change take effect.\n\nOn ARCore platform, you can leave the PhysicalWidth and PhysicalHeight to 0 if you don't know the physical size of the image or\nthe physical size is dynamic. And this function takes time to perform non-trivial image processing (20ms - 30ms),\nand should be run on a background thread.\n\n@return A \\c UARCandidateImage Object pointer if the underlying ARPlatform added the candidate image at runtime successfully.\n               Return nullptr otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary, nullptr, "AddRuntimeCandidateImageFromRawbytes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::GoogleARCoreSessionFunctionLibrary_eventAddRuntimeCandidateImageFromRawbytes_Parms), Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_CheckARCoreAvailability_Statics
	{
		struct GoogleARCoreSessionFunctionLibrary_eventCheckARCoreAvailability_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			EGoogleARCoreAvailability OutAvailability;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutAvailability_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutAvailability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_CheckARCoreAvailability_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventCheckARCoreAvailability_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_CheckARCoreAvailability_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventCheckARCoreAvailability_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_CheckARCoreAvailability_Statics::NewProp_OutAvailability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_CheckARCoreAvailability_Statics::NewProp_OutAvailability = { "OutAvailability", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventCheckARCoreAvailability_Parms, OutAvailability), Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAvailability, METADATA_PARAMS(nullptr, 0) }; // 3793827731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_CheckARCoreAvailability_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_CheckARCoreAvailability_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_CheckARCoreAvailability_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_CheckARCoreAvailability_Statics::NewProp_OutAvailability_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_CheckARCoreAvailability_Statics::NewProp_OutAvailability,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_CheckARCoreAvailability_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|Availability" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use CheckARServiceAvailability from UARDependencyHandler." },
		{ "Keywords", "googlear arcore availability" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_CheckARCoreAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary, nullptr, "CheckARCoreAvailability", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_CheckARCoreAvailability_Statics::GoogleARCoreSessionFunctionLibrary_eventCheckARCoreAvailability_Parms), Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_CheckARCoreAvailability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_CheckARCoreAvailability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_CheckARCoreAvailability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_CheckARCoreAvailability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_CheckARCoreAvailability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_CheckARCoreAvailability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedFaces_Statics
	{
		struct GoogleARCoreSessionFunctionLibrary_eventGetAllAugmentedFaces_Parms
		{
			TArray<UGoogleARCoreAugmentedFace*> OutAugmentedFaceList;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAugmentedFaceList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAugmentedFaceList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedFaces_Statics::NewProp_OutAugmentedFaceList_Inner = { "OutAugmentedFaceList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGoogleARCoreAugmentedFace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedFaces_Statics::NewProp_OutAugmentedFaceList = { "OutAugmentedFaceList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventGetAllAugmentedFaces_Parms, OutAugmentedFaceList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedFaces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedFaces_Statics::NewProp_OutAugmentedFaceList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedFaces_Statics::NewProp_OutAugmentedFaceList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedFaces_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|AugmentedFace" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use GetAllGeometriesByClass." },
		{ "Keywords", "googlear arcore all augmented face" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedFaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary, nullptr, "GetAllAugmentedFaces", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedFaces_Statics::GoogleARCoreSessionFunctionLibrary_eventGetAllAugmentedFaces_Parms), Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedFaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedFaces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedFaces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedFaces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedFaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedFaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedImages_Statics
	{
		struct GoogleARCoreSessionFunctionLibrary_eventGetAllAugmentedImages_Parms
		{
			TArray<UGoogleARCoreAugmentedImage*> OutAugmentedImageList;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAugmentedImageList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAugmentedImageList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedImages_Statics::NewProp_OutAugmentedImageList_Inner = { "OutAugmentedImageList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGoogleARCoreAugmentedImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedImages_Statics::NewProp_OutAugmentedImageList = { "OutAugmentedImageList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventGetAllAugmentedImages_Parms, OutAugmentedImageList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedImages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedImages_Statics::NewProp_OutAugmentedImageList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedImages_Statics::NewProp_OutAugmentedImageList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedImages_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|AugmentedImage" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllAugmentedImages is deprecated. Use GetAllGeometriesByClass." },
		{ "Keywords", "googlear arcore all augmented image" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedImages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary, nullptr, "GetAllAugmentedImages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedImages_Statics::GoogleARCoreSessionFunctionLibrary_eventGetAllAugmentedImages_Parms), Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedImages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedImages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedImages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedImages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedImages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedImages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllPlanes_Statics
	{
		struct GoogleARCoreSessionFunctionLibrary_eventGetAllPlanes_Parms
		{
			TArray<UARPlaneGeometry*> OutPlaneList;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutPlaneList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPlaneList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllPlanes_Statics::NewProp_OutPlaneList_Inner = { "OutPlaneList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UARPlaneGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllPlanes_Statics::NewProp_OutPlaneList = { "OutPlaneList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventGetAllPlanes_Parms, OutPlaneList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllPlanes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllPlanes_Statics::NewProp_OutPlaneList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllPlanes_Statics::NewProp_OutPlaneList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllPlanes_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|TrackablePlane" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllPlanes is deprecated. Use GetAllGeometriesByClass." },
		{ "Keywords", "googlear arcore all plane" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllPlanes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary, nullptr, "GetAllPlanes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllPlanes_Statics::GoogleARCoreSessionFunctionLibrary_eventGetAllPlanes_Parms), Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllPlanes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllPlanes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllPlanes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllPlanes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllPlanes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllPlanes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllTrackablePoints_Statics
	{
		struct GoogleARCoreSessionFunctionLibrary_eventGetAllTrackablePoints_Parms
		{
			TArray<UARTrackedPoint*> OutTrackablePointList;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutTrackablePointList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTrackablePointList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllTrackablePoints_Statics::NewProp_OutTrackablePointList_Inner = { "OutTrackablePointList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UARTrackedPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllTrackablePoints_Statics::NewProp_OutTrackablePointList = { "OutTrackablePointList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventGetAllTrackablePoints_Parms, OutTrackablePointList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllTrackablePoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllTrackablePoints_Statics::NewProp_OutTrackablePointList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllTrackablePoints_Statics::NewProp_OutTrackablePointList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllTrackablePoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|TrackablePoint" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllTrackablePoints is deprecated. Use GetAllGeometriesByClass." },
		{ "Keywords", "googlear arcore pose transform" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllTrackablePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary, nullptr, "GetAllTrackablePoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllTrackablePoints_Statics::GoogleARCoreSessionFunctionLibrary_eventGetAllTrackablePoints_Parms), Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllTrackablePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllTrackablePoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllTrackablePoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllTrackablePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllTrackablePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllTrackablePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreCameraConfig_Statics
	{
		struct GoogleARCoreSessionFunctionLibrary_eventGetARCoreCameraConfig_Parms
		{
			FGoogleARCoreCameraConfig OutCurrentCameraConfig;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutCurrentCameraConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreCameraConfig_Statics::NewProp_OutCurrentCameraConfig = { "OutCurrentCameraConfig", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventGetARCoreCameraConfig_Parms, OutCurrentCameraConfig), Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig, METADATA_PARAMS(nullptr, 0) }; // 1555340257
	void Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreCameraConfig_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GoogleARCoreSessionFunctionLibrary_eventGetARCoreCameraConfig_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreCameraConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GoogleARCoreSessionFunctionLibrary_eventGetARCoreCameraConfig_Parms), &Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreCameraConfig_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreCameraConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreCameraConfig_Statics::NewProp_OutCurrentCameraConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreCameraConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreCameraConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|Session" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use GetSupportedVideoFormats." },
		{ "Keywords", "googlear arcore camera config" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreCameraConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary, nullptr, "GetARCoreCameraConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreCameraConfig_Statics::GoogleARCoreSessionFunctionLibrary_eventGetARCoreCameraConfig_Parms), Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreCameraConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreCameraConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreCameraConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreCameraConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreCameraConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreCameraConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreEventManager_Statics
	{
		struct GoogleARCoreSessionFunctionLibrary_eventGetARCoreEventManager_Parms
		{
			UGoogleARCoreEventManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreEventManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventGetARCoreEventManager_Parms, ReturnValue), Z_Construct_UClass_UGoogleARCoreEventManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreEventManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreEventManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreEventManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|Session" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use GetSupportedVideoFormats." },
		{ "Keywords", "googlear arcore event manager" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreEventManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary, nullptr, "GetARCoreEventManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreEventManager_Statics::GoogleARCoreSessionFunctionLibrary_eventGetARCoreEventManager_Parms), Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreEventManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreEventManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreEventManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreEventManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreEventManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreEventManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV_Statics
	{
		struct GoogleARCoreSessionFunctionLibrary_eventGetPassthroughCameraImageUV_Parms
		{
			TArray<float> InUV;
			TArray<float> OutUV;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InUV_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUV_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InUV;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutUV_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutUV;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV_Statics::NewProp_InUV_Inner = { "InUV", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV_Statics::NewProp_InUV_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV_Statics::NewProp_InUV = { "InUV", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventGetPassthroughCameraImageUV_Parms, InUV), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV_Statics::NewProp_InUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV_Statics::NewProp_InUV_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV_Statics::NewProp_OutUV_Inner = { "OutUV", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV_Statics::NewProp_OutUV = { "OutUV", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventGetPassthroughCameraImageUV_Parms, OutUV), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV_Statics::NewProp_InUV_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV_Statics::NewProp_InUV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV_Statics::NewProp_OutUV_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV_Statics::NewProp_OutUV,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|PassthroughCamera" },
		{ "Keywords", "googlear arcore passthrough camera uv" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary, nullptr, "GetPassthroughCameraImageUV", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV_Statics::GoogleARCoreSessionFunctionLibrary_eventGetPassthroughCameraImageUV_Parms), Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_InstallARCoreService_Statics
	{
		struct GoogleARCoreSessionFunctionLibrary_eventInstallARCoreService_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			EGoogleARCoreInstallRequestResult OutInstallResult;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutInstallResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutInstallResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_InstallARCoreService_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventInstallARCoreService_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_InstallARCoreService_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventInstallARCoreService_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_InstallARCoreService_Statics::NewProp_OutInstallResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_InstallARCoreService_Statics::NewProp_OutInstallResult = { "OutInstallResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventInstallARCoreService_Parms, OutInstallResult), Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallRequestResult, METADATA_PARAMS(nullptr, 0) }; // 1249832337
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_InstallARCoreService_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_InstallARCoreService_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_InstallARCoreService_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_InstallARCoreService_Statics::NewProp_OutInstallResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_InstallARCoreService_Statics::NewProp_OutInstallResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_InstallARCoreService_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|Availability" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use InstallARService from UARDependencyHandler." },
		{ "Keywords", "googlear arcore availability" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_InstallARCoreService_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary, nullptr, "InstallARCoreService", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_InstallARCoreService_Statics::GoogleARCoreSessionFunctionLibrary_eventInstallARCoreService_Parms), Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_InstallARCoreService_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_InstallARCoreService_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_InstallARCoreService_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_InstallARCoreService_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_InstallARCoreService()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_InstallARCoreService_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_IsPassthroughCameraRenderingEnabled_Statics
	{
		struct GoogleARCoreSessionFunctionLibrary_eventIsPassthroughCameraRenderingEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_IsPassthroughCameraRenderingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GoogleARCoreSessionFunctionLibrary_eventIsPassthroughCameraRenderingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_IsPassthroughCameraRenderingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GoogleARCoreSessionFunctionLibrary_eventIsPassthroughCameraRenderingEnabled_Parms), &Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_IsPassthroughCameraRenderingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_IsPassthroughCameraRenderingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_IsPassthroughCameraRenderingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_IsPassthroughCameraRenderingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|PassthroughCamera" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use UARSessionConfig::ShouldRenderCameraOverlay." },
		{ "Keywords", "googlear arcore passthrough camera" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_IsPassthroughCameraRenderingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary, nullptr, "IsPassthroughCameraRenderingEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_IsPassthroughCameraRenderingEnabled_Statics::GoogleARCoreSessionFunctionLibrary_eventIsPassthroughCameraRenderingEnabled_Parms), Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_IsPassthroughCameraRenderingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_IsPassthroughCameraRenderingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_IsPassthroughCameraRenderingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_IsPassthroughCameraRenderingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_IsPassthroughCameraRenderingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_IsPassthroughCameraRenderingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetARCoreCameraConfig_Statics
	{
		struct GoogleARCoreSessionFunctionLibrary_eventSetARCoreCameraConfig_Parms
		{
			FGoogleARCoreCameraConfig TargetCameraConfig;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetCameraConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetARCoreCameraConfig_Statics::NewProp_TargetCameraConfig = { "TargetCameraConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventSetARCoreCameraConfig_Parms, TargetCameraConfig), Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig, METADATA_PARAMS(nullptr, 0) }; // 1555340257
	void Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetARCoreCameraConfig_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GoogleARCoreSessionFunctionLibrary_eventSetARCoreCameraConfig_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetARCoreCameraConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GoogleARCoreSessionFunctionLibrary_eventSetARCoreCameraConfig_Parms), &Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetARCoreCameraConfig_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetARCoreCameraConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetARCoreCameraConfig_Statics::NewProp_TargetCameraConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetARCoreCameraConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetARCoreCameraConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|Session" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use UARSessionConfig::SetDesiredVideoFormat." },
		{ "Keywords", "googlear arcore camera config" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetARCoreCameraConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary, nullptr, "SetARCoreCameraConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetARCoreCameraConfig_Statics::GoogleARCoreSessionFunctionLibrary_eventSetARCoreCameraConfig_Parms), Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetARCoreCameraConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetARCoreCameraConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetARCoreCameraConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetARCoreCameraConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetARCoreCameraConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetARCoreCameraConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetPassthroughCameraRenderingEnabled_Statics
	{
		struct GoogleARCoreSessionFunctionLibrary_eventSetPassthroughCameraRenderingEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetPassthroughCameraRenderingEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GoogleARCoreSessionFunctionLibrary_eventSetPassthroughCameraRenderingEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetPassthroughCameraRenderingEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GoogleARCoreSessionFunctionLibrary_eventSetPassthroughCameraRenderingEnabled_Parms), &Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetPassthroughCameraRenderingEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetPassthroughCameraRenderingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetPassthroughCameraRenderingEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetPassthroughCameraRenderingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|PassthroughCamera" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use UARSessionConfig::bEnableAutomaticCameraOverlay." },
		{ "Keywords", "googlear arcore passthrough camera" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetPassthroughCameraRenderingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary, nullptr, "SetPassthroughCameraRenderingEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetPassthroughCameraRenderingEnabled_Statics::GoogleARCoreSessionFunctionLibrary_eventSetPassthroughCameraRenderingEnabled_Parms), Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetPassthroughCameraRenderingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetPassthroughCameraRenderingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetPassthroughCameraRenderingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetPassthroughCameraRenderingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetPassthroughCameraRenderingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetPassthroughCameraRenderingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_StartARCoreSession_Statics
	{
		struct GoogleARCoreSessionFunctionLibrary_eventStartARCoreSession_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			UGoogleARCoreSessionConfig* Configuration;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Configuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_StartARCoreSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventStartARCoreSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_StartARCoreSession_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventStartARCoreSession_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_StartARCoreSession_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventStartARCoreSession_Parms, Configuration), Z_Construct_UClass_UGoogleARCoreSessionConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_StartARCoreSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_StartARCoreSession_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_StartARCoreSession_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_StartARCoreSession_Statics::NewProp_Configuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_StartARCoreSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|Session" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use StartARSession." },
		{ "Keywords", "googlear arcore session start config" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_StartARCoreSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary, nullptr, "StartARCoreSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_StartARCoreSession_Statics::GoogleARCoreSessionFunctionLibrary_eventStartARCoreSession_Parms), Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_StartARCoreSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_StartARCoreSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_StartARCoreSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_StartARCoreSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_StartARCoreSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_StartARCoreSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoogleARCoreSessionFunctionLibrary);
	UClass* Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_NoRegister()
	{
		return UGoogleARCoreSessionFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes, "AddRuntimeCandidateImageFromRawbytes" }, // 2909352561
		{ &Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_CheckARCoreAvailability, "CheckARCoreAvailability" }, // 1119302391
		{ &Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedFaces, "GetAllAugmentedFaces" }, // 50298152
		{ &Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllAugmentedImages, "GetAllAugmentedImages" }, // 1366282078
		{ &Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllPlanes, "GetAllPlanes" }, // 4221076238
		{ &Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetAllTrackablePoints, "GetAllTrackablePoints" }, // 647201764
		{ &Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreCameraConfig, "GetARCoreCameraConfig" }, // 89968103
		{ &Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetARCoreEventManager, "GetARCoreEventManager" }, // 222866644
		{ &Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_GetPassthroughCameraImageUV, "GetPassthroughCameraImageUV" }, // 1384020720
		{ &Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_InstallARCoreService, "InstallARCoreService" }, // 2604960738
		{ &Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_IsPassthroughCameraRenderingEnabled, "IsPassthroughCameraRenderingEnabled" }, // 20858393
		{ &Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetARCoreCameraConfig, "SetARCoreCameraConfig" }, // 3224283558
		{ &Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_SetPassthroughCameraRenderingEnabled, "SetPassthroughCameraRenderingEnabled" }, // 2713666628
		{ &Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_StartARCoreSession, "StartARCoreSession" }, // 2607209153
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A function library that provides static/Blueprint functions associated with GoogleARCore session.*/" },
		{ "IncludePath", "GoogleARCoreFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
		{ "ToolTip", "A function library that provides static/Blueprint functions associated with GoogleARCore session." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleARCoreSessionFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_Statics::ClassParams = {
		&UGoogleARCoreSessionFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UGoogleARCoreSessionFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoogleARCoreSessionFunctionLibrary.OuterSingleton, Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGoogleARCoreSessionFunctionLibrary.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UClass* StaticClass<UGoogleARCoreSessionFunctionLibrary>()
	{
		return UGoogleARCoreSessionFunctionLibrary::StaticClass();
	}
	UGoogleARCoreSessionFunctionLibrary::UGoogleARCoreSessionFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleARCoreSessionFunctionLibrary);
	UGoogleARCoreSessionFunctionLibrary::~UGoogleARCoreSessionFunctionLibrary() {}
	DEFINE_FUNCTION(UGoogleARCoreFrameFunctionLibrary::execGetCameraTextureIntrinsics)
	{
		P_GET_OBJECT_REF(UGoogleARCoreCameraIntrinsics,Z_Param_Out_OutCameraIntrinsics);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGoogleARCoreFunctionStatus*)Z_Param__Result=UGoogleARCoreFrameFunctionLibrary::GetCameraTextureIntrinsics(Z_Param_Out_OutCameraIntrinsics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreFrameFunctionLibrary::execGetCameraImageIntrinsics)
	{
		P_GET_OBJECT_REF(UGoogleARCoreCameraIntrinsics,Z_Param_Out_OutCameraIntrinsics);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGoogleARCoreFunctionStatus*)Z_Param__Result=UGoogleARCoreFrameFunctionLibrary::GetCameraImageIntrinsics(Z_Param_Out_OutCameraIntrinsics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreFrameFunctionLibrary::execTransformARCoordinates2D)
	{
		P_GET_ENUM(EGoogleARCoreCoordinates2DType,Z_Param_InputCoordinatesType);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_InputCoordinates);
		P_GET_ENUM(EGoogleARCoreCoordinates2DType,Z_Param_OutputCoordinatesType);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_OutputCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleARCoreFrameFunctionLibrary::TransformARCoordinates2D(EGoogleARCoreCoordinates2DType(Z_Param_InputCoordinatesType),Z_Param_Out_InputCoordinates,EGoogleARCoreCoordinates2DType(Z_Param_OutputCoordinatesType),Z_Param_Out_OutputCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreFrameFunctionLibrary::execAcquireCameraImage)
	{
		P_GET_OBJECT_REF(UGoogleARCoreCameraImage,Z_Param_Out_OutLatestCameraImage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGoogleARCoreFunctionStatus*)Z_Param__Result=UGoogleARCoreFrameFunctionLibrary::AcquireCameraImage(Z_Param_Out_OutLatestCameraImage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreFrameFunctionLibrary::execGetCameraTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=UGoogleARCoreFrameFunctionLibrary::GetCameraTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreFrameFunctionLibrary::execAcquirePointCloud)
	{
		P_GET_OBJECT_REF(UGoogleARCorePointCloud,Z_Param_Out_OutLatestPointCloud);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGoogleARCoreFunctionStatus*)Z_Param__Result=UGoogleARCoreFrameFunctionLibrary::AcquirePointCloud(Z_Param_Out_OutLatestPointCloud);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreFrameFunctionLibrary::execGetPointCloud)
	{
		P_GET_OBJECT_REF(UGoogleARCorePointCloud,Z_Param_Out_OutLatestPointCloud);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGoogleARCoreFunctionStatus*)Z_Param__Result=UGoogleARCoreFrameFunctionLibrary::GetPointCloud(Z_Param_Out_OutLatestPointCloud);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreFrameFunctionLibrary::execGetLightEstimation)
	{
		P_GET_STRUCT_REF(FGoogleARCoreLightEstimate,Z_Param_Out_OutLightEstimate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleARCoreFrameFunctionLibrary::GetLightEstimation(Z_Param_Out_OutLightEstimate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreFrameFunctionLibrary::execGetUpdatedAugmentedFaces)
	{
		P_GET_TARRAY_REF(UGoogleARCoreAugmentedFace*,Z_Param_Out_OutFaceList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleARCoreFrameFunctionLibrary::GetUpdatedAugmentedFaces(Z_Param_Out_OutFaceList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreFrameFunctionLibrary::execGetUpdatedAugmentedImages)
	{
		P_GET_TARRAY_REF(UGoogleARCoreAugmentedImage*,Z_Param_Out_OutImageList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleARCoreFrameFunctionLibrary::GetUpdatedAugmentedImages(Z_Param_Out_OutImageList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreFrameFunctionLibrary::execGetUpdatedTrackablePoints)
	{
		P_GET_TARRAY_REF(UARTrackedPoint*,Z_Param_Out_OutTrackablePointList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleARCoreFrameFunctionLibrary::GetUpdatedTrackablePoints(Z_Param_Out_OutTrackablePointList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreFrameFunctionLibrary::execGetUpdatedPlanes)
	{
		P_GET_TARRAY_REF(UARPlaneGeometry*,Z_Param_Out_OutPlaneList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleARCoreFrameFunctionLibrary::GetUpdatedPlanes(Z_Param_Out_OutPlaneList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreFrameFunctionLibrary::execGetUpdatedARPins)
	{
		P_GET_TARRAY_REF(UARPin*,Z_Param_Out_OutAnchorList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleARCoreFrameFunctionLibrary::GetUpdatedARPins(Z_Param_Out_OutAnchorList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreFrameFunctionLibrary::execARCoreLineTraceRay)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Start);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_End);
		P_GET_TSET(EGoogleARCoreLineTraceChannel,Z_Param_TraceChannels);
		P_GET_TARRAY_REF(FARTraceResult,Z_Param_Out_OutHitResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGoogleARCoreFrameFunctionLibrary::ARCoreLineTraceRay(Z_Param_WorldContextObject,Z_Param_Out_Start,Z_Param_Out_End,Z_Param_TraceChannels,Z_Param_Out_OutHitResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreFrameFunctionLibrary::execARCoreLineTrace)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenPosition);
		P_GET_TSET(EGoogleARCoreLineTraceChannel,Z_Param_TraceChannels);
		P_GET_TARRAY_REF(FARTraceResult,Z_Param_Out_OutHitResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGoogleARCoreFrameFunctionLibrary::ARCoreLineTrace(Z_Param_WorldContextObject,Z_Param_Out_ScreenPosition,Z_Param_TraceChannels,Z_Param_Out_OutHitResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreFrameFunctionLibrary::execGetPose)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleARCoreFrameFunctionLibrary::GetPose(Z_Param_Out_OutPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreFrameFunctionLibrary::execGetTrackingFailureReason)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGoogleARCoreTrackingFailureReason*)Z_Param__Result=UGoogleARCoreFrameFunctionLibrary::GetTrackingFailureReason();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreFrameFunctionLibrary::execGetTrackingState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGoogleARCoreTrackingState*)Z_Param__Result=UGoogleARCoreFrameFunctionLibrary::GetTrackingState();
		P_NATIVE_END;
	}
	void UGoogleARCoreFrameFunctionLibrary::StaticRegisterNativesUGoogleARCoreFrameFunctionLibrary()
	{
		UClass* Class = UGoogleARCoreFrameFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcquireCameraImage", &UGoogleARCoreFrameFunctionLibrary::execAcquireCameraImage },
			{ "AcquirePointCloud", &UGoogleARCoreFrameFunctionLibrary::execAcquirePointCloud },
			{ "ARCoreLineTrace", &UGoogleARCoreFrameFunctionLibrary::execARCoreLineTrace },
			{ "ARCoreLineTraceRay", &UGoogleARCoreFrameFunctionLibrary::execARCoreLineTraceRay },
			{ "GetCameraImageIntrinsics", &UGoogleARCoreFrameFunctionLibrary::execGetCameraImageIntrinsics },
			{ "GetCameraTexture", &UGoogleARCoreFrameFunctionLibrary::execGetCameraTexture },
			{ "GetCameraTextureIntrinsics", &UGoogleARCoreFrameFunctionLibrary::execGetCameraTextureIntrinsics },
			{ "GetLightEstimation", &UGoogleARCoreFrameFunctionLibrary::execGetLightEstimation },
			{ "GetPointCloud", &UGoogleARCoreFrameFunctionLibrary::execGetPointCloud },
			{ "GetPose", &UGoogleARCoreFrameFunctionLibrary::execGetPose },
			{ "GetTrackingFailureReason", &UGoogleARCoreFrameFunctionLibrary::execGetTrackingFailureReason },
			{ "GetTrackingState", &UGoogleARCoreFrameFunctionLibrary::execGetTrackingState },
			{ "GetUpdatedARPins", &UGoogleARCoreFrameFunctionLibrary::execGetUpdatedARPins },
			{ "GetUpdatedAugmentedFaces", &UGoogleARCoreFrameFunctionLibrary::execGetUpdatedAugmentedFaces },
			{ "GetUpdatedAugmentedImages", &UGoogleARCoreFrameFunctionLibrary::execGetUpdatedAugmentedImages },
			{ "GetUpdatedPlanes", &UGoogleARCoreFrameFunctionLibrary::execGetUpdatedPlanes },
			{ "GetUpdatedTrackablePoints", &UGoogleARCoreFrameFunctionLibrary::execGetUpdatedTrackablePoints },
			{ "TransformARCoordinates2D", &UGoogleARCoreFrameFunctionLibrary::execTransformARCoordinates2D },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquireCameraImage_Statics
	{
		struct GoogleARCoreFrameFunctionLibrary_eventAcquireCameraImage_Parms
		{
			UGoogleARCoreCameraImage* OutLatestCameraImage;
			EGoogleARCoreFunctionStatus ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutLatestCameraImage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquireCameraImage_Statics::NewProp_OutLatestCameraImage = { "OutLatestCameraImage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventAcquireCameraImage_Parms, OutLatestCameraImage), Z_Construct_UClass_UGoogleARCoreCameraImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquireCameraImage_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquireCameraImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventAcquireCameraImage_Parms, ReturnValue), Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreFunctionStatus, METADATA_PARAMS(nullptr, 0) }; // 2516775692
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquireCameraImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquireCameraImage_Statics::NewProp_OutLatestCameraImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquireCameraImage_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquireCameraImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquireCameraImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|PassthroughCamera" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use GetARTexture." },
		{ "Keywords", "googlear arcore passthroughcamera" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquireCameraImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary, nullptr, "AcquireCameraImage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquireCameraImage_Statics::GoogleARCoreFrameFunctionLibrary_eventAcquireCameraImage_Parms), Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquireCameraImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquireCameraImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquireCameraImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquireCameraImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquireCameraImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquireCameraImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquirePointCloud_Statics
	{
		struct GoogleARCoreFrameFunctionLibrary_eventAcquirePointCloud_Parms
		{
			UGoogleARCorePointCloud* OutLatestPointCloud;
			EGoogleARCoreFunctionStatus ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutLatestPointCloud;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquirePointCloud_Statics::NewProp_OutLatestPointCloud = { "OutLatestPointCloud", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventAcquirePointCloud_Parms, OutLatestPointCloud), Z_Construct_UClass_UGoogleARCorePointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquirePointCloud_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquirePointCloud_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventAcquirePointCloud_Parms, ReturnValue), Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreFunctionStatus, METADATA_PARAMS(nullptr, 0) }; // 2516775692
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquirePointCloud_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquirePointCloud_Statics::NewProp_OutLatestPointCloud,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquirePointCloud_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquirePointCloud_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquirePointCloud_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|PointCloud" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use GetPointCloud." },
		{ "Keywords", "googlear arcore pointcloud" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquirePointCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary, nullptr, "AcquirePointCloud", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquirePointCloud_Statics::GoogleARCoreFrameFunctionLibrary_eventAcquirePointCloud_Parms), Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquirePointCloud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquirePointCloud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquirePointCloud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquirePointCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquirePointCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquirePointCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics
	{
		struct GoogleARCoreFrameFunctionLibrary_eventARCoreLineTrace_Parms
		{
			UObject* WorldContextObject;
			FVector2D ScreenPosition;
			TSet<EGoogleARCoreLineTraceChannel> TraceChannels;
			TArray<FARTraceResult> OutHitResults;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannels_ElementProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TraceChannels_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_TraceChannels;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHitResults_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHitResults;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventARCoreLineTrace_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::NewProp_ScreenPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventARCoreLineTrace_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::NewProp_ScreenPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::NewProp_ScreenPosition_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::NewProp_TraceChannels_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::NewProp_TraceChannels_ElementProp = { "TraceChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreLineTraceChannel, METADATA_PARAMS(nullptr, 0) }; // 3441697589
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::NewProp_TraceChannels = { "TraceChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventARCoreLineTrace_Parms, TraceChannels), METADATA_PARAMS(nullptr, 0) }; // 3441697589
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::NewProp_OutHitResults_Inner = { "OutHitResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(nullptr, 0) }; // 3108337464
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::NewProp_OutHitResults = { "OutHitResults", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventARCoreLineTrace_Parms, OutHitResults), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3108337464
	void Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GoogleARCoreFrameFunctionLibrary_eventARCoreLineTrace_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GoogleARCoreFrameFunctionLibrary_eventARCoreLineTrace_Parms), &Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::NewProp_ScreenPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::NewProp_TraceChannels_ElementProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::NewProp_TraceChannels_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::NewProp_TraceChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::NewProp_OutHitResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::NewProp_OutHitResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|LineTrace" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use LineTraceTrackedObjects." },
		{ "Keywords", "googlear arcore raycast hit" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary, nullptr, "ARCoreLineTrace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::GoogleARCoreFrameFunctionLibrary_eventARCoreLineTrace_Parms), Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics
	{
		struct GoogleARCoreFrameFunctionLibrary_eventARCoreLineTraceRay_Parms
		{
			UObject* WorldContextObject;
			FVector Start;
			FVector End;
			TSet<EGoogleARCoreLineTraceChannel> TraceChannels;
			TArray<FARTraceResult> OutHitResults;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannels_ElementProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TraceChannels_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_TraceChannels;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHitResults_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHitResults;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventARCoreLineTraceRay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventARCoreLineTraceRay_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventARCoreLineTraceRay_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_End_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_TraceChannels_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_TraceChannels_ElementProp = { "TraceChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreLineTraceChannel, METADATA_PARAMS(nullptr, 0) }; // 3441697589
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_TraceChannels = { "TraceChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventARCoreLineTraceRay_Parms, TraceChannels), METADATA_PARAMS(nullptr, 0) }; // 3441697589
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_OutHitResults_Inner = { "OutHitResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(nullptr, 0) }; // 3108337464
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_OutHitResults = { "OutHitResults", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventARCoreLineTraceRay_Parms, OutHitResults), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3108337464
	void Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GoogleARCoreFrameFunctionLibrary_eventARCoreLineTraceRay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GoogleARCoreFrameFunctionLibrary_eventARCoreLineTraceRay_Parms), &Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_TraceChannels_ElementProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_TraceChannels_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_TraceChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_OutHitResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_OutHitResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|LineTrace" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use LineTraceTrackedObjects3D." },
		{ "Keywords", "googlear arcore raycast hit" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary, nullptr, "ARCoreLineTraceRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::GoogleARCoreFrameFunctionLibrary_eventARCoreLineTraceRay_Parms), Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraImageIntrinsics_Statics
	{
		struct GoogleARCoreFrameFunctionLibrary_eventGetCameraImageIntrinsics_Parms
		{
			UGoogleARCoreCameraIntrinsics* OutCameraIntrinsics;
			EGoogleARCoreFunctionStatus ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutCameraIntrinsics;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraImageIntrinsics_Statics::NewProp_OutCameraIntrinsics = { "OutCameraIntrinsics", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventGetCameraImageIntrinsics_Parms, OutCameraIntrinsics), Z_Construct_UClass_UGoogleARCoreCameraIntrinsics_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraImageIntrinsics_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraImageIntrinsics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventGetCameraImageIntrinsics_Parms, ReturnValue), Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreFunctionStatus, METADATA_PARAMS(nullptr, 0) }; // 2516775692
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraImageIntrinsics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraImageIntrinsics_Statics::NewProp_OutCameraIntrinsics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraImageIntrinsics_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraImageIntrinsics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraImageIntrinsics_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|CameraIntrinsics" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use GetCameraIntrinsics." },
		{ "Keywords", "googlear arcore camera" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraImageIntrinsics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary, nullptr, "GetCameraImageIntrinsics", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraImageIntrinsics_Statics::GoogleARCoreFrameFunctionLibrary_eventGetCameraImageIntrinsics_Parms), Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraImageIntrinsics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraImageIntrinsics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraImageIntrinsics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraImageIntrinsics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraImageIntrinsics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraImageIntrinsics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTexture_Statics
	{
		struct GoogleARCoreFrameFunctionLibrary_eventGetCameraTexture_Parms
		{
			UTexture* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventGetCameraTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|PassthroughCamera" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetCameraTexture is deprecated. Currently, use GoogleARCore Passthrough Camera expression." },
		{ "Keywords", "googlear arcore passthroughcamera" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary, nullptr, "GetCameraTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTexture_Statics::GoogleARCoreFrameFunctionLibrary_eventGetCameraTexture_Parms), Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTextureIntrinsics_Statics
	{
		struct GoogleARCoreFrameFunctionLibrary_eventGetCameraTextureIntrinsics_Parms
		{
			UGoogleARCoreCameraIntrinsics* OutCameraIntrinsics;
			EGoogleARCoreFunctionStatus ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutCameraIntrinsics;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTextureIntrinsics_Statics::NewProp_OutCameraIntrinsics = { "OutCameraIntrinsics", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventGetCameraTextureIntrinsics_Parms, OutCameraIntrinsics), Z_Construct_UClass_UGoogleARCoreCameraIntrinsics_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTextureIntrinsics_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTextureIntrinsics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventGetCameraTextureIntrinsics_Parms, ReturnValue), Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreFunctionStatus, METADATA_PARAMS(nullptr, 0) }; // 2516775692
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTextureIntrinsics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTextureIntrinsics_Statics::NewProp_OutCameraIntrinsics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTextureIntrinsics_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTextureIntrinsics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTextureIntrinsics_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|CameraIntrinsics" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use GetCameraIntrinsics." },
		{ "Keywords", "googlear arcore camera" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTextureIntrinsics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary, nullptr, "GetCameraTextureIntrinsics", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTextureIntrinsics_Statics::GoogleARCoreFrameFunctionLibrary_eventGetCameraTextureIntrinsics_Parms), Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTextureIntrinsics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTextureIntrinsics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTextureIntrinsics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTextureIntrinsics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTextureIntrinsics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTextureIntrinsics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetLightEstimation_Statics
	{
		struct GoogleARCoreFrameFunctionLibrary_eventGetLightEstimation_Parms
		{
			FGoogleARCoreLightEstimate OutLightEstimate;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutLightEstimate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetLightEstimation_Statics::NewProp_OutLightEstimate = { "OutLightEstimate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventGetLightEstimation_Parms, OutLightEstimate), Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate, METADATA_PARAMS(nullptr, 0) }; // 1581791339
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetLightEstimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetLightEstimation_Statics::NewProp_OutLightEstimate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetLightEstimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|LightEstimation" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use GetCurrentLightEstimate." },
		{ "Keywords", "googlear arcore light ambient" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetLightEstimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary, nullptr, "GetLightEstimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetLightEstimation_Statics::GoogleARCoreFrameFunctionLibrary_eventGetLightEstimation_Parms), Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetLightEstimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetLightEstimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetLightEstimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetLightEstimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetLightEstimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetLightEstimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPointCloud_Statics
	{
		struct GoogleARCoreFrameFunctionLibrary_eventGetPointCloud_Parms
		{
			UGoogleARCorePointCloud* OutLatestPointCloud;
			EGoogleARCoreFunctionStatus ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutLatestPointCloud;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPointCloud_Statics::NewProp_OutLatestPointCloud = { "OutLatestPointCloud", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventGetPointCloud_Parms, OutLatestPointCloud), Z_Construct_UClass_UGoogleARCorePointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPointCloud_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPointCloud_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventGetPointCloud_Parms, ReturnValue), Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreFunctionStatus, METADATA_PARAMS(nullptr, 0) }; // 2516775692
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPointCloud_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPointCloud_Statics::NewProp_OutLatestPointCloud,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPointCloud_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPointCloud_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPointCloud_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|PointCloud" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use GetPointCloud." },
		{ "Keywords", "googlear arcore pointcloud" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPointCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary, nullptr, "GetPointCloud", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPointCloud_Statics::GoogleARCoreFrameFunctionLibrary_eventGetPointCloud_Parms), Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPointCloud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPointCloud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPointCloud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPointCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPointCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPointCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPose_Statics
	{
		struct GoogleARCoreFrameFunctionLibrary_eventGetPose_Parms
		{
			FTransform OutPose;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPose_Statics::NewProp_OutPose = { "OutPose", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventGetPose_Parms, OutPose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPose_Statics::NewProp_OutPose,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|MotionTracking" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use GetOrientationAndPosition." },
		{ "Keywords", "googlear arcore pose transform" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary, nullptr, "GetPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPose_Statics::GoogleARCoreFrameFunctionLibrary_eventGetPose_Parms), Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingFailureReason_Statics
	{
		struct GoogleARCoreFrameFunctionLibrary_eventGetTrackingFailureReason_Parms
		{
			EGoogleARCoreTrackingFailureReason ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingFailureReason_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingFailureReason_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventGetTrackingFailureReason_Parms, ReturnValue), Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingFailureReason, METADATA_PARAMS(nullptr, 0) }; // 1247597636
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingFailureReason_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingFailureReason_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingFailureReason_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingFailureReason_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|MotionTracking" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetTrackingFailureReason is deprecated. Use GetTrackingQualityReason." },
		{ "Keywords", "googlear arcore session" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingFailureReason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary, nullptr, "GetTrackingFailureReason", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingFailureReason_Statics::GoogleARCoreFrameFunctionLibrary_eventGetTrackingFailureReason_Parms), Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingFailureReason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingFailureReason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingFailureReason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingFailureReason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingFailureReason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingFailureReason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingState_Statics
	{
		struct GoogleARCoreFrameFunctionLibrary_eventGetTrackingState_Parms
		{
			EGoogleARCoreTrackingState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventGetTrackingState_Parms, ReturnValue), Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingState, METADATA_PARAMS(nullptr, 0) }; // 3959168348
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingState_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|MotionTracking" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetTrackingState is deprecated. Use GetTrackingQuality." },
		{ "Keywords", "googlear arcore session" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary, nullptr, "GetTrackingState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingState_Statics::GoogleARCoreFrameFunctionLibrary_eventGetTrackingState_Parms), Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedARPins_Statics
	{
		struct GoogleARCoreFrameFunctionLibrary_eventGetUpdatedARPins_Parms
		{
			TArray<UARPin*> OutAnchorList;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAnchorList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAnchorList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedARPins_Statics::NewProp_OutAnchorList_Inner = { "OutAnchorList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedARPins_Statics::NewProp_OutAnchorList = { "OutAnchorList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventGetUpdatedARPins_Parms, OutAnchorList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedARPins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedARPins_Statics::NewProp_OutAnchorList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedARPins_Statics::NewProp_OutAnchorList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedARPins_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|ARAnchor" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use GetAllPins." },
		{ "Keywords", "googlear arcore Anchor" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedARPins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary, nullptr, "GetUpdatedARPins", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedARPins_Statics::GoogleARCoreFrameFunctionLibrary_eventGetUpdatedARPins_Parms), Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedARPins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedARPins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedARPins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedARPins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedARPins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedARPins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedFaces_Statics
	{
		struct GoogleARCoreFrameFunctionLibrary_eventGetUpdatedAugmentedFaces_Parms
		{
			TArray<UGoogleARCoreAugmentedFace*> OutFaceList;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutFaceList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFaceList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedFaces_Statics::NewProp_OutFaceList_Inner = { "OutFaceList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGoogleARCoreAugmentedFace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedFaces_Statics::NewProp_OutFaceList = { "OutFaceList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventGetUpdatedAugmentedFaces_Parms, OutFaceList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedFaces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedFaces_Statics::NewProp_OutFaceList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedFaces_Statics::NewProp_OutFaceList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedFaces_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|AugmentedFace" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use GetAllGeometriesByClass." },
		{ "Keywords", "googlear arcore augmented face updated" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedFaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary, nullptr, "GetUpdatedAugmentedFaces", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedFaces_Statics::GoogleARCoreFrameFunctionLibrary_eventGetUpdatedAugmentedFaces_Parms), Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedFaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedFaces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedFaces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedFaces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedFaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedFaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedImages_Statics
	{
		struct GoogleARCoreFrameFunctionLibrary_eventGetUpdatedAugmentedImages_Parms
		{
			TArray<UGoogleARCoreAugmentedImage*> OutImageList;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutImageList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutImageList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedImages_Statics::NewProp_OutImageList_Inner = { "OutImageList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGoogleARCoreAugmentedImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedImages_Statics::NewProp_OutImageList = { "OutImageList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventGetUpdatedAugmentedImages_Parms, OutImageList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedImages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedImages_Statics::NewProp_OutImageList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedImages_Statics::NewProp_OutImageList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedImages_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|AugmentedImage" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use GetAllGeometriesByClass." },
		{ "Keywords", "googlear arcore augmented image updated" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedImages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary, nullptr, "GetUpdatedAugmentedImages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedImages_Statics::GoogleARCoreFrameFunctionLibrary_eventGetUpdatedAugmentedImages_Parms), Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedImages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedImages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedImages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedImages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedImages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedImages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedPlanes_Statics
	{
		struct GoogleARCoreFrameFunctionLibrary_eventGetUpdatedPlanes_Parms
		{
			TArray<UARPlaneGeometry*> OutPlaneList;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutPlaneList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPlaneList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedPlanes_Statics::NewProp_OutPlaneList_Inner = { "OutPlaneList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UARPlaneGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedPlanes_Statics::NewProp_OutPlaneList = { "OutPlaneList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventGetUpdatedPlanes_Parms, OutPlaneList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedPlanes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedPlanes_Statics::NewProp_OutPlaneList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedPlanes_Statics::NewProp_OutPlaneList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedPlanes_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|TrackablePlane" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use GetAllGeometriesByClass." },
		{ "Keywords", "googlear arcore pose transform" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedPlanes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary, nullptr, "GetUpdatedPlanes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedPlanes_Statics::GoogleARCoreFrameFunctionLibrary_eventGetUpdatedPlanes_Parms), Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedPlanes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedPlanes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedPlanes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedPlanes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedPlanes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedPlanes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedTrackablePoints_Statics
	{
		struct GoogleARCoreFrameFunctionLibrary_eventGetUpdatedTrackablePoints_Parms
		{
			TArray<UARTrackedPoint*> OutTrackablePointList;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutTrackablePointList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTrackablePointList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedTrackablePoints_Statics::NewProp_OutTrackablePointList_Inner = { "OutTrackablePointList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UARTrackedPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedTrackablePoints_Statics::NewProp_OutTrackablePointList = { "OutTrackablePointList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventGetUpdatedTrackablePoints_Parms, OutTrackablePointList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedTrackablePoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedTrackablePoints_Statics::NewProp_OutTrackablePointList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedTrackablePoints_Statics::NewProp_OutTrackablePointList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedTrackablePoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|TrackablePoint" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use GetAllGeometriesByClass." },
		{ "Keywords", "googlear arcore pose transform" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedTrackablePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary, nullptr, "GetUpdatedTrackablePoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedTrackablePoints_Statics::GoogleARCoreFrameFunctionLibrary_eventGetUpdatedTrackablePoints_Parms), Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedTrackablePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedTrackablePoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedTrackablePoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedTrackablePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedTrackablePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedTrackablePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics
	{
		struct GoogleARCoreFrameFunctionLibrary_eventTransformARCoordinates2D_Parms
		{
			EGoogleARCoreCoordinates2DType InputCoordinatesType;
			TArray<FVector2D> InputCoordinates;
			EGoogleARCoreCoordinates2DType OutputCoordinatesType;
			TArray<FVector2D> OutputCoordinates;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputCoordinatesType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputCoordinatesType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputCoordinates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputCoordinates;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputCoordinatesType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputCoordinatesType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputCoordinates_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputCoordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::NewProp_InputCoordinatesType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::NewProp_InputCoordinatesType = { "InputCoordinatesType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventTransformARCoordinates2D_Parms, InputCoordinatesType), Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCoordinates2DType, METADATA_PARAMS(nullptr, 0) }; // 24251418
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::NewProp_InputCoordinates_Inner = { "InputCoordinates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::NewProp_InputCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::NewProp_InputCoordinates = { "InputCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventTransformARCoordinates2D_Parms, InputCoordinates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::NewProp_InputCoordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::NewProp_InputCoordinates_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::NewProp_OutputCoordinatesType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::NewProp_OutputCoordinatesType = { "OutputCoordinatesType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventTransformARCoordinates2D_Parms, OutputCoordinatesType), Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCoordinates2DType, METADATA_PARAMS(nullptr, 0) }; // 24251418
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::NewProp_OutputCoordinates_Inner = { "OutputCoordinates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::NewProp_OutputCoordinates = { "OutputCoordinates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreFrameFunctionLibrary_eventTransformARCoordinates2D_Parms, OutputCoordinates), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::NewProp_InputCoordinatesType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::NewProp_InputCoordinatesType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::NewProp_InputCoordinates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::NewProp_InputCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::NewProp_OutputCoordinatesType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::NewProp_OutputCoordinatesType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::NewProp_OutputCoordinates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::NewProp_OutputCoordinates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|PassthroughCamera" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated, use the standard materials from ARUtilities plugin for passthrough rendering." },
		{ "Keywords", "googlear arcore passthrough camera uv" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary, nullptr, "TransformARCoordinates2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::GoogleARCoreFrameFunctionLibrary_eventTransformARCoordinates2D_Parms), Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoogleARCoreFrameFunctionLibrary);
	UClass* Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_NoRegister()
	{
		return UGoogleARCoreFrameFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquireCameraImage, "AcquireCameraImage" }, // 3853341049
		{ &Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_AcquirePointCloud, "AcquirePointCloud" }, // 1090190762
		{ &Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTrace, "ARCoreLineTrace" }, // 1788768196
		{ &Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_ARCoreLineTraceRay, "ARCoreLineTraceRay" }, // 3542616159
		{ &Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraImageIntrinsics, "GetCameraImageIntrinsics" }, // 1255246127
		{ &Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTexture, "GetCameraTexture" }, // 1178266515
		{ &Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetCameraTextureIntrinsics, "GetCameraTextureIntrinsics" }, // 2064929859
		{ &Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetLightEstimation, "GetLightEstimation" }, // 3561951723
		{ &Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPointCloud, "GetPointCloud" }, // 2544309130
		{ &Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetPose, "GetPose" }, // 3590031664
		{ &Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingFailureReason, "GetTrackingFailureReason" }, // 4225376096
		{ &Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetTrackingState, "GetTrackingState" }, // 3458449194
		{ &Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedARPins, "GetUpdatedARPins" }, // 1286722370
		{ &Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedFaces, "GetUpdatedAugmentedFaces" }, // 2433172584
		{ &Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedAugmentedImages, "GetUpdatedAugmentedImages" }, // 1651072803
		{ &Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedPlanes, "GetUpdatedPlanes" }, // 1549902576
		{ &Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_GetUpdatedTrackablePoints, "GetUpdatedTrackablePoints" }, // 3796316692
		{ &Z_Construct_UFunction_UGoogleARCoreFrameFunctionLibrary_TransformARCoordinates2D, "TransformARCoordinates2D" }, // 3661447273
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A function library that provides static/Blueprint functions associated with most recent GoogleARCore tracking frame.*/" },
		{ "IncludePath", "GoogleARCoreFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
		{ "ToolTip", "A function library that provides static/Blueprint functions associated with most recent GoogleARCore tracking frame." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleARCoreFrameFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_Statics::ClassParams = {
		&UGoogleARCoreFrameFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UGoogleARCoreFrameFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoogleARCoreFrameFunctionLibrary.OuterSingleton, Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGoogleARCoreFrameFunctionLibrary.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UClass* StaticClass<UGoogleARCoreFrameFunctionLibrary>()
	{
		return UGoogleARCoreFrameFunctionLibrary::StaticClass();
	}
	UGoogleARCoreFrameFunctionLibrary::UGoogleARCoreFrameFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleARCoreFrameFunctionLibrary);
	UGoogleARCoreFrameFunctionLibrary::~UGoogleARCoreFrameFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary, UGoogleARCoreSessionFunctionLibrary::StaticClass, TEXT("UGoogleARCoreSessionFunctionLibrary"), &Z_Registration_Info_UClass_UGoogleARCoreSessionFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoogleARCoreSessionFunctionLibrary), 2501444747U) },
		{ Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary, UGoogleARCoreFrameFunctionLibrary::StaticClass, TEXT("UGoogleARCoreFrameFunctionLibrary"), &Z_Registration_Info_UClass_UGoogleARCoreFrameFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoogleARCoreFrameFunctionLibrary), 3606186714U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_4014246593(TEXT("/Script/GoogleARCoreBase"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
