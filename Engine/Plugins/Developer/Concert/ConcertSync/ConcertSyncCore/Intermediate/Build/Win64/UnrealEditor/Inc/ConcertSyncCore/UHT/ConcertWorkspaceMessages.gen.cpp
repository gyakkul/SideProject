// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertWorkspaceMessages.h"
#include "ConcertMessageData.h"
#include "ConcertSyncSessionTypes.h"
#include "ConcertWorkspaceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertWorkspaceMessages() {}
// Cross Module References
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSessionSerializedPayload();
	CONCERTSYNCCORE_API UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertPlaySessionEventType();
	CONCERTSYNCCORE_API UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertResourceLockType();
	CONCERTSYNCCORE_API UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityEventType();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertPackage();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertPackageInfo();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertPackageRejectedEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertPackageUpdateEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertPlaySessionEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertResourceLockEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertResourceLockRequest();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertResourceLockResponse();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertServerLogging();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncEventRequest();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncEventResponse();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertWorkspaceSyncActivityEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertWorkspaceSyncAndFinalizeCompletedEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertWorkspaceSyncCompletedEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertWorkspaceSyncEndpointEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertWorkspaceSyncEventBase();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UPackage* Z_Construct_UPackage__Script_ConcertSyncCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncEventBase;
