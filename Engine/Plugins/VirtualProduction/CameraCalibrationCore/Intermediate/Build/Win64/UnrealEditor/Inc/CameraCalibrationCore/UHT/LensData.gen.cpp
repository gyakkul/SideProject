// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LensData.h"
#include "CalibratedMapFormat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLensData() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensModel_NoRegister();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCalibratedMapFormat();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFeedInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTablePointInfoBase();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDistortionData();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDistortionInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDistortionPointInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFocalLengthInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFocalLengthPointInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FImageCenterInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FImageCenterPointInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLensInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNodalOffsetPointInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNodalPointOffset();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSimulcamInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSTMapInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSTMapPointInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensInfo;
class UScriptStruct* FLensInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensInfo, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("LensInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LensInfo.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FLensInfo>()
{
	return FLensInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLensInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensModelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LensModelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensSerialNumber_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LensSerialNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensModel_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LensModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SensorDimensions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SensorDimensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageDimensions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImageDimensions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Information about the lens rig\n */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Information about the lens rig" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_LensModelName_MetaData[] = {
		{ "Category", "Lens Info" },
		{ "Comment", "/** Model name of the lens */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Model name of the lens" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_LensModelName = { "LensModelName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensInfo, LensModelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_LensModelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_LensModelName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_LensSerialNumber_MetaData[] = {
		{ "Category", "Lens Info" },
		{ "Comment", "/** Serial number of the lens */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Serial number of the lens" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_LensSerialNumber = { "LensSerialNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensInfo, LensSerialNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_LensSerialNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_LensSerialNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_LensModel_MetaData[] = {
		{ "Category", "Lens Info" },
		{ "Comment", "/** Model of the lens (spherical, anamorphic, etc...) */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Model of the lens (spherical, anamorphic, etc...)" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_LensModel = { "LensModel", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensInfo, LensModel), Z_Construct_UClass_UClass, Z_Construct_UClass_ULensModel_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_LensModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_LensModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_SensorDimensions_MetaData[] = {
		{ "Category", "Camera Info" },
		{ "Comment", "/** Width and height of the calibrated camera's sensor, in millimeters */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Width and height of the calibrated camera's sensor, in millimeters" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_SensorDimensions = { "SensorDimensions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensInfo, SensorDimensions), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_SensorDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_SensorDimensions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_ImageDimensions_MetaData[] = {
		{ "Category", "Camera Info" },
		{ "Comment", "/** \n\x09  * Resolution of the original footage that was captured by the camera (not necessarily the resolution of the media source).\n\x09  * For example, the original footage might have been 4320x1746, but to transmit that image over SDI, it might have been scaled and fit into a 4096x2160 frame.\n\x09  * In this case, the \"Image Resolution\" should be set to 4320x1746, while the \"Media Resolution\" will read 4096x2160.\n\x09  */" },
		{ "DisplayName", "Image Resolution" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Resolution of the original footage that was captured by the camera (not necessarily the resolution of the media source).\nFor example, the original footage might have been 4320x1746, but to transmit that image over SDI, it might have been scaled and fit into a 4096x2160 frame.\nIn this case, the \"Image Resolution\" should be set to 4320x1746, while the \"Media Resolution\" will read 4096x2160." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_ImageDimensions = { "ImageDimensions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensInfo, ImageDimensions), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_ImageDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_ImageDimensions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_LensModelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_LensSerialNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_LensModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_SensorDimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensInfo_Statics::NewProp_ImageDimensions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"LensInfo",
		sizeof(FLensInfo),
		alignof(FLensInfo),
		Z_Construct_UScriptStruct_FLensInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_LensInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensInfo.InnerSingleton, Z_Construct_UScriptStruct_FLensInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LensInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraFeedInfo;
class UScriptStruct* FCameraFeedInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraFeedInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraFeedInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraFeedInfo, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("CameraFeedInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CameraFeedInfo.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FCameraFeedInfo>()
{
	return FCameraFeedInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraFeedInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Dimensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFeedInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Information about a camera feed, including its dimensions and aspect ratio.\n * The camera feed represents (potentially) an inner rect of a media input, excluding any masks / extractions that may surround it.\n */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Information about a camera feed, including its dimensions and aspect ratio.\nThe camera feed represents (potentially) an inner rect of a media input, excluding any masks / extractions that may surround it." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraFeedInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraFeedInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFeedInfo_Statics::NewProp_Dimensions_MetaData[] = {
		{ "Category", "Camera Feed Info" },
		{ "Comment", "/** Dimensions of the Camera Feed */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Dimensions of the Camera Feed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraFeedInfo_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraFeedInfo, Dimensions), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFeedInfo_Statics::NewProp_Dimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFeedInfo_Statics::NewProp_Dimensions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFeedInfo_Statics::NewProp_AspectRatio_MetaData[] = {
		{ "Category", "Camera Feed Info" },
		{ "Comment", "/** Aspect Ratio of the Camera Feed */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Aspect Ratio of the Camera Feed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFeedInfo_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraFeedInfo, AspectRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFeedInfo_Statics::NewProp_AspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFeedInfo_Statics::NewProp_AspectRatio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraFeedInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFeedInfo_Statics::NewProp_Dimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFeedInfo_Statics::NewProp_AspectRatio,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraFeedInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"CameraFeedInfo",
		sizeof(FCameraFeedInfo),
		alignof(FCameraFeedInfo),
		Z_Construct_UScriptStruct_FCameraFeedInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFeedInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFeedInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFeedInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraFeedInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraFeedInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraFeedInfo.InnerSingleton, Z_Construct_UScriptStruct_FCameraFeedInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraFeedInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimulcamInfo;
class UScriptStruct* FSimulcamInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimulcamInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimulcamInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimulcamInfo, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("SimulcamInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SimulcamInfo.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FSimulcamInfo>()
{
	return FSimulcamInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimulcamInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlateAspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MediaPlateAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CGLayerAspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CGLayerAspectRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulcamInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Information about the simulcam composition\n */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Information about the simulcam composition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimulcamInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimulcamInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulcamInfo_Statics::NewProp_MediaResolution_MetaData[] = {
		{ "Category", "Media Info" },
		{ "Comment", "/** Resolution of the selected Media Source */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Resolution of the selected Media Source" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimulcamInfo_Statics::NewProp_MediaResolution = { "MediaResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulcamInfo, MediaResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulcamInfo_Statics::NewProp_MediaResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulcamInfo_Statics::NewProp_MediaResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulcamInfo_Statics::NewProp_MediaPlateAspectRatio_MetaData[] = {
		{ "Category", "Simulcam Info" },
		{ "Comment", "/** Aspect ratio of the media plate in the simulcam composition, which was set to match the aspect ratio of the selected Media Source */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Aspect ratio of the media plate in the simulcam composition, which was set to match the aspect ratio of the selected Media Source" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimulcamInfo_Statics::NewProp_MediaPlateAspectRatio = { "MediaPlateAspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulcamInfo, MediaPlateAspectRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulcamInfo_Statics::NewProp_MediaPlateAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulcamInfo_Statics::NewProp_MediaPlateAspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulcamInfo_Statics::NewProp_CGLayerAspectRatio_MetaData[] = {
		{ "Category", "Simulcam Info" },
		{ "Comment", "/** Aspect ratio of the CG layer in the simulcam composition, which was set to match the aspect ratio of the selected Camera Actor */" },
		{ "DisplayName", "CG Layer Aspect Ratio" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Aspect ratio of the CG layer in the simulcam composition, which was set to match the aspect ratio of the selected Camera Actor" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimulcamInfo_Statics::NewProp_CGLayerAspectRatio = { "CGLayerAspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulcamInfo, CGLayerAspectRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulcamInfo_Statics::NewProp_CGLayerAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulcamInfo_Statics::NewProp_CGLayerAspectRatio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimulcamInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulcamInfo_Statics::NewProp_MediaResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulcamInfo_Statics::NewProp_MediaPlateAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulcamInfo_Statics::NewProp_CGLayerAspectRatio,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimulcamInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"SimulcamInfo",
		sizeof(FSimulcamInfo),
		alignof(FSimulcamInfo),
		Z_Construct_UScriptStruct_FSimulcamInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulcamInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulcamInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulcamInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimulcamInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SimulcamInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimulcamInfo.InnerSingleton, Z_Construct_UScriptStruct_FSimulcamInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimulcamInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DistortionInfo;
class UScriptStruct* FDistortionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DistortionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DistortionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDistortionInfo, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("DistortionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DistortionInfo.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FDistortionInfo>()
{
	return FDistortionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDistortionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistortionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Lens distortion parameters\n */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Lens distortion parameters" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDistortionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDistortionInfo>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistortionInfo_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistortionInfo_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Generic array of floating-point lens distortion parameters */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Generic array of floating-point lens distortion parameters" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDistortionInfo_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistortionInfo, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDistortionInfo_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionInfo_Statics::NewProp_Parameters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDistortionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistortionInfo_Statics::NewProp_Parameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistortionInfo_Statics::NewProp_Parameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDistortionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"DistortionInfo",
		sizeof(FDistortionInfo),
		alignof(FDistortionInfo),
		Z_Construct_UScriptStruct_FDistortionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDistortionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDistortionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_DistortionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DistortionInfo.InnerSingleton, Z_Construct_UScriptStruct_FDistortionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DistortionInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FocalLengthInfo;
class UScriptStruct* FFocalLengthInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FocalLengthInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FocalLengthInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFocalLengthInfo, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("FocalLengthInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FocalLengthInfo.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FFocalLengthInfo>()
{
	return FFocalLengthInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFocalLengthInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FxFy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FxFy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFocalLengthInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Normalized focal length information for both width and height dimension\n * If focal length is in pixel, normalize using pixel dimensions\n * If focal length is in mm, normalize using sensor dimensions\n */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Normalized focal length information for both width and height dimension\nIf focal length is in pixel, normalize using pixel dimensions\nIf focal length is in mm, normalize using sensor dimensions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFocalLengthInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFocalLengthInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFocalLengthInfo_Statics::NewProp_FxFy_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Value expected to be normalized (unitless) */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Value expected to be normalized (unitless)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFocalLengthInfo_Statics::NewProp_FxFy = { "FxFy", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFocalLengthInfo, FxFy), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FFocalLengthInfo_Statics::NewProp_FxFy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocalLengthInfo_Statics::NewProp_FxFy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFocalLengthInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFocalLengthInfo_Statics::NewProp_FxFy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFocalLengthInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"FocalLengthInfo",
		sizeof(FFocalLengthInfo),
		alignof(FFocalLengthInfo),
		Z_Construct_UScriptStruct_FFocalLengthInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocalLengthInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFocalLengthInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocalLengthInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFocalLengthInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_FocalLengthInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FocalLengthInfo.InnerSingleton, Z_Construct_UScriptStruct_FFocalLengthInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FocalLengthInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_STMapInfo;
class UScriptStruct* FSTMapInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_STMapInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_STMapInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSTMapInfo, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("STMapInfo"));
	}
	return Z_Registration_Info_UScriptStruct_STMapInfo.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FSTMapInfo>()
{
	return FSTMapInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSTMapInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DistortionMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MapFormat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSTMapInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Pre generate STMap and normalized focal length information\n */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Pre generate STMap and normalized focal length information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSTMapInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSTMapInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSTMapInfo_Statics::NewProp_DistortionMap_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Pre calibrated UVMap/STMap */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Pre calibrated UVMap/STMap" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSTMapInfo_Statics::NewProp_DistortionMap = { "DistortionMap", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSTMapInfo, DistortionMap), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSTMapInfo_Statics::NewProp_DistortionMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTMapInfo_Statics::NewProp_DistortionMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSTMapInfo_Statics::NewProp_MapFormat_MetaData[] = {
		{ "Category", "Format" },
		{ "Comment", "/** Calibrated map format */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Calibrated map format" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSTMapInfo_Statics::NewProp_MapFormat = { "MapFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSTMapInfo, MapFormat), Z_Construct_UScriptStruct_FCalibratedMapFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FSTMapInfo_Statics::NewProp_MapFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTMapInfo_Statics::NewProp_MapFormat_MetaData)) }; // 3781044598
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSTMapInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSTMapInfo_Statics::NewProp_DistortionMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSTMapInfo_Statics::NewProp_MapFormat,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSTMapInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"STMapInfo",
		sizeof(FSTMapInfo),
		alignof(FSTMapInfo),
		Z_Construct_UScriptStruct_FSTMapInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTMapInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSTMapInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTMapInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSTMapInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_STMapInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_STMapInfo.InnerSingleton, Z_Construct_UScriptStruct_FSTMapInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_STMapInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImageCenterInfo;
class UScriptStruct* FImageCenterInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImageCenterInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImageCenterInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageCenterInfo, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("ImageCenterInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ImageCenterInfo.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FImageCenterInfo>()
{
	return FImageCenterInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImageCenterInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrincipalPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrincipalPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageCenterInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Lens camera image center parameters\n */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Lens camera image center parameters" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImageCenterInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageCenterInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageCenterInfo_Statics::NewProp_PrincipalPoint_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Value expected to be normalized [0,1] */" },
		{ "DisplayName", "Image Center" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Value expected to be normalized [0,1]" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImageCenterInfo_Statics::NewProp_PrincipalPoint = { "PrincipalPoint", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImageCenterInfo, PrincipalPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageCenterInfo_Statics::NewProp_PrincipalPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageCenterInfo_Statics::NewProp_PrincipalPoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImageCenterInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageCenterInfo_Statics::NewProp_PrincipalPoint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImageCenterInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"ImageCenterInfo",
		sizeof(FImageCenterInfo),
		alignof(FImageCenterInfo),
		Z_Construct_UScriptStruct_FImageCenterInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageCenterInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImageCenterInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageCenterInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImageCenterInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ImageCenterInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImageCenterInfo.InnerSingleton, Z_Construct_UScriptStruct_FImageCenterInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImageCenterInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodalPointOffset;
class UScriptStruct* FNodalPointOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodalPointOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodalPointOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodalPointOffset, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("NodalPointOffset"));
	}
	return Z_Registration_Info_UScriptStruct_NodalPointOffset.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FNodalPointOffset>()
{
	return FNodalPointOffset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodalPointOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalPointOffset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Lens nodal point offset\n */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Lens nodal point offset" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodalPointOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodalPointOffset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalPointOffset_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "Category", "Nodal point" },
		{ "ModuleRelativePath", "Public/LensData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodalPointOffset_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalPointOffset, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalPointOffset_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalPointOffset_Statics::NewProp_LocationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalPointOffset_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Nodal point" },
		{ "ModuleRelativePath", "Public/LensData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodalPointOffset_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalPointOffset, RotationOffset), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalPointOffset_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalPointOffset_Statics::NewProp_RotationOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodalPointOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalPointOffset_Statics::NewProp_LocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalPointOffset_Statics::NewProp_RotationOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodalPointOffset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"NodalPointOffset",
		sizeof(FNodalPointOffset),
		alignof(FNodalPointOffset),
		Z_Construct_UScriptStruct_FNodalPointOffset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalPointOffset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalPointOffset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalPointOffset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodalPointOffset()
	{
		if (!Z_Registration_Info_UScriptStruct_NodalPointOffset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodalPointOffset.InnerSingleton, Z_Construct_UScriptStruct_FNodalPointOffset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodalPointOffset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DistortionData;
class UScriptStruct* FDistortionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DistortionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DistortionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDistortionData, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("DistortionData"));
	}
	return Z_Registration_Info_UScriptStruct_DistortionData.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FDistortionData>()
{
	return FDistortionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDistortionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortedUVs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortedUVs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DistortedUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverscanFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverscanFactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistortionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Distortion data evaluated for given FZ pair based on lens parameters\n*/" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Distortion data evaluated for given FZ pair based on lens parameters" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDistortionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDistortionData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDistortionData_Statics::NewProp_DistortedUVs_Inner = { "DistortedUVs", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistortionData_Statics::NewProp_DistortedUVs_MetaData[] = {
		{ "Category", "Distortion" },
		{ "ModuleRelativePath", "Public/LensData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDistortionData_Statics::NewProp_DistortedUVs = { "DistortedUVs", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistortionData, DistortedUVs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDistortionData_Statics::NewProp_DistortedUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionData_Statics::NewProp_DistortedUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistortionData_Statics::NewProp_OverscanFactor_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Estimated overscan factor based on distortion to have distorted cg covering full size */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Estimated overscan factor based on distortion to have distorted cg covering full size" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistortionData_Statics::NewProp_OverscanFactor = { "OverscanFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistortionData, OverscanFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistortionData_Statics::NewProp_OverscanFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionData_Statics::NewProp_OverscanFactor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDistortionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistortionData_Statics::NewProp_DistortedUVs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistortionData_Statics::NewProp_DistortedUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistortionData_Statics::NewProp_OverscanFactor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDistortionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"DistortionData",
		sizeof(FDistortionData),
		alignof(FDistortionData),
		Z_Construct_UScriptStruct_FDistortionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDistortionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDistortionData()
	{
		if (!Z_Registration_Info_UScriptStruct_DistortionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DistortionData.InnerSingleton, Z_Construct_UScriptStruct_FDistortionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DistortionData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataTablePointInfoBase;
class UScriptStruct* FDataTablePointInfoBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataTablePointInfoBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataTablePointInfoBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataTablePointInfoBase, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("DataTablePointInfoBase"));
	}
	return Z_Registration_Info_UScriptStruct_DataTablePointInfoBase.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FDataTablePointInfoBase>()
{
	return FDataTablePointInfoBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataTablePointInfoBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Focus_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Focus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Zoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Zoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTablePointInfoBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base struct for point info wrapper which holds focus and zoom\n * Child classes should hold the point info itself\n */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Base struct for point info wrapper which holds focus and zoom\nChild classes should hold the point info itself" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataTablePointInfoBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataTablePointInfoBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTablePointInfoBase_Statics::NewProp_Focus_MetaData[] = {
		{ "Category", "Point" },
		{ "Comment", "/** Point Focus Value */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Point Focus Value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDataTablePointInfoBase_Statics::NewProp_Focus = { "Focus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataTablePointInfoBase, Focus), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTablePointInfoBase_Statics::NewProp_Focus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTablePointInfoBase_Statics::NewProp_Focus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTablePointInfoBase_Statics::NewProp_Zoom_MetaData[] = {
		{ "Category", "Point" },
		{ "Comment", "/** Point Zoom Value */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Point Zoom Value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDataTablePointInfoBase_Statics::NewProp_Zoom = { "Zoom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataTablePointInfoBase, Zoom), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTablePointInfoBase_Statics::NewProp_Zoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTablePointInfoBase_Statics::NewProp_Zoom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataTablePointInfoBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTablePointInfoBase_Statics::NewProp_Focus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTablePointInfoBase_Statics::NewProp_Zoom,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataTablePointInfoBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"DataTablePointInfoBase",
		sizeof(FDataTablePointInfoBase),
		alignof(FDataTablePointInfoBase),
		Z_Construct_UScriptStruct_FDataTablePointInfoBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTablePointInfoBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTablePointInfoBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTablePointInfoBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataTablePointInfoBase()
	{
		if (!Z_Registration_Info_UScriptStruct_DataTablePointInfoBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataTablePointInfoBase.InnerSingleton, Z_Construct_UScriptStruct_FDataTablePointInfoBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataTablePointInfoBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDistortionPointInfo>() == std::is_polymorphic<FDataTablePointInfoBase>(), "USTRUCT FDistortionPointInfo cannot be polymorphic unless super FDataTablePointInfoBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DistortionPointInfo;
class UScriptStruct* FDistortionPointInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DistortionPointInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DistortionPointInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDistortionPointInfo, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("DistortionPointInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DistortionPointInfo.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FDistortionPointInfo>()
{
	return FDistortionPointInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDistortionPointInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistortionPointInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Distortion Point Info struct\n */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Distortion Point Info struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDistortionPointInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDistortionPointInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistortionPointInfo_Statics::NewProp_DistortionInfo_MetaData[] = {
		{ "Category", "Point" },
		{ "Comment", "/** Lens distortion parameter */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Lens distortion parameter" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDistortionPointInfo_Statics::NewProp_DistortionInfo = { "DistortionInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistortionPointInfo, DistortionInfo), Z_Construct_UScriptStruct_FDistortionInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FDistortionPointInfo_Statics::NewProp_DistortionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionPointInfo_Statics::NewProp_DistortionInfo_MetaData)) }; // 2058170602
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDistortionPointInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistortionPointInfo_Statics::NewProp_DistortionInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDistortionPointInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		Z_Construct_UScriptStruct_FDataTablePointInfoBase,
		&NewStructOps,
		"DistortionPointInfo",
		sizeof(FDistortionPointInfo),
		alignof(FDistortionPointInfo),
		Z_Construct_UScriptStruct_FDistortionPointInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionPointInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDistortionPointInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionPointInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDistortionPointInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_DistortionPointInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DistortionPointInfo.InnerSingleton, Z_Construct_UScriptStruct_FDistortionPointInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DistortionPointInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFocalLengthPointInfo>() == std::is_polymorphic<FDataTablePointInfoBase>(), "USTRUCT FFocalLengthPointInfo cannot be polymorphic unless super FDataTablePointInfoBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FocalLengthPointInfo;
class UScriptStruct* FFocalLengthPointInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FocalLengthPointInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FocalLengthPointInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFocalLengthPointInfo, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("FocalLengthPointInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FocalLengthPointInfo.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FFocalLengthPointInfo>()
{
	return FFocalLengthPointInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFocalLengthPointInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocalLengthInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FocalLengthInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFocalLengthPointInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Focal Length Point Info struct\n */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Focal Length Point Info struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFocalLengthPointInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFocalLengthPointInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFocalLengthPointInfo_Statics::NewProp_FocalLengthInfo_MetaData[] = {
		{ "Category", "Point" },
		{ "Comment", "/** Focal Length parameter */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Focal Length parameter" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFocalLengthPointInfo_Statics::NewProp_FocalLengthInfo = { "FocalLengthInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFocalLengthPointInfo, FocalLengthInfo), Z_Construct_UScriptStruct_FFocalLengthInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FFocalLengthPointInfo_Statics::NewProp_FocalLengthInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocalLengthPointInfo_Statics::NewProp_FocalLengthInfo_MetaData)) }; // 256946379
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFocalLengthPointInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFocalLengthPointInfo_Statics::NewProp_FocalLengthInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFocalLengthPointInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		Z_Construct_UScriptStruct_FDataTablePointInfoBase,
		&NewStructOps,
		"FocalLengthPointInfo",
		sizeof(FFocalLengthPointInfo),
		alignof(FFocalLengthPointInfo),
		Z_Construct_UScriptStruct_FFocalLengthPointInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocalLengthPointInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFocalLengthPointInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocalLengthPointInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFocalLengthPointInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_FocalLengthPointInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FocalLengthPointInfo.InnerSingleton, Z_Construct_UScriptStruct_FFocalLengthPointInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FocalLengthPointInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSTMapPointInfo>() == std::is_polymorphic<FDataTablePointInfoBase>(), "USTRUCT FSTMapPointInfo cannot be polymorphic unless super FDataTablePointInfoBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_STMapPointInfo;
class UScriptStruct* FSTMapPointInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_STMapPointInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_STMapPointInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSTMapPointInfo, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("STMapPointInfo"));
	}
	return Z_Registration_Info_UScriptStruct_STMapPointInfo.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FSTMapPointInfo>()
{
	return FSTMapPointInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSTMapPointInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_STMapInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_STMapInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSTMapPointInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ST Map Point Info struct\n */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "ST Map Point Info struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSTMapPointInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSTMapPointInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSTMapPointInfo_Statics::NewProp_STMapInfo_MetaData[] = {
		{ "Category", "Point" },
		{ "Comment", "/** ST Map parameter */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "ST Map parameter" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSTMapPointInfo_Statics::NewProp_STMapInfo = { "STMapInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSTMapPointInfo, STMapInfo), Z_Construct_UScriptStruct_FSTMapInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSTMapPointInfo_Statics::NewProp_STMapInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTMapPointInfo_Statics::NewProp_STMapInfo_MetaData)) }; // 434622991
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSTMapPointInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSTMapPointInfo_Statics::NewProp_STMapInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSTMapPointInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		Z_Construct_UScriptStruct_FDataTablePointInfoBase,
		&NewStructOps,
		"STMapPointInfo",
		sizeof(FSTMapPointInfo),
		alignof(FSTMapPointInfo),
		Z_Construct_UScriptStruct_FSTMapPointInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTMapPointInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSTMapPointInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTMapPointInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSTMapPointInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_STMapPointInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_STMapPointInfo.InnerSingleton, Z_Construct_UScriptStruct_FSTMapPointInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_STMapPointInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FImageCenterPointInfo>() == std::is_polymorphic<FDataTablePointInfoBase>(), "USTRUCT FImageCenterPointInfo cannot be polymorphic unless super FDataTablePointInfoBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImageCenterPointInfo;
class UScriptStruct* FImageCenterPointInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImageCenterPointInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImageCenterPointInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageCenterPointInfo, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("ImageCenterPointInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ImageCenterPointInfo.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FImageCenterPointInfo>()
{
	return FImageCenterPointInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImageCenterPointInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageCenterInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImageCenterInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageCenterPointInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Image Center Point Info struct\n */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Image Center Point Info struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImageCenterPointInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageCenterPointInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageCenterPointInfo_Statics::NewProp_ImageCenterInfo_MetaData[] = {
		{ "Category", "Point" },
		{ "Comment", "/** Image Center parameter */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Image Center parameter" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImageCenterPointInfo_Statics::NewProp_ImageCenterInfo = { "ImageCenterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImageCenterPointInfo, ImageCenterInfo), Z_Construct_UScriptStruct_FImageCenterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageCenterPointInfo_Statics::NewProp_ImageCenterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageCenterPointInfo_Statics::NewProp_ImageCenterInfo_MetaData)) }; // 1446709430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImageCenterPointInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageCenterPointInfo_Statics::NewProp_ImageCenterInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImageCenterPointInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		Z_Construct_UScriptStruct_FDataTablePointInfoBase,
		&NewStructOps,
		"ImageCenterPointInfo",
		sizeof(FImageCenterPointInfo),
		alignof(FImageCenterPointInfo),
		Z_Construct_UScriptStruct_FImageCenterPointInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageCenterPointInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImageCenterPointInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageCenterPointInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImageCenterPointInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ImageCenterPointInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImageCenterPointInfo.InnerSingleton, Z_Construct_UScriptStruct_FImageCenterPointInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImageCenterPointInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNodalOffsetPointInfo>() == std::is_polymorphic<FDataTablePointInfoBase>(), "USTRUCT FNodalOffsetPointInfo cannot be polymorphic unless super FDataTablePointInfoBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodalOffsetPointInfo;
class UScriptStruct* FNodalOffsetPointInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodalOffsetPointInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodalOffsetPointInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodalOffsetPointInfo, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("NodalOffsetPointInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NodalOffsetPointInfo.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FNodalOffsetPointInfo>()
{
	return FNodalOffsetPointInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodalOffsetPointInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodalPointOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodalPointOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Nodal Point Point Info struct\n */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Nodal Point Point Info struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodalOffsetPointInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodalOffsetPointInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointInfo_Statics::NewProp_NodalPointOffset_MetaData[] = {
		{ "Category", "Point" },
		{ "Comment", "/** Nodal Point parameter */" },
		{ "ModuleRelativePath", "Public/LensData.h" },
		{ "ToolTip", "Nodal Point parameter" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointInfo_Statics::NewProp_NodalPointOffset = { "NodalPointOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetPointInfo, NodalPointOffset), Z_Construct_UScriptStruct_FNodalPointOffset, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointInfo_Statics::NewProp_NodalPointOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointInfo_Statics::NewProp_NodalPointOffset_MetaData)) }; // 3989063233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodalOffsetPointInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointInfo_Statics::NewProp_NodalPointOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodalOffsetPointInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		Z_Construct_UScriptStruct_FDataTablePointInfoBase,
		&NewStructOps,
		"NodalOffsetPointInfo",
		sizeof(FNodalOffsetPointInfo),
		alignof(FNodalOffsetPointInfo),
		Z_Construct_UScriptStruct_FNodalOffsetPointInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodalOffsetPointInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_NodalOffsetPointInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodalOffsetPointInfo.InnerSingleton, Z_Construct_UScriptStruct_FNodalOffsetPointInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodalOffsetPointInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensData_h_Statics::ScriptStructInfo[] = {
		{ FLensInfo::StaticStruct, Z_Construct_UScriptStruct_FLensInfo_Statics::NewStructOps, TEXT("LensInfo"), &Z_Registration_Info_UScriptStruct_LensInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensInfo), 2880303412U) },
		{ FCameraFeedInfo::StaticStruct, Z_Construct_UScriptStruct_FCameraFeedInfo_Statics::NewStructOps, TEXT("CameraFeedInfo"), &Z_Registration_Info_UScriptStruct_CameraFeedInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraFeedInfo), 3693041444U) },
		{ FSimulcamInfo::StaticStruct, Z_Construct_UScriptStruct_FSimulcamInfo_Statics::NewStructOps, TEXT("SimulcamInfo"), &Z_Registration_Info_UScriptStruct_SimulcamInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimulcamInfo), 3369030845U) },
		{ FDistortionInfo::StaticStruct, Z_Construct_UScriptStruct_FDistortionInfo_Statics::NewStructOps, TEXT("DistortionInfo"), &Z_Registration_Info_UScriptStruct_DistortionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDistortionInfo), 2058170602U) },
		{ FFocalLengthInfo::StaticStruct, Z_Construct_UScriptStruct_FFocalLengthInfo_Statics::NewStructOps, TEXT("FocalLengthInfo"), &Z_Registration_Info_UScriptStruct_FocalLengthInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFocalLengthInfo), 256946379U) },
		{ FSTMapInfo::StaticStruct, Z_Construct_UScriptStruct_FSTMapInfo_Statics::NewStructOps, TEXT("STMapInfo"), &Z_Registration_Info_UScriptStruct_STMapInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSTMapInfo), 434622991U) },
		{ FImageCenterInfo::StaticStruct, Z_Construct_UScriptStruct_FImageCenterInfo_Statics::NewStructOps, TEXT("ImageCenterInfo"), &Z_Registration_Info_UScriptStruct_ImageCenterInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImageCenterInfo), 1446709430U) },
		{ FNodalPointOffset::StaticStruct, Z_Construct_UScriptStruct_FNodalPointOffset_Statics::NewStructOps, TEXT("NodalPointOffset"), &Z_Registration_Info_UScriptStruct_NodalPointOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodalPointOffset), 3989063233U) },
		{ FDistortionData::StaticStruct, Z_Construct_UScriptStruct_FDistortionData_Statics::NewStructOps, TEXT("DistortionData"), &Z_Registration_Info_UScriptStruct_DistortionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDistortionData), 2629747395U) },
		{ FDataTablePointInfoBase::StaticStruct, Z_Construct_UScriptStruct_FDataTablePointInfoBase_Statics::NewStructOps, TEXT("DataTablePointInfoBase"), &Z_Registration_Info_UScriptStruct_DataTablePointInfoBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataTablePointInfoBase), 2640228893U) },
		{ FDistortionPointInfo::StaticStruct, Z_Construct_UScriptStruct_FDistortionPointInfo_Statics::NewStructOps, TEXT("DistortionPointInfo"), &Z_Registration_Info_UScriptStruct_DistortionPointInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDistortionPointInfo), 2261805438U) },
		{ FFocalLengthPointInfo::StaticStruct, Z_Construct_UScriptStruct_FFocalLengthPointInfo_Statics::NewStructOps, TEXT("FocalLengthPointInfo"), &Z_Registration_Info_UScriptStruct_FocalLengthPointInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFocalLengthPointInfo), 2261895319U) },
		{ FSTMapPointInfo::StaticStruct, Z_Construct_UScriptStruct_FSTMapPointInfo_Statics::NewStructOps, TEXT("STMapPointInfo"), &Z_Registration_Info_UScriptStruct_STMapPointInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSTMapPointInfo), 1761273936U) },
		{ FImageCenterPointInfo::StaticStruct, Z_Construct_UScriptStruct_FImageCenterPointInfo_Statics::NewStructOps, TEXT("ImageCenterPointInfo"), &Z_Registration_Info_UScriptStruct_ImageCenterPointInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImageCenterPointInfo), 931720700U) },
		{ FNodalOffsetPointInfo::StaticStruct, Z_Construct_UScriptStruct_FNodalOffsetPointInfo_Statics::NewStructOps, TEXT("NodalOffsetPointInfo"), &Z_Registration_Info_UScriptStruct_NodalOffsetPointInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodalOffsetPointInfo), 1184798778U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensData_h_3947689511(TEXT("/Script/CameraCalibrationCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
