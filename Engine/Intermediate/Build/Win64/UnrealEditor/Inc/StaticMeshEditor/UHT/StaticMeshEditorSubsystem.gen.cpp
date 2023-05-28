// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StaticMeshEditorSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "StaticMeshEditorSubsystemHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshEditorSubsystem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshBuildSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshNaniteSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshReductionSettings();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
	STATICMESHEDITOR_API UClass* Z_Construct_UClass_UStaticMeshEditorSubsystem();
	STATICMESHEDITOR_API UClass* Z_Construct_UClass_UStaticMeshEditorSubsystem_NoRegister();
	STATICMESHEDITOR_API UEnum* Z_Construct_UEnum_StaticMeshEditor_EScriptCollisionShapeType();
	STATICMESHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions();
	STATICMESHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions();
	STATICMESHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions();
	STATICMESHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshReductionOptions();
	UPackage* Z_Construct_UPackage__Script_StaticMeshEditor();
// End Cross Module References
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execCreateProxyMeshActor)
	{
		P_GET_TARRAY_REF(AStaticMeshActor*,Z_Param_Out_ActorsToMerge);
		P_GET_STRUCT_REF(FCreateProxyMeshActorOptions,Z_Param_Out_MergeOptions);
		P_GET_OBJECT_REF(AStaticMeshActor,Z_Param_Out_OutMergedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateProxyMeshActor(Z_Param_Out_ActorsToMerge,Z_Param_Out_MergeOptions,Z_Param_Out_OutMergedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execMergeStaticMeshActors)
	{
		P_GET_TARRAY_REF(AStaticMeshActor*,Z_Param_Out_ActorsToMerge);
		P_GET_STRUCT_REF(FMergeStaticMeshActorsOptions,Z_Param_Out_MergeOptions);
		P_GET_OBJECT_REF(AStaticMeshActor,Z_Param_Out_OutMergedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MergeStaticMeshActors(Z_Param_Out_ActorsToMerge,Z_Param_Out_MergeOptions,Z_Param_Out_OutMergedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execJoinStaticMeshActors)
	{
		P_GET_TARRAY_REF(AStaticMeshActor*,Z_Param_Out_ActorsToJoin);
		P_GET_STRUCT_REF(FJoinStaticMeshActorsOptions,Z_Param_Out_JoinOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->JoinStaticMeshActors(Z_Param_Out_ActorsToJoin,Z_Param_Out_JoinOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execReplaceMeshComponentsMeshesOnActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_OBJECT(UStaticMesh,Z_Param_MeshToBeReplaced);
		P_GET_OBJECT(UStaticMesh,Z_Param_NewMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceMeshComponentsMeshesOnActors(Z_Param_Out_Actors,Z_Param_MeshToBeReplaced,Z_Param_NewMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execReplaceMeshComponentsMeshes)
	{
		P_GET_TARRAY_REF(UStaticMeshComponent*,Z_Param_Out_MeshComponents);
		P_GET_OBJECT(UStaticMesh,Z_Param_MeshToBeReplaced);
		P_GET_OBJECT(UStaticMesh,Z_Param_NewMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceMeshComponentsMeshes(Z_Param_Out_MeshComponents,Z_Param_MeshToBeReplaced,Z_Param_NewMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execReplaceMeshComponentsMaterialsOnActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_OBJECT(UMaterialInterface,Z_Param_MaterialToBeReplaced);
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceMeshComponentsMaterialsOnActors(Z_Param_Out_Actors,Z_Param_MaterialToBeReplaced,Z_Param_NewMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execReplaceMeshComponentsMaterials)
	{
		P_GET_TARRAY_REF(UMeshComponent*,Z_Param_Out_MeshComponents);
		P_GET_OBJECT(UMaterialInterface,Z_Param_MaterialToBeReplaced);
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceMeshComponentsMaterials(Z_Param_Out_MeshComponents,Z_Param_MaterialToBeReplaced,Z_Param_NewMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execGenerateBoxUVChannel)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVChannelIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GenerateBoxUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_UVChannelIndex,Z_Param_Out_Position,Z_Param_Out_Orientation,Z_Param_Out_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execGenerateCylindricalUVChannel)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVChannelIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Tiling);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GenerateCylindricalUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_UVChannelIndex,Z_Param_Out_Position,Z_Param_Out_Orientation,Z_Param_Out_Tiling);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execGeneratePlanarUVChannel)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVChannelIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Tiling);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GeneratePlanarUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_UVChannelIndex,Z_Param_Out_Position,Z_Param_Out_Orientation,Z_Param_Out_Tiling);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execRemoveUVChannel)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVChannelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_UVChannelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execInsertUVChannel)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_UVChannelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InsertUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_UVChannelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execAddUVChannel)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddUVChannel(Z_Param_StaticMesh,Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execGetNumUVChannels)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumUVChannels(Z_Param_StaticMesh,Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execSetAllowCPUAccess)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_UBOOL(Z_Param_bAllowCPUAccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowCPUAccess(Z_Param_StaticMesh,Z_Param_bAllowCPUAccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execGetNumberMaterials)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberMaterials(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execGetNumberVerts)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberVerts(Z_Param_StaticMesh,Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execSetGenerateLightmapUVs)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_UBOOL(Z_Param_bGenerateLightmapUVs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetGenerateLightmapUVs(Z_Param_StaticMesh,Z_Param_bGenerateLightmapUVs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execHasInstanceVertexColors)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasInstanceVertexColors(Z_Param_StaticMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execHasVertexColors)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasVertexColors(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execGetLODMaterialSlot)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLODMaterialSlot(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_SectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execSetLODMaterialSlot)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialSlotIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLODMaterialSlot(Z_Param_StaticMesh,Z_Param_MaterialSlotIndex,Z_Param_LODIndex,Z_Param_SectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execEnableSectionCastShadow)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_UBOOL(Z_Param_bCastShadow);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableSectionCastShadow(Z_Param_StaticMesh,Z_Param_bCastShadow,Z_Param_LODIndex,Z_Param_SectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execIsSectionCollisionEnabled)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSectionCollisionEnabled(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_SectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execEnableSectionCollision)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_UBOOL(Z_Param_bCollisionEnabled);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableSectionCollision(Z_Param_StaticMesh,Z_Param_bCollisionEnabled,Z_Param_LODIndex,Z_Param_SectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execRemoveCollisions)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveCollisions(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execRemoveCollisionsWithNotification)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_UBOOL(Z_Param_bApplyChanges);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveCollisionsWithNotification(Z_Param_StaticMesh,Z_Param_bApplyChanges);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execBulkSetConvexDecompositionCollisions)
	{
		P_GET_TARRAY_REF(UStaticMesh*,Z_Param_Out_StaticMeshes);
		P_GET_PROPERTY(FIntProperty,Z_Param_HullCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxHullVerts);
		P_GET_PROPERTY(FIntProperty,Z_Param_HullPrecision);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BulkSetConvexDecompositionCollisions(Z_Param_Out_StaticMeshes,Z_Param_HullCount,Z_Param_MaxHullVerts,Z_Param_HullPrecision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execSetConvexDecompositionCollisions)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_HullCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxHullVerts);
		P_GET_PROPERTY(FIntProperty,Z_Param_HullPrecision);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetConvexDecompositionCollisions(Z_Param_StaticMesh,Z_Param_HullCount,Z_Param_MaxHullVerts,Z_Param_HullPrecision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execBulkSetConvexDecompositionCollisionsWithNotification)
	{
		P_GET_TARRAY_REF(UStaticMesh*,Z_Param_Out_StaticMeshes);
		P_GET_PROPERTY(FIntProperty,Z_Param_HullCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxHullVerts);
		P_GET_PROPERTY(FIntProperty,Z_Param_HullPrecision);
		P_GET_UBOOL(Z_Param_bApplyChanges);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BulkSetConvexDecompositionCollisionsWithNotification(Z_Param_Out_StaticMeshes,Z_Param_HullCount,Z_Param_MaxHullVerts,Z_Param_HullPrecision,Z_Param_bApplyChanges);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execSetConvexDecompositionCollisionsWithNotification)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_HullCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxHullVerts);
		P_GET_PROPERTY(FIntProperty,Z_Param_HullPrecision);
		P_GET_UBOOL(Z_Param_bApplyChanges);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetConvexDecompositionCollisionsWithNotification(Z_Param_StaticMesh,Z_Param_HullCount,Z_Param_MaxHullVerts,Z_Param_HullPrecision,Z_Param_bApplyChanges);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execGetConvexCollisionCount)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetConvexCollisionCount(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execGetCollisionComplexity)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ECollisionTraceFlag>*)Z_Param__Result=P_THIS->GetCollisionComplexity(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execGetSimpleCollisionCount)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSimpleCollisionCount(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execAddSimpleCollisions)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_ENUM(EScriptCollisionShapeType,Z_Param_ShapeType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddSimpleCollisions(Z_Param_StaticMesh,EScriptCollisionShapeType(Z_Param_ShapeType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execAddSimpleCollisionsWithNotification)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_ENUM(EScriptCollisionShapeType,Z_Param_ShapeType);
		P_GET_UBOOL(Z_Param_bApplyChanges);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddSimpleCollisionsWithNotification(Z_Param_StaticMesh,EScriptCollisionShapeType(Z_Param_ShapeType),Z_Param_bApplyChanges);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execSetNaniteSettings)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_STRUCT(FMeshNaniteSettings,Z_Param_NaniteSettings);
		P_GET_UBOOL(Z_Param_bApplyChanges);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNaniteSettings(Z_Param_StaticMesh,Z_Param_NaniteSettings,Z_Param_bApplyChanges);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execGetNaniteSettings)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMeshNaniteSettings*)Z_Param__Result=P_THIS->GetNaniteSettings(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execSetLodScreenSizes)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_TARRAY_REF(float,Z_Param_Out_ScreenSizes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLodScreenSizes(Z_Param_StaticMesh,Z_Param_Out_ScreenSizes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execGetLodScreenSizes)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetLodScreenSizes(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execRemoveLods)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveLods(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execGetLodCount)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLodCount(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execSetLodFromStaticMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_DestinationStaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_DestinationLodIndex);
		P_GET_OBJECT(UStaticMesh,Z_Param_SourceStaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceLodIndex);
		P_GET_UBOOL(Z_Param_bReuseExistingMaterialSlots);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetLodFromStaticMesh(Z_Param_DestinationStaticMesh,Z_Param_DestinationLodIndex,Z_Param_SourceStaticMesh,Z_Param_SourceLodIndex,Z_Param_bReuseExistingMaterialSlots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execReimportAllCustomLODs)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReimportAllCustomLODs(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execImportLOD)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_BaseStaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_SourceFilename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ImportLOD(Z_Param_BaseStaticMesh,Z_Param_LODIndex,Z_Param_SourceFilename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execSetLODGroup)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FNameProperty,Z_Param_LODGroup);
		P_GET_UBOOL(Z_Param_bRebuildImmediately);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLODGroup(Z_Param_StaticMesh,Z_Param_LODGroup,Z_Param_bRebuildImmediately);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execGetLODGroup)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetLODGroup(Z_Param_StaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execSetLodBuildSettings)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_STRUCT_REF(FMeshBuildSettings,Z_Param_Out_BuildOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLodBuildSettings(Z_Param_StaticMesh,Z_Param_LodIndex,Z_Param_Out_BuildOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execGetLodBuildSettings)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_STRUCT_REF(FMeshBuildSettings,Z_Param_Out_OutBuildOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLodBuildSettings(Z_Param_StaticMesh,Z_Param_LodIndex,Z_Param_Out_OutBuildOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execSetLodReductionSettings)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_STRUCT_REF(FMeshReductionSettings,Z_Param_Out_ReductionOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLodReductionSettings(Z_Param_StaticMesh,Z_Param_LodIndex,Z_Param_Out_ReductionOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execGetLodReductionSettings)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_STRUCT_REF(FMeshReductionSettings,Z_Param_Out_OutReductionOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLodReductionSettings(Z_Param_StaticMesh,Z_Param_LodIndex,Z_Param_Out_OutReductionOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execSetLods)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_STRUCT_REF(FStaticMeshReductionOptions,Z_Param_Out_ReductionOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetLods(Z_Param_StaticMesh,Z_Param_Out_ReductionOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshEditorSubsystem::execSetLodsWithNotification)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_STRUCT_REF(FStaticMeshReductionOptions,Z_Param_Out_ReductionOptions);
		P_GET_UBOOL(Z_Param_bApplyChanges);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetLodsWithNotification(Z_Param_StaticMesh,Z_Param_Out_ReductionOptions,Z_Param_bApplyChanges);
		P_NATIVE_END;
	}
	void UStaticMeshEditorSubsystem::StaticRegisterNativesUStaticMeshEditorSubsystem()
	{
		UClass* Class = UStaticMeshEditorSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSimpleCollisions", &UStaticMeshEditorSubsystem::execAddSimpleCollisions },
			{ "AddSimpleCollisionsWithNotification", &UStaticMeshEditorSubsystem::execAddSimpleCollisionsWithNotification },
			{ "AddUVChannel", &UStaticMeshEditorSubsystem::execAddUVChannel },
			{ "BulkSetConvexDecompositionCollisions", &UStaticMeshEditorSubsystem::execBulkSetConvexDecompositionCollisions },
			{ "BulkSetConvexDecompositionCollisionsWithNotification", &UStaticMeshEditorSubsystem::execBulkSetConvexDecompositionCollisionsWithNotification },
			{ "CreateProxyMeshActor", &UStaticMeshEditorSubsystem::execCreateProxyMeshActor },
			{ "EnableSectionCastShadow", &UStaticMeshEditorSubsystem::execEnableSectionCastShadow },
			{ "EnableSectionCollision", &UStaticMeshEditorSubsystem::execEnableSectionCollision },
			{ "GenerateBoxUVChannel", &UStaticMeshEditorSubsystem::execGenerateBoxUVChannel },
			{ "GenerateCylindricalUVChannel", &UStaticMeshEditorSubsystem::execGenerateCylindricalUVChannel },
			{ "GeneratePlanarUVChannel", &UStaticMeshEditorSubsystem::execGeneratePlanarUVChannel },
			{ "GetCollisionComplexity", &UStaticMeshEditorSubsystem::execGetCollisionComplexity },
			{ "GetConvexCollisionCount", &UStaticMeshEditorSubsystem::execGetConvexCollisionCount },
			{ "GetLodBuildSettings", &UStaticMeshEditorSubsystem::execGetLodBuildSettings },
			{ "GetLodCount", &UStaticMeshEditorSubsystem::execGetLodCount },
			{ "GetLODGroup", &UStaticMeshEditorSubsystem::execGetLODGroup },
			{ "GetLODMaterialSlot", &UStaticMeshEditorSubsystem::execGetLODMaterialSlot },
			{ "GetLodReductionSettings", &UStaticMeshEditorSubsystem::execGetLodReductionSettings },
			{ "GetLodScreenSizes", &UStaticMeshEditorSubsystem::execGetLodScreenSizes },
			{ "GetNaniteSettings", &UStaticMeshEditorSubsystem::execGetNaniteSettings },
			{ "GetNumberMaterials", &UStaticMeshEditorSubsystem::execGetNumberMaterials },
			{ "GetNumberVerts", &UStaticMeshEditorSubsystem::execGetNumberVerts },
			{ "GetNumUVChannels", &UStaticMeshEditorSubsystem::execGetNumUVChannels },
			{ "GetSimpleCollisionCount", &UStaticMeshEditorSubsystem::execGetSimpleCollisionCount },
			{ "HasInstanceVertexColors", &UStaticMeshEditorSubsystem::execHasInstanceVertexColors },
			{ "HasVertexColors", &UStaticMeshEditorSubsystem::execHasVertexColors },
			{ "ImportLOD", &UStaticMeshEditorSubsystem::execImportLOD },
			{ "InsertUVChannel", &UStaticMeshEditorSubsystem::execInsertUVChannel },
			{ "IsSectionCollisionEnabled", &UStaticMeshEditorSubsystem::execIsSectionCollisionEnabled },
			{ "JoinStaticMeshActors", &UStaticMeshEditorSubsystem::execJoinStaticMeshActors },
			{ "MergeStaticMeshActors", &UStaticMeshEditorSubsystem::execMergeStaticMeshActors },
			{ "ReimportAllCustomLODs", &UStaticMeshEditorSubsystem::execReimportAllCustomLODs },
			{ "RemoveCollisions", &UStaticMeshEditorSubsystem::execRemoveCollisions },
			{ "RemoveCollisionsWithNotification", &UStaticMeshEditorSubsystem::execRemoveCollisionsWithNotification },
			{ "RemoveLods", &UStaticMeshEditorSubsystem::execRemoveLods },
			{ "RemoveUVChannel", &UStaticMeshEditorSubsystem::execRemoveUVChannel },
			{ "ReplaceMeshComponentsMaterials", &UStaticMeshEditorSubsystem::execReplaceMeshComponentsMaterials },
			{ "ReplaceMeshComponentsMaterialsOnActors", &UStaticMeshEditorSubsystem::execReplaceMeshComponentsMaterialsOnActors },
			{ "ReplaceMeshComponentsMeshes", &UStaticMeshEditorSubsystem::execReplaceMeshComponentsMeshes },
			{ "ReplaceMeshComponentsMeshesOnActors", &UStaticMeshEditorSubsystem::execReplaceMeshComponentsMeshesOnActors },
			{ "SetAllowCPUAccess", &UStaticMeshEditorSubsystem::execSetAllowCPUAccess },
			{ "SetConvexDecompositionCollisions", &UStaticMeshEditorSubsystem::execSetConvexDecompositionCollisions },
			{ "SetConvexDecompositionCollisionsWithNotification", &UStaticMeshEditorSubsystem::execSetConvexDecompositionCollisionsWithNotification },
			{ "SetGenerateLightmapUVs", &UStaticMeshEditorSubsystem::execSetGenerateLightmapUVs },
			{ "SetLodBuildSettings", &UStaticMeshEditorSubsystem::execSetLodBuildSettings },
			{ "SetLodFromStaticMesh", &UStaticMeshEditorSubsystem::execSetLodFromStaticMesh },
			{ "SetLODGroup", &UStaticMeshEditorSubsystem::execSetLODGroup },
			{ "SetLODMaterialSlot", &UStaticMeshEditorSubsystem::execSetLODMaterialSlot },
			{ "SetLodReductionSettings", &UStaticMeshEditorSubsystem::execSetLodReductionSettings },
			{ "SetLods", &UStaticMeshEditorSubsystem::execSetLods },
			{ "SetLodScreenSizes", &UStaticMeshEditorSubsystem::execSetLodScreenSizes },
			{ "SetLodsWithNotification", &UStaticMeshEditorSubsystem::execSetLodsWithNotification },
			{ "SetNaniteSettings", &UStaticMeshEditorSubsystem::execSetNaniteSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions_Statics
	{
		struct StaticMeshEditorSubsystem_eventAddSimpleCollisions_Parms
		{
			UStaticMesh* StaticMesh;
			EScriptCollisionShapeType ShapeType;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShapeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShapeType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventAddSimpleCollisions_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions_Statics::NewProp_ShapeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions_Statics::NewProp_ShapeType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions_Statics::NewProp_ShapeType = { "ShapeType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventAddSimpleCollisions_Parms, ShapeType), Z_Construct_UEnum_StaticMeshEditor_EScriptCollisionShapeType, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions_Statics::NewProp_ShapeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions_Statics::NewProp_ShapeType_MetaData)) }; // 1976287348
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventAddSimpleCollisions_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions_Statics::NewProp_ShapeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions_Statics::NewProp_ShapeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Same as AddSimpleCollisionsWithNotification but changes are automatically applied.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Same as AddSimpleCollisionsWithNotification but changes are automatically applied." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "AddSimpleCollisions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions_Statics::StaticMeshEditorSubsystem_eventAddSimpleCollisions_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics
	{
		struct StaticMeshEditorSubsystem_eventAddSimpleCollisionsWithNotification_Parms
		{
			UStaticMesh* StaticMesh;
			EScriptCollisionShapeType ShapeType;
			bool bApplyChanges;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShapeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShapeType;
		static void NewProp_bApplyChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyChanges;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventAddSimpleCollisionsWithNotification_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::NewProp_ShapeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::NewProp_ShapeType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::NewProp_ShapeType = { "ShapeType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventAddSimpleCollisionsWithNotification_Parms, ShapeType), Z_Construct_UEnum_StaticMeshEditor_EScriptCollisionShapeType, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::NewProp_ShapeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::NewProp_ShapeType_MetaData)) }; // 1976287348
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::NewProp_bApplyChanges_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventAddSimpleCollisionsWithNotification_Parms*)Obj)->bApplyChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::NewProp_bApplyChanges = { "bApplyChanges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventAddSimpleCollisionsWithNotification_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::NewProp_bApplyChanges_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventAddSimpleCollisionsWithNotification_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::NewProp_ShapeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::NewProp_ShapeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::NewProp_bApplyChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Add simple collisions to a static mesh.\n\x09 * This method replicates what is done when invoking menu entries \"Collision > Add [...] Simplified Collision\" in the Mesh Editor.\n\x09 * @param\x09StaticMesh\x09\x09\x09Mesh to generate simple collision for.\n\x09 * @param\x09ShapeType\x09\x09\x09Options on which simple collision to add to the mesh.\n\x09 * @param\x09""bApplyChanges\x09\x09Indicates if changes must be apply or not.\n\x09 * @return An integer indicating the index of the collision newly created.\n\x09 * A negative value indicates the addition failed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Add simple collisions to a static mesh.\nThis method replicates what is done when invoking menu entries \"Collision > Add [...] Simplified Collision\" in the Mesh Editor.\n@param       StaticMesh                      Mesh to generate simple collision for.\n@param       ShapeType                       Options on which simple collision to add to the mesh.\n@param       bApplyChanges           Indicates if changes must be apply or not.\n@return An integer indicating the index of the collision newly created.\nA negative value indicates the addition failed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "AddSimpleCollisionsWithNotification", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::StaticMeshEditorSubsystem_eventAddSimpleCollisionsWithNotification_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddUVChannel_Statics
	{
		struct StaticMeshEditorSubsystem_eventAddUVChannel_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddUVChannel_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventAddUVChannel_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddUVChannel_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventAddUVChannel_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddUVChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventAddUVChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddUVChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventAddUVChannel_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddUVChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddUVChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddUVChannel_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddUVChannel_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddUVChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddUVChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Adds an empty UV channel at the end of the existing channels on the given LOD of a StaticMesh.\n\x09 * @param\x09StaticMesh\x09\x09\x09Static mesh on which to add a UV channel.\n\x09 * @param\x09LODIndex\x09\x09\x09Index of the StaticMesh LOD.\n\x09 * @return true if a UV channel was added.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Adds an empty UV channel at the end of the existing channels on the given LOD of a StaticMesh.\n@param       StaticMesh                      Static mesh on which to add a UV channel.\n@param       LODIndex                        Index of the StaticMesh LOD.\n@return true if a UV channel was added." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddUVChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "AddUVChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddUVChannel_Statics::StaticMeshEditorSubsystem_eventAddUVChannel_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddUVChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddUVChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddUVChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddUVChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddUVChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddUVChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics
	{
		struct StaticMeshEditorSubsystem_eventBulkSetConvexDecompositionCollisions_Parms
		{
			TArray<UStaticMesh*> StaticMeshes;
			int32 HullCount;
			int32 MaxHullVerts;
			int32 HullPrecision;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticMeshes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HullCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHullVerts;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HullPrecision;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::NewProp_StaticMeshes_Inner = { "StaticMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::NewProp_StaticMeshes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::NewProp_StaticMeshes = { "StaticMeshes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventBulkSetConvexDecompositionCollisions_Parms, StaticMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::NewProp_StaticMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::NewProp_StaticMeshes_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::NewProp_HullCount = { "HullCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventBulkSetConvexDecompositionCollisions_Parms, HullCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::NewProp_MaxHullVerts = { "MaxHullVerts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventBulkSetConvexDecompositionCollisions_Parms, MaxHullVerts), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::NewProp_HullPrecision = { "HullPrecision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventBulkSetConvexDecompositionCollisions_Parms, HullPrecision), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventBulkSetConvexDecompositionCollisions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventBulkSetConvexDecompositionCollisions_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::NewProp_StaticMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::NewProp_StaticMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::NewProp_HullCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::NewProp_MaxHullVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::NewProp_HullPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Same as SetConvexDecompositionCollisionsWithNotification but changes are automatically applied.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Same as SetConvexDecompositionCollisionsWithNotification but changes are automatically applied." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "BulkSetConvexDecompositionCollisions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::StaticMeshEditorSubsystem_eventBulkSetConvexDecompositionCollisions_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics
	{
		struct StaticMeshEditorSubsystem_eventBulkSetConvexDecompositionCollisionsWithNotification_Parms
		{
			TArray<UStaticMesh*> StaticMeshes;
			int32 HullCount;
			int32 MaxHullVerts;
			int32 HullPrecision;
			bool bApplyChanges;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticMeshes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HullCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHullVerts;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HullPrecision;
		static void NewProp_bApplyChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyChanges;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_StaticMeshes_Inner = { "StaticMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_StaticMeshes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_StaticMeshes = { "StaticMeshes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventBulkSetConvexDecompositionCollisionsWithNotification_Parms, StaticMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_StaticMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_StaticMeshes_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_HullCount = { "HullCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventBulkSetConvexDecompositionCollisionsWithNotification_Parms, HullCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_MaxHullVerts = { "MaxHullVerts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventBulkSetConvexDecompositionCollisionsWithNotification_Parms, MaxHullVerts), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_HullPrecision = { "HullPrecision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventBulkSetConvexDecompositionCollisionsWithNotification_Parms, HullPrecision), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_bApplyChanges_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventBulkSetConvexDecompositionCollisionsWithNotification_Parms*)Obj)->bApplyChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_bApplyChanges = { "bApplyChanges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventBulkSetConvexDecompositionCollisionsWithNotification_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_bApplyChanges_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventBulkSetConvexDecompositionCollisionsWithNotification_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventBulkSetConvexDecompositionCollisionsWithNotification_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_StaticMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_StaticMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_HullCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_MaxHullVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_HullPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_bApplyChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Compute convex collisions for a set of static meshes.\n\x09 * Any existing collisions will be removed from the static meshes.\n\x09 * This method replicates what is done when invoking menu entry \"Collision > Auto Convex Collision\" in the Mesh Editor.\n\x09 * @param\x09StaticMeshes\x09\x09\x09Set of Static mesh to add convex collision on.\n\x09 * @param\x09HullCount\x09\x09\x09\x09Maximum number of convex pieces that will be created. Must be positive.\n\x09 * @param\x09MaxHullVerts\x09\x09\x09Maximum number of vertices allowed for any generated convex hull.\n\x09 * @param\x09HullPrecision\x09\x09\x09Number of voxels to use when generating collision. Must be positive.\n\x09 * @param\x09""bApplyChanges\x09\x09\x09Indicates if changes must be apply or not.\n\x09 * @return A boolean indicating if the addition was successful or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Compute convex collisions for a set of static meshes.\nAny existing collisions will be removed from the static meshes.\nThis method replicates what is done when invoking menu entry \"Collision > Auto Convex Collision\" in the Mesh Editor.\n@param       StaticMeshes                    Set of Static mesh to add convex collision on.\n@param       HullCount                               Maximum number of convex pieces that will be created. Must be positive.\n@param       MaxHullVerts                    Maximum number of vertices allowed for any generated convex hull.\n@param       HullPrecision                   Number of voxels to use when generating collision. Must be positive.\n@param       bApplyChanges                   Indicates if changes must be apply or not.\n@return A boolean indicating if the addition was successful or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "BulkSetConvexDecompositionCollisionsWithNotification", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::StaticMeshEditorSubsystem_eventBulkSetConvexDecompositionCollisionsWithNotification_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics
	{
		struct StaticMeshEditorSubsystem_eventCreateProxyMeshActor_Parms
		{
			TArray<AStaticMeshActor*> ActorsToMerge;
			FCreateProxyMeshActorOptions MergeOptions;
			AStaticMeshActor* OutMergedActor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToMerge_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToMerge_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToMerge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MergeOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MergeOptions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutMergedActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::NewProp_ActorsToMerge_Inner = { "ActorsToMerge", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::NewProp_ActorsToMerge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::NewProp_ActorsToMerge = { "ActorsToMerge", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventCreateProxyMeshActor_Parms, ActorsToMerge), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::NewProp_ActorsToMerge_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::NewProp_ActorsToMerge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::NewProp_MergeOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::NewProp_MergeOptions = { "MergeOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventCreateProxyMeshActor_Parms, MergeOptions), Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::NewProp_MergeOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::NewProp_MergeOptions_MetaData)) }; // 3005345854
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::NewProp_OutMergedActor = { "OutMergedActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventCreateProxyMeshActor_Parms, OutMergedActor), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventCreateProxyMeshActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventCreateProxyMeshActor_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::NewProp_ActorsToMerge_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::NewProp_ActorsToMerge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::NewProp_MergeOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::NewProp_OutMergedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep" },
		{ "Comment", "/**\n\x09 * Build a proxy mesh actor that can replace a set of mesh actors.\n\x09 * @param   ActorsToMerge  List of actors to build a proxy for.\n\x09 * @param   MergeOptions\n\x09 * @param   OutMergedActor generated actor if requested\n\x09 * @return  Success of the proxy creation\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Build a proxy mesh actor that can replace a set of mesh actors.\n@param   ActorsToMerge  List of actors to build a proxy for.\n@param   MergeOptions\n@param   OutMergedActor generated actor if requested\n@return  Success of the proxy creation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "CreateProxyMeshActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::StaticMeshEditorSubsystem_eventCreateProxyMeshActor_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCastShadow_Statics
	{
		struct StaticMeshEditorSubsystem_eventEnableSectionCastShadow_Parms
		{
			UStaticMesh* StaticMesh;
			bool bCastShadow;
			int32 LODIndex;
			int32 SectionIndex;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static void NewProp_bCastShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCastShadow_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventEnableSectionCastShadow_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCastShadow_Statics::NewProp_bCastShadow_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventEnableSectionCastShadow_Parms*)Obj)->bCastShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCastShadow_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventEnableSectionCastShadow_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCastShadow_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCastShadow_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventEnableSectionCastShadow_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCastShadow_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventEnableSectionCastShadow_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCastShadow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCastShadow_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCastShadow_Statics::NewProp_bCastShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCastShadow_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCastShadow_Statics::NewProp_SectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCastShadow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Enables/disables mesh section shadow casting for a specific LOD.\n\x09 * @param\x09StaticMesh\x09\x09\x09Static mesh to Enables/disables shadow casting from.\n\x09 * @param\x09""bCastShadow\x09\x09\x09If the section should cast shadow.\n\x09 * @param\x09LODIndex\x09\x09\x09Index of the StaticMesh LOD.\n\x09 * @param\x09SectionIndex\x09\x09Index of the StaticMesh Section.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Enables/disables mesh section shadow casting for a specific LOD.\n@param       StaticMesh                      Static mesh to Enables/disables shadow casting from.\n@param       bCastShadow                     If the section should cast shadow.\n@param       LODIndex                        Index of the StaticMesh LOD.\n@param       SectionIndex            Index of the StaticMesh Section." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCastShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "EnableSectionCastShadow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCastShadow_Statics::StaticMeshEditorSubsystem_eventEnableSectionCastShadow_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCastShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCastShadow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCastShadow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCastShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCastShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCastShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCollision_Statics
	{
		struct StaticMeshEditorSubsystem_eventEnableSectionCollision_Parms
		{
			UStaticMesh* StaticMesh;
			bool bCollisionEnabled;
			int32 LODIndex;
			int32 SectionIndex;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static void NewProp_bCollisionEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollisionEnabled;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCollision_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventEnableSectionCollision_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCollision_Statics::NewProp_bCollisionEnabled_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventEnableSectionCollision_Parms*)Obj)->bCollisionEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCollision_Statics::NewProp_bCollisionEnabled = { "bCollisionEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventEnableSectionCollision_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCollision_Statics::NewProp_bCollisionEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCollision_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventEnableSectionCollision_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCollision_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventEnableSectionCollision_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCollision_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCollision_Statics::NewProp_bCollisionEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCollision_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCollision_Statics::NewProp_SectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Enables/disables mesh section collision for a specific LOD.\n\x09 * @param\x09StaticMesh\x09\x09\x09Static mesh to Enables/disables collisions from.\n\x09 * @param\x09""bCollisionEnabled\x09If the collision is enabled or not.\n\x09 * @param\x09LODIndex\x09\x09\x09Index of the StaticMesh LOD.\n\x09 * @param\x09SectionIndex\x09\x09Index of the StaticMesh Section.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Enables/disables mesh section collision for a specific LOD.\n@param       StaticMesh                      Static mesh to Enables/disables collisions from.\n@param       bCollisionEnabled       If the collision is enabled or not.\n@param       LODIndex                        Index of the StaticMesh LOD.\n@param       SectionIndex            Index of the StaticMesh Section." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "EnableSectionCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCollision_Statics::StaticMeshEditorSubsystem_eventEnableSectionCollision_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics
	{
		struct StaticMeshEditorSubsystem_eventGenerateBoxUVChannel_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 UVChannelIndex;
			FVector Position;
			FRotator Orientation;
			FVector Size;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGenerateBoxUVChannel_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGenerateBoxUVChannel_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_UVChannelIndex = { "UVChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGenerateBoxUVChannel_Parms, UVChannelIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGenerateBoxUVChannel_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGenerateBoxUVChannel_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGenerateBoxUVChannel_Parms, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_Size_MetaData)) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventGenerateBoxUVChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventGenerateBoxUVChannel_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_UVChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Generates box UV mapping in the specified UV channel on the given LOD of a StaticMesh.\n\x09 * @param\x09StaticMesh\x09\x09\x09Static mesh on which to generate the UV mapping.\n\x09 * @param\x09LODIndex\x09\x09\x09Index of the StaticMesh LOD.\n\x09 * @param\x09UVChannelIndex\x09\x09""Channel where to save the UV mapping.\n\x09 * @param\x09Position\x09\x09\x09Position of the center of the projection gizmo.\n\x09 * @param\x09Orientation\x09\x09\x09Rotation to apply to the projection gizmo.\n\x09 * @param\x09Size\x09\x09\x09\x09The size of the box projection gizmo.\n\x09 * @return true if the UV mapping was generated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Generates box UV mapping in the specified UV channel on the given LOD of a StaticMesh.\n@param       StaticMesh                      Static mesh on which to generate the UV mapping.\n@param       LODIndex                        Index of the StaticMesh LOD.\n@param       UVChannelIndex          Channel where to save the UV mapping.\n@param       Position                        Position of the center of the projection gizmo.\n@param       Orientation                     Rotation to apply to the projection gizmo.\n@param       Size                            The size of the box projection gizmo.\n@return true if the UV mapping was generated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "GenerateBoxUVChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::StaticMeshEditorSubsystem_eventGenerateBoxUVChannel_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics
	{
		struct StaticMeshEditorSubsystem_eventGenerateCylindricalUVChannel_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 UVChannelIndex;
			FVector Position;
			FRotator Orientation;
			FVector2D Tiling;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tiling_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tiling;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGenerateCylindricalUVChannel_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGenerateCylindricalUVChannel_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_UVChannelIndex = { "UVChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGenerateCylindricalUVChannel_Parms, UVChannelIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGenerateCylindricalUVChannel_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGenerateCylindricalUVChannel_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_Tiling_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_Tiling = { "Tiling", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGenerateCylindricalUVChannel_Parms, Tiling), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_Tiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_Tiling_MetaData)) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventGenerateCylindricalUVChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventGenerateCylindricalUVChannel_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_UVChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_Tiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Generates cylindrical UV mapping in the specified UV channel on the given LOD of a StaticMesh.\n\x09 * @param\x09StaticMesh\x09\x09\x09Static mesh on which to generate the UV mapping.\n\x09 * @param\x09LODIndex\x09\x09\x09Index of the StaticMesh LOD.\n\x09 * @param\x09UVChannelIndex\x09\x09""Channel where to save the UV mapping.\n\x09 * @param\x09Position\x09\x09\x09Position of the center of the projection gizmo.\n\x09 * @param\x09Orientation\x09\x09\x09Rotation to apply to the projection gizmo.\n\x09 * @param\x09Tiling\x09\x09\x09\x09The UV tiling to use to generate the UV mapping.\n\x09 * @return true if the UV mapping was generated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Generates cylindrical UV mapping in the specified UV channel on the given LOD of a StaticMesh.\n@param       StaticMesh                      Static mesh on which to generate the UV mapping.\n@param       LODIndex                        Index of the StaticMesh LOD.\n@param       UVChannelIndex          Channel where to save the UV mapping.\n@param       Position                        Position of the center of the projection gizmo.\n@param       Orientation                     Rotation to apply to the projection gizmo.\n@param       Tiling                          The UV tiling to use to generate the UV mapping.\n@return true if the UV mapping was generated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "GenerateCylindricalUVChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::StaticMeshEditorSubsystem_eventGenerateCylindricalUVChannel_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics
	{
		struct StaticMeshEditorSubsystem_eventGeneratePlanarUVChannel_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 UVChannelIndex;
			FVector Position;
			FRotator Orientation;
			FVector2D Tiling;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tiling_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tiling;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGeneratePlanarUVChannel_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGeneratePlanarUVChannel_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_UVChannelIndex = { "UVChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGeneratePlanarUVChannel_Parms, UVChannelIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGeneratePlanarUVChannel_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGeneratePlanarUVChannel_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_Tiling_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_Tiling = { "Tiling", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGeneratePlanarUVChannel_Parms, Tiling), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_Tiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_Tiling_MetaData)) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventGeneratePlanarUVChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventGeneratePlanarUVChannel_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_UVChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_Tiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Generates planar UV mapping in the specified UV channel on the given LOD of a StaticMesh.\n\x09 * @param\x09StaticMesh\x09\x09\x09Static mesh on which to generate the UV mapping.\n\x09 * @param\x09LODIndex\x09\x09\x09Index of the StaticMesh LOD.\n\x09 * @param\x09UVChannelIndex\x09\x09""Channel where to save the UV mapping.\n\x09 * @param\x09Position\x09\x09\x09Position of the center of the projection gizmo.\n\x09 * @param\x09Orientation\x09\x09\x09Rotation to apply to the projection gizmo.\n\x09 * @param\x09Tiling\x09\x09\x09\x09The UV tiling to use to generate the UV mapping.\n\x09 * @return true if the UV mapping was generated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Generates planar UV mapping in the specified UV channel on the given LOD of a StaticMesh.\n@param       StaticMesh                      Static mesh on which to generate the UV mapping.\n@param       LODIndex                        Index of the StaticMesh LOD.\n@param       UVChannelIndex          Channel where to save the UV mapping.\n@param       Position                        Position of the center of the projection gizmo.\n@param       Orientation                     Rotation to apply to the projection gizmo.\n@param       Tiling                          The UV tiling to use to generate the UV mapping.\n@return true if the UV mapping was generated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "GeneratePlanarUVChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::StaticMeshEditorSubsystem_eventGeneratePlanarUVChannel_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetCollisionComplexity_Statics
	{
		struct StaticMeshEditorSubsystem_eventGetCollisionComplexity_Parms
		{
			UStaticMesh* StaticMesh;
			TEnumAsByte<ECollisionTraceFlag> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetCollisionComplexity_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetCollisionComplexity_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetCollisionComplexity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetCollisionComplexity_Parms, ReturnValue), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(nullptr, 0) }; // 3043805667
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetCollisionComplexity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetCollisionComplexity_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetCollisionComplexity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetCollisionComplexity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Get the Collision Trace behavior of a static mesh\n\x09 * @param\x09StaticMesh\x09\x09\x09\x09Mesh to query on.\n\x09 * @return the Collision Trace behavior.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Get the Collision Trace behavior of a static mesh\n@param       StaticMesh                              Mesh to query on.\n@return the Collision Trace behavior." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetCollisionComplexity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "GetCollisionComplexity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetCollisionComplexity_Statics::StaticMeshEditorSubsystem_eventGetCollisionComplexity_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetCollisionComplexity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetCollisionComplexity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetCollisionComplexity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetCollisionComplexity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetCollisionComplexity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetCollisionComplexity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetConvexCollisionCount_Statics
	{
		struct StaticMeshEditorSubsystem_eventGetConvexCollisionCount_Parms
		{
			UStaticMesh* StaticMesh;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetConvexCollisionCount_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetConvexCollisionCount_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetConvexCollisionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetConvexCollisionCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetConvexCollisionCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetConvexCollisionCount_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetConvexCollisionCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetConvexCollisionCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Get number of convex collisions present on a static mesh.\n\x09 * @param\x09StaticMesh\x09\x09\x09\x09Mesh to query on.\n\x09 * @return An integer representing the number of convex collisions on the input static mesh.\n\x09 * An negative value indicates that the command could not be executed. See log for explanation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Get number of convex collisions present on a static mesh.\n@param       StaticMesh                              Mesh to query on.\n@return An integer representing the number of convex collisions on the input static mesh.\nAn negative value indicates that the command could not be executed. See log for explanation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetConvexCollisionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "GetConvexCollisionCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetConvexCollisionCount_Statics::StaticMeshEditorSubsystem_eventGetConvexCollisionCount_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetConvexCollisionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetConvexCollisionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetConvexCollisionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetConvexCollisionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetConvexCollisionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetConvexCollisionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings_Statics
	{
		struct StaticMeshEditorSubsystem_eventGetLodBuildSettings_Parms
		{
			const UStaticMesh* StaticMesh;
			int32 LodIndex;
			FMeshBuildSettings OutBuildOptions;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutBuildOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetLodBuildSettings_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_LodIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetLodBuildSettings_Parms, LodIndex), METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_LodIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_LodIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_OutBuildOptions = { "OutBuildOptions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetLodBuildSettings_Parms, OutBuildOptions), Z_Construct_UScriptStruct_FMeshBuildSettings, METADATA_PARAMS(nullptr, 0) }; // 3244455572
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings_Statics::NewProp_OutBuildOptions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "Comment", "/**\n\x09 * Copy the build options with the specified LOD build settings.\n\x09 * @param StaticMesh - Mesh to process.\n\x09 * @param LodIndex - The LOD we get the reduction settings.\n\x09 * @param OutBuildOptions - The build settings where we copy the build options.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Copy the build options with the specified LOD build settings.\n@param StaticMesh - Mesh to process.\n@param LodIndex - The LOD we get the reduction settings.\n@param OutBuildOptions - The build settings where we copy the build options." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "GetLodBuildSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings_Statics::StaticMeshEditorSubsystem_eventGetLodBuildSettings_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodCount_Statics
	{
		struct StaticMeshEditorSubsystem_eventGetLodCount_Parms
		{
			UStaticMesh* StaticMesh;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodCount_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetLodCount_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetLodCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodCount_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Get number of LODs present on a static mesh.\n\x09 * @param\x09StaticMesh\x09\x09\x09\x09Mesh to process.\n\x09 * @return the number of LODs present on the input mesh.\n\x09 * An negative value indicates that the command could not be executed. See log for explanation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Get number of LODs present on a static mesh.\n@param       StaticMesh                              Mesh to process.\n@return the number of LODs present on the input mesh.\nAn negative value indicates that the command could not be executed. See log for explanation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "GetLodCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodCount_Statics::StaticMeshEditorSubsystem_eventGetLodCount_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODGroup_Statics
	{
		struct StaticMeshEditorSubsystem_eventGetLODGroup_Parms
		{
			UStaticMesh* StaticMesh;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODGroup_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetLODGroup_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetLODGroup_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODGroup_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "Comment", "/**\n\x09 * Get the LODGroup for the specified static mesh\n\x09 * @param StaticMesh\n\x09 * @return LODGroup\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Get the LODGroup for the specified static mesh\n@param StaticMesh\n@return LODGroup" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "GetLODGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODGroup_Statics::StaticMeshEditorSubsystem_eventGetLODGroup_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODMaterialSlot_Statics
	{
		struct StaticMeshEditorSubsystem_eventGetLODMaterialSlot_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 SectionIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODMaterialSlot_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetLODMaterialSlot_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODMaterialSlot_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetLODMaterialSlot_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODMaterialSlot_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetLODMaterialSlot_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODMaterialSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetLODMaterialSlot_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODMaterialSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODMaterialSlot_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODMaterialSlot_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODMaterialSlot_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODMaterialSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODMaterialSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Gets the material slot used for a specific LOD section.\n\x09 * @param\x09StaticMesh\x09\x09\x09Static mesh to get the material index from.\n\x09 * @param\x09LODIndex\x09\x09\x09Index of the StaticMesh LOD.\n\x09 * @param\x09SectionIndex\x09\x09Index of the StaticMesh Section.\n\x09 * @return  MaterialSlotIndex\x09Index of the material slot used by the section or INDEX_NONE in case of error.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Gets the material slot used for a specific LOD section.\n@param       StaticMesh                      Static mesh to get the material index from.\n@param       LODIndex                        Index of the StaticMesh LOD.\n@param       SectionIndex            Index of the StaticMesh Section.\n@return  MaterialSlotIndex   Index of the material slot used by the section or INDEX_NONE in case of error." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODMaterialSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "GetLODMaterialSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODMaterialSlot_Statics::StaticMeshEditorSubsystem_eventGetLODMaterialSlot_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODMaterialSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODMaterialSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODMaterialSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODMaterialSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODMaterialSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODMaterialSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings_Statics
	{
		struct StaticMeshEditorSubsystem_eventGetLodReductionSettings_Parms
		{
			const UStaticMesh* StaticMesh;
			int32 LodIndex;
			FMeshReductionSettings OutReductionOptions;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutReductionOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetLodReductionSettings_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings_Statics::NewProp_LodIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetLodReductionSettings_Parms, LodIndex), METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings_Statics::NewProp_LodIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings_Statics::NewProp_LodIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings_Statics::NewProp_OutReductionOptions = { "OutReductionOptions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetLodReductionSettings_Parms, OutReductionOptions), Z_Construct_UScriptStruct_FMeshReductionSettings, METADATA_PARAMS(nullptr, 0) }; // 1559220690
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings_Statics::NewProp_OutReductionOptions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "Comment", "/**\n\x09 * Copy the reduction options with the specified LOD reduction settings.\n\x09 * @param StaticMesh - Mesh to process.\n\x09 * @param LodIndex - The LOD we get the reduction settings.\n\x09 * @param OutReductionOptions - The reduction settings where we copy the reduction options.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Copy the reduction options with the specified LOD reduction settings.\n@param StaticMesh - Mesh to process.\n@param LodIndex - The LOD we get the reduction settings.\n@param OutReductionOptions - The reduction settings where we copy the reduction options." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "GetLodReductionSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings_Statics::StaticMeshEditorSubsystem_eventGetLodReductionSettings_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodScreenSizes_Statics
	{
		struct StaticMeshEditorSubsystem_eventGetLodScreenSizes_Parms
		{
			UStaticMesh* StaticMesh;
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodScreenSizes_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetLodScreenSizes_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodScreenSizes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodScreenSizes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetLodScreenSizes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodScreenSizes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodScreenSizes_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodScreenSizes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodScreenSizes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodScreenSizes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Get an array of LOD screen sizes for evaluation.\n\x09 * @param\x09StaticMesh\x09\x09\x09Mesh to process.\n\x09 * @return array of LOD screen sizes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Get an array of LOD screen sizes for evaluation.\n@param       StaticMesh                      Mesh to process.\n@return array of LOD screen sizes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodScreenSizes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "GetLodScreenSizes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodScreenSizes_Statics::StaticMeshEditorSubsystem_eventGetLodScreenSizes_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodScreenSizes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodScreenSizes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodScreenSizes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodScreenSizes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodScreenSizes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodScreenSizes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNaniteSettings_Statics
	{
		struct StaticMeshEditorSubsystem_eventGetNaniteSettings_Parms
		{
			UStaticMesh* StaticMesh;
			FMeshNaniteSettings ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNaniteSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetNaniteSettings_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNaniteSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetNaniteSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FMeshNaniteSettings, METADATA_PARAMS(nullptr, 0) }; // 2370712239
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNaniteSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNaniteSettings_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNaniteSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNaniteSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09* Get the Nanite Settings for the mesh\n\x09* @param StaticMesh        Mesh to access\n\x09* @return FMeshNaniteSettings struct for the given static mesh\n\x09*/" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Get the Nanite Settings for the mesh\n@param StaticMesh        Mesh to access\n@return FMeshNaniteSettings struct for the given static mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNaniteSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "GetNaniteSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNaniteSettings_Statics::StaticMeshEditorSubsystem_eventGetNaniteSettings_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNaniteSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNaniteSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNaniteSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNaniteSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNaniteSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNaniteSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberMaterials_Statics
	{
		struct StaticMeshEditorSubsystem_eventGetNumberMaterials_Parms
		{
			UStaticMesh* StaticMesh;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberMaterials_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetNumberMaterials_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetNumberMaterials_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberMaterials_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberMaterials_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/** Get number of Materials for a StaticMesh */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Get number of Materials for a StaticMesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "GetNumberMaterials", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberMaterials_Statics::StaticMeshEditorSubsystem_eventGetNumberMaterials_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberVerts_Statics
	{
		struct StaticMeshEditorSubsystem_eventGetNumberVerts_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberVerts_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetNumberVerts_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberVerts_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetNumberVerts_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberVerts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetNumberVerts_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberVerts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberVerts_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberVerts_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberVerts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberVerts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/** Get number of StaticMesh verts for an LOD */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Get number of StaticMesh verts for an LOD" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberVerts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "GetNumberVerts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberVerts_Statics::StaticMeshEditorSubsystem_eventGetNumberVerts_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberVerts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberVerts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberVerts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberVerts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberVerts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberVerts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumUVChannels_Statics
	{
		struct StaticMeshEditorSubsystem_eventGetNumUVChannels_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumUVChannels_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetNumUVChannels_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumUVChannels_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetNumUVChannels_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumUVChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetNumUVChannels_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumUVChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumUVChannels_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumUVChannels_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumUVChannels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumUVChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Returns the number of UV channels for the given LOD of a StaticMesh.\n\x09 * @param\x09StaticMesh\x09\x09\x09Static mesh to query.\n\x09 * @param\x09LODIndex\x09\x09\x09Index of the StaticMesh LOD.\n\x09 * @return the number of UV channels.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Returns the number of UV channels for the given LOD of a StaticMesh.\n@param       StaticMesh                      Static mesh to query.\n@param       LODIndex                        Index of the StaticMesh LOD.\n@return the number of UV channels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumUVChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "GetNumUVChannels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumUVChannels_Statics::StaticMeshEditorSubsystem_eventGetNumUVChannels_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumUVChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumUVChannels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumUVChannels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumUVChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumUVChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumUVChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetSimpleCollisionCount_Statics
	{
		struct StaticMeshEditorSubsystem_eventGetSimpleCollisionCount_Parms
		{
			UStaticMesh* StaticMesh;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetSimpleCollisionCount_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetSimpleCollisionCount_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetSimpleCollisionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventGetSimpleCollisionCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetSimpleCollisionCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetSimpleCollisionCount_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetSimpleCollisionCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetSimpleCollisionCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Get number of simple collisions present on a static mesh.\n\x09 * @param\x09StaticMesh\x09\x09\x09\x09Mesh to query on.\n\x09 * @return An integer representing the number of simple collisions on the input static mesh.\n\x09 * An negative value indicates that the command could not be executed. See log for explanation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Get number of simple collisions present on a static mesh.\n@param       StaticMesh                              Mesh to query on.\n@return An integer representing the number of simple collisions on the input static mesh.\nAn negative value indicates that the command could not be executed. See log for explanation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetSimpleCollisionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "GetSimpleCollisionCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetSimpleCollisionCount_Statics::StaticMeshEditorSubsystem_eventGetSimpleCollisionCount_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetSimpleCollisionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetSimpleCollisionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetSimpleCollisionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetSimpleCollisionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetSimpleCollisionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetSimpleCollisionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasInstanceVertexColors_Statics
	{
		struct StaticMeshEditorSubsystem_eventHasInstanceVertexColors_Parms
		{
			UStaticMeshComponent* StaticMeshComponent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasInstanceVertexColors_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasInstanceVertexColors_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventHasInstanceVertexColors_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasInstanceVertexColors_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasInstanceVertexColors_Statics::NewProp_StaticMeshComponent_MetaData)) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasInstanceVertexColors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventHasInstanceVertexColors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasInstanceVertexColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventHasInstanceVertexColors_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasInstanceVertexColors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasInstanceVertexColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasInstanceVertexColors_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasInstanceVertexColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasInstanceVertexColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/** Check whether a static mesh component has vertex colors */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Check whether a static mesh component has vertex colors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasInstanceVertexColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "HasInstanceVertexColors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasInstanceVertexColors_Statics::StaticMeshEditorSubsystem_eventHasInstanceVertexColors_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasInstanceVertexColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasInstanceVertexColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasInstanceVertexColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasInstanceVertexColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasInstanceVertexColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasInstanceVertexColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasVertexColors_Statics
	{
		struct StaticMeshEditorSubsystem_eventHasVertexColors_Parms
		{
			UStaticMesh* StaticMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasVertexColors_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventHasVertexColors_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasVertexColors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventHasVertexColors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasVertexColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventHasVertexColors_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasVertexColors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasVertexColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasVertexColors_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasVertexColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasVertexColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/** Check whether a static mesh has vertex colors */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Check whether a static mesh has vertex colors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasVertexColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "HasVertexColors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasVertexColors_Statics::StaticMeshEditorSubsystem_eventHasVertexColors_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasVertexColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasVertexColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasVertexColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasVertexColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasVertexColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasVertexColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics
	{
		struct StaticMeshEditorSubsystem_eventImportLOD_Parms
		{
			UStaticMesh* BaseStaticMesh;
			int32 LODIndex;
			FString SourceFilename;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilename;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::NewProp_BaseStaticMesh = { "BaseStaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventImportLOD_Parms, BaseStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::NewProp_LODIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventImportLOD_Parms, LODIndex), METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::NewProp_SourceFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::NewProp_SourceFilename = { "SourceFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventImportLOD_Parms, SourceFilename), METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::NewProp_SourceFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::NewProp_SourceFilename_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventImportLOD_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::NewProp_BaseStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::NewProp_SourceFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "Comment", "/**\n\x09 * Import or re-import a LOD into the specified base mesh. If the LOD do not exist it will import it and add it to the base static mesh. If the LOD already exist it will re-import the specified LOD.\n\x09 *\n\x09 * @param BaseStaticMesh: The static mesh we import or re-import a LOD.\n\x09 * @param LODIndex: The index of the LOD to import or re-import. Valid value should be between 0 and the base static mesh LOD number. Invalid value will return INDEX_NONE\n\x09 * @param SourceFilename: The fbx source filename. If we are re-importing an existing LOD, it can be empty in this case it will use the last import file. Otherwise it must be an existing fbx file.\n\x09 *\n\x09 * @return the index of the LOD that was imported or re-imported. Will return INDEX_NONE if anything goes bad.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Import or re-import a LOD into the specified base mesh. If the LOD do not exist it will import it and add it to the base static mesh. If the LOD already exist it will re-import the specified LOD.\n\n@param BaseStaticMesh: The static mesh we import or re-import a LOD.\n@param LODIndex: The index of the LOD to import or re-import. Valid value should be between 0 and the base static mesh LOD number. Invalid value will return INDEX_NONE\n@param SourceFilename: The fbx source filename. If we are re-importing an existing LOD, it can be empty in this case it will use the last import file. Otherwise it must be an existing fbx file.\n\n@return the index of the LOD that was imported or re-imported. Will return INDEX_NONE if anything goes bad." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "ImportLOD", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::StaticMeshEditorSubsystem_eventImportLOD_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_InsertUVChannel_Statics
	{
		struct StaticMeshEditorSubsystem_eventInsertUVChannel_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 UVChannelIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_InsertUVChannel_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventInsertUVChannel_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_InsertUVChannel_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventInsertUVChannel_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_InsertUVChannel_Statics::NewProp_UVChannelIndex = { "UVChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventInsertUVChannel_Parms, UVChannelIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_InsertUVChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventInsertUVChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_InsertUVChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventInsertUVChannel_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_InsertUVChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_InsertUVChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_InsertUVChannel_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_InsertUVChannel_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_InsertUVChannel_Statics::NewProp_UVChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_InsertUVChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_InsertUVChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Inserts an empty UV channel at the specified channel index on the given LOD of a StaticMesh.\n\x09 * @param\x09StaticMesh\x09\x09\x09Static mesh on which to insert a UV channel.\n\x09 * @param\x09LODIndex\x09\x09\x09Index of the StaticMesh LOD.\n\x09 * @param\x09UVChannelIndex\x09\x09Index where to insert the UV channel.\n\x09 * @return true if a UV channel was added.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Inserts an empty UV channel at the specified channel index on the given LOD of a StaticMesh.\n@param       StaticMesh                      Static mesh on which to insert a UV channel.\n@param       LODIndex                        Index of the StaticMesh LOD.\n@param       UVChannelIndex          Index where to insert the UV channel.\n@return true if a UV channel was added." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_InsertUVChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "InsertUVChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_InsertUVChannel_Statics::StaticMeshEditorSubsystem_eventInsertUVChannel_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_InsertUVChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_InsertUVChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_InsertUVChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_InsertUVChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_InsertUVChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_InsertUVChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_IsSectionCollisionEnabled_Statics
	{
		struct StaticMeshEditorSubsystem_eventIsSectionCollisionEnabled_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 SectionIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_IsSectionCollisionEnabled_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventIsSectionCollisionEnabled_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_IsSectionCollisionEnabled_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventIsSectionCollisionEnabled_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_IsSectionCollisionEnabled_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventIsSectionCollisionEnabled_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_IsSectionCollisionEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventIsSectionCollisionEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_IsSectionCollisionEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventIsSectionCollisionEnabled_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_IsSectionCollisionEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_IsSectionCollisionEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_IsSectionCollisionEnabled_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_IsSectionCollisionEnabled_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_IsSectionCollisionEnabled_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_IsSectionCollisionEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_IsSectionCollisionEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Checks if a specific LOD mesh section has collision.\n\x09 * @param\x09StaticMesh\x09\x09\x09Static mesh to remove collisions from.\n\x09 * @param\x09LODIndex\x09\x09\x09Index of the StaticMesh LOD.\n\x09 * @param\x09SectionIndex\x09\x09Index of the StaticMesh Section.\n\x09 * @return True if the collision is enabled for the specified LOD of the StaticMesh section.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Checks if a specific LOD mesh section has collision.\n@param       StaticMesh                      Static mesh to remove collisions from.\n@param       LODIndex                        Index of the StaticMesh LOD.\n@param       SectionIndex            Index of the StaticMesh Section.\n@return True if the collision is enabled for the specified LOD of the StaticMesh section." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_IsSectionCollisionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "IsSectionCollisionEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_IsSectionCollisionEnabled_Statics::StaticMeshEditorSubsystem_eventIsSectionCollisionEnabled_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_IsSectionCollisionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_IsSectionCollisionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_IsSectionCollisionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_IsSectionCollisionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_IsSectionCollisionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_IsSectionCollisionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics
	{
		struct StaticMeshEditorSubsystem_eventJoinStaticMeshActors_Parms
		{
			TArray<AStaticMeshActor*> ActorsToJoin;
			FJoinStaticMeshActorsOptions JoinOptions;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToJoin_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToJoin_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToJoin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoinOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JoinOptions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::NewProp_ActorsToJoin_Inner = { "ActorsToJoin", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::NewProp_ActorsToJoin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::NewProp_ActorsToJoin = { "ActorsToJoin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventJoinStaticMeshActors_Parms, ActorsToJoin), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::NewProp_ActorsToJoin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::NewProp_ActorsToJoin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::NewProp_JoinOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::NewProp_JoinOptions = { "JoinOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventJoinStaticMeshActors_Parms, JoinOptions), Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::NewProp_JoinOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::NewProp_JoinOptions_MetaData)) }; // 2587761173
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventJoinStaticMeshActors_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::NewProp_ActorsToJoin_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::NewProp_ActorsToJoin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::NewProp_JoinOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep" },
		{ "Comment", "/**\n\x09 * Create a new Actor in the level that contains a duplicate of all the Actors Static Meshes Component.\n\x09 * The ActorsToJoin need to be in the same Level.\n\x09 * This will have a low impact on performance but may help the edition by grouping the meshes under a single Actor.\n\x09 * @param\x09""ActorsToJoin\x09\x09\x09List of Actors to join.\n\x09 * @param\x09JoinOptions\x09\x09\x09\x09Options on how to join the actors.\n\x09 * @return The new created actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Create a new Actor in the level that contains a duplicate of all the Actors Static Meshes Component.\nThe ActorsToJoin need to be in the same Level.\nThis will have a low impact on performance but may help the edition by grouping the meshes under a single Actor.\n@param       ActorsToJoin                    List of Actors to join.\n@param       JoinOptions                             Options on how to join the actors.\n@return The new created actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "JoinStaticMeshActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::StaticMeshEditorSubsystem_eventJoinStaticMeshActors_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics
	{
		struct StaticMeshEditorSubsystem_eventMergeStaticMeshActors_Parms
		{
			TArray<AStaticMeshActor*> ActorsToMerge;
			FMergeStaticMeshActorsOptions MergeOptions;
			AStaticMeshActor* OutMergedActor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToMerge_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToMerge_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToMerge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MergeOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MergeOptions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutMergedActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::NewProp_ActorsToMerge_Inner = { "ActorsToMerge", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::NewProp_ActorsToMerge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::NewProp_ActorsToMerge = { "ActorsToMerge", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventMergeStaticMeshActors_Parms, ActorsToMerge), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::NewProp_ActorsToMerge_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::NewProp_ActorsToMerge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::NewProp_MergeOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::NewProp_MergeOptions = { "MergeOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventMergeStaticMeshActors_Parms, MergeOptions), Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::NewProp_MergeOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::NewProp_MergeOptions_MetaData)) }; // 3823753245
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::NewProp_OutMergedActor = { "OutMergedActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventMergeStaticMeshActors_Parms, OutMergedActor), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventMergeStaticMeshActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventMergeStaticMeshActors_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::NewProp_ActorsToMerge_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::NewProp_ActorsToMerge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::NewProp_MergeOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::NewProp_OutMergedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep" },
		{ "Comment", "/**\n\x09 * Merge the meshes into a unique mesh with the provided StaticMeshActors. There are multiple options on how to merge the meshes and their materials.\n\x09 * The ActorsToMerge need to be in the same Level.\n\x09 * This may have a high impact on performance depending of the MeshMergingSettings options.\n\x09 * @param\x09""ActorsToMerge\x09\x09\x09List of Actors to merge.\n\x09 * @param\x09MergeOptions\x09\x09\x09Options on how to merge the actors.\n\x09 * @param\x09OutMergedActor\x09\x09\x09The new created actor, if requested.\n\x09 * @return\x09if the operation is successful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Merge the meshes into a unique mesh with the provided StaticMeshActors. There are multiple options on how to merge the meshes and their materials.\nThe ActorsToMerge need to be in the same Level.\nThis may have a high impact on performance depending of the MeshMergingSettings options.\n@param       ActorsToMerge                   List of Actors to merge.\n@param       MergeOptions                    Options on how to merge the actors.\n@param       OutMergedActor                  The new created actor, if requested.\n@return      if the operation is successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "MergeStaticMeshActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::StaticMeshEditorSubsystem_eventMergeStaticMeshActors_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReimportAllCustomLODs_Statics
	{
		struct StaticMeshEditorSubsystem_eventReimportAllCustomLODs_Parms
		{
			UStaticMesh* StaticMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReimportAllCustomLODs_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventReimportAllCustomLODs_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReimportAllCustomLODs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventReimportAllCustomLODs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReimportAllCustomLODs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventReimportAllCustomLODs_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReimportAllCustomLODs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReimportAllCustomLODs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReimportAllCustomLODs_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReimportAllCustomLODs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReimportAllCustomLODs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "Comment", "/**\n\x09 * Re-import all the custom LODs present in the specified static mesh.\n\x09 *\n\x09 * @param StaticMesh: is the static mesh we import or re-import all LODs.\n\x09 *\n\x09 * @return true if re-import all LODs works, false otherwise see log for explanation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Re-import all the custom LODs present in the specified static mesh.\n\n@param StaticMesh: is the static mesh we import or re-import all LODs.\n\n@return true if re-import all LODs works, false otherwise see log for explanation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReimportAllCustomLODs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "ReimportAllCustomLODs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReimportAllCustomLODs_Statics::StaticMeshEditorSubsystem_eventReimportAllCustomLODs_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReimportAllCustomLODs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReimportAllCustomLODs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReimportAllCustomLODs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReimportAllCustomLODs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReimportAllCustomLODs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReimportAllCustomLODs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisions_Statics
	{
		struct StaticMeshEditorSubsystem_eventRemoveCollisions_Parms
		{
			UStaticMesh* StaticMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisions_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventRemoveCollisions_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventRemoveCollisions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventRemoveCollisions_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisions_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Same as RemoveCollisionsWithNotification but changes are applied.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Same as RemoveCollisionsWithNotification but changes are applied." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "RemoveCollisions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisions_Statics::StaticMeshEditorSubsystem_eventRemoveCollisions_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisionsWithNotification_Statics
	{
		struct StaticMeshEditorSubsystem_eventRemoveCollisionsWithNotification_Parms
		{
			UStaticMesh* StaticMesh;
			bool bApplyChanges;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static void NewProp_bApplyChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyChanges;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisionsWithNotification_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventRemoveCollisionsWithNotification_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisionsWithNotification_Statics::NewProp_bApplyChanges_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventRemoveCollisionsWithNotification_Parms*)Obj)->bApplyChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisionsWithNotification_Statics::NewProp_bApplyChanges = { "bApplyChanges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventRemoveCollisionsWithNotification_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisionsWithNotification_Statics::NewProp_bApplyChanges_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisionsWithNotification_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventRemoveCollisionsWithNotification_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisionsWithNotification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventRemoveCollisionsWithNotification_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisionsWithNotification_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisionsWithNotification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisionsWithNotification_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisionsWithNotification_Statics::NewProp_bApplyChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisionsWithNotification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisionsWithNotification_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Remove collisions from a static mesh.\n\x09 * This method replicates what is done when invoking menu entries \"Collision > Remove Collision\" in the Mesh Editor.\n\x09 * @param\x09StaticMesh\x09\x09\x09Static mesh to remove collisions from.\n\x09 * @param\x09""bApplyChanges\x09\x09Indicates if changes must be apply or not.\n\x09 * @return A boolean indicating if the removal was successful or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Remove collisions from a static mesh.\nThis method replicates what is done when invoking menu entries \"Collision > Remove Collision\" in the Mesh Editor.\n@param       StaticMesh                      Static mesh to remove collisions from.\n@param       bApplyChanges           Indicates if changes must be apply or not.\n@return A boolean indicating if the removal was successful or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisionsWithNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "RemoveCollisionsWithNotification", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisionsWithNotification_Statics::StaticMeshEditorSubsystem_eventRemoveCollisionsWithNotification_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisionsWithNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisionsWithNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisionsWithNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisionsWithNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisionsWithNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisionsWithNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveLods_Statics
	{
		struct StaticMeshEditorSubsystem_eventRemoveLods_Parms
		{
			UStaticMesh* StaticMesh;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveLods_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventRemoveLods_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveLods_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventRemoveLods_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveLods_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventRemoveLods_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveLods_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveLods_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveLods_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveLods_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveLods_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Remove LODs on a static mesh except LOD 0.\n\x09 * @param\x09StaticMesh\x09\x09\x09Mesh to remove LOD from.\n\x09 * @return A boolean indicating if the removal was successful, true, or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Remove LODs on a static mesh except LOD 0.\n@param       StaticMesh                      Mesh to remove LOD from.\n@return A boolean indicating if the removal was successful, true, or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveLods_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "RemoveLods", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveLods_Statics::StaticMeshEditorSubsystem_eventRemoveLods_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveLods_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveLods_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveLods_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveLods_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveLods()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveLods_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveUVChannel_Statics
	{
		struct StaticMeshEditorSubsystem_eventRemoveUVChannel_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 UVChannelIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveUVChannel_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventRemoveUVChannel_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveUVChannel_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventRemoveUVChannel_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveUVChannel_Statics::NewProp_UVChannelIndex = { "UVChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventRemoveUVChannel_Parms, UVChannelIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveUVChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventRemoveUVChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveUVChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventRemoveUVChannel_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveUVChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveUVChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveUVChannel_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveUVChannel_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveUVChannel_Statics::NewProp_UVChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveUVChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveUVChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Removes the UV channel at the specified channel index on the given LOD of a StaticMesh.\n\x09 * @param\x09StaticMesh\x09\x09\x09Static mesh on which to remove the UV channel.\n\x09 * @param\x09LODIndex\x09\x09\x09Index of the StaticMesh LOD.\n\x09 * @param\x09UVChannelIndex\x09\x09Index where to remove the UV channel.\n\x09 * @return true if the UV channel was removed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Removes the UV channel at the specified channel index on the given LOD of a StaticMesh.\n@param       StaticMesh                      Static mesh on which to remove the UV channel.\n@param       LODIndex                        Index of the StaticMesh LOD.\n@param       UVChannelIndex          Index where to remove the UV channel.\n@return true if the UV channel was removed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveUVChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "RemoveUVChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveUVChannel_Statics::StaticMeshEditorSubsystem_eventRemoveUVChannel_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveUVChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveUVChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveUVChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveUVChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveUVChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveUVChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials_Statics
	{
		struct StaticMeshEditorSubsystem_eventReplaceMeshComponentsMaterials_Parms
		{
			TArray<UMeshComponent*> MeshComponents;
			UMaterialInterface* MaterialToBeReplaced;
			UMaterialInterface* NewMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshComponents;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialToBeReplaced;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials_Statics::NewProp_MeshComponents_Inner = { "MeshComponents", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials_Statics::NewProp_MeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials_Statics::NewProp_MeshComponents = { "MeshComponents", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventReplaceMeshComponentsMaterials_Parms, MeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials_Statics::NewProp_MeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials_Statics::NewProp_MeshComponents_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials_Statics::NewProp_MaterialToBeReplaced = { "MaterialToBeReplaced", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventReplaceMeshComponentsMaterials_Parms, MaterialToBeReplaced), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventReplaceMeshComponentsMaterials_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials_Statics::NewProp_MeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials_Statics::NewProp_MeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials_Statics::NewProp_MaterialToBeReplaced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials_Statics::NewProp_NewMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Find the references of the material MaterialToReplaced on all the MeshComponents provided and replace it by NewMaterial.\n\x09 * @param\x09MeshComponents\x09\x09\x09List of MeshComponent to search from.\n\x09 * @param\x09MaterialToBeReplaced\x09Material we want to replace.\n\x09 * @param\x09NewMaterial\x09\x09\x09\x09Material to replace MaterialToBeReplaced by.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Find the references of the material MaterialToReplaced on all the MeshComponents provided and replace it by NewMaterial.\n@param       MeshComponents                  List of MeshComponent to search from.\n@param       MaterialToBeReplaced    Material we want to replace.\n@param       NewMaterial                             Material to replace MaterialToBeReplaced by." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "ReplaceMeshComponentsMaterials", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials_Statics::StaticMeshEditorSubsystem_eventReplaceMeshComponentsMaterials_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors_Statics
	{
		struct StaticMeshEditorSubsystem_eventReplaceMeshComponentsMaterialsOnActors_Parms
		{
			TArray<AActor*> Actors;
			UMaterialInterface* MaterialToBeReplaced;
			UMaterialInterface* NewMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialToBeReplaced;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventReplaceMeshComponentsMaterialsOnActors_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_MaterialToBeReplaced = { "MaterialToBeReplaced", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventReplaceMeshComponentsMaterialsOnActors_Parms, MaterialToBeReplaced), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventReplaceMeshComponentsMaterialsOnActors_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_MaterialToBeReplaced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_NewMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Find the references of the material MaterialToReplaced on all the MeshComponents of all the Actors provided and replace it by NewMaterial.\n\x09 * @param\x09""Actors\x09\x09\x09\x09\x09List of Actors to search from.\n\x09 * @param\x09MaterialToBeReplaced\x09Material we want to replace.\n\x09 * @param\x09NewMaterial\x09\x09\x09\x09Material to replace MaterialToBeReplaced by.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Find the references of the material MaterialToReplaced on all the MeshComponents of all the Actors provided and replace it by NewMaterial.\n@param       Actors                                  List of Actors to search from.\n@param       MaterialToBeReplaced    Material we want to replace.\n@param       NewMaterial                             Material to replace MaterialToBeReplaced by." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "ReplaceMeshComponentsMaterialsOnActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors_Statics::StaticMeshEditorSubsystem_eventReplaceMeshComponentsMaterialsOnActors_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes_Statics
	{
		struct StaticMeshEditorSubsystem_eventReplaceMeshComponentsMeshes_Parms
		{
			TArray<UStaticMeshComponent*> MeshComponents;
			UStaticMesh* MeshToBeReplaced;
			UStaticMesh* NewMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshComponents;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshToBeReplaced;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshComponents_Inner = { "MeshComponents", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshComponents = { "MeshComponents", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventReplaceMeshComponentsMeshes_Parms, MeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshComponents_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshToBeReplaced = { "MeshToBeReplaced", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventReplaceMeshComponentsMeshes_Parms, MeshToBeReplaced), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventReplaceMeshComponentsMeshes_Parms, NewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshToBeReplaced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes_Statics::NewProp_NewMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Find the references of the mesh MeshToBeReplaced on all the MeshComponents provided and replace it by NewMesh.\n\x09 * The editor should not be in play in editor mode.\n\x09 * @param\x09MeshComponents\x09\x09\x09List of MeshComponent to search from.\n\x09 * @param\x09MeshToBeReplaced\x09\x09Mesh we want to replace.\n\x09 * @param\x09NewMesh\x09\x09\x09\x09\x09Mesh to replace MeshToBeReplaced by.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Find the references of the mesh MeshToBeReplaced on all the MeshComponents provided and replace it by NewMesh.\nThe editor should not be in play in editor mode.\n@param       MeshComponents                  List of MeshComponent to search from.\n@param       MeshToBeReplaced                Mesh we want to replace.\n@param       NewMesh                                 Mesh to replace MeshToBeReplaced by." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "ReplaceMeshComponentsMeshes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes_Statics::StaticMeshEditorSubsystem_eventReplaceMeshComponentsMeshes_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors_Statics
	{
		struct StaticMeshEditorSubsystem_eventReplaceMeshComponentsMeshesOnActors_Parms
		{
			TArray<AActor*> Actors;
			UStaticMesh* MeshToBeReplaced;
			UStaticMesh* NewMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshToBeReplaced;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventReplaceMeshComponentsMeshesOnActors_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_MeshToBeReplaced = { "MeshToBeReplaced", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventReplaceMeshComponentsMeshesOnActors_Parms, MeshToBeReplaced), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventReplaceMeshComponentsMeshesOnActors_Parms, NewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_MeshToBeReplaced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_NewMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Find the references of the mesh MeshToBeReplaced on all the MeshComponents of all the Actors provided and replace it by NewMesh.\n\x09 * @param\x09""Actors\x09\x09\x09\x09\x09List of Actors to search from.\n\x09 * @param\x09MeshToBeReplaced\x09\x09Mesh we want to replace.\n\x09 * @param\x09NewMesh\x09\x09\x09\x09\x09Mesh to replace MeshToBeReplaced by.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Find the references of the mesh MeshToBeReplaced on all the MeshComponents of all the Actors provided and replace it by NewMesh.\n@param       Actors                                  List of Actors to search from.\n@param       MeshToBeReplaced                Mesh we want to replace.\n@param       NewMesh                                 Mesh to replace MeshToBeReplaced by." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "ReplaceMeshComponentsMeshesOnActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors_Statics::StaticMeshEditorSubsystem_eventReplaceMeshComponentsMeshesOnActors_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetAllowCPUAccess_Statics
	{
		struct StaticMeshEditorSubsystem_eventSetAllowCPUAccess_Parms
		{
			UStaticMesh* StaticMesh;
			bool bAllowCPUAccess;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static void NewProp_bAllowCPUAccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCPUAccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetAllowCPUAccess_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetAllowCPUAccess_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetAllowCPUAccess_Statics::NewProp_bAllowCPUAccess_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventSetAllowCPUAccess_Parms*)Obj)->bAllowCPUAccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetAllowCPUAccess_Statics::NewProp_bAllowCPUAccess = { "bAllowCPUAccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventSetAllowCPUAccess_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetAllowCPUAccess_Statics::NewProp_bAllowCPUAccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetAllowCPUAccess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetAllowCPUAccess_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetAllowCPUAccess_Statics::NewProp_bAllowCPUAccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetAllowCPUAccess_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/** Sets StaticMeshFlag bAllowCPUAccess  */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Sets StaticMeshFlag bAllowCPUAccess" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetAllowCPUAccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "SetAllowCPUAccess", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetAllowCPUAccess_Statics::StaticMeshEditorSubsystem_eventSetAllowCPUAccess_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetAllowCPUAccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetAllowCPUAccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetAllowCPUAccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetAllowCPUAccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetAllowCPUAccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetAllowCPUAccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions_Statics
	{
		struct StaticMeshEditorSubsystem_eventSetConvexDecompositionCollisions_Parms
		{
			UStaticMesh* StaticMesh;
			int32 HullCount;
			int32 MaxHullVerts;
			int32 HullPrecision;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HullCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHullVerts;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HullPrecision;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetConvexDecompositionCollisions_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions_Statics::NewProp_HullCount = { "HullCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetConvexDecompositionCollisions_Parms, HullCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions_Statics::NewProp_MaxHullVerts = { "MaxHullVerts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetConvexDecompositionCollisions_Parms, MaxHullVerts), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions_Statics::NewProp_HullPrecision = { "HullPrecision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetConvexDecompositionCollisions_Parms, HullPrecision), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventSetConvexDecompositionCollisions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventSetConvexDecompositionCollisions_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions_Statics::NewProp_HullCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions_Statics::NewProp_MaxHullVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions_Statics::NewProp_HullPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Same as SetConvexDecompositionCollisionsWithNotification but changes are automatically applied.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Same as SetConvexDecompositionCollisionsWithNotification but changes are automatically applied." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "SetConvexDecompositionCollisions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions_Statics::StaticMeshEditorSubsystem_eventSetConvexDecompositionCollisions_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics
	{
		struct StaticMeshEditorSubsystem_eventSetConvexDecompositionCollisionsWithNotification_Parms
		{
			UStaticMesh* StaticMesh;
			int32 HullCount;
			int32 MaxHullVerts;
			int32 HullPrecision;
			bool bApplyChanges;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HullCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHullVerts;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HullPrecision;
		static void NewProp_bApplyChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyChanges;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetConvexDecompositionCollisionsWithNotification_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_HullCount = { "HullCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetConvexDecompositionCollisionsWithNotification_Parms, HullCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_MaxHullVerts = { "MaxHullVerts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetConvexDecompositionCollisionsWithNotification_Parms, MaxHullVerts), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_HullPrecision = { "HullPrecision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetConvexDecompositionCollisionsWithNotification_Parms, HullPrecision), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_bApplyChanges_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventSetConvexDecompositionCollisionsWithNotification_Parms*)Obj)->bApplyChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_bApplyChanges = { "bApplyChanges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventSetConvexDecompositionCollisionsWithNotification_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_bApplyChanges_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventSetConvexDecompositionCollisionsWithNotification_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventSetConvexDecompositionCollisionsWithNotification_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_HullCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_MaxHullVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_HullPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_bApplyChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Add a convex collision to a static mesh.\n\x09 * Any existing collisions will be removed from the static mesh.\n\x09 * This method replicates what is done when invoking menu entry \"Collision > Auto Convex Collision\" in the Mesh Editor.\n\x09 * @param\x09StaticMesh\x09\x09\x09\x09Static mesh to add convex collision on.\n\x09 * @param\x09HullCount\x09\x09\x09\x09Maximum number of convex pieces that will be created. Must be positive.\n\x09 * @param\x09MaxHullVerts\x09\x09\x09Maximum number of vertices allowed for any generated convex hull.\n\x09 * @param\x09HullPrecision\x09\x09\x09Number of voxels to use when generating collision. Must be positive.\n\x09 * @param\x09""bApplyChanges\x09\x09\x09Indicates if changes must be apply or not.\n\x09 * @return A boolean indicating if the addition was successful or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Add a convex collision to a static mesh.\nAny existing collisions will be removed from the static mesh.\nThis method replicates what is done when invoking menu entry \"Collision > Auto Convex Collision\" in the Mesh Editor.\n@param       StaticMesh                              Static mesh to add convex collision on.\n@param       HullCount                               Maximum number of convex pieces that will be created. Must be positive.\n@param       MaxHullVerts                    Maximum number of vertices allowed for any generated convex hull.\n@param       HullPrecision                   Number of voxels to use when generating collision. Must be positive.\n@param       bApplyChanges                   Indicates if changes must be apply or not.\n@return A boolean indicating if the addition was successful or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "SetConvexDecompositionCollisionsWithNotification", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::StaticMeshEditorSubsystem_eventSetConvexDecompositionCollisionsWithNotification_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetGenerateLightmapUVs_Statics
	{
		struct StaticMeshEditorSubsystem_eventSetGenerateLightmapUVs_Parms
		{
			UStaticMesh* StaticMesh;
			bool bGenerateLightmapUVs;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetGenerateLightmapUVs_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetGenerateLightmapUVs_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetGenerateLightmapUVs_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventSetGenerateLightmapUVs_Parms*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetGenerateLightmapUVs_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventSetGenerateLightmapUVs_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetGenerateLightmapUVs_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetGenerateLightmapUVs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventSetGenerateLightmapUVs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetGenerateLightmapUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventSetGenerateLightmapUVs_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetGenerateLightmapUVs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetGenerateLightmapUVs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetGenerateLightmapUVs_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetGenerateLightmapUVs_Statics::NewProp_bGenerateLightmapUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetGenerateLightmapUVs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetGenerateLightmapUVs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/** Set Generate Lightmap UVs for StaticMesh */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ScriptName", "SetGenerateLightmapUv" },
		{ "ToolTip", "Set Generate Lightmap UVs for StaticMesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetGenerateLightmapUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "SetGenerateLightmapUVs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetGenerateLightmapUVs_Statics::StaticMeshEditorSubsystem_eventSetGenerateLightmapUVs_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetGenerateLightmapUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetGenerateLightmapUVs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetGenerateLightmapUVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetGenerateLightmapUVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetGenerateLightmapUVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetGenerateLightmapUVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings_Statics
	{
		struct StaticMeshEditorSubsystem_eventSetLodBuildSettings_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LodIndex;
			FMeshBuildSettings BuildOptions;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuildOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLodBuildSettings_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_LodIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLodBuildSettings_Parms, LodIndex), METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_LodIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_LodIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_BuildOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_BuildOptions = { "BuildOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLodBuildSettings_Parms, BuildOptions), Z_Construct_UScriptStruct_FMeshBuildSettings, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_BuildOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_BuildOptions_MetaData)) }; // 3244455572
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings_Statics::NewProp_BuildOptions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "Comment", "/**\n\x09 * Set the LOD build options for the specified LOD index.\n\x09 * @param StaticMesh - Mesh to process.\n\x09 * @param LodIndex - The LOD we will apply the build settings.\n\x09 * @param BuildOptions - The build settings we want to apply to the LOD.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Set the LOD build options for the specified LOD index.\n@param StaticMesh - Mesh to process.\n@param LodIndex - The LOD we will apply the build settings.\n@param BuildOptions - The build settings we want to apply to the LOD." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "SetLodBuildSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings_Statics::StaticMeshEditorSubsystem_eventSetLodBuildSettings_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics
	{
		struct StaticMeshEditorSubsystem_eventSetLodFromStaticMesh_Parms
		{
			UStaticMesh* DestinationStaticMesh;
			int32 DestinationLodIndex;
			UStaticMesh* SourceStaticMesh;
			int32 SourceLodIndex;
			bool bReuseExistingMaterialSlots;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DestinationStaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DestinationLodIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceStaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceLodIndex;
		static void NewProp_bReuseExistingMaterialSlots_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReuseExistingMaterialSlots;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::NewProp_DestinationStaticMesh = { "DestinationStaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLodFromStaticMesh_Parms, DestinationStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::NewProp_DestinationLodIndex = { "DestinationLodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLodFromStaticMesh_Parms, DestinationLodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::NewProp_SourceStaticMesh = { "SourceStaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLodFromStaticMesh_Parms, SourceStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::NewProp_SourceLodIndex = { "SourceLodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLodFromStaticMesh_Parms, SourceLodIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::NewProp_bReuseExistingMaterialSlots_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventSetLodFromStaticMesh_Parms*)Obj)->bReuseExistingMaterialSlots = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::NewProp_bReuseExistingMaterialSlots = { "bReuseExistingMaterialSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventSetLodFromStaticMesh_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::NewProp_bReuseExistingMaterialSlots_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLodFromStaticMesh_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::NewProp_DestinationStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::NewProp_DestinationLodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::NewProp_SourceStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::NewProp_SourceLodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::NewProp_bReuseExistingMaterialSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Adds or create a LOD at DestinationLodIndex using the geometry from SourceStaticMesh SourceLodIndex\n\x09 * @param\x09""DestinationStaticMesh\x09\x09The static mesh to set the LOD in.\n\x09 * @param\x09""DestinationLodIndex\x09\x09\x09The index of the LOD to set.\n\x09 * @param\x09SourceStaticMesh\x09\x09\x09The static mesh to get the LOD from.\n\x09 * @param\x09SourceLodIndex\x09\x09\x09\x09The index of the LOD to get.\n\x09 * @param\x09""bReuseExistingMaterialSlots\x09If true, sections from SourceStaticMesh will be remapped to match the material slots of DestinationStaticMesh\n\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09when they have the same material assigned. If false, all material slots of SourceStaticMesh will be appended in DestinationStaticMesh.\n\x09 * @return\x09The index of the LOD that was set. It can be different than DestinationLodIndex if it wasn't a valid index.\n\x09 *\x09\x09\x09""A negative value indicates that the LOD was not set. See log for explanation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Adds or create a LOD at DestinationLodIndex using the geometry from SourceStaticMesh SourceLodIndex\n@param       DestinationStaticMesh           The static mesh to set the LOD in.\n@param       DestinationLodIndex                     The index of the LOD to set.\n@param       SourceStaticMesh                        The static mesh to get the LOD from.\n@param       SourceLodIndex                          The index of the LOD to get.\n@param       bReuseExistingMaterialSlots     If true, sections from SourceStaticMesh will be remapped to match the material slots of DestinationStaticMesh\n                                                                                       when they have the same material assigned. If false, all material slots of SourceStaticMesh will be appended in DestinationStaticMesh.\n@return      The index of the LOD that was set. It can be different than DestinationLodIndex if it wasn't a valid index.\n                     A negative value indicates that the LOD was not set. See log for explanation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "SetLodFromStaticMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::StaticMeshEditorSubsystem_eventSetLodFromStaticMesh_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup_Statics
	{
		struct StaticMeshEditorSubsystem_eventSetLODGroup_Parms
		{
			UStaticMesh* StaticMesh;
			FName LODGroup;
			bool bRebuildImmediately;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LODGroup;
		static void NewProp_bRebuildImmediately_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuildImmediately;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLODGroup_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup_Statics::NewProp_LODGroup = { "LODGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLODGroup_Parms, LODGroup), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup_Statics::NewProp_bRebuildImmediately_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventSetLODGroup_Parms*)Obj)->bRebuildImmediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup_Statics::NewProp_bRebuildImmediately = { "bRebuildImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventSetLODGroup_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup_Statics::NewProp_bRebuildImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventSetLODGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventSetLODGroup_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup_Statics::NewProp_LODGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup_Statics::NewProp_bRebuildImmediately,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "Comment", "/**\n\x09 * Set the LODGroup for the specified static mesh\n\x09 * @param StaticMesh - Mesh to process.\n\x09 * @param LODGroup - Name of the LODGroup to apply\n\x09 * @param bRebuildImmediately - If true, rebuild the static mesh immediately\n\x09 * @return Success\n\x09 */" },
		{ "CPP_Default_bRebuildImmediately", "true" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Set the LODGroup for the specified static mesh\n@param StaticMesh - Mesh to process.\n@param LODGroup - Name of the LODGroup to apply\n@param bRebuildImmediately - If true, rebuild the static mesh immediately\n@return Success" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "SetLODGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup_Statics::StaticMeshEditorSubsystem_eventSetLODGroup_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODMaterialSlot_Statics
	{
		struct StaticMeshEditorSubsystem_eventSetLODMaterialSlot_Parms
		{
			UStaticMesh* StaticMesh;
			int32 MaterialSlotIndex;
			int32 LODIndex;
			int32 SectionIndex;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialSlotIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODMaterialSlot_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLODMaterialSlot_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODMaterialSlot_Statics::NewProp_MaterialSlotIndex = { "MaterialSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLODMaterialSlot_Parms, MaterialSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODMaterialSlot_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLODMaterialSlot_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODMaterialSlot_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLODMaterialSlot_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODMaterialSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODMaterialSlot_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODMaterialSlot_Statics::NewProp_MaterialSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODMaterialSlot_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODMaterialSlot_Statics::NewProp_SectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODMaterialSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09* Sets the material slot for a specific LOD.\n\x09* @param\x09StaticMesh\x09\x09\x09Static mesh to Enables/disables shadow casting from.\n\x09* @param\x09MaterialSlotIndex\x09Index of the material slot to use.\n\x09* @param\x09LODIndex\x09\x09\x09Index of the StaticMesh LOD.\n\x09* @param\x09SectionIndex\x09\x09Index of the StaticMesh Section.\n\x09*/" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Sets the material slot for a specific LOD.\n@param        StaticMesh                      Static mesh to Enables/disables shadow casting from.\n@param        MaterialSlotIndex       Index of the material slot to use.\n@param        LODIndex                        Index of the StaticMesh LOD.\n@param        SectionIndex            Index of the StaticMesh Section." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODMaterialSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "SetLODMaterialSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODMaterialSlot_Statics::StaticMeshEditorSubsystem_eventSetLODMaterialSlot_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODMaterialSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODMaterialSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODMaterialSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODMaterialSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODMaterialSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODMaterialSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings_Statics
	{
		struct StaticMeshEditorSubsystem_eventSetLodReductionSettings_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LodIndex;
			FMeshReductionSettings ReductionOptions;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReductionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReductionOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLodReductionSettings_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings_Statics::NewProp_LodIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLodReductionSettings_Parms, LodIndex), METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings_Statics::NewProp_LodIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings_Statics::NewProp_LodIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings_Statics::NewProp_ReductionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings_Statics::NewProp_ReductionOptions = { "ReductionOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLodReductionSettings_Parms, ReductionOptions), Z_Construct_UScriptStruct_FMeshReductionSettings, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings_Statics::NewProp_ReductionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings_Statics::NewProp_ReductionOptions_MetaData)) }; // 1559220690
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings_Statics::NewProp_ReductionOptions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | StaticMesh" },
		{ "Comment", "/**\n\x09 * Set the LOD reduction for the specified LOD index.\n\x09 * @param StaticMesh - Mesh to process.\n\x09 * @param LodIndex - The LOD we will apply the reduction settings.\n\x09 * @param ReductionOptions - The reduction settings we want to apply to the LOD.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Set the LOD reduction for the specified LOD index.\n@param StaticMesh - Mesh to process.\n@param LodIndex - The LOD we will apply the reduction settings.\n@param ReductionOptions - The reduction settings we want to apply to the LOD." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "SetLodReductionSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings_Statics::StaticMeshEditorSubsystem_eventSetLodReductionSettings_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLods_Statics
	{
		struct StaticMeshEditorSubsystem_eventSetLods_Parms
		{
			UStaticMesh* StaticMesh;
			FStaticMeshReductionOptions ReductionOptions;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReductionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReductionOptions;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLods_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLods_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLods_Statics::NewProp_ReductionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLods_Statics::NewProp_ReductionOptions = { "ReductionOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLods_Parms, ReductionOptions), Z_Construct_UScriptStruct_FStaticMeshReductionOptions, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLods_Statics::NewProp_ReductionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLods_Statics::NewProp_ReductionOptions_MetaData)) }; // 318483350
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLods_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLods_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLods_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLods_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLods_Statics::NewProp_ReductionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLods_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLods_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Same as SetLodsWithNotification but changes are applied.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Same as SetLodsWithNotification but changes are applied." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLods_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "SetLods", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLods_Statics::StaticMeshEditorSubsystem_eventSetLods_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLods_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLods_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLods_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLods_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLods()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLods_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics
	{
		struct StaticMeshEditorSubsystem_eventSetLodScreenSizes_Parms
		{
			UStaticMesh* StaticMesh;
			TArray<float> ScreenSizes;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSizes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSizes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScreenSizes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLodScreenSizes_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics::NewProp_ScreenSizes_Inner = { "ScreenSizes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics::NewProp_ScreenSizes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics::NewProp_ScreenSizes = { "ScreenSizes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLodScreenSizes_Parms, ScreenSizes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics::NewProp_ScreenSizes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics::NewProp_ScreenSizes_MetaData)) };
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventSetLodScreenSizes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventSetLodScreenSizes_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics::NewProp_ScreenSizes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics::NewProp_ScreenSizes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Set LOD screen sizes.\n\x09 * @param\x09StaticMesh\x09\x09\x09Mesh to process.\n\x09 * @param\x09ScreenSizes\x09\x09\x09""Array of LOD screen sizes to set.\n\x09 * @return A boolean indicating if setting the screen sizes was successful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Set LOD screen sizes.\n@param       StaticMesh                      Mesh to process.\n@param       ScreenSizes                     Array of LOD screen sizes to set.\n@return A boolean indicating if setting the screen sizes was successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "SetLodScreenSizes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics::StaticMeshEditorSubsystem_eventSetLodScreenSizes_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics
	{
		struct StaticMeshEditorSubsystem_eventSetLodsWithNotification_Parms
		{
			UStaticMesh* StaticMesh;
			FStaticMeshReductionOptions ReductionOptions;
			bool bApplyChanges;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReductionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReductionOptions;
		static void NewProp_bApplyChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyChanges;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLodsWithNotification_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics::NewProp_ReductionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics::NewProp_ReductionOptions = { "ReductionOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLodsWithNotification_Parms, ReductionOptions), Z_Construct_UScriptStruct_FStaticMeshReductionOptions, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics::NewProp_ReductionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics::NewProp_ReductionOptions_MetaData)) }; // 318483350
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics::NewProp_bApplyChanges_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventSetLodsWithNotification_Parms*)Obj)->bApplyChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics::NewProp_bApplyChanges = { "bApplyChanges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventSetLodsWithNotification_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics::NewProp_bApplyChanges_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetLodsWithNotification_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics::NewProp_ReductionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics::NewProp_bApplyChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09 * Remove then add LODs on a static mesh.\n\x09 * The static mesh must have at least LOD 0.\n\x09 * The LOD 0 of the static mesh is kept after removal.\n\x09 * The build settings of LOD 0 will be applied to all subsequent LODs.\n\x09 * @param\x09StaticMesh\x09\x09\x09\x09Mesh to process.\n\x09 * @param\x09ReductionOptions\x09\x09Options on how to generate LODs on the mesh.\n\x09 * @param\x09""bApplyChanges\x09\x09\x09\x09Indicates if change must be notified.\n\x09 * @return the number of LODs generated on the input mesh.\n\x09 * An negative value indicates that the reduction could not be performed. See log for explanation.\n\x09 * No action will be performed if ReductionOptions.ReductionSettings is empty\n\x09 */" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Remove then add LODs on a static mesh.\nThe static mesh must have at least LOD 0.\nThe LOD 0 of the static mesh is kept after removal.\nThe build settings of LOD 0 will be applied to all subsequent LODs.\n@param       StaticMesh                              Mesh to process.\n@param       ReductionOptions                Options on how to generate LODs on the mesh.\n@param       bApplyChanges                           Indicates if change must be notified.\n@return the number of LODs generated on the input mesh.\nAn negative value indicates that the reduction could not be performed. See log for explanation.\nNo action will be performed if ReductionOptions.ReductionSettings is empty" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "SetLodsWithNotification", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics::StaticMeshEditorSubsystem_eventSetLodsWithNotification_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetNaniteSettings_Statics
	{
		struct StaticMeshEditorSubsystem_eventSetNaniteSettings_Parms
		{
			UStaticMesh* StaticMesh;
			FMeshNaniteSettings NaniteSettings;
			bool bApplyChanges;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NaniteSettings;
		static void NewProp_bApplyChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyChanges;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetNaniteSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetNaniteSettings_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetNaniteSettings_Statics::NewProp_NaniteSettings = { "NaniteSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshEditorSubsystem_eventSetNaniteSettings_Parms, NaniteSettings), Z_Construct_UScriptStruct_FMeshNaniteSettings, METADATA_PARAMS(nullptr, 0) }; // 2370712239
	void Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetNaniteSettings_Statics::NewProp_bApplyChanges_SetBit(void* Obj)
	{
		((StaticMeshEditorSubsystem_eventSetNaniteSettings_Parms*)Obj)->bApplyChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetNaniteSettings_Statics::NewProp_bApplyChanges = { "bApplyChanges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshEditorSubsystem_eventSetNaniteSettings_Parms), &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetNaniteSettings_Statics::NewProp_bApplyChanges_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetNaniteSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetNaniteSettings_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetNaniteSettings_Statics::NewProp_NaniteSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetNaniteSettings_Statics::NewProp_bApplyChanges,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetNaniteSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Static Mesh Utilities" },
		{ "Comment", "/**\n\x09* Get the Nanite Settings for the mesh\n\x09* @param StaticMesh        Mesh to update nanite settings for\n\x09* @param NaniteSettings    Settings with which to update the mesh\n\x09* @param bApplyChanges     Indicates if changes must be applied or not.\n\x09*/" },
		{ "CPP_Default_bApplyChanges", "true" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "Get the Nanite Settings for the mesh\n@param StaticMesh        Mesh to update nanite settings for\n@param NaniteSettings    Settings with which to update the mesh\n@param bApplyChanges     Indicates if changes must be applied or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetNaniteSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshEditorSubsystem, nullptr, "SetNaniteSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetNaniteSettings_Statics::StaticMeshEditorSubsystem_eventSetNaniteSettings_Parms), Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetNaniteSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetNaniteSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetNaniteSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetNaniteSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetNaniteSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetNaniteSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticMeshEditorSubsystem);
	UClass* Z_Construct_UClass_UStaticMeshEditorSubsystem_NoRegister()
	{
		return UStaticMeshEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_StaticMeshEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStaticMeshEditorSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisions, "AddSimpleCollisions" }, // 26662482
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddSimpleCollisionsWithNotification, "AddSimpleCollisionsWithNotification" }, // 3147926530
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_AddUVChannel, "AddUVChannel" }, // 271834206
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisions, "BulkSetConvexDecompositionCollisions" }, // 1966405496
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_BulkSetConvexDecompositionCollisionsWithNotification, "BulkSetConvexDecompositionCollisionsWithNotification" }, // 756035852
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_CreateProxyMeshActor, "CreateProxyMeshActor" }, // 433764024
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCastShadow, "EnableSectionCastShadow" }, // 3990017808
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_EnableSectionCollision, "EnableSectionCollision" }, // 3389874944
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateBoxUVChannel, "GenerateBoxUVChannel" }, // 2992102482
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_GenerateCylindricalUVChannel, "GenerateCylindricalUVChannel" }, // 220588334
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_GeneratePlanarUVChannel, "GeneratePlanarUVChannel" }, // 2269502042
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetCollisionComplexity, "GetCollisionComplexity" }, // 1472079876
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetConvexCollisionCount, "GetConvexCollisionCount" }, // 1102765225
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodBuildSettings, "GetLodBuildSettings" }, // 874658348
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodCount, "GetLodCount" }, // 321971673
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODGroup, "GetLODGroup" }, // 1411587578
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLODMaterialSlot, "GetLODMaterialSlot" }, // 3531078696
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodReductionSettings, "GetLodReductionSettings" }, // 2365061658
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetLodScreenSizes, "GetLodScreenSizes" }, // 137914622
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNaniteSettings, "GetNaniteSettings" }, // 4188310692
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberMaterials, "GetNumberMaterials" }, // 3852252917
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumberVerts, "GetNumberVerts" }, // 50200165
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetNumUVChannels, "GetNumUVChannels" }, // 2107669128
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_GetSimpleCollisionCount, "GetSimpleCollisionCount" }, // 306425291
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasInstanceVertexColors, "HasInstanceVertexColors" }, // 3745790282
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_HasVertexColors, "HasVertexColors" }, // 4262070546
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_ImportLOD, "ImportLOD" }, // 657563559
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_InsertUVChannel, "InsertUVChannel" }, // 1931662100
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_IsSectionCollisionEnabled, "IsSectionCollisionEnabled" }, // 873853556
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_JoinStaticMeshActors, "JoinStaticMeshActors" }, // 2726899505
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_MergeStaticMeshActors, "MergeStaticMeshActors" }, // 1236224775
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReimportAllCustomLODs, "ReimportAllCustomLODs" }, // 1072467500
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisions, "RemoveCollisions" }, // 97184343
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveCollisionsWithNotification, "RemoveCollisionsWithNotification" }, // 4127740162
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveLods, "RemoveLods" }, // 1808700468
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_RemoveUVChannel, "RemoveUVChannel" }, // 524976604
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterials, "ReplaceMeshComponentsMaterials" }, // 3847284661
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMaterialsOnActors, "ReplaceMeshComponentsMaterialsOnActors" }, // 2441810858
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshes, "ReplaceMeshComponentsMeshes" }, // 917408129
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_ReplaceMeshComponentsMeshesOnActors, "ReplaceMeshComponentsMeshesOnActors" }, // 1775261960
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetAllowCPUAccess, "SetAllowCPUAccess" }, // 3584907123
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisions, "SetConvexDecompositionCollisions" }, // 607372746
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetConvexDecompositionCollisionsWithNotification, "SetConvexDecompositionCollisionsWithNotification" }, // 3189766043
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetGenerateLightmapUVs, "SetGenerateLightmapUVs" }, // 2823680218
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodBuildSettings, "SetLodBuildSettings" }, // 911878169
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodFromStaticMesh, "SetLodFromStaticMesh" }, // 1097832670
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODGroup, "SetLODGroup" }, // 3505514792
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLODMaterialSlot, "SetLODMaterialSlot" }, // 2188940524
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodReductionSettings, "SetLodReductionSettings" }, // 3940524709
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLods, "SetLods" }, // 1720939373
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodScreenSizes, "SetLodScreenSizes" }, // 3956930172
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetLodsWithNotification, "SetLodsWithNotification" }, // 1980577390
		{ &Z_Construct_UFunction_UStaticMeshEditorSubsystem_SetNaniteSettings, "SetNaniteSettings" }, // 3224634808
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* UStaticMeshEditorSubsystem\n* Subsystem for exposing static mesh functionality to scripts\n*/" },
		{ "IncludePath", "StaticMeshEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/StaticMeshEditorSubsystem.h" },
		{ "ToolTip", "UStaticMeshEditorSubsystem\nSubsystem for exposing static mesh functionality to scripts" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshEditorSubsystem_Statics::ClassParams = {
		&UStaticMeshEditorSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UStaticMeshEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMeshEditorSubsystem.OuterSingleton, Z_Construct_UClass_UStaticMeshEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaticMeshEditorSubsystem.OuterSingleton;
	}
	template<> STATICMESHEDITOR_API UClass* StaticClass<UStaticMeshEditorSubsystem>()
	{
		return UStaticMeshEditorSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshEditorSubsystem);
	UStaticMeshEditorSubsystem::~UStaticMeshEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStaticMeshEditorSubsystem, UStaticMeshEditorSubsystem::StaticClass, TEXT("UStaticMeshEditorSubsystem"), &Z_Registration_Info_UClass_UStaticMeshEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMeshEditorSubsystem), 749228069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystem_h_4202114400(TEXT("/Script/StaticMeshEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_StaticMeshEditor_Public_StaticMeshEditorSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
