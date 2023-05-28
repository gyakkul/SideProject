// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LidarPointCloud.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "LidarPointCloudShared.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLidarPointCloud() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ALidarClippingVolume();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ALidarClippingVolume_NoRegister();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ALidarPointCloudActor_NoRegister();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloud();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloud_NoRegister();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloudBlueprintLibrary();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloudBlueprintLibrary_NoRegister();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloudComponent_NoRegister();
	LIDARPOINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_LidarPointCloudRuntime_ELidarClippingVolumeMode();
	LIDARPOINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudAsyncMode();
	LIDARPOINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudDuplicateHandling();
	LIDARPOINTCLOUDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLidarPointCloudNormal();
	LIDARPOINTCLOUDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLidarPointCloudPoint();
	LIDARPOINTCLOUDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLidarPointCloudTraceHit();
	UPackage* Z_Construct_UPackage__Script_LidarPointCloudRuntime();
// End Cross Module References
	DEFINE_FUNCTION(ULidarPointCloud::execCalculateNormals)
	{
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateNormals(Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execMergeSingle)
	{
		P_GET_OBJECT(ULidarPointCloud,Z_Param_PointCloudToMerge);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MergeSingle(Z_Param_PointCloudToMerge);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execMerge)
	{
		P_GET_TARRAY(ULidarPointCloud*,Z_Param_PointCloudsToMerge);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Merge(Z_Param_PointCloudsToMerge);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execSetData)
	{
		P_GET_TARRAY_REF(FLidarPointCloudPoint,Z_Param_Out_Points);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetData(Z_Param_Out_Points);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execRemoveHiddenPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveHiddenPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execRemovePointsByRay)
	{
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePointsByRay(Z_Param_Origin,Z_Param_Direction,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execRemoveFirstPointByRay)
	{
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFirstPointByRay(Z_Param_Origin,Z_Param_Direction,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execRemovePointsInBox)
	{
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePointsInBox(Z_Param_Center,Z_Param_Extent,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execRemovePointsInSphere)
	{
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePointsInSphere(Z_Param_Center,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execRemovePoint)
	{
		P_GET_STRUCT(FLidarPointCloudPoint,Z_Param_Point);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePoint(Z_Param_Point);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execInsertPoints)
	{
		P_GET_TARRAY_REF(FLidarPointCloudPoint,Z_Param_Out_Points);
		P_GET_ENUM(ELidarPointCloudDuplicateHandling,Z_Param_DuplicateHandling);
		P_GET_UBOOL(Z_Param_bRefreshPointsBounds);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Translation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InsertPoints(Z_Param_Out_Points,ELidarPointCloudDuplicateHandling(Z_Param_DuplicateHandling),Z_Param_bRefreshPointsBounds,Z_Param_Out_Translation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execInsertPoint)
	{
		P_GET_STRUCT_REF(FLidarPointCloudPoint,Z_Param_Out_Point);
		P_GET_ENUM(ELidarPointCloudDuplicateHandling,Z_Param_DuplicateHandling);
		P_GET_UBOOL(Z_Param_bRefreshPointsBounds);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Translation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InsertPoint(Z_Param_Out_Point,ELidarPointCloudDuplicateHandling(Z_Param_DuplicateHandling),Z_Param_bRefreshPointsBounds,Z_Param_Out_Translation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execExport)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Export(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execReimport)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bUseAsync);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_ENUM_REF(ELidarPointCloudAsyncMode,Z_Param_Out_AsyncMode);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reimport(Z_Param_WorldContextObject,Z_Param_bUseAsync,Z_Param_LatentInfo,(ELidarPointCloudAsyncMode&)(Z_Param_Out_AsyncMode),Z_Param_Out_Progress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execIsCentered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCentered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execRestoreOriginalCoordinates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestoreOriginalCoordinates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execCenterPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CenterPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execSetLocationOffset)
	{
		P_GET_STRUCT(FVector,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocationOffset(Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execLoadAllNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadAllNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execIsFullyLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFullyLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execRemoveCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execBuildCollisionWithCallback)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildCollisionWithCallback(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execBuildCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execSetOptimalCollisionError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOptimalCollisionError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execInitialize)
	{
		P_GET_STRUCT_REF(FBox,Z_Param_Out_NewBounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_Out_NewBounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execSetOptimizedForDynamicData)
	{
		P_GET_UBOOL(Z_Param_bNewOptimizedForDynamicData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOptimizedForDynamicData(Z_Param_bNewOptimizedForDynamicData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execSetSourcePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewSourcePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSourcePath(Z_Param_NewSourcePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execMarkPointVisibilityDirty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MarkPointVisibilityDirty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execApplyColorToPointsByRay)
	{
		P_GET_STRUCT(FColor,Z_Param_NewColor);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyColorToPointsByRay(Z_Param_NewColor,Z_Param_Origin,Z_Param_Direction,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execApplyColorToFirstPointByRay)
	{
		P_GET_STRUCT(FColor,Z_Param_NewColor);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyColorToFirstPointByRay(Z_Param_NewColor,Z_Param_Origin,Z_Param_Direction,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execApplyColorToPointsInBox)
	{
		P_GET_STRUCT(FColor,Z_Param_NewColor);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyColorToPointsInBox(Z_Param_NewColor,Z_Param_Center,Z_Param_Extent,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execApplyColorToPointsInSphere)
	{
		P_GET_STRUCT(FColor,Z_Param_NewColor);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyColorToPointsInSphere(Z_Param_NewColor,Z_Param_Center,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execApplyColorToAllPoints)
	{
		P_GET_STRUCT_REF(FColor,Z_Param_Out_NewColor);
		P_GET_UBOOL_REF(Z_Param_Out_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyColorToAllPoints(Z_Param_Out_NewColor,Z_Param_Out_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execUnhideAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnhideAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execHideAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execSetVisibilityOfPointsByRay)
	{
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibilityOfPointsByRay(Z_Param_bNewVisibility,Z_Param_Origin,Z_Param_Direction,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execSetVisibilityOfFirstPointByRay)
	{
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibilityOfFirstPointByRay(Z_Param_bNewVisibility,Z_Param_Origin,Z_Param_Direction,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execSetVisibilityOfPointsInBox)
	{
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibilityOfPointsInBox(Z_Param_bNewVisibility,Z_Param_Center,Z_Param_Extent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execSetVisibilityOfPointsInSphere)
	{
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibilityOfPointsInSphere(Z_Param_bNewVisibility,Z_Param_Center,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execLineTraceMulti)
	{
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_GET_UBOOL(Z_Param_bReturnWorldSpace);
		P_GET_TARRAY_REF(FLidarPointCloudPoint,Z_Param_Out_OutHits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LineTraceMulti(Z_Param_Origin,Z_Param_Direction,Z_Param_Radius,Z_Param_bVisibleOnly,Z_Param_bReturnWorldSpace,Z_Param_Out_OutHits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execLineTraceSingle)
	{
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_GET_STRUCT_REF(FLidarPointCloudPoint,Z_Param_Out_PointHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LineTraceSingle(Z_Param_Origin,Z_Param_Direction,Z_Param_Radius,Z_Param_bVisibleOnly,Z_Param_Out_PointHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execGetPointsInBoxAsCopies)
	{
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_GET_UBOOL(Z_Param_bReturnWorldSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLidarPointCloudPoint>*)Z_Param__Result=P_THIS->GetPointsInBoxAsCopies(Z_Param_Center,Z_Param_Extent,Z_Param_bVisibleOnly,Z_Param_bReturnWorldSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execGetPointsInSphereAsCopies)
	{
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_GET_UBOOL(Z_Param_bReturnWorldSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLidarPointCloudPoint>*)Z_Param__Result=P_THIS->GetPointsInSphereAsCopies(Z_Param_Center,Z_Param_Radius,Z_Param_bVisibleOnly,Z_Param_bReturnWorldSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execGetPointsAsCopies)
	{
		P_GET_UBOOL(Z_Param_bReturnWorldSpace);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLidarPointCloudPoint>*)Z_Param__Result=P_THIS->GetPointsAsCopies(Z_Param_bReturnWorldSpace,Z_Param_StartIndex,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execHasPointsByRay)
	{
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPointsByRay(Z_Param_Origin,Z_Param_Direction,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execHasPointsInBox)
	{
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPointsInBox(Z_Param_Center,Z_Param_Extent,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execHasPointsInSphere)
	{
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPointsInSphere(Z_Param_Center,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execRefreshRendering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshRendering();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execGetColliderPolys)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetColliderPolys();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execHasCollisionData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCollisionData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execRefreshBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshBounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execGetBounds)
	{
		P_GET_UBOOL(Z_Param_bUseOriginalCoordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=P_THIS->GetBounds(Z_Param_bUseOriginalCoordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execIsOptimizedForDynamicData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOptimizedForDynamicData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execGetSourcePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSourcePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execGetDataSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDataSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execGetEstimatedPointSpacing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEstimatedPointSpacing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execGetNumNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execGetNumVisiblePoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetNumVisiblePoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execGetNumPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->GetNumPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloud::execGetNumLODs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumLODs();
		P_NATIVE_END;
	}
	void ULidarPointCloud::StaticRegisterNativesULidarPointCloud()
	{
		UClass* Class = ULidarPointCloud::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyColorToAllPoints", &ULidarPointCloud::execApplyColorToAllPoints },
			{ "ApplyColorToFirstPointByRay", &ULidarPointCloud::execApplyColorToFirstPointByRay },
			{ "ApplyColorToPointsByRay", &ULidarPointCloud::execApplyColorToPointsByRay },
			{ "ApplyColorToPointsInBox", &ULidarPointCloud::execApplyColorToPointsInBox },
			{ "ApplyColorToPointsInSphere", &ULidarPointCloud::execApplyColorToPointsInSphere },
			{ "BuildCollision", &ULidarPointCloud::execBuildCollision },
			{ "BuildCollisionWithCallback", &ULidarPointCloud::execBuildCollisionWithCallback },
			{ "CalculateNormals", &ULidarPointCloud::execCalculateNormals },
			{ "CenterPoints", &ULidarPointCloud::execCenterPoints },
			{ "Export", &ULidarPointCloud::execExport },
			{ "GetBounds", &ULidarPointCloud::execGetBounds },
			{ "GetColliderPolys", &ULidarPointCloud::execGetColliderPolys },
			{ "GetDataSize", &ULidarPointCloud::execGetDataSize },
			{ "GetEstimatedPointSpacing", &ULidarPointCloud::execGetEstimatedPointSpacing },
			{ "GetNumLODs", &ULidarPointCloud::execGetNumLODs },
			{ "GetNumNodes", &ULidarPointCloud::execGetNumNodes },
			{ "GetNumPoints", &ULidarPointCloud::execGetNumPoints },
			{ "GetNumVisiblePoints", &ULidarPointCloud::execGetNumVisiblePoints },
			{ "GetPointsAsCopies", &ULidarPointCloud::execGetPointsAsCopies },
			{ "GetPointsInBoxAsCopies", &ULidarPointCloud::execGetPointsInBoxAsCopies },
			{ "GetPointsInSphereAsCopies", &ULidarPointCloud::execGetPointsInSphereAsCopies },
			{ "GetSourcePath", &ULidarPointCloud::execGetSourcePath },
			{ "HasCollisionData", &ULidarPointCloud::execHasCollisionData },
			{ "HasPointsByRay", &ULidarPointCloud::execHasPointsByRay },
			{ "HasPointsInBox", &ULidarPointCloud::execHasPointsInBox },
			{ "HasPointsInSphere", &ULidarPointCloud::execHasPointsInSphere },
			{ "HideAll", &ULidarPointCloud::execHideAll },
			{ "Initialize", &ULidarPointCloud::execInitialize },
			{ "InsertPoint", &ULidarPointCloud::execInsertPoint },
			{ "InsertPoints", &ULidarPointCloud::execInsertPoints },
			{ "IsCentered", &ULidarPointCloud::execIsCentered },
			{ "IsFullyLoaded", &ULidarPointCloud::execIsFullyLoaded },
			{ "IsOptimizedForDynamicData", &ULidarPointCloud::execIsOptimizedForDynamicData },
			{ "LineTraceMulti", &ULidarPointCloud::execLineTraceMulti },
			{ "LineTraceSingle", &ULidarPointCloud::execLineTraceSingle },
			{ "LoadAllNodes", &ULidarPointCloud::execLoadAllNodes },
			{ "MarkPointVisibilityDirty", &ULidarPointCloud::execMarkPointVisibilityDirty },
			{ "Merge", &ULidarPointCloud::execMerge },
			{ "MergeSingle", &ULidarPointCloud::execMergeSingle },
			{ "RefreshBounds", &ULidarPointCloud::execRefreshBounds },
			{ "RefreshRendering", &ULidarPointCloud::execRefreshRendering },
			{ "Reimport", &ULidarPointCloud::execReimport },
			{ "RemoveCollision", &ULidarPointCloud::execRemoveCollision },
			{ "RemoveFirstPointByRay", &ULidarPointCloud::execRemoveFirstPointByRay },
			{ "RemoveHiddenPoints", &ULidarPointCloud::execRemoveHiddenPoints },
			{ "RemovePoint", &ULidarPointCloud::execRemovePoint },
			{ "RemovePointsByRay", &ULidarPointCloud::execRemovePointsByRay },
			{ "RemovePointsInBox", &ULidarPointCloud::execRemovePointsInBox },
			{ "RemovePointsInSphere", &ULidarPointCloud::execRemovePointsInSphere },
			{ "RestoreOriginalCoordinates", &ULidarPointCloud::execRestoreOriginalCoordinates },
			{ "SetData", &ULidarPointCloud::execSetData },
			{ "SetLocationOffset", &ULidarPointCloud::execSetLocationOffset },
			{ "SetOptimalCollisionError", &ULidarPointCloud::execSetOptimalCollisionError },
			{ "SetOptimizedForDynamicData", &ULidarPointCloud::execSetOptimizedForDynamicData },
			{ "SetSourcePath", &ULidarPointCloud::execSetSourcePath },
			{ "SetVisibilityOfFirstPointByRay", &ULidarPointCloud::execSetVisibilityOfFirstPointByRay },
			{ "SetVisibilityOfPointsByRay", &ULidarPointCloud::execSetVisibilityOfPointsByRay },
			{ "SetVisibilityOfPointsInBox", &ULidarPointCloud::execSetVisibilityOfPointsInBox },
			{ "SetVisibilityOfPointsInSphere", &ULidarPointCloud::execSetVisibilityOfPointsInSphere },
			{ "UnhideAll", &ULidarPointCloud::execUnhideAll },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints_Statics
	{
		struct LidarPointCloud_eventApplyColorToAllPoints_Parms
		{
			FColor NewColor;
			bool bVisibleOnly;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisibleOnly_MetaData[];
#endif
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints_Statics::NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventApplyColorToAllPoints_Parms, NewColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints_Statics::NewProp_NewColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints_Statics::NewProp_NewColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints_Statics::NewProp_bVisibleOnly_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloud_eventApplyColorToAllPoints_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventApplyColorToAllPoints_Parms), &Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints_Statics::NewProp_bVisibleOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints_Statics::NewProp_bVisibleOnly_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints_Statics::NewProp_NewColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Applies the given color to all points */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Applies the given color to all points" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "ApplyColorToAllPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints_Statics::LidarPointCloud_eventApplyColorToAllPoints_Parms), Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay_Statics
	{
		struct LidarPointCloud_eventApplyColorToFirstPointByRay_Parms
		{
			FColor NewColor;
			FVector Origin;
			FVector Direction;
			float Radius;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventApplyColorToFirstPointByRay_Parms, NewColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventApplyColorToFirstPointByRay_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventApplyColorToFirstPointByRay_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventApplyColorToFirstPointByRay_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloud_eventApplyColorToFirstPointByRay_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventApplyColorToFirstPointByRay_Parms), &Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay_Statics::NewProp_NewColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Applies the given color to the first point hit by the given ray */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Applies the given color to the first point hit by the given ray" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "ApplyColorToFirstPointByRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay_Statics::LidarPointCloud_eventApplyColorToFirstPointByRay_Parms), Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay_Statics
	{
		struct LidarPointCloud_eventApplyColorToPointsByRay_Parms
		{
			FColor NewColor;
			FVector Origin;
			FVector Direction;
			float Radius;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventApplyColorToPointsByRay_Parms, NewColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventApplyColorToPointsByRay_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventApplyColorToPointsByRay_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventApplyColorToPointsByRay_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloud_eventApplyColorToPointsByRay_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventApplyColorToPointsByRay_Parms), &Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay_Statics::NewProp_NewColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Applies the given color to all points hit by the given ray */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Applies the given color to all points hit by the given ray" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "ApplyColorToPointsByRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay_Statics::LidarPointCloud_eventApplyColorToPointsByRay_Parms), Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInBox_Statics
	{
		struct LidarPointCloud_eventApplyColorToPointsInBox_Parms
		{
			FColor NewColor;
			FVector Center;
			FVector Extent;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInBox_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventApplyColorToPointsInBox_Parms, NewColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInBox_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventApplyColorToPointsInBox_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInBox_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventApplyColorToPointsInBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInBox_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloud_eventApplyColorToPointsInBox_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInBox_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventApplyColorToPointsInBox_Parms), &Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInBox_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInBox_Statics::NewProp_NewColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInBox_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInBox_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInBox_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Applies the given color to all points within the box */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Applies the given color to all points within the box" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "ApplyColorToPointsInBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInBox_Statics::LidarPointCloud_eventApplyColorToPointsInBox_Parms), Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInSphere_Statics
	{
		struct LidarPointCloud_eventApplyColorToPointsInSphere_Parms
		{
			FColor NewColor;
			FVector Center;
			float Radius;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInSphere_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventApplyColorToPointsInSphere_Parms, NewColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventApplyColorToPointsInSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventApplyColorToPointsInSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInSphere_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloud_eventApplyColorToPointsInSphere_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInSphere_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventApplyColorToPointsInSphere_Parms), &Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInSphere_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInSphere_Statics::NewProp_NewColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInSphere_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInSphere_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInSphere_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Applies the given color to all points within the sphere */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Applies the given color to all points within the sphere" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "ApplyColorToPointsInSphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInSphere_Statics::LidarPointCloud_eventApplyColorToPointsInSphere_Parms), Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_BuildCollision_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_BuildCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Builds collision mesh for the cloud, using current collision settings */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Builds collision mesh for the cloud, using current collision settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_BuildCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "BuildCollision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_BuildCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_BuildCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_BuildCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_BuildCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_BuildCollisionWithCallback_Statics
	{
		struct LidarPointCloud_eventBuildCollisionWithCallback_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			bool bSuccess;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloud_BuildCollisionWithCallback_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventBuildCollisionWithCallback_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_BuildCollisionWithCallback_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventBuildCollisionWithCallback_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	void Z_Construct_UFunction_ULidarPointCloud_BuildCollisionWithCallback_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((LidarPointCloud_eventBuildCollisionWithCallback_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_BuildCollisionWithCallback_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventBuildCollisionWithCallback_Parms), &Z_Construct_UFunction_ULidarPointCloud_BuildCollisionWithCallback_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_BuildCollisionWithCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_BuildCollisionWithCallback_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_BuildCollisionWithCallback_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_BuildCollisionWithCallback_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_BuildCollisionWithCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_BuildCollisionWithCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "BuildCollisionWithCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_BuildCollisionWithCallback_Statics::LidarPointCloud_eventBuildCollisionWithCallback_Parms), Z_Construct_UFunction_ULidarPointCloud_BuildCollisionWithCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_BuildCollisionWithCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_BuildCollisionWithCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_BuildCollisionWithCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_BuildCollisionWithCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_BuildCollisionWithCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_CalculateNormals_Statics
	{
		struct LidarPointCloud_eventCalculateNormals_Parms
		{
			FLatentActionInfo LatentInfo;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_CalculateNormals_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventCalculateNormals_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_CalculateNormals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_CalculateNormals_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_CalculateNormals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Calculates Normals for this point cloud */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Calculates Normals for this point cloud" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_CalculateNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "CalculateNormals", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_CalculateNormals_Statics::LidarPointCloud_eventCalculateNormals_Parms), Z_Construct_UFunction_ULidarPointCloud_CalculateNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_CalculateNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_CalculateNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_CalculateNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_CalculateNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_CalculateNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_CenterPoints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_CenterPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Centers this cloud */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Centers this cloud" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_CenterPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "CenterPoints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_CenterPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_CenterPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_CenterPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_CenterPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_Export_Statics
	{
		struct LidarPointCloud_eventExport_Parms
		{
			FString Filename;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_Export_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULidarPointCloud_Export_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventExport_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_Export_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_Export_Statics::NewProp_Filename_MetaData)) };
	void Z_Construct_UFunction_ULidarPointCloud_Export_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LidarPointCloud_eventExport_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_Export_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventExport_Parms), &Z_Construct_UFunction_ULidarPointCloud_Export_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_Export_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_Export_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_Export_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_Export_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/**\n\x09 * Exports this Point Cloud to the given filename.\n\x09 * Consult supported export formats.\n\x09 * Returns true if successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Exports this Point Cloud to the given filename.\nConsult supported export formats.\nReturns true if successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_Export_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "Export", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_Export_Statics::LidarPointCloud_eventExport_Parms), Z_Construct_UFunction_ULidarPointCloud_Export_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_Export_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_Export_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_Export_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_Export()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_Export_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_GetBounds_Statics
	{
		struct LidarPointCloud_eventGetBounds_Parms
		{
			bool bUseOriginalCoordinates;
			FBox ReturnValue;
		};
		static void NewProp_bUseOriginalCoordinates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOriginalCoordinates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULidarPointCloud_GetBounds_Statics::NewProp_bUseOriginalCoordinates_SetBit(void* Obj)
	{
		((LidarPointCloud_eventGetBounds_Parms*)Obj)->bUseOriginalCoordinates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetBounds_Statics::NewProp_bUseOriginalCoordinates = { "bUseOriginalCoordinates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventGetBounds_Parms), &Z_Construct_UFunction_ULidarPointCloud_GetBounds_Statics::NewProp_bUseOriginalCoordinates_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_GetBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetBounds_Statics::NewProp_bUseOriginalCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_GetBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "CPP_Default_bUseOriginalCoordinates", "false" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "GetBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_GetBounds_Statics::LidarPointCloud_eventGetBounds_Parms), Z_Construct_UFunction_ULidarPointCloud_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_GetBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_GetBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_GetBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_GetColliderPolys_Statics
	{
		struct LidarPointCloud_eventGetColliderPolys_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetColliderPolys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventGetColliderPolys_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_GetColliderPolys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetColliderPolys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_GetColliderPolys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Returns the number of polygons in the collider or 0 if no collider is built */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Returns the number of polygons in the collider or 0 if no collider is built" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_GetColliderPolys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "GetColliderPolys", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_GetColliderPolys_Statics::LidarPointCloud_eventGetColliderPolys_Parms), Z_Construct_UFunction_ULidarPointCloud_GetColliderPolys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetColliderPolys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_GetColliderPolys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetColliderPolys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_GetColliderPolys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_GetColliderPolys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_GetDataSize_Statics
	{
		struct LidarPointCloud_eventGetDataSize_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetDataSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventGetDataSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_GetDataSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetDataSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_GetDataSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Returns the amount of memory in MB used to store the point cloud. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Returns the amount of memory in MB used to store the point cloud." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_GetDataSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "GetDataSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_GetDataSize_Statics::LidarPointCloud_eventGetDataSize_Parms), Z_Construct_UFunction_ULidarPointCloud_GetDataSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetDataSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_GetDataSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetDataSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_GetDataSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_GetDataSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_GetEstimatedPointSpacing_Statics
	{
		struct LidarPointCloud_eventGetEstimatedPointSpacing_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetEstimatedPointSpacing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventGetEstimatedPointSpacing_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_GetEstimatedPointSpacing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetEstimatedPointSpacing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_GetEstimatedPointSpacing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_GetEstimatedPointSpacing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "GetEstimatedPointSpacing", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_GetEstimatedPointSpacing_Statics::LidarPointCloud_eventGetEstimatedPointSpacing_Parms), Z_Construct_UFunction_ULidarPointCloud_GetEstimatedPointSpacing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetEstimatedPointSpacing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_GetEstimatedPointSpacing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetEstimatedPointSpacing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_GetEstimatedPointSpacing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_GetEstimatedPointSpacing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_GetNumLODs_Statics
	{
		struct LidarPointCloud_eventGetNumLODs_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetNumLODs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventGetNumLODs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_GetNumLODs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetNumLODs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_GetNumLODs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "// End UObject Interface.\n" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "End UObject Interface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_GetNumLODs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "GetNumLODs", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_GetNumLODs_Statics::LidarPointCloud_eventGetNumLODs_Parms), Z_Construct_UFunction_ULidarPointCloud_GetNumLODs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetNumLODs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_GetNumLODs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetNumLODs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_GetNumLODs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_GetNumLODs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_GetNumNodes_Statics
	{
		struct LidarPointCloud_eventGetNumNodes_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetNumNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventGetNumNodes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_GetNumNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetNumNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_GetNumNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_GetNumNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "GetNumNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_GetNumNodes_Statics::LidarPointCloud_eventGetNumNodes_Parms), Z_Construct_UFunction_ULidarPointCloud_GetNumNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetNumNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_GetNumNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetNumNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_GetNumNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_GetNumNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_GetNumPoints_Statics
	{
		struct LidarPointCloud_eventGetNumPoints_Parms
		{
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_ULidarPointCloud_GetNumPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventGetNumPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_GetNumPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetNumPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_GetNumPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_GetNumPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "GetNumPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_GetNumPoints_Statics::LidarPointCloud_eventGetNumPoints_Parms), Z_Construct_UFunction_ULidarPointCloud_GetNumPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetNumPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_GetNumPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetNumPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_GetNumPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_GetNumPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_GetNumVisiblePoints_Statics
	{
		struct LidarPointCloud_eventGetNumVisiblePoints_Parms
		{
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_ULidarPointCloud_GetNumVisiblePoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventGetNumVisiblePoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_GetNumVisiblePoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetNumVisiblePoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_GetNumVisiblePoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_GetNumVisiblePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "GetNumVisiblePoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_GetNumVisiblePoints_Statics::LidarPointCloud_eventGetNumVisiblePoints_Parms), Z_Construct_UFunction_ULidarPointCloud_GetNumVisiblePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetNumVisiblePoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_GetNumVisiblePoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetNumVisiblePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_GetNumVisiblePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_GetNumVisiblePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies_Statics
	{
		struct LidarPointCloud_eventGetPointsAsCopies_Parms
		{
			bool bReturnWorldSpace;
			int32 StartIndex;
			int32 Count;
			TArray<FLidarPointCloudPoint> ReturnValue;
		};
		static void NewProp_bReturnWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnWorldSpace;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies_Statics::NewProp_bReturnWorldSpace_SetBit(void* Obj)
	{
		((LidarPointCloud_eventGetPointsAsCopies_Parms*)Obj)->bReturnWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies_Statics::NewProp_bReturnWorldSpace = { "bReturnWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventGetPointsAsCopies_Parms), &Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies_Statics::NewProp_bReturnWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventGetPointsAsCopies_Parms, StartIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventGetPointsAsCopies_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLidarPointCloudPoint, METADATA_PARAMS(nullptr, 0) }; // 3309861466
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventGetPointsAsCopies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3309861466
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies_Statics::NewProp_bReturnWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies_Statics::NewProp_StartIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/**\n\x09 * Returns an array with copies of points from the tree\n\x09 * If ReturnWorldSpace is selected, the points' locations will be converted into absolute value, otherwise they will be relative to the center of the cloud.\n\x09 */" },
		{ "CPP_Default_Count", "-1" },
		{ "CPP_Default_StartIndex", "0" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Returns an array with copies of points from the tree\nIf ReturnWorldSpace is selected, the points' locations will be converted into absolute value, otherwise they will be relative to the center of the cloud." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "GetPointsAsCopies", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies_Statics::LidarPointCloud_eventGetPointsAsCopies_Parms), Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics
	{
		struct LidarPointCloud_eventGetPointsInBoxAsCopies_Parms
		{
			FVector Center;
			FVector Extent;
			bool bVisibleOnly;
			bool bReturnWorldSpace;
			TArray<FLidarPointCloudPoint> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static void NewProp_bReturnWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnWorldSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventGetPointsInBoxAsCopies_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventGetPointsInBoxAsCopies_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloud_eventGetPointsInBoxAsCopies_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventGetPointsInBoxAsCopies_Parms), &Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::NewProp_bReturnWorldSpace_SetBit(void* Obj)
	{
		((LidarPointCloud_eventGetPointsInBoxAsCopies_Parms*)Obj)->bReturnWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::NewProp_bReturnWorldSpace = { "bReturnWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventGetPointsInBoxAsCopies_Parms), &Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::NewProp_bReturnWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLidarPointCloudPoint, METADATA_PARAMS(nullptr, 0) }; // 3309861466
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventGetPointsInBoxAsCopies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3309861466
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::NewProp_bVisibleOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::NewProp_bReturnWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/**\n\x09 * Returns an array with copies of points within the given box\n\x09 * If ReturnWorldSpace is selected, the points' locations will be converted into absolute value, otherwise they will be relative to the center of the cloud.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Returns an array with copies of points within the given box\nIf ReturnWorldSpace is selected, the points' locations will be converted into absolute value, otherwise they will be relative to the center of the cloud." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "GetPointsInBoxAsCopies", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::LidarPointCloud_eventGetPointsInBoxAsCopies_Parms), Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics
	{
		struct LidarPointCloud_eventGetPointsInSphereAsCopies_Parms
		{
			FVector Center;
			float Radius;
			bool bVisibleOnly;
			bool bReturnWorldSpace;
			TArray<FLidarPointCloudPoint> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static void NewProp_bReturnWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnWorldSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventGetPointsInSphereAsCopies_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventGetPointsInSphereAsCopies_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloud_eventGetPointsInSphereAsCopies_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventGetPointsInSphereAsCopies_Parms), &Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::NewProp_bReturnWorldSpace_SetBit(void* Obj)
	{
		((LidarPointCloud_eventGetPointsInSphereAsCopies_Parms*)Obj)->bReturnWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::NewProp_bReturnWorldSpace = { "bReturnWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventGetPointsInSphereAsCopies_Parms), &Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::NewProp_bReturnWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLidarPointCloudPoint, METADATA_PARAMS(nullptr, 0) }; // 3309861466
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventGetPointsInSphereAsCopies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3309861466
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::NewProp_bVisibleOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::NewProp_bReturnWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/**\n\x09 * Returns an array with copies of points within the given sphere\n\x09 * If ReturnWorldSpace is selected, the points' locations will be converted into absolute value, otherwise they will be relative to the center of the cloud.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Returns an array with copies of points within the given sphere\nIf ReturnWorldSpace is selected, the points' locations will be converted into absolute value, otherwise they will be relative to the center of the cloud." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "GetPointsInSphereAsCopies", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::LidarPointCloud_eventGetPointsInSphereAsCopies_Parms), Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_GetSourcePath_Statics
	{
		struct LidarPointCloud_eventGetSourcePath_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULidarPointCloud_GetSourcePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventGetSourcePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_GetSourcePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_GetSourcePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_GetSourcePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_GetSourcePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "GetSourcePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_GetSourcePath_Statics::LidarPointCloud_eventGetSourcePath_Parms), Z_Construct_UFunction_ULidarPointCloud_GetSourcePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetSourcePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_GetSourcePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_GetSourcePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_GetSourcePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_GetSourcePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_HasCollisionData_Statics
	{
		struct LidarPointCloud_eventHasCollisionData_Parms
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
	void Z_Construct_UFunction_ULidarPointCloud_HasCollisionData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LidarPointCloud_eventHasCollisionData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_HasCollisionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventHasCollisionData_Parms), &Z_Construct_UFunction_ULidarPointCloud_HasCollisionData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_HasCollisionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_HasCollisionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_HasCollisionData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Returns true, if the Octree has collision built */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Returns true, if the Octree has collision built" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_HasCollisionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "HasCollisionData", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_HasCollisionData_Statics::LidarPointCloud_eventHasCollisionData_Parms), Z_Construct_UFunction_ULidarPointCloud_HasCollisionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_HasCollisionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_HasCollisionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_HasCollisionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_HasCollisionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_HasCollisionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics
	{
		struct LidarPointCloud_eventHasPointsByRay_Parms
		{
			FVector Origin;
			FVector Direction;
			float Radius;
			bool bVisibleOnly;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventHasPointsByRay_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventHasPointsByRay_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventHasPointsByRay_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloud_eventHasPointsByRay_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventHasPointsByRay_Parms), &Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LidarPointCloud_eventHasPointsByRay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventHasPointsByRay_Parms), &Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::NewProp_bVisibleOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Returns true if there are any points hit by the given ray. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Returns true if there are any points hit by the given ray." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "HasPointsByRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::LidarPointCloud_eventHasPointsByRay_Parms), Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox_Statics
	{
		struct LidarPointCloud_eventHasPointsInBox_Parms
		{
			FVector Center;
			FVector Extent;
			bool bVisibleOnly;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventHasPointsInBox_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventHasPointsInBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloud_eventHasPointsInBox_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventHasPointsInBox_Parms), &Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LidarPointCloud_eventHasPointsInBox_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventHasPointsInBox_Parms), &Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox_Statics::NewProp_bVisibleOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Returns true if there are any points within the given box. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Returns true if there are any points within the given box." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "HasPointsInBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox_Statics::LidarPointCloud_eventHasPointsInBox_Parms), Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere_Statics
	{
		struct LidarPointCloud_eventHasPointsInSphere_Parms
		{
			FVector Center;
			float Radius;
			bool bVisibleOnly;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventHasPointsInSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventHasPointsInSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloud_eventHasPointsInSphere_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventHasPointsInSphere_Parms), &Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LidarPointCloud_eventHasPointsInSphere_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventHasPointsInSphere_Parms), &Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere_Statics::NewProp_bVisibleOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Returns true if there are any points within the given sphere. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Returns true if there are any points within the given sphere." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "HasPointsInSphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere_Statics::LidarPointCloud_eventHasPointsInSphere_Parms), Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_HideAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_HideAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Marks all points hidden */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Marks all points hidden" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_HideAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "HideAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_HideAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_HideAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_HideAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_HideAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_Initialize_Statics
	{
		struct LidarPointCloud_eventInitialize_Parms
		{
			FBox NewBounds;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_Initialize_Statics::NewProp_NewBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_Initialize_Statics::NewProp_NewBounds = { "NewBounds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventInitialize_Parms, NewBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_Initialize_Statics::NewProp_NewBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_Initialize_Statics::NewProp_NewBounds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_Initialize_Statics::NewProp_NewBounds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/**\n\x09 * Re-initializes the asset with new bounds.\n\x09 * Warning: Will erase all currently held data!\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Re-initializes the asset with new bounds.\nWarning: Will erase all currently held data!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "Initialize", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_Initialize_Statics::LidarPointCloud_eventInitialize_Parms), Z_Construct_UFunction_ULidarPointCloud_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics
	{
		struct LidarPointCloud_eventInsertPoint_Parms
		{
			FLidarPointCloudPoint Point;
			ELidarPointCloudDuplicateHandling DuplicateHandling;
			bool bRefreshPointsBounds;
			FVector Translation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DuplicateHandling_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DuplicateHandling;
		static void NewProp_bRefreshPointsBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRefreshPointsBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventInsertPoint_Parms, Point), Z_Construct_UScriptStruct_FLidarPointCloudPoint, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::NewProp_Point_MetaData)) }; // 3309861466
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::NewProp_DuplicateHandling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::NewProp_DuplicateHandling = { "DuplicateHandling", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventInsertPoint_Parms, DuplicateHandling), Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudDuplicateHandling, METADATA_PARAMS(nullptr, 0) }; // 2977996688
	void Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::NewProp_bRefreshPointsBounds_SetBit(void* Obj)
	{
		((LidarPointCloud_eventInsertPoint_Parms*)Obj)->bRefreshPointsBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::NewProp_bRefreshPointsBounds = { "bRefreshPointsBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventInsertPoint_Parms), &Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::NewProp_bRefreshPointsBounds_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::NewProp_Translation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventInsertPoint_Parms, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::NewProp_Translation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::NewProp_DuplicateHandling_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::NewProp_DuplicateHandling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::NewProp_bRefreshPointsBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::NewProp_Translation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/**\n\x09 * Inserts the given point into the Octree structure.\n\x09 * If bRefreshPointsBounds is set to false, make sure you call RefreshBounds() manually or cloud centering may not work correctly.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Inserts the given point into the Octree structure.\nIf bRefreshPointsBounds is set to false, make sure you call RefreshBounds() manually or cloud centering may not work correctly." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "InsertPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::LidarPointCloud_eventInsertPoint_Parms), Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_InsertPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_InsertPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics
	{
		struct LidarPointCloud_eventInsertPoints_Parms
		{
			TArray<FLidarPointCloudPoint> Points;
			ELidarPointCloudDuplicateHandling DuplicateHandling;
			bool bRefreshPointsBounds;
			FVector Translation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DuplicateHandling_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DuplicateHandling;
		static void NewProp_bRefreshPointsBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRefreshPointsBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLidarPointCloudPoint, METADATA_PARAMS(nullptr, 0) }; // 3309861466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventInsertPoints_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::NewProp_Points_MetaData)) }; // 3309861466
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::NewProp_DuplicateHandling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::NewProp_DuplicateHandling = { "DuplicateHandling", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventInsertPoints_Parms, DuplicateHandling), Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudDuplicateHandling, METADATA_PARAMS(nullptr, 0) }; // 2977996688
	void Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::NewProp_bRefreshPointsBounds_SetBit(void* Obj)
	{
		((LidarPointCloud_eventInsertPoints_Parms*)Obj)->bRefreshPointsBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::NewProp_bRefreshPointsBounds = { "bRefreshPointsBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventInsertPoints_Parms), &Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::NewProp_bRefreshPointsBounds_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::NewProp_Translation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventInsertPoints_Parms, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::NewProp_Translation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::NewProp_DuplicateHandling_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::NewProp_DuplicateHandling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::NewProp_bRefreshPointsBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::NewProp_Translation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/**\n\x09 * Inserts group of points into the Octree structure, multi-threaded.\n\x09 * If bRefreshPointsBounds is set to false, make sure you call RefreshBounds() manually or cloud centering may not work correctly.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Inserts group of points into the Octree structure, multi-threaded.\nIf bRefreshPointsBounds is set to false, make sure you call RefreshBounds() manually or cloud centering may not work correctly." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "InsertPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::LidarPointCloud_eventInsertPoints_Parms), Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_InsertPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_InsertPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_IsCentered_Statics
	{
		struct LidarPointCloud_eventIsCentered_Parms
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
	void Z_Construct_UFunction_ULidarPointCloud_IsCentered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LidarPointCloud_eventIsCentered_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_IsCentered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventIsCentered_Parms), &Z_Construct_UFunction_ULidarPointCloud_IsCentered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_IsCentered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_IsCentered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_IsCentered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Returns true, if the cloud has been centered. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Returns true, if the cloud has been centered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_IsCentered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "IsCentered", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_IsCentered_Statics::LidarPointCloud_eventIsCentered_Parms), Z_Construct_UFunction_ULidarPointCloud_IsCentered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_IsCentered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_IsCentered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_IsCentered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_IsCentered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_IsCentered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_IsFullyLoaded_Statics
	{
		struct LidarPointCloud_eventIsFullyLoaded_Parms
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
	void Z_Construct_UFunction_ULidarPointCloud_IsFullyLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LidarPointCloud_eventIsFullyLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_IsFullyLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventIsFullyLoaded_Parms), &Z_Construct_UFunction_ULidarPointCloud_IsFullyLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_IsFullyLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_IsFullyLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_IsFullyLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Returns true, if the cloud is fully and persistently loaded. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Returns true, if the cloud is fully and persistently loaded." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_IsFullyLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "IsFullyLoaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_IsFullyLoaded_Statics::LidarPointCloud_eventIsFullyLoaded_Parms), Z_Construct_UFunction_ULidarPointCloud_IsFullyLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_IsFullyLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_IsFullyLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_IsFullyLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_IsFullyLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_IsFullyLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_IsOptimizedForDynamicData_Statics
	{
		struct LidarPointCloud_eventIsOptimizedForDynamicData_Parms
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
	void Z_Construct_UFunction_ULidarPointCloud_IsOptimizedForDynamicData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LidarPointCloud_eventIsOptimizedForDynamicData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_IsOptimizedForDynamicData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventIsOptimizedForDynamicData_Parms), &Z_Construct_UFunction_ULidarPointCloud_IsOptimizedForDynamicData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_IsOptimizedForDynamicData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_IsOptimizedForDynamicData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_IsOptimizedForDynamicData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_IsOptimizedForDynamicData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "IsOptimizedForDynamicData", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_IsOptimizedForDynamicData_Statics::LidarPointCloud_eventIsOptimizedForDynamicData_Parms), Z_Construct_UFunction_ULidarPointCloud_IsOptimizedForDynamicData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_IsOptimizedForDynamicData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_IsOptimizedForDynamicData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_IsOptimizedForDynamicData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_IsOptimizedForDynamicData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_IsOptimizedForDynamicData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics
	{
		struct LidarPointCloud_eventLineTraceMulti_Parms
		{
			FVector Origin;
			FVector Direction;
			float Radius;
			bool bVisibleOnly;
			bool bReturnWorldSpace;
			TArray<FLidarPointCloudPoint> OutHits;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static void NewProp_bReturnWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnWorldSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHits_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHits;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventLineTraceMulti_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventLineTraceMulti_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventLineTraceMulti_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloud_eventLineTraceMulti_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventLineTraceMulti_Parms), &Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::NewProp_bReturnWorldSpace_SetBit(void* Obj)
	{
		((LidarPointCloud_eventLineTraceMulti_Parms*)Obj)->bReturnWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::NewProp_bReturnWorldSpace = { "bReturnWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventLineTraceMulti_Parms), &Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::NewProp_bReturnWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLidarPointCloudPoint, METADATA_PARAMS(nullptr, 0) }; // 3309861466
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventLineTraceMulti_Parms, OutHits), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3309861466
	void Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LidarPointCloud_eventLineTraceMulti_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventLineTraceMulti_Parms), &Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::NewProp_bVisibleOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::NewProp_bReturnWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::NewProp_OutHits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::NewProp_OutHits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/**\n\x09 * Performs a raycast test against the point cloud.\n\x09 * Populates OutHits array with the results.\n\x09 * If ReturnWorldSpace is selected, the points' locations will be converted into absolute value, otherwise they will be relative to the center of the cloud.\n\x09 * Returns true it anything has been hit.\n\x09 */" },
		{ "Keywords", "raycast" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Performs a raycast test against the point cloud.\nPopulates OutHits array with the results.\nIf ReturnWorldSpace is selected, the points' locations will be converted into absolute value, otherwise they will be relative to the center of the cloud.\nReturns true it anything has been hit." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "LineTraceMulti", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::LidarPointCloud_eventLineTraceMulti_Parms), Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics
	{
		struct LidarPointCloud_eventLineTraceSingle_Parms
		{
			FVector Origin;
			FVector Direction;
			float Radius;
			bool bVisibleOnly;
			FLidarPointCloudPoint PointHit;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointHit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventLineTraceSingle_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventLineTraceSingle_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventLineTraceSingle_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloud_eventLineTraceSingle_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventLineTraceSingle_Parms), &Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::NewProp_PointHit = { "PointHit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventLineTraceSingle_Parms, PointHit), Z_Construct_UScriptStruct_FLidarPointCloudPoint, METADATA_PARAMS(nullptr, 0) }; // 3309861466
	void Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LidarPointCloud_eventLineTraceSingle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventLineTraceSingle_Parms), &Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::NewProp_bVisibleOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::NewProp_PointHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Performs a raycast test against the point cloud. Returns the pointer if hit or nullptr otherwise. */" },
		{ "Keywords", "raycast" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Performs a raycast test against the point cloud. Returns the pointer if hit or nullptr otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "LineTraceSingle", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::LidarPointCloud_eventLineTraceSingle_Parms), Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_LoadAllNodes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_LoadAllNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Persistently loads all nodes. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Persistently loads all nodes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_LoadAllNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "LoadAllNodes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_LoadAllNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_LoadAllNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_LoadAllNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_LoadAllNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_MarkPointVisibilityDirty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_MarkPointVisibilityDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/**\n\x09 * This should to be called if any manual modification to individual points' visibility has been made.\n\x09 * If not marked dirty, the rendering may work sub-optimally.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "This should to be called if any manual modification to individual points' visibility has been made.\nIf not marked dirty, the rendering may work sub-optimally." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_MarkPointVisibilityDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "MarkPointVisibilityDirty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_MarkPointVisibilityDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_MarkPointVisibilityDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_MarkPointVisibilityDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_MarkPointVisibilityDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_Merge_Statics
	{
		struct LidarPointCloud_eventMerge_Parms
		{
			TArray<ULidarPointCloud*> PointCloudsToMerge;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PointCloudsToMerge_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PointCloudsToMerge;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloud_Merge_Statics::NewProp_PointCloudsToMerge_Inner = { "PointCloudsToMerge", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULidarPointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULidarPointCloud_Merge_Statics::NewProp_PointCloudsToMerge = { "PointCloudsToMerge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventMerge_Parms, PointCloudsToMerge), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_Merge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_Merge_Statics::NewProp_PointCloudsToMerge_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_Merge_Statics::NewProp_PointCloudsToMerge,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_Merge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Merges this point cloud with the ones provided */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Merges this point cloud with the ones provided" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_Merge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "Merge", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_Merge_Statics::LidarPointCloud_eventMerge_Parms), Z_Construct_UFunction_ULidarPointCloud_Merge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_Merge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_Merge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_Merge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_Merge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_Merge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_MergeSingle_Statics
	{
		struct LidarPointCloud_eventMergeSingle_Parms
		{
			ULidarPointCloud* PointCloudToMerge;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PointCloudToMerge;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloud_MergeSingle_Statics::NewProp_PointCloudToMerge = { "PointCloudToMerge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventMergeSingle_Parms, PointCloudToMerge), Z_Construct_UClass_ULidarPointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_MergeSingle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_MergeSingle_Statics::NewProp_PointCloudToMerge,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_MergeSingle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Merges this point cloud with the one provided */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Merges this point cloud with the one provided" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_MergeSingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "MergeSingle", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_MergeSingle_Statics::LidarPointCloud_eventMergeSingle_Parms), Z_Construct_UFunction_ULidarPointCloud_MergeSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_MergeSingle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_MergeSingle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_MergeSingle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_MergeSingle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_MergeSingle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_RefreshBounds_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_RefreshBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Recalculates and updates points bounds. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Recalculates and updates points bounds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_RefreshBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "RefreshBounds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_RefreshBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_RefreshBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_RefreshBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_RefreshBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_RefreshRendering_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_RefreshRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_RefreshRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "RefreshRendering", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_RefreshRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_RefreshRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_RefreshRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_RefreshRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics
	{
		struct LidarPointCloud_eventReimport_Parms
		{
			UObject* WorldContextObject;
			bool bUseAsync;
			FLatentActionInfo LatentInfo;
			ELidarPointCloudAsyncMode AsyncMode;
			float Progress;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_bUseAsync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsync;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AsyncMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AsyncMode;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventReimport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::NewProp_bUseAsync_SetBit(void* Obj)
	{
		((LidarPointCloud_eventReimport_Parms*)Obj)->bUseAsync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::NewProp_bUseAsync = { "bUseAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventReimport_Parms), &Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::NewProp_bUseAsync_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventReimport_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::NewProp_AsyncMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::NewProp_AsyncMode = { "AsyncMode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventReimport_Parms, AsyncMode), Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudAsyncMode, METADATA_PARAMS(nullptr, 0) }; // 2848692903
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventReimport_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::NewProp_bUseAsync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::NewProp_AsyncMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::NewProp_AsyncMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Re-imports the cloud from it's original source file, overwriting any current point information. */" },
		{ "ExpandEnumAsExecs", "AsyncMode" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Re-imports the cloud from it's original source file, overwriting any current point information." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "Reimport", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::LidarPointCloud_eventReimport_Parms), Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_Reimport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_Reimport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_RemoveCollision_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_RemoveCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Removes collision mesh from the cloud. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Removes collision mesh from the cloud." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_RemoveCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "RemoveCollision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_RemoveCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_RemoveCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_RemoveCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_RemoveCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_RemoveFirstPointByRay_Statics
	{
		struct LidarPointCloud_eventRemoveFirstPointByRay_Parms
		{
			FVector Origin;
			FVector Direction;
			float Radius;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_RemoveFirstPointByRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventRemoveFirstPointByRay_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_RemoveFirstPointByRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventRemoveFirstPointByRay_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloud_RemoveFirstPointByRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventRemoveFirstPointByRay_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloud_RemoveFirstPointByRay_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloud_eventRemoveFirstPointByRay_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_RemoveFirstPointByRay_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventRemoveFirstPointByRay_Parms), &Z_Construct_UFunction_ULidarPointCloud_RemoveFirstPointByRay_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_RemoveFirstPointByRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_RemoveFirstPointByRay_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_RemoveFirstPointByRay_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_RemoveFirstPointByRay_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_RemoveFirstPointByRay_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_RemoveFirstPointByRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Removes the first point hit by the given ray */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Removes the first point hit by the given ray" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_RemoveFirstPointByRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "RemoveFirstPointByRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_RemoveFirstPointByRay_Statics::LidarPointCloud_eventRemoveFirstPointByRay_Parms), Z_Construct_UFunction_ULidarPointCloud_RemoveFirstPointByRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_RemoveFirstPointByRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_RemoveFirstPointByRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_RemoveFirstPointByRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_RemoveFirstPointByRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_RemoveFirstPointByRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_RemoveHiddenPoints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_RemoveHiddenPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Removes all hidden points */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Removes all hidden points" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_RemoveHiddenPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "RemoveHiddenPoints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_RemoveHiddenPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_RemoveHiddenPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_RemoveHiddenPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_RemoveHiddenPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_RemovePoint_Statics
	{
		struct LidarPointCloud_eventRemovePoint_Parms
		{
			FLidarPointCloudPoint Point;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_RemovePoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventRemovePoint_Parms, Point), Z_Construct_UScriptStruct_FLidarPointCloudPoint, METADATA_PARAMS(nullptr, 0) }; // 3309861466
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_RemovePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_RemovePoint_Statics::NewProp_Point,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_RemovePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Attempts to remove the given point. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Attempts to remove the given point." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_RemovePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "RemovePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_RemovePoint_Statics::LidarPointCloud_eventRemovePoint_Parms), Z_Construct_UFunction_ULidarPointCloud_RemovePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_RemovePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_RemovePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_RemovePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_RemovePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_RemovePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_RemovePointsByRay_Statics
	{
		struct LidarPointCloud_eventRemovePointsByRay_Parms
		{
			FVector Origin;
			FVector Direction;
			float Radius;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_RemovePointsByRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventRemovePointsByRay_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_RemovePointsByRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventRemovePointsByRay_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloud_RemovePointsByRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventRemovePointsByRay_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloud_RemovePointsByRay_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloud_eventRemovePointsByRay_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_RemovePointsByRay_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventRemovePointsByRay_Parms), &Z_Construct_UFunction_ULidarPointCloud_RemovePointsByRay_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_RemovePointsByRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_RemovePointsByRay_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_RemovePointsByRay_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_RemovePointsByRay_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_RemovePointsByRay_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_RemovePointsByRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Removes all points hit by the given ray */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Removes all points hit by the given ray" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_RemovePointsByRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "RemovePointsByRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_RemovePointsByRay_Statics::LidarPointCloud_eventRemovePointsByRay_Parms), Z_Construct_UFunction_ULidarPointCloud_RemovePointsByRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_RemovePointsByRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_RemovePointsByRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_RemovePointsByRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_RemovePointsByRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_RemovePointsByRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_RemovePointsInBox_Statics
	{
		struct LidarPointCloud_eventRemovePointsInBox_Parms
		{
			FVector Center;
			FVector Extent;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_RemovePointsInBox_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventRemovePointsInBox_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_RemovePointsInBox_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventRemovePointsInBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloud_RemovePointsInBox_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloud_eventRemovePointsInBox_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_RemovePointsInBox_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventRemovePointsInBox_Parms), &Z_Construct_UFunction_ULidarPointCloud_RemovePointsInBox_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_RemovePointsInBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_RemovePointsInBox_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_RemovePointsInBox_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_RemovePointsInBox_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_RemovePointsInBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Removes all points within the given box */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Removes all points within the given box" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_RemovePointsInBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "RemovePointsInBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_RemovePointsInBox_Statics::LidarPointCloud_eventRemovePointsInBox_Parms), Z_Construct_UFunction_ULidarPointCloud_RemovePointsInBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_RemovePointsInBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_RemovePointsInBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_RemovePointsInBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_RemovePointsInBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_RemovePointsInBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_RemovePointsInSphere_Statics
	{
		struct LidarPointCloud_eventRemovePointsInSphere_Parms
		{
			FVector Center;
			float Radius;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_RemovePointsInSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventRemovePointsInSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloud_RemovePointsInSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventRemovePointsInSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloud_RemovePointsInSphere_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloud_eventRemovePointsInSphere_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_RemovePointsInSphere_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventRemovePointsInSphere_Parms), &Z_Construct_UFunction_ULidarPointCloud_RemovePointsInSphere_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_RemovePointsInSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_RemovePointsInSphere_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_RemovePointsInSphere_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_RemovePointsInSphere_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_RemovePointsInSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Removes all points within the given sphere  */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Removes all points within the given sphere" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_RemovePointsInSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "RemovePointsInSphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_RemovePointsInSphere_Statics::LidarPointCloud_eventRemovePointsInSphere_Parms), Z_Construct_UFunction_ULidarPointCloud_RemovePointsInSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_RemovePointsInSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_RemovePointsInSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_RemovePointsInSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_RemovePointsInSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_RemovePointsInSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_RestoreOriginalCoordinates_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_RestoreOriginalCoordinates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Restores original coordinates */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Restores original coordinates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_RestoreOriginalCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "RestoreOriginalCoordinates", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_RestoreOriginalCoordinates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_RestoreOriginalCoordinates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_RestoreOriginalCoordinates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_RestoreOriginalCoordinates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_SetData_Statics
	{
		struct LidarPointCloud_eventSetData_Parms
		{
			TArray<FLidarPointCloudPoint> Points;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_SetData_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLidarPointCloudPoint, METADATA_PARAMS(nullptr, 0) }; // 3309861466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_SetData_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULidarPointCloud_SetData_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventSetData_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_SetData_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_SetData_Statics::NewProp_Points_MetaData)) }; // 3309861466
	void Z_Construct_UFunction_ULidarPointCloud_SetData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LidarPointCloud_eventSetData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_SetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventSetData_Parms), &Z_Construct_UFunction_ULidarPointCloud_SetData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_SetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_SetData_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_SetData_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_SetData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_SetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Reinitializes the cloud with the new set of data. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Reinitializes the cloud with the new set of data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "SetData", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_SetData_Statics::LidarPointCloud_eventSetData_Parms), Z_Construct_UFunction_ULidarPointCloud_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_SetLocationOffset_Statics
	{
		struct LidarPointCloud_eventSetLocationOffset_Parms
		{
			FVector Offset;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_SetLocationOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventSetLocationOffset_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_SetLocationOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_SetLocationOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_SetLocationOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Applies given offset to this point cloud. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Applies given offset to this point cloud." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_SetLocationOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "SetLocationOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_SetLocationOffset_Statics::LidarPointCloud_eventSetLocationOffset_Parms), Z_Construct_UFunction_ULidarPointCloud_SetLocationOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_SetLocationOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_SetLocationOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_SetLocationOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_SetLocationOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_SetLocationOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_SetOptimalCollisionError_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_SetOptimalCollisionError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_SetOptimalCollisionError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "SetOptimalCollisionError", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_SetOptimalCollisionError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_SetOptimalCollisionError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_SetOptimalCollisionError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_SetOptimalCollisionError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_SetOptimizedForDynamicData_Statics
	{
		struct LidarPointCloud_eventSetOptimizedForDynamicData_Parms
		{
			bool bNewOptimizedForDynamicData;
		};
		static void NewProp_bNewOptimizedForDynamicData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewOptimizedForDynamicData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULidarPointCloud_SetOptimizedForDynamicData_Statics::NewProp_bNewOptimizedForDynamicData_SetBit(void* Obj)
	{
		((LidarPointCloud_eventSetOptimizedForDynamicData_Parms*)Obj)->bNewOptimizedForDynamicData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_SetOptimizedForDynamicData_Statics::NewProp_bNewOptimizedForDynamicData = { "bNewOptimizedForDynamicData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventSetOptimizedForDynamicData_Parms), &Z_Construct_UFunction_ULidarPointCloud_SetOptimizedForDynamicData_Statics::NewProp_bNewOptimizedForDynamicData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_SetOptimizedForDynamicData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_SetOptimizedForDynamicData_Statics::NewProp_bNewOptimizedForDynamicData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_SetOptimizedForDynamicData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_SetOptimizedForDynamicData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "SetOptimizedForDynamicData", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_SetOptimizedForDynamicData_Statics::LidarPointCloud_eventSetOptimizedForDynamicData_Parms), Z_Construct_UFunction_ULidarPointCloud_SetOptimizedForDynamicData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_SetOptimizedForDynamicData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_SetOptimizedForDynamicData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_SetOptimizedForDynamicData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_SetOptimizedForDynamicData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_SetOptimizedForDynamicData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_SetSourcePath_Statics
	{
		struct LidarPointCloud_eventSetSourcePath_Parms
		{
			FString NewSourcePath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewSourcePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewSourcePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_SetSourcePath_Statics::NewProp_NewSourcePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULidarPointCloud_SetSourcePath_Statics::NewProp_NewSourcePath = { "NewSourcePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventSetSourcePath_Parms, NewSourcePath), METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_SetSourcePath_Statics::NewProp_NewSourcePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_SetSourcePath_Statics::NewProp_NewSourcePath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_SetSourcePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_SetSourcePath_Statics::NewProp_NewSourcePath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_SetSourcePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_SetSourcePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "SetSourcePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_SetSourcePath_Statics::LidarPointCloud_eventSetSourcePath_Parms), Z_Construct_UFunction_ULidarPointCloud_SetSourcePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_SetSourcePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_SetSourcePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_SetSourcePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_SetSourcePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_SetSourcePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfFirstPointByRay_Statics
	{
		struct LidarPointCloud_eventSetVisibilityOfFirstPointByRay_Parms
		{
			bool bNewVisibility;
			FVector Origin;
			FVector Direction;
			float Radius;
		};
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfFirstPointByRay_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((LidarPointCloud_eventSetVisibilityOfFirstPointByRay_Parms*)Obj)->bNewVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfFirstPointByRay_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventSetVisibilityOfFirstPointByRay_Parms), &Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfFirstPointByRay_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfFirstPointByRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventSetVisibilityOfFirstPointByRay_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfFirstPointByRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventSetVisibilityOfFirstPointByRay_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfFirstPointByRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventSetVisibilityOfFirstPointByRay_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfFirstPointByRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfFirstPointByRay_Statics::NewProp_bNewVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfFirstPointByRay_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfFirstPointByRay_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfFirstPointByRay_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfFirstPointByRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Sets visibility of the first point hit by the given ray. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Sets visibility of the first point hit by the given ray." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfFirstPointByRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "SetVisibilityOfFirstPointByRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfFirstPointByRay_Statics::LidarPointCloud_eventSetVisibilityOfFirstPointByRay_Parms), Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfFirstPointByRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfFirstPointByRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfFirstPointByRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfFirstPointByRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfFirstPointByRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfFirstPointByRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsByRay_Statics
	{
		struct LidarPointCloud_eventSetVisibilityOfPointsByRay_Parms
		{
			bool bNewVisibility;
			FVector Origin;
			FVector Direction;
			float Radius;
		};
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsByRay_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((LidarPointCloud_eventSetVisibilityOfPointsByRay_Parms*)Obj)->bNewVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsByRay_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventSetVisibilityOfPointsByRay_Parms), &Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsByRay_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsByRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventSetVisibilityOfPointsByRay_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsByRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventSetVisibilityOfPointsByRay_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsByRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventSetVisibilityOfPointsByRay_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsByRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsByRay_Statics::NewProp_bNewVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsByRay_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsByRay_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsByRay_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsByRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Sets visibility of points hit by the given ray. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Sets visibility of points hit by the given ray." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsByRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "SetVisibilityOfPointsByRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsByRay_Statics::LidarPointCloud_eventSetVisibilityOfPointsByRay_Parms), Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsByRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsByRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsByRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsByRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsByRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsByRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInBox_Statics
	{
		struct LidarPointCloud_eventSetVisibilityOfPointsInBox_Parms
		{
			bool bNewVisibility;
			FVector Center;
			FVector Extent;
		};
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInBox_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((LidarPointCloud_eventSetVisibilityOfPointsInBox_Parms*)Obj)->bNewVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInBox_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventSetVisibilityOfPointsInBox_Parms), &Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInBox_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInBox_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventSetVisibilityOfPointsInBox_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInBox_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventSetVisibilityOfPointsInBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInBox_Statics::NewProp_bNewVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInBox_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInBox_Statics::NewProp_Extent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Sets visibility of points within the given box. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Sets visibility of points within the given box." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "SetVisibilityOfPointsInBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInBox_Statics::LidarPointCloud_eventSetVisibilityOfPointsInBox_Parms), Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInSphere_Statics
	{
		struct LidarPointCloud_eventSetVisibilityOfPointsInSphere_Parms
		{
			bool bNewVisibility;
			FVector Center;
			float Radius;
		};
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInSphere_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((LidarPointCloud_eventSetVisibilityOfPointsInSphere_Parms*)Obj)->bNewVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInSphere_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloud_eventSetVisibilityOfPointsInSphere_Parms), &Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInSphere_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventSetVisibilityOfPointsInSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloud_eventSetVisibilityOfPointsInSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInSphere_Statics::NewProp_bNewVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInSphere_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInSphere_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Sets visibility of points within the given sphere. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Sets visibility of points within the given sphere." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "SetVisibilityOfPointsInSphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInSphere_Statics::LidarPointCloud_eventSetVisibilityOfPointsInSphere_Parms), Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloud_UnhideAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloud_UnhideAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Marks all points visible */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Marks all points visible" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloud_UnhideAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloud, nullptr, "UnhideAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloud_UnhideAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloud_UnhideAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloud_UnhideAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloud_UnhideAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULidarPointCloud);
	UClass* Z_Construct_UClass_ULidarPointCloud_NoRegister()
	{
		return ULidarPointCloud::StaticClass();
	}
	struct Z_Construct_UClass_ULidarPointCloud_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCollisionError_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCollisionError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionAccuracy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionAccuracy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalsQuality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NormalsQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalsNoiseTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalsNoiseTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalCoordinates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizedForDynamicData_MetaData[];
#endif
		static void NewProp_bOptimizedForDynamicData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizedForDynamicData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClassificationsImported_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassificationsImported_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassificationsImported;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BodySetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewBodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NewBodySetup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULidarPointCloud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LidarPointCloudRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULidarPointCloud_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULidarPointCloud_ApplyColorToAllPoints, "ApplyColorToAllPoints" }, // 2321468255
		{ &Z_Construct_UFunction_ULidarPointCloud_ApplyColorToFirstPointByRay, "ApplyColorToFirstPointByRay" }, // 1497397570
		{ &Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsByRay, "ApplyColorToPointsByRay" }, // 1625769948
		{ &Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInBox, "ApplyColorToPointsInBox" }, // 3151774660
		{ &Z_Construct_UFunction_ULidarPointCloud_ApplyColorToPointsInSphere, "ApplyColorToPointsInSphere" }, // 1053847461
		{ &Z_Construct_UFunction_ULidarPointCloud_BuildCollision, "BuildCollision" }, // 2303295207
		{ &Z_Construct_UFunction_ULidarPointCloud_BuildCollisionWithCallback, "BuildCollisionWithCallback" }, // 3407389782
		{ &Z_Construct_UFunction_ULidarPointCloud_CalculateNormals, "CalculateNormals" }, // 1054149155
		{ &Z_Construct_UFunction_ULidarPointCloud_CenterPoints, "CenterPoints" }, // 3113919345
		{ &Z_Construct_UFunction_ULidarPointCloud_Export, "Export" }, // 3241590000
		{ &Z_Construct_UFunction_ULidarPointCloud_GetBounds, "GetBounds" }, // 1773660732
		{ &Z_Construct_UFunction_ULidarPointCloud_GetColliderPolys, "GetColliderPolys" }, // 2153103649
		{ &Z_Construct_UFunction_ULidarPointCloud_GetDataSize, "GetDataSize" }, // 2837844873
		{ &Z_Construct_UFunction_ULidarPointCloud_GetEstimatedPointSpacing, "GetEstimatedPointSpacing" }, // 3065274783
		{ &Z_Construct_UFunction_ULidarPointCloud_GetNumLODs, "GetNumLODs" }, // 2540624175
		{ &Z_Construct_UFunction_ULidarPointCloud_GetNumNodes, "GetNumNodes" }, // 2250032370
		{ &Z_Construct_UFunction_ULidarPointCloud_GetNumPoints, "GetNumPoints" }, // 2513877966
		{ &Z_Construct_UFunction_ULidarPointCloud_GetNumVisiblePoints, "GetNumVisiblePoints" }, // 1077084094
		{ &Z_Construct_UFunction_ULidarPointCloud_GetPointsAsCopies, "GetPointsAsCopies" }, // 28002853
		{ &Z_Construct_UFunction_ULidarPointCloud_GetPointsInBoxAsCopies, "GetPointsInBoxAsCopies" }, // 2963680851
		{ &Z_Construct_UFunction_ULidarPointCloud_GetPointsInSphereAsCopies, "GetPointsInSphereAsCopies" }, // 3665492876
		{ &Z_Construct_UFunction_ULidarPointCloud_GetSourcePath, "GetSourcePath" }, // 1725957082
		{ &Z_Construct_UFunction_ULidarPointCloud_HasCollisionData, "HasCollisionData" }, // 1257708890
		{ &Z_Construct_UFunction_ULidarPointCloud_HasPointsByRay, "HasPointsByRay" }, // 1579831690
		{ &Z_Construct_UFunction_ULidarPointCloud_HasPointsInBox, "HasPointsInBox" }, // 3168248
		{ &Z_Construct_UFunction_ULidarPointCloud_HasPointsInSphere, "HasPointsInSphere" }, // 725693267
		{ &Z_Construct_UFunction_ULidarPointCloud_HideAll, "HideAll" }, // 223362651
		{ &Z_Construct_UFunction_ULidarPointCloud_Initialize, "Initialize" }, // 502006101
		{ &Z_Construct_UFunction_ULidarPointCloud_InsertPoint, "InsertPoint" }, // 412464036
		{ &Z_Construct_UFunction_ULidarPointCloud_InsertPoints, "InsertPoints" }, // 1405720475
		{ &Z_Construct_UFunction_ULidarPointCloud_IsCentered, "IsCentered" }, // 3896247822
		{ &Z_Construct_UFunction_ULidarPointCloud_IsFullyLoaded, "IsFullyLoaded" }, // 3232754726
		{ &Z_Construct_UFunction_ULidarPointCloud_IsOptimizedForDynamicData, "IsOptimizedForDynamicData" }, // 1845496503
		{ &Z_Construct_UFunction_ULidarPointCloud_LineTraceMulti, "LineTraceMulti" }, // 2671366939
		{ &Z_Construct_UFunction_ULidarPointCloud_LineTraceSingle, "LineTraceSingle" }, // 847481692
		{ &Z_Construct_UFunction_ULidarPointCloud_LoadAllNodes, "LoadAllNodes" }, // 4264169767
		{ &Z_Construct_UFunction_ULidarPointCloud_MarkPointVisibilityDirty, "MarkPointVisibilityDirty" }, // 617803848
		{ &Z_Construct_UFunction_ULidarPointCloud_Merge, "Merge" }, // 4052263213
		{ &Z_Construct_UFunction_ULidarPointCloud_MergeSingle, "MergeSingle" }, // 1226634003
		{ &Z_Construct_UFunction_ULidarPointCloud_RefreshBounds, "RefreshBounds" }, // 360494183
		{ &Z_Construct_UFunction_ULidarPointCloud_RefreshRendering, "RefreshRendering" }, // 2785943183
		{ &Z_Construct_UFunction_ULidarPointCloud_Reimport, "Reimport" }, // 175085144
		{ &Z_Construct_UFunction_ULidarPointCloud_RemoveCollision, "RemoveCollision" }, // 2319172312
		{ &Z_Construct_UFunction_ULidarPointCloud_RemoveFirstPointByRay, "RemoveFirstPointByRay" }, // 624523556
		{ &Z_Construct_UFunction_ULidarPointCloud_RemoveHiddenPoints, "RemoveHiddenPoints" }, // 3476036189
		{ &Z_Construct_UFunction_ULidarPointCloud_RemovePoint, "RemovePoint" }, // 3692261632
		{ &Z_Construct_UFunction_ULidarPointCloud_RemovePointsByRay, "RemovePointsByRay" }, // 2424006002
		{ &Z_Construct_UFunction_ULidarPointCloud_RemovePointsInBox, "RemovePointsInBox" }, // 1605465090
		{ &Z_Construct_UFunction_ULidarPointCloud_RemovePointsInSphere, "RemovePointsInSphere" }, // 725989158
		{ &Z_Construct_UFunction_ULidarPointCloud_RestoreOriginalCoordinates, "RestoreOriginalCoordinates" }, // 1369179481
		{ &Z_Construct_UFunction_ULidarPointCloud_SetData, "SetData" }, // 4284921601
		{ &Z_Construct_UFunction_ULidarPointCloud_SetLocationOffset, "SetLocationOffset" }, // 2318263555
		{ &Z_Construct_UFunction_ULidarPointCloud_SetOptimalCollisionError, "SetOptimalCollisionError" }, // 2329672041
		{ &Z_Construct_UFunction_ULidarPointCloud_SetOptimizedForDynamicData, "SetOptimizedForDynamicData" }, // 2361226933
		{ &Z_Construct_UFunction_ULidarPointCloud_SetSourcePath, "SetSourcePath" }, // 1322478105
		{ &Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfFirstPointByRay, "SetVisibilityOfFirstPointByRay" }, // 348214734
		{ &Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsByRay, "SetVisibilityOfPointsByRay" }, // 666651508
		{ &Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInBox, "SetVisibilityOfPointsInBox" }, // 2300877115
		{ &Z_Construct_UFunction_ULidarPointCloud_SetVisibilityOfPointsInSphere, "SetVisibilityOfPointsInSphere" }, // 3395632327
		{ &Z_Construct_UFunction_ULidarPointCloud_UnhideAll, "UnhideAll" }, // 1715251192
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloud_Statics::Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "Import Settings" },
		{ "AutoExpandCategories", "Performance Rendering|Sprite" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the Point Cloud asset\n */" },
		{ "IncludePath", "LidarPointCloud.h" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Represents the Point Cloud asset" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_SourcePath_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Import Settings" },
		{ "Comment", "/** Stores the path to the original source file. Empty if dynamically created. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Stores the path to the original source file. Empty if dynamically created." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloud, SourcePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_SourcePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_SourcePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_MaxCollisionError_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * Determines the maximum error (in cm) of the collision for this point cloud.\n\x09 * NOTE: Lower values will require more time to build.\n\x09 * Rebuild collision for the changes to take effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Determines the maximum error (in cm) of the collision for this point cloud.\nNOTE: Lower values will require more time to build.\nRebuild collision for the changes to take effect." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_MaxCollisionError = { "MaxCollisionError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloud, MaxCollisionError), METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_MaxCollisionError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_MaxCollisionError_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_CollisionAccuracy_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use MaxCollisionError instead." },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_CollisionAccuracy = { "CollisionAccuracy", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloud, CollisionAccuracy_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_CollisionAccuracy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_CollisionAccuracy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_NormalsQuality_MetaData[] = {
		{ "Category", "Normals" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Higher values will generally result in more accurate calculations, at the expense of time */" },
		{ "DisplayName", "Quality" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Higher values will generally result in more accurate calculations, at the expense of time" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_NormalsQuality = { "NormalsQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloud, NormalsQuality), METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_NormalsQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_NormalsQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_NormalsNoiseTolerance_MetaData[] = {
		{ "Category", "Normals" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Higher values are less susceptible to noise, but will most likely lose finer details, especially around hard edges.\n\x09 * Lower values retain more detail, at the expense of time.\n\x09 * NOTE: setting this too low will cause visual artifacts and geometry holes in noisier datasets.\n\x09 */" },
		{ "DisplayName", "Noise Tolerance" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Higher values are less susceptible to noise, but will most likely lose finer details, especially around hard edges.\nLower values retain more detail, at the expense of time.\nNOTE: setting this too low will cause visual artifacts and geometry holes in noisier datasets." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_NormalsNoiseTolerance = { "NormalsNoiseTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloud, NormalsNoiseTolerance), METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_NormalsNoiseTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_NormalsNoiseTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_OriginalCoordinates_MetaData[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "/** Stores the original offset as a double. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Stores the original offset as a double." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_OriginalCoordinates = { "OriginalCoordinates", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloud, OriginalCoordinates), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_OriginalCoordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_OriginalCoordinates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_bOptimizedForDynamicData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Performance" },
		{ "Comment", "/**\n\x09 * Disables the LOD pipeline, allowing for much faster data operations (insert/remove/set)\n\x09 * at a potential expense of runtime performance. The whole asset will be treated as a single,\n\x09 * large asset with no granular density control, nor occlusion culling.\n\x09 * \n\x09 * Recommended for assets, which have their data updated per-frame (such as live streaming).\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Disables the LOD pipeline, allowing for much faster data operations (insert/remove/set)\nat a potential expense of runtime performance. The whole asset will be treated as a single,\nlarge asset with no granular density control, nor occlusion culling.\n\nRecommended for assets, which have their data updated per-frame (such as live streaming)." },
	};
#endif
	void Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_bOptimizedForDynamicData_SetBit(void* Obj)
	{
		((ULidarPointCloud*)Obj)->bOptimizedForDynamicData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_bOptimizedForDynamicData = { "bOptimizedForDynamicData", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULidarPointCloud), &Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_bOptimizedForDynamicData_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_bOptimizedForDynamicData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_bOptimizedForDynamicData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "Comment", "/** Contains an offset to be added to all points when rendering */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Contains an offset to be added to all points when rendering" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloud, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_LocationOffset_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_ClassificationsImported_Inner = { "ClassificationsImported", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_ClassificationsImported_MetaData[] = {
		{ "Comment", "/** Contains the list of imported classification IDs */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Contains the list of imported classification IDs" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_ClassificationsImported = { "ClassificationsImported", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloud, ClassificationsImported), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_ClassificationsImported_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_ClassificationsImported_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_BodySetup_MetaData[] = {
		{ "Comment", "/** Description of collision */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Description of collision" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0044000000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloud, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_BodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_BodySetup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_NewBodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_NewBodySetup = { "NewBodySetup", nullptr, (EPropertyFlags)0x0044000000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloud, NewBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_NewBodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_NewBodySetup_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULidarPointCloud_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_SourcePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_MaxCollisionError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_CollisionAccuracy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_NormalsQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_NormalsNoiseTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_OriginalCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_bOptimizedForDynamicData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_LocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_ClassificationsImported_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_ClassificationsImported,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_BodySetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloud_Statics::NewProp_NewBodySetup,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULidarPointCloud_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(ULidarPointCloud, IInterface_CollisionDataProvider), false },  // 1866130202
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULidarPointCloud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULidarPointCloud>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULidarPointCloud_Statics::ClassParams = {
		&ULidarPointCloud::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULidarPointCloud_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloud_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULidarPointCloud()
	{
		if (!Z_Registration_Info_UClass_ULidarPointCloud.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULidarPointCloud.OuterSingleton, Z_Construct_UClass_ULidarPointCloud_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULidarPointCloud.OuterSingleton;
	}
	template<> LIDARPOINTCLOUDRUNTIME_API UClass* StaticClass<ULidarPointCloud>()
	{
		return ULidarPointCloud::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULidarPointCloud);
	ULidarPointCloud::~ULidarPointCloud() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULidarPointCloud)
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LidarPointCloudTraceHit;
class UScriptStruct* FLidarPointCloudTraceHit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LidarPointCloudTraceHit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LidarPointCloudTraceHit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLidarPointCloudTraceHit, (UObject*)Z_Construct_UPackage__Script_LidarPointCloudRuntime(), TEXT("LidarPointCloudTraceHit"));
	}
	return Z_Registration_Info_UScriptStruct_LidarPointCloudTraceHit.OuterSingleton;
}
template<> LIDARPOINTCLOUDRUNTIME_API UScriptStruct* StaticStruct<FLidarPointCloudTraceHit>()
{
	return FLidarPointCloudTraceHit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Component;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLidarPointCloudTraceHit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::NewProp_Actor_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLidarPointCloudTraceHit, Actor), Z_Construct_UClass_ALidarPointCloudActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::NewProp_Component_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLidarPointCloudTraceHit, Component), Z_Construct_UClass_ULidarPointCloudComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLidarPointCloudPoint, METADATA_PARAMS(nullptr, 0) }; // 3309861466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLidarPointCloudTraceHit, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::NewProp_Points_MetaData)) }; // 3309861466
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::NewProp_Points,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LidarPointCloudRuntime,
		nullptr,
		&NewStructOps,
		"LidarPointCloudTraceHit",
		sizeof(FLidarPointCloudTraceHit),
		alignof(FLidarPointCloudTraceHit),
		Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLidarPointCloudTraceHit()
	{
		if (!Z_Registration_Info_UScriptStruct_LidarPointCloudTraceHit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LidarPointCloudTraceHit.InnerSingleton, Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LidarPointCloudTraceHit.InnerSingleton;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execConv_VectorToLidarPointCloudNormal)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLidarPointCloudNormal*)Z_Param__Result=ULidarPointCloudBlueprintLibrary::Conv_VectorToLidarPointCloudNormal(Z_Param_Out_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execConv_LidarPointCloudNormalToVector)
	{
		P_GET_STRUCT_REF(FLidarPointCloudNormal,Z_Param_Out_Normal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=ULidarPointCloudBlueprintLibrary::Conv_LidarPointCloudNormalToVector(Z_Param_Out_Normal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execNormalFromVector)
	{
		P_GET_STRUCT_REF(FLidarPointCloudNormal,Z_Param_Out_Normal);
		P_GET_STRUCT(FVector,Z_Param_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULidarPointCloudBlueprintLibrary::NormalFromVector(Z_Param_Out_Normal,Z_Param_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execRemovePointsByRay)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULidarPointCloudBlueprintLibrary::RemovePointsByRay(Z_Param_WorldContextObject,Z_Param_Origin,Z_Param_Direction,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execRemoveFirstPointByRay)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULidarPointCloudBlueprintLibrary::RemoveFirstPointByRay(Z_Param_WorldContextObject,Z_Param_Origin,Z_Param_Direction,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execRemovePointsInBox)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULidarPointCloudBlueprintLibrary::RemovePointsInBox(Z_Param_WorldContextObject,Z_Param_Center,Z_Param_Extent,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execRemovePointsInSphere)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULidarPointCloudBlueprintLibrary::RemovePointsInSphere(Z_Param_WorldContextObject,Z_Param_Center,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execApplyColorToPointsByRay)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FColor,Z_Param_NewColor);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULidarPointCloudBlueprintLibrary::ApplyColorToPointsByRay(Z_Param_WorldContextObject,Z_Param_NewColor,Z_Param_Origin,Z_Param_Direction,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execApplyColorToFirstPointByRay)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FColor,Z_Param_NewColor);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULidarPointCloudBlueprintLibrary::ApplyColorToFirstPointByRay(Z_Param_WorldContextObject,Z_Param_NewColor,Z_Param_Origin,Z_Param_Direction,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execApplyColorToPointsInBox)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FColor,Z_Param_NewColor);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULidarPointCloudBlueprintLibrary::ApplyColorToPointsInBox(Z_Param_WorldContextObject,Z_Param_NewColor,Z_Param_Center,Z_Param_Extent,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execApplyColorToPointsInSphere)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FColor,Z_Param_NewColor);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULidarPointCloudBlueprintLibrary::ApplyColorToPointsInSphere(Z_Param_WorldContextObject,Z_Param_NewColor,Z_Param_Center,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execSetVisibilityOfPointsByRay)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULidarPointCloudBlueprintLibrary::SetVisibilityOfPointsByRay(Z_Param_WorldContextObject,Z_Param_bNewVisibility,Z_Param_Origin,Z_Param_Direction,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execSetVisibilityOfFirstPointByRay)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULidarPointCloudBlueprintLibrary::SetVisibilityOfFirstPointByRay(Z_Param_WorldContextObject,Z_Param_bNewVisibility,Z_Param_Origin,Z_Param_Direction,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execSetVisibilityOfPointsInBox)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULidarPointCloudBlueprintLibrary::SetVisibilityOfPointsInBox(Z_Param_WorldContextObject,Z_Param_bNewVisibility,Z_Param_Center,Z_Param_Extent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execSetVisibilityOfPointsInSphere)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULidarPointCloudBlueprintLibrary::SetVisibilityOfPointsInSphere(Z_Param_WorldContextObject,Z_Param_bNewVisibility,Z_Param_Center,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execLineTraceMulti)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_GET_TARRAY_REF(FLidarPointCloudTraceHit,Z_Param_Out_Hits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULidarPointCloudBlueprintLibrary::LineTraceMulti(Z_Param_WorldContextObject,Z_Param_Origin,Z_Param_Direction,Z_Param_Radius,Z_Param_bVisibleOnly,Z_Param_Out_Hits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execLineTraceSingle)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_GET_STRUCT_REF(FLidarPointCloudTraceHit,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULidarPointCloudBlueprintLibrary::LineTraceSingle(Z_Param_WorldContextObject,Z_Param_Origin,Z_Param_Direction,Z_Param_Radius,Z_Param_bVisibleOnly,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execGetPointsInBoxAsCopies)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FLidarPointCloudPoint,Z_Param_Out_SelectedPoints);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_GET_UBOOL_REF(Z_Param_Out_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULidarPointCloudBlueprintLibrary::GetPointsInBoxAsCopies(Z_Param_WorldContextObject,Z_Param_Out_SelectedPoints,Z_Param_Center,Z_Param_Extent,Z_Param_Out_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execGetPointsInSphereAsCopies)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FLidarPointCloudPoint,Z_Param_Out_SelectedPoints);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULidarPointCloudBlueprintLibrary::GetPointsInSphereAsCopies(Z_Param_WorldContextObject,Z_Param_Out_SelectedPoints,Z_Param_Center,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execArePointsByRay)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULidarPointCloudBlueprintLibrary::ArePointsByRay(Z_Param_WorldContextObject,Z_Param_Origin,Z_Param_Direction,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execArePointsInBox)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULidarPointCloudBlueprintLibrary::ArePointsInBox(Z_Param_WorldContextObject,Z_Param_Center,Z_Param_Extent,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execArePointsInSphere)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULidarPointCloudBlueprintLibrary::ArePointsInSphere(Z_Param_WorldContextObject,Z_Param_Center,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execAlignClouds)
	{
		P_GET_TARRAY(ULidarPointCloud*,Z_Param_PointCloudsToAlign);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULidarPointCloudBlueprintLibrary::AlignClouds(Z_Param_PointCloudsToAlign);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execExportPointCloudToFile)
	{
		P_GET_OBJECT(ULidarPointCloud,Z_Param_PointCloud);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULidarPointCloudBlueprintLibrary::ExportPointCloudToFile(Z_Param_PointCloud,Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execCreatePointCloudFromData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FLidarPointCloudPoint,Z_Param_Out_Points);
		P_GET_UBOOL(Z_Param_bUseAsync);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_ENUM_REF(ELidarPointCloudAsyncMode,Z_Param_Out_AsyncMode);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Progress);
		P_GET_OBJECT_REF(ULidarPointCloud,Z_Param_Out_PointCloud);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULidarPointCloudBlueprintLibrary::CreatePointCloudFromData(Z_Param_WorldContextObject,Z_Param_Out_Points,Z_Param_bUseAsync,Z_Param_LatentInfo,(ELidarPointCloudAsyncMode&)(Z_Param_Out_AsyncMode),Z_Param_Out_Progress,Z_Param_Out_PointCloud);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execCreatePointCloudFromFile)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_UBOOL(Z_Param_bUseAsync);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_ENUM_REF(ELidarPointCloudAsyncMode,Z_Param_Out_AsyncMode);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Progress);
		P_GET_OBJECT_REF(ULidarPointCloud,Z_Param_Out_PointCloud);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULidarPointCloudBlueprintLibrary::CreatePointCloudFromFile(Z_Param_WorldContextObject,Z_Param_Filename,Z_Param_bUseAsync,Z_Param_LatentInfo,(ELidarPointCloudAsyncMode&)(Z_Param_Out_AsyncMode),Z_Param_Out_Progress,Z_Param_Out_PointCloud);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudBlueprintLibrary::execCreatePointCloudEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULidarPointCloud**)Z_Param__Result=ULidarPointCloudBlueprintLibrary::CreatePointCloudEmpty();
		P_NATIVE_END;
	}
	void ULidarPointCloudBlueprintLibrary::StaticRegisterNativesULidarPointCloudBlueprintLibrary()
	{
		UClass* Class = ULidarPointCloudBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AlignClouds", &ULidarPointCloudBlueprintLibrary::execAlignClouds },
			{ "ApplyColorToFirstPointByRay", &ULidarPointCloudBlueprintLibrary::execApplyColorToFirstPointByRay },
			{ "ApplyColorToPointsByRay", &ULidarPointCloudBlueprintLibrary::execApplyColorToPointsByRay },
			{ "ApplyColorToPointsInBox", &ULidarPointCloudBlueprintLibrary::execApplyColorToPointsInBox },
			{ "ApplyColorToPointsInSphere", &ULidarPointCloudBlueprintLibrary::execApplyColorToPointsInSphere },
			{ "ArePointsByRay", &ULidarPointCloudBlueprintLibrary::execArePointsByRay },
			{ "ArePointsInBox", &ULidarPointCloudBlueprintLibrary::execArePointsInBox },
			{ "ArePointsInSphere", &ULidarPointCloudBlueprintLibrary::execArePointsInSphere },
			{ "Conv_LidarPointCloudNormalToVector", &ULidarPointCloudBlueprintLibrary::execConv_LidarPointCloudNormalToVector },
			{ "Conv_VectorToLidarPointCloudNormal", &ULidarPointCloudBlueprintLibrary::execConv_VectorToLidarPointCloudNormal },
			{ "CreatePointCloudEmpty", &ULidarPointCloudBlueprintLibrary::execCreatePointCloudEmpty },
			{ "CreatePointCloudFromData", &ULidarPointCloudBlueprintLibrary::execCreatePointCloudFromData },
			{ "CreatePointCloudFromFile", &ULidarPointCloudBlueprintLibrary::execCreatePointCloudFromFile },
			{ "ExportPointCloudToFile", &ULidarPointCloudBlueprintLibrary::execExportPointCloudToFile },
			{ "GetPointsInBoxAsCopies", &ULidarPointCloudBlueprintLibrary::execGetPointsInBoxAsCopies },
			{ "GetPointsInSphereAsCopies", &ULidarPointCloudBlueprintLibrary::execGetPointsInSphereAsCopies },
			{ "LineTraceMulti", &ULidarPointCloudBlueprintLibrary::execLineTraceMulti },
			{ "LineTraceSingle", &ULidarPointCloudBlueprintLibrary::execLineTraceSingle },
			{ "NormalFromVector", &ULidarPointCloudBlueprintLibrary::execNormalFromVector },
			{ "RemoveFirstPointByRay", &ULidarPointCloudBlueprintLibrary::execRemoveFirstPointByRay },
			{ "RemovePointsByRay", &ULidarPointCloudBlueprintLibrary::execRemovePointsByRay },
			{ "RemovePointsInBox", &ULidarPointCloudBlueprintLibrary::execRemovePointsInBox },
			{ "RemovePointsInSphere", &ULidarPointCloudBlueprintLibrary::execRemovePointsInSphere },
			{ "SetVisibilityOfFirstPointByRay", &ULidarPointCloudBlueprintLibrary::execSetVisibilityOfFirstPointByRay },
			{ "SetVisibilityOfPointsByRay", &ULidarPointCloudBlueprintLibrary::execSetVisibilityOfPointsByRay },
			{ "SetVisibilityOfPointsInBox", &ULidarPointCloudBlueprintLibrary::execSetVisibilityOfPointsInBox },
			{ "SetVisibilityOfPointsInSphere", &ULidarPointCloudBlueprintLibrary::execSetVisibilityOfPointsInSphere },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_AlignClouds_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventAlignClouds_Parms
		{
			TArray<ULidarPointCloud*> PointCloudsToAlign;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PointCloudsToAlign_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PointCloudsToAlign;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_AlignClouds_Statics::NewProp_PointCloudsToAlign_Inner = { "PointCloudsToAlign", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULidarPointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_AlignClouds_Statics::NewProp_PointCloudsToAlign = { "PointCloudsToAlign", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventAlignClouds_Parms, PointCloudsToAlign), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_AlignClouds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_AlignClouds_Statics::NewProp_PointCloudsToAlign_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_AlignClouds_Statics::NewProp_PointCloudsToAlign,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_AlignClouds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Aligns provided clouds based on the relative offset between their Original Coordinates. Retains overall centering of the group. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Aligns provided clouds based on the relative offset between their Original Coordinates. Retains overall centering of the group." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_AlignClouds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "AlignClouds", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_AlignClouds_Statics::LidarPointCloudBlueprintLibrary_eventAlignClouds_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_AlignClouds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_AlignClouds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_AlignClouds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_AlignClouds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_AlignClouds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_AlignClouds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventApplyColorToFirstPointByRay_Parms
		{
			UObject* WorldContextObject;
			FColor NewColor;
			FVector Origin;
			FVector Direction;
			float Radius;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventApplyColorToFirstPointByRay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventApplyColorToFirstPointByRay_Parms, NewColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventApplyColorToFirstPointByRay_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventApplyColorToFirstPointByRay_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventApplyColorToFirstPointByRay_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventApplyColorToFirstPointByRay_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventApplyColorToFirstPointByRay_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::NewProp_NewColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Applies the given color to the first point hit by the given ray */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Applies the given color to the first point hit by the given ray" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "ApplyColorToFirstPointByRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::LidarPointCloudBlueprintLibrary_eventApplyColorToFirstPointByRay_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventApplyColorToPointsByRay_Parms
		{
			UObject* WorldContextObject;
			FColor NewColor;
			FVector Origin;
			FVector Direction;
			float Radius;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventApplyColorToPointsByRay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventApplyColorToPointsByRay_Parms, NewColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventApplyColorToPointsByRay_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventApplyColorToPointsByRay_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventApplyColorToPointsByRay_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventApplyColorToPointsByRay_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventApplyColorToPointsByRay_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::NewProp_NewColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Applies the given color to all points hit by the given ray */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Applies the given color to all points hit by the given ray" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "ApplyColorToPointsByRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::LidarPointCloudBlueprintLibrary_eventApplyColorToPointsByRay_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventApplyColorToPointsInBox_Parms
		{
			UObject* WorldContextObject;
			FColor NewColor;
			FVector Center;
			FVector Extent;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventApplyColorToPointsInBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventApplyColorToPointsInBox_Parms, NewColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventApplyColorToPointsInBox_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventApplyColorToPointsInBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventApplyColorToPointsInBox_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventApplyColorToPointsInBox_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox_Statics::NewProp_NewColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Applies the given color to all points within the box */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Applies the given color to all points within the box" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "ApplyColorToPointsInBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox_Statics::LidarPointCloudBlueprintLibrary_eventApplyColorToPointsInBox_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventApplyColorToPointsInSphere_Parms
		{
			UObject* WorldContextObject;
			FColor NewColor;
			FVector Center;
			float Radius;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventApplyColorToPointsInSphere_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventApplyColorToPointsInSphere_Parms, NewColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventApplyColorToPointsInSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventApplyColorToPointsInSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventApplyColorToPointsInSphere_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventApplyColorToPointsInSphere_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere_Statics::NewProp_NewColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Applies the given color to all points within the sphere */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Applies the given color to all points within the sphere" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "ApplyColorToPointsInSphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere_Statics::LidarPointCloudBlueprintLibrary_eventApplyColorToPointsInSphere_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventArePointsByRay_Parms
		{
			UObject* WorldContextObject;
			FVector Origin;
			FVector Direction;
			float Radius;
			bool bVisibleOnly;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventArePointsByRay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventArePointsByRay_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventArePointsByRay_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventArePointsByRay_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventArePointsByRay_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventArePointsByRay_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventArePointsByRay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventArePointsByRay_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::NewProp_bVisibleOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Returns true if there are any points hit by the given ray. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Returns true if there are any points hit by the given ray." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "ArePointsByRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::LidarPointCloudBlueprintLibrary_eventArePointsByRay_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventArePointsInBox_Parms
		{
			UObject* WorldContextObject;
			FVector Center;
			FVector Extent;
			bool bVisibleOnly;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventArePointsInBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventArePointsInBox_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventArePointsInBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventArePointsInBox_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventArePointsInBox_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventArePointsInBox_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventArePointsInBox_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::NewProp_bVisibleOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Returns true if there are any points within the given box. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Returns true if there are any points within the given box." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "ArePointsInBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::LidarPointCloudBlueprintLibrary_eventArePointsInBox_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventArePointsInSphere_Parms
		{
			UObject* WorldContextObject;
			FVector Center;
			float Radius;
			bool bVisibleOnly;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventArePointsInSphere_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventArePointsInSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventArePointsInSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventArePointsInSphere_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventArePointsInSphere_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventArePointsInSphere_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventArePointsInSphere_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::NewProp_bVisibleOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Returns true if there are any points within the given sphere. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Returns true if there are any points within the given sphere." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "ArePointsInSphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::LidarPointCloudBlueprintLibrary_eventArePointsInSphere_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_LidarPointCloudNormalToVector_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventConv_LidarPointCloudNormalToVector_Parms
		{
			FLidarPointCloudNormal Normal;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_LidarPointCloudNormalToVector_Statics::NewProp_Normal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_LidarPointCloudNormalToVector_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventConv_LidarPointCloudNormalToVector_Parms, Normal), Z_Construct_UScriptStruct_FLidarPointCloudNormal, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_LidarPointCloudNormalToVector_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_LidarPointCloudNormalToVector_Statics::NewProp_Normal_MetaData)) }; // 3252497792
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_LidarPointCloudNormalToVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventConv_LidarPointCloudNormalToVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_LidarPointCloudNormalToVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_LidarPointCloudNormalToVector_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_LidarPointCloudNormalToVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_LidarPointCloudNormalToVector_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Converts a Lidar Point Cloud Normal to a Vector */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Normal to Vector" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Converts a Lidar Point Cloud Normal to a Vector" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_LidarPointCloudNormalToVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "Conv_LidarPointCloudNormalToVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_LidarPointCloudNormalToVector_Statics::LidarPointCloudBlueprintLibrary_eventConv_LidarPointCloudNormalToVector_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_LidarPointCloudNormalToVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_LidarPointCloudNormalToVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_LidarPointCloudNormalToVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_LidarPointCloudNormalToVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_LidarPointCloudNormalToVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_LidarPointCloudNormalToVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_VectorToLidarPointCloudNormal_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventConv_VectorToLidarPointCloudNormal_Parms
		{
			FVector Vector;
			FLidarPointCloudNormal ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_VectorToLidarPointCloudNormal_Statics::NewProp_Vector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_VectorToLidarPointCloudNormal_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventConv_VectorToLidarPointCloudNormal_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_VectorToLidarPointCloudNormal_Statics::NewProp_Vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_VectorToLidarPointCloudNormal_Statics::NewProp_Vector_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_VectorToLidarPointCloudNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventConv_VectorToLidarPointCloudNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FLidarPointCloudNormal, METADATA_PARAMS(nullptr, 0) }; // 3252497792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_VectorToLidarPointCloudNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_VectorToLidarPointCloudNormal_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_VectorToLidarPointCloudNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_VectorToLidarPointCloudNormal_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Converts a Vector to a Lidar Point Cloud Normal */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Vector to Normal" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Converts a Vector to a Lidar Point Cloud Normal" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_VectorToLidarPointCloudNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "Conv_VectorToLidarPointCloudNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_VectorToLidarPointCloudNormal_Statics::LidarPointCloudBlueprintLibrary_eventConv_VectorToLidarPointCloudNormal_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_VectorToLidarPointCloudNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_VectorToLidarPointCloudNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_VectorToLidarPointCloudNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_VectorToLidarPointCloudNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_VectorToLidarPointCloudNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_VectorToLidarPointCloudNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudEmpty_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventCreatePointCloudEmpty_Parms
		{
			ULidarPointCloud* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventCreatePointCloudEmpty_Parms, ReturnValue), Z_Construct_UClass_ULidarPointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Returns new, empty Point Cloud object. */" },
		{ "DisplayName", "Create Empty Lidar Point Cloud" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Returns new, empty Point Cloud object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "CreatePointCloudEmpty", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudEmpty_Statics::LidarPointCloudBlueprintLibrary_eventCreatePointCloudEmpty_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventCreatePointCloudFromData_Parms
		{
			UObject* WorldContextObject;
			TArray<FLidarPointCloudPoint> Points;
			bool bUseAsync;
			FLatentActionInfo LatentInfo;
			ELidarPointCloudAsyncMode AsyncMode;
			float Progress;
			ULidarPointCloud* PointCloud;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static void NewProp_bUseAsync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsync;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AsyncMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AsyncMode;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PointCloud;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventCreatePointCloudFromData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLidarPointCloudPoint, METADATA_PARAMS(nullptr, 0) }; // 3309861466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventCreatePointCloudFromData_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_Points_MetaData)) }; // 3309861466
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_bUseAsync_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventCreatePointCloudFromData_Parms*)Obj)->bUseAsync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_bUseAsync = { "bUseAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventCreatePointCloudFromData_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_bUseAsync_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventCreatePointCloudFromData_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_AsyncMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_AsyncMode = { "AsyncMode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventCreatePointCloudFromData_Parms, AsyncMode), Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudAsyncMode, METADATA_PARAMS(nullptr, 0) }; // 2848692903
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventCreatePointCloudFromData_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_PointCloud = { "PointCloud", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventCreatePointCloudFromData_Parms, PointCloud), Z_Construct_UClass_ULidarPointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_bUseAsync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_AsyncMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_AsyncMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_Progress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::NewProp_PointCloud,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/*\n\x09 * Returns new Point Cloud object created from the data provided.\n\x09 * Warning: If using Async, make sure the data does not get invalidated during processing!\n\x09 */" },
		{ "DisplayName", "Create Lidar Point Cloud From Data" },
		{ "ExpandEnumAsExecs", "AsyncMode" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "* Returns new Point Cloud object created from the data provided.\n* Warning: If using Async, make sure the data does not get invalidated during processing!" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "CreatePointCloudFromData", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::LidarPointCloudBlueprintLibrary_eventCreatePointCloudFromData_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventCreatePointCloudFromFile_Parms
		{
			UObject* WorldContextObject;
			FString Filename;
			bool bUseAsync;
			FLatentActionInfo LatentInfo;
			ELidarPointCloudAsyncMode AsyncMode;
			float Progress;
			ULidarPointCloud* PointCloud;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static void NewProp_bUseAsync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsync;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AsyncMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AsyncMode;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PointCloud;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventCreatePointCloudFromFile_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventCreatePointCloudFromFile_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::NewProp_Filename_MetaData)) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::NewProp_bUseAsync_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventCreatePointCloudFromFile_Parms*)Obj)->bUseAsync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::NewProp_bUseAsync = { "bUseAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventCreatePointCloudFromFile_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::NewProp_bUseAsync_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventCreatePointCloudFromFile_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::NewProp_AsyncMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::NewProp_AsyncMode = { "AsyncMode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventCreatePointCloudFromFile_Parms, AsyncMode), Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudAsyncMode, METADATA_PARAMS(nullptr, 0) }; // 2848692903
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventCreatePointCloudFromFile_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::NewProp_PointCloud = { "PointCloud", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventCreatePointCloudFromFile_Parms, PointCloud), Z_Construct_UClass_ULidarPointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::NewProp_bUseAsync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::NewProp_AsyncMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::NewProp_AsyncMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::NewProp_Progress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::NewProp_PointCloud,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/**\n\x09 * Returns new Point Cloud object imported using default settings.\n\x09 * If using Async, the process runs in the background without blocking the game thread.\n\x09 */" },
		{ "DisplayName", "Create Lidar Point Cloud From File" },
		{ "ExpandEnumAsExecs", "AsyncMode" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Returns new Point Cloud object imported using default settings.\nIf using Async, the process runs in the background without blocking the game thread." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "CreatePointCloudFromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::LidarPointCloudBlueprintLibrary_eventCreatePointCloudFromFile_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventExportPointCloudToFile_Parms
		{
			ULidarPointCloud* PointCloud;
			FString Filename;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PointCloud;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile_Statics::NewProp_PointCloud = { "PointCloud", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventExportPointCloudToFile_Parms, PointCloud), Z_Construct_UClass_ULidarPointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventExportPointCloudToFile_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile_Statics::NewProp_Filename_MetaData)) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventExportPointCloudToFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventExportPointCloudToFile_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile_Statics::NewProp_PointCloud,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/**\n\x09 * Exports the Point Cloud to the given filename.\n\x09 * Consult supported export formats.\n\x09 * Returns true if successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Exports the Point Cloud to the given filename.\nConsult supported export formats.\nReturns true if successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "ExportPointCloudToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile_Statics::LidarPointCloudBlueprintLibrary_eventExportPointCloudToFile_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventGetPointsInBoxAsCopies_Parms
		{
			UObject* WorldContextObject;
			TArray<FLidarPointCloudPoint> SelectedPoints;
			FVector Center;
			FVector Extent;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisibleOnly_MetaData[];
#endif
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventGetPointsInBoxAsCopies_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::NewProp_SelectedPoints_Inner = { "SelectedPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLidarPointCloudPoint, METADATA_PARAMS(nullptr, 0) }; // 3309861466
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::NewProp_SelectedPoints = { "SelectedPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventGetPointsInBoxAsCopies_Parms, SelectedPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3309861466
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventGetPointsInBoxAsCopies_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventGetPointsInBoxAsCopies_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::NewProp_bVisibleOnly_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventGetPointsInBoxAsCopies_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventGetPointsInBoxAsCopies_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::NewProp_bVisibleOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::NewProp_bVisibleOnly_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::NewProp_SelectedPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::NewProp_SelectedPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Returns an array with copies of points within the given box */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Returns an array with copies of points within the given box" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "GetPointsInBoxAsCopies", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::LidarPointCloudBlueprintLibrary_eventGetPointsInBoxAsCopies_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventGetPointsInSphereAsCopies_Parms
		{
			UObject* WorldContextObject;
			TArray<FLidarPointCloudPoint> SelectedPoints;
			FVector Center;
			float Radius;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventGetPointsInSphereAsCopies_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::NewProp_SelectedPoints_Inner = { "SelectedPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLidarPointCloudPoint, METADATA_PARAMS(nullptr, 0) }; // 3309861466
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::NewProp_SelectedPoints = { "SelectedPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventGetPointsInSphereAsCopies_Parms, SelectedPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3309861466
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventGetPointsInSphereAsCopies_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventGetPointsInSphereAsCopies_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventGetPointsInSphereAsCopies_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventGetPointsInSphereAsCopies_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::NewProp_SelectedPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::NewProp_SelectedPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Returns an array with copies of points within the given sphere */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Returns an array with copies of points within the given sphere" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "GetPointsInSphereAsCopies", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::LidarPointCloudBlueprintLibrary_eventGetPointsInSphereAsCopies_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventLineTraceMulti_Parms
		{
			UObject* WorldContextObject;
			FVector Origin;
			FVector Direction;
			float Radius;
			bool bVisibleOnly;
			TArray<FLidarPointCloudTraceHit> Hits;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Hits;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventLineTraceMulti_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventLineTraceMulti_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventLineTraceMulti_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventLineTraceMulti_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventLineTraceMulti_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventLineTraceMulti_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLidarPointCloudTraceHit, METADATA_PARAMS(nullptr, 0) }; // 2976833756
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventLineTraceMulti_Parms, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2976833756
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventLineTraceMulti_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventLineTraceMulti_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::NewProp_bVisibleOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::NewProp_Hits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::NewProp_Hits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Does a collision trace along the given line and returns all hits encountered up to and including the first blocking hit. */" },
		{ "DisplayName", "LineTraceMultiForLidarPointCloud" },
		{ "Keywords", "raycast" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Does a collision trace along the given line and returns all hits encountered up to and including the first blocking hit." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "LineTraceMulti", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::LidarPointCloudBlueprintLibrary_eventLineTraceMulti_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventLineTraceSingle_Parms
		{
			UObject* WorldContextObject;
			FVector Origin;
			FVector Direction;
			float Radius;
			bool bVisibleOnly;
			FLidarPointCloudTraceHit Hit;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventLineTraceSingle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventLineTraceSingle_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventLineTraceSingle_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventLineTraceSingle_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventLineTraceSingle_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventLineTraceSingle_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventLineTraceSingle_Parms, Hit), Z_Construct_UScriptStruct_FLidarPointCloudTraceHit, METADATA_PARAMS(nullptr, 0) }; // 2976833756
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventLineTraceSingle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventLineTraceSingle_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::NewProp_bVisibleOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::NewProp_Hit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Does a collision trace along the given line and returns the first blocking hit encountered. */" },
		{ "DisplayName", "LineTraceForLidarPointCloud" },
		{ "Keywords", "raycast" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Does a collision trace along the given line and returns the first blocking hit encountered." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "LineTraceSingle", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::LidarPointCloudBlueprintLibrary_eventLineTraceSingle_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_NormalFromVector_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventNormalFromVector_Parms
		{
			FLidarPointCloudNormal Normal;
			FVector Vector;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_NormalFromVector_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventNormalFromVector_Parms, Normal), Z_Construct_UScriptStruct_FLidarPointCloudNormal, METADATA_PARAMS(nullptr, 0) }; // 3252497792
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_NormalFromVector_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventNormalFromVector_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_NormalFromVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_NormalFromVector_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_NormalFromVector_Statics::NewProp_Vector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_NormalFromVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Sets the given normal using provided vector */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Sets the given normal using provided vector" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_NormalFromVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "NormalFromVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_NormalFromVector_Statics::LidarPointCloudBlueprintLibrary_eventNormalFromVector_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_NormalFromVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_NormalFromVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_NormalFromVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_NormalFromVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_NormalFromVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_NormalFromVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventRemoveFirstPointByRay_Parms
		{
			UObject* WorldContextObject;
			FVector Origin;
			FVector Direction;
			float Radius;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventRemoveFirstPointByRay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventRemoveFirstPointByRay_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventRemoveFirstPointByRay_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventRemoveFirstPointByRay_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventRemoveFirstPointByRay_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventRemoveFirstPointByRay_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Removes the first point hit by the given ray */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Removes the first point hit by the given ray" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "RemoveFirstPointByRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay_Statics::LidarPointCloudBlueprintLibrary_eventRemoveFirstPointByRay_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventRemovePointsByRay_Parms
		{
			UObject* WorldContextObject;
			FVector Origin;
			FVector Direction;
			float Radius;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventRemovePointsByRay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventRemovePointsByRay_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventRemovePointsByRay_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventRemovePointsByRay_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventRemovePointsByRay_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventRemovePointsByRay_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Removes all points hit by the given ray */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Removes all points hit by the given ray" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "RemovePointsByRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay_Statics::LidarPointCloudBlueprintLibrary_eventRemovePointsByRay_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInBox_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventRemovePointsInBox_Parms
		{
			UObject* WorldContextObject;
			FVector Center;
			FVector Extent;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInBox_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventRemovePointsInBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInBox_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventRemovePointsInBox_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInBox_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventRemovePointsInBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInBox_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventRemovePointsInBox_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInBox_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventRemovePointsInBox_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInBox_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInBox_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInBox_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInBox_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInBox_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Removes all points within the given box */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Removes all points within the given box" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "RemovePointsInBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInBox_Statics::LidarPointCloudBlueprintLibrary_eventRemovePointsInBox_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInSphere_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventRemovePointsInSphere_Parms
		{
			UObject* WorldContextObject;
			FVector Center;
			float Radius;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInSphere_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventRemovePointsInSphere_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventRemovePointsInSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventRemovePointsInSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInSphere_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventRemovePointsInSphere_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInSphere_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventRemovePointsInSphere_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInSphere_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInSphere_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInSphere_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInSphere_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInSphere_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Removes all points within the given sphere  */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Removes all points within the given sphere" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "RemovePointsInSphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInSphere_Statics::LidarPointCloudBlueprintLibrary_eventRemovePointsInSphere_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventSetVisibilityOfFirstPointByRay_Parms
		{
			UObject* WorldContextObject;
			bool bNewVisibility;
			FVector Origin;
			FVector Direction;
			float Radius;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventSetVisibilityOfFirstPointByRay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventSetVisibilityOfFirstPointByRay_Parms*)Obj)->bNewVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventSetVisibilityOfFirstPointByRay_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventSetVisibilityOfFirstPointByRay_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventSetVisibilityOfFirstPointByRay_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventSetVisibilityOfFirstPointByRay_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay_Statics::NewProp_bNewVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Sets visibility of the first point hit by the given ray. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Sets visibility of the first point hit by the given ray." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "SetVisibilityOfFirstPointByRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay_Statics::LidarPointCloudBlueprintLibrary_eventSetVisibilityOfFirstPointByRay_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventSetVisibilityOfPointsByRay_Parms
		{
			UObject* WorldContextObject;
			bool bNewVisibility;
			FVector Origin;
			FVector Direction;
			float Radius;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventSetVisibilityOfPointsByRay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventSetVisibilityOfPointsByRay_Parms*)Obj)->bNewVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventSetVisibilityOfPointsByRay_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventSetVisibilityOfPointsByRay_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventSetVisibilityOfPointsByRay_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventSetVisibilityOfPointsByRay_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay_Statics::NewProp_bNewVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Sets visibility of points hit by the given ray. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Sets visibility of points hit by the given ray." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "SetVisibilityOfPointsByRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay_Statics::LidarPointCloudBlueprintLibrary_eventSetVisibilityOfPointsByRay_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInBox_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventSetVisibilityOfPointsInBox_Parms
		{
			UObject* WorldContextObject;
			bool bNewVisibility;
			FVector Center;
			FVector Extent;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInBox_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventSetVisibilityOfPointsInBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInBox_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventSetVisibilityOfPointsInBox_Parms*)Obj)->bNewVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInBox_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventSetVisibilityOfPointsInBox_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInBox_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInBox_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventSetVisibilityOfPointsInBox_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInBox_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventSetVisibilityOfPointsInBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInBox_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInBox_Statics::NewProp_bNewVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInBox_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInBox_Statics::NewProp_Extent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Sets visibility of points within the given box. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Sets visibility of points within the given box." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "SetVisibilityOfPointsInBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInBox_Statics::LidarPointCloudBlueprintLibrary_eventSetVisibilityOfPointsInBox_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInSphere_Statics
	{
		struct LidarPointCloudBlueprintLibrary_eventSetVisibilityOfPointsInSphere_Parms
		{
			UObject* WorldContextObject;
			bool bNewVisibility;
			FVector Center;
			float Radius;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInSphere_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventSetVisibilityOfPointsInSphere_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInSphere_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((LidarPointCloudBlueprintLibrary_eventSetVisibilityOfPointsInSphere_Parms*)Obj)->bNewVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInSphere_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudBlueprintLibrary_eventSetVisibilityOfPointsInSphere_Parms), &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInSphere_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventSetVisibilityOfPointsInSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudBlueprintLibrary_eventSetVisibilityOfPointsInSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInSphere_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInSphere_Statics::NewProp_bNewVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInSphere_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInSphere_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Sets visibility of points within the given sphere. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Sets visibility of points within the given sphere." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, nullptr, "SetVisibilityOfPointsInSphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInSphere_Statics::LidarPointCloudBlueprintLibrary_eventSetVisibilityOfPointsInSphere_Parms), Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULidarPointCloudBlueprintLibrary);
	UClass* Z_Construct_UClass_ULidarPointCloudBlueprintLibrary_NoRegister()
	{
		return ULidarPointCloudBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULidarPointCloudBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULidarPointCloudBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LidarPointCloudRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULidarPointCloudBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_AlignClouds, "AlignClouds" }, // 3356852169
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToFirstPointByRay, "ApplyColorToFirstPointByRay" }, // 3545183638
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsByRay, "ApplyColorToPointsByRay" }, // 1864370865
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInBox, "ApplyColorToPointsInBox" }, // 2108378716
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ApplyColorToPointsInSphere, "ApplyColorToPointsInSphere" }, // 2625340427
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsByRay, "ArePointsByRay" }, // 3936168696
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInBox, "ArePointsInBox" }, // 3558841157
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ArePointsInSphere, "ArePointsInSphere" }, // 3026928333
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_LidarPointCloudNormalToVector, "Conv_LidarPointCloudNormalToVector" }, // 2976791748
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_Conv_VectorToLidarPointCloudNormal, "Conv_VectorToLidarPointCloudNormal" }, // 4216566083
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudEmpty, "CreatePointCloudEmpty" }, // 1350437285
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromData, "CreatePointCloudFromData" }, // 840852426
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_CreatePointCloudFromFile, "CreatePointCloudFromFile" }, // 1868839192
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_ExportPointCloudToFile, "ExportPointCloudToFile" }, // 2299922856
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInBoxAsCopies, "GetPointsInBoxAsCopies" }, // 3298779632
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_GetPointsInSphereAsCopies, "GetPointsInSphereAsCopies" }, // 4118617422
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceMulti, "LineTraceMulti" }, // 2952867897
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_LineTraceSingle, "LineTraceSingle" }, // 3788779953
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_NormalFromVector, "NormalFromVector" }, // 4050068124
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemoveFirstPointByRay, "RemoveFirstPointByRay" }, // 192634541
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsByRay, "RemovePointsByRay" }, // 3141530139
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInBox, "RemovePointsInBox" }, // 3615817384
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_RemovePointsInSphere, "RemovePointsInSphere" }, // 931679985
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfFirstPointByRay, "SetVisibilityOfFirstPointByRay" }, // 3640546712
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsByRay, "SetVisibilityOfPointsByRay" }, // 2053324313
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInBox, "SetVisibilityOfPointsInBox" }, // 3802832300
		{ &Z_Construct_UFunction_ULidarPointCloudBlueprintLibrary_SetVisibilityOfPointsInSphere, "SetVisibilityOfPointsInSphere" }, // 2882546390
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blueprint library for the Point Cloud assets\n */" },
		{ "IncludePath", "LidarPointCloud.h" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Blueprint library for the Point Cloud assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULidarPointCloudBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULidarPointCloudBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULidarPointCloudBlueprintLibrary_Statics::ClassParams = {
		&ULidarPointCloudBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULidarPointCloudBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_ULidarPointCloudBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULidarPointCloudBlueprintLibrary.OuterSingleton, Z_Construct_UClass_ULidarPointCloudBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULidarPointCloudBlueprintLibrary.OuterSingleton;
	}
	template<> LIDARPOINTCLOUDRUNTIME_API UClass* StaticClass<ULidarPointCloudBlueprintLibrary>()
	{
		return ULidarPointCloudBlueprintLibrary::StaticClass();
	}
	ULidarPointCloudBlueprintLibrary::ULidarPointCloudBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULidarPointCloudBlueprintLibrary);
	ULidarPointCloudBlueprintLibrary::~ULidarPointCloudBlueprintLibrary() {}
	void ALidarClippingVolume::StaticRegisterNativesALidarClippingVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALidarClippingVolume);
	UClass* Z_Construct_UClass_ALidarClippingVolume_NoRegister()
	{
		return ALidarClippingVolume::StaticClass();
	}
	struct Z_Construct_UClass_ALidarClippingVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALidarClippingVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_LidarPointCloudRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALidarClippingVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Brush Attachment Physics Volume BrushBuilder Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "LidarPointCloud.h" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALidarClippingVolume_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Clipping Volume" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
	};
#endif
	void Z_Construct_UClass_ALidarClippingVolume_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ALidarClippingVolume*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALidarClippingVolume_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALidarClippingVolume), &Z_Construct_UClass_ALidarClippingVolume_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALidarClippingVolume_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALidarClippingVolume_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALidarClippingVolume_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALidarClippingVolume_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Clipping Volume" },
		{ "Comment", "/** Affects how this volume affects points */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Affects how this volume affects points" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALidarClippingVolume_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALidarClippingVolume, Mode), Z_Construct_UEnum_LidarPointCloudRuntime_ELidarClippingVolumeMode, METADATA_PARAMS(Z_Construct_UClass_ALidarClippingVolume_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALidarClippingVolume_Statics::NewProp_Mode_MetaData)) }; // 2787028867
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALidarClippingVolume_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Clipping Volume" },
		{ "Comment", "/**\n\x09 * Determines the processing order of the nodes, in case they overlap.\n\x09 * Higher values take priority over lower ones.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloud.h" },
		{ "ToolTip", "Determines the processing order of the nodes, in case they overlap.\nHigher values take priority over lower ones." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALidarClippingVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALidarClippingVolume, Priority), METADATA_PARAMS(Z_Construct_UClass_ALidarClippingVolume_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALidarClippingVolume_Statics::NewProp_Priority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALidarClippingVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALidarClippingVolume_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALidarClippingVolume_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALidarClippingVolume_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALidarClippingVolume_Statics::NewProp_Priority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALidarClippingVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALidarClippingVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALidarClippingVolume_Statics::ClassParams = {
		&ALidarClippingVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALidarClippingVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALidarClippingVolume_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALidarClippingVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALidarClippingVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALidarClippingVolume()
	{
		if (!Z_Registration_Info_UClass_ALidarClippingVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALidarClippingVolume.OuterSingleton, Z_Construct_UClass_ALidarClippingVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALidarClippingVolume.OuterSingleton;
	}
	template<> LIDARPOINTCLOUDRUNTIME_API UClass* StaticClass<ALidarClippingVolume>()
	{
		return ALidarClippingVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALidarClippingVolume);
	ALidarClippingVolume::~ALidarClippingVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_Statics::ScriptStructInfo[] = {
		{ FLidarPointCloudTraceHit::StaticStruct, Z_Construct_UScriptStruct_FLidarPointCloudTraceHit_Statics::NewStructOps, TEXT("LidarPointCloudTraceHit"), &Z_Registration_Info_UScriptStruct_LidarPointCloudTraceHit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLidarPointCloudTraceHit), 2976833756U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULidarPointCloud, ULidarPointCloud::StaticClass, TEXT("ULidarPointCloud"), &Z_Registration_Info_UClass_ULidarPointCloud, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULidarPointCloud), 1516271374U) },
		{ Z_Construct_UClass_ULidarPointCloudBlueprintLibrary, ULidarPointCloudBlueprintLibrary::StaticClass, TEXT("ULidarPointCloudBlueprintLibrary"), &Z_Registration_Info_UClass_ULidarPointCloudBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULidarPointCloudBlueprintLibrary), 4186729869U) },
		{ Z_Construct_UClass_ALidarClippingVolume, ALidarClippingVolume::StaticClass, TEXT("ALidarClippingVolume"), &Z_Registration_Info_UClass_ALidarClippingVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALidarClippingVolume), 4283220102U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_3604074979(TEXT("/Script/LidarPointCloudRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloud_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