class UScriptStruct* FConcertWorkspaceSyncEventBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncEventBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncEventBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertWorkspaceSyncEventBase, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertWorkspaceSyncEventBase"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncEventBase.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertWorkspaceSyncEventBase>()
{
	return FConcertWorkspaceSyncEventBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertWorkspaceSyncEventBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumRemainingSyncEvents_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumRemainingSyncEvents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertWorkspaceSyncEventBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertWorkspaceSyncEventBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertWorkspaceSyncEventBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertWorkspaceSyncEventBase_Statics::NewProp_NumRemainingSyncEvents_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConcertWorkspaceSyncEventBase_Statics::NewProp_NumRemainingSyncEvents = { "NumRemainingSyncEvents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertWorkspaceSyncEventBase, NumRemainingSyncEvents), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertWorkspaceSyncEventBase_Statics::NewProp_NumRemainingSyncEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertWorkspaceSyncEventBase_Statics::NewProp_NumRemainingSyncEvents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertWorkspaceSyncEventBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertWorkspaceSyncEventBase_Statics::NewProp_NumRemainingSyncEvents,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertWorkspaceSyncEventBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertWorkspaceSyncEventBase",
		sizeof(FConcertWorkspaceSyncEventBase),
		alignof(FConcertWorkspaceSyncEventBase),
		Z_Construct_UScriptStruct_FConcertWorkspaceSyncEventBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertWorkspaceSyncEventBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertWorkspaceSyncEventBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertWorkspaceSyncEventBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertWorkspaceSyncEventBase()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncEventBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncEventBase.InnerSingleton, Z_Construct_UScriptStruct_FConcertWorkspaceSyncEventBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncEventBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertWorkspaceSyncEndpointEvent>() == std::is_polymorphic<FConcertWorkspaceSyncEventBase>(), "USTRUCT FConcertWorkspaceSyncEndpointEvent cannot be polymorphic unless super FConcertWorkspaceSyncEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncEndpointEvent;
class UScriptStruct* FConcertWorkspaceSyncEndpointEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncEndpointEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncEndpointEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertWorkspaceSyncEndpointEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertWorkspaceSyncEndpointEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncEndpointEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertWorkspaceSyncEndpointEvent>()
{
	return FConcertWorkspaceSyncEndpointEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertWorkspaceSyncEndpointEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Endpoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Endpoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertWorkspaceSyncEndpointEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertWorkspaceSyncEndpointEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertWorkspaceSyncEndpointEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertWorkspaceSyncEndpointEvent_Statics::NewProp_Endpoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertWorkspaceSyncEndpointEvent_Statics::NewProp_Endpoint = { "Endpoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertWorkspaceSyncEndpointEvent, Endpoint), Z_Construct_UScriptStruct_FConcertSyncEndpointIdAndData, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertWorkspaceSyncEndpointEvent_Statics::NewProp_Endpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertWorkspaceSyncEndpointEvent_Statics::NewProp_Endpoint_MetaData)) }; // 2744379043
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertWorkspaceSyncEndpointEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertWorkspaceSyncEndpointEvent_Statics::NewProp_Endpoint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertWorkspaceSyncEndpointEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		Z_Construct_UScriptStruct_FConcertWorkspaceSyncEventBase,
		&NewStructOps,
		"ConcertWorkspaceSyncEndpointEvent",
		sizeof(FConcertWorkspaceSyncEndpointEvent),
		alignof(FConcertWorkspaceSyncEndpointEvent),
		Z_Construct_UScriptStruct_FConcertWorkspaceSyncEndpointEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertWorkspaceSyncEndpointEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertWorkspaceSyncEndpointEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertWorkspaceSyncEndpointEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertWorkspaceSyncEndpointEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncEndpointEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncEndpointEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertWorkspaceSyncEndpointEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncEndpointEvent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertWorkspaceSyncActivityEvent>() == std::is_polymorphic<FConcertWorkspaceSyncEventBase>(), "USTRUCT FConcertWorkspaceSyncActivityEvent cannot be polymorphic unless super FConcertWorkspaceSyncEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncActivityEvent;
class UScriptStruct* FConcertWorkspaceSyncActivityEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncActivityEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncActivityEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertWorkspaceSyncActivityEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertWorkspaceSyncActivityEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncActivityEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertWorkspaceSyncActivityEvent>()
{
	return FConcertWorkspaceSyncActivityEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertWorkspaceSyncActivityEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Activity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Activity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertWorkspaceSyncActivityEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertWorkspaceSyncActivityEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertWorkspaceSyncActivityEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertWorkspaceSyncActivityEvent_Statics::NewProp_Activity_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertWorkspaceSyncActivityEvent_Statics::NewProp_Activity = { "Activity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertWorkspaceSyncActivityEvent, Activity), Z_Construct_UScriptStruct_FConcertSessionSerializedPayload, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertWorkspaceSyncActivityEvent_Statics::NewProp_Activity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertWorkspaceSyncActivityEvent_Statics::NewProp_Activity_MetaData)) }; // 661764570
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertWorkspaceSyncActivityEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertWorkspaceSyncActivityEvent_Statics::NewProp_Activity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertWorkspaceSyncActivityEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		Z_Construct_UScriptStruct_FConcertWorkspaceSyncEventBase,
		&NewStructOps,
		"ConcertWorkspaceSyncActivityEvent",
		sizeof(FConcertWorkspaceSyncActivityEvent),
		alignof(FConcertWorkspaceSyncActivityEvent),
		Z_Construct_UScriptStruct_FConcertWorkspaceSyncActivityEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertWorkspaceSyncActivityEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertWorkspaceSyncActivityEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertWorkspaceSyncActivityEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertWorkspaceSyncActivityEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncActivityEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncActivityEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertWorkspaceSyncActivityEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncActivityEvent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertWorkspaceSyncLockEvent>() == std::is_polymorphic<FConcertWorkspaceSyncEventBase>(), "USTRUCT FConcertWorkspaceSyncLockEvent cannot be polymorphic unless super FConcertWorkspaceSyncEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncLockEvent;
class UScriptStruct* FConcertWorkspaceSyncLockEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncLockEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncLockEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertWorkspaceSyncLockEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncLockEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertWorkspaceSyncLockEvent>()
{
	return FConcertWorkspaceSyncLockEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_LockedResources_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LockedResources_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockedResources_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LockedResources;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertWorkspaceSyncLockEvent>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent_Statics::NewProp_LockedResources_ValueProp = { "LockedResources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent_Statics::NewProp_LockedResources_Key_KeyProp = { "LockedResources_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent_Statics::NewProp_LockedResources_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent_Statics::NewProp_LockedResources = { "LockedResources", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertWorkspaceSyncLockEvent, LockedResources), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent_Statics::NewProp_LockedResources_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent_Statics::NewProp_LockedResources_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent_Statics::NewProp_LockedResources_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent_Statics::NewProp_LockedResources_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent_Statics::NewProp_LockedResources,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		Z_Construct_UScriptStruct_FConcertWorkspaceSyncEventBase,
		&NewStructOps,
		"ConcertWorkspaceSyncLockEvent",
		sizeof(FConcertWorkspaceSyncLockEvent),
		alignof(FConcertWorkspaceSyncLockEvent),
		Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncLockEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncLockEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncLockEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncRequestedEvent;
class UScriptStruct* FConcertWorkspaceSyncRequestedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncRequestedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncRequestedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertWorkspaceSyncRequestedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncRequestedEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertWorkspaceSyncRequestedEvent>()
{
	return FConcertWorkspaceSyncRequestedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstActivityIdToSync_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_FirstActivityIdToSync;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastActivityIdToSync_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_LastActivityIdToSync;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLiveSync_MetaData[];
#endif
		static void NewProp_bEnableLiveSync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLiveSync;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertWorkspaceSyncRequestedEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::NewProp_FirstActivityIdToSync_MetaData[] = {
		{ "Comment", "/** The ID of the first activity to sync */" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
		{ "ToolTip", "The ID of the first activity to sync" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::NewProp_FirstActivityIdToSync = { "FirstActivityIdToSync", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertWorkspaceSyncRequestedEvent, FirstActivityIdToSync), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::NewProp_FirstActivityIdToSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::NewProp_FirstActivityIdToSync_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::NewProp_LastActivityIdToSync_MetaData[] = {
		{ "Comment", "/** The ID of the last activity to sync (ignored if bEnableLiveSync is true) */" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
		{ "ToolTip", "The ID of the last activity to sync (ignored if bEnableLiveSync is true)" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::NewProp_LastActivityIdToSync = { "LastActivityIdToSync", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertWorkspaceSyncRequestedEvent, LastActivityIdToSync), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::NewProp_LastActivityIdToSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::NewProp_LastActivityIdToSync_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::NewProp_bEnableLiveSync_MetaData[] = {
		{ "Comment", "/** True if the server workspace should be live-synced to this client as new activity is added, or false if syncing should only happen in response to these sync request events */" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
		{ "ToolTip", "True if the server workspace should be live-synced to this client as new activity is added, or false if syncing should only happen in response to these sync request events" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::NewProp_bEnableLiveSync_SetBit(void* Obj)
	{
		((FConcertWorkspaceSyncRequestedEvent*)Obj)->bEnableLiveSync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::NewProp_bEnableLiveSync = { "bEnableLiveSync", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertWorkspaceSyncRequestedEvent), &Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::NewProp_bEnableLiveSync_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::NewProp_bEnableLiveSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::NewProp_bEnableLiveSync_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::NewProp_FirstActivityIdToSync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::NewProp_LastActivityIdToSync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::NewProp_bEnableLiveSync,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertWorkspaceSyncRequestedEvent",
		sizeof(FConcertWorkspaceSyncRequestedEvent),
		alignof(FConcertWorkspaceSyncRequestedEvent),
		Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncRequestedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncRequestedEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncRequestedEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncCompletedEvent;
class UScriptStruct* FConcertWorkspaceSyncCompletedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncCompletedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncCompletedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertWorkspaceSyncCompletedEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertWorkspaceSyncCompletedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncCompletedEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertWorkspaceSyncCompletedEvent>()
{
	return FConcertWorkspaceSyncCompletedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertWorkspaceSyncCompletedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertWorkspaceSyncCompletedEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertWorkspaceSyncCompletedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertWorkspaceSyncCompletedEvent>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertWorkspaceSyncCompletedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertWorkspaceSyncCompletedEvent",
		sizeof(FConcertWorkspaceSyncCompletedEvent),
		alignof(FConcertWorkspaceSyncCompletedEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertWorkspaceSyncCompletedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertWorkspaceSyncCompletedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertWorkspaceSyncCompletedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncCompletedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncCompletedEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertWorkspaceSyncCompletedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncCompletedEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncAndFinalizeCompletedEvent;
class UScriptStruct* FConcertWorkspaceSyncAndFinalizeCompletedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncAndFinalizeCompletedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncAndFinalizeCompletedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertWorkspaceSyncAndFinalizeCompletedEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertWorkspaceSyncAndFinalizeCompletedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncAndFinalizeCompletedEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertWorkspaceSyncAndFinalizeCompletedEvent>()
{
	return FConcertWorkspaceSyncAndFinalizeCompletedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertWorkspaceSyncAndFinalizeCompletedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertWorkspaceSyncAndFinalizeCompletedEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** An event emitted by a client after its workspace has been completely synced and finalized. All transactions are posted and packages have been loaded. */" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
		{ "ToolTip", "An event emitted by a client after its workspace has been completely synced and finalized. All transactions are posted and packages have been loaded." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertWorkspaceSyncAndFinalizeCompletedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertWorkspaceSyncAndFinalizeCompletedEvent>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertWorkspaceSyncAndFinalizeCompletedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertWorkspaceSyncAndFinalizeCompletedEvent",
		sizeof(FConcertWorkspaceSyncAndFinalizeCompletedEvent),
		alignof(FConcertWorkspaceSyncAndFinalizeCompletedEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertWorkspaceSyncAndFinalizeCompletedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertWorkspaceSyncAndFinalizeCompletedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertWorkspaceSyncAndFinalizeCompletedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncAndFinalizeCompletedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncAndFinalizeCompletedEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertWorkspaceSyncAndFinalizeCompletedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncAndFinalizeCompletedEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSyncEventRequest;
class UScriptStruct* FConcertSyncEventRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSyncEventRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSyncEventRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSyncEventRequest, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSyncEventRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSyncEventRequest.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSyncEventRequest>()
{
	return FConcertSyncEventRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EventType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_EventId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Request to sync an event that was partially synced on the client but for which the full data is required for inspection. FConcertSyncEventResponse is the corresponding response. */" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
		{ "ToolTip", "Request to sync an event that was partially synced on the client but for which the full data is required for inspection. FConcertSyncEventResponse is the corresponding response." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSyncEventRequest>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics::NewProp_EventType_MetaData[] = {
		{ "Comment", "/** The type of event to sync. Only Package and Transaction event types are supported. */" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
		{ "ToolTip", "The type of event to sync. Only Package and Transaction event types are supported." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncEventRequest, EventType), Z_Construct_UEnum_ConcertSyncCore_EConcertSyncActivityEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics::NewProp_EventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics::NewProp_EventType_MetaData)) }; // 1719255986
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics::NewProp_EventId_MetaData[] = {
		{ "Comment", "/** The ID of the event to sync. */" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
		{ "ToolTip", "The ID of the event to sync." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncEventRequest, EventId), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics::NewProp_EventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics::NewProp_EventId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics::NewProp_EventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics::NewProp_EventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics::NewProp_EventId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSyncEventRequest",
		sizeof(FConcertSyncEventRequest),
		alignof(FConcertSyncEventRequest),
		Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncEventRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSyncEventRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSyncEventRequest.InnerSingleton, Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSyncEventRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSyncEventResponse;
class UScriptStruct* FConcertSyncEventResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSyncEventResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSyncEventResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSyncEventResponse, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSyncEventResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSyncEventResponse.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSyncEventResponse>()
{
	return FConcertSyncEventResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSyncEventResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncEventResponse_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Response to a FConcertSyncEventRequest request. */" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
		{ "ToolTip", "Response to a FConcertSyncEventRequest request." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSyncEventResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSyncEventResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSyncEventResponse_Statics::NewProp_Event_MetaData[] = {
		{ "Comment", "/** The payload contains the event corresponding to the requested event type like FConcertSyncTransactionEvent/FConcertSyncPackageEvent or an empty payload if the request failed. */" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
		{ "ToolTip", "The payload contains the event corresponding to the requested event type like FConcertSyncTransactionEvent/FConcertSyncPackageEvent or an empty payload if the request failed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSyncEventResponse_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSyncEventResponse, Event), Z_Construct_UScriptStruct_FConcertSessionSerializedPayload, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncEventResponse_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncEventResponse_Statics::NewProp_Event_MetaData)) }; // 661764570
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSyncEventResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSyncEventResponse_Statics::NewProp_Event,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSyncEventResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSyncEventResponse",
		sizeof(FConcertSyncEventResponse),
		alignof(FConcertSyncEventResponse),
		Z_Construct_UScriptStruct_FConcertSyncEventResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncEventResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSyncEventResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSyncEventResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSyncEventResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSyncEventResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSyncEventResponse.InnerSingleton, Z_Construct_UScriptStruct_FConcertSyncEventResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSyncEventResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertServerLogging;
class UScriptStruct* FConcertServerLogging::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertServerLogging.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertServerLogging.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertServerLogging, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertServerLogging"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertServerLogging.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertServerLogging>()
{
	return FConcertServerLogging::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertServerLogging_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoggingEnabled_MetaData[];
#endif
		static void NewProp_bLoggingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoggingEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertServerLogging_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertServerLogging_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertServerLogging>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertServerLogging_Statics::NewProp_bLoggingEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertServerLogging_Statics::NewProp_bLoggingEnabled_SetBit(void* Obj)
	{
		((FConcertServerLogging*)Obj)->bLoggingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertServerLogging_Statics::NewProp_bLoggingEnabled = { "bLoggingEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertServerLogging), &Z_Construct_UScriptStruct_FConcertServerLogging_Statics::NewProp_bLoggingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertServerLogging_Statics::NewProp_bLoggingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerLogging_Statics::NewProp_bLoggingEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertServerLogging_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertServerLogging_Statics::NewProp_bLoggingEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertServerLogging_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertServerLogging",
		sizeof(FConcertServerLogging),
		alignof(FConcertServerLogging),
		Z_Construct_UScriptStruct_FConcertServerLogging_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerLogging_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertServerLogging_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerLogging_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertServerLogging()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertServerLogging.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertServerLogging.InnerSingleton, Z_Construct_UScriptStruct_FConcertServerLogging_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertServerLogging.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertPackageTransmissionStartEvent;
class UScriptStruct* FConcertPackageTransmissionStartEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertPackageTransmissionStartEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertPackageTransmissionStartEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertPackageTransmissionStartEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertPackageTransmissionStartEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertPackageTransmissionStartEvent>()
{
	return FConcertPackageTransmissionStartEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransmissionId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransmissionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PackageInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageNumBytes_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_PackageNumBytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Sent to let the receiver know something is coming. For now only sent from client to server. */" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
		{ "ToolTip", "Sent to let the receiver know something is coming. For now only sent from client to server." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertPackageTransmissionStartEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::NewProp_TransmissionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::NewProp_TransmissionId = { "TransmissionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertPackageTransmissionStartEvent, TransmissionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::NewProp_TransmissionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::NewProp_TransmissionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::NewProp_PackageInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::NewProp_PackageInfo = { "PackageInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertPackageTransmissionStartEvent, PackageInfo), Z_Construct_UScriptStruct_FConcertPackageInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::NewProp_PackageInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::NewProp_PackageInfo_MetaData)) }; // 1261909146
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::NewProp_PackageNumBytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::NewProp_PackageNumBytes = { "PackageNumBytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertPackageTransmissionStartEvent, PackageNumBytes), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::NewProp_PackageNumBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::NewProp_PackageNumBytes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::NewProp_TransmissionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::NewProp_PackageInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::NewProp_PackageNumBytes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertPackageTransmissionStartEvent",
		sizeof(FConcertPackageTransmissionStartEvent),
		alignof(FConcertPackageTransmissionStartEvent),
		Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertPackageTransmissionStartEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertPackageTransmissionStartEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertPackageTransmissionStartEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertPackageUpdateEvent;
class UScriptStruct* FConcertPackageUpdateEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertPackageUpdateEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertPackageUpdateEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertPackageUpdateEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertPackageUpdateEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertPackageUpdateEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertPackageUpdateEvent>()
{
	return FConcertPackageUpdateEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertPackageUpdateEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransmissionId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransmissionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Package_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Package;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPackageUpdateEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertPackageUpdateEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertPackageUpdateEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPackageUpdateEvent_Statics::NewProp_TransmissionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertPackageUpdateEvent_Statics::NewProp_TransmissionId = { "TransmissionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertPackageUpdateEvent, TransmissionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPackageUpdateEvent_Statics::NewProp_TransmissionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackageUpdateEvent_Statics::NewProp_TransmissionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPackageUpdateEvent_Statics::NewProp_Package_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertPackageUpdateEvent_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertPackageUpdateEvent, Package), Z_Construct_UScriptStruct_FConcertPackage, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPackageUpdateEvent_Statics::NewProp_Package_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackageUpdateEvent_Statics::NewProp_Package_MetaData)) }; // 287183038
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertPackageUpdateEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPackageUpdateEvent_Statics::NewProp_TransmissionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPackageUpdateEvent_Statics::NewProp_Package,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertPackageUpdateEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertPackageUpdateEvent",
		sizeof(FConcertPackageUpdateEvent),
		alignof(FConcertPackageUpdateEvent),
		Z_Construct_UScriptStruct_FConcertPackageUpdateEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackageUpdateEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPackageUpdateEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackageUpdateEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertPackageUpdateEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertPackageUpdateEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertPackageUpdateEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertPackageUpdateEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertPackageUpdateEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertPackageRejectedEvent;
class UScriptStruct* FConcertPackageRejectedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertPackageRejectedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertPackageRejectedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertPackageRejectedEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertPackageRejectedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertPackageRejectedEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertPackageRejectedEvent>()
{
	return FConcertPackageRejectedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertPackageRejectedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PackageName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPackageRejectedEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertPackageRejectedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertPackageRejectedEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPackageRejectedEvent_Statics::NewProp_PackageName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertPackageRejectedEvent_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertPackageRejectedEvent, PackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPackageRejectedEvent_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackageRejectedEvent_Statics::NewProp_PackageName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertPackageRejectedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPackageRejectedEvent_Statics::NewProp_PackageName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertPackageRejectedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertPackageRejectedEvent",
		sizeof(FConcertPackageRejectedEvent),
		alignof(FConcertPackageRejectedEvent),
		Z_Construct_UScriptStruct_FConcertPackageRejectedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackageRejectedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPackageRejectedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPackageRejectedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertPackageRejectedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertPackageRejectedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertPackageRejectedEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertPackageRejectedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertPackageRejectedEvent.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertResourceLockType;
	static UEnum* EConcertResourceLockType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertResourceLockType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertResourceLockType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConcertSyncCore_EConcertResourceLockType, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("EConcertResourceLockType"));
		}
		return Z_Registration_Info_UEnum_EConcertResourceLockType.OuterSingleton;
	}
	template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertResourceLockType>()
	{
		return EConcertResourceLockType_StaticEnum();
	}
	struct Z_Construct_UEnum_ConcertSyncCore_EConcertResourceLockType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConcertSyncCore_EConcertResourceLockType_Statics::Enumerators[] = {
		{ "EConcertResourceLockType::None", (int64)EConcertResourceLockType::None },
		{ "EConcertResourceLockType::Lock", (int64)EConcertResourceLockType::Lock },
		{ "EConcertResourceLockType::Unlock", (int64)EConcertResourceLockType::Unlock },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConcertSyncCore_EConcertResourceLockType_Statics::Enum_MetaDataParams[] = {
		{ "Lock.Name", "EConcertResourceLockType::Lock" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
		{ "None.Name", "EConcertResourceLockType::None" },
		{ "Unlock.Name", "EConcertResourceLockType::Unlock" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConcertSyncCore_EConcertResourceLockType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		"EConcertResourceLockType",
		"EConcertResourceLockType",
		Z_Construct_UEnum_ConcertSyncCore_EConcertResourceLockType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertResourceLockType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ConcertSyncCore_EConcertResourceLockType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertResourceLockType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertResourceLockType()
	{
		if (!Z_Registration_Info_UEnum_EConcertResourceLockType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertResourceLockType.InnerSingleton, Z_Construct_UEnum_ConcertSyncCore_EConcertResourceLockType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertResourceLockType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertResourceLockEvent;
class UScriptStruct* FConcertResourceLockEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertResourceLockEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertResourceLockEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertResourceLockEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertResourceLockEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertResourceLockEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertResourceLockEvent>()
{
	return FConcertResourceLockEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientId;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ResourceNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ResourceNames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LockType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LockType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertResourceLockEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::NewProp_ClientId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertResourceLockEvent, ClientId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::NewProp_ClientId_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::NewProp_ResourceNames_Inner = { "ResourceNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::NewProp_ResourceNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::NewProp_ResourceNames = { "ResourceNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertResourceLockEvent, ResourceNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::NewProp_ResourceNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::NewProp_ResourceNames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::NewProp_LockType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::NewProp_LockType_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::NewProp_LockType = { "LockType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertResourceLockEvent, LockType), Z_Construct_UEnum_ConcertSyncCore_EConcertResourceLockType, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::NewProp_LockType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::NewProp_LockType_MetaData)) }; // 2988184756
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::NewProp_ClientId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::NewProp_ResourceNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::NewProp_ResourceNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::NewProp_LockType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::NewProp_LockType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertResourceLockEvent",
		sizeof(FConcertResourceLockEvent),
		alignof(FConcertResourceLockEvent),
		Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertResourceLockEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertResourceLockEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertResourceLockEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertResourceLockEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertResourceLockRequest;
class UScriptStruct* FConcertResourceLockRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertResourceLockRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertResourceLockRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertResourceLockRequest, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertResourceLockRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertResourceLockRequest.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertResourceLockRequest>()
{
	return FConcertResourceLockRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientId;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ResourceNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ResourceNames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LockType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LockType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertResourceLockRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::NewProp_ClientId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertResourceLockRequest, ClientId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::NewProp_ClientId_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::NewProp_ResourceNames_Inner = { "ResourceNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::NewProp_ResourceNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::NewProp_ResourceNames = { "ResourceNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertResourceLockRequest, ResourceNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::NewProp_ResourceNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::NewProp_ResourceNames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::NewProp_LockType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::NewProp_LockType_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::NewProp_LockType = { "LockType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertResourceLockRequest, LockType), Z_Construct_UEnum_ConcertSyncCore_EConcertResourceLockType, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::NewProp_LockType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::NewProp_LockType_MetaData)) }; // 2988184756
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::NewProp_ClientId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::NewProp_ResourceNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::NewProp_ResourceNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::NewProp_LockType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::NewProp_LockType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertResourceLockRequest",
		sizeof(FConcertResourceLockRequest),
		alignof(FConcertResourceLockRequest),
		Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertResourceLockRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertResourceLockRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertResourceLockRequest.InnerSingleton, Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertResourceLockRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertResourceLockResponse;
class UScriptStruct* FConcertResourceLockResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertResourceLockResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertResourceLockResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertResourceLockResponse, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertResourceLockResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertResourceLockResponse.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertResourceLockResponse>()
{
	return FConcertResourceLockResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_FailedResources_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FailedResources_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailedResources_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FailedResources;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LockType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LockType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertResourceLockResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::NewProp_FailedResources_ValueProp = { "FailedResources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::NewProp_FailedResources_Key_KeyProp = { "FailedResources_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::NewProp_FailedResources_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::NewProp_FailedResources = { "FailedResources", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertResourceLockResponse, FailedResources), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::NewProp_FailedResources_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::NewProp_FailedResources_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::NewProp_LockType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::NewProp_LockType_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::NewProp_LockType = { "LockType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertResourceLockResponse, LockType), Z_Construct_UEnum_ConcertSyncCore_EConcertResourceLockType, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::NewProp_LockType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::NewProp_LockType_MetaData)) }; // 2988184756
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::NewProp_FailedResources_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::NewProp_FailedResources_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::NewProp_FailedResources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::NewProp_LockType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::NewProp_LockType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertResourceLockResponse",
		sizeof(FConcertResourceLockResponse),
		alignof(FConcertResourceLockResponse),
		Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertResourceLockResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertResourceLockResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertResourceLockResponse.InnerSingleton, Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertResourceLockResponse.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertPlaySessionEventType;
	static UEnum* EConcertPlaySessionEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertPlaySessionEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertPlaySessionEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConcertSyncCore_EConcertPlaySessionEventType, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("EConcertPlaySessionEventType"));
		}
		return Z_Registration_Info_UEnum_EConcertPlaySessionEventType.OuterSingleton;
	}
	template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertPlaySessionEventType>()
	{
		return EConcertPlaySessionEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_ConcertSyncCore_EConcertPlaySessionEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConcertSyncCore_EConcertPlaySessionEventType_Statics::Enumerators[] = {
		{ "EConcertPlaySessionEventType::None", (int64)EConcertPlaySessionEventType::None },
		{ "EConcertPlaySessionEventType::BeginPlay", (int64)EConcertPlaySessionEventType::BeginPlay },
		{ "EConcertPlaySessionEventType::SwitchPlay", (int64)EConcertPlaySessionEventType::SwitchPlay },
		{ "EConcertPlaySessionEventType::EndPlay", (int64)EConcertPlaySessionEventType::EndPlay },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConcertSyncCore_EConcertPlaySessionEventType_Statics::Enum_MetaDataParams[] = {
		{ "BeginPlay.Name", "EConcertPlaySessionEventType::BeginPlay" },
		{ "EndPlay.Name", "EConcertPlaySessionEventType::EndPlay" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
		{ "None.Name", "EConcertPlaySessionEventType::None" },
		{ "SwitchPlay.Name", "EConcertPlaySessionEventType::SwitchPlay" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConcertSyncCore_EConcertPlaySessionEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		"EConcertPlaySessionEventType",
		"EConcertPlaySessionEventType",
		Z_Construct_UEnum_ConcertSyncCore_EConcertPlaySessionEventType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertPlaySessionEventType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ConcertSyncCore_EConcertPlaySessionEventType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EConcertPlaySessionEventType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ConcertSyncCore_EConcertPlaySessionEventType()
	{
		if (!Z_Registration_Info_UEnum_EConcertPlaySessionEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertPlaySessionEventType.InnerSingleton, Z_Construct_UEnum_ConcertSyncCore_EConcertPlaySessionEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertPlaySessionEventType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertPlaySessionEvent;
class UScriptStruct* FConcertPlaySessionEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertPlaySessionEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertPlaySessionEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertPlaySessionEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertPlaySessionEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertPlaySessionEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertPlaySessionEvent>()
{
	return FConcertPlaySessionEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EventType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayEndpointId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayEndpointId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayPackageName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PlayPackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSimulating_MetaData[];
#endif
		static void NewProp_bIsSimulating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSimulating;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertPlaySessionEvent>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_EventType_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertPlaySessionEvent, EventType), Z_Construct_UEnum_ConcertSyncCore_EConcertPlaySessionEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_EventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_EventType_MetaData)) }; // 1534630219
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_PlayEndpointId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_PlayEndpointId = { "PlayEndpointId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertPlaySessionEvent, PlayEndpointId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_PlayEndpointId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_PlayEndpointId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_PlayPackageName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_PlayPackageName = { "PlayPackageName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertPlaySessionEvent, PlayPackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_PlayPackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_PlayPackageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_bIsSimulating_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_bIsSimulating_SetBit(void* Obj)
	{
		((FConcertPlaySessionEvent*)Obj)->bIsSimulating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_bIsSimulating = { "bIsSimulating", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertPlaySessionEvent), &Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_bIsSimulating_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_bIsSimulating_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_bIsSimulating_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_EventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_EventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_PlayEndpointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_PlayPackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewProp_bIsSimulating,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertPlaySessionEvent",
		sizeof(FConcertPlaySessionEvent),
		alignof(FConcertPlaySessionEvent),
		Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertPlaySessionEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertPlaySessionEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertPlaySessionEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertPlaySessionEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertIgnoreActivityStateChangedEvent;
class UScriptStruct* FConcertIgnoreActivityStateChangedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertIgnoreActivityStateChangedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertIgnoreActivityStateChangedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertIgnoreActivityStateChangedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertIgnoreActivityStateChangedEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertIgnoreActivityStateChangedEvent>()
{
	return FConcertIgnoreActivityStateChangedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndpointId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndpointId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnore_MetaData[];
#endif
		static void NewProp_bIgnore_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Sets the specified client 'ignore on restore' state for further activities. The 'ignored' flag can be raised to mark a series of activities as 'should not be restored'.\n * @note This can be used to record and monitor session activities for inspection purpose, for example allowing disaster recovery to record what\n *       happens in a multi-user session without restoring such activities in case of crash (because they occurred in a transient sandbox).\n */" },
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
		{ "ToolTip", "Sets the specified client 'ignore on restore' state for further activities. The 'ignored' flag can be raised to mark a series of activities as 'should not be restored'.\n@note This can be used to record and monitor session activities for inspection purpose, for example allowing disaster recovery to record what\n      happens in a multi-user session without restoring such activities in case of crash (because they occurred in a transient sandbox)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertIgnoreActivityStateChangedEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics::NewProp_EndpointId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics::NewProp_EndpointId = { "EndpointId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertIgnoreActivityStateChangedEvent, EndpointId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics::NewProp_EndpointId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics::NewProp_EndpointId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics::NewProp_bIgnore_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertWorkspaceMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics::NewProp_bIgnore_SetBit(void* Obj)
	{
		((FConcertIgnoreActivityStateChangedEvent*)Obj)->bIgnore = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics::NewProp_bIgnore = { "bIgnore", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertIgnoreActivityStateChangedEvent), &Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics::NewProp_bIgnore_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics::NewProp_bIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics::NewProp_bIgnore_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics::NewProp_EndpointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics::NewProp_bIgnore,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertIgnoreActivityStateChangedEvent",
		sizeof(FConcertIgnoreActivityStateChangedEvent),
		alignof(FConcertIgnoreActivityStateChangedEvent),
		Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertIgnoreActivityStateChangedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertIgnoreActivityStateChangedEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertIgnoreActivityStateChangedEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceMessages_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceMessages_h_Statics::EnumInfo[] = {
		{ EConcertResourceLockType_StaticEnum, TEXT("EConcertResourceLockType"), &Z_Registration_Info_UEnum_EConcertResourceLockType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2988184756U) },
		{ EConcertPlaySessionEventType_StaticEnum, TEXT("EConcertPlaySessionEventType"), &Z_Registration_Info_UEnum_EConcertPlaySessionEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1534630219U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceMessages_h_Statics::ScriptStructInfo[] = {
		{ FConcertWorkspaceSyncEventBase::StaticStruct, Z_Construct_UScriptStruct_FConcertWorkspaceSyncEventBase_Statics::NewStructOps, TEXT("ConcertWorkspaceSyncEventBase"), &Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncEventBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertWorkspaceSyncEventBase), 1789842116U) },
		{ FConcertWorkspaceSyncEndpointEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertWorkspaceSyncEndpointEvent_Statics::NewStructOps, TEXT("ConcertWorkspaceSyncEndpointEvent"), &Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncEndpointEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertWorkspaceSyncEndpointEvent), 3630110871U) },
		{ FConcertWorkspaceSyncActivityEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertWorkspaceSyncActivityEvent_Statics::NewStructOps, TEXT("ConcertWorkspaceSyncActivityEvent"), &Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncActivityEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertWorkspaceSyncActivityEvent), 1115977909U) },
		{ FConcertWorkspaceSyncLockEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertWorkspaceSyncLockEvent_Statics::NewStructOps, TEXT("ConcertWorkspaceSyncLockEvent"), &Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncLockEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertWorkspaceSyncLockEvent), 2363216903U) },
		{ FConcertWorkspaceSyncRequestedEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertWorkspaceSyncRequestedEvent_Statics::NewStructOps, TEXT("ConcertWorkspaceSyncRequestedEvent"), &Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncRequestedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertWorkspaceSyncRequestedEvent), 3683818224U) },
		{ FConcertWorkspaceSyncCompletedEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertWorkspaceSyncCompletedEvent_Statics::NewStructOps, TEXT("ConcertWorkspaceSyncCompletedEvent"), &Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncCompletedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertWorkspaceSyncCompletedEvent), 4094505420U) },
		{ FConcertWorkspaceSyncAndFinalizeCompletedEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertWorkspaceSyncAndFinalizeCompletedEvent_Statics::NewStructOps, TEXT("ConcertWorkspaceSyncAndFinalizeCompletedEvent"), &Z_Registration_Info_UScriptStruct_ConcertWorkspaceSyncAndFinalizeCompletedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertWorkspaceSyncAndFinalizeCompletedEvent), 1010307488U) },
		{ FConcertSyncEventRequest::StaticStruct, Z_Construct_UScriptStruct_FConcertSyncEventRequest_Statics::NewStructOps, TEXT("ConcertSyncEventRequest"), &Z_Registration_Info_UScriptStruct_ConcertSyncEventRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSyncEventRequest), 2490185020U) },
		{ FConcertSyncEventResponse::StaticStruct, Z_Construct_UScriptStruct_FConcertSyncEventResponse_Statics::NewStructOps, TEXT("ConcertSyncEventResponse"), &Z_Registration_Info_UScriptStruct_ConcertSyncEventResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSyncEventResponse), 753090566U) },
		{ FConcertServerLogging::StaticStruct, Z_Construct_UScriptStruct_FConcertServerLogging_Statics::NewStructOps, TEXT("ConcertServerLogging"), &Z_Registration_Info_UScriptStruct_ConcertServerLogging, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertServerLogging), 3302948397U) },
		{ FConcertPackageTransmissionStartEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertPackageTransmissionStartEvent_Statics::NewStructOps, TEXT("ConcertPackageTransmissionStartEvent"), &Z_Registration_Info_UScriptStruct_ConcertPackageTransmissionStartEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertPackageTransmissionStartEvent), 3039017281U) },
		{ FConcertPackageUpdateEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertPackageUpdateEvent_Statics::NewStructOps, TEXT("ConcertPackageUpdateEvent"), &Z_Registration_Info_UScriptStruct_ConcertPackageUpdateEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertPackageUpdateEvent), 4198954212U) },
		{ FConcertPackageRejectedEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertPackageRejectedEvent_Statics::NewStructOps, TEXT("ConcertPackageRejectedEvent"), &Z_Registration_Info_UScriptStruct_ConcertPackageRejectedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertPackageRejectedEvent), 2294949593U) },
		{ FConcertResourceLockEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertResourceLockEvent_Statics::NewStructOps, TEXT("ConcertResourceLockEvent"), &Z_Registration_Info_UScriptStruct_ConcertResourceLockEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertResourceLockEvent), 3289390543U) },
		{ FConcertResourceLockRequest::StaticStruct, Z_Construct_UScriptStruct_FConcertResourceLockRequest_Statics::NewStructOps, TEXT("ConcertResourceLockRequest"), &Z_Registration_Info_UScriptStruct_ConcertResourceLockRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertResourceLockRequest), 827513725U) },
		{ FConcertResourceLockResponse::StaticStruct, Z_Construct_UScriptStruct_FConcertResourceLockResponse_Statics::NewStructOps, TEXT("ConcertResourceLockResponse"), &Z_Registration_Info_UScriptStruct_ConcertResourceLockResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertResourceLockResponse), 2623347623U) },
		{ FConcertPlaySessionEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertPlaySessionEvent_Statics::NewStructOps, TEXT("ConcertPlaySessionEvent"), &Z_Registration_Info_UScriptStruct_ConcertPlaySessionEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertPlaySessionEvent), 3014903831U) },
		{ FConcertIgnoreActivityStateChangedEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertIgnoreActivityStateChangedEvent_Statics::NewStructOps, TEXT("ConcertIgnoreActivityStateChangedEvent"), &Z_Registration_Info_UScriptStruct_ConcertIgnoreActivityStateChangedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertIgnoreActivityStateChangedEvent), 2814621930U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceMessages_h_1089354264(TEXT("/Script/ConcertSyncCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceMessages_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceMessages_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceMessages_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
