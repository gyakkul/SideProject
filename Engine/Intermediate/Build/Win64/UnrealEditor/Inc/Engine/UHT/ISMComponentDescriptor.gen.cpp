// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/ISMPartition/ISMComponentDescriptor.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISMComponentDescriptor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentMobility();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHLODBatchingPolicy();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightmapType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERayTracingGroupCullingPriority();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERendererStencilMask();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMComponentDescriptor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMComponentDescriptorBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftISMComponentDescriptor();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ISMComponentDescriptorBase;
class UScriptStruct* FISMComponentDescriptorBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ISMComponentDescriptorBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ISMComponentDescriptorBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FISMComponentDescriptorBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ISMComponentDescriptorBase"));
	}
	return Z_Registration_Info_UScriptStruct_ISMComponentDescriptorBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FISMComponentDescriptorBase>()
{
	return FISMComponentDescriptorBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Hash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mobility_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mobility;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VirtualTextureRenderPassType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureRenderPassType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VirtualTextureRenderPassType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LightmapType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightmapType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LightmapType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingGroupId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RayTracingGroupId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RayTracingGroupCullingPriority_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingGroupCullingPriority_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RayTracingGroupCullingPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasCustomNavigableGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_bHasCustomNavigableGeometry;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CustomDepthStencilWriteMask_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilWriteMask_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CustomDepthStencilWriteMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceStartCullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceStartCullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceEndCullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceEndCullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureCullMips_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualTextureCullMips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencySortPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TranslucencySortPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverriddenLightMapRes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OverriddenLightMapRes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CustomDepthStencilValue;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_HLODBatchingPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODBatchingPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HLODBatchingPolicy;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[];
#endif
		static void NewProp_bCastShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastDynamicShadow_MetaData[];
#endif
		static void NewProp_bCastDynamicShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastDynamicShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastStaticShadow_MetaData[];
#endif
		static void NewProp_bCastStaticShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastStaticShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastContactShadow_MetaData[];
#endif
		static void NewProp_bCastContactShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastContactShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadowAsTwoSided_MetaData[];
#endif
		static void NewProp_bCastShadowAsTwoSided_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadowAsTwoSided;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDynamicIndirectLighting_MetaData[];
#endif
		static void NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDynamicIndirectLighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDistanceFieldLighting_MetaData[];
#endif
		static void NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDistanceFieldLighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReceivesDecals_MetaData[];
#endif
		static void NewProp_bReceivesDecals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivesDecals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLightMapRes_MetaData[];
#endif
		static void NewProp_bOverrideLightMapRes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLightMapRes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsOccluder_MetaData[];
#endif
		static void NewProp_bUseAsOccluder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsOccluder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDensityScaling_MetaData[];
#endif
		static void NewProp_bEnableDensityScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDensityScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiscardOnLoad_MetaData[];
#endif
		static void NewProp_bEnableDiscardOnLoad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiscardOnLoad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderCustomDepth_MetaData[];
#endif
		static void NewProp_bRenderCustomDepth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderCustomDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisibleInRayTracing_MetaData[];
#endif
		static void NewProp_bVisibleInRayTracing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleInRayTracing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHiddenInGame_MetaData[];
#endif
		static void NewProp_bHiddenInGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHiddenInGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditorOnly_MetaData[];
#endif
		static void NewProp_bIsEditorOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditorOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateWorldPositionOffset_MetaData[];
#endif
		static void NewProp_bEvaluateWorldPositionOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateWorldPositionOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverseCulling_MetaData[];
#endif
		static void NewProp_bReverseCulling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseCulling;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeInHLOD_MetaData[];
#endif
		static void NewProp_bIncludeInHLOD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeInHLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConsiderForActorPlacementWhenHidden_MetaData[];
#endif
		static void NewProp_bConsiderForActorPlacementWhenHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsiderForActorPlacementWhenHidden;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultCollision_MetaData[];
#endif
		static void NewProp_bUseDefaultCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateOverlapEvents_MetaData[];
#endif
		static void NewProp_bGenerateOverlapEvents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateOverlapEvents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOffsetDisableDistance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WorldPositionOffsetDisableDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that holds the relevant properties that can help decide if instances of different \n\x09StaticMeshComponents/InstancedStaticMeshComponents/HISM can be merged into a single component. */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
		{ "ToolTip", "Struct that holds the relevant properties that can help decide if instances of different\n      StaticMeshComponents/InstancedStaticMeshComponents/HISM can be merged into a single component." },
	};
