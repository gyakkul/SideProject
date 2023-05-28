// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeSplineControlPoint.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "LandscapeSplinesComponent.h"
#include "LandscapeSplineSegment.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeSplineControlPoint() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERendererStencilMask();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	LANDSCAPE_API UClass* Z_Construct_UClass_UControlPointMeshComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineControlPoint();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineSegment_NoRegister();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineConnection();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeSplineConnection;
class UScriptStruct* FLandscapeSplineConnection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeSplineConnection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeSplineConnection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeSplineConnection, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeSplineConnection"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeSplineConnection.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeSplineConnection>()
{
	return FLandscapeSplineConnection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Segment_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Segment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static void NewProp_End_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_End;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeSplineConnection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics::NewProp_Segment_MetaData[] = {
		{ "Comment", "// Segment connected to this control point\n" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Segment connected to this control point" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics::NewProp_Segment = { "Segment", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeSplineConnection, Segment), Z_Construct_UClass_ULandscapeSplineSegment_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics::NewProp_Segment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics::NewProp_Segment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics::NewProp_End_MetaData[] = {
		{ "Comment", "// Which end of the segment is connected to this control point\n" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Which end of the segment is connected to this control point" },
	};
#endif
	void Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics::NewProp_End_SetBit(void* Obj)
	{
		((FLandscapeSplineConnection*)Obj)->End = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FLandscapeSplineConnection), &Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics::NewProp_End_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics::NewProp_End_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics::NewProp_Segment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics::NewProp_End,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeSplineConnection",
		sizeof(FLandscapeSplineConnection),
		alignof(FLandscapeSplineConnection),
		Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeSplineConnection()
	{
		if (!Z_Registration_Info_UScriptStruct_LandscapeSplineConnection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeSplineConnection.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandscapeSplineConnection.InnerSingleton;
	}
	void ULandscapeSplineControlPoint::StaticRegisterNativesULandscapeSplineControlPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeSplineControlPoint);
	UClass* Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister()
	{
		return ULandscapeSplineControlPoint::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeSplineControlPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerWidthRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LayerWidthRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SideFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SideFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftSideFalloffFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftSideFalloffFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightSideFalloffFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightSideFalloffFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftSideLayerFalloffFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftSideLayerFalloffFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightSideLayerFalloffFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightSideLayerFalloffFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndFalloff;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentMeshOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentMeshOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRaiseTerrain_MetaData[];
#endif
		static void NewProp_bRaiseTerrain_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRaiseTerrain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLowerTerrain_MetaData[];
#endif
		static void NewProp_bLowerTerrain_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLowerTerrain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialOverrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionProfileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[];
#endif
		static void NewProp_bCastShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHiddenInGame_MetaData[];
#endif
		static void NewProp_bHiddenInGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHiddenInGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlaceSplineMeshesInStreamingLevels_MetaData[];
#endif
		static void NewProp_bPlaceSplineMeshesInStreamingLevels_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaceSplineMeshesInStreamingLevels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LDMaxDrawDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LDMaxDrawDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencySortPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TranslucencySortPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderCustomDepth_MetaData[];
#endif
		static void NewProp_bRenderCustomDepth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderCustomDepth;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CustomDepthStencilWriteMask_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilWriteMask_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CustomDepthStencilWriteMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CustomDepthStencilValue;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RuntimeVirtualTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeVirtualTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeVirtualTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureLodBias_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualTextureLodBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureCullMips_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualTextureCullMips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureMainPassMaxDrawDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VirtualTextureMainPassMaxDrawDistance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VirtualTextureRenderPassType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureRenderPassType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VirtualTextureRenderPassType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[];
#endif
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNavDirty_MetaData[];
#endif
		static void NewProp_bNavDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavDirty;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectedSegments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedSegments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectedSegments;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LocalMeshComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForeignWorld_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ForeignWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModificationKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModificationKey;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "LandscapeSplineControlPoint" },
		{ "IncludePath", "LandscapeSplineControlPoint.h" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "LandscapeSpline" },
		{ "Comment", "/** Location in Landscape-space */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Location in Landscape-space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "LandscapeSpline" },
		{ "Comment", "/** Rotation of tangent vector at this point (in landscape-space) */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Rotation of tangent vector at this point (in landscape-space)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "LandscapeSpline" },
		{ "Comment", "/** Half-Width of the spline at this point. */" },
		{ "DisplayName", "Half-Width" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Half-Width of the spline at this point." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, Width), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LayerWidthRatio_MetaData[] = {
		{ "Category", "LandscapeSpline" },
		{ "Comment", "/** Layer Width ratio of the spline at this point. */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Layer Width ratio of the spline at this point." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LayerWidthRatio = { "LayerWidthRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, LayerWidthRatio), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LayerWidthRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LayerWidthRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_SideFalloff_MetaData[] = {
		{ "Category", "LandscapeSpline" },
		{ "Comment", "/** Falloff at the sides of the spline at this point. */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Falloff at the sides of the spline at this point." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_SideFalloff = { "SideFalloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, SideFalloff), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_SideFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_SideFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LeftSideFalloffFactor_MetaData[] = {
		{ "Category", "LandscapeSpline" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LeftSideFalloffFactor = { "LeftSideFalloffFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, LeftSideFalloffFactor), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LeftSideFalloffFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LeftSideFalloffFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_RightSideFalloffFactor_MetaData[] = {
		{ "Category", "LandscapeSpline" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_RightSideFalloffFactor = { "RightSideFalloffFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, RightSideFalloffFactor), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_RightSideFalloffFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_RightSideFalloffFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LeftSideLayerFalloffFactor_MetaData[] = {
		{ "Category", "LandscapeSpline" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LeftSideLayerFalloffFactor = { "LeftSideLayerFalloffFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, LeftSideLayerFalloffFactor), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LeftSideLayerFalloffFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LeftSideLayerFalloffFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_RightSideLayerFalloffFactor_MetaData[] = {
		{ "Category", "LandscapeSpline" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_RightSideLayerFalloffFactor = { "RightSideLayerFalloffFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, RightSideLayerFalloffFactor), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_RightSideLayerFalloffFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_RightSideLayerFalloffFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_EndFalloff_MetaData[] = {
		{ "Category", "LandscapeSpline" },
		{ "Comment", "/** Falloff at the start/end of the spline (if this point is a start or end point, otherwise ignored). */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Falloff at the start/end of the spline (if this point is a start or end point, otherwise ignored)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_EndFalloff = { "EndFalloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, EndFalloff), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_EndFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_EndFalloff_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_SegmentMeshOffset_MetaData[] = {
		{ "Category", "LandscapeSpline" },
		{ "Comment", "/** Vertical offset of the spline segment mesh. Useful for a river's surface, among other things. */" },
		{ "DisplayName", "Mesh Vertical Offset" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Vertical offset of the spline segment mesh. Useful for a river's surface, among other things." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_SegmentMeshOffset = { "SegmentMeshOffset", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, SegmentMeshOffset), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_SegmentMeshOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_SegmentMeshOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LayerName_MetaData[] = {
		{ "Category", "LandscapeDeformation" },
		{ "Comment", "/**\n\x09 * Name of blend layer to paint when applying spline to landscape\n\x09 * If \"none\", no layer is painted\n\x09 */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Name of blend layer to paint when applying spline to landscape\nIf \"none\", no layer is painted" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, LayerName), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bRaiseTerrain_MetaData[] = {
		{ "Category", "LandscapeDeformation" },
		{ "Comment", "/** If the spline is above the terrain, whether to raise the terrain up to the level of the spline when applying it to the landscape. */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "If the spline is above the terrain, whether to raise the terrain up to the level of the spline when applying it to the landscape." },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bRaiseTerrain_SetBit(void* Obj)
	{
		((ULandscapeSplineControlPoint*)Obj)->bRaiseTerrain = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bRaiseTerrain = { "bRaiseTerrain", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeSplineControlPoint), &Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bRaiseTerrain_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bRaiseTerrain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bRaiseTerrain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bLowerTerrain_MetaData[] = {
		{ "Category", "LandscapeDeformation" },
		{ "Comment", "/** If the spline is below the terrain, whether to lower the terrain down to the level of the spline when applying it to the landscape. */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "If the spline is below the terrain, whether to lower the terrain down to the level of the spline when applying it to the landscape." },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bLowerTerrain_SetBit(void* Obj)
	{
		((ULandscapeSplineControlPoint*)Obj)->bLowerTerrain = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bLowerTerrain = { "bLowerTerrain", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeSplineControlPoint), &Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bLowerTerrain_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bLowerTerrain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bLowerTerrain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Mesh to use on the control point */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Mesh to use on the control point" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_MaterialOverrides_Inner = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_MaterialOverrides_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Overrides mesh's materials */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Overrides mesh's materials" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_MaterialOverrides = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, MaterialOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_MaterialOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_MaterialOverrides_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_MeshScale_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Scale of the control point mesh */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Scale of the control point mesh" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_MeshScale = { "MeshScale", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, MeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_MeshScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_MeshScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((ULandscapeSplineControlPoint*)Obj)->bEnableCollision_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeSplineControlPoint), &Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bEnableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_CollisionProfileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_CollisionProfileName = { "CollisionProfileName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, CollisionProfileName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_CollisionProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_CollisionProfileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bCastShadow_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Whether the Control Point Mesh should cast a shadow. */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Whether the Control Point Mesh should cast a shadow." },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bCastShadow_SetBit(void* Obj)
	{
		((ULandscapeSplineControlPoint*)Obj)->bCastShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeSplineControlPoint), &Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bCastShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bCastShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bHiddenInGame_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Whether to hide the mesh in game */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Whether to hide the mesh in game" },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bHiddenInGame_SetBit(void* Obj)
	{
		((ULandscapeSplineControlPoint*)Obj)->bHiddenInGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bHiddenInGame = { "bHiddenInGame", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeSplineControlPoint), &Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bHiddenInGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bHiddenInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bHiddenInGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bPlaceSplineMeshesInStreamingLevels_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Whether control point mesh should be placed in landscape proxy streaming level (true) or the spline's level (false) */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Whether control point mesh should be placed in landscape proxy streaming level (true) or the spline's level (false)" },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bPlaceSplineMeshesInStreamingLevels_SetBit(void* Obj)
	{
		((ULandscapeSplineControlPoint*)Obj)->bPlaceSplineMeshesInStreamingLevels = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bPlaceSplineMeshesInStreamingLevels = { "bPlaceSplineMeshesInStreamingLevels", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeSplineControlPoint), &Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bPlaceSplineMeshesInStreamingLevels_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bPlaceSplineMeshesInStreamingLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bPlaceSplineMeshesInStreamingLevels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LDMaxDrawDistance_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/**  Max draw distance for the mesh used on this control point */" },
		{ "DisplayName", "Max Draw Distance" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Max draw distance for the mesh used on this control point" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LDMaxDrawDistance = { "LDMaxDrawDistance", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, LDMaxDrawDistance), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LDMaxDrawDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LDMaxDrawDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_TranslucencySortPriority_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/**\n\x09 * Translucent objects with a lower sort priority draw behind objects with a higher priority.\n\x09 * Translucent objects with the same priority are rendered from back-to-front based on their bounds origin.\n\x09 * This setting is also used to sort objects being drawn into a runtime virtual texture.\n\x09 *\n\x09 * Ignored if the object is not translucent.  The default priority is zero.\n\x09 * Warning: This should never be set to a non-default value unless you know what you are doing, as it will prevent the renderer from sorting correctly.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Translucent objects with a lower sort priority draw behind objects with a higher priority.\nTranslucent objects with the same priority are rendered from back-to-front based on their bounds origin.\nThis setting is also used to sort objects being drawn into a runtime virtual texture.\n\nIgnored if the object is not translucent.  The default priority is zero.\nWarning: This should never be set to a non-default value unless you know what you are doing, as it will prevent the renderer from sorting correctly." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_TranslucencySortPriority = { "TranslucencySortPriority", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, TranslucencySortPriority), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_TranslucencySortPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_TranslucencySortPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bRenderCustomDepth_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If true, this component will be rendered in the CustomDepth pass (usually used for outlines) */" },
		{ "DisplayName", "Render CustomDepth Pass" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "If true, this component will be rendered in the CustomDepth pass (usually used for outlines)" },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bRenderCustomDepth_SetBit(void* Obj)
	{
		((ULandscapeSplineControlPoint*)Obj)->bRenderCustomDepth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bRenderCustomDepth = { "bRenderCustomDepth", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeSplineControlPoint), &Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bRenderCustomDepth_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bRenderCustomDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bRenderCustomDepth_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_CustomDepthStencilWriteMask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_CustomDepthStencilWriteMask_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Mask used for stencil buffer writes. */" },
		{ "editcondition", "bRenderCustomDepth" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Mask used for stencil buffer writes." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_CustomDepthStencilWriteMask = { "CustomDepthStencilWriteMask", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, CustomDepthStencilWriteMask), Z_Construct_UEnum_Engine_ERendererStencilMask, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_CustomDepthStencilWriteMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_CustomDepthStencilWriteMask_MetaData)) }; // 2676219362
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_CustomDepthStencilValue_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3) */" },
		{ "DisplayName", "CustomDepth Stencil Value" },
		{ "editcondition", "bRenderCustomDepth" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3)" },
		{ "UIMax", "255" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_CustomDepthStencilValue = { "CustomDepthStencilValue", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, CustomDepthStencilValue), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_CustomDepthStencilValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_CustomDepthStencilValue_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_RuntimeVirtualTextures_Inner = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_RuntimeVirtualTextures_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** \n\x09 * Array of runtime virtual textures into which we draw the spline segment. \n\x09 * The material also needs to be set up to output to a virtual texture. \n\x09 */" },
		{ "DisplayName", "Draw in Virtual Textures" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Array of runtime virtual textures into which we draw the spline segment.\nThe material also needs to be set up to output to a virtual texture." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_RuntimeVirtualTextures = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, RuntimeVirtualTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_RuntimeVirtualTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_RuntimeVirtualTextures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_VirtualTextureLodBias_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Lod bias for rendering to runtime virtual texture. */" },
		{ "DisplayName", "Virtual Texture LOD Bias" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Lod bias for rendering to runtime virtual texture." },
		{ "UIMax", "8" },
		{ "UIMin", "-7" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_VirtualTextureLodBias = { "VirtualTextureLodBias", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, VirtualTextureLodBias), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_VirtualTextureLodBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_VirtualTextureLodBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_VirtualTextureCullMips_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/**\n\x09 * Number of lower mips in the runtime virtual texture to skip for rendering this primitive.\n\x09 * Larger values reduce the effective draw distance in the runtime virtual texture.\n\x09 * This culling method doesn't take into account primitive size or virtual texture size.\n\x09 */" },
		{ "DisplayName", "Virtual Texture Skip Mips" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Number of lower mips in the runtime virtual texture to skip for rendering this primitive.\nLarger values reduce the effective draw distance in the runtime virtual texture.\nThis culling method doesn't take into account primitive size or virtual texture size." },
		{ "UIMax", "7" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_VirtualTextureCullMips = { "VirtualTextureCullMips", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, VirtualTextureCullMips), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_VirtualTextureCullMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_VirtualTextureCullMips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_VirtualTextureMainPassMaxDrawDistance_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Desired cull distance in the main pass if we are rendering to both the virtual texture AND the main pass. A value of 0 has no effect. */" },
		{ "DisplayName", "Max Draw Distance in Main Pass" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Desired cull distance in the main pass if we are rendering to both the virtual texture AND the main pass. A value of 0 has no effect." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_VirtualTextureMainPassMaxDrawDistance = { "VirtualTextureMainPassMaxDrawDistance", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, VirtualTextureMainPassMaxDrawDistance), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_VirtualTextureMainPassMaxDrawDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_VirtualTextureMainPassMaxDrawDistance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_VirtualTextureRenderPassType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_VirtualTextureRenderPassType_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Controls if this component draws in the main pass as well as in the virtual texture. */" },
		{ "DisplayName", "Draw in Main Pass" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Controls if this component draws in the main pass as well as in the virtual texture." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_VirtualTextureRenderPassType = { "VirtualTextureRenderPassType", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, VirtualTextureRenderPassType), Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_VirtualTextureRenderPassType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_VirtualTextureRenderPassType_MetaData)) }; // 439338851
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_BodyInstance_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Mesh Collision Settings */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Mesh Collision Settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000800000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_BodyInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_BodyInstance_MetaData)) }; // 1519692163
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bSelected_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((ULandscapeSplineControlPoint*)Obj)->bSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeSplineControlPoint), &Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bNavDirty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bNavDirty_SetBit(void* Obj)
	{
		((ULandscapeSplineControlPoint*)Obj)->bNavDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bNavDirty = { "bNavDirty", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeSplineControlPoint), &Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bNavDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bNavDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bNavDirty_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_ConnectedSegments_Inner = { "ConnectedSegments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLandscapeSplineConnection, METADATA_PARAMS(nullptr, 0) }; // 2684238338
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_ConnectedSegments_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_ConnectedSegments = { "ConnectedSegments", nullptr, (EPropertyFlags)0x0010400000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, ConnectedSegments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_ConnectedSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_ConnectedSegments_MetaData)) }; // 2684238338
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint, METADATA_PARAMS(nullptr, 0) }; // 990735101
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Points_MetaData[] = {
		{ "Comment", "/** Spline points */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Spline points" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Points_MetaData)) }; // 990735101
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Bounds_MetaData[] = {
		{ "Comment", "/** Bounds of points */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Bounds of points" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LocalMeshComponent_MetaData[] = {
		{ "Comment", "/** Control point mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Control point mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LocalMeshComponent = { "LocalMeshComponent", nullptr, (EPropertyFlags)0x0024480000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, LocalMeshComponent), Z_Construct_UClass_UControlPointMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LocalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LocalMeshComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_ForeignWorld_MetaData[] = {
		{ "Comment", "/** World reference for if mesh component is stored in another streaming level */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "World reference for if mesh component is stored in another streaming level" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_ForeignWorld = { "ForeignWorld", nullptr, (EPropertyFlags)0x0024c80800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, ForeignWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_ForeignWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_ForeignWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_ModificationKey_MetaData[] = {
		{ "Comment", "/** Key for tracking whether this segment has been modified relative to the mesh component stored in another streaming level */" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineControlPoint.h" },
		{ "ToolTip", "Key for tracking whether this segment has been modified relative to the mesh component stored in another streaming level" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_ModificationKey = { "ModificationKey", nullptr, (EPropertyFlags)0x0020c80800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSplineControlPoint, ModificationKey), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_ModificationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_ModificationKey_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LayerWidthRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_SideFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LeftSideFalloffFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_RightSideFalloffFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LeftSideLayerFalloffFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_RightSideLayerFalloffFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_EndFalloff,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_SegmentMeshOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bRaiseTerrain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bLowerTerrain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_MaterialOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_MaterialOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_MeshScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bEnableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_CollisionProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bCastShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bHiddenInGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bPlaceSplineMeshesInStreamingLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LDMaxDrawDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_TranslucencySortPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bRenderCustomDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_CustomDepthStencilWriteMask_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_CustomDepthStencilWriteMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_CustomDepthStencilValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_RuntimeVirtualTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_RuntimeVirtualTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_VirtualTextureLodBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_VirtualTextureCullMips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_VirtualTextureMainPassMaxDrawDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_VirtualTextureRenderPassType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_VirtualTextureRenderPassType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_BodyInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_bNavDirty,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_ConnectedSegments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_ConnectedSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_LocalMeshComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_ForeignWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::NewProp_ModificationKey,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeSplineControlPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::ClassParams = {
		&ULandscapeSplineControlPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeSplineControlPoint()
	{
		if (!Z_Registration_Info_UClass_ULandscapeSplineControlPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeSplineControlPoint.OuterSingleton, Z_Construct_UClass_ULandscapeSplineControlPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapeSplineControlPoint.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeSplineControlPoint>()
	{
		return ULandscapeSplineControlPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeSplineControlPoint);
	ULandscapeSplineControlPoint::~ULandscapeSplineControlPoint() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeSplineControlPoint)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_Statics::ScriptStructInfo[] = {
		{ FLandscapeSplineConnection::StaticStruct, Z_Construct_UScriptStruct_FLandscapeSplineConnection_Statics::NewStructOps, TEXT("LandscapeSplineConnection"), &Z_Registration_Info_UScriptStruct_LandscapeSplineConnection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeSplineConnection), 2684238338U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeSplineControlPoint, ULandscapeSplineControlPoint::StaticClass, TEXT("ULandscapeSplineControlPoint"), &Z_Registration_Info_UClass_ULandscapeSplineControlPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeSplineControlPoint), 4017286359U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_2028303587(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineControlPoint_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
