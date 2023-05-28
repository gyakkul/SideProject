// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TimecodeProviderWatchdog.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimecodeProviderWatchdog() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState();
	STAGEDATACORE_API UScriptStruct* Z_Construct_UScriptStruct_FStageProviderEventMessage();
	STAGEDATAPROVIDER_API UScriptStruct* Z_Construct_UScriptStruct_FTimecodeProviderStateEvent();
	UPackage* Z_Construct_UPackage__Script_StageDataProvider();
// End Cross Module References

static_assert(std::is_polymorphic<FTimecodeProviderStateEvent>() == std::is_polymorphic<FStageProviderEventMessage>(), "USTRUCT FTimecodeProviderStateEvent cannot be polymorphic unless super FStageProviderEventMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimecodeProviderStateEvent;
class UScriptStruct* FTimecodeProviderStateEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimecodeProviderStateEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimecodeProviderStateEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimecodeProviderStateEvent, (UObject*)Z_Construct_UPackage__Script_StageDataProvider(), TEXT("TimecodeProviderStateEvent"));
	}
	return Z_Registration_Info_UScriptStruct_TimecodeProviderStateEvent.OuterSingleton;
}
template<> STAGEDATAPROVIDER_API UScriptStruct* StaticStruct<FTimecodeProviderStateEvent>()
{
	return FTimecodeProviderStateEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProviderName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProviderName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProviderType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProviderType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Stage event to notify of TimecodeProvider state change\n */" },
		{ "ModuleRelativePath", "Private/TimecodeProviderWatchdog.h" },
		{ "ToolTip", "Stage event to notify of TimecodeProvider state change" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimecodeProviderStateEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewProp_ProviderName_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** Name of the TimeodeProvider for this event */" },
		{ "ModuleRelativePath", "Private/TimecodeProviderWatchdog.h" },
		{ "ToolTip", "Name of the TimeodeProvider for this event" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewProp_ProviderName = { "ProviderName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimecodeProviderStateEvent, ProviderName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewProp_ProviderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewProp_ProviderName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewProp_ProviderType_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** Type of the TimecodeProvider for this event */" },
		{ "ModuleRelativePath", "Private/TimecodeProviderWatchdog.h" },
		{ "ToolTip", "Type of the TimecodeProvider for this event" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewProp_ProviderType = { "ProviderType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimecodeProviderStateEvent, ProviderType), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewProp_ProviderType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewProp_ProviderType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** FrameRate of the provider */" },
		{ "ModuleRelativePath", "Private/TimecodeProviderWatchdog.h" },
		{ "ToolTip", "FrameRate of the provider" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimecodeProviderStateEvent, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewProp_FrameRate_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewProp_NewState_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** New state of TimecodeProvider (i.e. Synchronized, Error, etc...) */" },
		{ "ModuleRelativePath", "Private/TimecodeProviderWatchdog.h" },
		{ "ToolTip", "New state of TimecodeProvider (i.e. Synchronized, Error, etc...)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimecodeProviderStateEvent, NewState), Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewProp_NewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewProp_NewState_MetaData)) }; // 2970859525
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewProp_ProviderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewProp_ProviderType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewProp_NewState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageDataProvider,
		Z_Construct_UScriptStruct_FStageProviderEventMessage,
		&NewStructOps,
		"TimecodeProviderStateEvent",
		sizeof(FTimecodeProviderStateEvent),
		alignof(FTimecodeProviderStateEvent),
		Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimecodeProviderStateEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_TimecodeProviderStateEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimecodeProviderStateEvent.InnerSingleton, Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimecodeProviderStateEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageDataProvider_Private_TimecodeProviderWatchdog_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageDataProvider_Private_TimecodeProviderWatchdog_h_Statics::ScriptStructInfo[] = {
		{ FTimecodeProviderStateEvent::StaticStruct, Z_Construct_UScriptStruct_FTimecodeProviderStateEvent_Statics::NewStructOps, TEXT("TimecodeProviderStateEvent"), &Z_Registration_Info_UScriptStruct_TimecodeProviderStateEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimecodeProviderStateEvent), 1865576964U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageDataProvider_Private_TimecodeProviderWatchdog_h_3222064530(TEXT("/Script/StageDataProvider"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageDataProvider_Private_TimecodeProviderWatchdog_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageDataProvider_Private_TimecodeProviderWatchdog_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
