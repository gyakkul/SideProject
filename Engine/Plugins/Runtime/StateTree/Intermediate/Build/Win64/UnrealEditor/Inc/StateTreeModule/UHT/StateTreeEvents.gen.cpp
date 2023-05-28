// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeEvents.h"
#include "GameplayTagContainer.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeEvents() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEvent();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEventQueue();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeLoopEvents;
	static UEnum* EStateTreeLoopEvents_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeLoopEvents.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeLoopEvents.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeLoopEvents"));
		}
		return Z_Registration_Info_UEnum_EStateTreeLoopEvents.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeLoopEvents>()
	{
		return EStateTreeLoopEvents_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents_Statics::Enumerators[] = {
		{ "EStateTreeLoopEvents::Next", (int64)EStateTreeLoopEvents::Next },
		{ "EStateTreeLoopEvents::Break", (int64)EStateTreeLoopEvents::Break },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents_Statics::Enum_MetaDataParams[] = {
		{ "Break.Comment", "/** Stops the event handling loop. */" },
		{ "Break.Name", "EStateTreeLoopEvents::Break" },
		{ "Break.ToolTip", "Stops the event handling loop." },
		{ "Comment", "/** Enum used for flow control during event iteration. */" },
		{ "ModuleRelativePath", "Public/StateTreeEvents.h" },
		{ "Next.Comment", "/** Continues to next event. */" },
		{ "Next.Name", "EStateTreeLoopEvents::Next" },
		{ "Next.ToolTip", "Continues to next event." },
		{ "ToolTip", "Enum used for flow control during event iteration." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeLoopEvents",
		"EStateTreeLoopEvents",
		Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeLoopEvents.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeLoopEvents.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeLoopEvents_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeLoopEvents.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeEvent;
class UScriptStruct* FStateTreeEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEvent, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeEvent"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEvent.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeEvent>()
{
	return FStateTreeEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Origin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * StateTree event with payload.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeEvents.h" },
		{ "ToolTip", "StateTree event with payload." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewProp_Tag_MetaData[] = {
		{ "Categories", "StateTreeEvent" },
		{ "Category", "Default" },
		{ "Comment", "/** Tag describing the event */" },
		{ "ModuleRelativePath", "Public/StateTreeEvents.h" },
		{ "ToolTip", "Tag describing the event" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeEvent, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewProp_Tag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewProp_Payload_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Optional payload for the event. */" },
		{ "ModuleRelativePath", "Public/StateTreeEvents.h" },
		{ "ToolTip", "Optional payload for the event." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeEvent, Payload), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewProp_Payload_MetaData)) }; // 3026308664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewProp_Origin_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Optional info to describe who sent the event. */" },
		{ "ModuleRelativePath", "Public/StateTreeEvents.h" },
		{ "ToolTip", "Optional info to describe who sent the event." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeEvent, Origin), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewProp_Origin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewProp_Payload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewProp_Origin,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeEvent",
		sizeof(FStateTreeEvent),
		alignof(FStateTreeEvent),
		Z_Construct_UScriptStruct_FStateTreeEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeEvent.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeEventQueue;
class UScriptStruct* FStateTreeEventQueue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeEventQueue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeEventQueue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEventQueue, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeEventQueue"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeEventQueue.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeEventQueue>()
{
	return FStateTreeEventQueue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Events_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Events;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Event queue buffering all the events to be processed by a State Tree.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeEvents.h" },
		{ "ToolTip", "Event queue buffering all the events to be processed by a State Tree." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeEventQueue>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStateTreeEvent, METADATA_PARAMS(nullptr, 0) }; // 2095952963
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::NewProp_Events_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeEvents.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeEventQueue, Events), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::NewProp_Events_MetaData)) }; // 2095952963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::NewProp_Events_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::NewProp_Events,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeEventQueue",
		sizeof(FStateTreeEventQueue),
		alignof(FStateTreeEventQueue),
		Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEventQueue()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeEventQueue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeEventQueue.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeEventQueue.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h_Statics::EnumInfo[] = {
		{ EStateTreeLoopEvents_StaticEnum, TEXT("EStateTreeLoopEvents"), &Z_Registration_Info_UEnum_EStateTreeLoopEvents, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3904529795U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeEvent::StaticStruct, Z_Construct_UScriptStruct_FStateTreeEvent_Statics::NewStructOps, TEXT("StateTreeEvent"), &Z_Registration_Info_UScriptStruct_StateTreeEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeEvent), 2095952963U) },
		{ FStateTreeEventQueue::StaticStruct, Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics::NewStructOps, TEXT("StateTreeEventQueue"), &Z_Registration_Info_UScriptStruct_StateTreeEventQueue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeEventQueue), 508240784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h_1664494047(TEXT("/Script/StateTreeModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
