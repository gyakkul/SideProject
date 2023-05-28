// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/HLOD/DestructibleHLODComponent.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestructibleHLODComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UWorldPartitionDestructibleHLODComponent::StaticRegisterNativesUWorldPartitionDestructibleHLODComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionDestructibleHLODComponent);
	UClass* Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_NoRegister()
	{
		return UWorldPartitionDestructibleHLODComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DestructibleActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestructibleActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DestructibleActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Tags Sockets ComponentTick ComponentReplication Activation Cooking Events AssetUserData Collision Trigger PhysicsVolume" },
		{ "IncludePath", "WorldPartition/HLOD/DestructibleHLODComponent.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::NewProp_DestructibleActors_Inner = { "DestructibleActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::NewProp_DestructibleActors_MetaData[] = {
		{ "Comment", "// Name of the destructible actors from the source cell.\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
		{ "ToolTip", "Name of the destructible actors from the source cell." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::NewProp_DestructibleActors = { "DestructibleActors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionDestructibleHLODComponent, DestructibleActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::NewProp_DestructibleActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::NewProp_DestructibleActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::NewProp_DestructibleActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::NewProp_DestructibleActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionDestructibleHLODComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::ClassParams = {
		&UWorldPartitionDestructibleHLODComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODComponent.OuterSingleton, Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionDestructibleHLODComponent>()
	{
		return UWorldPartitionDestructibleHLODComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionDestructibleHLODComponent);
	UWorldPartitionDestructibleHLODComponent::~UWorldPartitionDestructibleHLODComponent() {}

static_assert(std::is_polymorphic<FWorldPartitionDestructibleHLODDamagedActorState>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FWorldPartitionDestructibleHLODDamagedActorState cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODDamagedActorState;
class UScriptStruct* FWorldPartitionDestructibleHLODDamagedActorState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODDamagedActorState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODDamagedActorState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WorldPartitionDestructibleHLODDamagedActorState"));
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODDamagedActorState.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWorldPartitionDestructibleHLODDamagedActorState>()
{
	return FWorldPartitionDestructibleHLODDamagedActorState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActorIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorHealth_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Entry for a damaged actor\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
		{ "ToolTip", "Entry for a damaged actor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldPartitionDestructibleHLODDamagedActorState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::NewProp_ActorIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::NewProp_ActorIndex = { "ActorIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldPartitionDestructibleHLODDamagedActorState, ActorIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::NewProp_ActorIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::NewProp_ActorIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::NewProp_ActorHealth_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::NewProp_ActorHealth = { "ActorHealth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldPartitionDestructibleHLODDamagedActorState, ActorHealth), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::NewProp_ActorHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::NewProp_ActorHealth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::NewProp_ActorIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::NewProp_ActorHealth,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"WorldPartitionDestructibleHLODDamagedActorState",
		sizeof(FWorldPartitionDestructibleHLODDamagedActorState),
		alignof(FWorldPartitionDestructibleHLODDamagedActorState),
		Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODDamagedActorState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODDamagedActorState.InnerSingleton, Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODDamagedActorState.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWorldPartitionDestructibleHLODState>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FWorldPartitionDestructibleHLODState cannot be polymorphic unless super FFastArraySerializer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODState;
class UScriptStruct* FWorldPartitionDestructibleHLODState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WorldPartitionDestructibleHLODState"));
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODState.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWorldPartitionDestructibleHLODState>()
{
	return FWorldPartitionDestructibleHLODState::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
	UE_NET_IMPLEMENT_FASTARRAY(FWorldPartitionDestructibleHLODState);
#else
	UE_NET_IMPLEMENT_FASTARRAY_STUB(FWorldPartitionDestructibleHLODState);
#endif
	struct Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamagedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamagedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DamagedActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnerComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Replicated state of the destructible HLOD\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
		{ "ToolTip", "Replicated state of the destructible HLOD" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldPartitionDestructibleHLODState>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::NewProp_DamagedActors_Inner = { "DamagedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState, METADATA_PARAMS(nullptr, 0) }; // 1499173570
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::NewProp_DamagedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::NewProp_DamagedActors = { "DamagedActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldPartitionDestructibleHLODState, DamagedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::NewProp_DamagedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::NewProp_DamagedActors_MetaData)) }; // 1499173570
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::NewProp_OwnerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0044000080080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldPartitionDestructibleHLODState, OwnerComponent), Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::NewProp_OwnerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::NewProp_OwnerComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::NewProp_DamagedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::NewProp_DamagedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::NewProp_OwnerComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"WorldPartitionDestructibleHLODState",
		sizeof(FWorldPartitionDestructibleHLODState),
		alignof(FWorldPartitionDestructibleHLODState),
		Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODState.InnerSingleton, Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODState.InnerSingleton;
	}
	void UWorldPartitionDestructibleHLODMeshComponent::StaticRegisterNativesUWorldPartitionDestructibleHLODMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionDestructibleHLODMeshComponent);
	UClass* Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_NoRegister()
	{
		return UWorldPartitionDestructibleHLODMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestructibleHLODMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DestructibleHLODMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestructibleHLODState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestructibleHLODState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VisibilityMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VisibilityTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Tags Sockets ComponentTick ComponentReplication Activation Cooking Events AssetUserData Collision Trigger PhysicsVolume" },
		{ "IncludePath", "WorldPartition/HLOD/DestructibleHLODComponent.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_DestructibleHLODMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_DestructibleHLODMaterial = { "DestructibleHLODMaterial", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionDestructibleHLODMeshComponent, DestructibleHLODMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_DestructibleHLODMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_DestructibleHLODMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_DestructibleHLODState_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_DestructibleHLODState = { "DestructibleHLODState", nullptr, (EPropertyFlags)0x0040008000002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionDestructibleHLODMeshComponent, DestructibleHLODState), Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_DestructibleHLODState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_DestructibleHLODState_MetaData)) }; // 3016807961
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_VisibilityMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_VisibilityMaterial = { "VisibilityMaterial", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionDestructibleHLODMeshComponent, VisibilityMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_VisibilityMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_VisibilityMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_VisibilityTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/DestructibleHLODComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_VisibilityTexture = { "VisibilityTexture", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionDestructibleHLODMeshComponent, VisibilityTexture), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_VisibilityTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_VisibilityTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_DestructibleHLODMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_DestructibleHLODState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_VisibilityMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::NewProp_VisibilityTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionDestructibleHLODMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::ClassParams = {
		&UWorldPartitionDestructibleHLODMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODMeshComponent.OuterSingleton, Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODMeshComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionDestructibleHLODMeshComponent>()
	{
		return UWorldPartitionDestructibleHLODMeshComponent::StaticClass();
	}

	void UWorldPartitionDestructibleHLODMeshComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_DestructibleHLODState(TEXT("DestructibleHLODState"));

		const bool bIsValid = true
			&& Name_DestructibleHLODState == ClassReps[(int32)ENetFields_Private::DestructibleHLODState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UWorldPartitionDestructibleHLODMeshComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionDestructibleHLODMeshComponent);
	UWorldPartitionDestructibleHLODMeshComponent::~UWorldPartitionDestructibleHLODMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_Statics::ScriptStructInfo[] = {
		{ FWorldPartitionDestructibleHLODDamagedActorState::StaticStruct, Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODDamagedActorState_Statics::NewStructOps, TEXT("WorldPartitionDestructibleHLODDamagedActorState"), &Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODDamagedActorState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldPartitionDestructibleHLODDamagedActorState), 1499173570U) },
		{ FWorldPartitionDestructibleHLODState::StaticStruct, Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState_Statics::NewStructOps, TEXT("WorldPartitionDestructibleHLODState"), &Z_Registration_Info_UScriptStruct_WorldPartitionDestructibleHLODState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldPartitionDestructibleHLODState), 3016807961U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionDestructibleHLODComponent, UWorldPartitionDestructibleHLODComponent::StaticClass, TEXT("UWorldPartitionDestructibleHLODComponent"), &Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionDestructibleHLODComponent), 2116048569U) },
		{ Z_Construct_UClass_UWorldPartitionDestructibleHLODMeshComponent, UWorldPartitionDestructibleHLODMeshComponent::StaticClass, TEXT("UWorldPartitionDestructibleHLODMeshComponent"), &Z_Registration_Info_UClass_UWorldPartitionDestructibleHLODMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionDestructibleHLODMeshComponent), 2241856201U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_2437218464(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_DestructibleHLODComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
