// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARBlueprintLibrary.h"
#include "ARTraceResult.h"
#include "ARTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARBlueprintLibrary() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBlueprintLibrary();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBlueprintLibrary_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateImage_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentCaptureProbe_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARLightEstimate_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPin_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPlaneGeometry_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSessionConfig_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTexture_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTextureCameraDepth_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTextureCameraImage_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTraceResultLibrary();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTraceResultLibrary_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedGeometry_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedImage_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedPoint_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedPose_NoRegister();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARCaptureType();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARObjectClassification();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARSceneReconstruction();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionType();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTextureType();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingQuality();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARWorldMappingState();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARCameraIntrinsics();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARPose2D();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARSessionStatus();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARTraceResult();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARVideoFormat();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
// End Cross Module References
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetCameraIntrinsics)
	{
		P_GET_STRUCT_REF(FARCameraIntrinsics,Z_Param_Out_OutCameraIntrinsics);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARBlueprintLibrary::GetCameraIntrinsics(Z_Param_Out_OutCameraIntrinsics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetNumberOfTrackedFacesSupported)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UARBlueprintLibrary::GetNumberOfTrackedFacesSupported();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execCalculateAlignmentTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TransformInFirstCoordinateSystem);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TransformInSecondCoordinateSystem);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AlignmentTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::CalculateAlignmentTransform(Z_Param_Out_TransformInFirstCoordinateSystem,Z_Param_Out_TransformInSecondCoordinateSystem,Z_Param_Out_AlignmentTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execCalculateClosestIntersection)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_StartPoints);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_EndPoints);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ClosestIntersection);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::CalculateClosestIntersection(Z_Param_Out_StartPoints,Z_Param_Out_EndPoints,Z_Param_Out_ClosestIntersection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execFindTrackedPointsByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PointName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UARTrackedPoint*>*)Z_Param__Result=UARBlueprintLibrary::FindTrackedPointsByName(Z_Param_PointName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execAddTrackedPointWithName)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldTransform);
		P_GET_PROPERTY(FStrProperty,Z_Param_PointName);
		P_GET_UBOOL(Z_Param_bDeletePointsWithSameName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARBlueprintLibrary::AddTrackedPointWithName(Z_Param_Out_WorldTransform,Z_Param_PointName,Z_Param_bDeletePointsWithSameName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetAlignmentTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UARBlueprintLibrary::GetAlignmentTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetARWorldScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UARBlueprintLibrary::GetARWorldScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execSetARWorldScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWorldScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::SetARWorldScale(Z_Param_InWorldScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execSetARWorldOriginLocationAndRotation)
	{
		P_GET_STRUCT(FVector,Z_Param_OriginLocation);
		P_GET_STRUCT(FRotator,Z_Param_OriginRotation);
		P_GET_UBOOL(Z_Param_bIsTransformInWorldSpace);
		P_GET_UBOOL(Z_Param_bMaintainUpDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::SetARWorldOriginLocationAndRotation(Z_Param_OriginLocation,Z_Param_OriginRotation,Z_Param_bIsTransformInWorldSpace,Z_Param_bMaintainUpDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetObjectClassificationAtLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InWorldLocation);
		P_GET_ENUM_REF(EARObjectClassification,Z_Param_Out_OutClassification);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutClassificationLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxLocationDiff);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARBlueprintLibrary::GetObjectClassificationAtLocation(Z_Param_Out_InWorldLocation,(EARObjectClassification&)(Z_Param_Out_OutClassification),Z_Param_Out_OutClassificationLocation,Z_Param_MaxLocationDiff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetPersonSegmentationDepthImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARTexture**)Z_Param__Result=UARBlueprintLibrary::GetPersonSegmentationDepthImage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetPersonSegmentationImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARTexture**)Z_Param__Result=UARBlueprintLibrary::GetPersonSegmentationImage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetAllTrackedPoses)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UARTrackedPose*>*)Z_Param__Result=UARBlueprintLibrary::GetAllTrackedPoses();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetAllTracked2DPoses)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FARPose2D>*)Z_Param__Result=UARBlueprintLibrary::GetAllTracked2DPoses();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execIsSceneReconstructionSupported)
	{
		P_GET_ENUM(EARSessionType,Z_Param_SessionType);
		P_GET_ENUM(EARSceneReconstruction,Z_Param_SceneReconstructionMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARBlueprintLibrary::IsSceneReconstructionSupported(EARSessionType(Z_Param_SessionType),EARSceneReconstruction(Z_Param_SceneReconstructionMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execIsSessionTrackingFeatureSupported)
	{
		P_GET_ENUM(EARSessionType,Z_Param_SessionType);
		P_GET_ENUM(EARSessionTrackingFeature,Z_Param_SessionTrackingFeature);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARBlueprintLibrary::IsSessionTrackingFeatureSupported(EARSessionType(Z_Param_SessionType),EARSessionTrackingFeature(Z_Param_SessionTrackingFeature));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execAddRuntimeCandidateImage)
	{
		P_GET_OBJECT(UARSessionConfig,Z_Param_SessionConfig);
		P_GET_OBJECT(UTexture2D,Z_Param_CandidateTexture);
		P_GET_PROPERTY(FStrProperty,Z_Param_FriendlyName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PhysicalWidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARCandidateImage**)Z_Param__Result=UARBlueprintLibrary::AddRuntimeCandidateImage(Z_Param_SessionConfig,Z_Param_CandidateTexture,Z_Param_FriendlyName,Z_Param_PhysicalWidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetSupportedVideoFormats)
	{
		P_GET_ENUM(EARSessionType,Z_Param_SessionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FARVideoFormat>*)Z_Param__Result=UARBlueprintLibrary::GetSupportedVideoFormats(EARSessionType(Z_Param_SessionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetPointCloud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UARBlueprintLibrary::GetPointCloud();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetWorldMappingStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARWorldMappingState*)Z_Param__Result=UARBlueprintLibrary::GetWorldMappingStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execAddManualEnvironmentCaptureProbe)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARBlueprintLibrary::AddManualEnvironmentCaptureProbe(Z_Param_Location,Z_Param_Extent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetAllTrackedEnvironmentCaptureProbes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UAREnvironmentCaptureProbe*>*)Z_Param__Result=UARBlueprintLibrary::GetAllTrackedEnvironmentCaptureProbes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetAllTrackedImages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UARTrackedImage*>*)Z_Param__Result=UARBlueprintLibrary::GetAllTrackedImages();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetAllTrackedPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UARTrackedPoint*>*)Z_Param__Result=UARBlueprintLibrary::GetAllTrackedPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetAllTrackedPlanes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UARPlaneGeometry*>*)Z_Param__Result=UARBlueprintLibrary::GetAllTrackedPlanes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execRemoveAllARPinsFromLocalStore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::RemoveAllARPinsFromLocalStore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execRemoveARPinFromLocalStore)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSaveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::RemoveARPinFromLocalStore(Z_Param_InSaveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execSaveARPinToLocalStore)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSaveName);
		P_GET_OBJECT(UARPin,Z_Param_InPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARBlueprintLibrary::SaveARPinToLocalStore(Z_Param_InSaveName,Z_Param_InPin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execLoadARPinsFromLocalStore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,UARPin*>*)Z_Param__Result=UARBlueprintLibrary::LoadARPinsFromLocalStore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execIsARPinLocalStoreReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARBlueprintLibrary::IsARPinLocalStoreReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execIsARPinLocalStoreSupported)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARBlueprintLibrary::IsARPinLocalStoreSupported();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetAllPins)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UARPin*>*)Z_Param__Result=UARBlueprintLibrary::GetAllPins();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execRemovePin)
	{
		P_GET_OBJECT(UARPin,Z_Param_PinToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::RemovePin(Z_Param_PinToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execUnpinComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToUnpin);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::UnpinComponent(Z_Param_ComponentToUnpin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execPinComponentToARPin)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToPin);
		P_GET_OBJECT(UARPin,Z_Param_Pin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARBlueprintLibrary::PinComponentToARPin(Z_Param_ComponentToPin,Z_Param_Pin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execPinComponentToTraceResult)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToPin);
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult);
		P_GET_PROPERTY(FNameProperty,Z_Param_DebugName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARPin**)Z_Param__Result=UARBlueprintLibrary::PinComponentToTraceResult(Z_Param_ComponentToPin,Z_Param_Out_TraceResult,Z_Param_DebugName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execPinComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToPin);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_PinToWorldTransform);
		P_GET_OBJECT(UARTrackedGeometry,Z_Param_TrackedGeometry);
		P_GET_PROPERTY(FNameProperty,Z_Param_DebugName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARPin**)Z_Param__Result=UARBlueprintLibrary::PinComponent(Z_Param_ComponentToPin,Z_Param_Out_PinToWorldTransform,Z_Param_TrackedGeometry,Z_Param_DebugName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetCurrentLightEstimate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARLightEstimate**)Z_Param__Result=UARBlueprintLibrary::GetCurrentLightEstimate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execDebugDrawPin)
	{
		P_GET_OBJECT(UARPin,Z_Param_ARPin);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PersistForSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::DebugDrawPin(Z_Param_ARPin,Z_Param_WorldContextObject,Z_Param_Color,Z_Param_Scale,Z_Param_PersistForSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execDebugDrawTrackedGeometry)
	{
		P_GET_OBJECT(UARTrackedGeometry,Z_Param_TrackedGeometry);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OutlineThickness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PersistForSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::DebugDrawTrackedGeometry(Z_Param_TrackedGeometry,Z_Param_WorldContextObject,Z_Param_Color,Z_Param_OutlineThickness,Z_Param_PersistForSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execIsSessionTypeSupported)
	{
		P_GET_ENUM(EARSessionType,Z_Param_SessionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARBlueprintLibrary::IsSessionTypeSupported(EARSessionType(Z_Param_SessionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetARTexture)
	{
		P_GET_ENUM(EARTextureType,Z_Param_TextureType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARTexture**)Z_Param__Result=UARBlueprintLibrary::GetARTexture(EARTextureType(Z_Param_TextureType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetCameraDepth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARTextureCameraDepth**)Z_Param__Result=UARBlueprintLibrary::GetCameraDepth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetCameraImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARTextureCameraImage**)Z_Param__Result=UARBlueprintLibrary::GetCameraImage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetAllGeometriesByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_GeometryClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UARTrackedGeometry*>*)Z_Param__Result=UARBlueprintLibrary::GetAllGeometriesByClass(Z_Param_GeometryClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetAllGeometries)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UARTrackedGeometry*>*)Z_Param__Result=UARBlueprintLibrary::GetAllGeometries();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetTrackingQualityReason)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARTrackingQualityReason*)Z_Param__Result=UARBlueprintLibrary::GetTrackingQualityReason();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetTrackingQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARTrackingQuality*)Z_Param__Result=UARBlueprintLibrary::GetTrackingQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execLineTraceTrackedObjects3D)
	{
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_GET_UBOOL(Z_Param_bTestFeaturePoints);
		P_GET_UBOOL(Z_Param_bTestGroundPlane);
		P_GET_UBOOL(Z_Param_bTestPlaneExtents);
		P_GET_UBOOL(Z_Param_bTestPlaneBoundaryPolygon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FARTraceResult>*)Z_Param__Result=UARBlueprintLibrary::LineTraceTrackedObjects3D(Z_Param_Start,Z_Param_End,Z_Param_bTestFeaturePoints,Z_Param_bTestGroundPlane,Z_Param_bTestPlaneExtents,Z_Param_bTestPlaneBoundaryPolygon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execLineTraceTrackedObjects)
	{
		P_GET_STRUCT(FVector2D,Z_Param_ScreenCoord);
		P_GET_UBOOL(Z_Param_bTestFeaturePoints);
		P_GET_UBOOL(Z_Param_bTestGroundPlane);
		P_GET_UBOOL(Z_Param_bTestPlaneExtents);
		P_GET_UBOOL(Z_Param_bTestPlaneBoundaryPolygon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FARTraceResult>*)Z_Param__Result=UARBlueprintLibrary::LineTraceTrackedObjects(Z_Param_ScreenCoord,Z_Param_bTestFeaturePoints,Z_Param_bTestGroundPlane,Z_Param_bTestPlaneExtents,Z_Param_bTestPlaneBoundaryPolygon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execSetAlignmentTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InAlignmentTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::SetAlignmentTransform(Z_Param_Out_InAlignmentTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execResizeXRCamera)
	{
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_InSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=UARBlueprintLibrary::ResizeXRCamera(Z_Param_Out_InSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execSetEnabledXRCamera)
	{
		P_GET_UBOOL(Z_Param_bOnOff);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::SetEnabledXRCamera(Z_Param_bOnOff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execToggleARCapture)
	{
		P_GET_UBOOL(Z_Param_bOnOff);
		P_GET_ENUM(EARCaptureType,Z_Param_CaptureType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARBlueprintLibrary::ToggleARCapture(Z_Param_bOnOff,EARCaptureType(Z_Param_CaptureType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetSessionConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARSessionConfig**)Z_Param__Result=UARBlueprintLibrary::GetSessionConfig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execGetARSessionStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FARSessionStatus*)Z_Param__Result=UARBlueprintLibrary::GetARSessionStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execStopARSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::StopARSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execPauseARSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::PauseARSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execStartARSession)
	{
		P_GET_OBJECT(UARSessionConfig,Z_Param_SessionConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARBlueprintLibrary::StartARSession(Z_Param_SessionConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARBlueprintLibrary::execIsARSupported)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UARBlueprintLibrary::IsARSupported();
		P_NATIVE_END;
	}
	void UARBlueprintLibrary::StaticRegisterNativesUARBlueprintLibrary()
	{
		UClass* Class = UARBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddManualEnvironmentCaptureProbe", &UARBlueprintLibrary::execAddManualEnvironmentCaptureProbe },
			{ "AddRuntimeCandidateImage", &UARBlueprintLibrary::execAddRuntimeCandidateImage },
			{ "AddTrackedPointWithName", &UARBlueprintLibrary::execAddTrackedPointWithName },
			{ "CalculateAlignmentTransform", &UARBlueprintLibrary::execCalculateAlignmentTransform },
			{ "CalculateClosestIntersection", &UARBlueprintLibrary::execCalculateClosestIntersection },
			{ "DebugDrawPin", &UARBlueprintLibrary::execDebugDrawPin },
			{ "DebugDrawTrackedGeometry", &UARBlueprintLibrary::execDebugDrawTrackedGeometry },
			{ "FindTrackedPointsByName", &UARBlueprintLibrary::execFindTrackedPointsByName },
			{ "GetAlignmentTransform", &UARBlueprintLibrary::execGetAlignmentTransform },
			{ "GetAllGeometries", &UARBlueprintLibrary::execGetAllGeometries },
			{ "GetAllGeometriesByClass", &UARBlueprintLibrary::execGetAllGeometriesByClass },
			{ "GetAllPins", &UARBlueprintLibrary::execGetAllPins },
			{ "GetAllTracked2DPoses", &UARBlueprintLibrary::execGetAllTracked2DPoses },
			{ "GetAllTrackedEnvironmentCaptureProbes", &UARBlueprintLibrary::execGetAllTrackedEnvironmentCaptureProbes },
			{ "GetAllTrackedImages", &UARBlueprintLibrary::execGetAllTrackedImages },
			{ "GetAllTrackedPlanes", &UARBlueprintLibrary::execGetAllTrackedPlanes },
			{ "GetAllTrackedPoints", &UARBlueprintLibrary::execGetAllTrackedPoints },
			{ "GetAllTrackedPoses", &UARBlueprintLibrary::execGetAllTrackedPoses },
			{ "GetARSessionStatus", &UARBlueprintLibrary::execGetARSessionStatus },
			{ "GetARTexture", &UARBlueprintLibrary::execGetARTexture },
			{ "GetARWorldScale", &UARBlueprintLibrary::execGetARWorldScale },
			{ "GetCameraDepth", &UARBlueprintLibrary::execGetCameraDepth },
			{ "GetCameraImage", &UARBlueprintLibrary::execGetCameraImage },
			{ "GetCameraIntrinsics", &UARBlueprintLibrary::execGetCameraIntrinsics },
			{ "GetCurrentLightEstimate", &UARBlueprintLibrary::execGetCurrentLightEstimate },
			{ "GetNumberOfTrackedFacesSupported", &UARBlueprintLibrary::execGetNumberOfTrackedFacesSupported },
			{ "GetObjectClassificationAtLocation", &UARBlueprintLibrary::execGetObjectClassificationAtLocation },
			{ "GetPersonSegmentationDepthImage", &UARBlueprintLibrary::execGetPersonSegmentationDepthImage },
			{ "GetPersonSegmentationImage", &UARBlueprintLibrary::execGetPersonSegmentationImage },
			{ "GetPointCloud", &UARBlueprintLibrary::execGetPointCloud },
			{ "GetSessionConfig", &UARBlueprintLibrary::execGetSessionConfig },
			{ "GetSupportedVideoFormats", &UARBlueprintLibrary::execGetSupportedVideoFormats },
			{ "GetTrackingQuality", &UARBlueprintLibrary::execGetTrackingQuality },
			{ "GetTrackingQualityReason", &UARBlueprintLibrary::execGetTrackingQualityReason },
			{ "GetWorldMappingStatus", &UARBlueprintLibrary::execGetWorldMappingStatus },
			{ "IsARPinLocalStoreReady", &UARBlueprintLibrary::execIsARPinLocalStoreReady },
			{ "IsARPinLocalStoreSupported", &UARBlueprintLibrary::execIsARPinLocalStoreSupported },
			{ "IsARSupported", &UARBlueprintLibrary::execIsARSupported },
			{ "IsSceneReconstructionSupported", &UARBlueprintLibrary::execIsSceneReconstructionSupported },
			{ "IsSessionTrackingFeatureSupported", &UARBlueprintLibrary::execIsSessionTrackingFeatureSupported },
			{ "IsSessionTypeSupported", &UARBlueprintLibrary::execIsSessionTypeSupported },
			{ "LineTraceTrackedObjects", &UARBlueprintLibrary::execLineTraceTrackedObjects },
			{ "LineTraceTrackedObjects3D", &UARBlueprintLibrary::execLineTraceTrackedObjects3D },
			{ "LoadARPinsFromLocalStore", &UARBlueprintLibrary::execLoadARPinsFromLocalStore },
			{ "PauseARSession", &UARBlueprintLibrary::execPauseARSession },
			{ "PinComponent", &UARBlueprintLibrary::execPinComponent },
			{ "PinComponentToARPin", &UARBlueprintLibrary::execPinComponentToARPin },
			{ "PinComponentToTraceResult", &UARBlueprintLibrary::execPinComponentToTraceResult },
			{ "RemoveAllARPinsFromLocalStore", &UARBlueprintLibrary::execRemoveAllARPinsFromLocalStore },
			{ "RemoveARPinFromLocalStore", &UARBlueprintLibrary::execRemoveARPinFromLocalStore },
			{ "RemovePin", &UARBlueprintLibrary::execRemovePin },
			{ "ResizeXRCamera", &UARBlueprintLibrary::execResizeXRCamera },
			{ "SaveARPinToLocalStore", &UARBlueprintLibrary::execSaveARPinToLocalStore },
			{ "SetAlignmentTransform", &UARBlueprintLibrary::execSetAlignmentTransform },
			{ "SetARWorldOriginLocationAndRotation", &UARBlueprintLibrary::execSetARWorldOriginLocationAndRotation },
			{ "SetARWorldScale", &UARBlueprintLibrary::execSetARWorldScale },
			{ "SetEnabledXRCamera", &UARBlueprintLibrary::execSetEnabledXRCamera },
			{ "StartARSession", &UARBlueprintLibrary::execStartARSession },
			{ "StopARSession", &UARBlueprintLibrary::execStopARSession },
			{ "ToggleARCapture", &UARBlueprintLibrary::execToggleARCapture },
			{ "UnpinComponent", &UARBlueprintLibrary::execUnpinComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics
	{
		struct ARBlueprintLibrary_eventAddManualEnvironmentCaptureProbe_Parms
		{
			FVector Location;
			FVector Extent;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventAddManualEnvironmentCaptureProbe_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventAddManualEnvironmentCaptureProbe_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventAddManualEnvironmentCaptureProbe_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventAddManualEnvironmentCaptureProbe_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "Comment", "/** Adds an environment capture probe to the ar world */" },
		{ "DisplayName", "Add AR Environment Probe" },
		{ "Keywords", "ar augmentedreality augmented reality tracking anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Adds an environment capture probe to the ar world" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "AddManualEnvironmentCaptureProbe", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::ARBlueprintLibrary_eventAddManualEnvironmentCaptureProbe_Parms), Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics
	{
		struct ARBlueprintLibrary_eventAddRuntimeCandidateImage_Parms
		{
			UARSessionConfig* SessionConfig;
			UTexture2D* CandidateTexture;
			FString FriendlyName;
			float PhysicalWidth;
			UARCandidateImage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SessionConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CandidateTexture;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicalWidth;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::NewProp_SessionConfig = { "SessionConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventAddRuntimeCandidateImage_Parms, SessionConfig), Z_Construct_UClass_UARSessionConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::NewProp_CandidateTexture = { "CandidateTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventAddRuntimeCandidateImage_Parms, CandidateTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventAddRuntimeCandidateImage_Parms, FriendlyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::NewProp_PhysicalWidth = { "PhysicalWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventAddRuntimeCandidateImage_Parms, PhysicalWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventAddRuntimeCandidateImage_Parms, ReturnValue), Z_Construct_UClass_UARCandidateImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::NewProp_SessionConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::NewProp_CandidateTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::NewProp_FriendlyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::NewProp_PhysicalWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/**\n\x09 * Create an ARCandidateImage object and add it to the ARCandidateImageList of the given \\c UARSessionConfig object.\n\x09 *\n\x09 * Note that you need to restart the AR session with the \\c UARSessionConfig you are adding to to make the change take effect.\n\x09 *\n\x09 * On ARCore platform, you can leave the PhysicalWidth to 0 if you don't know the physical size of the image or\n\x09 * the physical size is dynamic. And this function takes time to perform non-trivial image processing (20ms - 30ms),\n\x09 * and should be run on a background thread.\n\x09 *\n\x09 * @return A \\c UARCandidateImage Object pointer if the underlying ARPlatform added the candidate image at runtime successfully.\n\x09 *\x09\x09  Return nullptr otherwise.\n\x09 */" },
		{ "Keywords", "ar augmentedreality augmented reality candidate image" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Create an ARCandidateImage object and add it to the ARCandidateImageList of the given \\c UARSessionConfig object.\n\nNote that you need to restart the AR session with the \\c UARSessionConfig you are adding to to make the change take effect.\n\nOn ARCore platform, you can leave the PhysicalWidth to 0 if you don't know the physical size of the image or\nthe physical size is dynamic. And this function takes time to perform non-trivial image processing (20ms - 30ms),\nand should be run on a background thread.\n\n@return A \\c UARCandidateImage Object pointer if the underlying ARPlatform added the candidate image at runtime successfully.\n               Return nullptr otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "AddRuntimeCandidateImage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::ARBlueprintLibrary_eventAddRuntimeCandidateImage_Parms), Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics
	{
		struct ARBlueprintLibrary_eventAddTrackedPointWithName_Parms
		{
			FTransform WorldTransform;
			FString PointName;
			bool bDeletePointsWithSameName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PointName;
		static void NewProp_bDeletePointsWithSameName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeletePointsWithSameName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventAddTrackedPointWithName_Parms, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::NewProp_WorldTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::NewProp_PointName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::NewProp_PointName = { "PointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventAddTrackedPointWithName_Parms, PointName), METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::NewProp_PointName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::NewProp_PointName_MetaData)) };
	void Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::NewProp_bDeletePointsWithSameName_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventAddTrackedPointWithName_Parms*)Obj)->bDeletePointsWithSameName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::NewProp_bDeletePointsWithSameName = { "bDeletePointsWithSameName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventAddTrackedPointWithName_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::NewProp_bDeletePointsWithSameName_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventAddTrackedPointWithName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventAddTrackedPointWithName_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::NewProp_WorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::NewProp_PointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::NewProp_bDeletePointsWithSameName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/**\n\x09 * Manually add a tracked point with name and world transform.\n\x09 * @WorldTransform: transform in the world space where the point should be created.\n\x09 * @PointName: the name of the created point, must be non-empty.\n\x09 * @bDeletePointsWithSameName: if existing points with the same name should be deleted.\n\x09 * @return if the operation succeeds.\n\x09 * Note that this is an async operation - the added point won't be available until a few frames later.\n\x09 */" },
		{ "CPP_Default_bDeletePointsWithSameName", "true" },
		{ "Keywords", "ar augmentedreality augmented reality add point" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Manually add a tracked point with name and world transform.\n@WorldTransform: transform in the world space where the point should be created.\n@PointName: the name of the created point, must be non-empty.\n@bDeletePointsWithSameName: if existing points with the same name should be deleted.\n@return if the operation succeeds.\nNote that this is an async operation - the added point won't be available until a few frames later." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "AddTrackedPointWithName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::ARBlueprintLibrary_eventAddTrackedPointWithName_Parms), Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics
	{
		struct ARBlueprintLibrary_eventCalculateAlignmentTransform_Parms
		{
			FTransform TransformInFirstCoordinateSystem;
			FTransform TransformInSecondCoordinateSystem;
			FTransform AlignmentTransform;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformInFirstCoordinateSystem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformInFirstCoordinateSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformInSecondCoordinateSystem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformInSecondCoordinateSystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlignmentTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics::NewProp_TransformInFirstCoordinateSystem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics::NewProp_TransformInFirstCoordinateSystem = { "TransformInFirstCoordinateSystem", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventCalculateAlignmentTransform_Parms, TransformInFirstCoordinateSystem), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics::NewProp_TransformInFirstCoordinateSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics::NewProp_TransformInFirstCoordinateSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics::NewProp_TransformInSecondCoordinateSystem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics::NewProp_TransformInSecondCoordinateSystem = { "TransformInSecondCoordinateSystem", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventCalculateAlignmentTransform_Parms, TransformInSecondCoordinateSystem), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics::NewProp_TransformInSecondCoordinateSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics::NewProp_TransformInSecondCoordinateSystem_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics::NewProp_AlignmentTransform = { "AlignmentTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventCalculateAlignmentTransform_Parms, AlignmentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics::NewProp_TransformInFirstCoordinateSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics::NewProp_TransformInSecondCoordinateSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics::NewProp_AlignmentTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Alignment" },
		{ "Comment", "// Computes a transform that aligns two coordinate systems. Requires the transform of the same known point in each coordinate system.\n" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Computes a transform that aligns two coordinate systems. Requires the transform of the same known point in each coordinate system." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "CalculateAlignmentTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics::ARBlueprintLibrary_eventCalculateAlignmentTransform_Parms), Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics
	{
		struct ARBlueprintLibrary_eventCalculateClosestIntersection_Parms
		{
			TArray<FVector> StartPoints;
			TArray<FVector> EndPoints;
			FVector ClosestIntersection;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EndPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClosestIntersection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::NewProp_StartPoints_Inner = { "StartPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::NewProp_StartPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::NewProp_StartPoints = { "StartPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventCalculateClosestIntersection_Parms, StartPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::NewProp_StartPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::NewProp_StartPoints_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::NewProp_EndPoints_Inner = { "EndPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::NewProp_EndPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::NewProp_EndPoints = { "EndPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventCalculateClosestIntersection_Parms, EndPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::NewProp_EndPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::NewProp_EndPoints_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::NewProp_ClosestIntersection = { "ClosestIntersection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventCalculateClosestIntersection_Parms, ClosestIntersection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::NewProp_StartPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::NewProp_StartPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::NewProp_EndPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::NewProp_EndPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::NewProp_ClosestIntersection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Alignment" },
		{ "Comment", "//Alignment helpers\n" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Alignment helpers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "CalculateClosestIntersection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::ARBlueprintLibrary_eventCalculateClosestIntersection_Parms), Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics
	{
		struct ARBlueprintLibrary_eventDebugDrawPin_Parms
		{
			UARPin* ARPin;
			UObject* WorldContextObject;
			FLinearColor Color;
			float Scale;
			float PersistForSeconds;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ARPin;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PersistForSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::NewProp_ARPin = { "ARPin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawPin_Parms, ARPin), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawPin_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawPin_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawPin_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::NewProp_PersistForSeconds = { "PersistForSeconds", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawPin_Parms, PersistForSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::NewProp_ARPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::NewProp_PersistForSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "AR AugmentedReality|Debug" },
		{ "Comment", "/** Given a \\c UARPin, draw it for debugging purposes. */" },
		{ "CPP_Default_Color", "(R=1.000000,G=1.000000,B=0.000000,A=0.750000)" },
		{ "CPP_Default_PersistForSeconds", "0.000000" },
		{ "CPP_Default_Scale", "5.000000" },
		{ "Keywords", "ar augmentedreality augmented reality pin debug draw" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Given a \\c UARPin, draw it for debugging purposes." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "DebugDrawPin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::ARBlueprintLibrary_eventDebugDrawPin_Parms), Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics
	{
		struct ARBlueprintLibrary_eventDebugDrawTrackedGeometry_Parms
		{
			UARTrackedGeometry* TrackedGeometry;
			UObject* WorldContextObject;
			FLinearColor Color;
			float OutlineThickness;
			float PersistForSeconds;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedGeometry;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutlineThickness;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PersistForSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::NewProp_TrackedGeometry = { "TrackedGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawTrackedGeometry_Parms, TrackedGeometry), Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawTrackedGeometry_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawTrackedGeometry_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::NewProp_OutlineThickness = { "OutlineThickness", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawTrackedGeometry_Parms, OutlineThickness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::NewProp_PersistForSeconds = { "PersistForSeconds", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventDebugDrawTrackedGeometry_Parms, PersistForSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::NewProp_TrackedGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::NewProp_OutlineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::NewProp_PersistForSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "AR AugmentedReality|Debug" },
		{ "Comment", "/** Given some real-world geometry being tracked by the Augmented Reality system, draw it on the screen for debugging purposes (rudimentary)*/" },
		{ "CPP_Default_Color", "(R=1.000000,G=1.000000,B=0.000000,A=0.750000)" },
		{ "CPP_Default_OutlineThickness", "5.000000" },
		{ "CPP_Default_PersistForSeconds", "0.000000" },
		{ "Keywords", "ar augmentedreality augmented reality tracked geometry debug draw" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Given some real-world geometry being tracked by the Augmented Reality system, draw it on the screen for debugging purposes (rudimentary)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "DebugDrawTrackedGeometry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::ARBlueprintLibrary_eventDebugDrawTrackedGeometry_Parms), Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName_Statics
	{
		struct ARBlueprintLibrary_eventFindTrackedPointsByName_Parms
		{
			FString PointName;
			TArray<UARTrackedPoint*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PointName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName_Statics::NewProp_PointName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName_Statics::NewProp_PointName = { "PointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventFindTrackedPointsByName_Parms, PointName), METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName_Statics::NewProp_PointName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName_Statics::NewProp_PointName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UARTrackedPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventFindTrackedPointsByName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName_Statics::NewProp_PointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/** @return a list of the tracked points with the given name */" },
		{ "Keywords", "ar augmentedreality augmented reality find point" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return a list of the tracked points with the given name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "FindTrackedPointsByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName_Statics::ARBlueprintLibrary_eventFindTrackedPointsByName_Parms), Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetAlignmentTransform_Statics
	{
		struct ARBlueprintLibrary_eventGetAlignmentTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAlignmentTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetAlignmentTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetAlignmentTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAlignmentTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetAlignmentTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Alignment" },
		{ "Comment", "/** @return the alignment transform, see \"SetAlignmentTransform\" */" },
		{ "DisplayName", "Get Alignment Transform" },
		{ "Keywords", "ar augmentedreality augmented reality alignment transform" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return the alignment transform, see \"SetAlignmentTransform\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetAlignmentTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetAlignmentTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetAlignmentTransform_Statics::ARBlueprintLibrary_eventGetAlignmentTransform_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetAlignmentTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAlignmentTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetAlignmentTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAlignmentTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetAlignmentTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetAlignmentTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics
	{
		struct ARBlueprintLibrary_eventGetAllGeometries_Parms
		{
			TArray<UARTrackedGeometry*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetAllGeometries_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "Comment", "/** @return a list of all the real-world geometry as currently seen by the Augmented Reality system */" },
		{ "DisplayName", "Get All AR Geometries" },
		{ "Keywords", "ar augmentedreality augmented reality tracking geometry anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return a list of all the real-world geometry as currently seen by the Augmented Reality system" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetAllGeometries", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::ARBlueprintLibrary_eventGetAllGeometries_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometriesByClass_Statics
	{
		struct ARBlueprintLibrary_eventGetAllGeometriesByClass_Parms
		{
			TSubclassOf<UARTrackedGeometry>  GeometryClass;
			TArray<UARTrackedGeometry*> ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_GeometryClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometriesByClass_Statics::NewProp_GeometryClass = { "GeometryClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetAllGeometriesByClass_Parms, GeometryClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometriesByClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometriesByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetAllGeometriesByClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometriesByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometriesByClass_Statics::NewProp_GeometryClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometriesByClass_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometriesByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometriesByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "Comment", "/** @return a list of all the real-world geometry of the specified class as currently seen by the Augmented Reality system */" },
		{ "DeterminesOutputType", "GeometryClass" },
		{ "DisplayName", "Get All AR Geometries By Class" },
		{ "Keywords", "ar augmentedreality augmented reality tracking geometry anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return a list of all the real-world geometry of the specified class as currently seen by the Augmented Reality system" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometriesByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetAllGeometriesByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometriesByClass_Statics::ARBlueprintLibrary_eventGetAllGeometriesByClass_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometriesByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometriesByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometriesByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometriesByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometriesByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometriesByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics
	{
		struct ARBlueprintLibrary_eventGetAllPins_Parms
		{
			TArray<UARPin*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetAllPins_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|ARPin" },
		{ "Comment", "/** Get a list of all the \\c UARPin objects that the Augmented Reality session is currently using to connect virtual objects to real-world, tracked locations. */" },
		{ "Keywords", "ar augmentedreality augmented reality tracking arpin anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Get a list of all the \\c UARPin objects that the Augmented Reality session is currently using to connect virtual objects to real-world, tracked locations." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetAllPins", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::ARBlueprintLibrary_eventGetAllPins_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics
	{
		struct ARBlueprintLibrary_eventGetAllTracked2DPoses_Parms
		{
			TArray<FARPose2D> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FARPose2D, METADATA_PARAMS(nullptr, 0) }; // 956988869
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetAllTracked2DPoses_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 956988869
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Pose Tracking" },
		{ "Comment", "/** @return all the 2D poses tracked by the AR system */" },
		{ "DisplayName", "Get All AR Tracked 2D Poses" },
		{ "Keywords", "ar augmentedreality augmented reality pose tracking" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return all the 2D poses tracked by the AR system" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetAllTracked2DPoses", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::ARBlueprintLibrary_eventGetAllTracked2DPoses_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics
	{
		struct ARBlueprintLibrary_eventGetAllTrackedEnvironmentCaptureProbes_Parms
		{
			TArray<UAREnvironmentCaptureProbe*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAREnvironmentCaptureProbe_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetAllTrackedEnvironmentCaptureProbes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllTrackedEnvironmentCaptureProbes is deprecated, use GetAllGeometriesByClass." },
		{ "DisplayName", "Get All AR Tracked Environment Probes" },
		{ "Keywords", "ar augmentedreality augmented reality tracking anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetAllTrackedEnvironmentCaptureProbes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::ARBlueprintLibrary_eventGetAllTrackedEnvironmentCaptureProbes_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics
	{
		struct ARBlueprintLibrary_eventGetAllTrackedImages_Parms
		{
			TArray<UARTrackedImage*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UARTrackedImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetAllTrackedImages_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllTrackedImages is deprecated, use GetAllGeometriesByClass." },
		{ "DisplayName", "Get All AR Tracked Images" },
		{ "Keywords", "ar augmentedreality augmented reality tracking images anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetAllTrackedImages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::ARBlueprintLibrary_eventGetAllTrackedImages_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics
	{
		struct ARBlueprintLibrary_eventGetAllTrackedPlanes_Parms
		{
			TArray<UARPlaneGeometry*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UARPlaneGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetAllTrackedPlanes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllTrackedPlanes is deprecated, use GetAllGeometriesByClass." },
		{ "DisplayName", "Get All AR Tracked Planes" },
		{ "Keywords", "ar augmentedreality augmented reality tracking geometry anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetAllTrackedPlanes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::ARBlueprintLibrary_eventGetAllTrackedPlanes_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics
	{
		struct ARBlueprintLibrary_eventGetAllTrackedPoints_Parms
		{
			TArray<UARTrackedPoint*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UARTrackedPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetAllTrackedPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllTrackedPoints is deprecated, use GetAllGeometriesByClass." },
		{ "eywords", "ar augmentedreality augmented reality tracking geometry anchor" },
		{ "KDisplayName", "Get All AR Tracked Points" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetAllTrackedPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::ARBlueprintLibrary_eventGetAllTrackedPoints_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics
	{
		struct ARBlueprintLibrary_eventGetAllTrackedPoses_Parms
		{
			TArray<UARTrackedPose*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UARTrackedPose_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetAllTrackedPoses_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Pose Tracking" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAllTrackedPoses is deprecated, use GetAllGeometriesByClass." },
		{ "DisplayName", "Get All AR Tracked 3D Poses" },
		{ "Keywords", "ar augmentedreality augmented reality pose tracking" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetAllTrackedPoses", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::ARBlueprintLibrary_eventGetAllTrackedPoses_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics
	{
		struct ARBlueprintLibrary_eventGetARSessionStatus_Parms
		{
			FARSessionStatus ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetARSessionStatus_Parms, ReturnValue), Z_Construct_UScriptStruct_FARSessionStatus, METADATA_PARAMS(nullptr, 0) }; // 4034589039
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/**\n\x09 * It is intended that you check the status of the Augmented Reality session on every frame and take action accordingly.\n\x09 * e.g. if the session stopped for an unexpected reason, you might give the user a prompt to re-start the session\n\x09 *\n\x09 * @return The status of a current Augmented Reality session: e.g. Running or Not running for a specific reason.\n\x09 */" },
		{ "DisplayName", "Get AR Session Status" },
		{ "Keywords", "ar augmentedreality augmented reality session start stop run running" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "It is intended that you check the status of the Augmented Reality session on every frame and take action accordingly.\ne.g. if the session stopped for an unexpected reason, you might give the user a prompt to re-start the session\n\n@return The status of a current Augmented Reality session: e.g. Running or Not running for a specific reason." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetARSessionStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics::ARBlueprintLibrary_eventGetARSessionStatus_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetARTexture_Statics
	{
		struct ARBlueprintLibrary_eventGetARTexture_Parms
		{
			EARTextureType TextureType;
			UARTexture* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextureType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetARTexture_Statics::NewProp_TextureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetARTexture_Statics::NewProp_TextureType = { "TextureType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetARTexture_Parms, TextureType), Z_Construct_UEnum_AugmentedReality_EARTextureType, METADATA_PARAMS(nullptr, 0) }; // 33872252
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetARTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetARTexture_Parms, ReturnValue), Z_Construct_UClass_UARTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetARTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetARTexture_Statics::NewProp_TextureType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetARTexture_Statics::NewProp_TextureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetARTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetARTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Texture" },
		{ "Comment", "/** @return the AR texture for the specified type */" },
		{ "DisplayName", "Get AR Texture" },
		{ "Keywords", "ar augmentedreality augmented reality texture" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return the AR texture for the specified type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetARTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetARTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetARTexture_Statics::ARBlueprintLibrary_eventGetARTexture_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetARTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetARTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetARTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetARTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetARTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetARTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetARWorldScale_Statics
	{
		struct ARBlueprintLibrary_eventGetARWorldScale_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetARWorldScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetARWorldScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetARWorldScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetARWorldScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetARWorldScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Alignment" },
		{ "Comment", "/** @return the AR world scale, see \"SetARWorldScale\" */" },
		{ "DisplayName", "Get AR World Scale" },
		{ "Keywords", "ar augmentedreality augmented reality world scale" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return the AR world scale, see \"SetARWorldScale\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetARWorldScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetARWorldScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetARWorldScale_Statics::ARBlueprintLibrary_eventGetARWorldScale_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetARWorldScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetARWorldScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetARWorldScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetARWorldScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetARWorldScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetARWorldScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics
	{
		struct ARBlueprintLibrary_eventGetCameraDepth_Parms
		{
			UARTextureCameraDepth* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetCameraDepth_Parms, ReturnValue), Z_Construct_UClass_UARTextureCameraDepth_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Camera" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetCameraDepth is deprecated, use GetARTexture." },
		{ "DisplayName", "Get AR Camera Depth" },
		{ "Keywords", "ar augmentedreality augmented reality camera image depth" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetCameraDepth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics::ARBlueprintLibrary_eventGetCameraDepth_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics
	{
		struct ARBlueprintLibrary_eventGetCameraImage_Parms
		{
			UARTextureCameraImage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetCameraImage_Parms, ReturnValue), Z_Construct_UClass_UARTextureCameraImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Camera" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetCameraImage is deprecated, use GetARTexture." },
		{ "DisplayName", "Get AR Camera Image" },
		{ "Keywords", "ar augmentedreality augmented reality camera image" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetCameraImage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics::ARBlueprintLibrary_eventGetCameraImage_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetCameraIntrinsics_Statics
	{
		struct ARBlueprintLibrary_eventGetCameraIntrinsics_Parms
		{
			FARCameraIntrinsics OutCameraIntrinsics;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutCameraIntrinsics;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetCameraIntrinsics_Statics::NewProp_OutCameraIntrinsics = { "OutCameraIntrinsics", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetCameraIntrinsics_Parms, OutCameraIntrinsics), Z_Construct_UScriptStruct_FARCameraIntrinsics, METADATA_PARAMS(nullptr, 0) }; // 2312594621
	void Z_Construct_UFunction_UARBlueprintLibrary_GetCameraIntrinsics_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventGetCameraIntrinsics_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetCameraIntrinsics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventGetCameraIntrinsics_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_GetCameraIntrinsics_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetCameraIntrinsics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetCameraIntrinsics_Statics::NewProp_OutCameraIntrinsics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetCameraIntrinsics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetCameraIntrinsics_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Geo Tracking" },
		{ "Comment", "/** @return the intrinsics of the AR camera. */" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return the intrinsics of the AR camera." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetCameraIntrinsics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetCameraIntrinsics", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetCameraIntrinsics_Statics::ARBlueprintLibrary_eventGetCameraIntrinsics_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetCameraIntrinsics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetCameraIntrinsics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetCameraIntrinsics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetCameraIntrinsics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetCameraIntrinsics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetCameraIntrinsics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics
	{
		struct ARBlueprintLibrary_eventGetCurrentLightEstimate_Parms
		{
			UARLightEstimate* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetCurrentLightEstimate_Parms, ReturnValue), Z_Construct_UClass_UARLightEstimate_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Light Estimate" },
		{ "Comment", "/**\n\x09 * An AugmentedReality session can be configured to provide light estimates.\n\x09 * The specific approach to light estimation can be configured by the \\c UARSessionConfig\n\x09 * specified during \\c StartARSession(). This function assumes that you will cast\n\x09 * the returned \\c UARLightEstimate to a derived type corresponding to your\n\x09 * session config.\n\x09 *\n\x09 * @return a \\c UARLighEstimate that can be cast to a derived class.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "An AugmentedReality session can be configured to provide light estimates.\nThe specific approach to light estimation can be configured by the \\c UARSessionConfig\nspecified during \\c StartARSession(). This function assumes that you will cast\nthe returned \\c UARLightEstimate to a derived type corresponding to your\nsession config.\n\n@return a \\c UARLighEstimate that can be cast to a derived class." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetCurrentLightEstimate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics::ARBlueprintLibrary_eventGetCurrentLightEstimate_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetNumberOfTrackedFacesSupported_Statics
	{
		struct ARBlueprintLibrary_eventGetNumberOfTrackedFacesSupported_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetNumberOfTrackedFacesSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetNumberOfTrackedFacesSupported_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetNumberOfTrackedFacesSupported_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetNumberOfTrackedFacesSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetNumberOfTrackedFacesSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Face Tracking" },
		{ "Comment", "/** @return the max number of faces can be tracked at the same time */" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return the max number of faces can be tracked at the same time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetNumberOfTrackedFacesSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetNumberOfTrackedFacesSupported", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetNumberOfTrackedFacesSupported_Statics::ARBlueprintLibrary_eventGetNumberOfTrackedFacesSupported_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetNumberOfTrackedFacesSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetNumberOfTrackedFacesSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetNumberOfTrackedFacesSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetNumberOfTrackedFacesSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetNumberOfTrackedFacesSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetNumberOfTrackedFacesSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics
	{
		struct ARBlueprintLibrary_eventGetObjectClassificationAtLocation_Parms
		{
			FVector InWorldLocation;
			EARObjectClassification OutClassification;
			FVector OutClassificationLocation;
			float MaxLocationDiff;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InWorldLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutClassification_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutClassification;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutClassificationLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLocationDiff;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::NewProp_InWorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::NewProp_InWorldLocation = { "InWorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetObjectClassificationAtLocation_Parms, InWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::NewProp_InWorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::NewProp_InWorldLocation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::NewProp_OutClassification_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::NewProp_OutClassification = { "OutClassification", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetObjectClassificationAtLocation_Parms, OutClassification), Z_Construct_UEnum_AugmentedReality_EARObjectClassification, METADATA_PARAMS(nullptr, 0) }; // 1555664985
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::NewProp_OutClassificationLocation = { "OutClassificationLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetObjectClassificationAtLocation_Parms, OutClassificationLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::NewProp_MaxLocationDiff = { "MaxLocationDiff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetObjectClassificationAtLocation_Parms, MaxLocationDiff), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventGetObjectClassificationAtLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventGetObjectClassificationAtLocation_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::NewProp_InWorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::NewProp_OutClassification_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::NewProp_OutClassification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::NewProp_OutClassificationLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::NewProp_MaxLocationDiff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Classification" },
		{ "Comment", "/**\n\x09 * Try to determine the classification of the object at a world space location\n\x09 * @InWorldLocation: the world location where the classification is needed\n\x09 * @OutClassification: the classification result\n\x09 * @OutClassificationLocation: the world location at where the classification is calculated\n\x09 * @MaxLocationDiff: the max distance between the specified world location and the classification location\n\x09 * @return: whether a valid classification result is calculated\n\x09*/" },
		{ "CPP_Default_MaxLocationDiff", "10.000000" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Try to determine the classification of the object at a world space location\n@InWorldLocation: the world location where the classification is needed\n@OutClassification: the classification result\n@OutClassificationLocation: the world location at where the classification is calculated\n@MaxLocationDiff: the max distance between the specified world location and the classification location\n@return: whether a valid classification result is calculated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetObjectClassificationAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::ARBlueprintLibrary_eventGetObjectClassificationAtLocation_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics
	{
		struct ARBlueprintLibrary_eventGetPersonSegmentationDepthImage_Parms
		{
			UARTexture* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetPersonSegmentationDepthImage_Parms, ReturnValue), Z_Construct_UClass_UARTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Person Segmentation" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetPersonSegmentationDepthImage is deprecated, use GetARTexture." },
		{ "DisplayName", "Get AR Person Segmentation Depth Image" },
		{ "Keywords", "ar augmentedreality augmented reality person segmentation depth image" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetPersonSegmentationDepthImage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics::ARBlueprintLibrary_eventGetPersonSegmentationDepthImage_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics
	{
		struct ARBlueprintLibrary_eventGetPersonSegmentationImage_Parms
		{
			UARTexture* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetPersonSegmentationImage_Parms, ReturnValue), Z_Construct_UClass_UARTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Person Segmentation" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetPersonSegmentationImage is deprecated, use GetARTexture." },
		{ "DisplayName", "Get AR Person Segmentation Image" },
		{ "Keywords", "ar augmentedreality augmented reality person segmentation image" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetPersonSegmentationImage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics::ARBlueprintLibrary_eventGetPersonSegmentationImage_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics
	{
		struct ARBlueprintLibrary_eventGetPointCloud_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetPointCloud_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "Comment", "/** @return the raw point cloud view of the AR scene */" },
		{ "DisplayName", "Get AR Point Cloud" },
		{ "Keywords", "ar augmentedreality augmented reality tracking point cloud" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return the raw point cloud view of the AR scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetPointCloud", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::ARBlueprintLibrary_eventGetPointCloud_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics
	{
		struct ARBlueprintLibrary_eventGetSessionConfig_Parms
		{
			UARSessionConfig* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetSessionConfig_Parms, ReturnValue), Z_Construct_UClass_UARSessionConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/** @return the configuration that the current session was started with. */" },
		{ "DisplayName", "Get AR Session Config" },
		{ "Keywords", "ar augmentedreality augmented reality session" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return the configuration that the current session was started with." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetSessionConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics::ARBlueprintLibrary_eventGetSessionConfig_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics
	{
		struct ARBlueprintLibrary_eventGetSupportedVideoFormats_Parms
		{
			EARSessionType SessionType;
			TArray<FARVideoFormat> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SessionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SessionType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::NewProp_SessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetSupportedVideoFormats_Parms, SessionType), Z_Construct_UEnum_AugmentedReality_EARSessionType, METADATA_PARAMS(nullptr, 0) }; // 3810857621
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FARVideoFormat, METADATA_PARAMS(nullptr, 0) }; // 3309039363
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetSupportedVideoFormats_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3309039363
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::NewProp_SessionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::NewProp_SessionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Capabilities" },
		{ "Comment", "/** @return The list of supported video formats for this device */" },
		{ "DisplayName", "Get Supported AR Video Formats" },
		{ "Keywords", "ar augmentedreality augmented reality config video formats" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return The list of supported video formats for this device" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetSupportedVideoFormats", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::ARBlueprintLibrary_eventGetSupportedVideoFormats_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics
	{
		struct ARBlueprintLibrary_eventGetTrackingQuality_Parms
		{
			EARTrackingQuality ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetTrackingQuality_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARTrackingQuality, METADATA_PARAMS(nullptr, 0) }; // 3747873437
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "Comment", "/** @return how well the tracking system is performing at the moment */" },
		{ "DisplayName", "Get AR Tracking Quality" },
		{ "Keywords", "ar augmentedreality augmented reality tracking quality" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return how well the tracking system is performing at the moment" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetTrackingQuality", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::ARBlueprintLibrary_eventGetTrackingQuality_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics
	{
		struct ARBlueprintLibrary_eventGetTrackingQualityReason_Parms
		{
			EARTrackingQualityReason ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetTrackingQualityReason_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason, METADATA_PARAMS(nullptr, 0) }; // 3099192326
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "Comment", "/** @return The reason for the current limited tracking state */" },
		{ "DisplayName", "Get AR Tracking Quality Reason" },
		{ "Keywords", "ar augmentedreality augmented reality tracking quality reason" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return The reason for the current limited tracking state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetTrackingQualityReason", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::ARBlueprintLibrary_eventGetTrackingQualityReason_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics
	{
		struct ARBlueprintLibrary_eventGetWorldMappingStatus_Parms
		{
			EARWorldMappingState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventGetWorldMappingStatus_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARWorldMappingState, METADATA_PARAMS(nullptr, 0) }; // 2420642953
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "Comment", "/** @return the current world mapping status for the AR world */" },
		{ "DisplayName", "Get AR World Mapping Status" },
		{ "Keywords", "ar augmentedreality augmented reality tracking anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return the current world mapping status for the AR world" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "GetWorldMappingStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::ARBlueprintLibrary_eventGetWorldMappingStatus_Parms), Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreReady_Statics
	{
		struct ARBlueprintLibrary_eventIsARPinLocalStoreReady_Parms
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
	void Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventIsARPinLocalStoreReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventIsARPinLocalStoreReady_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|ARPin" },
		{ "Comment", "/**\n\x09 * Is ARPin Local Store Ready\n\x09 *\n\x09 * @return\x09\x09\x09\x09\x09True if local store is ready for use.\n\x09 */" },
		{ "Keywords", "ar augmentedreality augmented reality tracking arpin anchor LocalStore" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Is ARPin Local Store Ready\n\n@return                                      True if local store is ready for use." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "IsARPinLocalStoreReady", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreReady_Statics::ARBlueprintLibrary_eventIsARPinLocalStoreReady_Parms), Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreSupported_Statics
	{
		struct ARBlueprintLibrary_eventIsARPinLocalStoreSupported_Parms
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
	void Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventIsARPinLocalStoreSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventIsARPinLocalStoreSupported_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreSupported_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|ARPin" },
		{ "Comment", "/**\n\x09 * Is ARPin Local Store Supported\n\x09 *\n\x09 * @return\x09\x09\x09\x09\x09True if Local Pin saving is supported by the device/platform.\n\x09 */" },
		{ "Keywords", "ar augmentedreality augmented reality tracking arpin anchor LocalStore" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Is ARPin Local Store Supported\n\n@return                                      True if Local Pin saving is supported by the device/platform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "IsARPinLocalStoreSupported", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreSupported_Statics::ARBlueprintLibrary_eventIsARPinLocalStoreSupported_Parms), Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics
	{
		struct ARBlueprintLibrary_eventIsARSupported_Parms
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
	void Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventIsARSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventIsARSupported_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/**\n\x09 * Checks if the current device can support AR\n\x09 *\n\x09 */" },
		{ "DisplayName", "Is AR Supported" },
		{ "Keywords", "ar augmentedreality augmented reality session start run running" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Checks if the current device can support AR" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "IsARSupported", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::ARBlueprintLibrary_eventIsARSupported_Parms), Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics
	{
		struct ARBlueprintLibrary_eventIsSceneReconstructionSupported_Parms
		{
			EARSessionType SessionType;
			EARSceneReconstruction SceneReconstructionMethod;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SessionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SessionType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SceneReconstructionMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SceneReconstructionMethod;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::NewProp_SessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventIsSceneReconstructionSupported_Parms, SessionType), Z_Construct_UEnum_AugmentedReality_EARSessionType, METADATA_PARAMS(nullptr, 0) }; // 3810857621
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::NewProp_SceneReconstructionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::NewProp_SceneReconstructionMethod = { "SceneReconstructionMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventIsSceneReconstructionSupported_Parms, SceneReconstructionMethod), Z_Construct_UEnum_AugmentedReality_EARSceneReconstruction, METADATA_PARAMS(nullptr, 0) }; // 2897416406
	void Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventIsSceneReconstructionSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventIsSceneReconstructionSupported_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::NewProp_SessionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::NewProp_SessionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::NewProp_SceneReconstructionMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::NewProp_SceneReconstructionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/** @return if a particular scene reconstruction method is supported with the specified session type on the current platform */" },
		{ "DisplayName", "Is AR Scene Reconstruction Supported" },
		{ "Keywords", "ar augmentedreality augmented reality session scene reconstruction" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return if a particular scene reconstruction method is supported with the specified session type on the current platform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "IsSceneReconstructionSupported", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::ARBlueprintLibrary_eventIsSceneReconstructionSupported_Parms), Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics
	{
		struct ARBlueprintLibrary_eventIsSessionTrackingFeatureSupported_Parms
		{
			EARSessionType SessionType;
			EARSessionTrackingFeature SessionTrackingFeature;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SessionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SessionType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SessionTrackingFeature_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SessionTrackingFeature;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_SessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventIsSessionTrackingFeatureSupported_Parms, SessionType), Z_Construct_UEnum_AugmentedReality_EARSessionType, METADATA_PARAMS(nullptr, 0) }; // 3810857621
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_SessionTrackingFeature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_SessionTrackingFeature = { "SessionTrackingFeature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventIsSessionTrackingFeatureSupported_Parms, SessionTrackingFeature), Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature, METADATA_PARAMS(nullptr, 0) }; // 2993079397
	void Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventIsSessionTrackingFeatureSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventIsSessionTrackingFeatureSupported_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_SessionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_SessionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_SessionTrackingFeature_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_SessionTrackingFeature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/** @return if a particular session feature is supported with the specified session type on the current platform */" },
		{ "DisplayName", "Is AR Session Tracking Feature Supported" },
		{ "Keywords", "ar augmentedreality augmented reality session tracking feature" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return if a particular session feature is supported with the specified session type on the current platform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "IsSessionTrackingFeatureSupported", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::ARBlueprintLibrary_eventIsSessionTrackingFeatureSupported_Parms), Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics
	{
		struct ARBlueprintLibrary_eventIsSessionTypeSupported_Parms
		{
			EARSessionType SessionType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SessionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SessionType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::NewProp_SessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventIsSessionTypeSupported_Parms, SessionType), Z_Construct_UEnum_AugmentedReality_EARSessionType, METADATA_PARAMS(nullptr, 0) }; // 3810857621
	void Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventIsSessionTypeSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventIsSessionTypeSupported_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::NewProp_SessionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::NewProp_SessionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracking" },
		{ "Comment", "/**\n\x09 * Test whether this type of session is supported by the current Augmented Reality platform.\n\x09 * e.g. is your device capable of doing positional tracking or orientation only?\n\x09 */" },
		{ "DisplayName", "Is AR Session Type Supported" },
		{ "Keywords", "ar augmentedreality augmented reality tracking" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Test whether this type of session is supported by the current Augmented Reality platform.\ne.g. is your device capable of doing positional tracking or orientation only?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "IsSessionTypeSupported", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::ARBlueprintLibrary_eventIsSessionTypeSupported_Parms), Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics
	{
		struct ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms
		{
			FVector2D ScreenCoord;
			bool bTestFeaturePoints;
			bool bTestGroundPlane;
			bool bTestPlaneExtents;
			bool bTestPlaneBoundaryPolygon;
			TArray<FARTraceResult> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenCoord_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenCoord;
		static void NewProp_bTestFeaturePoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestFeaturePoints;
		static void NewProp_bTestGroundPlane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestGroundPlane;
		static void NewProp_bTestPlaneExtents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestPlaneExtents;
		static void NewProp_bTestPlaneBoundaryPolygon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestPlaneBoundaryPolygon;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_ScreenCoord_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_ScreenCoord = { "ScreenCoord", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms, ScreenCoord), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_ScreenCoord_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_ScreenCoord_MetaData)) };
	void Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestFeaturePoints_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms*)Obj)->bTestFeaturePoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestFeaturePoints = { "bTestFeaturePoints", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestFeaturePoints_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestGroundPlane_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms*)Obj)->bTestGroundPlane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestGroundPlane = { "bTestGroundPlane", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestGroundPlane_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestPlaneExtents_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms*)Obj)->bTestPlaneExtents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestPlaneExtents = { "bTestPlaneExtents", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestPlaneExtents_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestPlaneBoundaryPolygon_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms*)Obj)->bTestPlaneBoundaryPolygon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestPlaneBoundaryPolygon = { "bTestPlaneBoundaryPolygon", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestPlaneBoundaryPolygon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(nullptr, 0) }; // 3108337464
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3108337464
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_ScreenCoord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestFeaturePoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestGroundPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestPlaneExtents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_bTestPlaneBoundaryPolygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "AR AugmentedReality|Trace Result" },
		{ "Comment", "/**\n\x09 * Perform a line trace against any real-world geometry as tracked by the AR system.\n\x09 *\n\x09 * @param ScreenCoord\x09         Coordinate of the point on the screen from which to cast a ray into the tracking space.\n\x09 *\n\x09 * @return a list of \\c FARTraceResult sorted by distance from camera.\n\x09 */" },
		{ "CPP_Default_bTestFeaturePoints", "true" },
		{ "CPP_Default_bTestGroundPlane", "true" },
		{ "CPP_Default_bTestPlaneBoundaryPolygon", "true" },
		{ "CPP_Default_bTestPlaneExtents", "true" },
		{ "Keywords", "ar augmentedreality augmented reality tracking tracing linetrace" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Perform a line trace against any real-world geometry as tracked by the AR system.\n\n@param ScreenCoord            Coordinate of the point on the screen from which to cast a ray into the tracking space.\n\n@return a list of \\c FARTraceResult sorted by distance from camera." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "LineTraceTrackedObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::ARBlueprintLibrary_eventLineTraceTrackedObjects_Parms), Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics
	{
		struct ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms
		{
			FVector Start;
			FVector End;
			bool bTestFeaturePoints;
			bool bTestGroundPlane;
			bool bTestPlaneExtents;
			bool bTestPlaneBoundaryPolygon;
			TArray<FARTraceResult> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static void NewProp_bTestFeaturePoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestFeaturePoints;
		static void NewProp_bTestGroundPlane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestGroundPlane;
		static void NewProp_bTestPlaneExtents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestPlaneExtents;
		static void NewProp_bTestPlaneBoundaryPolygon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestPlaneBoundaryPolygon;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_End_MetaData)) };
	void Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestFeaturePoints_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms*)Obj)->bTestFeaturePoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestFeaturePoints = { "bTestFeaturePoints", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestFeaturePoints_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestGroundPlane_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms*)Obj)->bTestGroundPlane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestGroundPlane = { "bTestGroundPlane", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestGroundPlane_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestPlaneExtents_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms*)Obj)->bTestPlaneExtents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestPlaneExtents = { "bTestPlaneExtents", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestPlaneExtents_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestPlaneBoundaryPolygon_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms*)Obj)->bTestPlaneBoundaryPolygon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestPlaneBoundaryPolygon = { "bTestPlaneBoundaryPolygon", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestPlaneBoundaryPolygon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(nullptr, 0) }; // 3108337464
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3108337464
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestFeaturePoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestGroundPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestPlaneExtents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_bTestPlaneBoundaryPolygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "AR AugmentedReality|Trace Result" },
		{ "Comment", "/**\n\x09 * Perform a line trace against any real-world geometry as tracked by the AR system.\n\x09 *\n\x09 * @param Start\x09\x09\x09\x09\x09Start point of the trace, in world space.\n\x09 * @param End\x09\x09\x09\x09\x09""End point of the trace, in world space.\n\x09 *\n\x09 * @return a list of \\c FARTraceResult sorted by distance from camera.\n\x09 */" },
		{ "CPP_Default_bTestFeaturePoints", "true" },
		{ "CPP_Default_bTestGroundPlane", "true" },
		{ "CPP_Default_bTestPlaneBoundaryPolygon", "true" },
		{ "CPP_Default_bTestPlaneExtents", "true" },
		{ "Keywords", "ar augmentedreality augmented reality tracking tracing linetrace" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Perform a line trace against any real-world geometry as tracked by the AR system.\n\n@param Start                                 Start point of the trace, in world space.\n@param End                                   End point of the trace, in world space.\n\n@return a list of \\c FARTraceResult sorted by distance from camera." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "LineTraceTrackedObjects3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::ARBlueprintLibrary_eventLineTraceTrackedObjects3D_Parms), Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_LoadARPinsFromLocalStore_Statics
	{
		struct ARBlueprintLibrary_eventLoadARPinsFromLocalStore_Parms
		{
			TMap<FName,UARPin*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LoadARPinsFromLocalStore_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LoadARPinsFromLocalStore_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_LoadARPinsFromLocalStore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventLoadARPinsFromLocalStore_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_LoadARPinsFromLocalStore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LoadARPinsFromLocalStore_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LoadARPinsFromLocalStore_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_LoadARPinsFromLocalStore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_LoadARPinsFromLocalStore_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|ARPin" },
		{ "Comment", "/**\n\x09 * Load all ARPins from local save\n\x09 * Note: Multiple loads of a saved pin may result in duplicate pins OR overwritten pins.  It is reccomended to only load once.\n\x09 *\n\x09 * @return\x09\x09\x09\x09\x09Map of SaveName:ARPin.\n\x09 */" },
		{ "Keywords", "ar augmentedreality augmented reality tracking arpin anchor LocalStore" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Load all ARPins from local save\nNote: Multiple loads of a saved pin may result in duplicate pins OR overwritten pins.  It is reccomended to only load once.\n\n@return                                      Map of SaveName:ARPin." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_LoadARPinsFromLocalStore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "LoadARPinsFromLocalStore", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_LoadARPinsFromLocalStore_Statics::ARBlueprintLibrary_eventLoadARPinsFromLocalStore_Parms), Z_Construct_UFunction_UARBlueprintLibrary_LoadARPinsFromLocalStore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_LoadARPinsFromLocalStore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_LoadARPinsFromLocalStore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_LoadARPinsFromLocalStore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_LoadARPinsFromLocalStore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_LoadARPinsFromLocalStore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_PauseARSession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_PauseARSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/** Pause a running Augmented Reality session without clearing existing state. */" },
		{ "DisplayName", "Pause AR Session" },
		{ "Keywords", "ar augmentedreality augmented reality session stop run running" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Pause a running Augmented Reality session without clearing existing state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_PauseARSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "PauseARSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_PauseARSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PauseARSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_PauseARSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_PauseARSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics
	{
		struct ARBlueprintLibrary_eventPinComponent_Parms
		{
			USceneComponent* ComponentToPin;
			FTransform PinToWorldTransform;
			UARTrackedGeometry* TrackedGeometry;
			FName DebugName;
			UARPin* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToPin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentToPin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinToWorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinToWorldTransform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_ComponentToPin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_ComponentToPin = { "ComponentToPin", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponent_Parms, ComponentToPin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_ComponentToPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_ComponentToPin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_PinToWorldTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_PinToWorldTransform = { "PinToWorldTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponent_Parms, PinToWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_PinToWorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_PinToWorldTransform_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_TrackedGeometry = { "TrackedGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponent_Parms, TrackedGeometry), Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_DebugName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponent_Parms, DebugName), METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_DebugName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_DebugName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponent_Parms, ReturnValue), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_ComponentToPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_PinToWorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_TrackedGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_DebugName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "AR AugmentedReality|ARPin" },
		{ "Comment", "/**\n\x09 * Pin an Unreal Component to a location in tracking spce (i.e. the real world).\n\x09 *\n\x09 * @param ComponentToPin         The component that should be pinned.\n\x09 * @param PinToWorldTransform    A transform (in Unreal World Space) that corresponds to\n\x09 *                               a physical location where the component should be pinned.\n\x09 * @param TrackedGeometry        An optional, real-world geometry that is recognized by the\n\x09 *                               AR system; any correction to the position of this geometry\n\x09 *                               will be applied to the pinned component.\n\x09 * @param DebugName              An optional name that will be displayed when this\n\x09 *                               pin is being drawn for debugging purposes.\n\x09 *\n\x09 * @return an object representing the pin that connects \\c ComponentToPin component to a real-world\n\x09 *         location and optionally to the \\c TrackedGeometry.\n\x09 */" },
		{ "CPP_Default_DebugName", "None" },
		{ "CPP_Default_TrackedGeometry", "None" },
		{ "Keywords", "ar augmentedreality augmented reality tracking arpin tracked geometry pinning anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Pin an Unreal Component to a location in tracking spce (i.e. the real world).\n\n@param ComponentToPin         The component that should be pinned.\n@param PinToWorldTransform    A transform (in Unreal World Space) that corresponds to\n                              a physical location where the component should be pinned.\n@param TrackedGeometry        An optional, real-world geometry that is recognized by the\n                              AR system; any correction to the position of this geometry\n                              will be applied to the pinned component.\n@param DebugName              An optional name that will be displayed when this\n                              pin is being drawn for debugging purposes.\n\n@return an object representing the pin that connects \\c ComponentToPin component to a real-world\n        location and optionally to the \\c TrackedGeometry." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "PinComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::ARBlueprintLibrary_eventPinComponent_Parms), Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_PinComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics
	{
		struct ARBlueprintLibrary_eventPinComponentToARPin_Parms
		{
			USceneComponent* ComponentToPin;
			UARPin* Pin;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToPin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentToPin;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pin;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics::NewProp_ComponentToPin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics::NewProp_ComponentToPin = { "ComponentToPin", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponentToARPin_Parms, ComponentToPin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics::NewProp_ComponentToPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics::NewProp_ComponentToPin_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics::NewProp_Pin = { "Pin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponentToARPin_Parms, Pin), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventPinComponentToARPin_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventPinComponentToARPin_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics::NewProp_ComponentToPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics::NewProp_Pin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|ARPin" },
		{ "Comment", "/**\n\x09 * Associate a component with an ARPin, so that its transform will be updated by the pin.  Any previously associated component will be detached.\n\x09 *\n\x09 * @param ComponentToPin\x09The Component which will be updated by the Pin.\n\x09 * @param Pin\x09\x09\x09\x09The Pin which the component will be updated by.\n\x09 *\n\x09 * @return\x09\x09\x09\x09\x09True if the operation was successful.\n\x09 */" },
		{ "Keywords", "ar augmentedreality augmented reality tracking arpin tracked geometry pinning anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Associate a component with an ARPin, so that its transform will be updated by the pin.  Any previously associated component will be detached.\n\n@param ComponentToPin        The Component which will be updated by the Pin.\n@param Pin                           The Pin which the component will be updated by.\n\n@return                                      True if the operation was successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "PinComponentToARPin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics::ARBlueprintLibrary_eventPinComponentToARPin_Parms), Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics
	{
		struct ARBlueprintLibrary_eventPinComponentToTraceResult_Parms
		{
			USceneComponent* ComponentToPin;
			FARTraceResult TraceResult;
			FName DebugName;
			UARPin* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToPin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentToPin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_ComponentToPin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_ComponentToPin = { "ComponentToPin", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponentToTraceResult_Parms, ComponentToPin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_ComponentToPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_ComponentToPin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_TraceResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_TraceResult = { "TraceResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponentToTraceResult_Parms, TraceResult), Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_TraceResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_TraceResult_MetaData)) }; // 3108337464
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_DebugName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponentToTraceResult_Parms, DebugName), METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_DebugName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_DebugName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventPinComponentToTraceResult_Parms, ReturnValue), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_ComponentToPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_TraceResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_DebugName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "AR AugmentedReality|ARPin" },
		{ "Comment", "/**\n\x09 * A convenient version of \\c PinComponent() that can be used in conjunction\n\x09 * with a result of a \\c LineTraceTrackedObjects call.\n\x09 */" },
		{ "CPP_Default_DebugName", "None" },
		{ "Keywords", "ar augmentedreality augmented reality tracking arpin tracked geometry pinning anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "A convenient version of \\c PinComponent() that can be used in conjunction\nwith a result of a \\c LineTraceTrackedObjects call." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "PinComponentToTraceResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::ARBlueprintLibrary_eventPinComponentToTraceResult_Parms), Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_RemoveAllARPinsFromLocalStore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_RemoveAllARPinsFromLocalStore_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|ARPin" },
		{ "Comment", "/**\n\x09 * Remove all ARPins from the local store\n\x09 */" },
		{ "Keywords", "ar augmentedreality augmented reality tracking arpin anchor LocalStore" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Remove all ARPins from the local store" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_RemoveAllARPinsFromLocalStore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "RemoveAllARPinsFromLocalStore", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_RemoveAllARPinsFromLocalStore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_RemoveAllARPinsFromLocalStore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_RemoveAllARPinsFromLocalStore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_RemoveAllARPinsFromLocalStore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_RemoveARPinFromLocalStore_Statics
	{
		struct ARBlueprintLibrary_eventRemoveARPinFromLocalStore_Parms
		{
			FName InSaveName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSaveName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_RemoveARPinFromLocalStore_Statics::NewProp_InSaveName = { "InSaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventRemoveARPinFromLocalStore_Parms, InSaveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_RemoveARPinFromLocalStore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_RemoveARPinFromLocalStore_Statics::NewProp_InSaveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_RemoveARPinFromLocalStore_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|ARPin" },
		{ "Comment", "/**\n\x09 * Remove an ARPin from the local store\n\x09 * @param InName\x09\x09\x09The save name to remove.\n\x09 */" },
		{ "Keywords", "ar augmentedreality augmented reality tracking arpin anchor LocalStore" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Remove an ARPin from the local store\n@param InName                        The save name to remove." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_RemoveARPinFromLocalStore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "RemoveARPinFromLocalStore", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_RemoveARPinFromLocalStore_Statics::ARBlueprintLibrary_eventRemoveARPinFromLocalStore_Parms), Z_Construct_UFunction_UARBlueprintLibrary_RemoveARPinFromLocalStore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_RemoveARPinFromLocalStore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_RemoveARPinFromLocalStore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_RemoveARPinFromLocalStore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_RemoveARPinFromLocalStore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_RemoveARPinFromLocalStore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics
	{
		struct ARBlueprintLibrary_eventRemovePin_Parms
		{
			UARPin* PinToRemove;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PinToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics::NewProp_PinToRemove = { "PinToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventRemovePin_Parms, PinToRemove), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics::NewProp_PinToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|ARPin" },
		{ "Comment", "/** Remove a pin such that it no longer updates the associated component. */" },
		{ "Keywords", "ar augmentedreality augmented reality tracking arpin tracked geometry pinning anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Remove a pin such that it no longer updates the associated component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "RemovePin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics::ARBlueprintLibrary_eventRemovePin_Parms), Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_RemovePin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_ResizeXRCamera_Statics
	{
		struct ARBlueprintLibrary_eventResizeXRCamera_Parms
		{
			FIntPoint InSize;
			FIntPoint ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_ResizeXRCamera_Statics::NewProp_InSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_ResizeXRCamera_Statics::NewProp_InSize = { "InSize", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventResizeXRCamera_Parms, InSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_ResizeXRCamera_Statics::NewProp_InSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_ResizeXRCamera_Statics::NewProp_InSize_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_ResizeXRCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventResizeXRCamera_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_ResizeXRCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_ResizeXRCamera_Statics::NewProp_InSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_ResizeXRCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_ResizeXRCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR" },
		{ "Comment", "/** Change screen size of Mixed Reality Capture camera. */" },
		{ "Keywords", "ar all" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Change screen size of Mixed Reality Capture camera." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_ResizeXRCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "ResizeXRCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_ResizeXRCamera_Statics::ARBlueprintLibrary_eventResizeXRCamera_Parms), Z_Construct_UFunction_UARBlueprintLibrary_ResizeXRCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_ResizeXRCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_ResizeXRCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_ResizeXRCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_ResizeXRCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_ResizeXRCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore_Statics
	{
		struct ARBlueprintLibrary_eventSaveARPinToLocalStore_Parms
		{
			FName InSaveName;
			UARPin* InPin;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSaveName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPin;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore_Statics::NewProp_InSaveName = { "InSaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventSaveARPinToLocalStore_Parms, InSaveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore_Statics::NewProp_InPin = { "InPin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventSaveARPinToLocalStore_Parms, InPin), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventSaveARPinToLocalStore_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventSaveARPinToLocalStore_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore_Statics::NewProp_InSaveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore_Statics::NewProp_InPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|ARPin" },
		{ "Comment", "/**\n\x09 * Save an ARPin to local store\n\x09 * @param InName\x09\x09\x09The save name for the pin.\n\x09 * @param InPin\x09\x09\x09\x09The ARPin which will be saved to the local store.\n\x09 *\n\x09 * @return\x09\x09\x09\x09\x09True if saved successfully.\n\x09 */" },
		{ "Keywords", "ar augmentedreality augmented reality tracking arpin anchor LocalStore" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Save an ARPin to local store\n@param InName                        The save name for the pin.\n@param InPin                         The ARPin which will be saved to the local store.\n\n@return                                      True if saved successfully." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "SaveARPinToLocalStore", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore_Statics::ARBlueprintLibrary_eventSaveARPinToLocalStore_Parms), Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics
	{
		struct ARBlueprintLibrary_eventSetAlignmentTransform_Parms
		{
			FTransform InAlignmentTransform;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAlignmentTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAlignmentTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::NewProp_InAlignmentTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::NewProp_InAlignmentTransform = { "InAlignmentTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventSetAlignmentTransform_Parms, InAlignmentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::NewProp_InAlignmentTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::NewProp_InAlignmentTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::NewProp_InAlignmentTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Alignment" },
		{ "Comment", "/**\n\x09 * Set a transform that will be applied to the tracking space. This effectively moves any camera\n\x09 * possessed by the Augmented Reality system such that it is pointing at a different spot\n\x09 * in Unreal's World Space. This is often done to support AR scenarios that rely on static\n\x09 * geometry and/or lighting.\n\x09 *\n\x09 * Note: any movable components that are pinned will appear to stay in place, while anything\n\x09 * not pinned or is not movable (static or stationary) will appear to move.\n\x09 *\n\x09 * \\see PinComponent\n\x09 * \\see PinComponentToTraceResult\n\x09 */" },
		{ "DisplayName", "Set AR Alignment Transform" },
		{ "Keywords", "ar augmentedreality augmented reality tracking alignment" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Set a transform that will be applied to the tracking space. This effectively moves any camera\npossessed by the Augmented Reality system such that it is pointing at a different spot\nin Unreal's World Space. This is often done to support AR scenarios that rely on static\ngeometry and/or lighting.\n\nNote: any movable components that are pinned will appear to stay in place, while anything\nnot pinned or is not movable (static or stationary) will appear to move.\n\n\\see PinComponent\n\\see PinComponentToTraceResult" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "SetAlignmentTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::ARBlueprintLibrary_eventSetAlignmentTransform_Parms), Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics
	{
		struct ARBlueprintLibrary_eventSetARWorldOriginLocationAndRotation_Parms
		{
			FVector OriginLocation;
			FRotator OriginRotation;
			bool bIsTransformInWorldSpace;
			bool bMaintainUpDirection;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginRotation;
		static void NewProp_bIsTransformInWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTransformInWorldSpace;
		static void NewProp_bMaintainUpDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainUpDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::NewProp_OriginLocation = { "OriginLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventSetARWorldOriginLocationAndRotation_Parms, OriginLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::NewProp_OriginRotation = { "OriginRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventSetARWorldOriginLocationAndRotation_Parms, OriginRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::NewProp_bIsTransformInWorldSpace_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventSetARWorldOriginLocationAndRotation_Parms*)Obj)->bIsTransformInWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::NewProp_bIsTransformInWorldSpace = { "bIsTransformInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventSetARWorldOriginLocationAndRotation_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::NewProp_bIsTransformInWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::NewProp_bMaintainUpDirection_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventSetARWorldOriginLocationAndRotation_Parms*)Obj)->bMaintainUpDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::NewProp_bMaintainUpDirection = { "bMaintainUpDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventSetARWorldOriginLocationAndRotation_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::NewProp_bMaintainUpDirection_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::NewProp_OriginLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::NewProp_OriginRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::NewProp_bIsTransformInWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::NewProp_bMaintainUpDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Alignment" },
		{ "Comment", "/**\n\x09 * For a point P in the AR local space, whose location and rotation are \"OriginLocation\" and \"OriginRotation\" in the world space\n\x09 * modify the alignment transform so that the same point P will be transformed to the origin in the world space.\n\x09 * @bIsTransformInWorldSpace: whether \"OriginLocation\" and \"OriginRotation\" are specified in UE4's world space or AR system's local space.\n\x09 * @bMaintainUpDirection: if set, only the yaw roation of the alignment transform will be modified, pitch and roll will be zeroed out.\n\x09 */" },
		{ "CPP_Default_bIsTransformInWorldSpace", "true" },
		{ "CPP_Default_bMaintainUpDirection", "true" },
		{ "DisplayName", "Set AR World Origin Location and Rotation" },
		{ "Keywords", "ar augmentedreality augmented reality world origin" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "For a point P in the AR local space, whose location and rotation are \"OriginLocation\" and \"OriginRotation\" in the world space\nmodify the alignment transform so that the same point P will be transformed to the origin in the world space.\n@bIsTransformInWorldSpace: whether \"OriginLocation\" and \"OriginRotation\" are specified in UE4's world space or AR system's local space.\n@bMaintainUpDirection: if set, only the yaw roation of the alignment transform will be modified, pitch and roll will be zeroed out." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "SetARWorldOriginLocationAndRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::ARBlueprintLibrary_eventSetARWorldOriginLocationAndRotation_Parms), Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldScale_Statics
	{
		struct ARBlueprintLibrary_eventSetARWorldScale_Parms
		{
			float InWorldScale;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InWorldScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldScale_Statics::NewProp_InWorldScale = { "InWorldScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventSetARWorldScale_Parms, InWorldScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldScale_Statics::NewProp_InWorldScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Alignment" },
		{ "Comment", "/**\n\x09 * Helper function that modifies the alignment transform scale so that virtual content in the world space appears to be \"scaled\".\n\x09 * Note that ultimately the scaling effect is achieved through modifying the translation of the camera:\n\x09 * moving the camera further away from the origin makes objects appear to be smaller, and vice versa.\n\x09 */" },
		{ "DisplayName", "Set AR World Scale" },
		{ "Keywords", "ar augmentedreality augmented reality world scale" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Helper function that modifies the alignment transform scale so that virtual content in the world space appears to be \"scaled\".\nNote that ultimately the scaling effect is achieved through modifying the translation of the camera:\nmoving the camera further away from the origin makes objects appear to be smaller, and vice versa." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "SetARWorldScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldScale_Statics::ARBlueprintLibrary_eventSetARWorldScale_Parms), Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_SetEnabledXRCamera_Statics
	{
		struct ARBlueprintLibrary_eventSetEnabledXRCamera_Parms
		{
			bool bOnOff;
		};
		static void NewProp_bOnOff_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnOff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UARBlueprintLibrary_SetEnabledXRCamera_Statics::NewProp_bOnOff_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventSetEnabledXRCamera_Parms*)Obj)->bOnOff = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_SetEnabledXRCamera_Statics::NewProp_bOnOff = { "bOnOff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventSetEnabledXRCamera_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_SetEnabledXRCamera_Statics::NewProp_bOnOff_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_SetEnabledXRCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_SetEnabledXRCamera_Statics::NewProp_bOnOff,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_SetEnabledXRCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR" },
		{ "Comment", "/** Enable or disable Mixed Reality Capture camera. */" },
		{ "Keywords", "ar all" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Enable or disable Mixed Reality Capture camera." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_SetEnabledXRCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "SetEnabledXRCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_SetEnabledXRCamera_Statics::ARBlueprintLibrary_eventSetEnabledXRCamera_Parms), Z_Construct_UFunction_UARBlueprintLibrary_SetEnabledXRCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_SetEnabledXRCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_SetEnabledXRCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_SetEnabledXRCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_SetEnabledXRCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_SetEnabledXRCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics
	{
		struct ARBlueprintLibrary_eventStartARSession_Parms
		{
			UARSessionConfig* SessionConfig;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SessionConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics::NewProp_SessionConfig = { "SessionConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventStartARSession_Parms, SessionConfig), Z_Construct_UClass_UARSessionConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics::NewProp_SessionConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/**\n\x09 * Begin a new Augmented Reality session. Subsequently, use the \\c GetARSessionStatus() function to figure out the status of the session.\n\x09 *\n\x09 * @param SessionConfig    Describes the tracking method to use, what kind of geometry to detect in the world, etc.\n\x09 */" },
		{ "DisplayName", "Start AR Session" },
		{ "Keywords", "ar augmentedreality augmented reality session start run running" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Begin a new Augmented Reality session. Subsequently, use the \\c GetARSessionStatus() function to figure out the status of the session.\n\n@param SessionConfig    Describes the tracking method to use, what kind of geometry to detect in the world, etc." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "StartARSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics::ARBlueprintLibrary_eventStartARSession_Parms), Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_StartARSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_StopARSession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_StopARSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/** Stop a running Augmented Reality session and clear any state. */" },
		{ "DisplayName", "Stop AR Session" },
		{ "Keywords", "ar augmentedreality augmented reality session stop run running" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Stop a running Augmented Reality session and clear any state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_StopARSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "StopARSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_StopARSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_StopARSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_StopARSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_StopARSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics
	{
		struct ARBlueprintLibrary_eventToggleARCapture_Parms
		{
			bool bOnOff;
			EARCaptureType CaptureType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnOff_MetaData[];
#endif
		static void NewProp_bOnOff_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnOff;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CaptureType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CaptureType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::NewProp_bOnOff_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::NewProp_bOnOff_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventToggleARCapture_Parms*)Obj)->bOnOff = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::NewProp_bOnOff = { "bOnOff", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventToggleARCapture_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::NewProp_bOnOff_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::NewProp_bOnOff_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::NewProp_bOnOff_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::NewProp_CaptureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::NewProp_CaptureType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::NewProp_CaptureType = { "CaptureType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventToggleARCapture_Parms, CaptureType), Z_Construct_UEnum_AugmentedReality_EARCaptureType, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::NewProp_CaptureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::NewProp_CaptureType_MetaData)) }; // 469819361
	void Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARBlueprintLibrary_eventToggleARCapture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARBlueprintLibrary_eventToggleARCapture_Parms), &Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::NewProp_bOnOff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::NewProp_CaptureType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::NewProp_CaptureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/** Starts or stops a battery intensive service on device. */" },
		{ "Keywords", "ar augmentedreality augmented reality capture start stop" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Starts or stops a battery intensive service on device." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "ToggleARCapture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::ARBlueprintLibrary_eventToggleARCapture_Parms), Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics
	{
		struct ARBlueprintLibrary_eventUnpinComponent_Parms
		{
			USceneComponent* ComponentToUnpin;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToUnpin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentToUnpin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::NewProp_ComponentToUnpin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::NewProp_ComponentToUnpin = { "ComponentToUnpin", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARBlueprintLibrary_eventUnpinComponent_Parms, ComponentToUnpin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::NewProp_ComponentToUnpin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::NewProp_ComponentToUnpin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::NewProp_ComponentToUnpin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|ARPin" },
		{ "Comment", "/** Given a pinned \\c ComponentToUnpin, remove its attachment to the real world. */" },
		{ "Keywords", "ar augmentedreality augmented reality tracking arpin tracked geometry pinning anchor" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "Given a pinned \\c ComponentToUnpin, remove its attachment to the real world." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBlueprintLibrary, nullptr, "UnpinComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::ARBlueprintLibrary_eventUnpinComponent_Parms), Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARBlueprintLibrary);
	UClass* Z_Construct_UClass_UARBlueprintLibrary_NoRegister()
	{
		return UARBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UARBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe, "AddManualEnvironmentCaptureProbe" }, // 2395257449
		{ &Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage, "AddRuntimeCandidateImage" }, // 576672456
		{ &Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName, "AddTrackedPointWithName" }, // 1428100238
		{ &Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform, "CalculateAlignmentTransform" }, // 436443456
		{ &Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection, "CalculateClosestIntersection" }, // 4211465098
		{ &Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin, "DebugDrawPin" }, // 1857473644
		{ &Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry, "DebugDrawTrackedGeometry" }, // 3848587056
		{ &Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName, "FindTrackedPointsByName" }, // 1316039321
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetAlignmentTransform, "GetAlignmentTransform" }, // 2874244173
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries, "GetAllGeometries" }, // 2358729862
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometriesByClass, "GetAllGeometriesByClass" }, // 3083178667
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins, "GetAllPins" }, // 2562603495
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses, "GetAllTracked2DPoses" }, // 327605759
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes, "GetAllTrackedEnvironmentCaptureProbes" }, // 2338874064
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedImages, "GetAllTrackedImages" }, // 1174022295
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPlanes, "GetAllTrackedPlanes" }, // 2892519124
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoints, "GetAllTrackedPoints" }, // 59901474
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetAllTrackedPoses, "GetAllTrackedPoses" }, // 2250016855
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus, "GetARSessionStatus" }, // 2389440900
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetARTexture, "GetARTexture" }, // 2935186183
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetARWorldScale, "GetARWorldScale" }, // 3340878980
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetCameraDepth, "GetCameraDepth" }, // 398411301
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetCameraImage, "GetCameraImage" }, // 1114242341
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetCameraIntrinsics, "GetCameraIntrinsics" }, // 4043754150
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate, "GetCurrentLightEstimate" }, // 1297441200
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetNumberOfTrackedFacesSupported, "GetNumberOfTrackedFacesSupported" }, // 4043837362
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation, "GetObjectClassificationAtLocation" }, // 335790387
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationDepthImage, "GetPersonSegmentationDepthImage" }, // 813473480
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetPersonSegmentationImage, "GetPersonSegmentationImage" }, // 3916699829
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud, "GetPointCloud" }, // 2808071880
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig, "GetSessionConfig" }, // 3013098633
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats, "GetSupportedVideoFormats" }, // 2232903067
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality, "GetTrackingQuality" }, // 470221882
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason, "GetTrackingQualityReason" }, // 2715846023
		{ &Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus, "GetWorldMappingStatus" }, // 2769962701
		{ &Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreReady, "IsARPinLocalStoreReady" }, // 80595933
		{ &Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreSupported, "IsARPinLocalStoreSupported" }, // 2855439695
		{ &Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported, "IsARSupported" }, // 3785530714
		{ &Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported, "IsSceneReconstructionSupported" }, // 1305520670
		{ &Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported, "IsSessionTrackingFeatureSupported" }, // 1228737340
		{ &Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported, "IsSessionTypeSupported" }, // 285806996
		{ &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects, "LineTraceTrackedObjects" }, // 57318495
		{ &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D, "LineTraceTrackedObjects3D" }, // 571525162
		{ &Z_Construct_UFunction_UARBlueprintLibrary_LoadARPinsFromLocalStore, "LoadARPinsFromLocalStore" }, // 1632406027
		{ &Z_Construct_UFunction_UARBlueprintLibrary_PauseARSession, "PauseARSession" }, // 2090330434
		{ &Z_Construct_UFunction_UARBlueprintLibrary_PinComponent, "PinComponent" }, // 4020339942
		{ &Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin, "PinComponentToARPin" }, // 4102276129
		{ &Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult, "PinComponentToTraceResult" }, // 4292632600
		{ &Z_Construct_UFunction_UARBlueprintLibrary_RemoveAllARPinsFromLocalStore, "RemoveAllARPinsFromLocalStore" }, // 2541800709
		{ &Z_Construct_UFunction_UARBlueprintLibrary_RemoveARPinFromLocalStore, "RemoveARPinFromLocalStore" }, // 2943002553
		{ &Z_Construct_UFunction_UARBlueprintLibrary_RemovePin, "RemovePin" }, // 293881202
		{ &Z_Construct_UFunction_UARBlueprintLibrary_ResizeXRCamera, "ResizeXRCamera" }, // 4221787875
		{ &Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore, "SaveARPinToLocalStore" }, // 481966921
		{ &Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform, "SetAlignmentTransform" }, // 2452824273
		{ &Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation, "SetARWorldOriginLocationAndRotation" }, // 4181873783
		{ &Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldScale, "SetARWorldScale" }, // 10706129
		{ &Z_Construct_UFunction_UARBlueprintLibrary_SetEnabledXRCamera, "SetEnabledXRCamera" }, // 2401741152
		{ &Z_Construct_UFunction_UARBlueprintLibrary_StartARSession, "StartARSession" }, // 2945010317
		{ &Z_Construct_UFunction_UARBlueprintLibrary_StopARSession, "StopARSession" }, // 1321146165
		{ &Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture, "ToggleARCapture" }, // 3982074369
		{ &Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent, "UnpinComponent" }, // 21416033
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ScriptName", "ARLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARBlueprintLibrary_Statics::ClassParams = {
		&UARBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UARBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UARBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UARBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARBlueprintLibrary.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARBlueprintLibrary>()
	{
		return UARBlueprintLibrary::StaticClass();
	}
	UARBlueprintLibrary::UARBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARBlueprintLibrary);
	UARBlueprintLibrary::~UARBlueprintLibrary() {}
	DEFINE_FUNCTION(UARTraceResultLibrary::execGetTraceChannel)
	{
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARLineTraceChannels*)Z_Param__Result=UARTraceResultLibrary::GetTraceChannel(Z_Param_Out_TraceResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTraceResultLibrary::execGetTrackedGeometry)
	{
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARTrackedGeometry**)Z_Param__Result=UARTraceResultLibrary::GetTrackedGeometry(Z_Param_Out_TraceResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTraceResultLibrary::execGetLocalTransform)
	{
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UARTraceResultLibrary::GetLocalTransform(Z_Param_Out_TraceResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTraceResultLibrary::execGetLocalToWorldTransform)
	{
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UARTraceResultLibrary::GetLocalToWorldTransform(Z_Param_Out_TraceResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTraceResultLibrary::execGetLocalToTrackingTransform)
	{
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UARTraceResultLibrary::GetLocalToTrackingTransform(Z_Param_Out_TraceResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTraceResultLibrary::execGetDistanceFromCamera)
	{
		P_GET_STRUCT_REF(FARTraceResult,Z_Param_Out_TraceResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UARTraceResultLibrary::GetDistanceFromCamera(Z_Param_Out_TraceResult);
		P_NATIVE_END;
	}
	void UARTraceResultLibrary::StaticRegisterNativesUARTraceResultLibrary()
	{
		UClass* Class = UARTraceResultLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDistanceFromCamera", &UARTraceResultLibrary::execGetDistanceFromCamera },
			{ "GetLocalToTrackingTransform", &UARTraceResultLibrary::execGetLocalToTrackingTransform },
			{ "GetLocalToWorldTransform", &UARTraceResultLibrary::execGetLocalToWorldTransform },
			{ "GetLocalTransform", &UARTraceResultLibrary::execGetLocalTransform },
			{ "GetTraceChannel", &UARTraceResultLibrary::execGetTraceChannel },
			{ "GetTrackedGeometry", &UARTraceResultLibrary::execGetTrackedGeometry },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics
	{
		struct ARTraceResultLibrary_eventGetDistanceFromCamera_Parms
		{
			FARTraceResult TraceResult;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceResult;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::NewProp_TraceResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::NewProp_TraceResult = { "TraceResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTraceResultLibrary_eventGetDistanceFromCamera_Parms, TraceResult), Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::NewProp_TraceResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::NewProp_TraceResult_MetaData)) }; // 3108337464
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTraceResultLibrary_eventGetDistanceFromCamera_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::NewProp_TraceResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Trace Result" },
		{ "Comment", "/** @return  the distance from the camera to the traced location in Unreal Units. */" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return  the distance from the camera to the traced location in Unreal Units." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTraceResultLibrary, nullptr, "GetDistanceFromCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::ARTraceResultLibrary_eventGetDistanceFromCamera_Parms), Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics
	{
		struct ARTraceResultLibrary_eventGetLocalToTrackingTransform_Parms
		{
			FARTraceResult TraceResult;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::NewProp_TraceResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::NewProp_TraceResult = { "TraceResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTraceResultLibrary_eventGetLocalToTrackingTransform_Parms, TraceResult), Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::NewProp_TraceResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::NewProp_TraceResult_MetaData)) }; // 3108337464
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTraceResultLibrary_eventGetLocalToTrackingTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::NewProp_TraceResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Trace Result" },
		{ "Comment", "/**\n\x09 * @return The transform of the trace result in tracking space (after it is modified by the \\c AlignmentTransform).\n\x09 *\n\x09 * \\see SetAlignmentTransform()\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return The transform of the trace result in tracking space (after it is modified by the \\c AlignmentTransform).\n\n\\see SetAlignmentTransform()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTraceResultLibrary, nullptr, "GetLocalToTrackingTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::ARTraceResultLibrary_eventGetLocalToTrackingTransform_Parms), Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics
	{
		struct ARTraceResultLibrary_eventGetLocalToWorldTransform_Parms
		{
			FARTraceResult TraceResult;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::NewProp_TraceResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::NewProp_TraceResult = { "TraceResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTraceResultLibrary_eventGetLocalToWorldTransform_Parms, TraceResult), Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::NewProp_TraceResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::NewProp_TraceResult_MetaData)) }; // 3108337464
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTraceResultLibrary_eventGetLocalToWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::NewProp_TraceResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Trace Result" },
		{ "Comment", "/** @return Get the transform of the trace result in Unreal World Space. */" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return Get the transform of the trace result in Unreal World Space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTraceResultLibrary, nullptr, "GetLocalToWorldTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::ARTraceResultLibrary_eventGetLocalToWorldTransform_Parms), Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTraceResultLibrary_GetLocalTransform_Statics
	{
		struct ARTraceResultLibrary_eventGetLocalTransform_Parms
		{
			FARTraceResult TraceResult;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTraceResultLibrary_GetLocalTransform_Statics::NewProp_TraceResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetLocalTransform_Statics::NewProp_TraceResult = { "TraceResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTraceResultLibrary_eventGetLocalTransform_Parms, TraceResult), Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalTransform_Statics::NewProp_TraceResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalTransform_Statics::NewProp_TraceResult_MetaData)) }; // 3108337464
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetLocalTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTraceResultLibrary_eventGetLocalTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTraceResultLibrary_GetLocalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetLocalTransform_Statics::NewProp_TraceResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetLocalTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTraceResultLibrary_GetLocalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Trace Result" },
		{ "Comment", "/** @return Get the transform of the trace result in the AR system's local space. */" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return Get the transform of the trace result in the AR system's local space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTraceResultLibrary_GetLocalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTraceResultLibrary, nullptr, "GetLocalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalTransform_Statics::ARTraceResultLibrary_eventGetLocalTransform_Parms), Z_Construct_UFunction_UARTraceResultLibrary_GetLocalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetLocalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTraceResultLibrary_GetLocalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARTraceResultLibrary_GetLocalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics
	{
		struct ARTraceResultLibrary_eventGetTraceChannel_Parms
		{
			FARTraceResult TraceResult;
			EARLineTraceChannels ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceResult;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::NewProp_TraceResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::NewProp_TraceResult = { "TraceResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTraceResultLibrary_eventGetTraceChannel_Parms, TraceResult), Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::NewProp_TraceResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::NewProp_TraceResult_MetaData)) }; // 3108337464
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTraceResultLibrary_eventGetTraceChannel_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels, METADATA_PARAMS(nullptr, 0) }; // 2496654531
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::NewProp_TraceResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Trace Result" },
		{ "Comment", "/** @return  Get the type of the tracked object (if any) that effected this trace result. */" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return  Get the type of the tracked object (if any) that effected this trace result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTraceResultLibrary, nullptr, "GetTraceChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::ARTraceResultLibrary_eventGetTraceChannel_Parms), Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics
	{
		struct ARTraceResultLibrary_eventGetTrackedGeometry_Parms
		{
			FARTraceResult TraceResult;
			UARTrackedGeometry* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceResult;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::NewProp_TraceResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::NewProp_TraceResult = { "TraceResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTraceResultLibrary_eventGetTrackedGeometry_Parms, TraceResult), Z_Construct_UScriptStruct_FARTraceResult, METADATA_PARAMS(Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::NewProp_TraceResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::NewProp_TraceResult_MetaData)) }; // 3108337464
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTraceResultLibrary_eventGetTrackedGeometry_Parms, ReturnValue), Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::NewProp_TraceResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Trace Result" },
		{ "Comment", "/** @return Get the real-world object (as observed by the Augmented Reality system) that was intersected by the line trace. */" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ToolTip", "@return Get the real-world object (as observed by the Augmented Reality system) that was intersected by the line trace." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTraceResultLibrary, nullptr, "GetTrackedGeometry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::ARTraceResultLibrary_eventGetTrackedGeometry_Parms), Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARTraceResultLibrary);
	UClass* Z_Construct_UClass_UARTraceResultLibrary_NoRegister()
	{
		return UARTraceResultLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UARTraceResultLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTraceResultLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARTraceResultLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera, "GetDistanceFromCamera" }, // 3297247240
		{ &Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform, "GetLocalToTrackingTransform" }, // 3052509658
		{ &Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform, "GetLocalToWorldTransform" }, // 71644479
		{ &Z_Construct_UFunction_UARTraceResultLibrary_GetLocalTransform, "GetLocalTransform" }, // 2145466751
		{ &Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel, "GetTraceChannel" }, // 655864738
		{ &Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry, "GetTrackedGeometry" }, // 117587157
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTraceResultLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/ARBlueprintLibrary.h" },
		{ "ScriptName", "ARTraceResultLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTraceResultLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTraceResultLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARTraceResultLibrary_Statics::ClassParams = {
		&UARTraceResultLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UARTraceResultLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARTraceResultLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTraceResultLibrary()
	{
		if (!Z_Registration_Info_UClass_UARTraceResultLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARTraceResultLibrary.OuterSingleton, Z_Construct_UClass_UARTraceResultLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARTraceResultLibrary.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTraceResultLibrary>()
	{
		return UARTraceResultLibrary::StaticClass();
	}
	UARTraceResultLibrary::UARTraceResultLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTraceResultLibrary);
	UARTraceResultLibrary::~UARTraceResultLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARBlueprintLibrary, UARBlueprintLibrary::StaticClass, TEXT("UARBlueprintLibrary"), &Z_Registration_Info_UClass_UARBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARBlueprintLibrary), 3052512278U) },
		{ Z_Construct_UClass_UARTraceResultLibrary, UARTraceResultLibrary::StaticClass, TEXT("UARTraceResultLibrary"), &Z_Registration_Info_UClass_UARTraceResultLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARTraceResultLibrary), 3925874488U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_3838355229(TEXT("/Script/AugmentedReality"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