#endif
	void* Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FISMComponentDescriptorBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_Hash_MetaData[] = {
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentDescriptorBase, Hash), METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_Hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_Hash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_ComponentClass_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentDescriptorBase, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_ComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_ComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_Mobility_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_Mobility = { "Mobility", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentDescriptorBase, Mobility), Z_Construct_UEnum_Engine_EComponentMobility, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_Mobility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_Mobility_MetaData)) }; // 3258784245
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_VirtualTextureRenderPassType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_VirtualTextureRenderPassType_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_VirtualTextureRenderPassType = { "VirtualTextureRenderPassType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentDescriptorBase, VirtualTextureRenderPassType), Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_VirtualTextureRenderPassType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_VirtualTextureRenderPassType_MetaData)) }; // 439338851
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_LightmapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_LightmapType_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_LightmapType = { "LightmapType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentDescriptorBase, LightmapType), Z_Construct_UEnum_Engine_ELightmapType, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_LightmapType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_LightmapType_MetaData)) }; // 1796898336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_LightingChannels_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_LightingChannels = { "LightingChannels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentDescriptorBase, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_LightingChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_LightingChannels_MetaData)) }; // 829425924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_RayTracingGroupId_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_RayTracingGroupId = { "RayTracingGroupId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentDescriptorBase, RayTracingGroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_RayTracingGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_RayTracingGroupId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_RayTracingGroupCullingPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_RayTracingGroupCullingPriority_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_RayTracingGroupCullingPriority = { "RayTracingGroupCullingPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentDescriptorBase, RayTracingGroupCullingPriority), Z_Construct_UEnum_Engine_ERayTracingGroupCullingPriority, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_RayTracingGroupCullingPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_RayTracingGroupCullingPriority_MetaData)) }; // 1023802708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bHasCustomNavigableGeometry_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bHasCustomNavigableGeometry = { "bHasCustomNavigableGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentDescriptorBase, bHasCustomNavigableGeometry), Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bHasCustomNavigableGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bHasCustomNavigableGeometry_MetaData)) }; // 947603777
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_CustomDepthStencilWriteMask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_CustomDepthStencilWriteMask_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_CustomDepthStencilWriteMask = { "CustomDepthStencilWriteMask", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentDescriptorBase, CustomDepthStencilWriteMask), Z_Construct_UEnum_Engine_ERendererStencilMask, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_CustomDepthStencilWriteMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_CustomDepthStencilWriteMask_MetaData)) }; // 2676219362
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_BodyInstance_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentDescriptorBase, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_BodyInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_BodyInstance_MetaData)) }; // 1519692163
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_InstanceStartCullDistance_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_InstanceStartCullDistance = { "InstanceStartCullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentDescriptorBase, InstanceStartCullDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_InstanceStartCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_InstanceStartCullDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_InstanceEndCullDistance_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_InstanceEndCullDistance = { "InstanceEndCullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentDescriptorBase, InstanceEndCullDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_InstanceEndCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_InstanceEndCullDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_VirtualTextureCullMips_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_VirtualTextureCullMips = { "VirtualTextureCullMips", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentDescriptorBase, VirtualTextureCullMips), METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_VirtualTextureCullMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_VirtualTextureCullMips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_TranslucencySortPriority_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_TranslucencySortPriority = { "TranslucencySortPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentDescriptorBase, TranslucencySortPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_TranslucencySortPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_TranslucencySortPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_OverriddenLightMapRes_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_OverriddenLightMapRes = { "OverriddenLightMapRes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentDescriptorBase, OverriddenLightMapRes), METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_OverriddenLightMapRes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_OverriddenLightMapRes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_CustomDepthStencilValue_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_CustomDepthStencilValue = { "CustomDepthStencilValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentDescriptorBase, CustomDepthStencilValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_CustomDepthStencilValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_CustomDepthStencilValue_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_HLODBatchingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_HLODBatchingPolicy_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_HLODBatchingPolicy = { "HLODBatchingPolicy", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentDescriptorBase, HLODBatchingPolicy), Z_Construct_UEnum_Engine_EHLODBatchingPolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_HLODBatchingPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_HLODBatchingPolicy_MetaData)) }; // 3663747580
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastShadow_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastShadow_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bCastShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastDynamicShadow_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastDynamicShadow_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bCastDynamicShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastDynamicShadow = { "bCastDynamicShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastDynamicShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastDynamicShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastDynamicShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastStaticShadow_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastStaticShadow_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bCastStaticShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastStaticShadow = { "bCastStaticShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastStaticShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastStaticShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastStaticShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastContactShadow_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastContactShadow_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bCastContactShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastContactShadow = { "bCastContactShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastContactShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastContactShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastContactShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastShadowAsTwoSided_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastShadowAsTwoSided_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bCastShadowAsTwoSided = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastShadowAsTwoSided = { "bCastShadowAsTwoSided", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastShadowAsTwoSided_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastShadowAsTwoSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastShadowAsTwoSided_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bAffectDynamicIndirectLighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLighting = { "bAffectDynamicIndirectLighting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDistanceFieldLighting_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bAffectDistanceFieldLighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDistanceFieldLighting = { "bAffectDistanceFieldLighting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDistanceFieldLighting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDistanceFieldLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDistanceFieldLighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bReceivesDecals_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bReceivesDecals_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bReceivesDecals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bReceivesDecals = { "bReceivesDecals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bReceivesDecals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bReceivesDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bReceivesDecals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bOverrideLightMapRes_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bOverrideLightMapRes_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bOverrideLightMapRes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bOverrideLightMapRes = { "bOverrideLightMapRes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bOverrideLightMapRes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bOverrideLightMapRes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bOverrideLightMapRes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseAsOccluder_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseAsOccluder_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bUseAsOccluder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseAsOccluder = { "bUseAsOccluder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseAsOccluder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseAsOccluder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseAsOccluder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEnableDensityScaling_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEnableDensityScaling_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bEnableDensityScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEnableDensityScaling = { "bEnableDensityScaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEnableDensityScaling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEnableDensityScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEnableDensityScaling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEnableDiscardOnLoad_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEnableDiscardOnLoad_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bEnableDiscardOnLoad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEnableDiscardOnLoad = { "bEnableDiscardOnLoad", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEnableDiscardOnLoad_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEnableDiscardOnLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEnableDiscardOnLoad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bRenderCustomDepth_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bRenderCustomDepth_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bRenderCustomDepth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bRenderCustomDepth = { "bRenderCustomDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bRenderCustomDepth_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bRenderCustomDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bRenderCustomDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bVisibleInRayTracing_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bVisibleInRayTracing_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bVisibleInRayTracing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bVisibleInRayTracing = { "bVisibleInRayTracing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bVisibleInRayTracing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bVisibleInRayTracing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bVisibleInRayTracing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bHiddenInGame_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bHiddenInGame_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bHiddenInGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bHiddenInGame = { "bHiddenInGame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bHiddenInGame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bHiddenInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bHiddenInGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bIsEditorOnly_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bIsEditorOnly_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bIsEditorOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bIsEditorOnly = { "bIsEditorOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bIsEditorOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bIsEditorOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bIsEditorOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bVisible_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEvaluateWorldPositionOffset_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEvaluateWorldPositionOffset_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bEvaluateWorldPositionOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEvaluateWorldPositionOffset = { "bEvaluateWorldPositionOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEvaluateWorldPositionOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEvaluateWorldPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEvaluateWorldPositionOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bReverseCulling_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bReverseCulling_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bReverseCulling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bReverseCulling = { "bReverseCulling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bReverseCulling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bReverseCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bReverseCulling_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bIncludeInHLOD_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bIncludeInHLOD_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bIncludeInHLOD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bIncludeInHLOD = { "bIncludeInHLOD", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bIncludeInHLOD_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bIncludeInHLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bIncludeInHLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bConsiderForActorPlacementWhenHidden_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bConsiderForActorPlacementWhenHidden_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bConsiderForActorPlacementWhenHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bConsiderForActorPlacementWhenHidden = { "bConsiderForActorPlacementWhenHidden", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bConsiderForActorPlacementWhenHidden_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bConsiderForActorPlacementWhenHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bConsiderForActorPlacementWhenHidden_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseDefaultCollision_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "bGenerateOverlapEvents" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseDefaultCollision_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bUseDefaultCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseDefaultCollision = { "bUseDefaultCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseDefaultCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseDefaultCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseDefaultCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bGenerateOverlapEvents_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "CustomDepthStencilWriteMask" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bGenerateOverlapEvents_SetBit(void* Obj)
	{
		((FISMComponentDescriptorBase*)Obj)->bGenerateOverlapEvents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bGenerateOverlapEvents = { "bGenerateOverlapEvents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bGenerateOverlapEvents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bGenerateOverlapEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bGenerateOverlapEvents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_WorldPositionOffsetDisableDistance_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_WorldPositionOffsetDisableDistance = { "WorldPositionOffsetDisableDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentDescriptorBase, WorldPositionOffsetDisableDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_WorldPositionOffsetDisableDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_WorldPositionOffsetDisableDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_Hash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_ComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_Mobility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_VirtualTextureRenderPassType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_VirtualTextureRenderPassType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_LightmapType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_LightmapType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_LightingChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_RayTracingGroupId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_RayTracingGroupCullingPriority_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_RayTracingGroupCullingPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bHasCustomNavigableGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_CustomDepthStencilWriteMask_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_CustomDepthStencilWriteMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_BodyInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_InstanceStartCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_InstanceEndCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_VirtualTextureCullMips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_TranslucencySortPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_OverriddenLightMapRes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_CustomDepthStencilValue,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_HLODBatchingPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_HLODBatchingPolicy,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastDynamicShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastStaticShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastContactShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastShadowAsTwoSided,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDistanceFieldLighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bReceivesDecals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bOverrideLightMapRes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseAsOccluder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEnableDensityScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEnableDiscardOnLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bRenderCustomDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bVisibleInRayTracing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bHiddenInGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bIsEditorOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEvaluateWorldPositionOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bReverseCulling,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bIncludeInHLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bConsiderForActorPlacementWhenHidden,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseDefaultCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bGenerateOverlapEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_WorldPositionOffsetDisableDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ISMComponentDescriptorBase",
		sizeof(FISMComponentDescriptorBase),
		alignof(FISMComponentDescriptorBase),
		Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FISMComponentDescriptorBase()
	{
		if (!Z_Registration_Info_UScriptStruct_ISMComponentDescriptorBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ISMComponentDescriptorBase.InnerSingleton, Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ISMComponentDescriptorBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FISMComponentDescriptor>() == std::is_polymorphic<FISMComponentDescriptorBase>(), "USTRUCT FISMComponentDescriptor cannot be polymorphic unless super FISMComponentDescriptorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ISMComponentDescriptor;
class UScriptStruct* FISMComponentDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ISMComponentDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ISMComponentDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FISMComponentDescriptor, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ISMComponentDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_ISMComponentDescriptor.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FISMComponentDescriptor>()
{
	return FISMComponentDescriptor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverrideMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RuntimeVirtualTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeVirtualTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeVirtualTextures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FISMComponentDescriptor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "ComponentClass" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentDescriptor, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_StaticMesh_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "ComponentClass" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentDescriptor, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverrideMaterials_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_Inner = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "ComponentClass" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMComponentDescriptor, RuntimeVirtualTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverrideMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverrideMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FISMComponentDescriptorBase,
		&NewStructOps,
		"ISMComponentDescriptor",
		sizeof(FISMComponentDescriptor),
		alignof(FISMComponentDescriptor),
		Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FISMComponentDescriptor()
	{
		if (!Z_Registration_Info_UScriptStruct_ISMComponentDescriptor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ISMComponentDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ISMComponentDescriptor.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSoftISMComponentDescriptor>() == std::is_polymorphic<FISMComponentDescriptorBase>(), "USTRUCT FSoftISMComponentDescriptor cannot be polymorphic unless super FISMComponentDescriptorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoftISMComponentDescriptor;
class UScriptStruct* FSoftISMComponentDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoftISMComponentDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoftISMComponentDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoftISMComponentDescriptor, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoftISMComponentDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_SoftISMComponentDescriptor.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoftISMComponentDescriptor>()
{
	return FSoftISMComponentDescriptor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OverrideMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RuntimeVirtualTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeVirtualTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeVirtualTextures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoftISMComponentDescriptor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "ComponentClass" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoftISMComponentDescriptor, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_StaticMesh_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "ComponentClass" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoftISMComponentDescriptor, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_OverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_OverrideMaterials_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_Inner = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "ComponentClass" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoftISMComponentDescriptor, RuntimeVirtualTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_OverrideMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_OverrideMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FISMComponentDescriptorBase,
		&NewStructOps,
		"SoftISMComponentDescriptor",
		sizeof(FSoftISMComponentDescriptor),
		alignof(FSoftISMComponentDescriptor),
		Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoftISMComponentDescriptor()
	{
		if (!Z_Registration_Info_UScriptStruct_SoftISMComponentDescriptor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoftISMComponentDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoftISMComponentDescriptor.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentDescriptor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentDescriptor_h_Statics::ScriptStructInfo[] = {
		{ FISMComponentDescriptorBase::StaticStruct, Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewStructOps, TEXT("ISMComponentDescriptorBase"), &Z_Registration_Info_UScriptStruct_ISMComponentDescriptorBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FISMComponentDescriptorBase), 3755604865U) },
		{ FISMComponentDescriptor::StaticStruct, Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewStructOps, TEXT("ISMComponentDescriptor"), &Z_Registration_Info_UScriptStruct_ISMComponentDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FISMComponentDescriptor), 4080497835U) },
		{ FSoftISMComponentDescriptor::StaticStruct, Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewStructOps, TEXT("SoftISMComponentDescriptor"), &Z_Registration_Info_UScriptStruct_SoftISMComponentDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoftISMComponentDescriptor), 3422159586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentDescriptor_h_515521376(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentDescriptor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentDescriptor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
