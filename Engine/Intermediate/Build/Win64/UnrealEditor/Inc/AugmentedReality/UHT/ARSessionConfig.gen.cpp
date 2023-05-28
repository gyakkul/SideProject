// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARSessionConfig.h"
#include "ARTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARSessionConfig() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateImage_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateObject_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentProbeComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARFaceComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARGeoAnchorComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARImageComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARMeshComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARObjectComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPlaneComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPointComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPoseComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARQRCodeComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSessionConfig();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSessionConfig_NoRegister();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARSceneReconstruction();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionType();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARWorldAlignment();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARVideoFormat();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARWorldAlignment;
	static UEnum* EARWorldAlignment_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARWorldAlignment.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARWorldAlignment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARWorldAlignment, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARWorldAlignment"));
		}
		return Z_Registration_Info_UEnum_EARWorldAlignment.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARWorldAlignment>()
	{
		return EARWorldAlignment_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARWorldAlignment_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARWorldAlignment_Statics::Enumerators[] = {
		{ "EARWorldAlignment::Gravity", (int64)EARWorldAlignment::Gravity },
		{ "EARWorldAlignment::GravityAndHeading", (int64)EARWorldAlignment::GravityAndHeading },
		{ "EARWorldAlignment::Camera", (int64)EARWorldAlignment::Camera },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARWorldAlignment_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Camera.Comment", "/** The coordinate system matches the camera's orientation. This option is recommended for Face AR. */" },
		{ "Camera.Name", "EARWorldAlignment::Camera" },
		{ "Camera.ToolTip", "The coordinate system matches the camera's orientation. This option is recommended for Face AR." },
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/** Options for how the scene\xe2\x80\x99s coordinate system is constructed. This feature is used by ARKit. */" },
		{ "Experimental", "" },
		{ "Gravity.Comment", "/** The coordinate system is aligned with gravity, defined by the vector (0, -1, 0). Origin is the initial position of the device. */" },
		{ "Gravity.Name", "EARWorldAlignment::Gravity" },
		{ "Gravity.ToolTip", "The coordinate system is aligned with gravity, defined by the vector (0, -1, 0). Origin is the initial position of the device." },
		{ "GravityAndHeading.Comment", "/**\n\x09 * The coordinate system is aligned with gravity, defined by the vector (0, -1, 0),\n\x09 * and compass heading based on True North, defined by the vector (0, 0, -1). Origin is the initial position of the device.\n\x09 */" },
		{ "GravityAndHeading.Name", "EARWorldAlignment::GravityAndHeading" },
		{ "GravityAndHeading.ToolTip", "The coordinate system is aligned with gravity, defined by the vector (0, -1, 0),\nand compass heading based on True North, defined by the vector (0, 0, -1). Origin is the initial position of the device." },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Options for how the scene\xe2\x80\x99s coordinate system is constructed. This feature is used by ARKit." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARWorldAlignment_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARWorldAlignment",
		"EARWorldAlignment",
		Z_Construct_UEnum_AugmentedReality_EARWorldAlignment_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARWorldAlignment_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARWorldAlignment_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARWorldAlignment_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARWorldAlignment()
	{
		if (!Z_Registration_Info_UEnum_EARWorldAlignment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARWorldAlignment.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARWorldAlignment_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARWorldAlignment.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARSessionType;
	static UEnum* EARSessionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARSessionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARSessionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSessionType, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARSessionType"));
		}
		return Z_Registration_Info_UEnum_EARSessionType.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSessionType>()
	{
		return EARSessionType_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARSessionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARSessionType_Statics::Enumerators[] = {
		{ "EARSessionType::None", (int64)EARSessionType::None },
		{ "EARSessionType::Orientation", (int64)EARSessionType::Orientation },
		{ "EARSessionType::World", (int64)EARSessionType::World },
		{ "EARSessionType::Face", (int64)EARSessionType::Face },
		{ "EARSessionType::Image", (int64)EARSessionType::Image },
		{ "EARSessionType::ObjectScanning", (int64)EARSessionType::ObjectScanning },
		{ "EARSessionType::PoseTracking", (int64)EARSessionType::PoseTracking },
		{ "EARSessionType::GeoTracking", (int64)EARSessionType::GeoTracking },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARSessionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/** Options for the tracking type of the session. All AR platforms use this structure but only some session tracking are supported on each platform. The options are mutually exclusive.  */" },
		{ "Experimental", "" },
		{ "Face.Comment", "/** A session where only faces are tracked. ARKit and ARCore support this type of tracking using the front-facing camera.*/" },
		{ "Face.Name", "EARSessionType::Face" },
		{ "Face.ToolTip", "A session where only faces are tracked. ARKit and ARCore support this type of tracking using the front-facing camera." },
		{ "GeoTracking.Comment", "/** A session where geographic locations are tracked. ARKit supports this type of tracking. */" },
		{ "GeoTracking.Name", "EARSessionType::GeoTracking" },
		{ "GeoTracking.ToolTip", "A session where geographic locations are tracked. ARKit supports this type of tracking." },
		{ "Image.Comment", "/** A session where only images supplied by the app are tracked. There is no world tracking. ARKit supports this type of tracking. */" },
		{ "Image.Name", "EARSessionType::Image" },
		{ "Image.ToolTip", "A session where only images supplied by the app are tracked. There is no world tracking. ARKit supports this type of tracking." },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "None.Comment", "/** No tracking in the session. */" },
		{ "None.Name", "EARSessionType::None" },
		{ "None.ToolTip", "No tracking in the session." },
		{ "ObjectScanning.Comment", "/** A session where objects are scanned for object detection in a later World Tracking session. ARKit supports this type of tracking. */" },
		{ "ObjectScanning.Name", "EARSessionType::ObjectScanning" },
		{ "ObjectScanning.ToolTip", "A session where objects are scanned for object detection in a later World Tracking session. ARKit supports this type of tracking." },
		{ "Orientation.Comment", "/** A session where only the orientation of the device is tracked. ARKit supports this type of tracking.*/" },
		{ "Orientation.Name", "EARSessionType::Orientation" },
		{ "Orientation.ToolTip", "A session where only the orientation of the device is tracked. ARKit supports this type of tracking." },
		{ "PoseTracking.Comment", "/** A session where human poses in 3D are tracked. ARKit supports this type of tracking using the rear-facing camera. */" },
		{ "PoseTracking.Name", "EARSessionType::PoseTracking" },
		{ "PoseTracking.ToolTip", "A session where human poses in 3D are tracked. ARKit supports this type of tracking using the rear-facing camera." },
		{ "ToolTip", "Options for the tracking type of the session. All AR platforms use this structure but only some session tracking are supported on each platform. The options are mutually exclusive." },
		{ "World.Comment", "/** A session where the position and orientation of the device is tracked relative to objects in the environment. All platforms support this type of tracking. */" },
		{ "World.Name", "EARSessionType::World" },
		{ "World.ToolTip", "A session where the position and orientation of the device is tracked relative to objects in the environment. All platforms support this type of tracking." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARSessionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARSessionType",
		"EARSessionType",
		Z_Construct_UEnum_AugmentedReality_EARSessionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARSessionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARSessionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARSessionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionType()
	{
		if (!Z_Registration_Info_UEnum_EARSessionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARSessionType.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARSessionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARSessionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARPlaneDetectionMode;
	static UEnum* EARPlaneDetectionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARPlaneDetectionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARPlaneDetectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARPlaneDetectionMode"));
		}
		return Z_Registration_Info_UEnum_EARPlaneDetectionMode.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARPlaneDetectionMode>()
	{
		return EARPlaneDetectionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode_Statics::Enumerators[] = {
		{ "EARPlaneDetectionMode::None", (int64)EARPlaneDetectionMode::None },
		{ "EARPlaneDetectionMode::HorizontalPlaneDetection", (int64)EARPlaneDetectionMode::HorizontalPlaneDetection },
		{ "EARPlaneDetectionMode::VerticalPlaneDetection", (int64)EARPlaneDetectionMode::VerticalPlaneDetection },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/** Options for how flat surfaces are detected. This feature is used by ARCore and ARKit. */" },
		{ "Experimental", "" },
		{ "HorizontalPlaneDetection.Comment", "/* Detects horizontal, flat surfaces. */" },
		{ "HorizontalPlaneDetection.Name", "EARPlaneDetectionMode::HorizontalPlaneDetection" },
		{ "HorizontalPlaneDetection.ToolTip", "Detects horizontal, flat surfaces." },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "None.Comment", "/** Disables plane detection. */" },
		{ "None.Name", "EARPlaneDetectionMode::None" },
		{ "None.ToolTip", "Disables plane detection." },
		{ "ToolTip", "Options for how flat surfaces are detected. This feature is used by ARCore and ARKit." },
		{ "VerticalPlaneDetection.Comment", "/* Detects vertical, flat surfaces. */" },
		{ "VerticalPlaneDetection.Name", "EARPlaneDetectionMode::VerticalPlaneDetection" },
		{ "VerticalPlaneDetection.ToolTip", "Detects vertical, flat surfaces." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARPlaneDetectionMode",
		"EARPlaneDetectionMode",
		Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode()
	{
		if (!Z_Registration_Info_UEnum_EARPlaneDetectionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARPlaneDetectionMode.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARPlaneDetectionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARLightEstimationMode;
	static UEnum* EARLightEstimationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARLightEstimationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARLightEstimationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARLightEstimationMode"));
		}
		return Z_Registration_Info_UEnum_EARLightEstimationMode.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARLightEstimationMode>()
	{
		return EARLightEstimationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode_Statics::Enumerators[] = {
		{ "EARLightEstimationMode::None", (int64)EARLightEstimationMode::None },
		{ "EARLightEstimationMode::AmbientLightEstimate", (int64)EARLightEstimationMode::AmbientLightEstimate },
		{ "EARLightEstimationMode::DirectionalLightEstimate", (int64)EARLightEstimationMode::DirectionalLightEstimate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode_Statics::Enum_MetaDataParams[] = {
		{ "AmbientLightEstimate.Comment", "/** Estimates an ambient light. */" },
		{ "AmbientLightEstimate.Name", "EARLightEstimationMode::AmbientLightEstimate" },
		{ "AmbientLightEstimate.ToolTip", "Estimates an ambient light." },
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/** Options for how light is estimated based on the camera capture. This feature is used by ARCore and ARKit. */" },
		{ "DirectionalLightEstimate.Comment", "/**\n\x09* Estimates a directional light of the environment with an additional key light.\n\x09* Currently not supported.\n\x09*/" },
		{ "DirectionalLightEstimate.Name", "EARLightEstimationMode::DirectionalLightEstimate" },
		{ "DirectionalLightEstimate.ToolTip", "Estimates a directional light of the environment with an additional key light.\nCurrently not supported." },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "None.Comment", "/** Disables light estimation. */" },
		{ "None.Name", "EARLightEstimationMode::None" },
		{ "None.ToolTip", "Disables light estimation." },
		{ "ToolTip", "Options for how light is estimated based on the camera capture. This feature is used by ARCore and ARKit." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARLightEstimationMode",
		"EARLightEstimationMode",
		Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode()
	{
		if (!Z_Registration_Info_UEnum_EARLightEstimationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARLightEstimationMode.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARLightEstimationMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARFrameSyncMode;
	static UEnum* EARFrameSyncMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARFrameSyncMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARFrameSyncMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARFrameSyncMode"));
		}
		return Z_Registration_Info_UEnum_EARFrameSyncMode.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFrameSyncMode>()
	{
		return EARFrameSyncMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode_Statics::Enumerators[] = {
		{ "EARFrameSyncMode::SyncTickWithCameraImage", (int64)EARFrameSyncMode::SyncTickWithCameraImage },
		{ "EARFrameSyncMode::SyncTickWithoutCameraImage", (int64)EARFrameSyncMode::SyncTickWithoutCameraImage },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/** Options for how the Unreal frame synchronizes with camera image updates. This feature is used by ARCore. */" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "SyncTickWithCameraImage.Comment", "/** Unreal tick will be synced with the camera image update rate. */" },
		{ "SyncTickWithCameraImage.Name", "EARFrameSyncMode::SyncTickWithCameraImage" },
		{ "SyncTickWithCameraImage.ToolTip", "Unreal tick will be synced with the camera image update rate." },
		{ "SyncTickWithoutCameraImage.Comment", "/** Unreal tick will not related to the camera image update rate. */" },
		{ "SyncTickWithoutCameraImage.Name", "EARFrameSyncMode::SyncTickWithoutCameraImage" },
		{ "SyncTickWithoutCameraImage.ToolTip", "Unreal tick will not related to the camera image update rate." },
		{ "ToolTip", "Options for how the Unreal frame synchronizes with camera image updates. This feature is used by ARCore." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARFrameSyncMode",
		"EARFrameSyncMode",
		Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode()
	{
		if (!Z_Registration_Info_UEnum_EARFrameSyncMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARFrameSyncMode.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARFrameSyncMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAREnvironmentCaptureProbeType;
	static UEnum* EAREnvironmentCaptureProbeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAREnvironmentCaptureProbeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAREnvironmentCaptureProbeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EAREnvironmentCaptureProbeType"));
		}
		return Z_Registration_Info_UEnum_EAREnvironmentCaptureProbeType.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EAREnvironmentCaptureProbeType>()
	{
		return EAREnvironmentCaptureProbeType_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType_Statics::Enumerators[] = {
		{ "EAREnvironmentCaptureProbeType::None", (int64)EAREnvironmentCaptureProbeType::None },
		{ "EAREnvironmentCaptureProbeType::Manual", (int64)EAREnvironmentCaptureProbeType::Manual },
		{ "EAREnvironmentCaptureProbeType::Automatic", (int64)EAREnvironmentCaptureProbeType::Automatic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType_Statics::Enum_MetaDataParams[] = {
		{ "Automatic.Comment", "/** The AR system automatically creates and places the environment capture probes. */" },
		{ "Automatic.Name", "EAREnvironmentCaptureProbeType::Automatic" },
		{ "Automatic.ToolTip", "The AR system automatically creates and places the environment capture probes." },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Options for how environment textures are generated. This feature is used by ARKit.\n */" },
		{ "Manual.Comment", "/** The app specifies where the environment capture probes are located and their size. */" },
		{ "Manual.Name", "EAREnvironmentCaptureProbeType::Manual" },
		{ "Manual.ToolTip", "The app specifies where the environment capture probes are located and their size." },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "None.Comment", "/** Disables environment texture generation. */" },
		{ "None.Name", "EAREnvironmentCaptureProbeType::None" },
		{ "None.ToolTip", "Disables environment texture generation." },
		{ "ToolTip", "Options for how environment textures are generated. This feature is used by ARKit." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EAREnvironmentCaptureProbeType",
		"EAREnvironmentCaptureProbeType",
		Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType()
	{
		if (!Z_Registration_Info_UEnum_EAREnvironmentCaptureProbeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAREnvironmentCaptureProbeType.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAREnvironmentCaptureProbeType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARFaceTrackingUpdate;
	static UEnum* EARFaceTrackingUpdate_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARFaceTrackingUpdate.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARFaceTrackingUpdate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARFaceTrackingUpdate"));
		}
		return Z_Registration_Info_UEnum_EARFaceTrackingUpdate.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFaceTrackingUpdate>()
	{
		return EARFaceTrackingUpdate_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate_Statics::Enumerators[] = {
		{ "EARFaceTrackingUpdate::CurvesAndGeo", (int64)EARFaceTrackingUpdate::CurvesAndGeo },
		{ "EARFaceTrackingUpdate::CurvesOnly", (int64)EARFaceTrackingUpdate::CurvesOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Options for the kind of data to update during Face Tracking. This feature is used by ARKit.\n */" },
		{ "CurvesAndGeo.Comment", "/** Both curves and geometry are updated. This is useful for mesh visualization. */" },
		{ "CurvesAndGeo.Name", "EARFaceTrackingUpdate::CurvesAndGeo" },
		{ "CurvesAndGeo.ToolTip", "Both curves and geometry are updated. This is useful for mesh visualization." },
		{ "CurvesOnly.Comment", "/** Only the curve data is updated. */" },
		{ "CurvesOnly.Name", "EARFaceTrackingUpdate::CurvesOnly" },
		{ "CurvesOnly.ToolTip", "Only the curve data is updated." },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Options for the kind of data to update during Face Tracking. This feature is used by ARKit." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARFaceTrackingUpdate",
		"EARFaceTrackingUpdate",
		Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate()
	{
		if (!Z_Registration_Info_UEnum_EARFaceTrackingUpdate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARFaceTrackingUpdate.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARFaceTrackingUpdate.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARSessionTrackingFeature;
	static UEnum* EARSessionTrackingFeature_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARSessionTrackingFeature.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARSessionTrackingFeature.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARSessionTrackingFeature"));
		}
		return Z_Registration_Info_UEnum_EARSessionTrackingFeature.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSessionTrackingFeature>()
	{
		return EARSessionTrackingFeature_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature_Statics::Enumerators[] = {
		{ "EARSessionTrackingFeature::None", (int64)EARSessionTrackingFeature::None },
		{ "EARSessionTrackingFeature::PoseDetection2D", (int64)EARSessionTrackingFeature::PoseDetection2D },
		{ "EARSessionTrackingFeature::PersonSegmentation", (int64)EARSessionTrackingFeature::PersonSegmentation },
		{ "EARSessionTrackingFeature::PersonSegmentationWithDepth", (int64)EARSessionTrackingFeature::PersonSegmentationWithDepth },
		{ "EARSessionTrackingFeature::SceneDepth", (int64)EARSessionTrackingFeature::SceneDepth },
		{ "EARSessionTrackingFeature::SmoothedSceneDepth", (int64)EARSessionTrackingFeature::SmoothedSceneDepth },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Options for more tracking features to be enabled for the session, in addition to what is already defined in the project\xe2\x80\x99s @EARSessionType.\n */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "None.Comment", "/** No additional features are enabled. */" },
		{ "None.Name", "EARSessionTrackingFeature::None" },
		{ "None.ToolTip", "No additional features are enabled." },
		{ "PersonSegmentation.Comment", "/** Uses person segmentation for occlusion in the session. This feature is used by ARKit. */" },
		{ "PersonSegmentation.Name", "EARSessionTrackingFeature::PersonSegmentation" },
		{ "PersonSegmentation.ToolTip", "Uses person segmentation for occlusion in the session. This feature is used by ARKit." },
		{ "PersonSegmentationWithDepth.Comment", "/** Uses person segmentation with depth information for occlusion in the session. This feature is used by ARKit. */" },
		{ "PersonSegmentationWithDepth.Name", "EARSessionTrackingFeature::PersonSegmentationWithDepth" },
		{ "PersonSegmentationWithDepth.ToolTip", "Uses person segmentation with depth information for occlusion in the session. This feature is used by ARKit." },
		{ "PoseDetection2D.Comment", "/** Adds tracking for 2D human poses to the session. This feature is used by ARKit. */" },
		{ "PoseDetection2D.Name", "EARSessionTrackingFeature::PoseDetection2D" },
		{ "PoseDetection2D.ToolTip", "Adds tracking for 2D human poses to the session. This feature is used by ARKit." },
		{ "SceneDepth.Comment", "/** Uses scene depth for occlusion while tracking in the session. This feature is used by ARCore and ARKit. */" },
		{ "SceneDepth.Name", "EARSessionTrackingFeature::SceneDepth" },
		{ "SceneDepth.ToolTip", "Uses scene depth for occlusion while tracking in the session. This feature is used by ARCore and ARKit." },
		{ "SmoothedSceneDepth.Comment", "/** Uses smoothed scene depth for occlusion while tracking in the session. This feature is used by ARKit. */" },
		{ "SmoothedSceneDepth.Name", "EARSessionTrackingFeature::SmoothedSceneDepth" },
		{ "SmoothedSceneDepth.ToolTip", "Uses smoothed scene depth for occlusion while tracking in the session. This feature is used by ARKit." },
		{ "ToolTip", "Options for more tracking features to be enabled for the session, in addition to what is already defined in the project\xe2\x80\x99s @EARSessionType." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARSessionTrackingFeature",
		"EARSessionTrackingFeature",
		Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature()
	{
		if (!Z_Registration_Info_UEnum_EARSessionTrackingFeature.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARSessionTrackingFeature.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARSessionTrackingFeature.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARSceneReconstruction;
	static UEnum* EARSceneReconstruction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARSceneReconstruction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARSceneReconstruction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSceneReconstruction, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARSceneReconstruction"));
		}
		return Z_Registration_Info_UEnum_EARSceneReconstruction.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSceneReconstruction>()
	{
		return EARSceneReconstruction_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARSceneReconstruction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARSceneReconstruction_Statics::Enumerators[] = {
		{ "EARSceneReconstruction::None", (int64)EARSceneReconstruction::None },
		{ "EARSceneReconstruction::MeshOnly", (int64)EARSceneReconstruction::MeshOnly },
		{ "EARSceneReconstruction::MeshWithClassification", (int64)EARSceneReconstruction::MeshWithClassification },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARSceneReconstruction_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Options for how the scene should be reconstructed. This feature is used by ARKit.\n */" },
		{ "MeshOnly.Comment", "/** Creates a mesh approximation of the environment. */" },
		{ "MeshOnly.Name", "EARSceneReconstruction::MeshOnly" },
		{ "MeshOnly.ToolTip", "Creates a mesh approximation of the environment." },
		{ "MeshWithClassification.Comment", "/** Creates a mesh approximation of the environment and classifies the objects constructed. */" },
		{ "MeshWithClassification.Name", "EARSceneReconstruction::MeshWithClassification" },
		{ "MeshWithClassification.ToolTip", "Creates a mesh approximation of the environment and classifies the objects constructed." },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "None.Comment", "/** Disables scene reconstruction*/" },
		{ "None.Name", "EARSceneReconstruction::None" },
		{ "None.ToolTip", "Disables scene reconstruction" },
		{ "ToolTip", "Options for how the scene should be reconstructed. This feature is used by ARKit." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARSceneReconstruction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARSceneReconstruction",
		"EARSceneReconstruction",
		Z_Construct_UEnum_AugmentedReality_EARSceneReconstruction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARSceneReconstruction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARSceneReconstruction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARSceneReconstruction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARSceneReconstruction()
	{
		if (!Z_Registration_Info_UEnum_EARSceneReconstruction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARSceneReconstruction.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARSceneReconstruction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARSceneReconstruction.InnerSingleton;
	}
	DEFINE_FUNCTION(UARSessionConfig::execSetSceneReconstructionMethod)
	{
		P_GET_ENUM(EARSceneReconstruction,Z_Param_InSceneReconstructionMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSceneReconstructionMethod(EARSceneReconstruction(Z_Param_InSceneReconstructionMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execSetSessionTrackingFeatureToEnable)
	{
		P_GET_ENUM(EARSessionTrackingFeature,Z_Param_InSessionTrackingFeature);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature(Z_Param_InSessionTrackingFeature));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetSceneReconstructionMethod)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARSceneReconstruction*)Z_Param__Result=P_THIS->GetSceneReconstructionMethod();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetEnabledSessionTrackingFeature)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARSessionTrackingFeature*)Z_Param__Result=P_THIS->GetEnabledSessionTrackingFeature();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execSetFaceTrackingUpdate)
	{
		P_GET_ENUM(EARFaceTrackingUpdate,Z_Param_InUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFaceTrackingUpdate(EARFaceTrackingUpdate(Z_Param_InUpdate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetFaceTrackingUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARFaceTrackingUpdate*)Z_Param__Result=P_THIS->GetFaceTrackingUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execSetFaceTrackingDirection)
	{
		P_GET_ENUM(EARFaceTrackingDirection,Z_Param_InDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFaceTrackingDirection(EARFaceTrackingDirection(Z_Param_InDirection));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetFaceTrackingDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARFaceTrackingDirection*)Z_Param__Result=P_THIS->GetFaceTrackingDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execSetDesiredVideoFormat)
	{
		P_GET_STRUCT(FARVideoFormat,Z_Param_NewFormat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredVideoFormat(Z_Param_NewFormat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetDesiredVideoFormat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FARVideoFormat*)Z_Param__Result=P_THIS->GetDesiredVideoFormat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execAddCandidateObject)
	{
		P_GET_OBJECT(UARCandidateObject,Z_Param_CandidateObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCandidateObject(Z_Param_CandidateObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execSetCandidateObjectList)
	{
		P_GET_TARRAY_REF(UARCandidateObject*,Z_Param_Out_InCandidateObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCandidateObjectList(Z_Param_Out_InCandidateObjects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetCandidateObjectList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UARCandidateObject*>*)Z_Param__Result=P_THIS->GetCandidateObjectList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execSetWorldMapData)
	{
		P_GET_TARRAY(uint8,Z_Param_WorldMapData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWorldMapData(Z_Param_WorldMapData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetWorldMapData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetWorldMapData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetEnvironmentCaptureProbeType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAREnvironmentCaptureProbeType*)Z_Param__Result=P_THIS->GetEnvironmentCaptureProbeType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetMaxNumSimultaneousImagesTracked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxNumSimultaneousImagesTracked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execAddCandidateImage)
	{
		P_GET_OBJECT(UARCandidateImage,Z_Param_NewCandidateImage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCandidateImage(Z_Param_NewCandidateImage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetCandidateImageList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UARCandidateImage*>*)Z_Param__Result=P_THIS->GetCandidateImageList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execSetResetTrackedObjects)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResetTrackedObjects(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execShouldResetTrackedObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldResetTrackedObjects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execSetResetCameraTracking)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResetCameraTracking(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execShouldResetCameraTracking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldResetCameraTracking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execSetEnableAutoFocus)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableAutoFocus(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execShouldEnableAutoFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldEnableAutoFocus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execShouldEnableCameraTracking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldEnableCameraTracking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execShouldRenderCameraOverlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldRenderCameraOverlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetFrameSyncMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARFrameSyncMode*)Z_Param__Result=P_THIS->GetFrameSyncMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetLightEstimationMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARLightEstimationMode*)Z_Param__Result=P_THIS->GetLightEstimationMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetPlaneDetectionMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARPlaneDetectionMode*)Z_Param__Result=P_THIS->GetPlaneDetectionMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetSessionType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARSessionType*)Z_Param__Result=P_THIS->GetSessionType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARSessionConfig::execGetWorldAlignment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARWorldAlignment*)Z_Param__Result=P_THIS->GetWorldAlignment();
		P_NATIVE_END;
	}
	void UARSessionConfig::StaticRegisterNativesUARSessionConfig()
	{
		UClass* Class = UARSessionConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCandidateImage", &UARSessionConfig::execAddCandidateImage },
			{ "AddCandidateObject", &UARSessionConfig::execAddCandidateObject },
			{ "GetCandidateImageList", &UARSessionConfig::execGetCandidateImageList },
			{ "GetCandidateObjectList", &UARSessionConfig::execGetCandidateObjectList },
			{ "GetDesiredVideoFormat", &UARSessionConfig::execGetDesiredVideoFormat },
			{ "GetEnabledSessionTrackingFeature", &UARSessionConfig::execGetEnabledSessionTrackingFeature },
			{ "GetEnvironmentCaptureProbeType", &UARSessionConfig::execGetEnvironmentCaptureProbeType },
			{ "GetFaceTrackingDirection", &UARSessionConfig::execGetFaceTrackingDirection },
			{ "GetFaceTrackingUpdate", &UARSessionConfig::execGetFaceTrackingUpdate },
			{ "GetFrameSyncMode", &UARSessionConfig::execGetFrameSyncMode },
			{ "GetLightEstimationMode", &UARSessionConfig::execGetLightEstimationMode },
			{ "GetMaxNumSimultaneousImagesTracked", &UARSessionConfig::execGetMaxNumSimultaneousImagesTracked },
			{ "GetPlaneDetectionMode", &UARSessionConfig::execGetPlaneDetectionMode },
			{ "GetSceneReconstructionMethod", &UARSessionConfig::execGetSceneReconstructionMethod },
			{ "GetSessionType", &UARSessionConfig::execGetSessionType },
			{ "GetWorldAlignment", &UARSessionConfig::execGetWorldAlignment },
			{ "GetWorldMapData", &UARSessionConfig::execGetWorldMapData },
			{ "SetCandidateObjectList", &UARSessionConfig::execSetCandidateObjectList },
			{ "SetDesiredVideoFormat", &UARSessionConfig::execSetDesiredVideoFormat },
			{ "SetEnableAutoFocus", &UARSessionConfig::execSetEnableAutoFocus },
			{ "SetFaceTrackingDirection", &UARSessionConfig::execSetFaceTrackingDirection },
			{ "SetFaceTrackingUpdate", &UARSessionConfig::execSetFaceTrackingUpdate },
			{ "SetResetCameraTracking", &UARSessionConfig::execSetResetCameraTracking },
			{ "SetResetTrackedObjects", &UARSessionConfig::execSetResetTrackedObjects },
			{ "SetSceneReconstructionMethod", &UARSessionConfig::execSetSceneReconstructionMethod },
			{ "SetSessionTrackingFeatureToEnable", &UARSessionConfig::execSetSessionTrackingFeatureToEnable },
			{ "SetWorldMapData", &UARSessionConfig::execSetWorldMapData },
			{ "ShouldEnableAutoFocus", &UARSessionConfig::execShouldEnableAutoFocus },
			{ "ShouldEnableCameraTracking", &UARSessionConfig::execShouldEnableCameraTracking },
			{ "ShouldRenderCameraOverlay", &UARSessionConfig::execShouldRenderCameraOverlay },
			{ "ShouldResetCameraTracking", &UARSessionConfig::execShouldResetCameraTracking },
			{ "ShouldResetTrackedObjects", &UARSessionConfig::execShouldResetTrackedObjects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics
	{
		struct ARSessionConfig_eventAddCandidateImage_Parms
		{
			UARCandidateImage* NewCandidateImage;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCandidateImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::NewProp_NewCandidateImage = { "NewCandidateImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventAddCandidateImage_Parms, NewCandidateImage), Z_Construct_UClass_UARCandidateImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::NewProp_NewCandidateImage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "// Add a new CandidateImage to the ARSessionConfig.\n" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Add a new CandidateImage to the ARSessionConfig." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "AddCandidateImage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::ARSessionConfig_eventAddCandidateImage_Parms), Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_AddCandidateImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics
	{
		struct ARSessionConfig_eventAddCandidateObject_Parms
		{
			UARCandidateObject* CandidateObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CandidateObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::NewProp_CandidateObject = { "CandidateObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventAddCandidateObject_Parms, CandidateObject), Z_Construct_UClass_UARCandidateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::NewProp_CandidateObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see CandidateObjects */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see CandidateObjects" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "AddCandidateObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::ARSessionConfig_eventAddCandidateObject_Parms), Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_AddCandidateObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics
	{
		struct ARSessionConfig_eventGetCandidateImageList_Parms
		{
			TArray<UARCandidateImage*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UARCandidateImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventGetCandidateImageList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see CandidateImages */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see CandidateImages" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetCandidateImageList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::ARSessionConfig_eventGetCandidateImageList_Parms), Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics
	{
		struct ARSessionConfig_eventGetCandidateObjectList_Parms
		{
			TArray<UARCandidateObject*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UARCandidateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventGetCandidateObjectList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see CandidateObjects */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see CandidateObjects" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetCandidateObjectList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::ARSessionConfig_eventGetCandidateObjectList_Parms), Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics
	{
		struct ARSessionConfig_eventGetDesiredVideoFormat_Parms
		{
			FARVideoFormat ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventGetDesiredVideoFormat_Parms, ReturnValue), Z_Construct_UScriptStruct_FARVideoFormat, METADATA_PARAMS(nullptr, 0) }; // 3309039363
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see DesiredVideoFormat */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see DesiredVideoFormat" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetDesiredVideoFormat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::ARSessionConfig_eventGetDesiredVideoFormat_Parms), Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics
	{
		struct ARSessionConfig_eventGetEnabledSessionTrackingFeature_Parms
		{
			EARSessionTrackingFeature ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventGetEnabledSessionTrackingFeature_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature, METADATA_PARAMS(nullptr, 0) }; // 2993079397
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see EnabledSessionTrackingFeatures */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EnabledSessionTrackingFeatures" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetEnabledSessionTrackingFeature", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::ARSessionConfig_eventGetEnabledSessionTrackingFeature_Parms), Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics
	{
		struct ARSessionConfig_eventGetEnvironmentCaptureProbeType_Parms
		{
			EAREnvironmentCaptureProbeType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventGetEnvironmentCaptureProbeType_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType, METADATA_PARAMS(nullptr, 0) }; // 3630339992
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see EnvironmentCaptureProbeType */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EnvironmentCaptureProbeType" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetEnvironmentCaptureProbeType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::ARSessionConfig_eventGetEnvironmentCaptureProbeType_Parms), Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics
	{
		struct ARSessionConfig_eventGetFaceTrackingDirection_Parms
		{
			EARFaceTrackingDirection ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventGetFaceTrackingDirection_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection, METADATA_PARAMS(nullptr, 0) }; // 3500389980
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see FaceTrackingDirection */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see FaceTrackingDirection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetFaceTrackingDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::ARSessionConfig_eventGetFaceTrackingDirection_Parms), Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics
	{
		struct ARSessionConfig_eventGetFaceTrackingUpdate_Parms
		{
			EARFaceTrackingUpdate ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventGetFaceTrackingUpdate_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate, METADATA_PARAMS(nullptr, 0) }; // 811346367
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see FaceTrackingUpdate */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see FaceTrackingUpdate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetFaceTrackingUpdate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::ARSessionConfig_eventGetFaceTrackingUpdate_Parms), Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics
	{
		struct ARSessionConfig_eventGetFrameSyncMode_Parms
		{
			EARFrameSyncMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventGetFrameSyncMode_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode, METADATA_PARAMS(nullptr, 0) }; // 868226702
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see FrameSyncMode */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see FrameSyncMode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetFrameSyncMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::ARSessionConfig_eventGetFrameSyncMode_Parms), Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics
	{
		struct ARSessionConfig_eventGetLightEstimationMode_Parms
		{
			EARLightEstimationMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventGetLightEstimationMode_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode, METADATA_PARAMS(nullptr, 0) }; // 3853687364
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see LightEstimationMode */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see LightEstimationMode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetLightEstimationMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::ARSessionConfig_eventGetLightEstimationMode_Parms), Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics
	{
		struct ARSessionConfig_eventGetMaxNumSimultaneousImagesTracked_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventGetMaxNumSimultaneousImagesTracked_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see MaxNumSimultaneousImagesTracked */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see MaxNumSimultaneousImagesTracked" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetMaxNumSimultaneousImagesTracked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::ARSessionConfig_eventGetMaxNumSimultaneousImagesTracked_Parms), Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics
	{
		struct ARSessionConfig_eventGetPlaneDetectionMode_Parms
		{
			EARPlaneDetectionMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventGetPlaneDetectionMode_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode, METADATA_PARAMS(nullptr, 0) }; // 2878201354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see PlaneDetectionMode */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see PlaneDetectionMode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetPlaneDetectionMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::ARSessionConfig_eventGetPlaneDetectionMode_Parms), Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetSceneReconstructionMethod_Statics
	{
		struct ARSessionConfig_eventGetSceneReconstructionMethod_Parms
		{
			EARSceneReconstruction ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetSceneReconstructionMethod_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetSceneReconstructionMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventGetSceneReconstructionMethod_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARSceneReconstruction, METADATA_PARAMS(nullptr, 0) }; // 2897416406
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetSceneReconstructionMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetSceneReconstructionMethod_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetSceneReconstructionMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetSceneReconstructionMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see SceneReconstructionMethod */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see SceneReconstructionMethod" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetSceneReconstructionMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetSceneReconstructionMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_GetSceneReconstructionMethod_Statics::ARSessionConfig_eventGetSceneReconstructionMethod_Parms), Z_Construct_UFunction_UARSessionConfig_GetSceneReconstructionMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetSceneReconstructionMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetSceneReconstructionMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetSceneReconstructionMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetSceneReconstructionMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetSceneReconstructionMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics
	{
		struct ARSessionConfig_eventGetSessionType_Parms
		{
			EARSessionType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventGetSessionType_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARSessionType, METADATA_PARAMS(nullptr, 0) }; // 3810857621
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see SessionType */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see SessionType" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetSessionType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::ARSessionConfig_eventGetSessionType_Parms), Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetSessionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics
	{
		struct ARSessionConfig_eventGetWorldAlignment_Parms
		{
			EARWorldAlignment ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventGetWorldAlignment_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARWorldAlignment, METADATA_PARAMS(nullptr, 0) }; // 3177970330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see EARWorldAlignment */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EARWorldAlignment" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetWorldAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::ARSessionConfig_eventGetWorldAlignment_Parms), Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics
	{
		struct ARSessionConfig_eventGetWorldMapData_Parms
		{
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventGetWorldMapData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see WorldMapData */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see WorldMapData" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetWorldMapData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::ARSessionConfig_eventGetWorldMapData_Parms), Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetWorldMapData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics
	{
		struct ARSessionConfig_eventSetCandidateObjectList_Parms
		{
			TArray<UARCandidateObject*> InCandidateObjects;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCandidateObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCandidateObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InCandidateObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::NewProp_InCandidateObjects_Inner = { "InCandidateObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UARCandidateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::NewProp_InCandidateObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::NewProp_InCandidateObjects = { "InCandidateObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventSetCandidateObjectList_Parms, InCandidateObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::NewProp_InCandidateObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::NewProp_InCandidateObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::NewProp_InCandidateObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::NewProp_InCandidateObjects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see CandidateObjects */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see CandidateObjects" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetCandidateObjectList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::ARSessionConfig_eventSetCandidateObjectList_Parms), Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics
	{
		struct ARSessionConfig_eventSetDesiredVideoFormat_Parms
		{
			FARVideoFormat NewFormat;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewFormat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::NewProp_NewFormat = { "NewFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventSetDesiredVideoFormat_Parms, NewFormat), Z_Construct_UScriptStruct_FARVideoFormat, METADATA_PARAMS(nullptr, 0) }; // 3309039363
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::NewProp_NewFormat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see DesiredVideoFormat */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see DesiredVideoFormat" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetDesiredVideoFormat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::ARSessionConfig_eventSetDesiredVideoFormat_Parms), Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics
	{
		struct ARSessionConfig_eventSetEnableAutoFocus_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventSetEnableAutoFocus_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARSessionConfig_eventSetEnableAutoFocus_Parms), &Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see bEnableAutoFocus */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bEnableAutoFocus" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetEnableAutoFocus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::ARSessionConfig_eventSetEnableAutoFocus_Parms), Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics
	{
		struct ARSessionConfig_eventSetFaceTrackingDirection_Parms
		{
			EARFaceTrackingDirection InDirection;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InDirection_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::NewProp_InDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::NewProp_InDirection = { "InDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventSetFaceTrackingDirection_Parms, InDirection), Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection, METADATA_PARAMS(nullptr, 0) }; // 3500389980
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::NewProp_InDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::NewProp_InDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see FaceTrackingDirection */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see FaceTrackingDirection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetFaceTrackingDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::ARSessionConfig_eventSetFaceTrackingDirection_Parms), Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics
	{
		struct ARSessionConfig_eventSetFaceTrackingUpdate_Parms
		{
			EARFaceTrackingUpdate InUpdate;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InUpdate_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::NewProp_InUpdate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::NewProp_InUpdate = { "InUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventSetFaceTrackingUpdate_Parms, InUpdate), Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate, METADATA_PARAMS(nullptr, 0) }; // 811346367
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::NewProp_InUpdate_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::NewProp_InUpdate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see FaceTrackingUpdate */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see FaceTrackingUpdate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetFaceTrackingUpdate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::ARSessionConfig_eventSetFaceTrackingUpdate_Parms), Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics
	{
		struct ARSessionConfig_eventSetResetCameraTracking_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventSetResetCameraTracking_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARSessionConfig_eventSetResetCameraTracking_Parms), &Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see bResetCameraTracking */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bResetCameraTracking" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetResetCameraTracking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::ARSessionConfig_eventSetResetCameraTracking_Parms), Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics
	{
		struct ARSessionConfig_eventSetResetTrackedObjects_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventSetResetTrackedObjects_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARSessionConfig_eventSetResetTrackedObjects_Parms), &Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see bResetTrackedObjects */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bResetTrackedObjects" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetResetTrackedObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::ARSessionConfig_eventSetResetTrackedObjects_Parms), Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetSceneReconstructionMethod_Statics
	{
		struct ARSessionConfig_eventSetSceneReconstructionMethod_Parms
		{
			EARSceneReconstruction InSceneReconstructionMethod;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InSceneReconstructionMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InSceneReconstructionMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_SetSceneReconstructionMethod_Statics::NewProp_InSceneReconstructionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_SetSceneReconstructionMethod_Statics::NewProp_InSceneReconstructionMethod = { "InSceneReconstructionMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventSetSceneReconstructionMethod_Parms, InSceneReconstructionMethod), Z_Construct_UEnum_AugmentedReality_EARSceneReconstruction, METADATA_PARAMS(nullptr, 0) }; // 2897416406
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetSceneReconstructionMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetSceneReconstructionMethod_Statics::NewProp_InSceneReconstructionMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetSceneReconstructionMethod_Statics::NewProp_InSceneReconstructionMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetSceneReconstructionMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see SceneReconstructionMethod */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see SceneReconstructionMethod" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetSceneReconstructionMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetSceneReconstructionMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_SetSceneReconstructionMethod_Statics::ARSessionConfig_eventSetSceneReconstructionMethod_Parms), Z_Construct_UFunction_UARSessionConfig_SetSceneReconstructionMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetSceneReconstructionMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetSceneReconstructionMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetSceneReconstructionMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetSceneReconstructionMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetSceneReconstructionMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics
	{
		struct ARSessionConfig_eventSetSessionTrackingFeatureToEnable_Parms
		{
			EARSessionTrackingFeature InSessionTrackingFeature;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InSessionTrackingFeature_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InSessionTrackingFeature;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::NewProp_InSessionTrackingFeature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::NewProp_InSessionTrackingFeature = { "InSessionTrackingFeature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventSetSessionTrackingFeatureToEnable_Parms, InSessionTrackingFeature), Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature, METADATA_PARAMS(nullptr, 0) }; // 2993079397
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::NewProp_InSessionTrackingFeature_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::NewProp_InSessionTrackingFeature,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see EnabledSessionTrackingFeatures */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EnabledSessionTrackingFeatures" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetSessionTrackingFeatureToEnable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::ARSessionConfig_eventSetSessionTrackingFeatureToEnable_Parms), Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics
	{
		struct ARSessionConfig_eventSetWorldMapData_Parms
		{
			TArray<uint8> WorldMapData;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_WorldMapData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldMapData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::NewProp_WorldMapData_Inner = { "WorldMapData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::NewProp_WorldMapData = { "WorldMapData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSessionConfig_eventSetWorldMapData_Parms, WorldMapData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::NewProp_WorldMapData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::NewProp_WorldMapData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see WorldMapData */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see WorldMapData" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetWorldMapData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::ARSessionConfig_eventSetWorldMapData_Parms), Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetWorldMapData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics
	{
		struct ARSessionConfig_eventShouldEnableAutoFocus_Parms
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
	void Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventShouldEnableAutoFocus_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARSessionConfig_eventShouldEnableAutoFocus_Parms), &Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see bEnableAutoFocus */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bEnableAutoFocus" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "ShouldEnableAutoFocus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::ARSessionConfig_eventShouldEnableAutoFocus_Parms), Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics
	{
		struct ARSessionConfig_eventShouldEnableCameraTracking_Parms
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
	void Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventShouldEnableCameraTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARSessionConfig_eventShouldEnableCameraTracking_Parms), &Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see bEnableAutomaticCameraTracking */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bEnableAutomaticCameraTracking" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "ShouldEnableCameraTracking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::ARSessionConfig_eventShouldEnableCameraTracking_Parms), Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics
	{
		struct ARSessionConfig_eventShouldRenderCameraOverlay_Parms
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
	void Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventShouldRenderCameraOverlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARSessionConfig_eventShouldRenderCameraOverlay_Parms), &Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see bEnableAutomaticCameraOverlay */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bEnableAutomaticCameraOverlay" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "ShouldRenderCameraOverlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::ARSessionConfig_eventShouldRenderCameraOverlay_Parms), Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics
	{
		struct ARSessionConfig_eventShouldResetCameraTracking_Parms
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
	void Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventShouldResetCameraTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARSessionConfig_eventShouldResetCameraTracking_Parms), &Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see bResetCameraTracking */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bResetCameraTracking" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "ShouldResetCameraTracking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::ARSessionConfig_eventShouldResetCameraTracking_Parms), Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics
	{
		struct ARSessionConfig_eventShouldResetTrackedObjects_Parms
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
	void Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventShouldResetTrackedObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARSessionConfig_eventShouldResetTrackedObjects_Parms), &Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see bResetTrackedObjects */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bResetTrackedObjects" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "ShouldResetTrackedObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::ARSessionConfig_eventShouldResetTrackedObjects_Parms), Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARSessionConfig);
	UClass* Z_Construct_UClass_UARSessionConfig_NoRegister()
	{
		return UARSessionConfig::StaticClass();
	}
	struct Z_Construct_UClass_UARSessionConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateMeshDataFromTrackedGeometry_MetaData[];
#endif
		static void NewProp_bGenerateMeshDataFromTrackedGeometry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateMeshDataFromTrackedGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateCollisionForMeshData_MetaData[];
#endif
		static void NewProp_bGenerateCollisionForMeshData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateCollisionForMeshData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateNavMeshForMeshData_MetaData[];
#endif
		static void NewProp_bGenerateNavMeshForMeshData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateNavMeshForMeshData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMeshDataForOcclusion_MetaData[];
#endif
		static void NewProp_bUseMeshDataForOcclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMeshDataForOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderMeshDataInWireframe_MetaData[];
#endif
		static void NewProp_bRenderMeshDataInWireframe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderMeshDataInWireframe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTrackSceneObjects_MetaData[];
#endif
		static void NewProp_bTrackSceneObjects_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrackSceneObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePersonSegmentationForOcclusion_MetaData[];
#endif
		static void NewProp_bUsePersonSegmentationForOcclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePersonSegmentationForOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSceneDepthForOcclusion_MetaData[];
#endif
		static void NewProp_bUseSceneDepthForOcclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSceneDepthForOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAutomaticImageScaleEstimation_MetaData[];
#endif
		static void NewProp_bUseAutomaticImageScaleEstimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAutomaticImageScaleEstimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseStandardOnboardingUX_MetaData[];
#endif
		static void NewProp_bUseStandardOnboardingUX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseStandardOnboardingUX;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WorldAlignment_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WorldAlignment;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SessionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SessionType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlaneDetectionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneDetectionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaneDetectionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHorizontalPlaneDetection_MetaData[];
#endif
		static void NewProp_bHorizontalPlaneDetection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHorizontalPlaneDetection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVerticalPlaneDetection_MetaData[];
#endif
		static void NewProp_bVerticalPlaneDetection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerticalPlaneDetection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoFocus_MetaData[];
#endif
		static void NewProp_bEnableAutoFocus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoFocus;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LightEstimationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightEstimationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LightEstimationMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FrameSyncMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameSyncMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FrameSyncMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutomaticCameraOverlay_MetaData[];
#endif
		static void NewProp_bEnableAutomaticCameraOverlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutomaticCameraOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutomaticCameraTracking_MetaData[];
#endif
		static void NewProp_bEnableAutomaticCameraTracking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutomaticCameraTracking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetCameraTracking_MetaData[];
#endif
		static void NewProp_bResetCameraTracking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetCameraTracking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetTrackedObjects_MetaData[];
#endif
		static void NewProp_bResetTrackedObjects_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetTrackedObjects;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CandidateImages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CandidateImages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CandidateImages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumSimultaneousImagesTracked_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumSimultaneousImagesTracked;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnvironmentCaptureProbeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentCaptureProbeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EnvironmentCaptureProbeType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WorldMapData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldMapData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldMapData;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CandidateObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CandidateObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CandidateObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredVideoFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredVideoFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseOptimalVideoFormat_MetaData[];
#endif
		static void NewProp_bUseOptimalVideoFormat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOptimalVideoFormat;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FaceTrackingDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceTrackingDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FaceTrackingDirection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FaceTrackingUpdate_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceTrackingUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FaceTrackingUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfTrackedFaces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfTrackedFaces;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SerializedARCandidateImageDatabase_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedARCandidateImageDatabase_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SerializedARCandidateImageDatabase;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnabledSessionTrackingFeature_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnabledSessionTrackingFeature_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EnabledSessionTrackingFeature;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SceneReconstructionMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneReconstructionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SceneReconstructionMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlaneComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PointComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FaceComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ImageComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QRCodeComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_QRCodeComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PoseComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentProbeComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EnvironmentProbeComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MeshComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeoAnchorComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GeoAnchorComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMeshMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultMeshMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWireframeMeshMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultWireframeMeshMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARSessionConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARSessionConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARSessionConfig_AddCandidateImage, "AddCandidateImage" }, // 2692641901
		{ &Z_Construct_UFunction_UARSessionConfig_AddCandidateObject, "AddCandidateObject" }, // 2548126946
		{ &Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList, "GetCandidateImageList" }, // 1673303311
		{ &Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList, "GetCandidateObjectList" }, // 2692375556
		{ &Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat, "GetDesiredVideoFormat" }, // 2921554898
		{ &Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature, "GetEnabledSessionTrackingFeature" }, // 434018162
		{ &Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType, "GetEnvironmentCaptureProbeType" }, // 1061147608
		{ &Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection, "GetFaceTrackingDirection" }, // 645340272
		{ &Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate, "GetFaceTrackingUpdate" }, // 2032742001
		{ &Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode, "GetFrameSyncMode" }, // 3298241451
		{ &Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode, "GetLightEstimationMode" }, // 3710502637
		{ &Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked, "GetMaxNumSimultaneousImagesTracked" }, // 1410231525
		{ &Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode, "GetPlaneDetectionMode" }, // 3386719496
		{ &Z_Construct_UFunction_UARSessionConfig_GetSceneReconstructionMethod, "GetSceneReconstructionMethod" }, // 1180843785
		{ &Z_Construct_UFunction_UARSessionConfig_GetSessionType, "GetSessionType" }, // 317371081
		{ &Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment, "GetWorldAlignment" }, // 2618708150
		{ &Z_Construct_UFunction_UARSessionConfig_GetWorldMapData, "GetWorldMapData" }, // 568909351
		{ &Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList, "SetCandidateObjectList" }, // 4290475902
		{ &Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat, "SetDesiredVideoFormat" }, // 3088925694
		{ &Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus, "SetEnableAutoFocus" }, // 3107770960
		{ &Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection, "SetFaceTrackingDirection" }, // 4159461489
		{ &Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate, "SetFaceTrackingUpdate" }, // 1314241504
		{ &Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking, "SetResetCameraTracking" }, // 213543711
		{ &Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects, "SetResetTrackedObjects" }, // 3486726853
		{ &Z_Construct_UFunction_UARSessionConfig_SetSceneReconstructionMethod, "SetSceneReconstructionMethod" }, // 60529784
		{ &Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable, "SetSessionTrackingFeatureToEnable" }, // 3671136501
		{ &Z_Construct_UFunction_UARSessionConfig_SetWorldMapData, "SetWorldMapData" }, // 729866841
		{ &Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus, "ShouldEnableAutoFocus" }, // 3102504148
		{ &Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking, "ShouldEnableCameraTracking" }, // 3449396774
		{ &Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay, "ShouldRenderCameraOverlay" }, // 3652916918
		{ &Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking, "ShouldResetCameraTracking" }, // 3215985551
		{ &Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects, "ShouldResetTrackedObjects" }, // 3177879524
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Settings" },
		{ "Comment", "/**\n * An Unreal Data Asset that defines what features are used in the AR session.\n */" },
		{ "IncludePath", "ARSessionConfig.h" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "An Unreal Data Asset that defines what features are used in the AR session." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateMeshDataFromTrackedGeometry_MetaData[] = {
		{ "Category", "AR Settings | World Mapping" },
		{ "Comment", "/** Boolean to determine whether the AR system should generate mesh data that can be used for rendering, collision, NavMesh, and more. This feature is used by OpenXR, Windows Mixed Reality. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Boolean to determine whether the AR system should generate mesh data that can be used for rendering, collision, NavMesh, and more. This feature is used by OpenXR, Windows Mixed Reality." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateMeshDataFromTrackedGeometry_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bGenerateMeshDataFromTrackedGeometry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateMeshDataFromTrackedGeometry = { "bGenerateMeshDataFromTrackedGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateMeshDataFromTrackedGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateMeshDataFromTrackedGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateMeshDataFromTrackedGeometry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateCollisionForMeshData_MetaData[] = {
		{ "Category", "AR Settings | World Mapping" },
		{ "Comment", "/** Boolean to determine whether the AR system should generate collision data from the mesh data. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Boolean to determine whether the AR system should generate collision data from the mesh data." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateCollisionForMeshData_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bGenerateCollisionForMeshData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateCollisionForMeshData = { "bGenerateCollisionForMeshData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateCollisionForMeshData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateCollisionForMeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateCollisionForMeshData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateNavMeshForMeshData_MetaData[] = {
		{ "Category", "AR Settings | World Mapping" },
		{ "Comment", "/** Boolean to determine whether the AR system should generate collision data from the mesh data. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Boolean to determine whether the AR system should generate collision data from the mesh data." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateNavMeshForMeshData_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bGenerateNavMeshForMeshData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateNavMeshForMeshData = { "bGenerateNavMeshForMeshData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateNavMeshForMeshData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateNavMeshForMeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateNavMeshForMeshData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseMeshDataForOcclusion_MetaData[] = {
		{ "Category", "AR Settings | World Mapping" },
		{ "Comment", "/** Boolean to determine whether the AR system should render the mesh data as occlusion meshes. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Boolean to determine whether the AR system should render the mesh data as occlusion meshes." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseMeshDataForOcclusion_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bUseMeshDataForOcclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseMeshDataForOcclusion = { "bUseMeshDataForOcclusion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseMeshDataForOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseMeshDataForOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseMeshDataForOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bRenderMeshDataInWireframe_MetaData[] = {
		{ "Category", "AR Settings | World Mapping" },
		{ "Comment", "/** Boolean to determine whether the AR system should render the mesh data as wireframe.  It is reccomended to simply set the DefaultMeshMaterial to whatever is desired, including a wireframe material and ignore this setting (there is no good reason for this to exist as a special case).*/" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Boolean to determine whether the AR system should render the mesh data as wireframe.  It is reccomended to simply set the DefaultMeshMaterial to whatever is desired, including a wireframe material and ignore this setting (there is no good reason for this to exist as a special case)." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bRenderMeshDataInWireframe_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bRenderMeshDataInWireframe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bRenderMeshDataInWireframe = { "bRenderMeshDataInWireframe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bRenderMeshDataInWireframe_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bRenderMeshDataInWireframe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bRenderMeshDataInWireframe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bTrackSceneObjects_MetaData[] = {
		{ "Category", "AR Settings | World Mapping" },
		{ "Comment", "/** Boolean to determine whether the AR system should track scene objects: @see EARObjectClassification::SceneObject. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Boolean to determine whether the AR system should track scene objects: @see EARObjectClassification::SceneObject." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bTrackSceneObjects_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bTrackSceneObjects = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bTrackSceneObjects = { "bTrackSceneObjects", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bTrackSceneObjects_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bTrackSceneObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bTrackSceneObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUsePersonSegmentationForOcclusion_MetaData[] = {
		{ "Category", "AR Settings | Occlusion" },
		{ "Comment", "/** Boolean to determine whether to use the person segmentation results for occluding virtual content. This feature is used by ARKit. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Boolean to determine whether to use the person segmentation results for occluding virtual content. This feature is used by ARKit." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUsePersonSegmentationForOcclusion_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bUsePersonSegmentationForOcclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUsePersonSegmentationForOcclusion = { "bUsePersonSegmentationForOcclusion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUsePersonSegmentationForOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUsePersonSegmentationForOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUsePersonSegmentationForOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseSceneDepthForOcclusion_MetaData[] = {
		{ "Category", "AR Settings | Occlusion" },
		{ "Comment", "/** Boolean to determine whether to use the scene depth information for occluding virtual content. This feature is used by ARCore and ARKit. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Boolean to determine whether to use the scene depth information for occluding virtual content. This feature is used by ARCore and ARKit." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseSceneDepthForOcclusion_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bUseSceneDepthForOcclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseSceneDepthForOcclusion = { "bUseSceneDepthForOcclusion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseSceneDepthForOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseSceneDepthForOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseSceneDepthForOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseAutomaticImageScaleEstimation_MetaData[] = {
		{ "Category", "AR Settings | Image Tracking" },
		{ "Comment", "/** Boolean to determine whether to automatically estimate and set the scale of a detected, or tracked, image. This feature is used by ARKit. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Boolean to determine whether to automatically estimate and set the scale of a detected, or tracked, image. This feature is used by ARKit." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseAutomaticImageScaleEstimation_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bUseAutomaticImageScaleEstimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseAutomaticImageScaleEstimation = { "bUseAutomaticImageScaleEstimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseAutomaticImageScaleEstimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseAutomaticImageScaleEstimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseAutomaticImageScaleEstimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseStandardOnboardingUX_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** Boolean to determine whether to use the standard onboarding UX, if the system supports it. This feature is used by ARKit. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Boolean to determine whether to use the standard onboarding UX, if the system supports it. This feature is used by ARKit." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseStandardOnboardingUX_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bUseStandardOnboardingUX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseStandardOnboardingUX = { "bUseStandardOnboardingUX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseStandardOnboardingUX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseStandardOnboardingUX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseStandardOnboardingUX_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldAlignment_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see EARWorldAlignment */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EARWorldAlignment" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldAlignment = { "WorldAlignment", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, WorldAlignment), Z_Construct_UEnum_AugmentedReality_EARWorldAlignment, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldAlignment_MetaData)) }; // 3177970330
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SessionType_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see EARSessionType */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EARSessionType" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, SessionType), Z_Construct_UEnum_AugmentedReality_EARSessionType, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SessionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SessionType_MetaData)) }; // 3810857621
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneDetectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneDetectionMode_MetaData[] = {
		{ "Comment", "/** @see EARPlaneDetectionMode */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EARPlaneDetectionMode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneDetectionMode = { "PlaneDetectionMode", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, PlaneDetectionMode_DEPRECATED), Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneDetectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneDetectionMode_MetaData)) }; // 2878201354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bHorizontalPlaneDetection_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** Boolean to determine whether flat, horizontal surfaces are detected. This feature is used by ARCore and ARKit. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Boolean to determine whether flat, horizontal surfaces are detected. This feature is used by ARCore and ARKit." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bHorizontalPlaneDetection_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bHorizontalPlaneDetection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bHorizontalPlaneDetection = { "bHorizontalPlaneDetection", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bHorizontalPlaneDetection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bHorizontalPlaneDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bHorizontalPlaneDetection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bVerticalPlaneDetection_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** Boolean to determine whether flat, vertical surfaces are detected. This feature is used by ARCore and ARKit. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Boolean to determine whether flat, vertical surfaces are detected. This feature is used by ARCore and ARKit." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bVerticalPlaneDetection_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bVerticalPlaneDetection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bVerticalPlaneDetection = { "bVerticalPlaneDetection", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bVerticalPlaneDetection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bVerticalPlaneDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bVerticalPlaneDetection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutoFocus_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** Boolean to determine whether the camera should autofocus. Autofocus can cause subtle shifts in position for small objects at further camera distance. This feature is used by ARCore and ARKit. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Boolean to determine whether the camera should autofocus. Autofocus can cause subtle shifts in position for small objects at further camera distance. This feature is used by ARCore and ARKit." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutoFocus_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bEnableAutoFocus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutoFocus = { "bEnableAutoFocus", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutoFocus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutoFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutoFocus_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_LightEstimationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_LightEstimationMode_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see EARLightEstimationMode */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EARLightEstimationMode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_LightEstimationMode = { "LightEstimationMode", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, LightEstimationMode), Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_LightEstimationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_LightEstimationMode_MetaData)) }; // 3853687364
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FrameSyncMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FrameSyncMode_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see EARFrameSyncMode */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EARFrameSyncMode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FrameSyncMode = { "FrameSyncMode", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, FrameSyncMode), Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FrameSyncMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FrameSyncMode_MetaData)) }; // 868226702
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraOverlay_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** Boolean to determine whether the AR camera feed should be drawn as an overlay. Defaults to true. This feature is used by ARCore and ARKit. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Boolean to determine whether the AR camera feed should be drawn as an overlay. Defaults to true. This feature is used by ARCore and ARKit." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraOverlay_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bEnableAutomaticCameraOverlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraOverlay = { "bEnableAutomaticCameraOverlay", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraOverlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraOverlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraTracking_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** Boolean to determine whether the virtual camera should track the device movement. Defaults to true. This feature is used by ARCore and ARKit. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Boolean to determine whether the virtual camera should track the device movement. Defaults to true. This feature is used by ARCore and ARKit." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraTracking_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bEnableAutomaticCameraTracking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraTracking = { "bEnableAutomaticCameraTracking", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraTracking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetCameraTracking_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** Boolean to determine whether the AR system should reset camera tracking, such as its origin and transforms, when a new AR session starts. Defaults to true. This feature is used by ARKit. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Boolean to determine whether the AR system should reset camera tracking, such as its origin and transforms, when a new AR session starts. Defaults to true. This feature is used by ARKit." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetCameraTracking_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bResetCameraTracking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetCameraTracking = { "bResetCameraTracking", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetCameraTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetCameraTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetCameraTracking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetTrackedObjects_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** Boolean to determine whether the AR system should remove any tracked objects when a new AR session starts. Defaults to true. This feature is used by ARKit. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Boolean to determine whether the AR system should remove any tracked objects when a new AR session starts. Defaults to true. This feature is used by ARKit." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetTrackedObjects_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bResetTrackedObjects = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetTrackedObjects = { "bResetTrackedObjects", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetTrackedObjects_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetTrackedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetTrackedObjects_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateImages_Inner = { "CandidateImages", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UARCandidateImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateImages_MetaData[] = {
		{ "Category", "AR Settings | Image Tracking" },
		{ "Comment", "/** The list of candidate images to detect within the AR camera view. This feature is used by ARKit. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "The list of candidate images to detect within the AR camera view. This feature is used by ARKit." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateImages = { "CandidateImages", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, CandidateImages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateImages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateImages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MaxNumSimultaneousImagesTracked_MetaData[] = {
		{ "Category", "AR Settings | Image Tracking" },
		{ "Comment", "/** The maximum number of images to track at the same time. Defaults to 1. This feature is used by ARKit. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "The maximum number of images to track at the same time. Defaults to 1. This feature is used by ARKit." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MaxNumSimultaneousImagesTracked = { "MaxNumSimultaneousImagesTracked", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, MaxNumSimultaneousImagesTracked), METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MaxNumSimultaneousImagesTracked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MaxNumSimultaneousImagesTracked_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentCaptureProbeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentCaptureProbeType_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see EAREnvironmentCaptureProbeType */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EAREnvironmentCaptureProbeType" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentCaptureProbeType = { "EnvironmentCaptureProbeType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, EnvironmentCaptureProbeType), Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentCaptureProbeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentCaptureProbeType_MetaData)) }; // 3630339992
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldMapData_Inner = { "WorldMapData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldMapData_MetaData[] = {
		{ "Category", "AR Settings | World Mapping" },
		{ "Comment", "/** A previously saved world that will be loaded when the session starts. This feature is used by ARKit. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "A previously saved world that will be loaded when the session starts. This feature is used by ARKit." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldMapData = { "WorldMapData", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, WorldMapData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldMapData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldMapData_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateObjects_Inner = { "CandidateObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UARCandidateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateObjects_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** The list of candidate objects to search for in the scene. This feature is used by ARKit. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "The list of candidate objects to search for in the scene. This feature is used by ARKit." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateObjects = { "CandidateObjects", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, CandidateObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DesiredVideoFormat_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/**\n\x09 * The desired video format (or the default, if not supported) that this session should use if the camera is enabled.\n\x09 * Use GetSupportedVideoFormats to get a list of device-supported formats.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "The desired video format (or the default, if not supported) that this session should use if the camera is enabled.\nUse GetSupportedVideoFormats to get a list of device-supported formats." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DesiredVideoFormat = { "DesiredVideoFormat", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, DesiredVideoFormat), Z_Construct_UScriptStruct_FARVideoFormat, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DesiredVideoFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DesiredVideoFormat_MetaData)) }; // 3309039363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseOptimalVideoFormat_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** Boolean to determine whether to automatically pick the video format that best matches the device screen size */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Boolean to determine whether to automatically pick the video format that best matches the device screen size" },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseOptimalVideoFormat_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bUseOptimalVideoFormat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseOptimalVideoFormat = { "bUseOptimalVideoFormat", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseOptimalVideoFormat_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseOptimalVideoFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseOptimalVideoFormat_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingDirection_MetaData[] = {
		{ "Category", "Face AR Settings" },
		{ "Comment", "/** @see EARFaceTrackingDirection */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EARFaceTrackingDirection" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingDirection = { "FaceTrackingDirection", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, FaceTrackingDirection), Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingDirection_MetaData)) }; // 3500389980
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingUpdate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingUpdate_MetaData[] = {
		{ "Category", "Face AR Settings" },
		{ "Comment", "/** @see EARFaceTrackingUpdate */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EARFaceTrackingUpdate" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingUpdate = { "FaceTrackingUpdate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, FaceTrackingUpdate), Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingUpdate_MetaData)) }; // 811346367
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MaxNumberOfTrackedFaces_MetaData[] = {
		{ "Category", "Face AR Settings" },
		{ "Comment", "/** The maximum number of faces to track simultaneously. This feature is used by ARKit. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "The maximum number of faces to track simultaneously. This feature is used by ARKit." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MaxNumberOfTrackedFaces = { "MaxNumberOfTrackedFaces", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, MaxNumberOfTrackedFaces), METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MaxNumberOfTrackedFaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MaxNumberOfTrackedFaces_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SerializedARCandidateImageDatabase_Inner = { "SerializedARCandidateImageDatabase", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SerializedARCandidateImageDatabase_MetaData[] = {
		{ "Comment", "/** Data array for storing the cooked image database. This feature is used by ARCore. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Data array for storing the cooked image database. This feature is used by ARCore." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SerializedARCandidateImageDatabase = { "SerializedARCandidateImageDatabase", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, SerializedARCandidateImageDatabase), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SerializedARCandidateImageDatabase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SerializedARCandidateImageDatabase_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnabledSessionTrackingFeature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnabledSessionTrackingFeature_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see EARSessionTrackingFeature */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EARSessionTrackingFeature" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnabledSessionTrackingFeature = { "EnabledSessionTrackingFeature", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, EnabledSessionTrackingFeature), Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnabledSessionTrackingFeature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnabledSessionTrackingFeature_MetaData)) }; // 2993079397
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SceneReconstructionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SceneReconstructionMethod_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** @see EARSceneReconstruction */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EARSceneReconstruction" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SceneReconstructionMethod = { "SceneReconstructionMethod", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, SceneReconstructionMethod), Z_Construct_UEnum_AugmentedReality_EARSceneReconstruction, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SceneReconstructionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SceneReconstructionMethod_MetaData)) }; // 2897416406
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneComponentClass_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "Comment", "/** @see UARPlaneComponent */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see UARPlaneComponent" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneComponentClass = { "PlaneComponentClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, PlaneComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UARPlaneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PointComponentClass_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "Comment", "/** @see UARPointComponent */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see UARPointComponent" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PointComponentClass = { "PointComponentClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, PointComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UARPointComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PointComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PointComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceComponentClass_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "Comment", "/** @see UARFaceComponent */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see UARFaceComponent" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceComponentClass = { "FaceComponentClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, FaceComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UARFaceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_ImageComponentClass_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "Comment", "/** @see UARImageComponent */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see UARImageComponent" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_ImageComponentClass = { "ImageComponentClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, ImageComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UARImageComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_ImageComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_ImageComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_QRCodeComponentClass_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "Comment", "/** @see UARQRCodeComponent */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see UARQRCodeComponent" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_QRCodeComponentClass = { "QRCodeComponentClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, QRCodeComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UARQRCodeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_QRCodeComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_QRCodeComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PoseComponentClass_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "Comment", "/** @see UARPoseComponent */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see UARPoseComponent" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PoseComponentClass = { "PoseComponentClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, PoseComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UARPoseComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PoseComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PoseComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentProbeComponentClass_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "Comment", "/** @see UAREnvironmentProbeComponent */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see UAREnvironmentProbeComponent" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentProbeComponentClass = { "EnvironmentProbeComponentClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, EnvironmentProbeComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAREnvironmentProbeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentProbeComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentProbeComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_ObjectComponentClass_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "Comment", "/** @see UARObjectComponent */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see UARObjectComponent" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_ObjectComponentClass = { "ObjectComponentClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, ObjectComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UARObjectComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_ObjectComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_ObjectComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MeshComponentClass_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "Comment", "/** @see UARMeshComponent */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see UARMeshComponent" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MeshComponentClass = { "MeshComponentClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, MeshComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UARMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MeshComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MeshComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_GeoAnchorComponentClass_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "Comment", "/** @see UARGeoAnchorComponent */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see UARGeoAnchorComponent" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_GeoAnchorComponentClass = { "GeoAnchorComponentClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, GeoAnchorComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UARGeoAnchorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_GeoAnchorComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_GeoAnchorComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DefaultMeshMaterial_MetaData[] = {
		{ "Category", "AR Settings | World Mapping" },
		{ "Comment", "/** The default mesh material used by the generated mesh component. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "The default mesh material used by the generated mesh component." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DefaultMeshMaterial = { "DefaultMeshMaterial", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, DefaultMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DefaultMeshMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DefaultMeshMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DefaultWireframeMeshMaterial_MetaData[] = {
		{ "Category", "AR Settings | World Mapping" },
		{ "Comment", "/** The default mesh material used by the wireframe setting of the generated mesh component.  Note: It is recommended to ignore this wireframe feature and use a wireframe material for the DefaultMeshMaterial instead. */" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "The default mesh material used by the wireframe setting of the generated mesh component.  Note: It is recommended to ignore this wireframe feature and use a wireframe material for the DefaultMeshMaterial instead." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DefaultWireframeMeshMaterial = { "DefaultWireframeMeshMaterial", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARSessionConfig, DefaultWireframeMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DefaultWireframeMeshMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DefaultWireframeMeshMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARSessionConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateMeshDataFromTrackedGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateCollisionForMeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateNavMeshForMeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseMeshDataForOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bRenderMeshDataInWireframe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bTrackSceneObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUsePersonSegmentationForOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseSceneDepthForOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseAutomaticImageScaleEstimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseStandardOnboardingUX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldAlignment_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SessionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SessionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneDetectionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneDetectionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bHorizontalPlaneDetection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bVerticalPlaneDetection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutoFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_LightEstimationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_LightEstimationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FrameSyncMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FrameSyncMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraTracking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetCameraTracking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetTrackedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateImages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateImages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MaxNumSimultaneousImagesTracked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentCaptureProbeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentCaptureProbeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldMapData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldMapData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DesiredVideoFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseOptimalVideoFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingUpdate_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MaxNumberOfTrackedFaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SerializedARCandidateImageDatabase_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SerializedARCandidateImageDatabase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnabledSessionTrackingFeature_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnabledSessionTrackingFeature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SceneReconstructionMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SceneReconstructionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PointComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_ImageComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_QRCodeComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PoseComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentProbeComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_ObjectComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MeshComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_GeoAnchorComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DefaultMeshMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DefaultWireframeMeshMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARSessionConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARSessionConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARSessionConfig_Statics::ClassParams = {
		&UARSessionConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARSessionConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARSessionConfig()
	{
		if (!Z_Registration_Info_UClass_UARSessionConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARSessionConfig.OuterSingleton, Z_Construct_UClass_UARSessionConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARSessionConfig.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARSessionConfig>()
	{
		return UARSessionConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARSessionConfig);
	UARSessionConfig::~UARSessionConfig() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UARSessionConfig)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_Statics::EnumInfo[] = {
		{ EARWorldAlignment_StaticEnum, TEXT("EARWorldAlignment"), &Z_Registration_Info_UEnum_EARWorldAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3177970330U) },
		{ EARSessionType_StaticEnum, TEXT("EARSessionType"), &Z_Registration_Info_UEnum_EARSessionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3810857621U) },
		{ EARPlaneDetectionMode_StaticEnum, TEXT("EARPlaneDetectionMode"), &Z_Registration_Info_UEnum_EARPlaneDetectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2878201354U) },
		{ EARLightEstimationMode_StaticEnum, TEXT("EARLightEstimationMode"), &Z_Registration_Info_UEnum_EARLightEstimationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3853687364U) },
		{ EARFrameSyncMode_StaticEnum, TEXT("EARFrameSyncMode"), &Z_Registration_Info_UEnum_EARFrameSyncMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 868226702U) },
		{ EAREnvironmentCaptureProbeType_StaticEnum, TEXT("EAREnvironmentCaptureProbeType"), &Z_Registration_Info_UEnum_EAREnvironmentCaptureProbeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3630339992U) },
		{ EARFaceTrackingUpdate_StaticEnum, TEXT("EARFaceTrackingUpdate"), &Z_Registration_Info_UEnum_EARFaceTrackingUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 811346367U) },
		{ EARSessionTrackingFeature_StaticEnum, TEXT("EARSessionTrackingFeature"), &Z_Registration_Info_UEnum_EARSessionTrackingFeature, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2993079397U) },
		{ EARSceneReconstruction_StaticEnum, TEXT("EARSceneReconstruction"), &Z_Registration_Info_UEnum_EARSceneReconstruction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2897416406U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARSessionConfig, UARSessionConfig::StaticClass, TEXT("UARSessionConfig"), &Z_Registration_Info_UClass_UARSessionConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARSessionConfig), 116085125U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_3850718798(TEXT("/Script/AugmentedReality"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
