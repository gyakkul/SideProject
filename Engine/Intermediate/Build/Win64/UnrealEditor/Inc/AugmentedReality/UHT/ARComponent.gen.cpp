// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARComponent.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARComponent() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateImage_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARComponent();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentProbeComponent();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentProbeComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARFaceComponent();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARFaceComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARGeoAnchorComponent();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARGeoAnchorComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARImageComponent();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARImageComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARMeshComponent();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARMeshComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARObjectComponent();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARObjectComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPlaneComponent();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPlaneComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPointComponent();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPointComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPoseComponent();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPoseComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARQRCodeComponent();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARQRCodeComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedGeometry_NoRegister();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARAltitudeSource();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARObjectClassification();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionConfigFlags();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARFaceUpdatePayload();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARImageUpdatePayload();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARMeshUpdatePayload();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARObjectUpdatePayload();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARPlaneUpdatePayload();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARPointUpdatePayload();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARPoseUpdatePayload();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARQRCodeUpdatePayload();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARSessionPayload();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARSessionConfigFlags;
	static UEnum* EARSessionConfigFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARSessionConfigFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARSessionConfigFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSessionConfigFlags, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARSessionConfigFlags"));
		}
		return Z_Registration_Info_UEnum_EARSessionConfigFlags.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSessionConfigFlags>()
	{
		return EARSessionConfigFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARSessionConfigFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARSessionConfigFlags_Statics::Enumerators[] = {
		{ "EARSessionConfigFlags::None", (int64)EARSessionConfigFlags::None },
		{ "EARSessionConfigFlags::GenerateMeshData", (int64)EARSessionConfigFlags::GenerateMeshData },
		{ "EARSessionConfigFlags::RenderMeshDataInWireframe", (int64)EARSessionConfigFlags::RenderMeshDataInWireframe },
		{ "EARSessionConfigFlags::GenerateCollisionForMeshData", (int64)EARSessionConfigFlags::GenerateCollisionForMeshData },
		{ "EARSessionConfigFlags::GenerateNavMeshForMeshData", (int64)EARSessionConfigFlags::GenerateNavMeshForMeshData },
		{ "EARSessionConfigFlags::UseMeshDataForOcclusion", (int64)EARSessionConfigFlags::UseMeshDataForOcclusion },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARSessionConfigFlags_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GenerateCollisionForMeshData.Name", "EARSessionConfigFlags::GenerateCollisionForMeshData" },
		{ "GenerateMeshData.Name", "EARSessionConfigFlags::GenerateMeshData" },
		{ "GenerateNavMeshForMeshData.Name", "EARSessionConfigFlags::GenerateNavMeshForMeshData" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "None.Name", "EARSessionConfigFlags::None" },
		{ "RenderMeshDataInWireframe.Name", "EARSessionConfigFlags::RenderMeshDataInWireframe" },
		{ "UseMeshDataForOcclusion.Name", "EARSessionConfigFlags::UseMeshDataForOcclusion" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARSessionConfigFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARSessionConfigFlags",
		"EARSessionConfigFlags",
		Z_Construct_UEnum_AugmentedReality_EARSessionConfigFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARSessionConfigFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARSessionConfigFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARSessionConfigFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionConfigFlags()
	{
		if (!Z_Registration_Info_UEnum_EARSessionConfigFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARSessionConfigFlags.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARSessionConfigFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARSessionConfigFlags.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARSessionPayload;
class UScriptStruct* FARSessionPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARSessionPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARSessionPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARSessionPayload, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARSessionPayload"));
	}
	return Z_Registration_Info_UScriptStruct_ARSessionPayload.OuterSingleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARSessionPayload>()
{
	return FARSessionPayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARSessionPayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigFlags_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConfigFlags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMeshMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultMeshMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWireframeMeshMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultWireframeMeshMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSessionPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARSessionPayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_ConfigFlags_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_ConfigFlags = { "ConfigFlags", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARSessionPayload, ConfigFlags), METADATA_PARAMS(Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_ConfigFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_ConfigFlags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_DefaultMeshMaterial_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_DefaultMeshMaterial = { "DefaultMeshMaterial", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARSessionPayload, DefaultMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_DefaultMeshMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_DefaultMeshMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_DefaultWireframeMeshMaterial_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_DefaultWireframeMeshMaterial = { "DefaultWireframeMeshMaterial", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARSessionPayload, DefaultWireframeMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_DefaultWireframeMeshMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_DefaultWireframeMeshMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARSessionPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_ConfigFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_DefaultMeshMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewProp_DefaultWireframeMeshMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARSessionPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARSessionPayload",
		sizeof(FARSessionPayload),
		alignof(FARSessionPayload),
		Z_Construct_UScriptStruct_FARSessionPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSessionPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARSessionPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSessionPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARSessionPayload()
	{
		if (!Z_Registration_Info_UScriptStruct_ARSessionPayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARSessionPayload.InnerSingleton, Z_Construct_UScriptStruct_FARSessionPayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARSessionPayload.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARPlaneUpdatePayload;
class UScriptStruct* FARPlaneUpdatePayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARPlaneUpdatePayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARPlaneUpdatePayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARPlaneUpdatePayload, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARPlaneUpdatePayload"));
	}
	return Z_Registration_Info_UScriptStruct_ARPlaneUpdatePayload.OuterSingleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARPlaneUpdatePayload>()
{
	return FARPlaneUpdatePayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionPayload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extents;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundaryVertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryVertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoundaryVertices;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectClassification_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectClassification_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ObjectClassification;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARPlaneUpdatePayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_SessionPayload_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_SessionPayload = { "SessionPayload", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARPlaneUpdatePayload, SessionPayload), Z_Construct_UScriptStruct_FARSessionPayload, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_SessionPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_SessionPayload_MetaData)) }; // 3298808518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARPlaneUpdatePayload, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_WorldTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARPlaneUpdatePayload, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_Extents_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_Extents = { "Extents", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARPlaneUpdatePayload, Extents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_Extents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_Extents_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_BoundaryVertices_Inner = { "BoundaryVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_BoundaryVertices_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_BoundaryVertices = { "BoundaryVertices", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARPlaneUpdatePayload, BoundaryVertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_BoundaryVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_BoundaryVertices_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_ObjectClassification_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_ObjectClassification_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_ObjectClassification = { "ObjectClassification", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARPlaneUpdatePayload, ObjectClassification), Z_Construct_UEnum_AugmentedReality_EARObjectClassification, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_ObjectClassification_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_ObjectClassification_MetaData)) }; // 1555664985
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_SessionPayload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_WorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_Extents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_BoundaryVertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_BoundaryVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_ObjectClassification_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewProp_ObjectClassification,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARPlaneUpdatePayload",
		sizeof(FARPlaneUpdatePayload),
		alignof(FARPlaneUpdatePayload),
		Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARPlaneUpdatePayload()
	{
		if (!Z_Registration_Info_UScriptStruct_ARPlaneUpdatePayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARPlaneUpdatePayload.InnerSingleton, Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARPlaneUpdatePayload.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARPointUpdatePayload;
class UScriptStruct* FARPointUpdatePayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARPointUpdatePayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARPointUpdatePayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARPointUpdatePayload, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARPointUpdatePayload"));
	}
	return Z_Registration_Info_UScriptStruct_ARPointUpdatePayload.OuterSingleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARPointUpdatePayload>()
{
	return FARPointUpdatePayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARPointUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPointUpdatePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARPointUpdatePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARPointUpdatePayload>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARPointUpdatePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARPointUpdatePayload",
		sizeof(FARPointUpdatePayload),
		alignof(FARPointUpdatePayload),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARPointUpdatePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPointUpdatePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARPointUpdatePayload()
	{
		if (!Z_Registration_Info_UScriptStruct_ARPointUpdatePayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARPointUpdatePayload.InnerSingleton, Z_Construct_UScriptStruct_FARPointUpdatePayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARPointUpdatePayload.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARFaceUpdatePayload;
class UScriptStruct* FARFaceUpdatePayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARFaceUpdatePayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARFaceUpdatePayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARFaceUpdatePayload, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARFaceUpdatePayload"));
	}
	return Z_Registration_Info_UScriptStruct_ARFaceUpdatePayload.OuterSingleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARFaceUpdatePayload>()
{
	return FARFaceUpdatePayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionPayload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftEyePosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftEyePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightEyePosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightEyePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARFaceUpdatePayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_SessionPayload_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_SessionPayload = { "SessionPayload", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARFaceUpdatePayload, SessionPayload), Z_Construct_UScriptStruct_FARSessionPayload, METADATA_PARAMS(Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_SessionPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_SessionPayload_MetaData)) }; // 3298808518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_LeftEyePosition_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_LeftEyePosition = { "LeftEyePosition", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARFaceUpdatePayload, LeftEyePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_LeftEyePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_LeftEyePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_RightEyePosition_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_RightEyePosition = { "RightEyePosition", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARFaceUpdatePayload, RightEyePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_RightEyePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_RightEyePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_LookAtTarget_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_LookAtTarget = { "LookAtTarget", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARFaceUpdatePayload, LookAtTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_LookAtTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_LookAtTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_SessionPayload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_LeftEyePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_RightEyePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewProp_LookAtTarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARFaceUpdatePayload",
		sizeof(FARFaceUpdatePayload),
		alignof(FARFaceUpdatePayload),
		Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARFaceUpdatePayload()
	{
		if (!Z_Registration_Info_UScriptStruct_ARFaceUpdatePayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARFaceUpdatePayload.InnerSingleton, Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARFaceUpdatePayload.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARImageUpdatePayload;
class UScriptStruct* FARImageUpdatePayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARImageUpdatePayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARImageUpdatePayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARImageUpdatePayload, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARImageUpdatePayload"));
	}
	return Z_Registration_Info_UScriptStruct_ARImageUpdatePayload.OuterSingleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARImageUpdatePayload>()
{
	return FARImageUpdatePayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionPayload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetectedImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DetectedImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EstimatedSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EstimatedSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARImageUpdatePayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_SessionPayload_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_SessionPayload = { "SessionPayload", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARImageUpdatePayload, SessionPayload), Z_Construct_UScriptStruct_FARSessionPayload, METADATA_PARAMS(Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_SessionPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_SessionPayload_MetaData)) }; // 3298808518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARImageUpdatePayload, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_WorldTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_DetectedImage_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_DetectedImage = { "DetectedImage", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARImageUpdatePayload, DetectedImage), Z_Construct_UClass_UARCandidateImage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_DetectedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_DetectedImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_EstimatedSize_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_EstimatedSize = { "EstimatedSize", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARImageUpdatePayload, EstimatedSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_EstimatedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_EstimatedSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_SessionPayload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_WorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_DetectedImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewProp_EstimatedSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARImageUpdatePayload",
		sizeof(FARImageUpdatePayload),
		alignof(FARImageUpdatePayload),
		Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARImageUpdatePayload()
	{
		if (!Z_Registration_Info_UScriptStruct_ARImageUpdatePayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARImageUpdatePayload.InnerSingleton, Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARImageUpdatePayload.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARQRCodeUpdatePayload;
class UScriptStruct* FARQRCodeUpdatePayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARQRCodeUpdatePayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARQRCodeUpdatePayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARQRCodeUpdatePayload"));
	}
	return Z_Registration_Info_UScriptStruct_ARQRCodeUpdatePayload.OuterSingleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARQRCodeUpdatePayload>()
{
	return FARQRCodeUpdatePayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionPayload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QRCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_QRCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARQRCodeUpdatePayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_SessionPayload_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_SessionPayload = { "SessionPayload", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARQRCodeUpdatePayload, SessionPayload), Z_Construct_UScriptStruct_FARSessionPayload, METADATA_PARAMS(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_SessionPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_SessionPayload_MetaData)) }; // 3298808518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARQRCodeUpdatePayload, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_WorldTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_Extents_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_Extents = { "Extents", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARQRCodeUpdatePayload, Extents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_Extents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_Extents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_QRCode_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_QRCode = { "QRCode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARQRCodeUpdatePayload, QRCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_QRCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_QRCode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_SessionPayload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_WorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_Extents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewProp_QRCode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARQRCodeUpdatePayload",
		sizeof(FARQRCodeUpdatePayload),
		alignof(FARQRCodeUpdatePayload),
		Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARQRCodeUpdatePayload()
	{
		if (!Z_Registration_Info_UScriptStruct_ARQRCodeUpdatePayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARQRCodeUpdatePayload.InnerSingleton, Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARQRCodeUpdatePayload.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARPoseUpdatePayload;
class UScriptStruct* FARPoseUpdatePayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARPoseUpdatePayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARPoseUpdatePayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARPoseUpdatePayload, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARPoseUpdatePayload"));
	}
	return Z_Registration_Info_UScriptStruct_ARPoseUpdatePayload.OuterSingleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARPoseUpdatePayload>()
{
	return FARPoseUpdatePayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_JointTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JointTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_JointTransforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARPoseUpdatePayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARPoseUpdatePayload, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_WorldTransform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_JointTransforms_Inner = { "JointTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_JointTransforms_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_JointTransforms = { "JointTransforms", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARPoseUpdatePayload, JointTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_JointTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_JointTransforms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_WorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_JointTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewProp_JointTransforms,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARPoseUpdatePayload",
		sizeof(FARPoseUpdatePayload),
		alignof(FARPoseUpdatePayload),
		Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARPoseUpdatePayload()
	{
		if (!Z_Registration_Info_UScriptStruct_ARPoseUpdatePayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARPoseUpdatePayload.InnerSingleton, Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARPoseUpdatePayload.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AREnvironmentProbeUpdatePayload;
class UScriptStruct* FAREnvironmentProbeUpdatePayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AREnvironmentProbeUpdatePayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AREnvironmentProbeUpdatePayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("AREnvironmentProbeUpdatePayload"));
	}
	return Z_Registration_Info_UScriptStruct_AREnvironmentProbeUpdatePayload.OuterSingleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FAREnvironmentProbeUpdatePayload>()
{
	return FAREnvironmentProbeUpdatePayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAREnvironmentProbeUpdatePayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAREnvironmentProbeUpdatePayload, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::NewProp_WorldTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::NewProp_WorldTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"AREnvironmentProbeUpdatePayload",
		sizeof(FAREnvironmentProbeUpdatePayload),
		alignof(FAREnvironmentProbeUpdatePayload),
		Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload()
	{
		if (!Z_Registration_Info_UScriptStruct_AREnvironmentProbeUpdatePayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AREnvironmentProbeUpdatePayload.InnerSingleton, Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AREnvironmentProbeUpdatePayload.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARObjectUpdatePayload;
class UScriptStruct* FARObjectUpdatePayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARObjectUpdatePayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARObjectUpdatePayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARObjectUpdatePayload, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARObjectUpdatePayload"));
	}
	return Z_Registration_Info_UScriptStruct_ARObjectUpdatePayload.OuterSingleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARObjectUpdatePayload>()
{
	return FARObjectUpdatePayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARObjectUpdatePayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARObjectUpdatePayload, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::NewProp_WorldTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::NewProp_WorldTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARObjectUpdatePayload",
		sizeof(FARObjectUpdatePayload),
		alignof(FARObjectUpdatePayload),
		Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARObjectUpdatePayload()
	{
		if (!Z_Registration_Info_UScriptStruct_ARObjectUpdatePayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARObjectUpdatePayload.InnerSingleton, Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARObjectUpdatePayload.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARMeshUpdatePayload;
class UScriptStruct* FARMeshUpdatePayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARMeshUpdatePayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARMeshUpdatePayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARMeshUpdatePayload, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARMeshUpdatePayload"));
	}
	return Z_Registration_Info_UScriptStruct_ARMeshUpdatePayload.OuterSingleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARMeshUpdatePayload>()
{
	return FARMeshUpdatePayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionPayload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectClassification_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectClassification_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ObjectClassification;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARMeshUpdatePayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_SessionPayload_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_SessionPayload = { "SessionPayload", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARMeshUpdatePayload, SessionPayload), Z_Construct_UScriptStruct_FARSessionPayload, METADATA_PARAMS(Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_SessionPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_SessionPayload_MetaData)) }; // 3298808518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARMeshUpdatePayload, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_WorldTransform_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_ObjectClassification_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_ObjectClassification_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_ObjectClassification = { "ObjectClassification", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARMeshUpdatePayload, ObjectClassification), Z_Construct_UEnum_AugmentedReality_EARObjectClassification, METADATA_PARAMS(Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_ObjectClassification_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_ObjectClassification_MetaData)) }; // 1555664985
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_SessionPayload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_WorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_ObjectClassification_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewProp_ObjectClassification,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARMeshUpdatePayload",
		sizeof(FARMeshUpdatePayload),
		alignof(FARMeshUpdatePayload),
		Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARMeshUpdatePayload()
	{
		if (!Z_Registration_Info_UScriptStruct_ARMeshUpdatePayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARMeshUpdatePayload.InnerSingleton, Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARMeshUpdatePayload.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARGeoAnchorUpdatePayload;
class UScriptStruct* FARGeoAnchorUpdatePayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARGeoAnchorUpdatePayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARGeoAnchorUpdatePayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARGeoAnchorUpdatePayload"));
	}
	return Z_Registration_Info_UScriptStruct_ARGeoAnchorUpdatePayload.OuterSingleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARGeoAnchorUpdatePayload>()
{
	return FARGeoAnchorUpdatePayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionPayload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Longitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Latitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AltitudeMeters_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AltitudeMeters;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AltitudeSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AltitudeSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AltitudeSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnchorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnchorName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARGeoAnchorUpdatePayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_SessionPayload_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_SessionPayload = { "SessionPayload", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARGeoAnchorUpdatePayload, SessionPayload), Z_Construct_UScriptStruct_FARSessionPayload, METADATA_PARAMS(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_SessionPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_SessionPayload_MetaData)) }; // 3298808518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARGeoAnchorUpdatePayload, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_WorldTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_Longitude_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARGeoAnchorUpdatePayload, Longitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_Longitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_Longitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_Latitude_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARGeoAnchorUpdatePayload, Latitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_Latitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_Latitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeMeters_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeMeters = { "AltitudeMeters", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARGeoAnchorUpdatePayload, AltitudeMeters), METADATA_PARAMS(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeMeters_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeSource_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeSource = { "AltitudeSource", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARGeoAnchorUpdatePayload, AltitudeSource), Z_Construct_UEnum_AugmentedReality_EARAltitudeSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeSource_MetaData)) }; // 962382879
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AnchorName_MetaData[] = {
		{ "Category", "AR" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AnchorName = { "AnchorName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARGeoAnchorUpdatePayload, AnchorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AnchorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AnchorName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_SessionPayload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_WorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_Longitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_Latitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AltitudeSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewProp_AnchorName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARGeoAnchorUpdatePayload",
		sizeof(FARGeoAnchorUpdatePayload),
		alignof(FARGeoAnchorUpdatePayload),
		Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload()
	{
		if (!Z_Registration_Info_UScriptStruct_ARGeoAnchorUpdatePayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARGeoAnchorUpdatePayload.InnerSingleton, Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARGeoAnchorUpdatePayload.InnerSingleton;
	}
	DEFINE_FUNCTION(UARComponent::execOnRep_Payload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Payload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARComponent::execUpdateVisualization)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateVisualization_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARComponent::execGetMRMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMRMeshComponent**)Z_Param__Result=P_THIS->GetMRMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARComponent::execSetNativeID)
	{
		P_GET_STRUCT(FGuid,Z_Param_NativeID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNativeID(Z_Param_NativeID);
		P_NATIVE_END;
	}
	static FName NAME_UARComponent_ReceiveRemove = FName(TEXT("ReceiveRemove"));
	void UARComponent::ReceiveRemove()
	{
		ProcessEvent(FindFunctionChecked(NAME_UARComponent_ReceiveRemove),NULL);
	}
	static FName NAME_UARComponent_UpdateVisualization = FName(TEXT("UpdateVisualization"));
	void UARComponent::UpdateVisualization()
	{
		ProcessEvent(FindFunctionChecked(NAME_UARComponent_UpdateVisualization),NULL);
	}
	void UARComponent::StaticRegisterNativesUARComponent()
	{
		UClass* Class = UARComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMRMesh", &UARComponent::execGetMRMesh },
			{ "OnRep_Payload", &UARComponent::execOnRep_Payload },
			{ "SetNativeID", &UARComponent::execSetNativeID },
			{ "UpdateVisualization", &UARComponent::execUpdateVisualization },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARComponent_GetMRMesh_Statics
	{
		struct ARComponent_eventGetMRMesh_Parms
		{
			UMRMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARComponent_eventGetMRMesh_Parms, ReturnValue), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARComponent, nullptr, "GetMRMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::ARComponent_eventGetMRMesh_Parms), Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARComponent_GetMRMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARComponent_OnRep_Payload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARComponent_OnRep_Payload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARComponent_OnRep_Payload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARComponent, nullptr, "OnRep_Payload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARComponent_OnRep_Payload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARComponent_OnRep_Payload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARComponent_OnRep_Payload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARComponent_OnRep_Payload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARComponent_ReceiveRemove_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARComponent_ReceiveRemove_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is removed, called on server and clients. */" },
		{ "DisplayName", "Remove" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is removed, called on server and clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARComponent_ReceiveRemove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARComponent, nullptr, "ReceiveRemove", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARComponent_ReceiveRemove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARComponent_ReceiveRemove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARComponent_ReceiveRemove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARComponent_ReceiveRemove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARComponent_SetNativeID_Statics
	{
		struct ARComponent_eventSetNativeID_Parms
		{
			FGuid NativeID;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NativeID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARComponent_SetNativeID_Statics::NewProp_NativeID = { "NativeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARComponent_eventSetNativeID_Parms, NativeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARComponent_SetNativeID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARComponent_SetNativeID_Statics::NewProp_NativeID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARComponent_SetNativeID_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARComponent_SetNativeID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARComponent, nullptr, "SetNativeID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARComponent_SetNativeID_Statics::ARComponent_eventSetNativeID_Parms), Z_Construct_UFunction_UARComponent_SetNativeID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARComponent_SetNativeID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARComponent_SetNativeID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARComponent_SetNativeID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARComponent_SetNativeID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARComponent_SetNativeID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARComponent_UpdateVisualization_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARComponent_UpdateVisualization_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay" },
		{ "DisplayName", "Update Visualization" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARComponent_UpdateVisualization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARComponent, nullptr, "UpdateVisualization", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARComponent_UpdateVisualization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARComponent_UpdateVisualization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARComponent_UpdateVisualization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARComponent_UpdateVisualization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARComponent);
	UClass* Z_Construct_UClass_UARComponent_NoRegister()
	{
		return UARComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NativeID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NativeID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultReplication_MetaData[];
#endif
		static void NewProp_bUseDefaultReplication_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultReplication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMeshMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultMeshMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWireframeMeshMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultWireframeMeshMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MRMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MRMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyTrackedGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MyTrackedGeometry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARComponent_GetMRMesh, "GetMRMesh" }, // 554466268
		{ &Z_Construct_UFunction_UARComponent_OnRep_Payload, "OnRep_Payload" }, // 4218809503
		{ &Z_Construct_UFunction_UARComponent_ReceiveRemove, "ReceiveRemove" }, // 2935053254
		{ &Z_Construct_UFunction_UARComponent_SetNativeID, "SetNativeID" }, // 3841715210
		{ &Z_Construct_UFunction_UARComponent_UpdateVisualization, "UpdateVisualization" }, // 1571859459
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "Comment", "/**\n * ARComponent handles replication and visualization update for AR tracked geometries\n * ARComponent is created in either multiplayer or local only environment\n *\n * To customize the visualization logic, override 'UpdateVisualization' in Blueprint\n * or 'UpdateVisualization_Implementation' in C++\n *\n * To customize the replication logic, disable 'bUseDefaultReplication' and implement\n * your own replication logic when the ARComponent is updated (see how 'Update' is implemented in the sub classes)\n *\n * A MRMeshComponent will be created if mesh visualization is enabled (see UARSessionConfig::bGenerateMeshDataFromTrackedGeometry)\n * It can be accessed via 'GetMRMesh' or 'UARTrackedGeometry::GetUnderlyingMesh'\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARComponent.h" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "ARComponent handles replication and visualization update for AR tracked geometries\nARComponent is created in either multiplayer or local only environment\n\nTo customize the visualization logic, override 'UpdateVisualization' in Blueprint\nor 'UpdateVisualization_Implementation' in C++\n\nTo customize the replication logic, disable 'bUseDefaultReplication' and implement\nyour own replication logic when the ARComponent is updated (see how 'Update' is implemented in the sub classes)\n\nA MRMeshComponent will be created if mesh visualization is enabled (see UARSessionConfig::bGenerateMeshDataFromTrackedGeometry)\nIt can be accessed via 'GetMRMesh' or 'UARTrackedGeometry::GetUnderlyingMesh'" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARComponent_Statics::NewProp_NativeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARComponent_Statics::NewProp_NativeID = { "NativeID", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARComponent, NativeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UARComponent_Statics::NewProp_NativeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARComponent_Statics::NewProp_NativeID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARComponent_Statics::NewProp_bUseDefaultReplication_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "Comment", "/** If the default replication logic should be used for this component */" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "If the default replication logic should be used for this component" },
	};
#endif
	void Z_Construct_UClass_UARComponent_Statics::NewProp_bUseDefaultReplication_SetBit(void* Obj)
	{
		((UARComponent*)Obj)->bUseDefaultReplication = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARComponent_Statics::NewProp_bUseDefaultReplication = { "bUseDefaultReplication", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARComponent), &Z_Construct_UClass_UARComponent_Statics::NewProp_bUseDefaultReplication_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARComponent_Statics::NewProp_bUseDefaultReplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARComponent_Statics::NewProp_bUseDefaultReplication_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARComponent_Statics::NewProp_DefaultMeshMaterial_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "Comment", "/**\n\x09 * The default material to be used for the generated mesh component.\n\x09 * If not set, the DefaultMeshMaterial from ARSessionConfig will be used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "The default material to be used for the generated mesh component.\nIf not set, the DefaultMeshMaterial from ARSessionConfig will be used." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UARComponent_Statics::NewProp_DefaultMeshMaterial = { "DefaultMeshMaterial", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARComponent, DefaultMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARComponent_Statics::NewProp_DefaultMeshMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARComponent_Statics::NewProp_DefaultMeshMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARComponent_Statics::NewProp_DefaultWireframeMeshMaterial_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "Comment", "/**\n\x09 * The default wireframe material to be used for the generated mesh component.\n\x09 * If not set, the DefaultMeshMaterial from ARSessionConfig will be used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "The default wireframe material to be used for the generated mesh component.\nIf not set, the DefaultMeshMaterial from ARSessionConfig will be used." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UARComponent_Statics::NewProp_DefaultWireframeMeshMaterial = { "DefaultWireframeMeshMaterial", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARComponent, DefaultWireframeMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARComponent_Statics::NewProp_DefaultWireframeMeshMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARComponent_Statics::NewProp_DefaultWireframeMeshMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARComponent_Statics::NewProp_MRMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UARComponent_Statics::NewProp_MRMeshComponent = { "MRMeshComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARComponent, MRMeshComponent), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARComponent_Statics::NewProp_MRMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARComponent_Statics::NewProp_MRMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARComponent_Statics::NewProp_MyTrackedGeometry_MetaData[] = {
		{ "Comment", "/** The tracked geometry used for updating this component, only set on \"local\" client */" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "The tracked geometry used for updating this component, only set on \"local\" client" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UARComponent_Statics::NewProp_MyTrackedGeometry = { "MyTrackedGeometry", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARComponent, MyTrackedGeometry), Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARComponent_Statics::NewProp_MyTrackedGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARComponent_Statics::NewProp_MyTrackedGeometry_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARComponent_Statics::NewProp_NativeID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARComponent_Statics::NewProp_bUseDefaultReplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARComponent_Statics::NewProp_DefaultMeshMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARComponent_Statics::NewProp_DefaultWireframeMeshMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARComponent_Statics::NewProp_MRMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARComponent_Statics::NewProp_MyTrackedGeometry,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARComponent_Statics::ClassParams = {
		&UARComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UARComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARComponent()
	{
		if (!Z_Registration_Info_UClass_UARComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARComponent.OuterSingleton, Z_Construct_UClass_UARComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARComponent.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARComponent>()
	{
		return UARComponent::StaticClass();
	}

	void UARComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_NativeID(TEXT("NativeID"));

		const bool bIsValid = true
			&& Name_NativeID == ClassReps[(int32)ENetFields_Private::NativeID].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARComponent);
	UARComponent::~UARComponent() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlaneComponentDebugMode;
	static UEnum* EPlaneComponentDebugMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlaneComponentDebugMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlaneComponentDebugMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EPlaneComponentDebugMode"));
		}
		return Z_Registration_Info_UEnum_EPlaneComponentDebugMode.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EPlaneComponentDebugMode>()
	{
		return EPlaneComponentDebugMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode_Statics::Enumerators[] = {
		{ "EPlaneComponentDebugMode::None", (int64)EPlaneComponentDebugMode::None },
		{ "EPlaneComponentDebugMode::ShowNetworkRole", (int64)EPlaneComponentDebugMode::ShowNetworkRole },
		{ "EPlaneComponentDebugMode::ShowClassification", (int64)EPlaneComponentDebugMode::ShowClassification },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "None.Comment", "/** The debug mode is disabled */" },
		{ "None.Name", "EPlaneComponentDebugMode::None" },
		{ "None.ToolTip", "The debug mode is disabled" },
		{ "ShowClassification.Comment", "/** Use different coloration to indicate the classification of this plane */" },
		{ "ShowClassification.Name", "EPlaneComponentDebugMode::ShowClassification" },
		{ "ShowClassification.ToolTip", "Use different coloration to indicate the classification of this plane" },
		{ "ShowNetworkRole.Comment", "/** Use different coloration to indicate if the plane belongs to the local or remote client */" },
		{ "ShowNetworkRole.Name", "EPlaneComponentDebugMode::ShowNetworkRole" },
		{ "ShowNetworkRole.ToolTip", "Use different coloration to indicate if the plane belongs to the local or remote client" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EPlaneComponentDebugMode",
		"EPlaneComponentDebugMode",
		Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode()
	{
		if (!Z_Registration_Info_UEnum_EPlaneComponentDebugMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlaneComponentDebugMode.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlaneComponentDebugMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UARPlaneComponent::execServerUpdatePayload)
	{
		P_GET_STRUCT(FARPlaneUpdatePayload,Z_Param_NewPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdatePayload_Validate(Z_Param_NewPayload))
		{
			RPC_ValidateFailed(TEXT("ServerUpdatePayload_Validate"));
			return;
		}
		P_THIS->ServerUpdatePayload_Implementation(Z_Param_NewPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARPlaneComponent::execGetObjectClassificationDebugColors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<EARObjectClassification,FLinearColor>*)Z_Param__Result=UARPlaneComponent::GetObjectClassificationDebugColors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARPlaneComponent::execSetObjectClassificationDebugColors)
	{
		P_GET_TMAP_REF(EARObjectClassification,FLinearColor,Z_Param_Out_InColors);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARPlaneComponent::SetObjectClassificationDebugColors(Z_Param_Out_InColors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARPlaneComponent::execSetPlaneComponentDebugMode)
	{
		P_GET_ENUM(EPlaneComponentDebugMode,Z_Param_NewDebugMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARPlaneComponent::SetPlaneComponentDebugMode(EPlaneComponentDebugMode(Z_Param_NewDebugMode));
		P_NATIVE_END;
	}
	struct ARPlaneComponent_eventReceiveAdd_Parms
	{
		FARPlaneUpdatePayload Payload;
	};
	struct ARPlaneComponent_eventReceiveUpdate_Parms
	{
		FARPlaneUpdatePayload Payload;
	};
	struct ARPlaneComponent_eventServerUpdatePayload_Parms
	{
		FARPlaneUpdatePayload NewPayload;
	};
	static FName NAME_UARPlaneComponent_ReceiveAdd = FName(TEXT("ReceiveAdd"));
	void UARPlaneComponent::ReceiveAdd(FARPlaneUpdatePayload const& Payload)
	{
		ARPlaneComponent_eventReceiveAdd_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARPlaneComponent_ReceiveAdd),&Parms);
	}
	static FName NAME_UARPlaneComponent_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
	void UARPlaneComponent::ReceiveUpdate(FARPlaneUpdatePayload const& Payload)
	{
		ARPlaneComponent_eventReceiveUpdate_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARPlaneComponent_ReceiveUpdate),&Parms);
	}
	static FName NAME_UARPlaneComponent_ServerUpdatePayload = FName(TEXT("ServerUpdatePayload"));
	void UARPlaneComponent::ServerUpdatePayload(FARPlaneUpdatePayload const& NewPayload)
	{
		ARPlaneComponent_eventServerUpdatePayload_Parms Parms;
		Parms.NewPayload=NewPayload;
		ProcessEvent(FindFunctionChecked(NAME_UARPlaneComponent_ServerUpdatePayload),&Parms);
	}
	void UARPlaneComponent::StaticRegisterNativesUARPlaneComponent()
	{
		UClass* Class = UARPlaneComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetObjectClassificationDebugColors", &UARPlaneComponent::execGetObjectClassificationDebugColors },
			{ "ServerUpdatePayload", &UARPlaneComponent::execServerUpdatePayload },
			{ "SetObjectClassificationDebugColors", &UARPlaneComponent::execSetObjectClassificationDebugColors },
			{ "SetPlaneComponentDebugMode", &UARPlaneComponent::execSetPlaneComponentDebugMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics
	{
		struct ARPlaneComponent_eventGetObjectClassificationDebugColors_Parms
		{
			TMap<EARObjectClassification,FLinearColor> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::NewProp_ReturnValue_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_AugmentedReality_EARObjectClassification, METADATA_PARAMS(nullptr, 0) }; // 1555664985
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPlaneComponent_eventGetObjectClassificationDebugColors_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::NewProp_ReturnValue_MetaData)) }; // 1555664985
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::NewProp_ReturnValue_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay | Debug" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneComponent, nullptr, "GetObjectClassificationDebugColors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::ARPlaneComponent_eventGetObjectClassificationDebugColors_Parms), Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPlaneComponent_eventReceiveAdd_Parms, Payload), Z_Construct_UScriptStruct_FARPlaneUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData)) }; // 3269213349
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is first added, called on server and clients. */" },
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is first added, called on server and clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneComponent, nullptr, "ReceiveAdd", nullptr, nullptr, sizeof(ARPlaneComponent_eventReceiveAdd_Parms), Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPlaneComponent_eventReceiveUpdate_Parms, Payload), Z_Construct_UScriptStruct_FARPlaneUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData)) }; // 3269213349
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is updated, called on server and clients. */" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is updated, called on server and clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneComponent, nullptr, "ReceiveUpdate", nullptr, nullptr, sizeof(ARPlaneComponent_eventReceiveUpdate_Parms), Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::NewProp_NewPayload = { "NewPayload", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPlaneComponent_eventServerUpdatePayload_Parms, NewPayload), Z_Construct_UScriptStruct_FARPlaneUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData)) }; // 3269213349
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::NewProp_NewPayload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneComponent, nullptr, "ServerUpdatePayload", nullptr, nullptr, sizeof(ARPlaneComponent_eventServerUpdatePayload_Parms), Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics
	{
		struct ARPlaneComponent_eventSetObjectClassificationDebugColors_Parms
		{
			TMap<EARObjectClassification,FLinearColor> InColors;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InColors_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InColors_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InColors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InColors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InColors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::NewProp_InColors_ValueProp = { "InColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::NewProp_InColors_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::NewProp_InColors_Key_KeyProp = { "InColors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_AugmentedReality_EARObjectClassification, METADATA_PARAMS(nullptr, 0) }; // 1555664985
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::NewProp_InColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::NewProp_InColors = { "InColors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPlaneComponent_eventSetObjectClassificationDebugColors_Parms, InColors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::NewProp_InColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::NewProp_InColors_MetaData)) }; // 1555664985
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::NewProp_InColors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::NewProp_InColors_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::NewProp_InColors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::NewProp_InColors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay | Debug" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneComponent, nullptr, "SetObjectClassificationDebugColors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::ARPlaneComponent_eventSetObjectClassificationDebugColors_Parms), Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics
	{
		struct ARPlaneComponent_eventSetPlaneComponentDebugMode_Parms
		{
			EPlaneComponentDebugMode NewDebugMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewDebugMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewDebugMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::NewProp_NewDebugMode = { "NewDebugMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPlaneComponent_eventSetPlaneComponentDebugMode_Parms, NewDebugMode), Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode, METADATA_PARAMS(nullptr, 0) }; // 4017464626
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::NewProp_NewDebugMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay | Debug" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneComponent, nullptr, "SetPlaneComponentDebugMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::ARPlaneComponent_eventSetPlaneComponentDebugMode_Parms), Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARPlaneComponent);
	UClass* Z_Construct_UClass_UARPlaneComponent_NoRegister()
	{
		return UARPlaneComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARPlaneComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARPlaneComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARPlaneComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors, "GetObjectClassificationDebugColors" }, // 3194423460
		{ &Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd, "ReceiveAdd" }, // 2786782052
		{ &Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate, "ReceiveUpdate" }, // 1450131357
		{ &Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload, "ServerUpdatePayload" }, // 3399604237
		{ &Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors, "SetObjectClassificationDebugColors" }, // 54795710
		{ &Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode, "SetPlaneComponentDebugMode" }, // 1656237470
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPlaneComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPlaneComponent_Statics::NewProp_ReplicatedPayload_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARPlaneComponent_Statics::NewProp_ReplicatedPayload = { "ReplicatedPayload", "OnRep_Payload", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARPlaneComponent, ReplicatedPayload), Z_Construct_UScriptStruct_FARPlaneUpdatePayload, METADATA_PARAMS(Z_Construct_UClass_UARPlaneComponent_Statics::NewProp_ReplicatedPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARPlaneComponent_Statics::NewProp_ReplicatedPayload_MetaData)) }; // 3269213349
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARPlaneComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPlaneComponent_Statics::NewProp_ReplicatedPayload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARPlaneComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARPlaneComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARPlaneComponent_Statics::ClassParams = {
		&UARPlaneComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARPlaneComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARPlaneComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARPlaneComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARPlaneComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARPlaneComponent()
	{
		if (!Z_Registration_Info_UClass_UARPlaneComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARPlaneComponent.OuterSingleton, Z_Construct_UClass_UARPlaneComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARPlaneComponent.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARPlaneComponent>()
	{
		return UARPlaneComponent::StaticClass();
	}

	void UARPlaneComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedPayload(TEXT("ReplicatedPayload"));

		const bool bIsValid = true
			&& Name_ReplicatedPayload == ClassReps[(int32)ENetFields_Private::ReplicatedPayload].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARPlaneComponent"));
	}
	UARPlaneComponent::UARPlaneComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARPlaneComponent);
	UARPlaneComponent::~UARPlaneComponent() {}
	DEFINE_FUNCTION(UARPointComponent::execServerUpdatePayload)
	{
		P_GET_STRUCT(FARPointUpdatePayload,Z_Param_NewPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdatePayload_Validate(Z_Param_NewPayload))
		{
			RPC_ValidateFailed(TEXT("ServerUpdatePayload_Validate"));
			return;
		}
		P_THIS->ServerUpdatePayload_Implementation(Z_Param_NewPayload);
		P_NATIVE_END;
	}
	struct ARPointComponent_eventReceiveAdd_Parms
	{
		FARPointUpdatePayload Payload;
	};
	struct ARPointComponent_eventReceiveUpdate_Parms
	{
		FARPointUpdatePayload Payload;
	};
	struct ARPointComponent_eventServerUpdatePayload_Parms
	{
		FARPointUpdatePayload NewPayload;
	};
	static FName NAME_UARPointComponent_ReceiveAdd = FName(TEXT("ReceiveAdd"));
	void UARPointComponent::ReceiveAdd(FARPointUpdatePayload const& Payload)
	{
		ARPointComponent_eventReceiveAdd_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARPointComponent_ReceiveAdd),&Parms);
	}
	static FName NAME_UARPointComponent_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
	void UARPointComponent::ReceiveUpdate(FARPointUpdatePayload const& Payload)
	{
		ARPointComponent_eventReceiveUpdate_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARPointComponent_ReceiveUpdate),&Parms);
	}
	static FName NAME_UARPointComponent_ServerUpdatePayload = FName(TEXT("ServerUpdatePayload"));
	void UARPointComponent::ServerUpdatePayload(FARPointUpdatePayload const& NewPayload)
	{
		ARPointComponent_eventServerUpdatePayload_Parms Parms;
		Parms.NewPayload=NewPayload;
		ProcessEvent(FindFunctionChecked(NAME_UARPointComponent_ServerUpdatePayload),&Parms);
	}
	void UARPointComponent::StaticRegisterNativesUARPointComponent()
	{
		UClass* Class = UARPointComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerUpdatePayload", &UARPointComponent::execServerUpdatePayload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPointComponent_eventReceiveAdd_Parms, Payload), Z_Construct_UScriptStruct_FARPointUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData)) }; // 2891390558
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is first added, called on server and clients. */" },
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is first added, called on server and clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPointComponent, nullptr, "ReceiveAdd", nullptr, nullptr, sizeof(ARPointComponent_eventReceiveAdd_Parms), Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPointComponent_ReceiveAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPointComponent_eventReceiveUpdate_Parms, Payload), Z_Construct_UScriptStruct_FARPointUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData)) }; // 2891390558
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is updated, called on server and clients. */" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is updated, called on server and clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPointComponent, nullptr, "ReceiveUpdate", nullptr, nullptr, sizeof(ARPointComponent_eventReceiveUpdate_Parms), Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPointComponent_ReceiveUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::NewProp_NewPayload = { "NewPayload", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPointComponent_eventServerUpdatePayload_Parms, NewPayload), Z_Construct_UScriptStruct_FARPointUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData)) }; // 2891390558
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::NewProp_NewPayload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPointComponent, nullptr, "ServerUpdatePayload", nullptr, nullptr, sizeof(ARPointComponent_eventServerUpdatePayload_Parms), Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARPointComponent);
	UClass* Z_Construct_UClass_UARPointComponent_NoRegister()
	{
		return UARPointComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARPointComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARPointComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARPointComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARPointComponent_ReceiveAdd, "ReceiveAdd" }, // 2087836950
		{ &Z_Construct_UFunction_UARPointComponent_ReceiveUpdate, "ReceiveUpdate" }, // 467004656
		{ &Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload, "ServerUpdatePayload" }, // 1222990774
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPointComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPointComponent_Statics::NewProp_ReplicatedPayload_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARPointComponent_Statics::NewProp_ReplicatedPayload = { "ReplicatedPayload", "OnRep_Payload", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARPointComponent, ReplicatedPayload), Z_Construct_UScriptStruct_FARPointUpdatePayload, METADATA_PARAMS(Z_Construct_UClass_UARPointComponent_Statics::NewProp_ReplicatedPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARPointComponent_Statics::NewProp_ReplicatedPayload_MetaData)) }; // 2891390558
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARPointComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPointComponent_Statics::NewProp_ReplicatedPayload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARPointComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARPointComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARPointComponent_Statics::ClassParams = {
		&UARPointComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARPointComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARPointComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARPointComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARPointComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARPointComponent()
	{
		if (!Z_Registration_Info_UClass_UARPointComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARPointComponent.OuterSingleton, Z_Construct_UClass_UARPointComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARPointComponent.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARPointComponent>()
	{
		return UARPointComponent::StaticClass();
	}

	void UARPointComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedPayload(TEXT("ReplicatedPayload"));

		const bool bIsValid = true
			&& Name_ReplicatedPayload == ClassReps[(int32)ENetFields_Private::ReplicatedPayload].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARPointComponent"));
	}
	UARPointComponent::UARPointComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARPointComponent);
	UARPointComponent::~UARPointComponent() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFaceComponentDebugMode;
	static UEnum* EFaceComponentDebugMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFaceComponentDebugMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFaceComponentDebugMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EFaceComponentDebugMode"));
		}
		return Z_Registration_Info_UEnum_EFaceComponentDebugMode.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EFaceComponentDebugMode>()
	{
		return EFaceComponentDebugMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode_Statics::Enumerators[] = {
		{ "EFaceComponentDebugMode::None", (int64)EFaceComponentDebugMode::None },
		{ "EFaceComponentDebugMode::ShowEyeVectors", (int64)EFaceComponentDebugMode::ShowEyeVectors },
		{ "EFaceComponentDebugMode::ShowFaceMesh", (int64)EFaceComponentDebugMode::ShowFaceMesh },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "None.Comment", "/** The debug mode is disabled */" },
		{ "None.Name", "EFaceComponentDebugMode::None" },
		{ "None.ToolTip", "The debug mode is disabled" },
		{ "ShowEyeVectors.Comment", "/** Display vectors for both eyes */" },
		{ "ShowEyeVectors.Name", "EFaceComponentDebugMode::ShowEyeVectors" },
		{ "ShowEyeVectors.ToolTip", "Display vectors for both eyes" },
		{ "ShowFaceMesh.Comment", "/** Display the face mesh in wireframe */" },
		{ "ShowFaceMesh.Name", "EFaceComponentDebugMode::ShowFaceMesh" },
		{ "ShowFaceMesh.ToolTip", "Display the face mesh in wireframe" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EFaceComponentDebugMode",
		"EFaceComponentDebugMode",
		Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode()
	{
		if (!Z_Registration_Info_UEnum_EFaceComponentDebugMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFaceComponentDebugMode.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFaceComponentDebugMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARFaceTransformMixing;
	static UEnum* EARFaceTransformMixing_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARFaceTransformMixing.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARFaceTransformMixing.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARFaceTransformMixing"));
		}
		return Z_Registration_Info_UEnum_EARFaceTransformMixing.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFaceTransformMixing>()
	{
		return EARFaceTransformMixing_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing_Statics::Enumerators[] = {
		{ "EARFaceTransformMixing::ComponentOnly", (int64)EARFaceTransformMixing::ComponentOnly },
		{ "EARFaceTransformMixing::ComponentLocationTrackedRotation", (int64)EARFaceTransformMixing::ComponentLocationTrackedRotation },
		{ "EARFaceTransformMixing::ComponentWithTracked", (int64)EARFaceTransformMixing::ComponentWithTracked },
		{ "EARFaceTransformMixing::TrackingOnly", (int64)EARFaceTransformMixing::TrackingOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ComponentLocationTrackedRotation.Comment", "/** Use the component's location and apply the rotation from the tracked mesh */" },
		{ "ComponentLocationTrackedRotation.Name", "EARFaceTransformMixing::ComponentLocationTrackedRotation" },
		{ "ComponentLocationTrackedRotation.ToolTip", "Use the component's location and apply the rotation from the tracked mesh" },
		{ "ComponentOnly.Comment", "/** Uses the component's transform exclusively. Only setting for non-tracked meshes */" },
		{ "ComponentOnly.Name", "EARFaceTransformMixing::ComponentOnly" },
		{ "ComponentOnly.ToolTip", "Uses the component's transform exclusively. Only setting for non-tracked meshes" },
		{ "ComponentWithTracked.Comment", "/** Concatenate the component and the tracked face transforms */" },
		{ "ComponentWithTracked.Name", "EARFaceTransformMixing::ComponentWithTracked" },
		{ "ComponentWithTracked.ToolTip", "Concatenate the component and the tracked face transforms" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "TrackingOnly.Comment", "/** Use only the tracked face transform */" },
		{ "TrackingOnly.Name", "EARFaceTransformMixing::TrackingOnly" },
		{ "TrackingOnly.ToolTip", "Use only the tracked face transform" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARFaceTransformMixing",
		"EARFaceTransformMixing",
		Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing()
	{
		if (!Z_Registration_Info_UEnum_EARFaceTransformMixing.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARFaceTransformMixing.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARFaceTransformMixing.InnerSingleton;
	}
	DEFINE_FUNCTION(UARFaceComponent::execServerUpdatePayload)
	{
		P_GET_STRUCT(FARFaceUpdatePayload,Z_Param_NewPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdatePayload_Validate(Z_Param_NewPayload))
		{
			RPC_ValidateFailed(TEXT("ServerUpdatePayload_Validate"));
			return;
		}
		P_THIS->ServerUpdatePayload_Implementation(Z_Param_NewPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARFaceComponent::execSetFaceComponentDebugMode)
	{
		P_GET_ENUM(EFaceComponentDebugMode,Z_Param_NewDebugMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARFaceComponent::SetFaceComponentDebugMode(EFaceComponentDebugMode(Z_Param_NewDebugMode));
		P_NATIVE_END;
	}
	struct ARFaceComponent_eventReceiveAdd_Parms
	{
		FARFaceUpdatePayload Payload;
	};
	struct ARFaceComponent_eventReceiveUpdate_Parms
	{
		FARFaceUpdatePayload Payload;
	};
	struct ARFaceComponent_eventServerUpdatePayload_Parms
	{
		FARFaceUpdatePayload NewPayload;
	};
	static FName NAME_UARFaceComponent_ReceiveAdd = FName(TEXT("ReceiveAdd"));
	void UARFaceComponent::ReceiveAdd(FARFaceUpdatePayload const& Payload)
	{
		ARFaceComponent_eventReceiveAdd_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARFaceComponent_ReceiveAdd),&Parms);
	}
	static FName NAME_UARFaceComponent_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
	void UARFaceComponent::ReceiveUpdate(FARFaceUpdatePayload const& Payload)
	{
		ARFaceComponent_eventReceiveUpdate_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARFaceComponent_ReceiveUpdate),&Parms);
	}
	static FName NAME_UARFaceComponent_ServerUpdatePayload = FName(TEXT("ServerUpdatePayload"));
	void UARFaceComponent::ServerUpdatePayload(FARFaceUpdatePayload const& NewPayload)
	{
		ARFaceComponent_eventServerUpdatePayload_Parms Parms;
		Parms.NewPayload=NewPayload;
		ProcessEvent(FindFunctionChecked(NAME_UARFaceComponent_ServerUpdatePayload),&Parms);
	}
	void UARFaceComponent::StaticRegisterNativesUARFaceComponent()
	{
		UClass* Class = UARFaceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerUpdatePayload", &UARFaceComponent::execServerUpdatePayload },
			{ "SetFaceComponentDebugMode", &UARFaceComponent::execSetFaceComponentDebugMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARFaceComponent_eventReceiveAdd_Parms, Payload), Z_Construct_UScriptStruct_FARFaceUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData)) }; // 225471742
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is first added, called on server and clients. */" },
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is first added, called on server and clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARFaceComponent, nullptr, "ReceiveAdd", nullptr, nullptr, sizeof(ARFaceComponent_eventReceiveAdd_Parms), Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARFaceComponent_ReceiveAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARFaceComponent_eventReceiveUpdate_Parms, Payload), Z_Construct_UScriptStruct_FARFaceUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData)) }; // 225471742
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is updated, called on server and clients. */" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is updated, called on server and clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARFaceComponent, nullptr, "ReceiveUpdate", nullptr, nullptr, sizeof(ARFaceComponent_eventReceiveUpdate_Parms), Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::NewProp_NewPayload = { "NewPayload", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARFaceComponent_eventServerUpdatePayload_Parms, NewPayload), Z_Construct_UScriptStruct_FARFaceUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData)) }; // 225471742
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::NewProp_NewPayload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARFaceComponent, nullptr, "ServerUpdatePayload", nullptr, nullptr, sizeof(ARFaceComponent_eventServerUpdatePayload_Parms), Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics
	{
		struct ARFaceComponent_eventSetFaceComponentDebugMode_Parms
		{
			EFaceComponentDebugMode NewDebugMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewDebugMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewDebugMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::NewProp_NewDebugMode = { "NewDebugMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARFaceComponent_eventSetFaceComponentDebugMode_Parms, NewDebugMode), Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode, METADATA_PARAMS(nullptr, 0) }; // 3726945311
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::NewProp_NewDebugMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay | Debug" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARFaceComponent, nullptr, "SetFaceComponentDebugMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::ARFaceComponent_eventSetFaceComponentDebugMode_Parms), Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARFaceComponent);
	UClass* Z_Construct_UClass_UARFaceComponent_NoRegister()
	{
		return UARFaceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARFaceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransformSetting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSetting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateVertexNormal_MetaData[];
#endif
		static void NewProp_bUpdateVertexNormal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateVertexNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFaceOutOfScreen_MetaData[];
#endif
		static void NewProp_bFaceOutOfScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFaceOutOfScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARFaceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARFaceComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARFaceComponent_ReceiveAdd, "ReceiveAdd" }, // 389426187
		{ &Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate, "ReceiveUpdate" }, // 3854624835
		{ &Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload, "ServerUpdatePayload" }, // 2687815692
		{ &Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode, "SetFaceComponentDebugMode" }, // 2597756557
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARFaceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARFaceComponent_Statics::NewProp_TransformSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARFaceComponent_Statics::NewProp_TransformSetting_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "Comment", "/**\x09""Determines how the transform from tracking data and the component's transform are mixed together. */" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Determines how the transform from tracking data and the component's transform are mixed together." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARFaceComponent_Statics::NewProp_TransformSetting = { "TransformSetting", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARFaceComponent, TransformSetting), Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing, METADATA_PARAMS(Z_Construct_UClass_UARFaceComponent_Statics::NewProp_TransformSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceComponent_Statics::NewProp_TransformSetting_MetaData)) }; // 4180263817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bUpdateVertexNormal_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "Comment", "/**\x09Whether to automatically update the vertex normal when the mesh is updated. */" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Whether to automatically update the vertex normal when the mesh is updated." },
	};
#endif
	void Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bUpdateVertexNormal_SetBit(void* Obj)
	{
		((UARFaceComponent*)Obj)->bUpdateVertexNormal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bUpdateVertexNormal = { "bUpdateVertexNormal", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARFaceComponent), &Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bUpdateVertexNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bUpdateVertexNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bUpdateVertexNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bFaceOutOfScreen_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "Comment", "/**\x09Whether the mesh should be rotated so that it's facing out of the screen. */" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Whether the mesh should be rotated so that it's facing out of the screen." },
	};
#endif
	void Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bFaceOutOfScreen_SetBit(void* Obj)
	{
		((UARFaceComponent*)Obj)->bFaceOutOfScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bFaceOutOfScreen = { "bFaceOutOfScreen", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARFaceComponent), &Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bFaceOutOfScreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bFaceOutOfScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bFaceOutOfScreen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARFaceComponent_Statics::NewProp_ReplicatedPayload_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARFaceComponent_Statics::NewProp_ReplicatedPayload = { "ReplicatedPayload", "OnRep_Payload", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARFaceComponent, ReplicatedPayload), Z_Construct_UScriptStruct_FARFaceUpdatePayload, METADATA_PARAMS(Z_Construct_UClass_UARFaceComponent_Statics::NewProp_ReplicatedPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceComponent_Statics::NewProp_ReplicatedPayload_MetaData)) }; // 225471742
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARFaceComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceComponent_Statics::NewProp_TransformSetting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceComponent_Statics::NewProp_TransformSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bUpdateVertexNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bFaceOutOfScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceComponent_Statics::NewProp_ReplicatedPayload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARFaceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARFaceComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARFaceComponent_Statics::ClassParams = {
		&UARFaceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARFaceComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARFaceComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARFaceComponent()
	{
		if (!Z_Registration_Info_UClass_UARFaceComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARFaceComponent.OuterSingleton, Z_Construct_UClass_UARFaceComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARFaceComponent.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARFaceComponent>()
	{
		return UARFaceComponent::StaticClass();
	}

	void UARFaceComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedPayload(TEXT("ReplicatedPayload"));

		const bool bIsValid = true
			&& Name_ReplicatedPayload == ClassReps[(int32)ENetFields_Private::ReplicatedPayload].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARFaceComponent"));
	}
	UARFaceComponent::UARFaceComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARFaceComponent);
	UARFaceComponent::~UARFaceComponent() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EImageComponentDebugMode;
	static UEnum* EImageComponentDebugMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EImageComponentDebugMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EImageComponentDebugMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EImageComponentDebugMode"));
		}
		return Z_Registration_Info_UEnum_EImageComponentDebugMode.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EImageComponentDebugMode>()
	{
		return EImageComponentDebugMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode_Statics::Enumerators[] = {
		{ "EImageComponentDebugMode::None", (int64)EImageComponentDebugMode::None },
		{ "EImageComponentDebugMode::ShowDetectedImage", (int64)EImageComponentDebugMode::ShowDetectedImage },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "None.Comment", "/** The debug mode is disabled */" },
		{ "None.Name", "EImageComponentDebugMode::None" },
		{ "None.ToolTip", "The debug mode is disabled" },
		{ "ShowDetectedImage.Comment", "/** Display info about the detected image */" },
		{ "ShowDetectedImage.Name", "EImageComponentDebugMode::ShowDetectedImage" },
		{ "ShowDetectedImage.ToolTip", "Display info about the detected image" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EImageComponentDebugMode",
		"EImageComponentDebugMode",
		Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode()
	{
		if (!Z_Registration_Info_UEnum_EImageComponentDebugMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EImageComponentDebugMode.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EImageComponentDebugMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UARImageComponent::execServerUpdatePayload)
	{
		P_GET_STRUCT(FARImageUpdatePayload,Z_Param_NewPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdatePayload_Validate(Z_Param_NewPayload))
		{
			RPC_ValidateFailed(TEXT("ServerUpdatePayload_Validate"));
			return;
		}
		P_THIS->ServerUpdatePayload_Implementation(Z_Param_NewPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARImageComponent::execSetImageComponentDebugMode)
	{
		P_GET_ENUM(EImageComponentDebugMode,Z_Param_NewDebugMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARImageComponent::SetImageComponentDebugMode(EImageComponentDebugMode(Z_Param_NewDebugMode));
		P_NATIVE_END;
	}
	struct ARImageComponent_eventReceiveAdd_Parms
	{
		FARImageUpdatePayload Payload;
	};
	struct ARImageComponent_eventReceiveUpdate_Parms
	{
		FARImageUpdatePayload Payload;
	};
	struct ARImageComponent_eventServerUpdatePayload_Parms
	{
		FARImageUpdatePayload NewPayload;
	};
	static FName NAME_UARImageComponent_ReceiveAdd = FName(TEXT("ReceiveAdd"));
	void UARImageComponent::ReceiveAdd(FARImageUpdatePayload const& Payload)
	{
		ARImageComponent_eventReceiveAdd_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARImageComponent_ReceiveAdd),&Parms);
	}
	static FName NAME_UARImageComponent_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
	void UARImageComponent::ReceiveUpdate(FARImageUpdatePayload const& Payload)
	{
		ARImageComponent_eventReceiveUpdate_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARImageComponent_ReceiveUpdate),&Parms);
	}
	static FName NAME_UARImageComponent_ServerUpdatePayload = FName(TEXT("ServerUpdatePayload"));
	void UARImageComponent::ServerUpdatePayload(FARImageUpdatePayload const& NewPayload)
	{
		ARImageComponent_eventServerUpdatePayload_Parms Parms;
		Parms.NewPayload=NewPayload;
		ProcessEvent(FindFunctionChecked(NAME_UARImageComponent_ServerUpdatePayload),&Parms);
	}
	void UARImageComponent::StaticRegisterNativesUARImageComponent()
	{
		UClass* Class = UARImageComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerUpdatePayload", &UARImageComponent::execServerUpdatePayload },
			{ "SetImageComponentDebugMode", &UARImageComponent::execSetImageComponentDebugMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARImageComponent_eventReceiveAdd_Parms, Payload), Z_Construct_UScriptStruct_FARImageUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData)) }; // 115974704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is first added, called on server and clients. */" },
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is first added, called on server and clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARImageComponent, nullptr, "ReceiveAdd", nullptr, nullptr, sizeof(ARImageComponent_eventReceiveAdd_Parms), Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARImageComponent_ReceiveAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARImageComponent_eventReceiveUpdate_Parms, Payload), Z_Construct_UScriptStruct_FARImageUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData)) }; // 115974704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is updated, called on server and clients. */" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is updated, called on server and clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARImageComponent, nullptr, "ReceiveUpdate", nullptr, nullptr, sizeof(ARImageComponent_eventReceiveUpdate_Parms), Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARImageComponent_ReceiveUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::NewProp_NewPayload = { "NewPayload", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARImageComponent_eventServerUpdatePayload_Parms, NewPayload), Z_Construct_UScriptStruct_FARImageUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData)) }; // 115974704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::NewProp_NewPayload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARImageComponent, nullptr, "ServerUpdatePayload", nullptr, nullptr, sizeof(ARImageComponent_eventServerUpdatePayload_Parms), Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics
	{
		struct ARImageComponent_eventSetImageComponentDebugMode_Parms
		{
			EImageComponentDebugMode NewDebugMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewDebugMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewDebugMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::NewProp_NewDebugMode = { "NewDebugMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARImageComponent_eventSetImageComponentDebugMode_Parms, NewDebugMode), Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode, METADATA_PARAMS(nullptr, 0) }; // 3205564744
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::NewProp_NewDebugMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay | Debug" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARImageComponent, nullptr, "SetImageComponentDebugMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::ARImageComponent_eventSetImageComponentDebugMode_Parms), Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARImageComponent);
	UClass* Z_Construct_UClass_UARImageComponent_NoRegister()
	{
		return UARImageComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARImageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARImageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARImageComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARImageComponent_ReceiveAdd, "ReceiveAdd" }, // 2798447508
		{ &Z_Construct_UFunction_UARImageComponent_ReceiveUpdate, "ReceiveUpdate" }, // 2885080112
		{ &Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload, "ServerUpdatePayload" }, // 3385554997
		{ &Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode, "SetImageComponentDebugMode" }, // 391484742
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARImageComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARImageComponent_Statics::NewProp_ReplicatedPayload_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARImageComponent_Statics::NewProp_ReplicatedPayload = { "ReplicatedPayload", "OnRep_Payload", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARImageComponent, ReplicatedPayload), Z_Construct_UScriptStruct_FARImageUpdatePayload, METADATA_PARAMS(Z_Construct_UClass_UARImageComponent_Statics::NewProp_ReplicatedPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARImageComponent_Statics::NewProp_ReplicatedPayload_MetaData)) }; // 115974704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARImageComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARImageComponent_Statics::NewProp_ReplicatedPayload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARImageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARImageComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARImageComponent_Statics::ClassParams = {
		&UARImageComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARImageComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARImageComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARImageComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARImageComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARImageComponent()
	{
		if (!Z_Registration_Info_UClass_UARImageComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARImageComponent.OuterSingleton, Z_Construct_UClass_UARImageComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARImageComponent.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARImageComponent>()
	{
		return UARImageComponent::StaticClass();
	}

	void UARImageComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedPayload(TEXT("ReplicatedPayload"));

		const bool bIsValid = true
			&& Name_ReplicatedPayload == ClassReps[(int32)ENetFields_Private::ReplicatedPayload].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARImageComponent"));
	}
	UARImageComponent::UARImageComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARImageComponent);
	UARImageComponent::~UARImageComponent() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQRCodeComponentDebugMode;
	static UEnum* EQRCodeComponentDebugMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EQRCodeComponentDebugMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EQRCodeComponentDebugMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EQRCodeComponentDebugMode"));
		}
		return Z_Registration_Info_UEnum_EQRCodeComponentDebugMode.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EQRCodeComponentDebugMode>()
	{
		return EQRCodeComponentDebugMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode_Statics::Enumerators[] = {
		{ "EQRCodeComponentDebugMode::None", (int64)EQRCodeComponentDebugMode::None },
		{ "EQRCodeComponentDebugMode::ShowQRCode", (int64)EQRCodeComponentDebugMode::ShowQRCode },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "None.Comment", "/** The debug mode is disabled */" },
		{ "None.Name", "EQRCodeComponentDebugMode::None" },
		{ "None.ToolTip", "The debug mode is disabled" },
		{ "ShowQRCode.Comment", "/** Show info about the detected QR code */" },
		{ "ShowQRCode.Name", "EQRCodeComponentDebugMode::ShowQRCode" },
		{ "ShowQRCode.ToolTip", "Show info about the detected QR code" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EQRCodeComponentDebugMode",
		"EQRCodeComponentDebugMode",
		Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode()
	{
		if (!Z_Registration_Info_UEnum_EQRCodeComponentDebugMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQRCodeComponentDebugMode.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EQRCodeComponentDebugMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UARQRCodeComponent::execServerUpdatePayload)
	{
		P_GET_STRUCT(FARQRCodeUpdatePayload,Z_Param_NewPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdatePayload_Validate(Z_Param_NewPayload))
		{
			RPC_ValidateFailed(TEXT("ServerUpdatePayload_Validate"));
			return;
		}
		P_THIS->ServerUpdatePayload_Implementation(Z_Param_NewPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARQRCodeComponent::execSetQRCodeComponentDebugMode)
	{
		P_GET_ENUM(EQRCodeComponentDebugMode,Z_Param_NewDebugMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARQRCodeComponent::SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode(Z_Param_NewDebugMode));
		P_NATIVE_END;
	}
	struct ARQRCodeComponent_eventReceiveAdd_Parms
	{
		FARQRCodeUpdatePayload Payload;
	};
	struct ARQRCodeComponent_eventReceiveUpdate_Parms
	{
		FARQRCodeUpdatePayload Payload;
	};
	struct ARQRCodeComponent_eventServerUpdatePayload_Parms
	{
		FARQRCodeUpdatePayload NewPayload;
	};
	static FName NAME_UARQRCodeComponent_ReceiveAdd = FName(TEXT("ReceiveAdd"));
	void UARQRCodeComponent::ReceiveAdd(FARQRCodeUpdatePayload const& Payload)
	{
		ARQRCodeComponent_eventReceiveAdd_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARQRCodeComponent_ReceiveAdd),&Parms);
	}
	static FName NAME_UARQRCodeComponent_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
	void UARQRCodeComponent::ReceiveUpdate(FARQRCodeUpdatePayload const& Payload)
	{
		ARQRCodeComponent_eventReceiveUpdate_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARQRCodeComponent_ReceiveUpdate),&Parms);
	}
	static FName NAME_UARQRCodeComponent_ServerUpdatePayload = FName(TEXT("ServerUpdatePayload"));
	void UARQRCodeComponent::ServerUpdatePayload(FARQRCodeUpdatePayload const& NewPayload)
	{
		ARQRCodeComponent_eventServerUpdatePayload_Parms Parms;
		Parms.NewPayload=NewPayload;
		ProcessEvent(FindFunctionChecked(NAME_UARQRCodeComponent_ServerUpdatePayload),&Parms);
	}
	void UARQRCodeComponent::StaticRegisterNativesUARQRCodeComponent()
	{
		UClass* Class = UARQRCodeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerUpdatePayload", &UARQRCodeComponent::execServerUpdatePayload },
			{ "SetQRCodeComponentDebugMode", &UARQRCodeComponent::execSetQRCodeComponentDebugMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARQRCodeComponent_eventReceiveAdd_Parms, Payload), Z_Construct_UScriptStruct_FARQRCodeUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData)) }; // 676003297
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is first added, called on server and clients. */" },
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is first added, called on server and clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARQRCodeComponent, nullptr, "ReceiveAdd", nullptr, nullptr, sizeof(ARQRCodeComponent_eventReceiveAdd_Parms), Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARQRCodeComponent_eventReceiveUpdate_Parms, Payload), Z_Construct_UScriptStruct_FARQRCodeUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData)) }; // 676003297
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is updated, called on server and clients. */" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is updated, called on server and clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARQRCodeComponent, nullptr, "ReceiveUpdate", nullptr, nullptr, sizeof(ARQRCodeComponent_eventReceiveUpdate_Parms), Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::NewProp_NewPayload = { "NewPayload", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARQRCodeComponent_eventServerUpdatePayload_Parms, NewPayload), Z_Construct_UScriptStruct_FARQRCodeUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData)) }; // 676003297
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::NewProp_NewPayload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARQRCodeComponent, nullptr, "ServerUpdatePayload", nullptr, nullptr, sizeof(ARQRCodeComponent_eventServerUpdatePayload_Parms), Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics
	{
		struct ARQRCodeComponent_eventSetQRCodeComponentDebugMode_Parms
		{
			EQRCodeComponentDebugMode NewDebugMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewDebugMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewDebugMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::NewProp_NewDebugMode = { "NewDebugMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARQRCodeComponent_eventSetQRCodeComponentDebugMode_Parms, NewDebugMode), Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode, METADATA_PARAMS(nullptr, 0) }; // 1536280635
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::NewProp_NewDebugMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay | Debug" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARQRCodeComponent, nullptr, "SetQRCodeComponentDebugMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::ARQRCodeComponent_eventSetQRCodeComponentDebugMode_Parms), Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARQRCodeComponent);
	UClass* Z_Construct_UClass_UARQRCodeComponent_NoRegister()
	{
		return UARQRCodeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARQRCodeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARQRCodeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARQRCodeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd, "ReceiveAdd" }, // 2713273684
		{ &Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate, "ReceiveUpdate" }, // 351761329
		{ &Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload, "ServerUpdatePayload" }, // 2532190337
		{ &Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode, "SetQRCodeComponentDebugMode" }, // 3918084347
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARQRCodeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARQRCodeComponent_Statics::NewProp_ReplicatedPayload_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARQRCodeComponent_Statics::NewProp_ReplicatedPayload = { "ReplicatedPayload", "OnRep_Payload", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARQRCodeComponent, ReplicatedPayload), Z_Construct_UScriptStruct_FARQRCodeUpdatePayload, METADATA_PARAMS(Z_Construct_UClass_UARQRCodeComponent_Statics::NewProp_ReplicatedPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARQRCodeComponent_Statics::NewProp_ReplicatedPayload_MetaData)) }; // 676003297
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARQRCodeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARQRCodeComponent_Statics::NewProp_ReplicatedPayload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARQRCodeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARQRCodeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARQRCodeComponent_Statics::ClassParams = {
		&UARQRCodeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARQRCodeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARQRCodeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARQRCodeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARQRCodeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARQRCodeComponent()
	{
		if (!Z_Registration_Info_UClass_UARQRCodeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARQRCodeComponent.OuterSingleton, Z_Construct_UClass_UARQRCodeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARQRCodeComponent.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARQRCodeComponent>()
	{
		return UARQRCodeComponent::StaticClass();
	}

	void UARQRCodeComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedPayload(TEXT("ReplicatedPayload"));

		const bool bIsValid = true
			&& Name_ReplicatedPayload == ClassReps[(int32)ENetFields_Private::ReplicatedPayload].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARQRCodeComponent"));
	}
	UARQRCodeComponent::UARQRCodeComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARQRCodeComponent);
	UARQRCodeComponent::~UARQRCodeComponent() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoseComponentDebugMode;
	static UEnum* EPoseComponentDebugMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPoseComponentDebugMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPoseComponentDebugMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EPoseComponentDebugMode"));
		}
		return Z_Registration_Info_UEnum_EPoseComponentDebugMode.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EPoseComponentDebugMode>()
	{
		return EPoseComponentDebugMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode_Statics::Enumerators[] = {
		{ "EPoseComponentDebugMode::None", (int64)EPoseComponentDebugMode::None },
		{ "EPoseComponentDebugMode::ShowSkeleton", (int64)EPoseComponentDebugMode::ShowSkeleton },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "None.Comment", "/** The debug mode is disabled */" },
		{ "None.Name", "EPoseComponentDebugMode::None" },
		{ "None.ToolTip", "The debug mode is disabled" },
		{ "ShowSkeleton.Comment", "/** Show the skeleton with debug draw */" },
		{ "ShowSkeleton.Name", "EPoseComponentDebugMode::ShowSkeleton" },
		{ "ShowSkeleton.ToolTip", "Show the skeleton with debug draw" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EPoseComponentDebugMode",
		"EPoseComponentDebugMode",
		Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode()
	{
		if (!Z_Registration_Info_UEnum_EPoseComponentDebugMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoseComponentDebugMode.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPoseComponentDebugMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UARPoseComponent::execServerUpdatePayload)
	{
		P_GET_STRUCT(FARPoseUpdatePayload,Z_Param_NewPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdatePayload_Validate(Z_Param_NewPayload))
		{
			RPC_ValidateFailed(TEXT("ServerUpdatePayload_Validate"));
			return;
		}
		P_THIS->ServerUpdatePayload_Implementation(Z_Param_NewPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARPoseComponent::execSetPoseComponentDebugMode)
	{
		P_GET_ENUM(EPoseComponentDebugMode,Z_Param_NewDebugMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARPoseComponent::SetPoseComponentDebugMode(EPoseComponentDebugMode(Z_Param_NewDebugMode));
		P_NATIVE_END;
	}
	struct ARPoseComponent_eventReceiveAdd_Parms
	{
		FARPoseUpdatePayload Payload;
	};
	struct ARPoseComponent_eventReceiveUpdate_Parms
	{
		FARPoseUpdatePayload Payload;
	};
	struct ARPoseComponent_eventServerUpdatePayload_Parms
	{
		FARPoseUpdatePayload NewPayload;
	};
	static FName NAME_UARPoseComponent_ReceiveAdd = FName(TEXT("ReceiveAdd"));
	void UARPoseComponent::ReceiveAdd(FARPoseUpdatePayload const& Payload)
	{
		ARPoseComponent_eventReceiveAdd_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARPoseComponent_ReceiveAdd),&Parms);
	}
	static FName NAME_UARPoseComponent_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
	void UARPoseComponent::ReceiveUpdate(FARPoseUpdatePayload const& Payload)
	{
		ARPoseComponent_eventReceiveUpdate_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARPoseComponent_ReceiveUpdate),&Parms);
	}
	static FName NAME_UARPoseComponent_ServerUpdatePayload = FName(TEXT("ServerUpdatePayload"));
	void UARPoseComponent::ServerUpdatePayload(FARPoseUpdatePayload const& NewPayload)
	{
		ARPoseComponent_eventServerUpdatePayload_Parms Parms;
		Parms.NewPayload=NewPayload;
		ProcessEvent(FindFunctionChecked(NAME_UARPoseComponent_ServerUpdatePayload),&Parms);
	}
	void UARPoseComponent::StaticRegisterNativesUARPoseComponent()
	{
		UClass* Class = UARPoseComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerUpdatePayload", &UARPoseComponent::execServerUpdatePayload },
			{ "SetPoseComponentDebugMode", &UARPoseComponent::execSetPoseComponentDebugMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPoseComponent_eventReceiveAdd_Parms, Payload), Z_Construct_UScriptStruct_FARPoseUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData)) }; // 4076782383
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is first added, called on server and clients. */" },
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is first added, called on server and clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPoseComponent, nullptr, "ReceiveAdd", nullptr, nullptr, sizeof(ARPoseComponent_eventReceiveAdd_Parms), Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPoseComponent_ReceiveAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPoseComponent_eventReceiveUpdate_Parms, Payload), Z_Construct_UScriptStruct_FARPoseUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData)) }; // 4076782383
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is updated, called on server and clients. */" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is updated, called on server and clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPoseComponent, nullptr, "ReceiveUpdate", nullptr, nullptr, sizeof(ARPoseComponent_eventReceiveUpdate_Parms), Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::NewProp_NewPayload = { "NewPayload", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPoseComponent_eventServerUpdatePayload_Parms, NewPayload), Z_Construct_UScriptStruct_FARPoseUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData)) }; // 4076782383
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::NewProp_NewPayload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPoseComponent, nullptr, "ServerUpdatePayload", nullptr, nullptr, sizeof(ARPoseComponent_eventServerUpdatePayload_Parms), Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics
	{
		struct ARPoseComponent_eventSetPoseComponentDebugMode_Parms
		{
			EPoseComponentDebugMode NewDebugMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewDebugMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewDebugMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::NewProp_NewDebugMode = { "NewDebugMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPoseComponent_eventSetPoseComponentDebugMode_Parms, NewDebugMode), Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode, METADATA_PARAMS(nullptr, 0) }; // 2828869023
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::NewProp_NewDebugMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay | Debug" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPoseComponent, nullptr, "SetPoseComponentDebugMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::ARPoseComponent_eventSetPoseComponentDebugMode_Parms), Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARPoseComponent);
	UClass* Z_Construct_UClass_UARPoseComponent_NoRegister()
	{
		return UARPoseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARPoseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARPoseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARPoseComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARPoseComponent_ReceiveAdd, "ReceiveAdd" }, // 1662332812
		{ &Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate, "ReceiveUpdate" }, // 2769196535
		{ &Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload, "ServerUpdatePayload" }, // 1648640311
		{ &Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode, "SetPoseComponentDebugMode" }, // 995956697
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPoseComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPoseComponent_Statics::NewProp_ReplicatedPayload_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARPoseComponent_Statics::NewProp_ReplicatedPayload = { "ReplicatedPayload", "OnRep_Payload", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARPoseComponent, ReplicatedPayload), Z_Construct_UScriptStruct_FARPoseUpdatePayload, METADATA_PARAMS(Z_Construct_UClass_UARPoseComponent_Statics::NewProp_ReplicatedPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARPoseComponent_Statics::NewProp_ReplicatedPayload_MetaData)) }; // 4076782383
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARPoseComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPoseComponent_Statics::NewProp_ReplicatedPayload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARPoseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARPoseComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARPoseComponent_Statics::ClassParams = {
		&UARPoseComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARPoseComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARPoseComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARPoseComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARPoseComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARPoseComponent()
	{
		if (!Z_Registration_Info_UClass_UARPoseComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARPoseComponent.OuterSingleton, Z_Construct_UClass_UARPoseComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARPoseComponent.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARPoseComponent>()
	{
		return UARPoseComponent::StaticClass();
	}

	void UARPoseComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedPayload(TEXT("ReplicatedPayload"));

		const bool bIsValid = true
			&& Name_ReplicatedPayload == ClassReps[(int32)ENetFields_Private::ReplicatedPayload].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARPoseComponent"));
	}
	UARPoseComponent::UARPoseComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARPoseComponent);
	UARPoseComponent::~UARPoseComponent() {}
	DEFINE_FUNCTION(UAREnvironmentProbeComponent::execServerUpdatePayload)
	{
		P_GET_STRUCT(FAREnvironmentProbeUpdatePayload,Z_Param_NewPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdatePayload_Validate(Z_Param_NewPayload))
		{
			RPC_ValidateFailed(TEXT("ServerUpdatePayload_Validate"));
			return;
		}
		P_THIS->ServerUpdatePayload_Implementation(Z_Param_NewPayload);
		P_NATIVE_END;
	}
	struct AREnvironmentProbeComponent_eventReceiveAdd_Parms
	{
		FAREnvironmentProbeUpdatePayload Payload;
	};
	struct AREnvironmentProbeComponent_eventReceiveUpdate_Parms
	{
		FAREnvironmentProbeUpdatePayload Payload;
	};
	struct AREnvironmentProbeComponent_eventServerUpdatePayload_Parms
	{
		FAREnvironmentProbeUpdatePayload NewPayload;
	};
	static FName NAME_UAREnvironmentProbeComponent_ReceiveAdd = FName(TEXT("ReceiveAdd"));
	void UAREnvironmentProbeComponent::ReceiveAdd(FAREnvironmentProbeUpdatePayload const& Payload)
	{
		AREnvironmentProbeComponent_eventReceiveAdd_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UAREnvironmentProbeComponent_ReceiveAdd),&Parms);
	}
	static FName NAME_UAREnvironmentProbeComponent_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
	void UAREnvironmentProbeComponent::ReceiveUpdate(FAREnvironmentProbeUpdatePayload const& Payload)
	{
		AREnvironmentProbeComponent_eventReceiveUpdate_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UAREnvironmentProbeComponent_ReceiveUpdate),&Parms);
	}
	static FName NAME_UAREnvironmentProbeComponent_ServerUpdatePayload = FName(TEXT("ServerUpdatePayload"));
	void UAREnvironmentProbeComponent::ServerUpdatePayload(FAREnvironmentProbeUpdatePayload const& NewPayload)
	{
		AREnvironmentProbeComponent_eventServerUpdatePayload_Parms Parms;
		Parms.NewPayload=NewPayload;
		ProcessEvent(FindFunctionChecked(NAME_UAREnvironmentProbeComponent_ServerUpdatePayload),&Parms);
	}
	void UAREnvironmentProbeComponent::StaticRegisterNativesUAREnvironmentProbeComponent()
	{
		UClass* Class = UAREnvironmentProbeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerUpdatePayload", &UAREnvironmentProbeComponent::execServerUpdatePayload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AREnvironmentProbeComponent_eventReceiveAdd_Parms, Payload), Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData)) }; // 1420167805
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is first added, called on server and clients. */" },
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is first added, called on server and clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAREnvironmentProbeComponent, nullptr, "ReceiveAdd", nullptr, nullptr, sizeof(AREnvironmentProbeComponent_eventReceiveAdd_Parms), Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AREnvironmentProbeComponent_eventReceiveUpdate_Parms, Payload), Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData)) }; // 1420167805
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is updated, called on server and clients. */" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is updated, called on server and clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAREnvironmentProbeComponent, nullptr, "ReceiveUpdate", nullptr, nullptr, sizeof(AREnvironmentProbeComponent_eventReceiveUpdate_Parms), Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::NewProp_NewPayload = { "NewPayload", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AREnvironmentProbeComponent_eventServerUpdatePayload_Parms, NewPayload), Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData)) }; // 1420167805
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::NewProp_NewPayload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAREnvironmentProbeComponent, nullptr, "ServerUpdatePayload", nullptr, nullptr, sizeof(AREnvironmentProbeComponent_eventServerUpdatePayload_Parms), Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAREnvironmentProbeComponent);
	UClass* Z_Construct_UClass_UAREnvironmentProbeComponent_NoRegister()
	{
		return UAREnvironmentProbeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAREnvironmentProbeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd, "ReceiveAdd" }, // 957188059
		{ &Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate, "ReceiveUpdate" }, // 2840738890
		{ &Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload, "ServerUpdatePayload" }, // 3301383298
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::NewProp_ReplicatedPayload_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::NewProp_ReplicatedPayload = { "ReplicatedPayload", "OnRep_Payload", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAREnvironmentProbeComponent, ReplicatedPayload), Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload, METADATA_PARAMS(Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::NewProp_ReplicatedPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::NewProp_ReplicatedPayload_MetaData)) }; // 1420167805
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::NewProp_ReplicatedPayload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAREnvironmentProbeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::ClassParams = {
		&UAREnvironmentProbeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAREnvironmentProbeComponent()
	{
		if (!Z_Registration_Info_UClass_UAREnvironmentProbeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAREnvironmentProbeComponent.OuterSingleton, Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAREnvironmentProbeComponent.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UAREnvironmentProbeComponent>()
	{
		return UAREnvironmentProbeComponent::StaticClass();
	}

	void UAREnvironmentProbeComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedPayload(TEXT("ReplicatedPayload"));

		const bool bIsValid = true
			&& Name_ReplicatedPayload == ClassReps[(int32)ENetFields_Private::ReplicatedPayload].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAREnvironmentProbeComponent"));
	}
	UAREnvironmentProbeComponent::UAREnvironmentProbeComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAREnvironmentProbeComponent);
	UAREnvironmentProbeComponent::~UAREnvironmentProbeComponent() {}
	DEFINE_FUNCTION(UARObjectComponent::execServerUpdatePayload)
	{
		P_GET_STRUCT(FARObjectUpdatePayload,Z_Param_NewPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdatePayload_Validate(Z_Param_NewPayload))
		{
			RPC_ValidateFailed(TEXT("ServerUpdatePayload_Validate"));
			return;
		}
		P_THIS->ServerUpdatePayload_Implementation(Z_Param_NewPayload);
		P_NATIVE_END;
	}
	struct ARObjectComponent_eventReceiveAdd_Parms
	{
		FARObjectUpdatePayload Payload;
	};
	struct ARObjectComponent_eventReceiveUpdate_Parms
	{
		FARObjectUpdatePayload Payload;
	};
	struct ARObjectComponent_eventServerUpdatePayload_Parms
	{
		FARObjectUpdatePayload NewPayload;
	};
	static FName NAME_UARObjectComponent_ReceiveAdd = FName(TEXT("ReceiveAdd"));
	void UARObjectComponent::ReceiveAdd(FARObjectUpdatePayload const& Payload)
	{
		ARObjectComponent_eventReceiveAdd_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARObjectComponent_ReceiveAdd),&Parms);
	}
	static FName NAME_UARObjectComponent_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
	void UARObjectComponent::ReceiveUpdate(FARObjectUpdatePayload const& Payload)
	{
		ARObjectComponent_eventReceiveUpdate_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARObjectComponent_ReceiveUpdate),&Parms);
	}
	static FName NAME_UARObjectComponent_ServerUpdatePayload = FName(TEXT("ServerUpdatePayload"));
	void UARObjectComponent::ServerUpdatePayload(FARObjectUpdatePayload const& NewPayload)
	{
		ARObjectComponent_eventServerUpdatePayload_Parms Parms;
		Parms.NewPayload=NewPayload;
		ProcessEvent(FindFunctionChecked(NAME_UARObjectComponent_ServerUpdatePayload),&Parms);
	}
	void UARObjectComponent::StaticRegisterNativesUARObjectComponent()
	{
		UClass* Class = UARObjectComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerUpdatePayload", &UARObjectComponent::execServerUpdatePayload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARObjectComponent_eventReceiveAdd_Parms, Payload), Z_Construct_UScriptStruct_FARObjectUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData)) }; // 3833639660
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is first added, called on server and clients. */" },
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is first added, called on server and clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARObjectComponent, nullptr, "ReceiveAdd", nullptr, nullptr, sizeof(ARObjectComponent_eventReceiveAdd_Parms), Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARObjectComponent_ReceiveAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARObjectComponent_eventReceiveUpdate_Parms, Payload), Z_Construct_UScriptStruct_FARObjectUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData)) }; // 3833639660
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is updated, called on server and clients. */" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is updated, called on server and clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARObjectComponent, nullptr, "ReceiveUpdate", nullptr, nullptr, sizeof(ARObjectComponent_eventReceiveUpdate_Parms), Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::NewProp_NewPayload = { "NewPayload", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARObjectComponent_eventServerUpdatePayload_Parms, NewPayload), Z_Construct_UScriptStruct_FARObjectUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData)) }; // 3833639660
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::NewProp_NewPayload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARObjectComponent, nullptr, "ServerUpdatePayload", nullptr, nullptr, sizeof(ARObjectComponent_eventServerUpdatePayload_Parms), Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARObjectComponent);
	UClass* Z_Construct_UClass_UARObjectComponent_NoRegister()
	{
		return UARObjectComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARObjectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARObjectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARObjectComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARObjectComponent_ReceiveAdd, "ReceiveAdd" }, // 1112577189
		{ &Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate, "ReceiveUpdate" }, // 3800305682
		{ &Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload, "ServerUpdatePayload" }, // 935957443
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARObjectComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARObjectComponent_Statics::NewProp_ReplicatedPayload_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARObjectComponent_Statics::NewProp_ReplicatedPayload = { "ReplicatedPayload", "OnRep_Payload", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARObjectComponent, ReplicatedPayload), Z_Construct_UScriptStruct_FARObjectUpdatePayload, METADATA_PARAMS(Z_Construct_UClass_UARObjectComponent_Statics::NewProp_ReplicatedPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARObjectComponent_Statics::NewProp_ReplicatedPayload_MetaData)) }; // 3833639660
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARObjectComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARObjectComponent_Statics::NewProp_ReplicatedPayload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARObjectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARObjectComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARObjectComponent_Statics::ClassParams = {
		&UARObjectComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARObjectComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARObjectComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARObjectComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARObjectComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARObjectComponent()
	{
		if (!Z_Registration_Info_UClass_UARObjectComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARObjectComponent.OuterSingleton, Z_Construct_UClass_UARObjectComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARObjectComponent.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARObjectComponent>()
	{
		return UARObjectComponent::StaticClass();
	}

	void UARObjectComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedPayload(TEXT("ReplicatedPayload"));

		const bool bIsValid = true
			&& Name_ReplicatedPayload == ClassReps[(int32)ENetFields_Private::ReplicatedPayload].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARObjectComponent"));
	}
	UARObjectComponent::UARObjectComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARObjectComponent);
	UARObjectComponent::~UARObjectComponent() {}
	DEFINE_FUNCTION(UARMeshComponent::execServerUpdatePayload)
	{
		P_GET_STRUCT(FARMeshUpdatePayload,Z_Param_NewPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdatePayload_Validate(Z_Param_NewPayload))
		{
			RPC_ValidateFailed(TEXT("ServerUpdatePayload_Validate"));
			return;
		}
		P_THIS->ServerUpdatePayload_Implementation(Z_Param_NewPayload);
		P_NATIVE_END;
	}
	struct ARMeshComponent_eventReceiveAdd_Parms
	{
		FARMeshUpdatePayload Payload;
	};
	struct ARMeshComponent_eventReceiveUpdate_Parms
	{
		FARMeshUpdatePayload Payload;
	};
	struct ARMeshComponent_eventServerUpdatePayload_Parms
	{
		FARMeshUpdatePayload NewPayload;
	};
	static FName NAME_UARMeshComponent_ReceiveAdd = FName(TEXT("ReceiveAdd"));
	void UARMeshComponent::ReceiveAdd(FARMeshUpdatePayload const& Payload)
	{
		ARMeshComponent_eventReceiveAdd_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARMeshComponent_ReceiveAdd),&Parms);
	}
	static FName NAME_UARMeshComponent_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
	void UARMeshComponent::ReceiveUpdate(FARMeshUpdatePayload const& Payload)
	{
		ARMeshComponent_eventReceiveUpdate_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARMeshComponent_ReceiveUpdate),&Parms);
	}
	static FName NAME_UARMeshComponent_ServerUpdatePayload = FName(TEXT("ServerUpdatePayload"));
	void UARMeshComponent::ServerUpdatePayload(FARMeshUpdatePayload const& NewPayload)
	{
		ARMeshComponent_eventServerUpdatePayload_Parms Parms;
		Parms.NewPayload=NewPayload;
		ProcessEvent(FindFunctionChecked(NAME_UARMeshComponent_ServerUpdatePayload),&Parms);
	}
	void UARMeshComponent::StaticRegisterNativesUARMeshComponent()
	{
		UClass* Class = UARMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerUpdatePayload", &UARMeshComponent::execServerUpdatePayload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARMeshComponent_eventReceiveAdd_Parms, Payload), Z_Construct_UScriptStruct_FARMeshUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData)) }; // 2601080694
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is first added, called on server and clients. */" },
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is first added, called on server and clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARMeshComponent, nullptr, "ReceiveAdd", nullptr, nullptr, sizeof(ARMeshComponent_eventReceiveAdd_Parms), Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARMeshComponent_ReceiveAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARMeshComponent_eventReceiveUpdate_Parms, Payload), Z_Construct_UScriptStruct_FARMeshUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData)) }; // 2601080694
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is updated, called on server and clients. */" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is updated, called on server and clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARMeshComponent, nullptr, "ReceiveUpdate", nullptr, nullptr, sizeof(ARMeshComponent_eventReceiveUpdate_Parms), Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::NewProp_NewPayload = { "NewPayload", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARMeshComponent_eventServerUpdatePayload_Parms, NewPayload), Z_Construct_UScriptStruct_FARMeshUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData)) }; // 2601080694
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::NewProp_NewPayload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARMeshComponent, nullptr, "ServerUpdatePayload", nullptr, nullptr, sizeof(ARMeshComponent_eventServerUpdatePayload_Parms), Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARMeshComponent);
	UClass* Z_Construct_UClass_UARMeshComponent_NoRegister()
	{
		return UARMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARMeshComponent_ReceiveAdd, "ReceiveAdd" }, // 3237626518
		{ &Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate, "ReceiveUpdate" }, // 837918131
		{ &Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload, "ServerUpdatePayload" }, // 2606391344
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARMeshComponent_Statics::NewProp_ReplicatedPayload_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARMeshComponent_Statics::NewProp_ReplicatedPayload = { "ReplicatedPayload", "OnRep_Payload", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARMeshComponent, ReplicatedPayload), Z_Construct_UScriptStruct_FARMeshUpdatePayload, METADATA_PARAMS(Z_Construct_UClass_UARMeshComponent_Statics::NewProp_ReplicatedPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARMeshComponent_Statics::NewProp_ReplicatedPayload_MetaData)) }; // 2601080694
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARMeshComponent_Statics::NewProp_ReplicatedPayload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARMeshComponent_Statics::ClassParams = {
		&UARMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARMeshComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UARMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARMeshComponent.OuterSingleton, Z_Construct_UClass_UARMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARMeshComponent.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARMeshComponent>()
	{
		return UARMeshComponent::StaticClass();
	}

	void UARMeshComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedPayload(TEXT("ReplicatedPayload"));

		const bool bIsValid = true
			&& Name_ReplicatedPayload == ClassReps[(int32)ENetFields_Private::ReplicatedPayload].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARMeshComponent"));
	}
	UARMeshComponent::UARMeshComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARMeshComponent);
	UARMeshComponent::~UARMeshComponent() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeoAnchorComponentDebugMode;
	static UEnum* EGeoAnchorComponentDebugMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeoAnchorComponentDebugMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeoAnchorComponentDebugMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EGeoAnchorComponentDebugMode"));
		}
		return Z_Registration_Info_UEnum_EGeoAnchorComponentDebugMode.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EGeoAnchorComponentDebugMode>()
	{
		return EGeoAnchorComponentDebugMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode_Statics::Enumerators[] = {
		{ "EGeoAnchorComponentDebugMode::None", (int64)EGeoAnchorComponentDebugMode::None },
		{ "EGeoAnchorComponentDebugMode::ShowGeoData", (int64)EGeoAnchorComponentDebugMode::ShowGeoData },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "None.Comment", "/** The debug mode is disabled */" },
		{ "None.Name", "EGeoAnchorComponentDebugMode::None" },
		{ "None.ToolTip", "The debug mode is disabled" },
		{ "ShowGeoData.Comment", "/** Display Geo related data */" },
		{ "ShowGeoData.Name", "EGeoAnchorComponentDebugMode::ShowGeoData" },
		{ "ShowGeoData.ToolTip", "Display Geo related data" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EGeoAnchorComponentDebugMode",
		"EGeoAnchorComponentDebugMode",
		Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode()
	{
		if (!Z_Registration_Info_UEnum_EGeoAnchorComponentDebugMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeoAnchorComponentDebugMode.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeoAnchorComponentDebugMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UARGeoAnchorComponent::execServerUpdatePayload)
	{
		P_GET_STRUCT(FARGeoAnchorUpdatePayload,Z_Param_NewPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdatePayload_Validate(Z_Param_NewPayload))
		{
			RPC_ValidateFailed(TEXT("ServerUpdatePayload_Validate"));
			return;
		}
		P_THIS->ServerUpdatePayload_Implementation(Z_Param_NewPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARGeoAnchorComponent::execSetGeoAnchorComponentDebugMode)
	{
		P_GET_ENUM(EGeoAnchorComponentDebugMode,Z_Param_NewDebugMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARGeoAnchorComponent::SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode(Z_Param_NewDebugMode));
		P_NATIVE_END;
	}
	struct ARGeoAnchorComponent_eventReceiveAdd_Parms
	{
		FARGeoAnchorUpdatePayload Payload;
	};
	struct ARGeoAnchorComponent_eventReceiveUpdate_Parms
	{
		FARGeoAnchorUpdatePayload Payload;
	};
	struct ARGeoAnchorComponent_eventServerUpdatePayload_Parms
	{
		FARGeoAnchorUpdatePayload NewPayload;
	};
	static FName NAME_UARGeoAnchorComponent_ReceiveAdd = FName(TEXT("ReceiveAdd"));
	void UARGeoAnchorComponent::ReceiveAdd(FARGeoAnchorUpdatePayload const& Payload)
	{
		ARGeoAnchorComponent_eventReceiveAdd_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARGeoAnchorComponent_ReceiveAdd),&Parms);
	}
	static FName NAME_UARGeoAnchorComponent_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
	void UARGeoAnchorComponent::ReceiveUpdate(FARGeoAnchorUpdatePayload const& Payload)
	{
		ARGeoAnchorComponent_eventReceiveUpdate_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UARGeoAnchorComponent_ReceiveUpdate),&Parms);
	}
	static FName NAME_UARGeoAnchorComponent_ServerUpdatePayload = FName(TEXT("ServerUpdatePayload"));
	void UARGeoAnchorComponent::ServerUpdatePayload(FARGeoAnchorUpdatePayload const& NewPayload)
	{
		ARGeoAnchorComponent_eventServerUpdatePayload_Parms Parms;
		Parms.NewPayload=NewPayload;
		ProcessEvent(FindFunctionChecked(NAME_UARGeoAnchorComponent_ServerUpdatePayload),&Parms);
	}
	void UARGeoAnchorComponent::StaticRegisterNativesUARGeoAnchorComponent()
	{
		UClass* Class = UARGeoAnchorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerUpdatePayload", &UARGeoAnchorComponent::execServerUpdatePayload },
			{ "SetGeoAnchorComponentDebugMode", &UARGeoAnchorComponent::execSetGeoAnchorComponentDebugMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGeoAnchorComponent_eventReceiveAdd_Parms, Payload), Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::NewProp_Payload_MetaData)) }; // 2000728623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is first added, called on server and clients. */" },
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is first added, called on server and clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGeoAnchorComponent, nullptr, "ReceiveAdd", nullptr, nullptr, sizeof(ARGeoAnchorComponent_eventReceiveAdd_Parms), Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGeoAnchorComponent_eventReceiveUpdate_Parms, Payload), Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::NewProp_Payload_MetaData)) }; // 2000728623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when native representation is updated, called on server and clients. */" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
		{ "ToolTip", "Event when native representation is updated, called on server and clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGeoAnchorComponent, nullptr, "ReceiveUpdate", nullptr, nullptr, sizeof(ARGeoAnchorComponent_eventReceiveUpdate_Parms), Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::NewProp_NewPayload = { "NewPayload", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGeoAnchorComponent_eventServerUpdatePayload_Parms, NewPayload), Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload, METADATA_PARAMS(Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::NewProp_NewPayload_MetaData)) }; // 2000728623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::NewProp_NewPayload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGeoAnchorComponent, nullptr, "ServerUpdatePayload", nullptr, nullptr, sizeof(ARGeoAnchorComponent_eventServerUpdatePayload_Parms), Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics
	{
		struct ARGeoAnchorComponent_eventSetGeoAnchorComponentDebugMode_Parms
		{
			EGeoAnchorComponentDebugMode NewDebugMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewDebugMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewDebugMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::NewProp_NewDebugMode = { "NewDebugMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGeoAnchorComponent_eventSetGeoAnchorComponentDebugMode_Parms, NewDebugMode), Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode, METADATA_PARAMS(nullptr, 0) }; // 1353058997
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::NewProp_NewDebugMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::NewProp_NewDebugMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Gameplay | Debug" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGeoAnchorComponent, nullptr, "SetGeoAnchorComponentDebugMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::ARGeoAnchorComponent_eventSetGeoAnchorComponentDebugMode_Parms), Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARGeoAnchorComponent);
	UClass* Z_Construct_UClass_UARGeoAnchorComponent_NoRegister()
	{
		return UARGeoAnchorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARGeoAnchorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARGeoAnchorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARGeoAnchorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd, "ReceiveAdd" }, // 2490143847
		{ &Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate, "ReceiveUpdate" }, // 2606412841
		{ &Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload, "ServerUpdatePayload" }, // 4033660407
		{ &Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode, "SetGeoAnchorComponentDebugMode" }, // 2916811782
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGeoAnchorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Gameplay" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGeoAnchorComponent_Statics::NewProp_ReplicatedPayload_MetaData[] = {
		{ "Category", "AR Gameplay" },
		{ "ModuleRelativePath", "Public/ARComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARGeoAnchorComponent_Statics::NewProp_ReplicatedPayload = { "ReplicatedPayload", "OnRep_Payload", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARGeoAnchorComponent, ReplicatedPayload), Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload, METADATA_PARAMS(Z_Construct_UClass_UARGeoAnchorComponent_Statics::NewProp_ReplicatedPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARGeoAnchorComponent_Statics::NewProp_ReplicatedPayload_MetaData)) }; // 2000728623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARGeoAnchorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARGeoAnchorComponent_Statics::NewProp_ReplicatedPayload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARGeoAnchorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARGeoAnchorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARGeoAnchorComponent_Statics::ClassParams = {
		&UARGeoAnchorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARGeoAnchorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARGeoAnchorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARGeoAnchorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARGeoAnchorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARGeoAnchorComponent()
	{
		if (!Z_Registration_Info_UClass_UARGeoAnchorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARGeoAnchorComponent.OuterSingleton, Z_Construct_UClass_UARGeoAnchorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARGeoAnchorComponent.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARGeoAnchorComponent>()
	{
		return UARGeoAnchorComponent::StaticClass();
	}

	void UARGeoAnchorComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedPayload(TEXT("ReplicatedPayload"));

		const bool bIsValid = true
			&& Name_ReplicatedPayload == ClassReps[(int32)ENetFields_Private::ReplicatedPayload].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UARGeoAnchorComponent"));
	}
	UARGeoAnchorComponent::UARGeoAnchorComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARGeoAnchorComponent);
	UARGeoAnchorComponent::~UARGeoAnchorComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_Statics::EnumInfo[] = {
		{ EARSessionConfigFlags_StaticEnum, TEXT("EARSessionConfigFlags"), &Z_Registration_Info_UEnum_EARSessionConfigFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3574599053U) },
		{ EPlaneComponentDebugMode_StaticEnum, TEXT("EPlaneComponentDebugMode"), &Z_Registration_Info_UEnum_EPlaneComponentDebugMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4017464626U) },
		{ EFaceComponentDebugMode_StaticEnum, TEXT("EFaceComponentDebugMode"), &Z_Registration_Info_UEnum_EFaceComponentDebugMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3726945311U) },
		{ EARFaceTransformMixing_StaticEnum, TEXT("EARFaceTransformMixing"), &Z_Registration_Info_UEnum_EARFaceTransformMixing, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4180263817U) },
		{ EImageComponentDebugMode_StaticEnum, TEXT("EImageComponentDebugMode"), &Z_Registration_Info_UEnum_EImageComponentDebugMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3205564744U) },
		{ EQRCodeComponentDebugMode_StaticEnum, TEXT("EQRCodeComponentDebugMode"), &Z_Registration_Info_UEnum_EQRCodeComponentDebugMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1536280635U) },
		{ EPoseComponentDebugMode_StaticEnum, TEXT("EPoseComponentDebugMode"), &Z_Registration_Info_UEnum_EPoseComponentDebugMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2828869023U) },
		{ EGeoAnchorComponentDebugMode_StaticEnum, TEXT("EGeoAnchorComponentDebugMode"), &Z_Registration_Info_UEnum_EGeoAnchorComponentDebugMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1353058997U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_Statics::ScriptStructInfo[] = {
		{ FARSessionPayload::StaticStruct, Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewStructOps, TEXT("ARSessionPayload"), &Z_Registration_Info_UScriptStruct_ARSessionPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARSessionPayload), 3298808518U) },
		{ FARPlaneUpdatePayload::StaticStruct, Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewStructOps, TEXT("ARPlaneUpdatePayload"), &Z_Registration_Info_UScriptStruct_ARPlaneUpdatePayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARPlaneUpdatePayload), 3269213349U) },
		{ FARPointUpdatePayload::StaticStruct, Z_Construct_UScriptStruct_FARPointUpdatePayload_Statics::NewStructOps, TEXT("ARPointUpdatePayload"), &Z_Registration_Info_UScriptStruct_ARPointUpdatePayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARPointUpdatePayload), 2891390558U) },
		{ FARFaceUpdatePayload::StaticStruct, Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewStructOps, TEXT("ARFaceUpdatePayload"), &Z_Registration_Info_UScriptStruct_ARFaceUpdatePayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARFaceUpdatePayload), 225471742U) },
		{ FARImageUpdatePayload::StaticStruct, Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewStructOps, TEXT("ARImageUpdatePayload"), &Z_Registration_Info_UScriptStruct_ARImageUpdatePayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARImageUpdatePayload), 115974704U) },
		{ FARQRCodeUpdatePayload::StaticStruct, Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewStructOps, TEXT("ARQRCodeUpdatePayload"), &Z_Registration_Info_UScriptStruct_ARQRCodeUpdatePayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARQRCodeUpdatePayload), 676003297U) },
		{ FARPoseUpdatePayload::StaticStruct, Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewStructOps, TEXT("ARPoseUpdatePayload"), &Z_Registration_Info_UScriptStruct_ARPoseUpdatePayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARPoseUpdatePayload), 4076782383U) },
		{ FAREnvironmentProbeUpdatePayload::StaticStruct, Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::NewStructOps, TEXT("AREnvironmentProbeUpdatePayload"), &Z_Registration_Info_UScriptStruct_AREnvironmentProbeUpdatePayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAREnvironmentProbeUpdatePayload), 1420167805U) },
		{ FARObjectUpdatePayload::StaticStruct, Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::NewStructOps, TEXT("ARObjectUpdatePayload"), &Z_Registration_Info_UScriptStruct_ARObjectUpdatePayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARObjectUpdatePayload), 3833639660U) },
		{ FARMeshUpdatePayload::StaticStruct, Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewStructOps, TEXT("ARMeshUpdatePayload"), &Z_Registration_Info_UScriptStruct_ARMeshUpdatePayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARMeshUpdatePayload), 2601080694U) },
		{ FARGeoAnchorUpdatePayload::StaticStruct, Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewStructOps, TEXT("ARGeoAnchorUpdatePayload"), &Z_Registration_Info_UScriptStruct_ARGeoAnchorUpdatePayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARGeoAnchorUpdatePayload), 2000728623U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARComponent, UARComponent::StaticClass, TEXT("UARComponent"), &Z_Registration_Info_UClass_UARComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARComponent), 3843018529U) },
		{ Z_Construct_UClass_UARPlaneComponent, UARPlaneComponent::StaticClass, TEXT("UARPlaneComponent"), &Z_Registration_Info_UClass_UARPlaneComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARPlaneComponent), 2061229409U) },
		{ Z_Construct_UClass_UARPointComponent, UARPointComponent::StaticClass, TEXT("UARPointComponent"), &Z_Registration_Info_UClass_UARPointComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARPointComponent), 2878124177U) },
		{ Z_Construct_UClass_UARFaceComponent, UARFaceComponent::StaticClass, TEXT("UARFaceComponent"), &Z_Registration_Info_UClass_UARFaceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARFaceComponent), 2656503429U) },
		{ Z_Construct_UClass_UARImageComponent, UARImageComponent::StaticClass, TEXT("UARImageComponent"), &Z_Registration_Info_UClass_UARImageComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARImageComponent), 2878790909U) },
		{ Z_Construct_UClass_UARQRCodeComponent, UARQRCodeComponent::StaticClass, TEXT("UARQRCodeComponent"), &Z_Registration_Info_UClass_UARQRCodeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARQRCodeComponent), 3416728811U) },
		{ Z_Construct_UClass_UARPoseComponent, UARPoseComponent::StaticClass, TEXT("UARPoseComponent"), &Z_Registration_Info_UClass_UARPoseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARPoseComponent), 4099082664U) },
		{ Z_Construct_UClass_UAREnvironmentProbeComponent, UAREnvironmentProbeComponent::StaticClass, TEXT("UAREnvironmentProbeComponent"), &Z_Registration_Info_UClass_UAREnvironmentProbeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAREnvironmentProbeComponent), 4283079384U) },
		{ Z_Construct_UClass_UARObjectComponent, UARObjectComponent::StaticClass, TEXT("UARObjectComponent"), &Z_Registration_Info_UClass_UARObjectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARObjectComponent), 1579502945U) },
		{ Z_Construct_UClass_UARMeshComponent, UARMeshComponent::StaticClass, TEXT("UARMeshComponent"), &Z_Registration_Info_UClass_UARMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARMeshComponent), 1158408104U) },
		{ Z_Construct_UClass_UARGeoAnchorComponent, UARGeoAnchorComponent::StaticClass, TEXT("UARGeoAnchorComponent"), &Z_Registration_Info_UClass_UARGeoAnchorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARGeoAnchorComponent), 2044680750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_669573605(TEXT("/Script/AugmentedReality"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
