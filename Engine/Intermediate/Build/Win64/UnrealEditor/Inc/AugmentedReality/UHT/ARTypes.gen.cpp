// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARTypes() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateImage();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateImage_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateObject();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateObject_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTypesDummyClass();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTypesDummyClass_NoRegister();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARAltitudeSource();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARCaptureType();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARJointTransformSpace();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARObjectClassification();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionStatus();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARSpatialMeshUsageFlags();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingQuality();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingState();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARWorldMappingState();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARCameraIntrinsics();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARPose2D();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARPose3D();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARSessionStatus();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARSkeletonDefinition();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARVideoFormat();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARTrackingState;
	static UEnum* EARTrackingState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARTrackingState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARTrackingState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARTrackingState, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARTrackingState"));
		}
		return Z_Registration_Info_UEnum_EARTrackingState.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARTrackingState>()
	{
		return EARTrackingState_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARTrackingState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARTrackingState_Statics::Enumerators[] = {
		{ "EARTrackingState::Unknown", (int64)EARTrackingState::Unknown },
		{ "EARTrackingState::Tracking", (int64)EARTrackingState::Tracking },
		{ "EARTrackingState::NotTracking", (int64)EARTrackingState::NotTracking },
		{ "EARTrackingState::StoppedTracking", (int64)EARTrackingState::StoppedTracking },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARTrackingState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "NotTracking.Comment", "/** Currently not tracking, but may resume tracking later. */" },
		{ "NotTracking.Name", "EARTrackingState::NotTracking" },
		{ "NotTracking.ToolTip", "Currently not tracking, but may resume tracking later." },
		{ "StoppedTracking.Comment", "/** Stopped tracking forever. */" },
		{ "StoppedTracking.Name", "EARTrackingState::StoppedTracking" },
		{ "StoppedTracking.ToolTip", "Stopped tracking forever." },
		{ "Tracking.Comment", "/** Currently tracking. */" },
		{ "Tracking.Name", "EARTrackingState::Tracking" },
		{ "Tracking.ToolTip", "Currently tracking." },
		{ "Unknown.Comment", "/** Unknown tracking state */" },
		{ "Unknown.Name", "EARTrackingState::Unknown" },
		{ "Unknown.ToolTip", "Unknown tracking state" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARTrackingState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARTrackingState",
		"EARTrackingState",
		Z_Construct_UEnum_AugmentedReality_EARTrackingState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARTrackingState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARTrackingState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARTrackingState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingState()
	{
		if (!Z_Registration_Info_UEnum_EARTrackingState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARTrackingState.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARTrackingState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARTrackingState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARCaptureType;
	static UEnum* EARCaptureType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARCaptureType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARCaptureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARCaptureType, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARCaptureType"));
		}
		return Z_Registration_Info_UEnum_EARCaptureType.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARCaptureType>()
	{
		return EARCaptureType_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARCaptureType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARCaptureType_Statics::Enumerators[] = {
		{ "EARCaptureType::Camera", (int64)EARCaptureType::Camera },
		{ "EARCaptureType::QRCode", (int64)EARCaptureType::QRCode },
		{ "EARCaptureType::SpatialMapping", (int64)EARCaptureType::SpatialMapping },
		{ "EARCaptureType::SceneUnderstanding", (int64)EARCaptureType::SceneUnderstanding },
		{ "EARCaptureType::HandMesh", (int64)EARCaptureType::HandMesh },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARCaptureType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Camera.Comment", "/** Camera Capture */" },
		{ "Camera.Name", "EARCaptureType::Camera" },
		{ "Camera.ToolTip", "Camera Capture" },
		{ "Category", "AR AugmentedReality" },
		{ "Experimental", "" },
		{ "HandMesh.Comment", "/** Capture a mesh around the player's hands */" },
		{ "HandMesh.Name", "EARCaptureType::HandMesh" },
		{ "HandMesh.ToolTip", "Capture a mesh around the player's hands" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "QRCode.Comment", "/** QR Code Capture. */" },
		{ "QRCode.Name", "EARCaptureType::QRCode" },
		{ "QRCode.ToolTip", "QR Code Capture." },
		{ "SceneUnderstanding.Comment", "/** Capture detailed information about the scene with all surfaces like walls, floors and so on*/" },
		{ "SceneUnderstanding.Name", "EARCaptureType::SceneUnderstanding" },
		{ "SceneUnderstanding.ToolTip", "Capture detailed information about the scene with all surfaces like walls, floors and so on" },
		{ "SpatialMapping.Comment", "/** Spatial mapping so the app can selectively turn off discovering surfaces */" },
		{ "SpatialMapping.Name", "EARCaptureType::SpatialMapping" },
		{ "SpatialMapping.ToolTip", "Spatial mapping so the app can selectively turn off discovering surfaces" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARCaptureType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARCaptureType",
		"EARCaptureType",
		Z_Construct_UEnum_AugmentedReality_EARCaptureType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARCaptureType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARCaptureType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARCaptureType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARCaptureType()
	{
		if (!Z_Registration_Info_UEnum_EARCaptureType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARCaptureType.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARCaptureType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARCaptureType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARLineTraceChannels;
	static UEnum* EARLineTraceChannels_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARLineTraceChannels.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARLineTraceChannels.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARLineTraceChannels"));
		}
		return Z_Registration_Info_UEnum_EARLineTraceChannels.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARLineTraceChannels>()
	{
		return EARLineTraceChannels_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels_Statics::Enumerators[] = {
		{ "EARLineTraceChannels::None", (int64)EARLineTraceChannels::None },
		{ "EARLineTraceChannels::FeaturePoint", (int64)EARLineTraceChannels::FeaturePoint },
		{ "EARLineTraceChannels::GroundPlane", (int64)EARLineTraceChannels::GroundPlane },
		{ "EARLineTraceChannels::PlaneUsingExtent", (int64)EARLineTraceChannels::PlaneUsingExtent },
		{ "EARLineTraceChannels::PlaneUsingBoundaryPolygon", (int64)EARLineTraceChannels::PlaneUsingBoundaryPolygon },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality|Trace Result" },
		{ "Comment", "/**\n * Channels that let users select which kind of tracked geometry to trace against.\n */" },
		{ "FeaturePoint.Comment", "/** Trace against points that the AR system considers significant . */" },
		{ "FeaturePoint.Name", "EARLineTraceChannels::FeaturePoint" },
		{ "FeaturePoint.ToolTip", "Trace against points that the AR system considers significant ." },
		{ "GroundPlane.Comment", "/** Trace against estimated plane that does not have an associated tracked geometry. */" },
		{ "GroundPlane.Name", "EARLineTraceChannels::GroundPlane" },
		{ "GroundPlane.ToolTip", "Trace against estimated plane that does not have an associated tracked geometry." },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "None.Name", "EARLineTraceChannels::None" },
		{ "PlaneUsingBoundaryPolygon.Comment", "/** Trace against any plane tracked geometries using the boundary polygon. */" },
		{ "PlaneUsingBoundaryPolygon.Name", "EARLineTraceChannels::PlaneUsingBoundaryPolygon" },
		{ "PlaneUsingBoundaryPolygon.ToolTip", "Trace against any plane tracked geometries using the boundary polygon." },
		{ "PlaneUsingExtent.Comment", "/** Trace against any plane tracked geometries using Center and Extent. */" },
		{ "PlaneUsingExtent.Name", "EARLineTraceChannels::PlaneUsingExtent" },
		{ "PlaneUsingExtent.ToolTip", "Trace against any plane tracked geometries using Center and Extent." },
		{ "ToolTip", "Channels that let users select which kind of tracked geometry to trace against." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARLineTraceChannels",
		"EARLineTraceChannels",
		Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels()
	{
		if (!Z_Registration_Info_UEnum_EARLineTraceChannels.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARLineTraceChannels.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARLineTraceChannels.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARTrackingQuality;
	static UEnum* EARTrackingQuality_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARTrackingQuality.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARTrackingQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARTrackingQuality, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARTrackingQuality"));
		}
		return Z_Registration_Info_UEnum_EARTrackingQuality.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARTrackingQuality>()
	{
		return EARTrackingQuality_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARTrackingQuality_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARTrackingQuality_Statics::Enumerators[] = {
		{ "EARTrackingQuality::NotTracking", (int64)EARTrackingQuality::NotTracking },
		{ "EARTrackingQuality::OrientationOnly", (int64)EARTrackingQuality::OrientationOnly },
		{ "EARTrackingQuality::OrientationAndPosition", (int64)EARTrackingQuality::OrientationAndPosition },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARTrackingQuality_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "NotTracking.Comment", "/** The tracking quality is not available. */" },
		{ "NotTracking.Name", "EARTrackingQuality::NotTracking" },
		{ "NotTracking.ToolTip", "The tracking quality is not available." },
		{ "OrientationAndPosition.Comment", "/** The tracking quality is good. */" },
		{ "OrientationAndPosition.Name", "EARTrackingQuality::OrientationAndPosition" },
		{ "OrientationAndPosition.ToolTip", "The tracking quality is good." },
		{ "OrientationOnly.Comment", "/** The tracking quality is limited, relying only on the device's motion. */" },
		{ "OrientationOnly.Name", "EARTrackingQuality::OrientationOnly" },
		{ "OrientationOnly.ToolTip", "The tracking quality is limited, relying only on the device's motion." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARTrackingQuality_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARTrackingQuality",
		"EARTrackingQuality",
		Z_Construct_UEnum_AugmentedReality_EARTrackingQuality_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARTrackingQuality_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARTrackingQuality_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARTrackingQuality_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingQuality()
	{
		if (!Z_Registration_Info_UEnum_EARTrackingQuality.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARTrackingQuality.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARTrackingQuality_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARTrackingQuality.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARTrackingQualityReason;
	static UEnum* EARTrackingQualityReason_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARTrackingQualityReason.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARTrackingQualityReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARTrackingQualityReason"));
		}
		return Z_Registration_Info_UEnum_EARTrackingQualityReason.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARTrackingQualityReason>()
	{
		return EARTrackingQualityReason_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason_Statics::Enumerators[] = {
		{ "EARTrackingQualityReason::None", (int64)EARTrackingQualityReason::None },
		{ "EARTrackingQualityReason::Initializing", (int64)EARTrackingQualityReason::Initializing },
		{ "EARTrackingQualityReason::Relocalizing", (int64)EARTrackingQualityReason::Relocalizing },
		{ "EARTrackingQualityReason::ExcessiveMotion", (int64)EARTrackingQualityReason::ExcessiveMotion },
		{ "EARTrackingQualityReason::InsufficientFeatures", (int64)EARTrackingQualityReason::InsufficientFeatures },
		{ "EARTrackingQualityReason::InsufficientLight", (int64)EARTrackingQualityReason::InsufficientLight },
		{ "EARTrackingQualityReason::BadState", (int64)EARTrackingQualityReason::BadState },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason_Statics::Enum_MetaDataParams[] = {
		{ "BadState.Comment", "/** Tracking lost due to bad internal state. Please try restarting the AR experience. */" },
		{ "BadState.Name", "EARTrackingQualityReason::BadState" },
		{ "BadState.ToolTip", "Tracking lost due to bad internal state. Please try restarting the AR experience." },
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality" },
		{ "ExcessiveMotion.Comment", "/** The device is moving too fast for accurate image-based position tracking. */" },
		{ "ExcessiveMotion.Name", "EARTrackingQualityReason::ExcessiveMotion" },
		{ "ExcessiveMotion.ToolTip", "The device is moving too fast for accurate image-based position tracking." },
		{ "Experimental", "" },
		{ "Initializing.Comment", "/** The AR session has not yet gathered enough camera or motion data to provide tracking information. */" },
		{ "Initializing.Name", "EARTrackingQualityReason::Initializing" },
		{ "Initializing.ToolTip", "The AR session has not yet gathered enough camera or motion data to provide tracking information." },
		{ "InsufficientFeatures.Comment", "/** The scene visible to the camera does not contain enough distinguishable features for image-based position tracking. */" },
		{ "InsufficientFeatures.Name", "EARTrackingQualityReason::InsufficientFeatures" },
		{ "InsufficientFeatures.ToolTip", "The scene visible to the camera does not contain enough distinguishable features for image-based position tracking." },
		{ "InsufficientLight.Comment", "/** Tracking lost due to poor lighting conditions. Please move to a more brightly lit area */" },
		{ "InsufficientLight.Name", "EARTrackingQualityReason::InsufficientLight" },
		{ "InsufficientLight.ToolTip", "Tracking lost due to poor lighting conditions. Please move to a more brightly lit area" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "None.Comment", "/** Current Tracking is not limited */" },
		{ "None.Name", "EARTrackingQualityReason::None" },
		{ "None.ToolTip", "Current Tracking is not limited" },
		{ "Relocalizing.Comment", "/** The AR session is attempting to resume after an interruption. */" },
		{ "Relocalizing.Name", "EARTrackingQualityReason::Relocalizing" },
		{ "Relocalizing.ToolTip", "The AR session is attempting to resume after an interruption." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARTrackingQualityReason",
		"EARTrackingQualityReason",
		Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason()
	{
		if (!Z_Registration_Info_UEnum_EARTrackingQualityReason.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARTrackingQualityReason.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARTrackingQualityReason.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARSessionStatus;
	static UEnum* EARSessionStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARSessionStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARSessionStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSessionStatus, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARSessionStatus"));
		}
		return Z_Registration_Info_UEnum_EARSessionStatus.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSessionStatus>()
	{
		return EARSessionStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARSessionStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARSessionStatus_Statics::Enumerators[] = {
		{ "EARSessionStatus::NotStarted", (int64)EARSessionStatus::NotStarted },
		{ "EARSessionStatus::Running", (int64)EARSessionStatus::Running },
		{ "EARSessionStatus::NotSupported", (int64)EARSessionStatus::NotSupported },
		{ "EARSessionStatus::FatalError", (int64)EARSessionStatus::FatalError },
		{ "EARSessionStatus::PermissionNotGranted", (int64)EARSessionStatus::PermissionNotGranted },
		{ "EARSessionStatus::UnsupportedConfiguration", (int64)EARSessionStatus::UnsupportedConfiguration },
		{ "EARSessionStatus::Other", (int64)EARSessionStatus::Other },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARSessionStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes the current status of the AR session.\n */" },
		{ "FatalError.Comment", "/** The AR session encountered fatal error; the developer should call `StartARSession()` to re-start the AR subsystem. */" },
		{ "FatalError.Name", "EARSessionStatus::FatalError" },
		{ "FatalError.ToolTip", "The AR session encountered fatal error; the developer should call `StartARSession()` to re-start the AR subsystem." },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "NotStarted.Comment", "/** Unreal AR session has not started yet.*/" },
		{ "NotStarted.Name", "EARSessionStatus::NotStarted" },
		{ "NotStarted.ToolTip", "Unreal AR session has not started yet." },
		{ "NotSupported.Comment", "/** Unreal AR session failed to start due to the AR subsystem not being supported by the device. */" },
		{ "NotSupported.Name", "EARSessionStatus::NotSupported" },
		{ "NotSupported.ToolTip", "Unreal AR session failed to start due to the AR subsystem not being supported by the device." },
		{ "Other.Comment", "/** Session isn't running due to unknown reason; @see FARSessionStatus::AdditionalInfo for more information */" },
		{ "Other.Name", "EARSessionStatus::Other" },
		{ "Other.ToolTip", "Session isn't running due to unknown reason; @see FARSessionStatus::AdditionalInfo for more information" },
		{ "PermissionNotGranted.Comment", "/** AR session failed to start because it lacks the necessary permission (likely access to the camera or the gyroscope). */" },
		{ "PermissionNotGranted.Name", "EARSessionStatus::PermissionNotGranted" },
		{ "PermissionNotGranted.ToolTip", "AR session failed to start because it lacks the necessary permission (likely access to the camera or the gyroscope)." },
		{ "Running.Comment", "/** Unreal AR session is running. */" },
		{ "Running.Name", "EARSessionStatus::Running" },
		{ "Running.ToolTip", "Unreal AR session is running." },
		{ "ScriptName", "ARSessionStatusType" },
		{ "ToolTip", "Describes the current status of the AR session." },
		{ "UnsupportedConfiguration.Comment", "/** AR session failed to start because the configuration isn't supported. */" },
		{ "UnsupportedConfiguration.Name", "EARSessionStatus::UnsupportedConfiguration" },
		{ "UnsupportedConfiguration.ToolTip", "AR session failed to start because the configuration isn't supported." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARSessionStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARSessionStatus",
		"EARSessionStatus",
		Z_Construct_UEnum_AugmentedReality_EARSessionStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARSessionStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARSessionStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARSessionStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionStatus()
	{
		if (!Z_Registration_Info_UEnum_EARSessionStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARSessionStatus.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARSessionStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARSessionStatus.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARWorldMappingState;
	static UEnum* EARWorldMappingState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARWorldMappingState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARWorldMappingState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARWorldMappingState, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARWorldMappingState"));
		}
		return Z_Registration_Info_UEnum_EARWorldMappingState.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARWorldMappingState>()
	{
		return EARWorldMappingState_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARWorldMappingState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARWorldMappingState_Statics::Enumerators[] = {
		{ "EARWorldMappingState::NotAvailable", (int64)EARWorldMappingState::NotAvailable },
		{ "EARWorldMappingState::StillMappingNotRelocalizable", (int64)EARWorldMappingState::StillMappingNotRelocalizable },
		{ "EARWorldMappingState::StillMappingRelocalizable", (int64)EARWorldMappingState::StillMappingRelocalizable },
		{ "EARWorldMappingState::Mapped", (int64)EARWorldMappingState::Mapped },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARWorldMappingState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/** Gives feedback as to whether the AR data can be saved and relocalized or not */" },
		{ "Experimental", "" },
		{ "Mapped.Comment", "/** World mapping has mapped the area and is fully relocalizable */" },
		{ "Mapped.Name", "EARWorldMappingState::Mapped" },
		{ "Mapped.ToolTip", "World mapping has mapped the area and is fully relocalizable" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "NotAvailable.Comment", "/** World mapping is not available */" },
		{ "NotAvailable.Name", "EARWorldMappingState::NotAvailable" },
		{ "NotAvailable.ToolTip", "World mapping is not available" },
		{ "StillMappingNotRelocalizable.Comment", "/** World mapping is still in progress but without enough data for relocalization */" },
		{ "StillMappingNotRelocalizable.Name", "EARWorldMappingState::StillMappingNotRelocalizable" },
		{ "StillMappingNotRelocalizable.ToolTip", "World mapping is still in progress but without enough data for relocalization" },
		{ "StillMappingRelocalizable.Comment", "/** World mapping is still in progress but there is enough data captured for relocalization */" },
		{ "StillMappingRelocalizable.Name", "EARWorldMappingState::StillMappingRelocalizable" },
		{ "StillMappingRelocalizable.ToolTip", "World mapping is still in progress but there is enough data captured for relocalization" },
		{ "ToolTip", "Gives feedback as to whether the AR data can be saved and relocalized or not" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARWorldMappingState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARWorldMappingState",
		"EARWorldMappingState",
		Z_Construct_UEnum_AugmentedReality_EARWorldMappingState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARWorldMappingState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARWorldMappingState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARWorldMappingState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARWorldMappingState()
	{
		if (!Z_Registration_Info_UEnum_EARWorldMappingState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARWorldMappingState.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARWorldMappingState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARWorldMappingState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARPlaneOrientation;
	static UEnum* EARPlaneOrientation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARPlaneOrientation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARPlaneOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARPlaneOrientation"));
		}
		return Z_Registration_Info_UEnum_EARPlaneOrientation.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARPlaneOrientation>()
	{
		return EARPlaneOrientation_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation_Statics::Enumerators[] = {
		{ "EARPlaneOrientation::Horizontal", (int64)EARPlaneOrientation::Horizontal },
		{ "EARPlaneOrientation::Vertical", (int64)EARPlaneOrientation::Vertical },
		{ "EARPlaneOrientation::Diagonal", (int64)EARPlaneOrientation::Diagonal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes the tracked plane orientation */" },
		{ "Diagonal.Comment", "/** For AR systems that can match planes to slopes */" },
		{ "Diagonal.Name", "EARPlaneOrientation::Diagonal" },
		{ "Diagonal.ToolTip", "For AR systems that can match planes to slopes" },
		{ "Horizontal.Name", "EARPlaneOrientation::Horizontal" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "Describes the tracked plane orientation" },
		{ "Vertical.Name", "EARPlaneOrientation::Vertical" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARPlaneOrientation",
		"EARPlaneOrientation",
		Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation()
	{
		if (!Z_Registration_Info_UEnum_EARPlaneOrientation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARPlaneOrientation.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARPlaneOrientation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARObjectClassification;
	static UEnum* EARObjectClassification_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARObjectClassification.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARObjectClassification.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARObjectClassification, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARObjectClassification"));
		}
		return Z_Registration_Info_UEnum_EARObjectClassification.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARObjectClassification>()
	{
		return EARObjectClassification_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARObjectClassification_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARObjectClassification_Statics::Enumerators[] = {
		{ "EARObjectClassification::NotApplicable", (int64)EARObjectClassification::NotApplicable },
		{ "EARObjectClassification::Unknown", (int64)EARObjectClassification::Unknown },
		{ "EARObjectClassification::Wall", (int64)EARObjectClassification::Wall },
		{ "EARObjectClassification::Ceiling", (int64)EARObjectClassification::Ceiling },
		{ "EARObjectClassification::Floor", (int64)EARObjectClassification::Floor },
		{ "EARObjectClassification::Table", (int64)EARObjectClassification::Table },
		{ "EARObjectClassification::Seat", (int64)EARObjectClassification::Seat },
		{ "EARObjectClassification::Face", (int64)EARObjectClassification::Face },
		{ "EARObjectClassification::Image", (int64)EARObjectClassification::Image },
		{ "EARObjectClassification::World", (int64)EARObjectClassification::World },
		{ "EARObjectClassification::SceneObject", (int64)EARObjectClassification::SceneObject },
		{ "EARObjectClassification::HandMesh", (int64)EARObjectClassification::HandMesh },
		{ "EARObjectClassification::Door", (int64)EARObjectClassification::Door },
		{ "EARObjectClassification::Window", (int64)EARObjectClassification::Window },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARObjectClassification_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Ceiling.Comment", "/** A horizontal plane that is the ceiling */" },
		{ "Ceiling.Name", "EARObjectClassification::Ceiling" },
		{ "Ceiling.ToolTip", "A horizontal plane that is the ceiling" },
		{ "Comment", "/** Indicates what type of object the scene understanding system thinks it is */" },
		{ "Door.Comment", "/** A door */" },
		{ "Door.Name", "EARObjectClassification::Door" },
		{ "Door.ToolTip", "A door" },
		{ "Face.Comment", "/** A human face */" },
		{ "Face.Name", "EARObjectClassification::Face" },
		{ "Face.ToolTip", "A human face" },
		{ "Floor.Comment", "/** A horizontal plane that is the floor */" },
		{ "Floor.Name", "EARObjectClassification::Floor" },
		{ "Floor.ToolTip", "A horizontal plane that is the floor" },
		{ "HandMesh.Comment", "/** A user's hand */" },
		{ "HandMesh.Name", "EARObjectClassification::HandMesh" },
		{ "HandMesh.ToolTip", "A user's hand" },
		{ "Image.Comment", "/** A recognized image in the scene */" },
		{ "Image.Name", "EARObjectClassification::Image" },
		{ "Image.ToolTip", "A recognized image in the scene" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "NotApplicable.Comment", "/** Not applicable to scene understanding */" },
		{ "NotApplicable.Name", "EARObjectClassification::NotApplicable" },
		{ "NotApplicable.ToolTip", "Not applicable to scene understanding" },
		{ "SceneObject.Comment", "/** A closed mesh that was identified in the scene */" },
		{ "SceneObject.Name", "EARObjectClassification::SceneObject" },
		{ "SceneObject.ToolTip", "A closed mesh that was identified in the scene" },
		{ "Seat.Comment", "/** A horizontal plane that is a seat */" },
		{ "Seat.Name", "EARObjectClassification::Seat" },
		{ "Seat.ToolTip", "A horizontal plane that is a seat" },
		{ "Table.Comment", "/** A horizontal plane that is a table */" },
		{ "Table.Name", "EARObjectClassification::Table" },
		{ "Table.ToolTip", "A horizontal plane that is a table" },
		{ "ToolTip", "Indicates what type of object the scene understanding system thinks it is" },
		{ "Unknown.Comment", "/** Scene understanding doesn't know what this is */" },
		{ "Unknown.Name", "EARObjectClassification::Unknown" },
		{ "Unknown.ToolTip", "Scene understanding doesn't know what this is" },
		{ "Wall.Comment", "/** A vertical plane that is a wall */" },
		{ "Wall.Name", "EARObjectClassification::Wall" },
		{ "Wall.ToolTip", "A vertical plane that is a wall" },
		{ "Window.Comment", "/** A window */" },
		{ "Window.Name", "EARObjectClassification::Window" },
		{ "Window.ToolTip", "A window" },
		{ "World.Comment", "/** A chunk of mesh that does not map to a specific object type but is seen by the AR system */" },
		{ "World.Name", "EARObjectClassification::World" },
		{ "World.ToolTip", "A chunk of mesh that does not map to a specific object type but is seen by the AR system" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARObjectClassification_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARObjectClassification",
		"EARObjectClassification",
		Z_Construct_UEnum_AugmentedReality_EARObjectClassification_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARObjectClassification_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARObjectClassification_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARObjectClassification_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARObjectClassification()
	{
		if (!Z_Registration_Info_UEnum_EARObjectClassification.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARObjectClassification.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARObjectClassification_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARObjectClassification.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARSpatialMeshUsageFlags;
	static UEnum* EARSpatialMeshUsageFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARSpatialMeshUsageFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARSpatialMeshUsageFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSpatialMeshUsageFlags, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARSpatialMeshUsageFlags"));
		}
		return Z_Registration_Info_UEnum_EARSpatialMeshUsageFlags.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSpatialMeshUsageFlags>()
	{
		return EARSpatialMeshUsageFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARSpatialMeshUsageFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARSpatialMeshUsageFlags_Statics::Enumerators[] = {
		{ "EARSpatialMeshUsageFlags::NotApplicable", (int64)EARSpatialMeshUsageFlags::NotApplicable },
		{ "EARSpatialMeshUsageFlags::Visible", (int64)EARSpatialMeshUsageFlags::Visible },
		{ "EARSpatialMeshUsageFlags::Collision", (int64)EARSpatialMeshUsageFlags::Collision },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARSpatialMeshUsageFlags_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Collision.Comment", "/** This mesh should be used when placing objects on real world surfaces.  This must be set to use physics with this mesh. */" },
		{ "Collision.Name", "EARSpatialMeshUsageFlags::Collision" },
		{ "Collision.ToolTip", "This mesh should be used when placing objects on real world surfaces.  This must be set to use physics with this mesh." },
		{ "Comment", "/** Indicates how the spatial mesh should be visualized */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "NotApplicable.Comment", "/** Not applicable to scene understanding. */" },
		{ "NotApplicable.Name", "EARSpatialMeshUsageFlags::NotApplicable" },
		{ "NotApplicable.ToolTip", "Not applicable to scene understanding." },
		{ "ToolTip", "Indicates how the spatial mesh should be visualized" },
		{ "Visible.Comment", "/** This mesh should have a visible material applied to it. */" },
		{ "Visible.Name", "EARSpatialMeshUsageFlags::Visible" },
		{ "Visible.ToolTip", "This mesh should have a visible material applied to it." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARSpatialMeshUsageFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARSpatialMeshUsageFlags",
		"EARSpatialMeshUsageFlags",
		Z_Construct_UEnum_AugmentedReality_EARSpatialMeshUsageFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARSpatialMeshUsageFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARSpatialMeshUsageFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARSpatialMeshUsageFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARSpatialMeshUsageFlags()
	{
		if (!Z_Registration_Info_UEnum_EARSpatialMeshUsageFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARSpatialMeshUsageFlags.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARSpatialMeshUsageFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARSpatialMeshUsageFlags.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARJointTransformSpace;
	static UEnum* EARJointTransformSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARJointTransformSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARJointTransformSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARJointTransformSpace, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARJointTransformSpace"));
		}
		return Z_Registration_Info_UEnum_EARJointTransformSpace.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARJointTransformSpace>()
	{
		return EARJointTransformSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARJointTransformSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARJointTransformSpace_Statics::Enumerators[] = {
		{ "EARJointTransformSpace::Model", (int64)EARJointTransformSpace::Model },
		{ "EARJointTransformSpace::ParentJoint", (int64)EARJointTransformSpace::ParentJoint },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARJointTransformSpace_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes the potential spaces in which the join transform can be defined with AR pose tracking */" },
		{ "Model.Comment", "/**\n\x09 * Joint transform is relative to the origin of the model space\n\x09 * which is usually attached to a particular joint\n\x09 * such as the hip\n\x09 */" },
		{ "Model.Name", "EARJointTransformSpace::Model" },
		{ "Model.ToolTip", "Joint transform is relative to the origin of the model space\nwhich is usually attached to a particular joint\nsuch as the hip" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ParentJoint.Comment", "/**\n\x09* Joint transform is relative to its parent\n\x09*/" },
		{ "ParentJoint.Name", "EARJointTransformSpace::ParentJoint" },
		{ "ParentJoint.ToolTip", "Joint transform is relative to its parent" },
		{ "ToolTip", "Describes the potential spaces in which the join transform can be defined with AR pose tracking" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARJointTransformSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARJointTransformSpace",
		"EARJointTransformSpace",
		Z_Construct_UEnum_AugmentedReality_EARJointTransformSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARJointTransformSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARJointTransformSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARJointTransformSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARJointTransformSpace()
	{
		if (!Z_Registration_Info_UEnum_EARJointTransformSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARJointTransformSpace.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARJointTransformSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARJointTransformSpace.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARAltitudeSource;
	static UEnum* EARAltitudeSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARAltitudeSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARAltitudeSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARAltitudeSource, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARAltitudeSource"));
		}
		return Z_Registration_Info_UEnum_EARAltitudeSource.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARAltitudeSource>()
	{
		return EARAltitudeSource_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARAltitudeSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARAltitudeSource_Statics::Enumerators[] = {
		{ "EARAltitudeSource::Precise", (int64)EARAltitudeSource::Precise },
		{ "EARAltitudeSource::Coarse", (int64)EARAltitudeSource::Coarse },
		{ "EARAltitudeSource::UserDefined", (int64)EARAltitudeSource::UserDefined },
		{ "EARAltitudeSource::Unknown", (int64)EARAltitudeSource::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARAltitudeSource_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Coarse.Comment", "// The framework sets the altitude using a coarse digital-elevation model.\n" },
		{ "Coarse.Name", "EARAltitudeSource::Coarse" },
		{ "Coarse.ToolTip", "The framework sets the altitude using a coarse digital-elevation model." },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "Precise.Comment", "// The framework sets the altitude using a high-resolution digital-elevation model.\n" },
		{ "Precise.Name", "EARAltitudeSource::Precise" },
		{ "Precise.ToolTip", "The framework sets the altitude using a high-resolution digital-elevation model." },
		{ "Unknown.Comment", "// Altitude is not yet set.\n" },
		{ "Unknown.Name", "EARAltitudeSource::Unknown" },
		{ "Unknown.ToolTip", "Altitude is not yet set." },
		{ "UserDefined.Comment", "// The app defines the alitude.\n" },
		{ "UserDefined.Name", "EARAltitudeSource::UserDefined" },
		{ "UserDefined.ToolTip", "The app defines the alitude." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARAltitudeSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARAltitudeSource",
		"EARAltitudeSource",
		Z_Construct_UEnum_AugmentedReality_EARAltitudeSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARAltitudeSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARAltitudeSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARAltitudeSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARAltitudeSource()
	{
		if (!Z_Registration_Info_UEnum_EARAltitudeSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARAltitudeSource.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARAltitudeSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARAltitudeSource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARSessionStatus;
class UScriptStruct* FARSessionStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARSessionStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARSessionStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARSessionStatus, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARSessionStatus"));
	}
	return Z_Registration_Info_UScriptStruct_ARSessionStatus.OuterSingleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARSessionStatus>()
{
	return FARSessionStatus::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARSessionStatus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSessionStatus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** The current state of the AR subsystem including an optional explanation string. */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The current state of the AR subsystem including an optional explanation string." },
	};
#endif
	void* Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARSessionStatus>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_AdditionalInfo_MetaData[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/** Optional information about the current status of the system. */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "Optional information about the current status of the system." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_AdditionalInfo = { "AdditionalInfo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARSessionStatus, AdditionalInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_AdditionalInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_AdditionalInfo_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/** The current status of the AR subsystem. */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The current status of the AR subsystem." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARSessionStatus, Status), Z_Construct_UEnum_AugmentedReality_EARSessionStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_Status_MetaData)) }; // 3727938175
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARSessionStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_AdditionalInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_Status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewProp_Status,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARSessionStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARSessionStatus",
		sizeof(FARSessionStatus),
		alignof(FARSessionStatus),
		Z_Construct_UScriptStruct_FARSessionStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSessionStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARSessionStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSessionStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARSessionStatus()
	{
		if (!Z_Registration_Info_UScriptStruct_ARSessionStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARSessionStatus.InnerSingleton, Z_Construct_UScriptStruct_FARSessionStatus_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARSessionStatus.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics
	{
		struct _Script_AugmentedReality_eventOnARTrackingStateChanged_Parms
		{
			EARTrackingState NewTrackingState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewTrackingState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTrackingState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::NewProp_NewTrackingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::NewProp_NewTrackingState = { "NewTrackingState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AugmentedReality_eventOnARTrackingStateChanged_Parms, NewTrackingState), Z_Construct_UEnum_AugmentedReality_EARTrackingState, METADATA_PARAMS(nullptr, 0) }; // 2124127308
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::NewProp_NewTrackingState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::NewProp_NewTrackingState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality, nullptr, "OnARTrackingStateChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::_Script_AugmentedReality_eventOnARTrackingStateChanged_Parms), Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnARTrackingStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnARTrackingStateChanged, EARTrackingState NewTrackingState)
{
	struct _Script_AugmentedReality_eventOnARTrackingStateChanged_Parms
	{
		EARTrackingState NewTrackingState;
	};
	_Script_AugmentedReality_eventOnARTrackingStateChanged_Parms Parms;
	Parms.NewTrackingState=NewTrackingState;
	OnARTrackingStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics
	{
		struct _Script_AugmentedReality_eventOnARTransformUpdated_Parms
		{
			FTransform OldToNewTransform;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldToNewTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldToNewTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::NewProp_OldToNewTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::NewProp_OldToNewTransform = { "OldToNewTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AugmentedReality_eventOnARTransformUpdated_Parms, OldToNewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::NewProp_OldToNewTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::NewProp_OldToNewTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::NewProp_OldToNewTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality, nullptr, "OnARTransformUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::_Script_AugmentedReality_eventOnARTransformUpdated_Parms), Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnARTransformUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnARTransformUpdated, FTransform const& OldToNewTransform)
{
	struct _Script_AugmentedReality_eventOnARTransformUpdated_Parms
	{
		FTransform OldToNewTransform;
	};
	_Script_AugmentedReality_eventOnARTransformUpdated_Parms Parms;
	Parms.OldToNewTransform=OldToNewTransform;
	OnARTransformUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UARTypesDummyClass::StaticRegisterNativesUARTypesDummyClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARTypesDummyClass);
	UClass* Z_Construct_UClass_UARTypesDummyClass_NoRegister()
	{
		return UARTypesDummyClass::StaticClass();
	}
	struct Z_Construct_UClass_UARTypesDummyClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTypesDummyClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTypesDummyClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARTypes.h" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTypesDummyClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTypesDummyClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARTypesDummyClass_Statics::ClassParams = {
		&UARTypesDummyClass::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UARTypesDummyClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARTypesDummyClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTypesDummyClass()
	{
		if (!Z_Registration_Info_UClass_UARTypesDummyClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARTypesDummyClass.OuterSingleton, Z_Construct_UClass_UARTypesDummyClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARTypesDummyClass.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTypesDummyClass>()
	{
		return UARTypesDummyClass::StaticClass();
	}
	UARTypesDummyClass::UARTypesDummyClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTypesDummyClass);
	UARTypesDummyClass::~UARTypesDummyClass() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARCandidateImageOrientation;
	static UEnum* EARCandidateImageOrientation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARCandidateImageOrientation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARCandidateImageOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARCandidateImageOrientation"));
		}
		return Z_Registration_Info_UEnum_EARCandidateImageOrientation.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARCandidateImageOrientation>()
	{
		return EARCandidateImageOrientation_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation_Statics::Enumerators[] = {
		{ "EARCandidateImageOrientation::Landscape", (int64)EARCandidateImageOrientation::Landscape },
		{ "EARCandidateImageOrientation::Portrait", (int64)EARCandidateImageOrientation::Portrait },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Tells the image detection code how to assume the image is oriented */" },
		{ "Landscape.Name", "EARCandidateImageOrientation::Landscape" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "Portrait.Name", "EARCandidateImageOrientation::Portrait" },
		{ "ToolTip", "Tells the image detection code how to assume the image is oriented" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARCandidateImageOrientation",
		"EARCandidateImageOrientation",
		Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation()
	{
		if (!Z_Registration_Info_UEnum_EARCandidateImageOrientation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARCandidateImageOrientation.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARCandidateImageOrientation.InnerSingleton;
	}
	DEFINE_FUNCTION(UARCandidateImage::execGetOrientation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARCandidateImageOrientation*)Z_Param__Result=P_THIS->GetOrientation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARCandidateImage::execGetPhysicalHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPhysicalHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARCandidateImage::execGetPhysicalWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPhysicalWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARCandidateImage::execGetFriendlyName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFriendlyName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARCandidateImage::execGetCandidateTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetCandidateTexture();
		P_NATIVE_END;
	}
	void UARCandidateImage::StaticRegisterNativesUARCandidateImage()
	{
		UClass* Class = UARCandidateImage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCandidateTexture", &UARCandidateImage::execGetCandidateTexture },
			{ "GetFriendlyName", &UARCandidateImage::execGetFriendlyName },
			{ "GetOrientation", &UARCandidateImage::execGetOrientation },
			{ "GetPhysicalHeight", &UARCandidateImage::execGetPhysicalHeight },
			{ "GetPhysicalWidth", &UARCandidateImage::execGetPhysicalWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics
	{
		struct ARCandidateImage_eventGetCandidateTexture_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARCandidateImage_eventGetCandidateTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Image Detection" },
		{ "Comment", "/** @see CandidateTexture */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "@see CandidateTexture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCandidateImage, nullptr, "GetCandidateTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics::ARCandidateImage_eventGetCandidateTexture_Parms), Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics
	{
		struct ARCandidateImage_eventGetFriendlyName_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARCandidateImage_eventGetFriendlyName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Image Detection" },
		{ "Comment", "/** @see FriendlyName */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "@see FriendlyName" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCandidateImage, nullptr, "GetFriendlyName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::ARCandidateImage_eventGetFriendlyName_Parms), Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCandidateImage_GetFriendlyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics
	{
		struct ARCandidateImage_eventGetOrientation_Parms
		{
			EARCandidateImageOrientation ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARCandidateImage_eventGetOrientation_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation, METADATA_PARAMS(nullptr, 0) }; // 2613892628
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Image Detection" },
		{ "Comment", "/** @see Orientation */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "@see Orientation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCandidateImage, nullptr, "GetOrientation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::ARCandidateImage_eventGetOrientation_Parms), Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCandidateImage_GetOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics
	{
		struct ARCandidateImage_eventGetPhysicalHeight_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARCandidateImage_eventGetPhysicalHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Image Detection" },
		{ "Comment", "/** @see Height */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "@see Height" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCandidateImage, nullptr, "GetPhysicalHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics::ARCandidateImage_eventGetPhysicalHeight_Parms), Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics
	{
		struct ARCandidateImage_eventGetPhysicalWidth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARCandidateImage_eventGetPhysicalWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Image Detection" },
		{ "Comment", "/** @see Width */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "@see Width" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCandidateImage, nullptr, "GetPhysicalWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics::ARCandidateImage_eventGetPhysicalWidth_Parms), Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARCandidateImage);
	UClass* Z_Construct_UClass_UARCandidateImage_NoRegister()
	{
		return UARCandidateImage::StaticClass();
	}
	struct Z_Construct_UClass_UARCandidateImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CandidateTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CandidateTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Orientation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARCandidateImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARCandidateImage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture, "GetCandidateTexture" }, // 3201022328
		{ &Z_Construct_UFunction_UARCandidateImage_GetFriendlyName, "GetFriendlyName" }, // 2426545982
		{ &Z_Construct_UFunction_UARCandidateImage_GetOrientation, "GetOrientation" }, // 991267834
		{ &Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight, "GetPhysicalHeight" }, // 1307846954
		{ &Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth, "GetPhysicalWidth" }, // 2532588798
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCandidateImage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** An asset that points to an image to be detected in a scene and provides the size of the object in real life */" },
		{ "IncludePath", "ARTypes.h" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "An asset that points to an image to be detected in a scene and provides the size of the object in real life" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCandidateImage_Statics::NewProp_CandidateTexture_MetaData[] = {
		{ "Category", "AR Candidate Image" },
		{ "Comment", "/** The image to detect in scenes */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The image to detect in scenes" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UARCandidateImage_Statics::NewProp_CandidateTexture = { "CandidateTexture", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARCandidateImage, CandidateTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARCandidateImage_Statics::NewProp_CandidateTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARCandidateImage_Statics::NewProp_CandidateTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCandidateImage_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "Category", "AR Candidate Image" },
		{ "Comment", "/** The friendly name to report back when the image is detected in scenes */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The friendly name to report back when the image is detected in scenes" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UARCandidateImage_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARCandidateImage, FriendlyName), METADATA_PARAMS(Z_Construct_UClass_UARCandidateImage_Statics::NewProp_FriendlyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARCandidateImage_Statics::NewProp_FriendlyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "AR Candidate Image" },
		{ "Comment", "/** The physical width in centimeters of the object that this candidate image represents */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The physical width in centimeters of the object that this candidate image represents" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARCandidateImage, Width), METADATA_PARAMS(Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "AR Candidate Image" },
		{ "Comment", "/** The physical height in centimeters of the object that this candidate image represents. Ignored in ARCore */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The physical height in centimeters of the object that this candidate image represents. Ignored in ARCore" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARCandidateImage, Height), METADATA_PARAMS(Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Orientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "AR Candidate Image" },
		{ "Comment", "/** The orientation to treat the candidate image as. Ignored in ARCore */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The orientation to treat the candidate image as. Ignored in ARCore" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARCandidateImage, Orientation), Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation, METADATA_PARAMS(Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Orientation_MetaData)) }; // 2613892628
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARCandidateImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCandidateImage_Statics::NewProp_CandidateTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCandidateImage_Statics::NewProp_FriendlyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Orientation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCandidateImage_Statics::NewProp_Orientation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARCandidateImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARCandidateImage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARCandidateImage_Statics::ClassParams = {
		&UARCandidateImage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARCandidateImage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARCandidateImage_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARCandidateImage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARCandidateImage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARCandidateImage()
	{
		if (!Z_Registration_Info_UClass_UARCandidateImage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARCandidateImage.OuterSingleton, Z_Construct_UClass_UARCandidateImage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARCandidateImage.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARCandidateImage>()
	{
		return UARCandidateImage::StaticClass();
	}
	UARCandidateImage::UARCandidateImage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARCandidateImage);
	UARCandidateImage::~UARCandidateImage() {}
	DEFINE_FUNCTION(UARCandidateObject::execSetBoundingBox)
	{
		P_GET_STRUCT_REF(FBox,Z_Param_Out_InBoundingBox);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoundingBox(Z_Param_Out_InBoundingBox);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARCandidateObject::execGetBoundingBox)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=P_THIS->GetBoundingBox();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARCandidateObject::execSetFriendlyName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFriendlyName(Z_Param_NewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARCandidateObject::execGetFriendlyName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFriendlyName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARCandidateObject::execSetCandidateObjectData)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InCandidateObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCandidateObjectData(Z_Param_Out_InCandidateObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARCandidateObject::execGetCandidateObjectData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetCandidateObjectData();
		P_NATIVE_END;
	}
	void UARCandidateObject::StaticRegisterNativesUARCandidateObject()
	{
		UClass* Class = UARCandidateObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoundingBox", &UARCandidateObject::execGetBoundingBox },
			{ "GetCandidateObjectData", &UARCandidateObject::execGetCandidateObjectData },
			{ "GetFriendlyName", &UARCandidateObject::execGetFriendlyName },
			{ "SetBoundingBox", &UARCandidateObject::execSetBoundingBox },
			{ "SetCandidateObjectData", &UARCandidateObject::execSetCandidateObjectData },
			{ "SetFriendlyName", &UARCandidateObject::execSetFriendlyName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics
	{
		struct ARCandidateObject_eventGetBoundingBox_Parms
		{
			FBox ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARCandidateObject_eventGetBoundingBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Object Detection" },
		{ "Comment", "/** @see BoundingBox */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "@see BoundingBox" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCandidateObject, nullptr, "GetBoundingBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::ARCandidateObject_eventGetBoundingBox_Parms), Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCandidateObject_GetBoundingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics
	{
		struct ARCandidateObject_eventGetCandidateObjectData_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARCandidateObject_eventGetCandidateObjectData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Object Detection" },
		{ "Comment", "/** @see CandidateObjectData */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "@see CandidateObjectData" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCandidateObject, nullptr, "GetCandidateObjectData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::ARCandidateObject_eventGetCandidateObjectData_Parms), Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics
	{
		struct ARCandidateObject_eventGetFriendlyName_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARCandidateObject_eventGetFriendlyName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Object Detection" },
		{ "Comment", "/** @see FriendlyName */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "@see FriendlyName" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCandidateObject, nullptr, "GetFriendlyName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::ARCandidateObject_eventGetFriendlyName_Parms), Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCandidateObject_GetFriendlyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics
	{
		struct ARCandidateObject_eventSetBoundingBox_Parms
		{
			FBox InBoundingBox;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBoundingBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBoundingBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::NewProp_InBoundingBox_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::NewProp_InBoundingBox = { "InBoundingBox", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARCandidateObject_eventSetBoundingBox_Parms, InBoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::NewProp_InBoundingBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::NewProp_InBoundingBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::NewProp_InBoundingBox,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Object Detection" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCandidateObject, nullptr, "SetBoundingBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::ARCandidateObject_eventSetBoundingBox_Parms), Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCandidateObject_SetBoundingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics
	{
		struct ARCandidateObject_eventSetCandidateObjectData_Parms
		{
			TArray<uint8> InCandidateObject;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InCandidateObject_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCandidateObject_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InCandidateObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::NewProp_InCandidateObject_Inner = { "InCandidateObject", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::NewProp_InCandidateObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::NewProp_InCandidateObject = { "InCandidateObject", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARCandidateObject_eventSetCandidateObjectData_Parms, InCandidateObject), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::NewProp_InCandidateObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::NewProp_InCandidateObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::NewProp_InCandidateObject_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::NewProp_InCandidateObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Object Detection" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCandidateObject, nullptr, "SetCandidateObjectData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::ARCandidateObject_eventSetCandidateObjectData_Parms), Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARCandidateObject_SetFriendlyName_Statics
	{
		struct ARCandidateObject_eventSetFriendlyName_Parms
		{
			FString NewName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateObject_SetFriendlyName_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UARCandidateObject_SetFriendlyName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARCandidateObject_eventSetFriendlyName_Parms, NewName), METADATA_PARAMS(Z_Construct_UFunction_UARCandidateObject_SetFriendlyName_Statics::NewProp_NewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_SetFriendlyName_Statics::NewProp_NewName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARCandidateObject_SetFriendlyName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCandidateObject_SetFriendlyName_Statics::NewProp_NewName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCandidateObject_SetFriendlyName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Object Detection" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCandidateObject_SetFriendlyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCandidateObject, nullptr, "SetFriendlyName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARCandidateObject_SetFriendlyName_Statics::ARCandidateObject_eventSetFriendlyName_Parms), Z_Construct_UFunction_UARCandidateObject_SetFriendlyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_SetFriendlyName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCandidateObject_SetFriendlyName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCandidateObject_SetFriendlyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCandidateObject_SetFriendlyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARCandidateObject_SetFriendlyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARCandidateObject);
	UClass* Z_Construct_UClass_UARCandidateObject_NoRegister()
	{
		return UARCandidateObject::StaticClass();
	}
	struct Z_Construct_UClass_UARCandidateObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CandidateObjectData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CandidateObjectData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CandidateObjectData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARCandidateObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARCandidateObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARCandidateObject_GetBoundingBox, "GetBoundingBox" }, // 4197244123
		{ &Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData, "GetCandidateObjectData" }, // 1427247411
		{ &Z_Construct_UFunction_UARCandidateObject_GetFriendlyName, "GetFriendlyName" }, // 3144797258
		{ &Z_Construct_UFunction_UARCandidateObject_SetBoundingBox, "SetBoundingBox" }, // 1094827150
		{ &Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData, "SetCandidateObjectData" }, // 2963034573
		{ &Z_Construct_UFunction_UARCandidateObject_SetFriendlyName, "SetFriendlyName" }, // 894118999
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCandidateObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** An asset that points to an object to be detected in a scene */" },
		{ "IncludePath", "ARTypes.h" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "An asset that points to an object to be detected in a scene" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARCandidateObject_Statics::NewProp_CandidateObjectData_Inner = { "CandidateObjectData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCandidateObject_Statics::NewProp_CandidateObjectData_MetaData[] = {
		{ "Category", "AR Candidate Object" },
		{ "Comment", "/** The object to detect in scenes */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The object to detect in scenes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARCandidateObject_Statics::NewProp_CandidateObjectData = { "CandidateObjectData", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARCandidateObject, CandidateObjectData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UARCandidateObject_Statics::NewProp_CandidateObjectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARCandidateObject_Statics::NewProp_CandidateObjectData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCandidateObject_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "Category", "AR Candidate Object" },
		{ "Comment", "/** The friendly name to report back when the object is detected in scenes */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The friendly name to report back when the object is detected in scenes" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UARCandidateObject_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARCandidateObject, FriendlyName), METADATA_PARAMS(Z_Construct_UClass_UARCandidateObject_Statics::NewProp_FriendlyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARCandidateObject_Statics::NewProp_FriendlyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCandidateObject_Statics::NewProp_BoundingBox_MetaData[] = {
		{ "Category", "AR Candidate Image" },
		{ "Comment", "/** The physical bounds in centimeters of the object that this candidate object represents */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The physical bounds in centimeters of the object that this candidate object represents" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARCandidateObject_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARCandidateObject, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UARCandidateObject_Statics::NewProp_BoundingBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARCandidateObject_Statics::NewProp_BoundingBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARCandidateObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCandidateObject_Statics::NewProp_CandidateObjectData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCandidateObject_Statics::NewProp_CandidateObjectData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCandidateObject_Statics::NewProp_FriendlyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARCandidateObject_Statics::NewProp_BoundingBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARCandidateObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARCandidateObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARCandidateObject_Statics::ClassParams = {
		&UARCandidateObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARCandidateObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARCandidateObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARCandidateObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARCandidateObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARCandidateObject()
	{
		if (!Z_Registration_Info_UClass_UARCandidateObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARCandidateObject.OuterSingleton, Z_Construct_UClass_UARCandidateObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARCandidateObject.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARCandidateObject>()
	{
		return UARCandidateObject::StaticClass();
	}
	UARCandidateObject::UARCandidateObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARCandidateObject);
	UARCandidateObject::~UARCandidateObject() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARVideoFormat;
class UScriptStruct* FARVideoFormat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARVideoFormat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARVideoFormat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARVideoFormat, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARVideoFormat"));
	}
	return Z_Registration_Info_UScriptStruct_ARVideoFormat.OuterSingleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARVideoFormat>()
{
	return FARVideoFormat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARVideoFormat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FPS_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FPS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARVideoFormat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A specific AR video format */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "A specific AR video format" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARVideoFormat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_FPS_MetaData[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/** The desired or supported number of frames per second for this video format */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The desired or supported number of frames per second for this video format" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_FPS = { "FPS", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARVideoFormat, FPS), METADATA_PARAMS(Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_FPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_FPS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/** The desired or supported width in pixels for this video format */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The desired or supported width in pixels for this video format" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARVideoFormat, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/** The desired or supported height in pixels for this video format */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The desired or supported height in pixels for this video format" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARVideoFormat, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARVideoFormat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_FPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewProp_Height,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARVideoFormat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARVideoFormat",
		sizeof(FARVideoFormat),
		alignof(FARVideoFormat),
		Z_Construct_UScriptStruct_FARVideoFormat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARVideoFormat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARVideoFormat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARVideoFormat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARVideoFormat()
	{
		if (!Z_Registration_Info_UScriptStruct_ARVideoFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARVideoFormat.InnerSingleton, Z_Construct_UScriptStruct_FARVideoFormat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARVideoFormat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARSkeletonDefinition;
class UScriptStruct* FARSkeletonDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARSkeletonDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARSkeletonDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARSkeletonDefinition, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARSkeletonDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_ARSkeletonDefinition.OuterSingleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARSkeletonDefinition>()
{
	return FARSkeletonDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumJoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumJoints;
		static const UECodeGen_Private::FNamePropertyParams NewProp_JointNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JointNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_JointNames;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParentIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Represents a hierarchy of a human pose skeleton tracked by the AR system */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "Represents a hierarchy of a human pose skeleton tracked by the AR system" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARSkeletonDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::NewProp_NumJoints_MetaData[] = {
		{ "Category", "AR AugmentedReality|Pose Tracking" },
		{ "Comment", "/** How many joints this skeleton has */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "How many joints this skeleton has" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::NewProp_NumJoints = { "NumJoints", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARSkeletonDefinition, NumJoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::NewProp_NumJoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::NewProp_NumJoints_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::NewProp_JointNames_Inner = { "JointNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::NewProp_JointNames_MetaData[] = {
		{ "Category", "AR AugmentedReality|Pose Tracking" },
		{ "Comment", "/** The name of each joint in this skeleton */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The name of each joint in this skeleton" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::NewProp_JointNames = { "JointNames", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARSkeletonDefinition, JointNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::NewProp_JointNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::NewProp_JointNames_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::NewProp_ParentIndices_Inner = { "ParentIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::NewProp_ParentIndices_MetaData[] = {
		{ "Category", "AR AugmentedReality|Pose Tracking" },
		{ "Comment", "/** The parent index of each joint in this skeleton */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The parent index of each joint in this skeleton" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::NewProp_ParentIndices = { "ParentIndices", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARSkeletonDefinition, ParentIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::NewProp_ParentIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::NewProp_ParentIndices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::NewProp_NumJoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::NewProp_JointNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::NewProp_JointNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::NewProp_ParentIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::NewProp_ParentIndices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARSkeletonDefinition",
		sizeof(FARSkeletonDefinition),
		alignof(FARSkeletonDefinition),
		Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARSkeletonDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_ARSkeletonDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARSkeletonDefinition.InnerSingleton, Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARSkeletonDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARPose2D;
class UScriptStruct* FARPose2D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARPose2D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARPose2D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARPose2D, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARPose2D"));
	}
	return Z_Registration_Info_UScriptStruct_ARPose2D.OuterSingleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARPose2D>()
{
	return FARPose2D::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARPose2D_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletonDefinition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_JointLocations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JointLocations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_JointLocations;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsJointTracked_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsJointTracked_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IsJointTracked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPose2D_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Represents a human pose tracked in the 2D space */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "Represents a human pose tracked in the 2D space" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARPose2D_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARPose2D>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPose2D_Statics::NewProp_SkeletonDefinition_MetaData[] = {
		{ "Category", "AR AugmentedReality|Pose Tracking" },
		{ "Comment", "/** The definition of this skeleton */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The definition of this skeleton" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARPose2D_Statics::NewProp_SkeletonDefinition = { "SkeletonDefinition", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARPose2D, SkeletonDefinition), Z_Construct_UScriptStruct_FARSkeletonDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPose2D_Statics::NewProp_SkeletonDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPose2D_Statics::NewProp_SkeletonDefinition_MetaData)) }; // 237027922
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARPose2D_Statics::NewProp_JointLocations_Inner = { "JointLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPose2D_Statics::NewProp_JointLocations_MetaData[] = {
		{ "Category", "AR AugmentedReality|Pose Tracking" },
		{ "Comment", "/** The location of each joint in 2D normalized space */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The location of each joint in 2D normalized space" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FARPose2D_Statics::NewProp_JointLocations = { "JointLocations", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARPose2D, JointLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPose2D_Statics::NewProp_JointLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPose2D_Statics::NewProp_JointLocations_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FARPose2D_Statics::NewProp_IsJointTracked_Inner = { "IsJointTracked", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPose2D_Statics::NewProp_IsJointTracked_MetaData[] = {
		{ "Category", "AR AugmentedReality|Pose Tracking" },
		{ "Comment", "/** Flags indicating if each joint is tracked */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "Flags indicating if each joint is tracked" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FARPose2D_Statics::NewProp_IsJointTracked = { "IsJointTracked", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARPose2D, IsJointTracked), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPose2D_Statics::NewProp_IsJointTracked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPose2D_Statics::NewProp_IsJointTracked_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARPose2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPose2D_Statics::NewProp_SkeletonDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPose2D_Statics::NewProp_JointLocations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPose2D_Statics::NewProp_JointLocations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPose2D_Statics::NewProp_IsJointTracked_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPose2D_Statics::NewProp_IsJointTracked,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARPose2D_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARPose2D",
		sizeof(FARPose2D),
		alignof(FARPose2D),
		Z_Construct_UScriptStruct_FARPose2D_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPose2D_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARPose2D_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPose2D_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARPose2D()
	{
		if (!Z_Registration_Info_UScriptStruct_ARPose2D.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARPose2D.InnerSingleton, Z_Construct_UScriptStruct_FARPose2D_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARPose2D.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARPose3D;
class UScriptStruct* FARPose3D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARPose3D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARPose3D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARPose3D, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARPose3D"));
	}
	return Z_Registration_Info_UScriptStruct_ARPose3D.OuterSingleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARPose3D>()
{
	return FARPose3D::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARPose3D_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletonDefinition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_JointTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JointTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_JointTransforms;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsJointTracked_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsJointTracked_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IsJointTracked;
		static const UECodeGen_Private::FBytePropertyParams NewProp_JointTransformSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JointTransformSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_JointTransformSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPose3D_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Represents a human pose tracked in the 3D space */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "Represents a human pose tracked in the 3D space" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARPose3D_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARPose3D>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_SkeletonDefinition_MetaData[] = {
		{ "Category", "AR AugmentedReality|Pose Tracking" },
		{ "Comment", "/** The definition of this skeleton */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The definition of this skeleton" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_SkeletonDefinition = { "SkeletonDefinition", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARPose3D, SkeletonDefinition), Z_Construct_UScriptStruct_FARSkeletonDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_SkeletonDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_SkeletonDefinition_MetaData)) }; // 237027922
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_JointTransforms_Inner = { "JointTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_JointTransforms_MetaData[] = {
		{ "Category", "AR AugmentedReality|Pose Tracking" },
		{ "Comment", "/** The transform of each join in the model space */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "The transform of each join in the model space" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_JointTransforms = { "JointTransforms", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARPose3D, JointTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_JointTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_JointTransforms_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_IsJointTracked_Inner = { "IsJointTracked", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_IsJointTracked_MetaData[] = {
		{ "Category", "AR AugmentedReality|Pose Tracking" },
		{ "Comment", "/** Flags indicating if each joint is tracked */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "Flags indicating if each joint is tracked" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_IsJointTracked = { "IsJointTracked", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARPose3D, IsJointTracked), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_IsJointTracked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_IsJointTracked_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_JointTransformSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_JointTransformSpace_MetaData[] = {
		{ "Category", "AR AugmentedReality|Pose Tracking" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_JointTransformSpace = { "JointTransformSpace", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARPose3D, JointTransformSpace), Z_Construct_UEnum_AugmentedReality_EARJointTransformSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_JointTransformSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_JointTransformSpace_MetaData)) }; // 25664793
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARPose3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_SkeletonDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_JointTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_JointTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_IsJointTracked_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_IsJointTracked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_JointTransformSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPose3D_Statics::NewProp_JointTransformSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARPose3D_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARPose3D",
		sizeof(FARPose3D),
		alignof(FARPose3D),
		Z_Construct_UScriptStruct_FARPose3D_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPose3D_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARPose3D_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPose3D_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARPose3D()
	{
		if (!Z_Registration_Info_UScriptStruct_ARPose3D.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARPose3D.InnerSingleton, Z_Construct_UScriptStruct_FARPose3D_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARPose3D.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARCameraIntrinsics;
class UScriptStruct* FARCameraIntrinsics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARCameraIntrinsics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARCameraIntrinsics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARCameraIntrinsics, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARCameraIntrinsics"));
	}
	return Z_Registration_Info_UScriptStruct_ARCameraIntrinsics.OuterSingleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARCameraIntrinsics>()
{
	return FARCameraIntrinsics::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImageResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrincipalPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrincipalPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** AR camera intrinsics */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "AR camera intrinsics" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARCameraIntrinsics>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::NewProp_ImageResolution_MetaData[] = {
		{ "Category", "AR AugmentedReality|Camera" },
		{ "Comment", "/** Camera image resolution in pixels */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "Camera image resolution in pixels" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::NewProp_ImageResolution = { "ImageResolution", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARCameraIntrinsics, ImageResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::NewProp_ImageResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::NewProp_ImageResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::NewProp_FocalLength_MetaData[] = {
		{ "Category", "AR AugmentedReality|Camera" },
		{ "Comment", "/** Camera focal length in pixels */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "Camera focal length in pixels" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::NewProp_FocalLength = { "FocalLength", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARCameraIntrinsics, FocalLength), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::NewProp_FocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::NewProp_FocalLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::NewProp_PrincipalPoint_MetaData[] = {
		{ "Category", "AR AugmentedReality|Camera" },
		{ "Comment", "/** Camera principal point in pixels */" },
		{ "ModuleRelativePath", "Public/ARTypes.h" },
		{ "ToolTip", "Camera principal point in pixels" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::NewProp_PrincipalPoint = { "PrincipalPoint", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARCameraIntrinsics, PrincipalPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::NewProp_PrincipalPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::NewProp_PrincipalPoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::NewProp_ImageResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::NewProp_FocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::NewProp_PrincipalPoint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARCameraIntrinsics",
		sizeof(FARCameraIntrinsics),
		alignof(FARCameraIntrinsics),
		Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARCameraIntrinsics()
	{
		if (!Z_Registration_Info_UScriptStruct_ARCameraIntrinsics.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARCameraIntrinsics.InnerSingleton, Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARCameraIntrinsics.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_Statics::EnumInfo[] = {
		{ EARTrackingState_StaticEnum, TEXT("EARTrackingState"), &Z_Registration_Info_UEnum_EARTrackingState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2124127308U) },
		{ EARCaptureType_StaticEnum, TEXT("EARCaptureType"), &Z_Registration_Info_UEnum_EARCaptureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 469819361U) },
		{ EARLineTraceChannels_StaticEnum, TEXT("EARLineTraceChannels"), &Z_Registration_Info_UEnum_EARLineTraceChannels, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2496654531U) },
		{ EARTrackingQuality_StaticEnum, TEXT("EARTrackingQuality"), &Z_Registration_Info_UEnum_EARTrackingQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3747873437U) },
		{ EARTrackingQualityReason_StaticEnum, TEXT("EARTrackingQualityReason"), &Z_Registration_Info_UEnum_EARTrackingQualityReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3099192326U) },
		{ EARSessionStatus_StaticEnum, TEXT("EARSessionStatus"), &Z_Registration_Info_UEnum_EARSessionStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3727938175U) },
		{ EARWorldMappingState_StaticEnum, TEXT("EARWorldMappingState"), &Z_Registration_Info_UEnum_EARWorldMappingState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2420642953U) },
		{ EARPlaneOrientation_StaticEnum, TEXT("EARPlaneOrientation"), &Z_Registration_Info_UEnum_EARPlaneOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1044975786U) },
		{ EARObjectClassification_StaticEnum, TEXT("EARObjectClassification"), &Z_Registration_Info_UEnum_EARObjectClassification, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1555664985U) },
		{ EARSpatialMeshUsageFlags_StaticEnum, TEXT("EARSpatialMeshUsageFlags"), &Z_Registration_Info_UEnum_EARSpatialMeshUsageFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3552341118U) },
		{ EARJointTransformSpace_StaticEnum, TEXT("EARJointTransformSpace"), &Z_Registration_Info_UEnum_EARJointTransformSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 25664793U) },
		{ EARAltitudeSource_StaticEnum, TEXT("EARAltitudeSource"), &Z_Registration_Info_UEnum_EARAltitudeSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 962382879U) },
		{ EARCandidateImageOrientation_StaticEnum, TEXT("EARCandidateImageOrientation"), &Z_Registration_Info_UEnum_EARCandidateImageOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2613892628U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_Statics::ScriptStructInfo[] = {
		{ FARSessionStatus::StaticStruct, Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewStructOps, TEXT("ARSessionStatus"), &Z_Registration_Info_UScriptStruct_ARSessionStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARSessionStatus), 4034589039U) },
		{ FARVideoFormat::StaticStruct, Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewStructOps, TEXT("ARVideoFormat"), &Z_Registration_Info_UScriptStruct_ARVideoFormat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARVideoFormat), 3309039363U) },
		{ FARSkeletonDefinition::StaticStruct, Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::NewStructOps, TEXT("ARSkeletonDefinition"), &Z_Registration_Info_UScriptStruct_ARSkeletonDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARSkeletonDefinition), 237027922U) },
		{ FARPose2D::StaticStruct, Z_Construct_UScriptStruct_FARPose2D_Statics::NewStructOps, TEXT("ARPose2D"), &Z_Registration_Info_UScriptStruct_ARPose2D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARPose2D), 956988869U) },
		{ FARPose3D::StaticStruct, Z_Construct_UScriptStruct_FARPose3D_Statics::NewStructOps, TEXT("ARPose3D"), &Z_Registration_Info_UScriptStruct_ARPose3D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARPose3D), 3209860340U) },
		{ FARCameraIntrinsics::StaticStruct, Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::NewStructOps, TEXT("ARCameraIntrinsics"), &Z_Registration_Info_UScriptStruct_ARCameraIntrinsics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARCameraIntrinsics), 2312594621U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARTypesDummyClass, UARTypesDummyClass::StaticClass, TEXT("UARTypesDummyClass"), &Z_Registration_Info_UClass_UARTypesDummyClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARTypesDummyClass), 2952889661U) },
		{ Z_Construct_UClass_UARCandidateImage, UARCandidateImage::StaticClass, TEXT("UARCandidateImage"), &Z_Registration_Info_UClass_UARCandidateImage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARCandidateImage), 269917363U) },
		{ Z_Construct_UClass_UARCandidateObject, UARCandidateObject::StaticClass, TEXT("UARCandidateObject"), &Z_Registration_Info_UClass_UARCandidateObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARCandidateObject), 1525387493U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_1422963060(TEXT("/Script/AugmentedReality"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
