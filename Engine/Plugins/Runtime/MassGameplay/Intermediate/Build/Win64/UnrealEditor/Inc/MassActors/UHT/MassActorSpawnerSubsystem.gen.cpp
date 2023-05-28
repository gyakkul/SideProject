// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassActors/Public/MassActorSpawnerSubsystem.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassActorSpawnerSubsystem() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedHandleBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassActorSpawnerSubsystem();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassActorSpawnerSubsystem_NoRegister();
	MASSACTORS_API UEnum* Z_Construct_UEnum_MassActors_ESpawnRequestStatus();
	MASSACTORS_API UScriptStruct* Z_Construct_UScriptStruct_FMassActorSpawnRequest();
	MASSACTORS_API UScriptStruct* Z_Construct_UScriptStruct_FMassActorSpawnRequestHandle();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_MassActors();
// End Cross Module References

static_assert(std::is_polymorphic<FMassActorSpawnRequestHandle>() == std::is_polymorphic<FIndexedHandleBase>(), "USTRUCT FMassActorSpawnRequestHandle cannot be polymorphic unless super FIndexedHandleBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassActorSpawnRequestHandle;
class UScriptStruct* FMassActorSpawnRequestHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassActorSpawnRequestHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassActorSpawnRequestHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassActorSpawnRequestHandle, (UObject*)Z_Construct_UPackage__Script_MassActors(), TEXT("MassActorSpawnRequestHandle"));
	}
	return Z_Registration_Info_UScriptStruct_MassActorSpawnRequestHandle.OuterSingleton;
}
template<> MASSACTORS_API UScriptStruct* StaticStruct<FMassActorSpawnRequestHandle>()
{
	return FMassActorSpawnRequestHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassActorSpawnRequestHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassActorSpawnRequestHandle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Handle for an actor spawning request\n" },
		{ "ModuleRelativePath", "Public/MassActorSpawnerSubsystem.h" },
		{ "ToolTip", "Handle for an actor spawning request" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassActorSpawnRequestHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassActorSpawnRequestHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassActorSpawnRequestHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
		Z_Construct_UScriptStruct_FIndexedHandleBase,
		&NewStructOps,
		"MassActorSpawnRequestHandle",
		sizeof(FMassActorSpawnRequestHandle),
		alignof(FMassActorSpawnRequestHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassActorSpawnRequestHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassActorSpawnRequestHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassActorSpawnRequestHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_MassActorSpawnRequestHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassActorSpawnRequestHandle.InnerSingleton, Z_Construct_UScriptStruct_FMassActorSpawnRequestHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassActorSpawnRequestHandle.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpawnRequestStatus;
	static UEnum* ESpawnRequestStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpawnRequestStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpawnRequestStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassActors_ESpawnRequestStatus, (UObject*)Z_Construct_UPackage__Script_MassActors(), TEXT("ESpawnRequestStatus"));
		}
		return Z_Registration_Info_UEnum_ESpawnRequestStatus.OuterSingleton;
	}
	template<> MASSACTORS_API UEnum* StaticEnum<ESpawnRequestStatus>()
	{
		return ESpawnRequestStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_MassActors_ESpawnRequestStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MassActors_ESpawnRequestStatus_Statics::Enumerators[] = {
		{ "ESpawnRequestStatus::None", (int64)ESpawnRequestStatus::None },
		{ "ESpawnRequestStatus::Pending", (int64)ESpawnRequestStatus::Pending },
		{ "ESpawnRequestStatus::Processing", (int64)ESpawnRequestStatus::Processing },
		{ "ESpawnRequestStatus::Succeeded", (int64)ESpawnRequestStatus::Succeeded },
		{ "ESpawnRequestStatus::Failed", (int64)ESpawnRequestStatus::Failed },
		{ "ESpawnRequestStatus::RetryPending", (int64)ESpawnRequestStatus::RetryPending },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MassActors_ESpawnRequestStatus_Statics::Enum_MetaDataParams[] = {
		{ "Failed.Comment", "// Successfully spawned the actor\n" },
		{ "Failed.Name", "ESpawnRequestStatus::Failed" },
		{ "Failed.ToolTip", "Successfully spawned the actor" },
		{ "ModuleRelativePath", "Public/MassActorSpawnerSubsystem.h" },
		{ "None.Name", "ESpawnRequestStatus::None" },
		{ "Pending.Comment", "// Not in the queue to be spawn\n" },
		{ "Pending.Name", "ESpawnRequestStatus::Pending" },
		{ "Pending.ToolTip", "Not in the queue to be spawn" },
		{ "Processing.Comment", "// Still in the queue to be spawn\n" },
		{ "Processing.Name", "ESpawnRequestStatus::Processing" },
		{ "Processing.ToolTip", "Still in the queue to be spawn" },
		{ "RetryPending.Comment", "// Error while spawning the actor\n" },
		{ "RetryPending.Name", "ESpawnRequestStatus::RetryPending" },
		{ "RetryPending.ToolTip", "Error while spawning the actor" },
		{ "Succeeded.Comment", "// in the process of spawning the actor\n" },
		{ "Succeeded.Name", "ESpawnRequestStatus::Succeeded" },
		{ "Succeeded.ToolTip", "in the process of spawning the actor" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassActors_ESpawnRequestStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MassActors,
		nullptr,
		"ESpawnRequestStatus",
		"ESpawnRequestStatus",
		Z_Construct_UEnum_MassActors_ESpawnRequestStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MassActors_ESpawnRequestStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MassActors_ESpawnRequestStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MassActors_ESpawnRequestStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MassActors_ESpawnRequestStatus()
	{
		if (!Z_Registration_Info_UEnum_ESpawnRequestStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpawnRequestStatus.InnerSingleton, Z_Construct_UEnum_MassActors_ESpawnRequestStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpawnRequestStatus.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassActorSpawnRequest;
class UScriptStruct* FMassActorSpawnRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassActorSpawnRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassActorSpawnRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassActorSpawnRequest, (UObject*)Z_Construct_UPackage__Script_MassActors(), TEXT("MassActorSpawnRequest"));
	}
	return Z_Registration_Info_UScriptStruct_MassActorSpawnRequest.OuterSingleton;
}
template<> MASSACTORS_API UScriptStruct* StaticStruct<FMassActorSpawnRequest>()
{
	return FMassActorSpawnRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Template;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpawnedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all spawn request\n */" },
		{ "ModuleRelativePath", "Public/MassActorSpawnerSubsystem.h" },
		{ "ToolTip", "Base class for all spawn request" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassActorSpawnRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics::NewProp_Template_MetaData[] = {
		{ "Comment", "/** The template BP actor to spawn */" },
		{ "ModuleRelativePath", "Public/MassActorSpawnerSubsystem.h" },
		{ "ToolTip", "The template BP actor to spawn" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassActorSpawnRequest, Template), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics::NewProp_Template_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics::NewProp_Template_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics::NewProp_SpawnedActor_MetaData[] = {
		{ "Comment", "/** The pointer to the actor once it is spawned */" },
		{ "ModuleRelativePath", "Public/MassActorSpawnerSubsystem.h" },
		{ "ToolTip", "The pointer to the actor once it is spawned" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassActorSpawnRequest, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics::NewProp_SpawnedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics::NewProp_SpawnedActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics::NewProp_Template,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics::NewProp_SpawnedActor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
		nullptr,
		&NewStructOps,
		"MassActorSpawnRequest",
		sizeof(FMassActorSpawnRequest),
		alignof(FMassActorSpawnRequest),
		Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassActorSpawnRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_MassActorSpawnRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassActorSpawnRequest.InnerSingleton, Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassActorSpawnRequest.InnerSingleton;
	}
	void UMassActorSpawnerSubsystem::StaticRegisterNativesUMassActorSpawnerSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassActorSpawnerSubsystem);
	UClass* Z_Construct_UClass_UMassActorSpawnerSubsystem_NoRegister()
	{
		return UMassActorSpawnerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnRequests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRequests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnRequests;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorsToDestroy_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToDestroy_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToDestroy;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DeactivatedActorsToDestroy_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeactivatedActorsToDestroy_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeactivatedActorsToDestroy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A subsystem managing spawning of actors for all mass subsystems\n */" },
		{ "IncludePath", "MassActorSpawnerSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassActorSpawnerSubsystem.h" },
		{ "ToolTip", "A subsystem managing spawning of actors for all mass subsystems" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::NewProp_SpawnRequests_Inner = { "SpawnRequests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(nullptr, 0) }; // 3026308664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::NewProp_SpawnRequests_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassActorSpawnerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::NewProp_SpawnRequests = { "SpawnRequests", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassActorSpawnerSubsystem, SpawnRequests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::NewProp_SpawnRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::NewProp_SpawnRequests_MetaData)) }; // 3026308664
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::NewProp_ActorsToDestroy_Inner = { "ActorsToDestroy", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::NewProp_ActorsToDestroy_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassActorSpawnerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::NewProp_ActorsToDestroy = { "ActorsToDestroy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassActorSpawnerSubsystem, ActorsToDestroy), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::NewProp_ActorsToDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::NewProp_ActorsToDestroy_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::NewProp_DeactivatedActorsToDestroy_Inner = { "DeactivatedActorsToDestroy", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::NewProp_DeactivatedActorsToDestroy_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassActorSpawnerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::NewProp_DeactivatedActorsToDestroy = { "DeactivatedActorsToDestroy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassActorSpawnerSubsystem, DeactivatedActorsToDestroy), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::NewProp_DeactivatedActorsToDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::NewProp_DeactivatedActorsToDestroy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::NewProp_SpawnRequests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::NewProp_SpawnRequests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::NewProp_ActorsToDestroy_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::NewProp_ActorsToDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::NewProp_DeactivatedActorsToDestroy_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::NewProp_DeactivatedActorsToDestroy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassActorSpawnerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::ClassParams = {
		&UMassActorSpawnerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassActorSpawnerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassActorSpawnerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassActorSpawnerSubsystem.OuterSingleton, Z_Construct_UClass_UMassActorSpawnerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassActorSpawnerSubsystem.OuterSingleton;
	}
	template<> MASSACTORS_API UClass* StaticClass<UMassActorSpawnerSubsystem>()
	{
		return UMassActorSpawnerSubsystem::StaticClass();
	}
	UMassActorSpawnerSubsystem::UMassActorSpawnerSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassActorSpawnerSubsystem);
	UMassActorSpawnerSubsystem::~UMassActorSpawnerSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSpawnerSubsystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSpawnerSubsystem_h_Statics::EnumInfo[] = {
		{ ESpawnRequestStatus_StaticEnum, TEXT("ESpawnRequestStatus"), &Z_Registration_Info_UEnum_ESpawnRequestStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3186509761U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSpawnerSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FMassActorSpawnRequestHandle::StaticStruct, Z_Construct_UScriptStruct_FMassActorSpawnRequestHandle_Statics::NewStructOps, TEXT("MassActorSpawnRequestHandle"), &Z_Registration_Info_UScriptStruct_MassActorSpawnRequestHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassActorSpawnRequestHandle), 2523265748U) },
		{ FMassActorSpawnRequest::StaticStruct, Z_Construct_UScriptStruct_FMassActorSpawnRequest_Statics::NewStructOps, TEXT("MassActorSpawnRequest"), &Z_Registration_Info_UScriptStruct_MassActorSpawnRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassActorSpawnRequest), 4013013263U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSpawnerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassActorSpawnerSubsystem, UMassActorSpawnerSubsystem::StaticClass, TEXT("UMassActorSpawnerSubsystem"), &Z_Registration_Info_UClass_UMassActorSpawnerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassActorSpawnerSubsystem), 3881096336U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSpawnerSubsystem_h_1193950609(TEXT("/Script/MassActors"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSpawnerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSpawnerSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSpawnerSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSpawnerSubsystem_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSpawnerSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorSpawnerSubsystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
