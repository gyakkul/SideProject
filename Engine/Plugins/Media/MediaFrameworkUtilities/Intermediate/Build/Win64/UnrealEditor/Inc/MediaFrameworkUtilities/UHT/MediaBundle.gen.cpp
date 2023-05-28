// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaBundle.h"
#include "OpenCVLensDistortionParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaBundle() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_AMediaBundleActorBase_NoRegister();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaBundle();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaBundle_NoRegister();
	OPENCVLENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FOpenCVCameraViewInfo();
	OPENCVLENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters();
	UPackage* Z_Construct_UPackage__Script_MediaFrameworkUtilities();
// End Cross Module References
	DEFINE_FUNCTION(UMediaBundle::execOnMediaOpenFailed)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMediaOpenFailed(Z_Param_DeviceUrl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaBundle::execOnMediaOpenOpened)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMediaOpenOpened(Z_Param_DeviceUrl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaBundle::execOnMediaClosed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMediaClosed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaBundle::execGetUndistortedCameraViewInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOpenCVCameraViewInfo*)Z_Param__Result=P_THIS->GetUndistortedCameraViewInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaBundle::execGetMediaSource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMediaSource**)Z_Param__Result=P_THIS->GetMediaSource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaBundle::execGetLensDisplacementTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetLensDisplacementTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaBundle::execGetMediaTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMediaTexture**)Z_Param__Result=P_THIS->GetMediaTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaBundle::execGetMediaPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMediaPlayer**)Z_Param__Result=P_THIS->GetMediaPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaBundle::execGetMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetMaterial();
		P_NATIVE_END;
	}
	void UMediaBundle::StaticRegisterNativesUMediaBundle()
	{
		UClass* Class = UMediaBundle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLensDisplacementTexture", &UMediaBundle::execGetLensDisplacementTexture },
			{ "GetMaterial", &UMediaBundle::execGetMaterial },
			{ "GetMediaPlayer", &UMediaBundle::execGetMediaPlayer },
			{ "GetMediaSource", &UMediaBundle::execGetMediaSource },
			{ "GetMediaTexture", &UMediaBundle::execGetMediaTexture },
			{ "GetUndistortedCameraViewInfo", &UMediaBundle::execGetUndistortedCameraViewInfo },
			{ "OnMediaClosed", &UMediaBundle::execOnMediaClosed },
			{ "OnMediaOpenFailed", &UMediaBundle::execOnMediaOpenFailed },
			{ "OnMediaOpenOpened", &UMediaBundle::execOnMediaOpenOpened },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaBundle_GetLensDisplacementTexture_Statics
	{
		struct MediaBundle_eventGetLensDisplacementTexture_Parms
		{
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaBundle_GetLensDisplacementTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaBundle_eventGetLensDisplacementTexture_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaBundle_GetLensDisplacementTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBundle_GetLensDisplacementTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaBundle_GetLensDisplacementTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaBundle" },
		{ "Comment", "/**\n\x09 * Get the lens displacement Render Target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "Get the lens displacement Render Target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaBundle_GetLensDisplacementTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaBundle, nullptr, "GetLensDisplacementTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaBundle_GetLensDisplacementTexture_Statics::MediaBundle_eventGetLensDisplacementTexture_Parms), Z_Construct_UFunction_UMediaBundle_GetLensDisplacementTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBundle_GetLensDisplacementTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaBundle_GetLensDisplacementTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBundle_GetLensDisplacementTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaBundle_GetLensDisplacementTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaBundle_GetLensDisplacementTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaBundle_GetMaterial_Statics
	{
		struct MediaBundle_eventGetMaterial_Parms
		{
			UMaterialInterface* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaBundle_GetMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaBundle_eventGetMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaBundle_GetMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBundle_GetMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaBundle_GetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaBundle" },
		{ "Comment", "/**\n\x09 * Get the material interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "Get the material interface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaBundle_GetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaBundle, nullptr, "GetMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaBundle_GetMaterial_Statics::MediaBundle_eventGetMaterial_Parms), Z_Construct_UFunction_UMediaBundle_GetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBundle_GetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaBundle_GetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBundle_GetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaBundle_GetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaBundle_GetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaBundle_GetMediaPlayer_Statics
	{
		struct MediaBundle_eventGetMediaPlayer_Parms
		{
			UMediaPlayer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaBundle_GetMediaPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaBundle_eventGetMediaPlayer_Parms, ReturnValue), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaBundle_GetMediaPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBundle_GetMediaPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaBundle_GetMediaPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaBundle" },
		{ "Comment", "/**\n\x09 * Get the media player.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "Get the media player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaBundle_GetMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaBundle, nullptr, "GetMediaPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaBundle_GetMediaPlayer_Statics::MediaBundle_eventGetMediaPlayer_Parms), Z_Construct_UFunction_UMediaBundle_GetMediaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBundle_GetMediaPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaBundle_GetMediaPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBundle_GetMediaPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaBundle_GetMediaPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaBundle_GetMediaPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaBundle_GetMediaSource_Statics
	{
		struct MediaBundle_eventGetMediaSource_Parms
		{
			UMediaSource* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaBundle_GetMediaSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaBundle_eventGetMediaSource_Parms, ReturnValue), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaBundle_GetMediaSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBundle_GetMediaSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaBundle_GetMediaSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaBundle" },
		{ "Comment", "/**\n\x09 * Get the media source.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "Get the media source." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaBundle_GetMediaSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaBundle, nullptr, "GetMediaSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaBundle_GetMediaSource_Statics::MediaBundle_eventGetMediaSource_Parms), Z_Construct_UFunction_UMediaBundle_GetMediaSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBundle_GetMediaSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaBundle_GetMediaSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBundle_GetMediaSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaBundle_GetMediaSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaBundle_GetMediaSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaBundle_GetMediaTexture_Statics
	{
		struct MediaBundle_eventGetMediaTexture_Parms
		{
			UMediaTexture* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaBundle_GetMediaTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaBundle_eventGetMediaTexture_Parms, ReturnValue), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaBundle_GetMediaTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBundle_GetMediaTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaBundle_GetMediaTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaBundle" },
		{ "Comment", "/**\n\x09 * Get the media texture.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "Get the media texture." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaBundle_GetMediaTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaBundle, nullptr, "GetMediaTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaBundle_GetMediaTexture_Statics::MediaBundle_eventGetMediaTexture_Parms), Z_Construct_UFunction_UMediaBundle_GetMediaTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBundle_GetMediaTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaBundle_GetMediaTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBundle_GetMediaTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaBundle_GetMediaTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaBundle_GetMediaTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaBundle_GetUndistortedCameraViewInfo_Statics
	{
		struct MediaBundle_eventGetUndistortedCameraViewInfo_Parms
		{
			FOpenCVCameraViewInfo ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaBundle_GetUndistortedCameraViewInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaBundle_eventGetUndistortedCameraViewInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FOpenCVCameraViewInfo, METADATA_PARAMS(nullptr, 0) }; // 2776755653
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaBundle_GetUndistortedCameraViewInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBundle_GetUndistortedCameraViewInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaBundle_GetUndistortedCameraViewInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaBundle|LensDistortion" },
		{ "Comment", "/**\n\x09 * Get the undistorted space camera view information.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "Get the undistorted space camera view information." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaBundle_GetUndistortedCameraViewInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaBundle, nullptr, "GetUndistortedCameraViewInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaBundle_GetUndistortedCameraViewInfo_Statics::MediaBundle_eventGetUndistortedCameraViewInfo_Parms), Z_Construct_UFunction_UMediaBundle_GetUndistortedCameraViewInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBundle_GetUndistortedCameraViewInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaBundle_GetUndistortedCameraViewInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBundle_GetUndistortedCameraViewInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaBundle_GetUndistortedCameraViewInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaBundle_GetUndistortedCameraViewInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaBundle_OnMediaClosed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaBundle_OnMediaClosed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Callback function to show the DefaultTexture\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "Callback function to show the DefaultTexture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaBundle_OnMediaClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaBundle, nullptr, "OnMediaClosed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaBundle_OnMediaClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBundle_OnMediaClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaBundle_OnMediaClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaBundle_OnMediaClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaBundle_OnMediaOpenFailed_Statics
	{
		struct MediaBundle_eventOnMediaOpenFailed_Parms
		{
			FString DeviceUrl;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceUrl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaBundle_OnMediaOpenFailed_Statics::NewProp_DeviceUrl = { "DeviceUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaBundle_eventOnMediaOpenFailed_Parms, DeviceUrl), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaBundle_OnMediaOpenFailed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBundle_OnMediaOpenFailed_Statics::NewProp_DeviceUrl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaBundle_OnMediaOpenFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaBundle_OnMediaOpenFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaBundle, nullptr, "OnMediaOpenFailed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaBundle_OnMediaOpenFailed_Statics::MediaBundle_eventOnMediaOpenFailed_Parms), Z_Construct_UFunction_UMediaBundle_OnMediaOpenFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBundle_OnMediaOpenFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaBundle_OnMediaOpenFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBundle_OnMediaOpenFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaBundle_OnMediaOpenFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaBundle_OnMediaOpenFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaBundle_OnMediaOpenOpened_Statics
	{
		struct MediaBundle_eventOnMediaOpenOpened_Parms
		{
			FString DeviceUrl;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceUrl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaBundle_OnMediaOpenOpened_Statics::NewProp_DeviceUrl = { "DeviceUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaBundle_eventOnMediaOpenOpened_Parms, DeviceUrl), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaBundle_OnMediaOpenOpened_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBundle_OnMediaOpenOpened_Statics::NewProp_DeviceUrl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaBundle_OnMediaOpenOpened_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaBundle_OnMediaOpenOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaBundle, nullptr, "OnMediaOpenOpened", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaBundle_OnMediaOpenOpened_Statics::MediaBundle_eventOnMediaOpenOpened_Parms), Z_Construct_UFunction_UMediaBundle_OnMediaOpenOpened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBundle_OnMediaOpenOpened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaBundle_OnMediaOpenOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaBundle_OnMediaOpenOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaBundle_OnMediaOpenOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaBundle_OnMediaOpenOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaBundle);
	UClass* Z_Construct_UClass_UMediaBundle_NoRegister()
	{
		return UMediaBundle::StaticClass();
	}
	struct Z_Construct_UClass_UMediaBundle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoopMediaSource_MetaData[];
#endif
		static void NewProp_bLoopMediaSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopMediaSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReopenSourceOnError_MetaData[];
#endif
		static void NewProp_bReopenSourceOnError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReopenSourceOnError;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaBundleActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MediaBundleActorClass;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LensParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UndistortedCameraViewInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UndistortedCameraViewInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLensParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentLensParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensDisplacementMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LensDisplacementMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReferenceCount;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFailedTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultFailedTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultActorClass;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaBundle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaBundle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaBundle_GetLensDisplacementTexture, "GetLensDisplacementTexture" }, // 3979890060
		{ &Z_Construct_UFunction_UMediaBundle_GetMaterial, "GetMaterial" }, // 388095805
		{ &Z_Construct_UFunction_UMediaBundle_GetMediaPlayer, "GetMediaPlayer" }, // 2035946840
		{ &Z_Construct_UFunction_UMediaBundle_GetMediaSource, "GetMediaSource" }, // 66493659
		{ &Z_Construct_UFunction_UMediaBundle_GetMediaTexture, "GetMediaTexture" }, // 3012331008
		{ &Z_Construct_UFunction_UMediaBundle_GetUndistortedCameraViewInfo, "GetUndistortedCameraViewInfo" }, // 406747607
		{ &Z_Construct_UFunction_UMediaBundle_OnMediaClosed, "OnMediaClosed" }, // 1669591230
		{ &Z_Construct_UFunction_UMediaBundle_OnMediaOpenFailed, "OnMediaOpenFailed" }, // 605329926
		{ &Z_Construct_UFunction_UMediaBundle_OnMediaOpenOpened, "OnMediaOpenOpened" }, // 9026222
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaBundle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A bundle of the Media Asset necessary to play a video & audio\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MediaBundle.h" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "A bundle of the Media Asset necessary to play a video & audio" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaBundle_Statics::NewProp_MediaSource_MetaData[] = {
		{ "Category", "MediaBundle" },
		{ "Comment", "/* MediaBundle internal MediaSource */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "MediaBundle internal MediaSource" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaBundle_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0016000002080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaBundle, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaBundle_Statics::NewProp_MediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBundle_Statics::NewProp_MediaSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaBundle_Statics::NewProp_bLoopMediaSource_MetaData[] = {
		{ "Category", "MediaBundle" },
		{ "Comment", "/** Controls MediaPlayer looping option */" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "Controls MediaPlayer looping option" },
	};
#endif
	void Z_Construct_UClass_UMediaBundle_Statics::NewProp_bLoopMediaSource_SetBit(void* Obj)
	{
		((UMediaBundle*)Obj)->bLoopMediaSource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaBundle_Statics::NewProp_bLoopMediaSource = { "bLoopMediaSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaBundle), &Z_Construct_UClass_UMediaBundle_Statics::NewProp_bLoopMediaSource_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaBundle_Statics::NewProp_bLoopMediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBundle_Statics::NewProp_bLoopMediaSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaBundle_Statics::NewProp_bReopenSourceOnError_MetaData[] = {
		{ "Category", "MediaBundle" },
		{ "Comment", "/** Automatically try to open the MediaSource again if an error is detected */" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "Automatically try to open the MediaSource again if an error is detected" },
	};
#endif
	void Z_Construct_UClass_UMediaBundle_Statics::NewProp_bReopenSourceOnError_SetBit(void* Obj)
	{
		((UMediaBundle*)Obj)->bReopenSourceOnError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaBundle_Statics::NewProp_bReopenSourceOnError = { "bReopenSourceOnError", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaBundle), &Z_Construct_UClass_UMediaBundle_Statics::NewProp_bReopenSourceOnError_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaBundle_Statics::NewProp_bReopenSourceOnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBundle_Statics::NewProp_bReopenSourceOnError_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaBundle_Statics::NewProp_MediaBundleActorClass_MetaData[] = {
		{ "Category", "MediaBundle" },
		{ "Comment", "/* Class to spawn for that asset. */" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "Class to spawn for that asset." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMediaBundle_Statics::NewProp_MediaBundleActorClass = { "MediaBundleActorClass", nullptr, (EPropertyFlags)0x0014040802000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaBundle, MediaBundleActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMediaBundleActorBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaBundle_Statics::NewProp_MediaBundleActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBundle_Statics::NewProp_MediaBundleActorClass_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaBundle_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "Comment", "/* MediaBundle default MediaPlayer */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "MediaBundle default MediaPlayer" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaBundle_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0026080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaBundle, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaBundle_Statics::NewProp_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBundle_Statics::NewProp_MediaPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaBundle_Statics::NewProp_MediaTexture_MetaData[] = {
		{ "Comment", "/* MediaBundle default MediaTexture */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "MediaBundle default MediaTexture" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaBundle_Statics::NewProp_MediaTexture = { "MediaTexture", nullptr, (EPropertyFlags)0x0026080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaBundle, MediaTexture), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaBundle_Statics::NewProp_MediaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBundle_Statics::NewProp_MediaTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaBundle_Statics::NewProp_Material_MetaData[] = {
		{ "Comment", "/* MediaBundle default Material */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "MediaBundle default Material" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaBundle_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0026080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaBundle, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaBundle_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBundle_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaBundle_Statics::NewProp_LensParameters_MetaData[] = {
		{ "Category", "LensParameters" },
		{ "Comment", "/* Lens parameters of the source */" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "Lens parameters of the source" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaBundle_Statics::NewProp_LensParameters = { "LensParameters", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaBundle, LensParameters), Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters, METADATA_PARAMS(Z_Construct_UClass_UMediaBundle_Statics::NewProp_LensParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBundle_Statics::NewProp_LensParameters_MetaData)) }; // 1893023535
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaBundle_Statics::NewProp_UndistortedCameraViewInfo_MetaData[] = {
		{ "Category", "LensParameters" },
		{ "Comment", "/* CameraView information for the undistorted space */" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "CameraView information for the undistorted space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaBundle_Statics::NewProp_UndistortedCameraViewInfo = { "UndistortedCameraViewInfo", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaBundle, UndistortedCameraViewInfo), Z_Construct_UScriptStruct_FOpenCVCameraViewInfo, METADATA_PARAMS(Z_Construct_UClass_UMediaBundle_Statics::NewProp_UndistortedCameraViewInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBundle_Statics::NewProp_UndistortedCameraViewInfo_MetaData)) }; // 2776755653
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaBundle_Statics::NewProp_CurrentLensParameters_MetaData[] = {
		{ "Comment", "/* Current values of lens parameters to support undo/redo correctly */" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "Current values of lens parameters to support undo/redo correctly" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaBundle_Statics::NewProp_CurrentLensParameters = { "CurrentLensParameters", nullptr, (EPropertyFlags)0x0020080400002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaBundle, CurrentLensParameters), Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters, METADATA_PARAMS(Z_Construct_UClass_UMediaBundle_Statics::NewProp_CurrentLensParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBundle_Statics::NewProp_CurrentLensParameters_MetaData)) }; // 1893023535
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaBundle_Statics::NewProp_LensDisplacementMap_MetaData[] = {
		{ "Comment", "/* Destination of lens distortion result */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "Destination of lens distortion result" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaBundle_Statics::NewProp_LensDisplacementMap = { "LensDisplacementMap", nullptr, (EPropertyFlags)0x0026080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaBundle, LensDisplacementMap), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaBundle_Statics::NewProp_LensDisplacementMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBundle_Statics::NewProp_LensDisplacementMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaBundle_Statics::NewProp_ReferenceCount_MetaData[] = {
		{ "Category", "MediaBundle" },
		{ "Comment", "/* Internal reference counter of active media player */" },
		{ "DisplayName", "Debug: Reference Count" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "Internal reference counter of active media player" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMediaBundle_Statics::NewProp_ReferenceCount = { "ReferenceCount", nullptr, (EPropertyFlags)0x0040040000232001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaBundle, ReferenceCount), METADATA_PARAMS(Z_Construct_UClass_UMediaBundle_Statics::NewProp_ReferenceCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBundle_Statics::NewProp_ReferenceCount_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaBundle_Statics::NewProp_DefaultMaterial_MetaData[] = {
		{ "Comment", "/* Default Material from the plugin*/" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "Default Material from the plugin" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaBundle_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaBundle, DefaultMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaBundle_Statics::NewProp_DefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBundle_Statics::NewProp_DefaultMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaBundle_Statics::NewProp_DefaultFailedTexture_MetaData[] = {
		{ "Comment", "/* Default Texture from the plugin*/" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "Default Texture from the plugin" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaBundle_Statics::NewProp_DefaultFailedTexture = { "DefaultFailedTexture", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaBundle, DefaultFailedTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaBundle_Statics::NewProp_DefaultFailedTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBundle_Statics::NewProp_DefaultFailedTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaBundle_Statics::NewProp_DefaultActorClass_MetaData[] = {
		{ "Comment", "/* Default Actor Class from the plugin*/" },
		{ "ModuleRelativePath", "Public/MediaBundle.h" },
		{ "ToolTip", "Default Actor Class from the plugin" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMediaBundle_Statics::NewProp_DefaultActorClass = { "DefaultActorClass", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaBundle, DefaultActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMediaBundleActorBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaBundle_Statics::NewProp_DefaultActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBundle_Statics::NewProp_DefaultActorClass_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaBundle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaBundle_Statics::NewProp_MediaSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaBundle_Statics::NewProp_bLoopMediaSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaBundle_Statics::NewProp_bReopenSourceOnError,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaBundle_Statics::NewProp_MediaBundleActorClass,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaBundle_Statics::NewProp_MediaPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaBundle_Statics::NewProp_MediaTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaBundle_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaBundle_Statics::NewProp_LensParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaBundle_Statics::NewProp_UndistortedCameraViewInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaBundle_Statics::NewProp_CurrentLensParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaBundle_Statics::NewProp_LensDisplacementMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaBundle_Statics::NewProp_ReferenceCount,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaBundle_Statics::NewProp_DefaultMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaBundle_Statics::NewProp_DefaultFailedTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaBundle_Statics::NewProp_DefaultActorClass,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaBundle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaBundle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaBundle_Statics::ClassParams = {
		&UMediaBundle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMediaBundle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBundle_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaBundle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaBundle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaBundle()
	{
		if (!Z_Registration_Info_UClass_UMediaBundle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaBundle.OuterSingleton, Z_Construct_UClass_UMediaBundle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaBundle.OuterSingleton;
	}
	template<> MEDIAFRAMEWORKUTILITIES_API UClass* StaticClass<UMediaBundle>()
	{
		return UMediaBundle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaBundle);
	UMediaBundle::~UMediaBundle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaBundle, UMediaBundle::StaticClass, TEXT("UMediaBundle"), &Z_Registration_Info_UClass_UMediaBundle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaBundle), 2707368275U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_2757411796(TEXT("/Script/MediaFrameworkUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
