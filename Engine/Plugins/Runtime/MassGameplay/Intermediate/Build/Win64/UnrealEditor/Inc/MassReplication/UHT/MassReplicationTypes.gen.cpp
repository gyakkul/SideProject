// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassReplication/Public/MassReplicationTypes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassCommon/Public/MassCommonTypes.h"
#include "MassEntityTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassReplicationTypes() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCompactIndexedHandleBase();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedHandleBase();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleIndexedHandleBase();
	MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FMassNetworkID();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassBubbleInfoClassHandle();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassClientHandle();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassReplicatedAgentHandle();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedAgentBase();
	MASSSPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityTemplateID();
	UPackage* Z_Construct_UPackage__Script_MassReplication();
// End Cross Module References

static_assert(std::is_polymorphic<FMassReplicatedAgentHandle>() == std::is_polymorphic<FCompactIndexedHandleBase>(), "USTRUCT FMassReplicatedAgentHandle cannot be polymorphic unless super FCompactIndexedHandleBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassReplicatedAgentHandle;
class UScriptStruct* FMassReplicatedAgentHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassReplicatedAgentHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassReplicatedAgentHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassReplicatedAgentHandle, (UObject*)Z_Construct_UPackage__Script_MassReplication(), TEXT("MassReplicatedAgentHandle"));
	}
	return Z_Registration_Info_UScriptStruct_MassReplicatedAgentHandle.OuterSingleton;
}
template<> MASSREPLICATION_API UScriptStruct* StaticStruct<FMassReplicatedAgentHandle>()
{
	return FMassReplicatedAgentHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassReplicatedAgentHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassReplicatedAgentHandle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Handle of each Agent per Client (bubble), these handles are not consistent between different client bubbles.\n *  Using the compact handle here will make the memory footprint smaller and help the ECS system be more cache friendly.\n *\x09TODO: in the long run we can probably use a non serial number handle here, I'd like to stick with the serial number for now though\n */" },
		{ "ModuleRelativePath", "Public/MassReplicationTypes.h" },
		{ "ToolTip", "Handle of each Agent per Client (bubble), these handles are not consistent between different client bubbles.\nUsing the compact handle here will make the memory footprint smaller and help the ECS system be more cache friendly.\n   TODO: in the long run we can probably use a non serial number handle here, I'd like to stick with the serial number for now though" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassReplicatedAgentHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassReplicatedAgentHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassReplicatedAgentHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
		Z_Construct_UScriptStruct_FCompactIndexedHandleBase,
		&NewStructOps,
		"MassReplicatedAgentHandle",
		sizeof(FMassReplicatedAgentHandle),
		alignof(FMassReplicatedAgentHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassReplicatedAgentHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassReplicatedAgentHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassReplicatedAgentHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_MassReplicatedAgentHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassReplicatedAgentHandle.InnerSingleton, Z_Construct_UScriptStruct_FMassReplicatedAgentHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassReplicatedAgentHandle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassClientHandle>() == std::is_polymorphic<FIndexedHandleBase>(), "USTRUCT FMassClientHandle cannot be polymorphic unless super FIndexedHandleBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassClientHandle;
class UScriptStruct* FMassClientHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassClientHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassClientHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassClientHandle, (UObject*)Z_Construct_UPackage__Script_MassReplication(), TEXT("MassClientHandle"));
	}
	return Z_Registration_Info_UScriptStruct_MassClientHandle.OuterSingleton;
}
template<> MASSREPLICATION_API UScriptStruct* StaticStruct<FMassClientHandle>()
{
	return FMassClientHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassClientHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassClientHandle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//Handle of each Client on the server. A Client is defined as a player controller with a non nullptr parent NetConnection\n" },
		{ "ModuleRelativePath", "Public/MassReplicationTypes.h" },
		{ "ToolTip", "Handle of each Client on the server. A Client is defined as a player controller with a non nullptr parent NetConnection" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassClientHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassClientHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassClientHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
		Z_Construct_UScriptStruct_FIndexedHandleBase,
		&NewStructOps,
		"MassClientHandle",
		sizeof(FMassClientHandle),
		alignof(FMassClientHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassClientHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassClientHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassClientHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_MassClientHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassClientHandle.InnerSingleton, Z_Construct_UScriptStruct_FMassClientHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassClientHandle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassBubbleInfoClassHandle>() == std::is_polymorphic<FSimpleIndexedHandleBase>(), "USTRUCT FMassBubbleInfoClassHandle cannot be polymorphic unless super FSimpleIndexedHandleBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassBubbleInfoClassHandle;
class UScriptStruct* FMassBubbleInfoClassHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassBubbleInfoClassHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassBubbleInfoClassHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassBubbleInfoClassHandle, (UObject*)Z_Construct_UPackage__Script_MassReplication(), TEXT("MassBubbleInfoClassHandle"));
	}
	return Z_Registration_Info_UScriptStruct_MassBubbleInfoClassHandle.OuterSingleton;
}
template<> MASSREPLICATION_API UScriptStruct* StaticStruct<FMassBubbleInfoClassHandle>()
{
	return FMassBubbleInfoClassHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassBubbleInfoClassHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassBubbleInfoClassHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassReplicationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassBubbleInfoClassHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassBubbleInfoClassHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassBubbleInfoClassHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
		Z_Construct_UScriptStruct_FSimpleIndexedHandleBase,
		&NewStructOps,
		"MassBubbleInfoClassHandle",
		sizeof(FMassBubbleInfoClassHandle),
		alignof(FMassBubbleInfoClassHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassBubbleInfoClassHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassBubbleInfoClassHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassBubbleInfoClassHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_MassBubbleInfoClassHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassBubbleInfoClassHandle.InnerSingleton, Z_Construct_UScriptStruct_FMassBubbleInfoClassHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassBubbleInfoClassHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReplicatedAgentBase;
class UScriptStruct* FReplicatedAgentBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReplicatedAgentBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReplicatedAgentBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplicatedAgentBase, (UObject*)Z_Construct_UPackage__Script_MassReplication(), TEXT("ReplicatedAgentBase"));
	}
	return Z_Registration_Info_UScriptStruct_ReplicatedAgentBase.OuterSingleton;
}
template<> MASSREPLICATION_API UScriptStruct* StaticStruct<FReplicatedAgentBase>()
{
	return FReplicatedAgentBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReplicatedAgentBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NetID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TemplateID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedAgentBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassReplicationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplicatedAgentBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplicatedAgentBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedAgentBase_Statics::NewProp_NetID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassReplicationTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplicatedAgentBase_Statics::NewProp_NetID = { "NetID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplicatedAgentBase, NetID), Z_Construct_UScriptStruct_FMassNetworkID, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedAgentBase_Statics::NewProp_NetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAgentBase_Statics::NewProp_NetID_MetaData)) }; // 4144379630
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedAgentBase_Statics::NewProp_TemplateID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassReplicationTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplicatedAgentBase_Statics::NewProp_TemplateID = { "TemplateID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplicatedAgentBase, TemplateID), Z_Construct_UScriptStruct_FMassEntityTemplateID, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedAgentBase_Statics::NewProp_TemplateID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAgentBase_Statics::NewProp_TemplateID_MetaData)) }; // 1781446094
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplicatedAgentBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedAgentBase_Statics::NewProp_NetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedAgentBase_Statics::NewProp_TemplateID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplicatedAgentBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
		nullptr,
		&NewStructOps,
		"ReplicatedAgentBase",
		sizeof(FReplicatedAgentBase),
		alignof(FReplicatedAgentBase),
		Z_Construct_UScriptStruct_FReplicatedAgentBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAgentBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedAgentBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedAgentBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReplicatedAgentBase()
	{
		if (!Z_Registration_Info_UScriptStruct_ReplicatedAgentBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReplicatedAgentBase.InnerSingleton, Z_Construct_UScriptStruct_FReplicatedAgentBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReplicatedAgentBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationTypes_h_Statics::ScriptStructInfo[] = {
		{ FMassReplicatedAgentHandle::StaticStruct, Z_Construct_UScriptStruct_FMassReplicatedAgentHandle_Statics::NewStructOps, TEXT("MassReplicatedAgentHandle"), &Z_Registration_Info_UScriptStruct_MassReplicatedAgentHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassReplicatedAgentHandle), 1019751751U) },
		{ FMassClientHandle::StaticStruct, Z_Construct_UScriptStruct_FMassClientHandle_Statics::NewStructOps, TEXT("MassClientHandle"), &Z_Registration_Info_UScriptStruct_MassClientHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassClientHandle), 1758312986U) },
		{ FMassBubbleInfoClassHandle::StaticStruct, Z_Construct_UScriptStruct_FMassBubbleInfoClassHandle_Statics::NewStructOps, TEXT("MassBubbleInfoClassHandle"), &Z_Registration_Info_UScriptStruct_MassBubbleInfoClassHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassBubbleInfoClassHandle), 1085546928U) },
		{ FReplicatedAgentBase::StaticStruct, Z_Construct_UScriptStruct_FReplicatedAgentBase_Statics::NewStructOps, TEXT("ReplicatedAgentBase"), &Z_Registration_Info_UScriptStruct_ReplicatedAgentBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplicatedAgentBase), 4275570851U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationTypes_h_513122588(TEXT("/Script/MassReplication"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
