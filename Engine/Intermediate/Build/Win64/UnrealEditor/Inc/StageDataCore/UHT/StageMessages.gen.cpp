// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StageMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStageMessages() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQualifiedFrameTime();
	STAGEDATACORE_API UEnum* Z_Construct_UEnum_StageDataCore_EStageCriticalStateEvent();
	STAGEDATACORE_API UEnum* Z_Construct_UEnum_StageDataCore_EStageDataProviderState();
	STAGEDATACORE_API UEnum* Z_Construct_UEnum_StageDataCore_EStageLoadingState();
	STAGEDATACORE_API UEnum* Z_Construct_UEnum_StageDataCore_EStageMessageFlags();
	STAGEDATACORE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage();
	STAGEDATACORE_API UScriptStruct* Z_Construct_UScriptStruct_FCriticalStateProviderMessage();
	STAGEDATACORE_API UScriptStruct* Z_Construct_UScriptStruct_FStageDataBaseMessage();
	STAGEDATACORE_API UScriptStruct* Z_Construct_UScriptStruct_FStageInstanceDescriptor();
	STAGEDATACORE_API UScriptStruct* Z_Construct_UScriptStruct_FStageMonitorBaseMessage();
	STAGEDATACORE_API UScriptStruct* Z_Construct_UScriptStruct_FStageMonitorCloseMessage();
	STAGEDATACORE_API UScriptStruct* Z_Construct_UScriptStruct_FStageProviderCloseMessage();
	STAGEDATACORE_API UScriptStruct* Z_Construct_UScriptStruct_FStageProviderDiscoveryMessage();
	STAGEDATACORE_API UScriptStruct* Z_Construct_UScriptStruct_FStageProviderDiscoveryResponseMessage();
	STAGEDATACORE_API UScriptStruct* Z_Construct_UScriptStruct_FStageProviderEventMessage();
	STAGEDATACORE_API UScriptStruct* Z_Construct_UScriptStruct_FStageProviderMessage();
	STAGEDATACORE_API UScriptStruct* Z_Construct_UScriptStruct_FStageProviderPeriodicMessage();
	UPackage* Z_Construct_UPackage__Script_StageDataCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStageMessageFlags;
	static UEnum* EStageMessageFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStageMessageFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStageMessageFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StageDataCore_EStageMessageFlags, (UObject*)Z_Construct_UPackage__Script_StageDataCore(), TEXT("EStageMessageFlags"));
		}
		return Z_Registration_Info_UEnum_EStageMessageFlags.OuterSingleton;
	}
	template<> STAGEDATACORE_API UEnum* StaticEnum<EStageMessageFlags>()
	{
		return EStageMessageFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_StageDataCore_EStageMessageFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StageDataCore_EStageMessageFlags_Statics::Enumerators[] = {
		{ "EStageMessageFlags::None", (int64)EStageMessageFlags::None },
		{ "EStageMessageFlags::Reliable", (int64)EStageMessageFlags::Reliable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StageDataCore_EStageMessageFlags_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Message flags configuring how a message is sent */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "None.Name", "EStageMessageFlags::None" },
		{ "Reliable.Comment", "/** Sends this message as reliable, to make sure it's received by the receivers */" },
		{ "Reliable.Name", "EStageMessageFlags::Reliable" },
		{ "Reliable.ToolTip", "Sends this message as reliable, to make sure it's received by the receivers" },
		{ "ToolTip", "Message flags configuring how a message is sent" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StageDataCore_EStageMessageFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StageDataCore,
		nullptr,
		"EStageMessageFlags",
		"EStageMessageFlags",
		Z_Construct_UEnum_StageDataCore_EStageMessageFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StageDataCore_EStageMessageFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StageDataCore_EStageMessageFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StageDataCore_EStageMessageFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StageDataCore_EStageMessageFlags()
	{
		if (!Z_Registration_Info_UEnum_EStageMessageFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStageMessageFlags.InnerSingleton, Z_Construct_UEnum_StageDataCore_EStageMessageFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStageMessageFlags.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStageDataProviderState;
	static UEnum* EStageDataProviderState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStageDataProviderState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStageDataProviderState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StageDataCore_EStageDataProviderState, (UObject*)Z_Construct_UPackage__Script_StageDataCore(), TEXT("EStageDataProviderState"));
		}
		return Z_Registration_Info_UEnum_EStageDataProviderState.OuterSingleton;
	}
	template<> STAGEDATACORE_API UEnum* StaticEnum<EStageDataProviderState>()
	{
		return EStageDataProviderState_StaticEnum();
	}
	struct Z_Construct_UEnum_StageDataCore_EStageDataProviderState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StageDataCore_EStageDataProviderState_Statics::Enumerators[] = {
		{ "EStageDataProviderState::Active", (int64)EStageDataProviderState::Active },
		{ "EStageDataProviderState::Inactive", (int64)EStageDataProviderState::Inactive },
		{ "EStageDataProviderState::Closed", (int64)EStageDataProviderState::Closed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StageDataCore_EStageDataProviderState_Statics::Enum_MetaDataParams[] = {
		{ "Active.Comment", "/** Actively receiving messages from */" },
		{ "Active.Name", "EStageDataProviderState::Active" },
		{ "Active.ToolTip", "Actively receiving messages from" },
		{ "Closed.Comment", "/** Provider closed */" },
		{ "Closed.Name", "EStageDataProviderState::Closed" },
		{ "Closed.ToolTip", "Provider closed" },
		{ "Comment", "/** States that a DataProvider can be in */" },
		{ "Inactive.Comment", "/** Timeout intervaled occured between provider messages */" },
		{ "Inactive.Name", "EStageDataProviderState::Inactive" },
		{ "Inactive.ToolTip", "Timeout intervaled occured between provider messages" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "States that a DataProvider can be in" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StageDataCore_EStageDataProviderState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StageDataCore,
		nullptr,
		"EStageDataProviderState",
		"EStageDataProviderState",
		Z_Construct_UEnum_StageDataCore_EStageDataProviderState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StageDataCore_EStageDataProviderState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StageDataCore_EStageDataProviderState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StageDataCore_EStageDataProviderState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StageDataCore_EStageDataProviderState()
	{
		if (!Z_Registration_Info_UEnum_EStageDataProviderState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStageDataProviderState.InnerSingleton, Z_Construct_UEnum_StageDataCore_EStageDataProviderState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStageDataProviderState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStageCriticalStateEvent;
	static UEnum* EStageCriticalStateEvent_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStageCriticalStateEvent.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStageCriticalStateEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StageDataCore_EStageCriticalStateEvent, (UObject*)Z_Construct_UPackage__Script_StageDataCore(), TEXT("EStageCriticalStateEvent"));
		}
		return Z_Registration_Info_UEnum_EStageCriticalStateEvent.OuterSingleton;
	}
	template<> STAGEDATACORE_API UEnum* StaticEnum<EStageCriticalStateEvent>()
	{
		return EStageCriticalStateEvent_StaticEnum();
	}
	struct Z_Construct_UEnum_StageDataCore_EStageCriticalStateEvent_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StageDataCore_EStageCriticalStateEvent_Statics::Enumerators[] = {
		{ "EStageCriticalStateEvent::Enter", (int64)EStageCriticalStateEvent::Enter },
		{ "EStageCriticalStateEvent::Exit", (int64)EStageCriticalStateEvent::Exit },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StageDataCore_EStageCriticalStateEvent_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Different events associated with stage critical state */" },
		{ "Enter.Comment", "/** Critical state has been entered */" },
		{ "Enter.Name", "EStageCriticalStateEvent::Enter" },
		{ "Enter.ToolTip", "Critical state has been entered" },
		{ "Exit.Comment", "/** Critical state has been exited */" },
		{ "Exit.Name", "EStageCriticalStateEvent::Exit" },
		{ "Exit.ToolTip", "Critical state has been exited" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Different events associated with stage critical state" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StageDataCore_EStageCriticalStateEvent_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StageDataCore,
		nullptr,
		"EStageCriticalStateEvent",
		"EStageCriticalStateEvent",
		Z_Construct_UEnum_StageDataCore_EStageCriticalStateEvent_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StageDataCore_EStageCriticalStateEvent_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StageDataCore_EStageCriticalStateEvent_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StageDataCore_EStageCriticalStateEvent_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StageDataCore_EStageCriticalStateEvent()
	{
		if (!Z_Registration_Info_UEnum_EStageCriticalStateEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStageCriticalStateEvent.InnerSingleton, Z_Construct_UEnum_StageDataCore_EStageCriticalStateEvent_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStageCriticalStateEvent.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStageLoadingState;
	static UEnum* EStageLoadingState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStageLoadingState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStageLoadingState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StageDataCore_EStageLoadingState, (UObject*)Z_Construct_UPackage__Script_StageDataCore(), TEXT("EStageLoadingState"));
		}
		return Z_Registration_Info_UEnum_EStageLoadingState.OuterSingleton;
	}
	template<> STAGEDATACORE_API UEnum* StaticEnum<EStageLoadingState>()
	{
		return EStageLoadingState_StaticEnum();
	}
	struct Z_Construct_UEnum_StageDataCore_EStageLoadingState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StageDataCore_EStageLoadingState_Statics::Enumerators[] = {
		{ "EStageLoadingState::PreLoad", (int64)EStageLoadingState::PreLoad },
		{ "EStageLoadingState::PostLoad", (int64)EStageLoadingState::PostLoad },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StageDataCore_EStageLoadingState_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Different events associated with stage critical state */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "PostLoad.Comment", "/** Asset loading has finished. */" },
		{ "PostLoad.Name", "EStageLoadingState::PostLoad" },
		{ "PostLoad.ToolTip", "Asset loading has finished." },
		{ "PreLoad.Comment", "/** Asset loading has started. */" },
		{ "PreLoad.Name", "EStageLoadingState::PreLoad" },
		{ "PreLoad.ToolTip", "Asset loading has started." },
		{ "ToolTip", "Different events associated with stage critical state" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StageDataCore_EStageLoadingState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StageDataCore,
		nullptr,
		"EStageLoadingState",
		"EStageLoadingState",
		Z_Construct_UEnum_StageDataCore_EStageLoadingState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StageDataCore_EStageLoadingState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StageDataCore_EStageLoadingState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StageDataCore_EStageLoadingState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StageDataCore_EStageLoadingState()
	{
		if (!Z_Registration_Info_UEnum_EStageLoadingState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStageLoadingState.InnerSingleton, Z_Construct_UEnum_StageDataCore_EStageLoadingState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStageLoadingState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StageInstanceDescriptor;
class UScriptStruct* FStageInstanceDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StageInstanceDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StageInstanceDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStageInstanceDescriptor, (UObject*)Z_Construct_UPackage__Script_StageDataCore(), TEXT("StageInstanceDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_StageInstanceDescriptor.OuterSingleton;
}
template<> STAGEDATACORE_API UScriptStruct* StaticStruct<FStageInstanceDescriptor>()
{
	return FStageInstanceDescriptor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MachineName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MachineName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcessId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ProcessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RolesStringified_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RolesStringified;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FriendlyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SessionId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds descriptive information about that data providers. \n * Information that won't change for a session\n * Used when monitor and provider connects\n */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Holds descriptive information about that data providers.\nInformation that won't change for a session\nUsed when monitor and provider connects" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStageInstanceDescriptor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_MachineName_MetaData[] = {
		{ "Comment", "/** Machine name read from FPlatformProcess::ComputerName() */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Machine name read from FPlatformProcess::ComputerName()" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_MachineName = { "MachineName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStageInstanceDescriptor, MachineName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_MachineName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_MachineName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_ProcessId_MetaData[] = {
		{ "Comment", "/** ProcessId read from FPlatformProcess::GetCurrentProcessId */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "ProcessId read from FPlatformProcess::GetCurrentProcessId" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_ProcessId = { "ProcessId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStageInstanceDescriptor, ProcessId), METADATA_PARAMS(Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_ProcessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_ProcessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_RolesStringified_MetaData[] = {
		{ "Comment", "/** Simple stringified view of the roles of that instance */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Simple stringified view of the roles of that instance" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_RolesStringified = { "RolesStringified", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStageInstanceDescriptor, RolesStringified), METADATA_PARAMS(Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_RolesStringified_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_RolesStringified_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "Comment", "/** Friendly name for this Unreal instance. If empty, this will be MachineName - ProcessId */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Friendly name for this Unreal instance. If empty, this will be MachineName - ProcessId" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStageInstanceDescriptor, FriendlyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_FriendlyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_FriendlyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_SessionId_MetaData[] = {
		{ "Comment", "/** Session Id that may be used to differentiate different sessions on the network */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Session Id that may be used to differentiate different sessions on the network" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStageInstanceDescriptor, SessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_SessionId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_MachineName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_ProcessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_RolesStringified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_FriendlyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewProp_SessionId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageDataCore,
		nullptr,
		&NewStructOps,
		"StageInstanceDescriptor",
		sizeof(FStageInstanceDescriptor),
		alignof(FStageInstanceDescriptor),
		Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStageInstanceDescriptor()
	{
		if (!Z_Registration_Info_UScriptStruct_StageInstanceDescriptor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StageInstanceDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StageInstanceDescriptor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StageDataBaseMessage;
class UScriptStruct* FStageDataBaseMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StageDataBaseMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StageDataBaseMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStageDataBaseMessage, (UObject*)Z_Construct_UPackage__Script_StageDataCore(), TEXT("StageDataBaseMessage"));
	}
	return Z_Registration_Info_UScriptStruct_StageDataBaseMessage.OuterSingleton;
}
template<> STAGEDATACORE_API UScriptStruct* StaticStruct<FStageDataBaseMessage>()
{
	return FStageDataBaseMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageMessageVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StageMessageVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *  Base structure for all stage monitoring messages\n */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Base structure for all stage monitoring messages" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStageDataBaseMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics::NewProp_StageMessageVersion_MetaData[] = {
		{ "Comment", "/** \n\x09 * Provision for versioning if we need to differentiate version of messages.\n\x09 * All stage machines should be running the same version of Unreal but if it's not\n\x09 * the case, having a version in the message will be useful to know about it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Provision for versioning if we need to differentiate version of messages.\nAll stage machines should be running the same version of Unreal but if it's not\nthe case, having a version in the message will be useful to know about it." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics::NewProp_StageMessageVersion = { "StageMessageVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStageDataBaseMessage, StageMessageVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics::NewProp_StageMessageVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics::NewProp_StageMessageVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics::NewProp_Identifier_MetaData[] = {
		{ "Comment", "/** Identifier of this instance */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Identifier of this instance" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStageDataBaseMessage, Identifier), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics::NewProp_Identifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics::NewProp_StageMessageVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics::NewProp_Identifier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageDataCore,
		nullptr,
		&NewStructOps,
		"StageDataBaseMessage",
		sizeof(FStageDataBaseMessage),
		alignof(FStageDataBaseMessage),
		Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStageDataBaseMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_StageDataBaseMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StageDataBaseMessage.InnerSingleton, Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StageDataBaseMessage.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStageMonitorBaseMessage>() == std::is_polymorphic<FStageDataBaseMessage>(), "USTRUCT FStageMonitorBaseMessage cannot be polymorphic unless super FStageDataBaseMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StageMonitorBaseMessage;
class UScriptStruct* FStageMonitorBaseMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StageMonitorBaseMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StageMonitorBaseMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStageMonitorBaseMessage, (UObject*)Z_Construct_UPackage__Script_StageDataCore(), TEXT("StageMonitorBaseMessage"));
	}
	return Z_Registration_Info_UScriptStruct_StageMonitorBaseMessage.OuterSingleton;
}
template<> STAGEDATACORE_API UScriptStruct* StaticStruct<FStageMonitorBaseMessage>()
{
	return FStageMonitorBaseMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStageMonitorBaseMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageMonitorBaseMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *  Base structure for all monitor messages\n */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Base structure for all monitor messages" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStageMonitorBaseMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStageMonitorBaseMessage>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStageMonitorBaseMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageDataCore,
		Z_Construct_UScriptStruct_FStageDataBaseMessage,
		&NewStructOps,
		"StageMonitorBaseMessage",
		sizeof(FStageMonitorBaseMessage),
		alignof(FStageMonitorBaseMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStageMonitorBaseMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageMonitorBaseMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStageMonitorBaseMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_StageMonitorBaseMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StageMonitorBaseMessage.InnerSingleton, Z_Construct_UScriptStruct_FStageMonitorBaseMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StageMonitorBaseMessage.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStageProviderDiscoveryMessage>() == std::is_polymorphic<FStageMonitorBaseMessage>(), "USTRUCT FStageProviderDiscoveryMessage cannot be polymorphic unless super FStageMonitorBaseMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StageProviderDiscoveryMessage;
class UScriptStruct* FStageProviderDiscoveryMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StageProviderDiscoveryMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StageProviderDiscoveryMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStageProviderDiscoveryMessage, (UObject*)Z_Construct_UPackage__Script_StageDataCore(), TEXT("StageProviderDiscoveryMessage"));
	}
	return Z_Registration_Info_UScriptStruct_StageProviderDiscoveryMessage.OuterSingleton;
}
template<> STAGEDATACORE_API UScriptStruct* StaticStruct<FStageProviderDiscoveryMessage>()
{
	return FStageProviderDiscoveryMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStageProviderDiscoveryMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Descriptor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Descriptor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageProviderDiscoveryMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *  Message broadcasted periodically by the monitor to discover new providers \n */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Message broadcasted periodically by the monitor to discover new providers" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStageProviderDiscoveryMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStageProviderDiscoveryMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageProviderDiscoveryMessage_Statics::NewProp_Descriptor_MetaData[] = {
		{ "Comment", "/** Detailed description of that monitor */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Detailed description of that monitor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStageProviderDiscoveryMessage_Statics::NewProp_Descriptor = { "Descriptor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStageProviderDiscoveryMessage, Descriptor), Z_Construct_UScriptStruct_FStageInstanceDescriptor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStageProviderDiscoveryMessage_Statics::NewProp_Descriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageProviderDiscoveryMessage_Statics::NewProp_Descriptor_MetaData)) }; // 763794326
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStageProviderDiscoveryMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageProviderDiscoveryMessage_Statics::NewProp_Descriptor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStageProviderDiscoveryMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageDataCore,
		Z_Construct_UScriptStruct_FStageMonitorBaseMessage,
		&NewStructOps,
		"StageProviderDiscoveryMessage",
		sizeof(FStageProviderDiscoveryMessage),
		alignof(FStageProviderDiscoveryMessage),
		Z_Construct_UScriptStruct_FStageProviderDiscoveryMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageProviderDiscoveryMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStageProviderDiscoveryMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageProviderDiscoveryMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStageProviderDiscoveryMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_StageProviderDiscoveryMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StageProviderDiscoveryMessage.InnerSingleton, Z_Construct_UScriptStruct_FStageProviderDiscoveryMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StageProviderDiscoveryMessage.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStageMonitorCloseMessage>() == std::is_polymorphic<FStageMonitorBaseMessage>(), "USTRUCT FStageMonitorCloseMessage cannot be polymorphic unless super FStageMonitorBaseMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StageMonitorCloseMessage;
class UScriptStruct* FStageMonitorCloseMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StageMonitorCloseMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StageMonitorCloseMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStageMonitorCloseMessage, (UObject*)Z_Construct_UPackage__Script_StageDataCore(), TEXT("StageMonitorCloseMessage"));
	}
	return Z_Registration_Info_UScriptStruct_StageMonitorCloseMessage.OuterSingleton;
}
template<> STAGEDATACORE_API UScriptStruct* StaticStruct<FStageMonitorCloseMessage>()
{
	return FStageMonitorCloseMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStageMonitorCloseMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageMonitorCloseMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *  Message sent when monitor is going down to let know linked providers\n */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Message sent when monitor is going down to let know linked providers" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStageMonitorCloseMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStageMonitorCloseMessage>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStageMonitorCloseMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageDataCore,
		Z_Construct_UScriptStruct_FStageMonitorBaseMessage,
		&NewStructOps,
		"StageMonitorCloseMessage",
		sizeof(FStageMonitorCloseMessage),
		alignof(FStageMonitorCloseMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStageMonitorCloseMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageMonitorCloseMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStageMonitorCloseMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_StageMonitorCloseMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StageMonitorCloseMessage.InnerSingleton, Z_Construct_UScriptStruct_FStageMonitorCloseMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StageMonitorCloseMessage.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStageProviderMessage>() == std::is_polymorphic<FStageDataBaseMessage>(), "USTRUCT FStageProviderMessage cannot be polymorphic unless super FStageDataBaseMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StageProviderMessage;
class UScriptStruct* FStageProviderMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StageProviderMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StageProviderMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStageProviderMessage, (UObject*)Z_Construct_UPackage__Script_StageDataCore(), TEXT("StageProviderMessage"));
	}
	return Z_Registration_Info_UScriptStruct_StageProviderMessage.OuterSingleton;
}
template<> STAGEDATACORE_API UScriptStruct* StaticStruct<FStageProviderMessage>()
{
	return FStageProviderMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStageProviderMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageProviderMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Base Provider messages listened by monitors\n */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Base Provider messages listened by monitors" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStageProviderMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStageProviderMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageProviderMessage_Statics::NewProp_FrameTime_MetaData[] = {
		{ "Comment", "/** FrameTime of the sender. It's expected to have all stage machines using the same timecode provider to play in the same referential*/" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "FrameTime of the sender. It's expected to have all stage machines using the same timecode provider to play in the same referential" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStageProviderMessage_Statics::NewProp_FrameTime = { "FrameTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStageProviderMessage, FrameTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FStageProviderMessage_Statics::NewProp_FrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageProviderMessage_Statics::NewProp_FrameTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStageProviderMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageProviderMessage_Statics::NewProp_FrameTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStageProviderMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageDataCore,
		Z_Construct_UScriptStruct_FStageDataBaseMessage,
		&NewStructOps,
		"StageProviderMessage",
		sizeof(FStageProviderMessage),
		alignof(FStageProviderMessage),
		Z_Construct_UScriptStruct_FStageProviderMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageProviderMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStageProviderMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageProviderMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStageProviderMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_StageProviderMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StageProviderMessage.InnerSingleton, Z_Construct_UScriptStruct_FStageProviderMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StageProviderMessage.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStageProviderEventMessage>() == std::is_polymorphic<FStageProviderMessage>(), "USTRUCT FStageProviderEventMessage cannot be polymorphic unless super FStageProviderMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StageProviderEventMessage;
class UScriptStruct* FStageProviderEventMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StageProviderEventMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StageProviderEventMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStageProviderEventMessage, (UObject*)Z_Construct_UPackage__Script_StageDataCore(), TEXT("StageProviderEventMessage"));
	}
	return Z_Registration_Info_UScriptStruct_StageProviderEventMessage.OuterSingleton;
}
template<> STAGEDATACORE_API UScriptStruct* StaticStruct<FStageProviderEventMessage>()
{
	return FStageProviderEventMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStageProviderEventMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageProviderEventMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Provider messages that are events\n */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Base Provider messages that are events" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStageProviderEventMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStageProviderEventMessage>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStageProviderEventMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageDataCore,
		Z_Construct_UScriptStruct_FStageProviderMessage,
		&NewStructOps,
		"StageProviderEventMessage",
		sizeof(FStageProviderEventMessage),
		alignof(FStageProviderEventMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStageProviderEventMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageProviderEventMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStageProviderEventMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_StageProviderEventMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StageProviderEventMessage.InnerSingleton, Z_Construct_UScriptStruct_FStageProviderEventMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StageProviderEventMessage.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStageProviderPeriodicMessage>() == std::is_polymorphic<FStageProviderMessage>(), "USTRUCT FStageProviderPeriodicMessage cannot be polymorphic unless super FStageProviderMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StageProviderPeriodicMessage;
class UScriptStruct* FStageProviderPeriodicMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StageProviderPeriodicMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StageProviderPeriodicMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStageProviderPeriodicMessage, (UObject*)Z_Construct_UPackage__Script_StageDataCore(), TEXT("StageProviderPeriodicMessage"));
	}
	return Z_Registration_Info_UScriptStruct_StageProviderPeriodicMessage.OuterSingleton;
}
template<> STAGEDATACORE_API UScriptStruct* StaticStruct<FStageProviderPeriodicMessage>()
{
	return FStageProviderPeriodicMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStageProviderPeriodicMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageProviderPeriodicMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Provider messages that are periodic\n */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Base Provider messages that are periodic" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStageProviderPeriodicMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStageProviderPeriodicMessage>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStageProviderPeriodicMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageDataCore,
		Z_Construct_UScriptStruct_FStageProviderMessage,
		&NewStructOps,
		"StageProviderPeriodicMessage",
		sizeof(FStageProviderPeriodicMessage),
		alignof(FStageProviderPeriodicMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStageProviderPeriodicMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageProviderPeriodicMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStageProviderPeriodicMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_StageProviderPeriodicMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StageProviderPeriodicMessage.InnerSingleton, Z_Construct_UScriptStruct_FStageProviderPeriodicMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StageProviderPeriodicMessage.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStageProviderCloseMessage>() == std::is_polymorphic<FStageProviderEventMessage>(), "USTRUCT FStageProviderCloseMessage cannot be polymorphic unless super FStageProviderEventMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StageProviderCloseMessage;
class UScriptStruct* FStageProviderCloseMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StageProviderCloseMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StageProviderCloseMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStageProviderCloseMessage, (UObject*)Z_Construct_UPackage__Script_StageDataCore(), TEXT("StageProviderCloseMessage"));
	}
	return Z_Registration_Info_UScriptStruct_StageProviderCloseMessage.OuterSingleton;
}
template<> STAGEDATACORE_API UScriptStruct* StaticStruct<FStageProviderCloseMessage>()
{
	return FStageProviderCloseMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStageProviderCloseMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageProviderCloseMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *  Message sent by Providers to notify monitors they are closing down\n */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Message sent by Providers to notify monitors they are closing down" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStageProviderCloseMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStageProviderCloseMessage>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStageProviderCloseMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageDataCore,
		Z_Construct_UScriptStruct_FStageProviderEventMessage,
		&NewStructOps,
		"StageProviderCloseMessage",
		sizeof(FStageProviderCloseMessage),
		alignof(FStageProviderCloseMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStageProviderCloseMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageProviderCloseMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStageProviderCloseMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_StageProviderCloseMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StageProviderCloseMessage.InnerSingleton, Z_Construct_UScriptStruct_FStageProviderCloseMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StageProviderCloseMessage.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStageProviderDiscoveryResponseMessage>() == std::is_polymorphic<FStageProviderEventMessage>(), "USTRUCT FStageProviderDiscoveryResponseMessage cannot be polymorphic unless super FStageProviderEventMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StageProviderDiscoveryResponseMessage;
class UScriptStruct* FStageProviderDiscoveryResponseMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StageProviderDiscoveryResponseMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StageProviderDiscoveryResponseMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStageProviderDiscoveryResponseMessage, (UObject*)Z_Construct_UPackage__Script_StageDataCore(), TEXT("StageProviderDiscoveryResponseMessage"));
	}
	return Z_Registration_Info_UScriptStruct_StageProviderDiscoveryResponseMessage.OuterSingleton;
}
template<> STAGEDATACORE_API UScriptStruct* StaticStruct<FStageProviderDiscoveryResponseMessage>()
{
	return FStageProviderDiscoveryResponseMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStageProviderDiscoveryResponseMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Descriptor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Descriptor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageProviderDiscoveryResponseMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Response to a received discovery message sent by providers\n */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Response to a received discovery message sent by providers" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStageProviderDiscoveryResponseMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStageProviderDiscoveryResponseMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageProviderDiscoveryResponseMessage_Statics::NewProp_Descriptor_MetaData[] = {
		{ "Comment", "/** Detailed description of that provider */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Detailed description of that provider" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStageProviderDiscoveryResponseMessage_Statics::NewProp_Descriptor = { "Descriptor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStageProviderDiscoveryResponseMessage, Descriptor), Z_Construct_UScriptStruct_FStageInstanceDescriptor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStageProviderDiscoveryResponseMessage_Statics::NewProp_Descriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageProviderDiscoveryResponseMessage_Statics::NewProp_Descriptor_MetaData)) }; // 763794326
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStageProviderDiscoveryResponseMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageProviderDiscoveryResponseMessage_Statics::NewProp_Descriptor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStageProviderDiscoveryResponseMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageDataCore,
		Z_Construct_UScriptStruct_FStageProviderEventMessage,
		&NewStructOps,
		"StageProviderDiscoveryResponseMessage",
		sizeof(FStageProviderDiscoveryResponseMessage),
		alignof(FStageProviderDiscoveryResponseMessage),
		Z_Construct_UScriptStruct_FStageProviderDiscoveryResponseMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageProviderDiscoveryResponseMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStageProviderDiscoveryResponseMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageProviderDiscoveryResponseMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStageProviderDiscoveryResponseMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_StageProviderDiscoveryResponseMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StageProviderDiscoveryResponseMessage.InnerSingleton, Z_Construct_UScriptStruct_FStageProviderDiscoveryResponseMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StageProviderDiscoveryResponseMessage.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCriticalStateProviderMessage>() == std::is_polymorphic<FStageProviderEventMessage>(), "USTRUCT FCriticalStateProviderMessage cannot be polymorphic unless super FStageProviderEventMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CriticalStateProviderMessage;
class UScriptStruct* FCriticalStateProviderMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CriticalStateProviderMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CriticalStateProviderMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCriticalStateProviderMessage, (UObject*)Z_Construct_UPackage__Script_StageDataCore(), TEXT("CriticalStateProviderMessage"));
	}
	return Z_Registration_Info_UScriptStruct_CriticalStateProviderMessage.OuterSingleton;
}
template<> STAGEDATACORE_API UScriptStruct* StaticStruct<FCriticalStateProviderMessage>()
{
	return FCriticalStateProviderMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Message sent to notify about critical state change.\n */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Message sent to notify about critical state change." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCriticalStateProviderMessage>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics::NewProp_State_MetaData[] = {
		{ "Category", "CriticalState" },
		{ "Comment", "/** Event for this critical state */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Event for this critical state" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCriticalStateProviderMessage, State), Z_Construct_UEnum_StageDataCore_EStageCriticalStateEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics::NewProp_State_MetaData)) }; // 1122614812
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics::NewProp_SourceName_MetaData[] = {
		{ "Category", "CriticalState" },
		{ "Comment", "/** Source of the critical state. i.e. TakeName, CustomRecorder, etc... */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Source of the critical state. i.e. TakeName, CustomRecorder, etc..." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCriticalStateProviderMessage, SourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics::NewProp_SourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics::NewProp_SourceName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics::NewProp_SourceName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageDataCore,
		Z_Construct_UScriptStruct_FStageProviderEventMessage,
		&NewStructOps,
		"CriticalStateProviderMessage",
		sizeof(FCriticalStateProviderMessage),
		alignof(FCriticalStateProviderMessage),
		Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCriticalStateProviderMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_CriticalStateProviderMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CriticalStateProviderMessage.InnerSingleton, Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CriticalStateProviderMessage.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAssetLoadingStateProviderMessage>() == std::is_polymorphic<FStageProviderEventMessage>(), "USTRUCT FAssetLoadingStateProviderMessage cannot be polymorphic unless super FStageProviderEventMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetLoadingStateProviderMessage;
class UScriptStruct* FAssetLoadingStateProviderMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetLoadingStateProviderMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetLoadingStateProviderMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage, (UObject*)Z_Construct_UPackage__Script_StageDataCore(), TEXT("AssetLoadingStateProviderMessage"));
	}
	return Z_Registration_Info_UScriptStruct_AssetLoadingStateProviderMessage.OuterSingleton;
}
template<> STAGEDATACORE_API UScriptStruct* StaticStruct<FAssetLoadingStateProviderMessage>()
{
	return FAssetLoadingStateProviderMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_LoadingState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LoadingState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Message sent to indicate that the node has entered or exited a loading state.\n */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Message sent to indicate that the node has entered or exited a loading state." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetLoadingStateProviderMessage>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics::NewProp_LoadingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics::NewProp_LoadingState_MetaData[] = {
		{ "Category", "AssetLoading" },
		{ "Comment", "/** Event for this critical state */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Event for this critical state" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics::NewProp_LoadingState = { "LoadingState", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetLoadingStateProviderMessage, LoadingState), Z_Construct_UEnum_StageDataCore_EStageLoadingState, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics::NewProp_LoadingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics::NewProp_LoadingState_MetaData)) }; // 1687606453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics::NewProp_AssetName_MetaData[] = {
		{ "Category", "AssetLoading" },
		{ "Comment", "/** Name of the asset currently loading. */" },
		{ "ModuleRelativePath", "Public/StageMessages.h" },
		{ "ToolTip", "Name of the asset currently loading." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetLoadingStateProviderMessage, AssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics::NewProp_AssetName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics::NewProp_LoadingState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics::NewProp_LoadingState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics::NewProp_AssetName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageDataCore,
		Z_Construct_UScriptStruct_FStageProviderEventMessage,
		&NewStructOps,
		"AssetLoadingStateProviderMessage",
		sizeof(FAssetLoadingStateProviderMessage),
		alignof(FAssetLoadingStateProviderMessage),
		Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_AssetLoadingStateProviderMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetLoadingStateProviderMessage.InnerSingleton, Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AssetLoadingStateProviderMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_Statics::EnumInfo[] = {
		{ EStageMessageFlags_StaticEnum, TEXT("EStageMessageFlags"), &Z_Registration_Info_UEnum_EStageMessageFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 246584421U) },
		{ EStageDataProviderState_StaticEnum, TEXT("EStageDataProviderState"), &Z_Registration_Info_UEnum_EStageDataProviderState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1885932883U) },
		{ EStageCriticalStateEvent_StaticEnum, TEXT("EStageCriticalStateEvent"), &Z_Registration_Info_UEnum_EStageCriticalStateEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1122614812U) },
		{ EStageLoadingState_StaticEnum, TEXT("EStageLoadingState"), &Z_Registration_Info_UEnum_EStageLoadingState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1687606453U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_Statics::ScriptStructInfo[] = {
		{ FStageInstanceDescriptor::StaticStruct, Z_Construct_UScriptStruct_FStageInstanceDescriptor_Statics::NewStructOps, TEXT("StageInstanceDescriptor"), &Z_Registration_Info_UScriptStruct_StageInstanceDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStageInstanceDescriptor), 763794326U) },
		{ FStageDataBaseMessage::StaticStruct, Z_Construct_UScriptStruct_FStageDataBaseMessage_Statics::NewStructOps, TEXT("StageDataBaseMessage"), &Z_Registration_Info_UScriptStruct_StageDataBaseMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStageDataBaseMessage), 2676883406U) },
		{ FStageMonitorBaseMessage::StaticStruct, Z_Construct_UScriptStruct_FStageMonitorBaseMessage_Statics::NewStructOps, TEXT("StageMonitorBaseMessage"), &Z_Registration_Info_UScriptStruct_StageMonitorBaseMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStageMonitorBaseMessage), 4185568471U) },
		{ FStageProviderDiscoveryMessage::StaticStruct, Z_Construct_UScriptStruct_FStageProviderDiscoveryMessage_Statics::NewStructOps, TEXT("StageProviderDiscoveryMessage"), &Z_Registration_Info_UScriptStruct_StageProviderDiscoveryMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStageProviderDiscoveryMessage), 2966433960U) },
		{ FStageMonitorCloseMessage::StaticStruct, Z_Construct_UScriptStruct_FStageMonitorCloseMessage_Statics::NewStructOps, TEXT("StageMonitorCloseMessage"), &Z_Registration_Info_UScriptStruct_StageMonitorCloseMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStageMonitorCloseMessage), 2302321103U) },
		{ FStageProviderMessage::StaticStruct, Z_Construct_UScriptStruct_FStageProviderMessage_Statics::NewStructOps, TEXT("StageProviderMessage"), &Z_Registration_Info_UScriptStruct_StageProviderMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStageProviderMessage), 664320966U) },
		{ FStageProviderEventMessage::StaticStruct, Z_Construct_UScriptStruct_FStageProviderEventMessage_Statics::NewStructOps, TEXT("StageProviderEventMessage"), &Z_Registration_Info_UScriptStruct_StageProviderEventMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStageProviderEventMessage), 3870018311U) },
		{ FStageProviderPeriodicMessage::StaticStruct, Z_Construct_UScriptStruct_FStageProviderPeriodicMessage_Statics::NewStructOps, TEXT("StageProviderPeriodicMessage"), &Z_Registration_Info_UScriptStruct_StageProviderPeriodicMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStageProviderPeriodicMessage), 2144441145U) },
		{ FStageProviderCloseMessage::StaticStruct, Z_Construct_UScriptStruct_FStageProviderCloseMessage_Statics::NewStructOps, TEXT("StageProviderCloseMessage"), &Z_Registration_Info_UScriptStruct_StageProviderCloseMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStageProviderCloseMessage), 3941004019U) },
		{ FStageProviderDiscoveryResponseMessage::StaticStruct, Z_Construct_UScriptStruct_FStageProviderDiscoveryResponseMessage_Statics::NewStructOps, TEXT("StageProviderDiscoveryResponseMessage"), &Z_Registration_Info_UScriptStruct_StageProviderDiscoveryResponseMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStageProviderDiscoveryResponseMessage), 3175038279U) },
		{ FCriticalStateProviderMessage::StaticStruct, Z_Construct_UScriptStruct_FCriticalStateProviderMessage_Statics::NewStructOps, TEXT("CriticalStateProviderMessage"), &Z_Registration_Info_UScriptStruct_CriticalStateProviderMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCriticalStateProviderMessage), 2963246131U) },
		{ FAssetLoadingStateProviderMessage::StaticStruct, Z_Construct_UScriptStruct_FAssetLoadingStateProviderMessage_Statics::NewStructOps, TEXT("AssetLoadingStateProviderMessage"), &Z_Registration_Info_UScriptStruct_AssetLoadingStateProviderMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetLoadingStateProviderMessage), 4226575997U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_546382651(TEXT("/Script/StageDataCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_VirtualProduction_StageDataCore_Public_StageMessages_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
