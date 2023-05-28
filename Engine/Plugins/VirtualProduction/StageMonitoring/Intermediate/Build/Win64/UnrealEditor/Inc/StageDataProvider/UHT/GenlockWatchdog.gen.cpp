// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/GenlockWatchdog.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenlockWatchdog() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState();
	STAGEDATACORE_API UScriptStruct* Z_Construct_UScriptStruct_FStageProviderEventMessage();
	STAGEDATAPROVIDER_API UScriptStruct* Z_Construct_UScriptStruct_FGenlockHitchEvent();
	STAGEDATAPROVIDER_API UScriptStruct* Z_Construct_UScriptStruct_FGenlockStateEvent();
	UPackage* Z_Construct_UPackage__Script_StageDataProvider();
// End Cross Module References

static_assert(std::is_polymorphic<FGenlockHitchEvent>() == std::is_polymorphic<FStageProviderEventMessage>(), "USTRUCT FGenlockHitchEvent cannot be polymorphic unless super FStageProviderEventMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenlockHitchEvent;
class UScriptStruct* FGenlockHitchEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenlockHitchEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenlockHitchEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenlockHitchEvent, (UObject*)Z_Construct_UPackage__Script_StageDataProvider(), TEXT("GenlockHitchEvent"));
	}
	return Z_Registration_Info_UScriptStruct_GenlockHitchEvent.OuterSingleton;
}
template<> STAGEDATAPROVIDER_API UScriptStruct* StaticStruct<FGenlockHitchEvent>()
{
	return FGenlockHitchEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGenlockHitchEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MissedSyncSignals_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MissedSyncSignals;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenlockHitchEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Stage event to notify of missed sync (genlock) signals\n * When sync signal are lost, it means the engine is not running \n * fast enough to keep track of the genlock source. \n */" },
		{ "ModuleRelativePath", "Private/GenlockWatchdog.h" },
		{ "ToolTip", "Stage event to notify of missed sync (genlock) signals\nWhen sync signal are lost, it means the engine is not running\nfast enough to keep track of the genlock source." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenlockHitchEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenlockHitchEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenlockHitchEvent_Statics::NewProp_MissedSyncSignals_MetaData[] = {
		{ "Category", "GenlockState" },
		{ "Comment", "/** Number of sync counts that were missed between tick */" },
		{ "ModuleRelativePath", "Private/GenlockWatchdog.h" },
		{ "ToolTip", "Number of sync counts that were missed between tick" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenlockHitchEvent_Statics::NewProp_MissedSyncSignals = { "MissedSyncSignals", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenlockHitchEvent, MissedSyncSignals), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenlockHitchEvent_Statics::NewProp_MissedSyncSignals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenlockHitchEvent_Statics::NewProp_MissedSyncSignals_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenlockHitchEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenlockHitchEvent_Statics::NewProp_MissedSyncSignals,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenlockHitchEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageDataProvider,
		Z_Construct_UScriptStruct_FStageProviderEventMessage,
		&NewStructOps,
		"GenlockHitchEvent",
		sizeof(FGenlockHitchEvent),
		alignof(FGenlockHitchEvent),
		Z_Construct_UScriptStruct_FGenlockHitchEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenlockHitchEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGenlockHitchEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenlockHitchEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGenlockHitchEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_GenlockHitchEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenlockHitchEvent.InnerSingleton, Z_Construct_UScriptStruct_FGenlockHitchEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GenlockHitchEvent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGenlockStateEvent>() == std::is_polymorphic<FStageProviderEventMessage>(), "USTRUCT FGenlockStateEvent cannot be polymorphic unless super FStageProviderEventMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenlockStateEvent;
class UScriptStruct* FGenlockStateEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenlockStateEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenlockStateEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenlockStateEvent, (UObject*)Z_Construct_UPackage__Script_StageDataProvider(), TEXT("GenlockStateEvent"));
	}
	return Z_Registration_Info_UScriptStruct_GenlockStateEvent.OuterSingleton;
}
template<> STAGEDATAPROVIDER_API UScriptStruct* StaticStruct<FGenlockStateEvent>()
{
	return FGenlockStateEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGenlockStateEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenlockStateEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Stage event to notify of genlock custom timestep state change\n */" },
		{ "ModuleRelativePath", "Private/GenlockWatchdog.h" },
		{ "ToolTip", "Stage event to notify of genlock custom timestep state change" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenlockStateEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenlockStateEvent>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGenlockStateEvent_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenlockStateEvent_Statics::NewProp_NewState_MetaData[] = {
		{ "Category", "GenlockState" },
		{ "Comment", "/** New state of genlock custom timestep (i.e. Synchronized, Error, etc...) */" },
		{ "ModuleRelativePath", "Private/GenlockWatchdog.h" },
		{ "ToolTip", "New state of genlock custom timestep (i.e. Synchronized, Error, etc...)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenlockStateEvent_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenlockStateEvent, NewState), Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenlockStateEvent_Statics::NewProp_NewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenlockStateEvent_Statics::NewProp_NewState_MetaData)) }; // 8005760
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenlockStateEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenlockStateEvent_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenlockStateEvent_Statics::NewProp_NewState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenlockStateEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageDataProvider,
		Z_Construct_UScriptStruct_FStageProviderEventMessage,
		&NewStructOps,
		"GenlockStateEvent",
		sizeof(FGenlockStateEvent),
		alignof(FGenlockStateEvent),
		Z_Construct_UScriptStruct_FGenlockStateEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenlockStateEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGenlockStateEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenlockStateEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGenlockStateEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_GenlockStateEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenlockStateEvent.InnerSingleton, Z_Construct_UScriptStruct_FGenlockStateEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GenlockStateEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageDataProvider_Private_GenlockWatchdog_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageDataProvider_Private_GenlockWatchdog_h_Statics::ScriptStructInfo[] = {
		{ FGenlockHitchEvent::StaticStruct, Z_Construct_UScriptStruct_FGenlockHitchEvent_Statics::NewStructOps, TEXT("GenlockHitchEvent"), &Z_Registration_Info_UScriptStruct_GenlockHitchEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenlockHitchEvent), 104489612U) },
		{ FGenlockStateEvent::StaticStruct, Z_Construct_UScriptStruct_FGenlockStateEvent_Statics::NewStructOps, TEXT("GenlockStateEvent"), &Z_Registration_Info_UScriptStruct_GenlockStateEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenlockStateEvent), 191092679U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageDataProvider_Private_GenlockWatchdog_h_3139687094(TEXT("/Script/StageDataProvider"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageDataProvider_Private_GenlockWatchdog_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageDataProvider_Private_GenlockWatchdog_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
