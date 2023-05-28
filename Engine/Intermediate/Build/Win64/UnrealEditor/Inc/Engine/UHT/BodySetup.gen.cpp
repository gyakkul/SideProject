// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodySetup() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKAggregateGeom();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWalkableSlopeOverride();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UBodySetupCore();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UBodySetup::StaticRegisterNativesUBodySetup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBodySetup);
	UClass* Z_Construct_UClass_UBodySetup_NoRegister()
	{
		return UBodySetup::StaticClass();
	}
	struct Z_Construct_UClass_UBodySetup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AggGeom_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AggGeom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysFullAnimWeight_MetaData[];
#endif
		static void NewProp_bAlwaysFullAnimWeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysFullAnimWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConsiderForBounds_MetaData[];
#endif
		static void NewProp_bConsiderForBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsiderForBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMeshCollideAll_MetaData[];
#endif
		static void NewProp_bMeshCollideAll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshCollideAll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoubleSidedGeometry_MetaData[];
#endif
		static void NewProp_bDoubleSidedGeometry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoubleSidedGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateNonMirroredCollision_MetaData[];
#endif
		static void NewProp_bGenerateNonMirroredCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateNonMirroredCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSharedCookedData_MetaData[];
#endif
		static void NewProp_bSharedCookedData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSharedCookedData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateMirroredCollision_MetaData[];
#endif
		static void NewProp_bGenerateMirroredCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateMirroredCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportUVsAndFaceRemap_MetaData[];
#endif
		static void NewProp_bSupportUVsAndFaceRemap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportUVsAndFaceRemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeverNeedsCookedCollisionData_MetaData[];
#endif
		static void NewProp_bNeverNeedsCookedCollisionData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeverNeedsCookedCollisionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkableSlopeOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WalkableSlopeOverride;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BuildScale;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildScale3D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuildScale3D;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodySetup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBodySetupCore,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * BodySetup contains all collision information that is associated with a single asset.\n * A single BodySetup instance is shared among many BodyInstances so that geometry data is not duplicated.\n * Assets typically implement a GetBodySetup function that is used during physics state creation.\n * \n * @see GetBodySetup\n * @see FBodyInstance\n */" },
		{ "IncludePath", "PhysicsEngine/BodySetup.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "BodySetup contains all collision information that is associated with a single asset.\nA single BodySetup instance is shared among many BodyInstances so that geometry data is not duplicated.\nAssets typically implement a GetBodySetup function that is used during physics state creation.\n\n@see GetBodySetup\n@see FBodyInstance" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_AggGeom_MetaData[] = {
		{ "Category", "BodySetup" },
		{ "Comment", "/** Simplified collision representation of this  */" },
		{ "DisplayName", "Primitives" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Simplified collision representation of this" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_AggGeom = { "AggGeom", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBodySetup, AggGeom), Z_Construct_UScriptStruct_FKAggregateGeom, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_AggGeom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_AggGeom_MetaData)) }; // 1732694976
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_bAlwaysFullAnimWeight_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09If true (and bEnableFullAnimWeightBodies in SkelMeshComp is true), the physics of this bone will always be blended into the skeletal mesh, regardless of what PhysicsWeight of the SkelMeshComp is. \n\x09 *\x09This is useful for bones that should always be physics, even when blending physics in and out for hit reactions (eg cloth or pony-tails).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "If true (and bEnableFullAnimWeightBodies in SkelMeshComp is true), the physics of this bone will always be blended into the skeletal mesh, regardless of what PhysicsWeight of the SkelMeshComp is.\nThis is useful for bones that should always be physics, even when blending physics in and out for hit reactions (eg cloth or pony-tails)." },
	};
