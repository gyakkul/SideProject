// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/InstancedStaticMeshComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstancedStaticMeshComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USMInstanceManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneComponentInstanceData();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstancedStaticMeshInstanceData;
class UScriptStruct* FInstancedStaticMeshInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStaticMeshInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstancedStaticMeshInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InstancedStaticMeshInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_InstancedStaticMeshInstanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInstancedStaticMeshInstanceData>()
{
	return FInstancedStaticMeshInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStaticMeshInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInstancedStaticMeshInstanceData, Transform), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InstancedStaticMeshInstanceData",
		sizeof(FInstancedStaticMeshInstanceData),
		alignof(FInstancedStaticMeshInstanceData),
		Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_InstancedStaticMeshInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstancedStaticMeshInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InstancedStaticMeshInstanceData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstancedStaticMeshMappingInfo;
class UScriptStruct* FInstancedStaticMeshMappingInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStaticMeshMappingInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstancedStaticMeshMappingInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InstancedStaticMeshMappingInfo"));
	}
	return Z_Registration_Info_UScriptStruct_InstancedStaticMeshMappingInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInstancedStaticMeshMappingInfo>()
{
	return FInstancedStaticMeshMappingInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStaticMeshMappingInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InstancedStaticMeshMappingInfo",
		sizeof(FInstancedStaticMeshMappingInfo),
		alignof(FInstancedStaticMeshMappingInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_InstancedStaticMeshMappingInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstancedStaticMeshMappingInfo.InnerSingleton, Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InstancedStaticMeshMappingInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstancedStaticMeshRandomSeed;
class UScriptStruct* FInstancedStaticMeshRandomSeed::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStaticMeshRandomSeed.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstancedStaticMeshRandomSeed.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InstancedStaticMeshRandomSeed"));
	}
	return Z_Registration_Info_UScriptStruct_InstancedStaticMeshRandomSeed.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInstancedStaticMeshRandomSeed>()
{
	return FInstancedStaticMeshRandomSeed::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartInstanceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartInstanceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStaticMeshRandomSeed>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::NewProp_StartInstanceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::NewProp_StartInstanceIndex = { "StartInstanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInstancedStaticMeshRandomSeed, StartInstanceIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::NewProp_StartInstanceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::NewProp_StartInstanceIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInstancedStaticMeshRandomSeed, RandomSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::NewProp_RandomSeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::NewProp_StartInstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::NewProp_RandomSeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InstancedStaticMeshRandomSeed",
		sizeof(FInstancedStaticMeshRandomSeed),
		alignof(FInstancedStaticMeshRandomSeed),
		Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed()
	{
		if (!Z_Registration_Info_UScriptStruct_InstancedStaticMeshRandomSeed.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstancedStaticMeshRandomSeed.InnerSingleton, Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InstancedStaticMeshRandomSeed.InnerSingleton;
	}
	DEFINE_FUNCTION(UInstancedStaticMeshComponent::execGetInstancesOverlappingBox)
	{
		P_GET_STRUCT_REF(FBox,Z_Param_Out_Box);
		P_GET_UBOOL(Z_Param_bBoxInWorldSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetInstancesOverlappingBox(Z_Param_Out_Box,Z_Param_bBoxInWorldSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInstancedStaticMeshComponent::execGetInstancesOverlappingSphere)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bSphereInWorldSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetInstancesOverlappingSphere(Z_Param_Out_Center,Z_Param_Radius,Z_Param_bSphereInWorldSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInstancedStaticMeshComponent::execSetCullDistances)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StartCullDistance);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndCullDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCullDistances(Z_Param_StartCullDistance,Z_Param_EndCullDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInstancedStaticMeshComponent::execIsValidInstance)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidInstance(Z_Param_InstanceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInstancedStaticMeshComponent::execGetInstanceCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInstanceCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInstancedStaticMeshComponent::execClearInstances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearInstances();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInstancedStaticMeshComponent::execRemoveInstances)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_InstancesToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveInstances(Z_Param_Out_InstancesToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInstancedStaticMeshComponent::execRemoveInstance)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveInstance(Z_Param_InstanceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInstancedStaticMeshComponent::execBatchUpdateInstancesTransform)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StartInstanceIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumInstances);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewInstancesTransform);
		P_GET_UBOOL(Z_Param_bWorldSpace);
		P_GET_UBOOL(Z_Param_bMarkRenderStateDirty);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BatchUpdateInstancesTransform(Z_Param_StartInstanceIndex,Z_Param_NumInstances,Z_Param_Out_NewInstancesTransform,Z_Param_bWorldSpace,Z_Param_bMarkRenderStateDirty,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInstancedStaticMeshComponent::execBatchUpdateInstancesTransforms)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StartInstanceIndex);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_NewInstancesTransforms);
		P_GET_UBOOL(Z_Param_bWorldSpace);
		P_GET_UBOOL(Z_Param_bMarkRenderStateDirty);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BatchUpdateInstancesTransforms(Z_Param_StartInstanceIndex,Z_Param_Out_NewInstancesTransforms,Z_Param_bWorldSpace,Z_Param_bMarkRenderStateDirty,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInstancedStaticMeshComponent::execUpdateInstanceTransform)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewInstanceTransform);
		P_GET_UBOOL(Z_Param_bWorldSpace);
		P_GET_UBOOL(Z_Param_bMarkRenderStateDirty);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateInstanceTransform(Z_Param_InstanceIndex,Z_Param_Out_NewInstanceTransform,Z_Param_bWorldSpace,Z_Param_bMarkRenderStateDirty,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInstancedStaticMeshComponent::execGetInstanceTransform)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutInstanceTransform);
		P_GET_UBOOL(Z_Param_bWorldSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInstanceTransform(Z_Param_InstanceIndex,Z_Param_Out_OutInstanceTransform,Z_Param_bWorldSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInstancedStaticMeshComponent::execSetCustomDataValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_CustomDataIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CustomDataValue);
		P_GET_UBOOL(Z_Param_bMarkRenderStateDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomDataValue(Z_Param_InstanceIndex,Z_Param_CustomDataIndex,Z_Param_CustomDataValue,Z_Param_bMarkRenderStateDirty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInstancedStaticMeshComponent::execAddInstanceWorldSpace)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddInstanceWorldSpace(Z_Param_Out_WorldTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInstancedStaticMeshComponent::execAddInstances)
	{
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_InstanceTransforms);
		P_GET_UBOOL(Z_Param_bShouldReturnIndices);
		P_GET_UBOOL(Z_Param_bWorldSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->AddInstances(Z_Param_Out_InstanceTransforms,Z_Param_bShouldReturnIndices,Z_Param_bWorldSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInstancedStaticMeshComponent::execAddInstance)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InstanceTransform);
		P_GET_UBOOL(Z_Param_bWorldSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddInstance(Z_Param_Out_InstanceTransform,Z_Param_bWorldSpace);
		P_NATIVE_END;
	}
	void UInstancedStaticMeshComponent::StaticRegisterNativesUInstancedStaticMeshComponent()
	{
		UClass* Class = UInstancedStaticMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInstance", &UInstancedStaticMeshComponent::execAddInstance },
			{ "AddInstances", &UInstancedStaticMeshComponent::execAddInstances },
			{ "AddInstanceWorldSpace", &UInstancedStaticMeshComponent::execAddInstanceWorldSpace },
			{ "BatchUpdateInstancesTransform", &UInstancedStaticMeshComponent::execBatchUpdateInstancesTransform },
			{ "BatchUpdateInstancesTransforms", &UInstancedStaticMeshComponent::execBatchUpdateInstancesTransforms },
			{ "ClearInstances", &UInstancedStaticMeshComponent::execClearInstances },
			{ "GetInstanceCount", &UInstancedStaticMeshComponent::execGetInstanceCount },
			{ "GetInstancesOverlappingBox", &UInstancedStaticMeshComponent::execGetInstancesOverlappingBox },
			{ "GetInstancesOverlappingSphere", &UInstancedStaticMeshComponent::execGetInstancesOverlappingSphere },
			{ "GetInstanceTransform", &UInstancedStaticMeshComponent::execGetInstanceTransform },
			{ "IsValidInstance", &UInstancedStaticMeshComponent::execIsValidInstance },
			{ "RemoveInstance", &UInstancedStaticMeshComponent::execRemoveInstance },
			{ "RemoveInstances", &UInstancedStaticMeshComponent::execRemoveInstances },
			{ "SetCullDistances", &UInstancedStaticMeshComponent::execSetCullDistances },
			{ "SetCustomDataValue", &UInstancedStaticMeshComponent::execSetCustomDataValue },
			{ "UpdateInstanceTransform", &UInstancedStaticMeshComponent::execUpdateInstanceTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics
	{
		struct InstancedStaticMeshComponent_eventAddInstance_Parms
		{
			FTransform InstanceTransform;
			bool bWorldSpace;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceTransform;
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_InstanceTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_InstanceTransform = { "InstanceTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstance_Parms, InstanceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_InstanceTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_InstanceTransform_MetaData)) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventAddInstance_Parms*)Obj)->bWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventAddInstance_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_InstanceTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_bWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Add an instance to this component. Transform is given in local space of this component unless bWorldSpace is set. */" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Add an instance to this component. Transform is given in local space of this component unless bWorldSpace is set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "AddInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::InstancedStaticMeshComponent_eventAddInstance_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics
	{
		struct InstancedStaticMeshComponent_eventAddInstances_Parms
		{
			TArray<FTransform> InstanceTransforms;
			bool bShouldReturnIndices;
			bool bWorldSpace;
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceTransforms;
		static void NewProp_bShouldReturnIndices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldReturnIndices;
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_InstanceTransforms_Inner = { "InstanceTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_InstanceTransforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_InstanceTransforms = { "InstanceTransforms", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstances_Parms, InstanceTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_InstanceTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_InstanceTransforms_MetaData)) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_bShouldReturnIndices_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventAddInstances_Parms*)Obj)->bShouldReturnIndices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_bShouldReturnIndices = { "bShouldReturnIndices", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventAddInstances_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_bShouldReturnIndices_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventAddInstances_Parms*)Obj)->bWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventAddInstances_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_InstanceTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_InstanceTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_bShouldReturnIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_bWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Add multiple instances to this component. Transform is given in local space of this component unless bWorldSpace is set. */" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Add multiple instances to this component. Transform is given in local space of this component unless bWorldSpace is set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "AddInstances", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::InstancedStaticMeshComponent_eventAddInstances_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics
	{
		struct InstancedStaticMeshComponent_eventAddInstanceWorldSpace_Parms
		{
			FTransform WorldTransform;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstanceWorldSpace_Parms, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_WorldTransform_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstanceWorldSpace_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_WorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use 'Add Instance' or 'Add Instances' with 'World Space' set to true." },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "AddInstanceWorldSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::InstancedStaticMeshComponent_eventAddInstanceWorldSpace_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics
	{
		struct InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms
		{
			int32 StartInstanceIndex;
			int32 NumInstances;
			FTransform NewInstancesTransform;
			bool bWorldSpace;
			bool bMarkRenderStateDirty;
			bool bTeleport;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartInstanceIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewInstancesTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewInstancesTransform;
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_StartInstanceIndex = { "StartInstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms, StartInstanceIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_NumInstances = { "NumInstances", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms, NumInstances), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_NewInstancesTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_NewInstancesTransform = { "NewInstancesTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms, NewInstancesTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_NewInstancesTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_NewInstancesTransform_MetaData)) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms*)Obj)->bWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms*)Obj)->bMarkRenderStateDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_StartInstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_NumInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_NewInstancesTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bMarkRenderStateDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_bTeleport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/**\n\x09* Update the transform for a number of instances.\n\x09*\n\x09* @param StartInstanceIndex\x09\x09The starting index of the instances to update\n\x09* @param NumInstances\x09\x09\x09The number of instances to update\n\x09* @param NewInstancesTransform\x09The new transform\n\x09* @param bWorldSpace\x09\x09\x09If true, the new transform is interpreted as a World Space transform, otherwise it is interpreted as Local Space\n\x09* @param bMarkRenderStateDirty\x09If true, the change should be visible immediately. If you are updating many instances you should only set this to true for the last instance.\n\x09* @param bTeleport\x09\x09\x09\x09Whether or not the instances physics should be moved normally, or teleported (moved instantly, ignoring velocity).\n\x09* @return\x09\x09\x09\x09\x09\x09True on success.\n\x09*/" },
		{ "CPP_Default_bMarkRenderStateDirty", "false" },
		{ "CPP_Default_bTeleport", "false" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Update the transform for a number of instances.\n\n@param StartInstanceIndex             The starting index of the instances to update\n@param NumInstances                   The number of instances to update\n@param NewInstancesTransform  The new transform\n@param bWorldSpace                    If true, the new transform is interpreted as a World Space transform, otherwise it is interpreted as Local Space\n@param bMarkRenderStateDirty  If true, the change should be visible immediately. If you are updating many instances you should only set this to true for the last instance.\n@param bTeleport                              Whether or not the instances physics should be moved normally, or teleported (moved instantly, ignoring velocity).\n@return                                               True on success." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "BatchUpdateInstancesTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::InstancedStaticMeshComponent_eventBatchUpdateInstancesTransform_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics
	{
		struct InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms
		{
			int32 StartInstanceIndex;
			TArray<FTransform> NewInstancesTransforms;
			bool bWorldSpace;
			bool bMarkRenderStateDirty;
			bool bTeleport;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartInstanceIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewInstancesTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewInstancesTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewInstancesTransforms;
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_StartInstanceIndex = { "StartInstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms, StartInstanceIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_NewInstancesTransforms_Inner = { "NewInstancesTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_NewInstancesTransforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_NewInstancesTransforms = { "NewInstancesTransforms", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms, NewInstancesTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_NewInstancesTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_NewInstancesTransforms_MetaData)) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms*)Obj)->bWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms*)Obj)->bMarkRenderStateDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_StartInstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_NewInstancesTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_NewInstancesTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bMarkRenderStateDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_bTeleport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/**\n\x09* Update the transform for an array of instances.\n\x09*\n\x09* @param StartInstanceIndex\x09\x09The starting index of the instances to update\n\x09* @param NewInstancesTransforms\x09The new transforms\n\x09* @param bWorldSpace\x09\x09\x09If true, the new transforms are interpreted as a World Space transform, otherwise it is interpreted as Local Space\n\x09* @param bMarkRenderStateDirty\x09If true, the change should be visible immediately. If you are updating many instances you should only set this to true for the last instance.\n\x09* @param bTeleport\x09\x09\x09\x09Whether or not the instances physics should be moved normally, or teleported (moved instantly, ignoring velocity).\n\x09* @return\x09\x09\x09\x09\x09\x09True on success.\n\x09*/" },
		{ "CPP_Default_bMarkRenderStateDirty", "false" },
		{ "CPP_Default_bTeleport", "false" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Update the transform for an array of instances.\n\n@param StartInstanceIndex             The starting index of the instances to update\n@param NewInstancesTransforms The new transforms\n@param bWorldSpace                    If true, the new transforms are interpreted as a World Space transform, otherwise it is interpreted as Local Space\n@param bMarkRenderStateDirty  If true, the change should be visible immediately. If you are updating many instances you should only set this to true for the last instance.\n@param bTeleport                              Whether or not the instances physics should be moved normally, or teleported (moved instantly, ignoring velocity).\n@return                                               True on success." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "BatchUpdateInstancesTransforms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::InstancedStaticMeshComponent_eventBatchUpdateInstancesTransforms_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Clear all instances being rendered by this component. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Clear all instances being rendered by this component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "ClearInstances", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics
	{
		struct InstancedStaticMeshComponent_eventGetInstanceCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstanceCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Get the number of instances in this component. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Get the number of instances in this component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "GetInstanceCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::InstancedStaticMeshComponent_eventGetInstanceCount_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics
	{
		struct InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms
		{
			FBox Box;
			bool bBoxInWorldSpace;
			TArray<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
		static void NewProp_bBoxInWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoxInWorldSpace;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_Box_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_Box_MetaData)) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_bBoxInWorldSpace_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms*)Obj)->bBoxInWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_bBoxInWorldSpace = { "bBoxInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_bBoxInWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_bBoxInWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Returns the instances with instance bounds overlapping the specified box. The return value is an array of instance indices. */" },
		{ "CPP_Default_bBoxInWorldSpace", "true" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Returns the instances with instance bounds overlapping the specified box. The return value is an array of instance indices." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "GetInstancesOverlappingBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics
	{
		struct InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms
		{
			FVector Center;
			float Radius;
			bool bSphereInWorldSpace;
			TArray<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bSphereInWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSphereInWorldSpace;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Center_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Center_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_bSphereInWorldSpace_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms*)Obj)->bSphereInWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_bSphereInWorldSpace = { "bSphereInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_bSphereInWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_bSphereInWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Returns the instances with instance bounds overlapping the specified sphere. The return value is an array of instance indices. */" },
		{ "CPP_Default_bSphereInWorldSpace", "true" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Returns the instances with instance bounds overlapping the specified sphere. The return value is an array of instance indices." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "GetInstancesOverlappingSphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics
	{
		struct InstancedStaticMeshComponent_eventGetInstanceTransform_Parms
		{
			int32 InstanceIndex;
			FTransform OutInstanceTransform;
			bool bWorldSpace;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutInstanceTransform;
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_OutInstanceTransform = { "OutInstanceTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms, OutInstanceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventGetInstanceTransform_Parms*)Obj)->bWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventGetInstanceTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_OutInstanceTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Get the transform for the instance specified. Instance is returned in local space of this component unless bWorldSpace is set.  Returns True on success. */" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Get the transform for the instance specified. Instance is returned in local space of this component unless bWorldSpace is set.  Returns True on success." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "GetInstanceTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::InstancedStaticMeshComponent_eventGetInstanceTransform_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics
	{
		struct InstancedStaticMeshComponent_eventIsValidInstance_Parms
		{
			int32 InstanceIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventIsValidInstance_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventIsValidInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventIsValidInstance_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Does the given index map to a valid instance in this component? */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Does the given index map to a valid instance in this component?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "IsValidInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::InstancedStaticMeshComponent_eventIsValidInstance_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics
	{
		struct InstancedStaticMeshComponent_eventRemoveInstance_Parms
		{
			int32 InstanceIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventRemoveInstance_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventRemoveInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventRemoveInstance_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Remove the instance specified. Returns True on success. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Remove the instance specified. Returns True on success." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "RemoveInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::InstancedStaticMeshComponent_eventRemoveInstance_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics
	{
		struct InstancedStaticMeshComponent_eventRemoveInstances_Parms
		{
			TArray<int32> InstancesToRemove;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstancesToRemove_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancesToRemove_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancesToRemove;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove_Inner = { "InstancesToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove = { "InstancesToRemove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventRemoveInstances_Parms, InstancesToRemove), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove_MetaData)) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventRemoveInstances_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventRemoveInstances_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Remove the instances specified. Returns True on success. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Remove the instances specified. Returns True on success." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "RemoveInstances", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::InstancedStaticMeshComponent_eventRemoveInstances_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics
	{
		struct InstancedStaticMeshComponent_eventSetCullDistances_Parms
		{
			int32 StartCullDistance;
			int32 EndCullDistance;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartCullDistance;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndCullDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::NewProp_StartCullDistance = { "StartCullDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventSetCullDistances_Parms, StartCullDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::NewProp_EndCullDistance = { "EndCullDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventSetCullDistances_Parms, EndCullDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::NewProp_StartCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::NewProp_EndCullDistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Sets the fading start and culling end distances for this component. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Sets the fading start and culling end distances for this component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "SetCullDistances", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::InstancedStaticMeshComponent_eventSetCullDistances_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics
	{
		struct InstancedStaticMeshComponent_eventSetCustomDataValue_Parms
		{
			int32 InstanceIndex;
			int32 CustomDataIndex;
			float CustomDataValue;
			bool bMarkRenderStateDirty;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CustomDataIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomDataValue;
		static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventSetCustomDataValue_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_CustomDataIndex = { "CustomDataIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventSetCustomDataValue_Parms, CustomDataIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_CustomDataValue = { "CustomDataValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventSetCustomDataValue_Parms, CustomDataValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventSetCustomDataValue_Parms*)Obj)->bMarkRenderStateDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventSetCustomDataValue_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventSetCustomDataValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventSetCustomDataValue_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_CustomDataIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_CustomDataValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_bMarkRenderStateDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/** Update custom data for specific instance */" },
		{ "CPP_Default_bMarkRenderStateDirty", "false" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Update custom data for specific instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "SetCustomDataValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::InstancedStaticMeshComponent_eventSetCustomDataValue_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics
	{
		struct InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms
		{
			int32 InstanceIndex;
			FTransform NewInstanceTransform;
			bool bWorldSpace;
			bool bMarkRenderStateDirty;
			bool bTeleport;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewInstanceTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewInstanceTransform;
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform = { "NewInstanceTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms, NewInstanceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform_MetaData)) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms*)Obj)->bWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms*)Obj)->bMarkRenderStateDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "Comment", "/**\n\x09* Update the transform for the instance specified.\n\x09*\n\x09* @param InstanceIndex\x09\x09\x09The index of the instance to update\n\x09* @param NewInstanceTransform\x09The new transform\n\x09* @param bWorldSpace\x09\x09\x09If true, the new transform is interpreted as a World Space transform, otherwise it is interpreted as Local Space\n\x09* @param bMarkRenderStateDirty\x09If true, the change should be visible immediately. If you are updating many instances you should only set this to true for the last instance.\n\x09* @param bTeleport\x09\x09\x09\x09Whether or not the instance's physics should be moved normally, or teleported (moved instantly, ignoring velocity).\n\x09* @return\x09\x09\x09\x09\x09\x09True on success.\n\x09*/" },
		{ "CPP_Default_bMarkRenderStateDirty", "false" },
		{ "CPP_Default_bTeleport", "false" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Update the transform for the instance specified.\n\n@param InstanceIndex                  The index of the instance to update\n@param NewInstanceTransform   The new transform\n@param bWorldSpace                    If true, the new transform is interpreted as a World Space transform, otherwise it is interpreted as Local Space\n@param bMarkRenderStateDirty  If true, the change should be visible immediately. If you are updating many instances you should only set this to true for the last instance.\n@param bTeleport                              Whether or not the instance's physics should be moved normally, or teleported (moved instantly, ignoring velocity).\n@return                                               True on success." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "UpdateInstanceTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInstancedStaticMeshComponent);
	UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister()
	{
		return UInstancedStaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInstancedStaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerInstanceSMData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerInstanceSMData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerInstanceSMData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerInstancePrevTransform_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerInstancePrevTransform_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerInstancePrevTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCustomDataFloats_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCustomDataFloats;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PerInstanceSMCustomData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerInstanceSMCustomData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerInstanceSMCustomData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancingRandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstancingRandomSeed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalRandomSeeds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalRandomSeeds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalRandomSeeds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceStartCullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceStartCullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceEndCullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceEndCullDistance;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceReorderTable_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceReorderTable_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceReorderTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumPendingLightmaps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPendingLightmaps;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedMappings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance, "AddInstance" }, // 1751929718
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstances, "AddInstances" }, // 3559547224
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace, "AddInstanceWorldSpace" }, // 3383055776
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransform, "BatchUpdateInstancesTransform" }, // 3062831729
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_BatchUpdateInstancesTransforms, "BatchUpdateInstancesTransforms" }, // 2507797699
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances, "ClearInstances" }, // 901791621
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount, "GetInstanceCount" }, // 834275896
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox, "GetInstancesOverlappingBox" }, // 1390455838
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere, "GetInstancesOverlappingSphere" }, // 1586062843
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform, "GetInstanceTransform" }, // 316283097
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_IsValidInstance, "IsValidInstance" }, // 428767737
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance, "RemoveInstance" }, // 233486019
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstances, "RemoveInstances" }, // 368006713
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances, "SetCullDistances" }, // 1904440023
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCustomDataValue, "SetCustomDataValue" }, // 1008833233
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform, "UpdateInstanceTransform" }, // 497622422
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** A component that efficiently renders multiple instances of the same StaticMesh. */" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/InstancedStaticMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "A component that efficiently renders multiple instances of the same StaticMesh." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData_Inner = { "PerInstanceSMData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData, METADATA_PARAMS(nullptr, 0) }; // 1322225863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData_MetaData[] = {
		{ "Category", "Instances" },
		{ "Comment", "/** Array of instances, bulk serialized. */" },
		{ "DisplayName", "Instances" },
		{ "EditFixedOrder", "" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Array of instances, bulk serialized." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData = { "PerInstanceSMData", nullptr, (EPropertyFlags)0x0090000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, PerInstanceSMData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData_MetaData)) }; // 1322225863
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstancePrevTransform_Inner = { "PerInstancePrevTransform", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstancePrevTransform_MetaData[] = {
		{ "Comment", "/** Array of prev instance transforms. Must match the length of PerInstanceSMData or have 0 elements */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Array of prev instance transforms. Must match the length of PerInstanceSMData or have 0 elements" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstancePrevTransform = { "PerInstancePrevTransform", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, PerInstancePrevTransform), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstancePrevTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstancePrevTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumCustomDataFloats_MetaData[] = {
		{ "Category", "Instances" },
		{ "Comment", "/** Defines the number of floats that will be available per instance for custom data */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Defines the number of floats that will be available per instance for custom data" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumCustomDataFloats = { "NumCustomDataFloats", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, NumCustomDataFloats), METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumCustomDataFloats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumCustomDataFloats_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMCustomData_Inner = { "PerInstanceSMCustomData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMCustomData_MetaData[] = {
		{ "Category", "Instances" },
		{ "Comment", "/** Array of custom data for instances. This will contains NumCustomDataFloats*InstanceCount entries. The entries are represented sequantially, in instance order. Can be read in a material and manipulated through Blueprints.\n\x09 *\x09""Example: If NumCustomDataFloats is 1, then each entry will belong to an instance. Custom data 0 will belong to Instance 0. Custom data 1 will belong to Instance 1 etc.\n\x09 *\x09""Example: If NumCustomDataFloats is 2, then each pair of sequential entries belong to an instance. Custom data 0 and 1 will belong to Instance 0. Custom data 2 and 3 will belong to Instance 2 etc.\n\x09 */" },
		{ "DisplayName", "Custom data" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Array of custom data for instances. This will contains NumCustomDataFloats*InstanceCount entries. The entries are represented sequantially, in instance order. Can be read in a material and manipulated through Blueprints.\n    Example: If NumCustomDataFloats is 1, then each entry will belong to an instance. Custom data 0 will belong to Instance 0. Custom data 1 will belong to Instance 1 etc.\n    Example: If NumCustomDataFloats is 2, then each pair of sequential entries belong to an instance. Custom data 0 and 1 will belong to Instance 0. Custom data 2 and 3 will belong to Instance 2 etc." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMCustomData = { "PerInstanceSMCustomData", nullptr, (EPropertyFlags)0x0090040000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, PerInstanceSMCustomData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMCustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMCustomData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstancingRandomSeed_MetaData[] = {
		{ "Category", "InstancedStaticMeshComponent" },
		{ "Comment", "/** Value used to seed the random number stream that generates random numbers for each of this mesh's instances.\n\x09The random number is stored in a buffer accessible to materials through the PerInstanceRandom expression. If\n\x09this is set to zero (default), it will be populated automatically by the editor. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Value used to seed the random number stream that generates random numbers for each of this mesh's instances.\n      The random number is stored in a buffer accessible to materials through the PerInstanceRandom expression. If\n      this is set to zero (default), it will be populated automatically by the editor." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstancingRandomSeed = { "InstancingRandomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, InstancingRandomSeed), METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstancingRandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstancingRandomSeed_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_AdditionalRandomSeeds_Inner = { "AdditionalRandomSeeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed, METADATA_PARAMS(nullptr, 0) }; // 1774363851
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_AdditionalRandomSeeds_MetaData[] = {
		{ "Comment", "/** Additional random seeds ranges. Each seed entry will be applied from AdditionalRandomSeeds[i].StartInstanceIndex to AdditionalRandomSeeds[i+1].StartInstanceIndex -1 */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Additional random seeds ranges. Each seed entry will be applied from AdditionalRandomSeeds[i].StartInstanceIndex to AdditionalRandomSeeds[i+1].StartInstanceIndex -1" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_AdditionalRandomSeeds = { "AdditionalRandomSeeds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, AdditionalRandomSeeds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_AdditionalRandomSeeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_AdditionalRandomSeeds_MetaData)) }; // 1774363851
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceStartCullDistance_MetaData[] = {
		{ "Category", "Culling" },
		{ "Comment", "/** Distance from camera at which each instance begins to fade out. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Distance from camera at which each instance begins to fade out." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceStartCullDistance = { "InstanceStartCullDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, InstanceStartCullDistance), METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceStartCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceStartCullDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceEndCullDistance_MetaData[] = {
		{ "Category", "Culling" },
		{ "Comment", "/** Distance from camera at which each instance completely fades out. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Distance from camera at which each instance completely fades out." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceEndCullDistance = { "InstanceEndCullDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, InstanceEndCullDistance), METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceEndCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceEndCullDistance_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable_Inner = { "InstanceReorderTable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable_MetaData[] = {
		{ "Comment", "/** Mapping from PerInstanceSMData order to instance render buffer order. If empty, the PerInstanceSMData order is used. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Mapping from PerInstanceSMData order to instance render buffer order. If empty, the PerInstanceSMData order is used." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable = { "InstanceReorderTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, InstanceReorderTable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumPendingLightmaps_MetaData[] = {
		{ "Comment", "/** Number of pending lightmaps still to be calculated (Apply()'d). */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Number of pending lightmaps still to be calculated (Apply()'d)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumPendingLightmaps = { "NumPendingLightmaps", nullptr, (EPropertyFlags)0x0020480000202000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, NumPendingLightmaps), METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumPendingLightmaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumPendingLightmaps_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings_Inner = { "CachedMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo, METADATA_PARAMS(nullptr, 0) }; // 3905007421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings_MetaData[] = {
		{ "Comment", "/** The mappings for all the instances of this component. */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "The mappings for all the instances of this component." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings = { "CachedMappings", nullptr, (EPropertyFlags)0x0020480000202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, CachedMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings_MetaData)) }; // 3905007421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstancePrevTransform_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstancePrevTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumCustomDataFloats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMCustomData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMCustomData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstancingRandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_AdditionalRandomSeeds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_AdditionalRandomSeeds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceStartCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceEndCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumPendingLightmaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USMInstanceManager_NoRegister, (int32)VTABLE_OFFSET(UInstancedStaticMeshComponent, ISMInstanceManager), false },  // 399041778
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInstancedStaticMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::ClassParams = {
		&UInstancedStaticMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInstancedStaticMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UInstancedStaticMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInstancedStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInstancedStaticMeshComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInstancedStaticMeshComponent>()
	{
		return UInstancedStaticMeshComponent::StaticClass();
	}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInstancedStaticMeshComponent)
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstancedStaticMeshLightMapInstanceData;
class UScriptStruct* FInstancedStaticMeshLightMapInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStaticMeshLightMapInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstancedStaticMeshLightMapInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InstancedStaticMeshLightMapInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_InstancedStaticMeshLightMapInstanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInstancedStaticMeshLightMapInstanceData>()
{
	return FInstancedStaticMeshLightMapInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MapBuildDataIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapBuildDataIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MapBuildDataIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Used to store lightmap data during RerunConstructionScripts */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Used to store lightmap data during RerunConstructionScripts" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStaticMeshLightMapInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_Transform_MetaData[] = {
		{ "Comment", "/** Transform of component */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Transform of component" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInstancedStaticMeshLightMapInstanceData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_MapBuildDataIds_Inner = { "MapBuildDataIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_MapBuildDataIds_MetaData[] = {
		{ "Comment", "/** guid from LODData */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "guid from LODData" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_MapBuildDataIds = { "MapBuildDataIds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInstancedStaticMeshLightMapInstanceData, MapBuildDataIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_MapBuildDataIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_MapBuildDataIds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_MapBuildDataIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_MapBuildDataIds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InstancedStaticMeshLightMapInstanceData",
		sizeof(FInstancedStaticMeshLightMapInstanceData),
		alignof(FInstancedStaticMeshLightMapInstanceData),
		Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_InstancedStaticMeshLightMapInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstancedStaticMeshLightMapInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InstancedStaticMeshLightMapInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FInstancedStaticMeshComponentInstanceData>() == std::is_polymorphic<FSceneComponentInstanceData>(), "USTRUCT FInstancedStaticMeshComponentInstanceData cannot be polymorphic unless super FSceneComponentInstanceData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstancedStaticMeshComponentInstanceData;
class UScriptStruct* FInstancedStaticMeshComponentInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStaticMeshComponentInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstancedStaticMeshComponentInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InstancedStaticMeshComponentInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_InstancedStaticMeshComponentInstanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInstancedStaticMeshComponentInstanceData>()
{
	return FInstancedStaticMeshComponentInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedStaticLighting_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedStaticLighting;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerInstanceSMData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerInstanceSMData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerInstanceSMData;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PerInstanceSMCustomData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerInstanceSMCustomData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerInstanceSMCustomData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancingRandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstancingRandomSeed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalRandomSeeds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalRandomSeeds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalRandomSeeds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasPerInstanceHitProxies_MetaData[];
#endif
		static void NewProp_bHasPerInstanceHitProxies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPerInstanceHitProxies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Helper class used to preserve lighting/selection state across blueprint reinstancing */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Helper class used to preserve lighting/selection state across blueprint reinstancing" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStaticMeshComponentInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Comment", "/** Mesh being used by component */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Mesh being used by component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInstancedStaticMeshComponentInstanceData, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting_MetaData[] = {
		{ "Comment", "// Static lighting info\n" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Static lighting info" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting = { "CachedStaticLighting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInstancedStaticMeshComponentInstanceData, CachedStaticLighting), Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData, METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting_MetaData)) }; // 415651994
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMData_Inner = { "PerInstanceSMData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData, METADATA_PARAMS(nullptr, 0) }; // 1322225863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMData = { "PerInstanceSMData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInstancedStaticMeshComponentInstanceData, PerInstanceSMData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMData_MetaData)) }; // 1322225863
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMCustomData_Inner = { "PerInstanceSMCustomData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMCustomData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMCustomData = { "PerInstanceSMCustomData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInstancedStaticMeshComponentInstanceData, PerInstanceSMCustomData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMCustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMCustomData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_InstancingRandomSeed_MetaData[] = {
		{ "Comment", "/* The cached random seed */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "The cached random seed" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_InstancingRandomSeed = { "InstancingRandomSeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInstancedStaticMeshComponentInstanceData, InstancingRandomSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_InstancingRandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_InstancingRandomSeed_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_AdditionalRandomSeeds_Inner = { "AdditionalRandomSeeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed, METADATA_PARAMS(nullptr, 0) }; // 1774363851
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_AdditionalRandomSeeds_MetaData[] = {
		{ "Comment", "/* Additional random seeds */" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Additional random seeds" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_AdditionalRandomSeeds = { "AdditionalRandomSeeds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInstancedStaticMeshComponentInstanceData, AdditionalRandomSeeds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_AdditionalRandomSeeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_AdditionalRandomSeeds_MetaData)) }; // 1774363851
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_bHasPerInstanceHitProxies_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_bHasPerInstanceHitProxies_SetBit(void* Obj)
	{
		((FInstancedStaticMeshComponentInstanceData*)Obj)->bHasPerInstanceHitProxies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_bHasPerInstanceHitProxies = { "bHasPerInstanceHitProxies", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInstancedStaticMeshComponentInstanceData), &Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_bHasPerInstanceHitProxies_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_bHasPerInstanceHitProxies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_bHasPerInstanceHitProxies_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMCustomData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMCustomData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_InstancingRandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_AdditionalRandomSeeds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_AdditionalRandomSeeds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_bHasPerInstanceHitProxies,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FSceneComponentInstanceData,
		&NewStructOps,
		"InstancedStaticMeshComponentInstanceData",
		sizeof(FInstancedStaticMeshComponentInstanceData),
		alignof(FInstancedStaticMeshComponentInstanceData),
		Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_InstancedStaticMeshComponentInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstancedStaticMeshComponentInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InstancedStaticMeshComponentInstanceData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_Statics::ScriptStructInfo[] = {
		{ FInstancedStaticMeshInstanceData::StaticStruct, Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::NewStructOps, TEXT("InstancedStaticMeshInstanceData"), &Z_Registration_Info_UScriptStruct_InstancedStaticMeshInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstancedStaticMeshInstanceData), 1322225863U) },
		{ FInstancedStaticMeshMappingInfo::StaticStruct, Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::NewStructOps, TEXT("InstancedStaticMeshMappingInfo"), &Z_Registration_Info_UScriptStruct_InstancedStaticMeshMappingInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstancedStaticMeshMappingInfo), 3905007421U) },
		{ FInstancedStaticMeshRandomSeed::StaticStruct, Z_Construct_UScriptStruct_FInstancedStaticMeshRandomSeed_Statics::NewStructOps, TEXT("InstancedStaticMeshRandomSeed"), &Z_Registration_Info_UScriptStruct_InstancedStaticMeshRandomSeed, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstancedStaticMeshRandomSeed), 1774363851U) },
		{ FInstancedStaticMeshLightMapInstanceData::StaticStruct, Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewStructOps, TEXT("InstancedStaticMeshLightMapInstanceData"), &Z_Registration_Info_UScriptStruct_InstancedStaticMeshLightMapInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstancedStaticMeshLightMapInstanceData), 415651994U) },
		{ FInstancedStaticMeshComponentInstanceData::StaticStruct, Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewStructOps, TEXT("InstancedStaticMeshComponentInstanceData"), &Z_Registration_Info_UScriptStruct_InstancedStaticMeshComponentInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstancedStaticMeshComponentInstanceData), 1785803458U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInstancedStaticMeshComponent, UInstancedStaticMeshComponent::StaticClass, TEXT("UInstancedStaticMeshComponent"), &Z_Registration_Info_UClass_UInstancedStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInstancedStaticMeshComponent), 3189192154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_2583281000(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InstancedStaticMeshComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