#endif
	void Z_Construct_UClass_UBodySetup_Statics::NewProp_bAlwaysFullAnimWeight_SetBit(void* Obj)
	{
		((UBodySetup*)Obj)->bAlwaysFullAnimWeight_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bAlwaysFullAnimWeight = { "bAlwaysFullAnimWeight", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bAlwaysFullAnimWeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_bAlwaysFullAnimWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_bAlwaysFullAnimWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_bConsiderForBounds_MetaData[] = {
		{ "Category", "BodySetup" },
		{ "Comment", "/** \n\x09 *\x09Should this BodySetup be considered for the bounding box of the PhysicsAsset (and hence SkeletalMeshComponent).\n\x09 *\x09There is a speed improvement from having less BodySetups processed each frame when updating the bounds.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Should this BodySetup be considered for the bounding box of the PhysicsAsset (and hence SkeletalMeshComponent).\nThere is a speed improvement from having less BodySetups processed each frame when updating the bounds." },
	};
#endif
	void Z_Construct_UClass_UBodySetup_Statics::NewProp_bConsiderForBounds_SetBit(void* Obj)
	{
		((UBodySetup*)Obj)->bConsiderForBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bConsiderForBounds = { "bConsiderForBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bConsiderForBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_bConsiderForBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_bConsiderForBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_bMeshCollideAll_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09If true, the physics of this mesh (only affects static meshes) will always contain ALL elements from the mesh - not just the ones enabled for collision. \n\x09 *\x09This is useful for forcing high detail collisions using the entire render mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "If true, the physics of this mesh (only affects static meshes) will always contain ALL elements from the mesh - not just the ones enabled for collision.\nThis is useful for forcing high detail collisions using the entire render mesh." },
	};
#endif
	void Z_Construct_UClass_UBodySetup_Statics::NewProp_bMeshCollideAll_SetBit(void* Obj)
	{
		((UBodySetup*)Obj)->bMeshCollideAll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bMeshCollideAll = { "bMeshCollideAll", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bMeshCollideAll_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_bMeshCollideAll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_bMeshCollideAll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_bDoubleSidedGeometry_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/**\n\x09*\x09If true, the physics triangle mesh will use double sided faces when doing scene queries.\n\x09*\x09This is useful for planes and single sided meshes that need traces to work on both sides.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "If true, the physics triangle mesh will use double sided faces when doing scene queries.\nThis is useful for planes and single sided meshes that need traces to work on both sides." },
	};
#endif
	void Z_Construct_UClass_UBodySetup_Statics::NewProp_bDoubleSidedGeometry_SetBit(void* Obj)
	{
		((UBodySetup*)Obj)->bDoubleSidedGeometry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bDoubleSidedGeometry = { "bDoubleSidedGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bDoubleSidedGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_bDoubleSidedGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_bDoubleSidedGeometry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateNonMirroredCollision_MetaData[] = {
		{ "Comment", "/**\x09Should we generate data necessary to support collision on normal (non-mirrored) versions of this body. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Should we generate data necessary to support collision on normal (non-mirrored) versions of this body." },
	};
#endif
	void Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateNonMirroredCollision_SetBit(void* Obj)
	{
		((UBodySetup*)Obj)->bGenerateNonMirroredCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateNonMirroredCollision = { "bGenerateNonMirroredCollision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateNonMirroredCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateNonMirroredCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateNonMirroredCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_bSharedCookedData_MetaData[] = {
		{ "Comment", "/** Whether the cooked data is shared by multiple body setups. This is needed for per poly collision case where we don't want to duplicate cooked data, but still need multiple body setups for in place geometry changes */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Whether the cooked data is shared by multiple body setups. This is needed for per poly collision case where we don't want to duplicate cooked data, but still need multiple body setups for in place geometry changes" },
	};
#endif
	void Z_Construct_UClass_UBodySetup_Statics::NewProp_bSharedCookedData_SetBit(void* Obj)
	{
		((UBodySetup*)Obj)->bSharedCookedData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bSharedCookedData = { "bSharedCookedData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bSharedCookedData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_bSharedCookedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_bSharedCookedData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateMirroredCollision_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09Should we generate data necessary to support collision on mirrored versions of this mesh. \n\x09 *\x09This halves the collision data size for this mesh, but disables collision on mirrored instances of the body.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Should we generate data necessary to support collision on mirrored versions of this mesh.\nThis halves the collision data size for this mesh, but disables collision on mirrored instances of the body." },
	};
#endif
	void Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateMirroredCollision_SetBit(void* Obj)
	{
		((UBodySetup*)Obj)->bGenerateMirroredCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateMirroredCollision = { "bGenerateMirroredCollision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateMirroredCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateMirroredCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateMirroredCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_bSupportUVsAndFaceRemap_MetaData[] = {
		{ "Comment", "/** \n\x09 * If true, the physics triangle mesh will store UVs and the face remap table. This is needed\n\x09 * to support physical material masks in scene queries. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "If true, the physics triangle mesh will store UVs and the face remap table. This is needed\nto support physical material masks in scene queries." },
	};
#endif
	void Z_Construct_UClass_UBodySetup_Statics::NewProp_bSupportUVsAndFaceRemap_SetBit(void* Obj)
	{
		((UBodySetup*)Obj)->bSupportUVsAndFaceRemap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bSupportUVsAndFaceRemap = { "bSupportUVsAndFaceRemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bSupportUVsAndFaceRemap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_bSupportUVsAndFaceRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_bSupportUVsAndFaceRemap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_bNeverNeedsCookedCollisionData_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 * TODO Chaos this is to opt out of CreatePhysicsMeshes for certain meshes\n\x09 * Better long term mesh is to not call CreatePhysicsMeshes until it is known there is a mesh instance that needs it.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "TODO Chaos this is to opt out of CreatePhysicsMeshes for certain meshes\nBetter long term mesh is to not call CreatePhysicsMeshes until it is known there is a mesh instance that needs it." },
	};
#endif
	void Z_Construct_UClass_UBodySetup_Statics::NewProp_bNeverNeedsCookedCollisionData_SetBit(void* Obj)
	{
		((UBodySetup*)Obj)->bNeverNeedsCookedCollisionData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_bNeverNeedsCookedCollisionData = { "bNeverNeedsCookedCollisionData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBodySetup), &Z_Construct_UClass_UBodySetup_Statics::NewProp_bNeverNeedsCookedCollisionData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_bNeverNeedsCookedCollisionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_bNeverNeedsCookedCollisionData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_PhysMaterial_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Physical material to use for simple collision on this body. Encodes information about density, friction etc. */" },
		{ "DisplayName", "Simple Collision Physical Material" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Physical material to use for simple collision on this body. Encodes information about density, friction etc." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBodySetup, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_PhysMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_PhysMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_WalkableSlopeOverride_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Custom walkable slope setting for this body. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Custom walkable slope setting for this body." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_WalkableSlopeOverride = { "WalkableSlopeOverride", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBodySetup, WalkableSlopeOverride), Z_Construct_UScriptStruct_FWalkableSlopeOverride, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_WalkableSlopeOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_WalkableSlopeOverride_MetaData)) }; // 199647786
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale = { "BuildScale", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBodySetup, BuildScale_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_DefaultInstance_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Default properties of the body instance, copied into objects on instantiation, was URB_BodyInstance */" },
		{ "FullyExpand", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Default properties of the body instance, copied into objects on instantiation, was URB_BodyInstance" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_DefaultInstance = { "DefaultInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBodySetup, DefaultInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_DefaultInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_DefaultInstance_MetaData)) }; // 1519692163
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale3D_MetaData[] = {
		{ "Comment", "/** Build scale for this body setup (static mesh settings define this value) */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodySetup.h" },
		{ "ToolTip", "Build scale for this body setup (static mesh settings define this value)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale3D = { "BuildScale3D", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBodySetup, BuildScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale3D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale3D_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodySetup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_AggGeom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bAlwaysFullAnimWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bConsiderForBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bMeshCollideAll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bDoubleSidedGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateNonMirroredCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bSharedCookedData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bGenerateMirroredCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bSupportUVsAndFaceRemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_bNeverNeedsCookedCollisionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_PhysMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_WalkableSlopeOverride,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_DefaultInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetup_Statics::NewProp_BuildScale3D,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodySetup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodySetup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBodySetup_Statics::ClassParams = {
		&UBodySetup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBodySetup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBodySetup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodySetup()
	{
		if (!Z_Registration_Info_UClass_UBodySetup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBodySetup.OuterSingleton, Z_Construct_UClass_UBodySetup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBodySetup.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UBodySetup>()
	{
		return UBodySetup::StaticClass();
	}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBodySetup)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBodySetup, UBodySetup::StaticClass, TEXT("UBodySetup"), &Z_Registration_Info_UClass_UBodySetup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBodySetup), 355680435U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_638019742(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
