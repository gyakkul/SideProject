// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Widgets/Clients/Logging/ConcertLogEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertLogEntry() {}
// Cross Module References
	MULTIUSERSERVER_API UEnum* Z_Construct_UEnum_MultiUserServer_EConcertLogAckState();
	MULTIUSERSERVER_API UScriptStruct* Z_Construct_UScriptStruct_FConcertLogMetadata();
	UPackage* Z_Construct_UPackage__Script_MultiUserServer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertLogAckState;
	static UEnum* EConcertLogAckState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertLogAckState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertLogAckState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MultiUserServer_EConcertLogAckState, (UObject*)Z_Construct_UPackage__Script_MultiUserServer(), TEXT("EConcertLogAckState"));
		}
		return Z_Registration_Info_UEnum_EConcertLogAckState.OuterSingleton;
	}
	template<> MULTIUSERSERVER_API UEnum* StaticEnum<EConcertLogAckState>()
	{
		return EConcertLogAckState_StaticEnum();
	}
	struct Z_Construct_UEnum_MultiUserServer_EConcertLogAckState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MultiUserServer_EConcertLogAckState_Statics::Enumerators[] = {
		{ "EConcertLogAckState::NotNeeded", (int64)EConcertLogAckState::NotNeeded },
		{ "EConcertLogAckState::Ack", (int64)EConcertLogAckState::Ack },
		{ "EConcertLogAckState::InProgress", (int64)EConcertLogAckState::InProgress },
		{ "EConcertLogAckState::AckReceived", (int64)EConcertLogAckState::AckReceived },
		{ "EConcertLogAckState::AckFailure", (int64)EConcertLogAckState::AckFailure },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MultiUserServer_EConcertLogAckState_Statics::Enum_MetaDataParams[] = {
		{ "Ack.Comment", "/** This is an ack */" },
		{ "Ack.Name", "EConcertLogAckState::Ack" },
		{ "Ack.ToolTip", "This is an ack" },
		{ "AckFailure.Comment", "/** Never received any acks - set after a certain timeout. */" },
		{ "AckFailure.Name", "EConcertLogAckState::AckFailure" },
		{ "AckFailure.ToolTip", "Never received any acks - set after a certain timeout." },
		{ "AckReceived.Comment", "/** The ack was received */" },
		{ "AckReceived.Name", "EConcertLogAckState::AckReceived" },
		{ "AckReceived.ToolTip", "The ack was received" },
		{ "InProgress.Comment", "/** Still waiting on the ack */" },
		{ "InProgress.Name", "EConcertLogAckState::InProgress" },
		{ "InProgress.ToolTip", "Still waiting on the ack" },
		{ "ModuleRelativePath", "Private/Widgets/Clients/Logging/ConcertLogEntry.h" },
		{ "NotNeeded.Comment", "/** This message does not require any acks */" },
		{ "NotNeeded.Name", "EConcertLogAckState::NotNeeded" },
		{ "NotNeeded.ToolTip", "This message does not require any acks" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MultiUserServer_EConcertLogAckState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MultiUserServer,
		nullptr,
		"EConcertLogAckState",
		"EConcertLogAckState",
		Z_Construct_UEnum_MultiUserServer_EConcertLogAckState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MultiUserServer_EConcertLogAckState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MultiUserServer_EConcertLogAckState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MultiUserServer_EConcertLogAckState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MultiUserServer_EConcertLogAckState()
	{
		if (!Z_Registration_Info_UEnum_EConcertLogAckState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertLogAckState.InnerSingleton, Z_Construct_UEnum_MultiUserServer_EConcertLogAckState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertLogAckState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertLogMetadata;
class UScriptStruct* FConcertLogMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertLogMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertLogMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertLogMetadata, (UObject*)Z_Construct_UPackage__Script_MultiUserServer(), TEXT("ConcertLogMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertLogMetadata.OuterSingleton;
}
template<> MULTIUSERSERVER_API UScriptStruct* StaticStruct<FConcertLogMetadata>()
{
	return FConcertLogMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertLogMetadata_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_AckState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AckState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AckState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertLogMetadata_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Additional properties we display in the UI but that are not in FConcertLog live here. */" },
		{ "ModuleRelativePath", "Private/Widgets/Clients/Logging/ConcertLogEntry.h" },
		{ "ToolTip", "Additional properties we display in the UI but that are not in FConcertLog live here." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertLogMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertLogMetadata>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertLogMetadata_Statics::NewProp_AckState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertLogMetadata_Statics::NewProp_AckState_MetaData[] = {
		{ "Comment", "/** The ack state of this log */" },
		{ "ModuleRelativePath", "Private/Widgets/Clients/Logging/ConcertLogEntry.h" },
		{ "ToolTip", "The ack state of this log" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertLogMetadata_Statics::NewProp_AckState = { "AckState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertLogMetadata, AckState), Z_Construct_UEnum_MultiUserServer_EConcertLogAckState, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertLogMetadata_Statics::NewProp_AckState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLogMetadata_Statics::NewProp_AckState_MetaData)) }; // 3219438114
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertLogMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertLogMetadata_Statics::NewProp_AckState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertLogMetadata_Statics::NewProp_AckState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertLogMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MultiUserServer,
		nullptr,
		&NewStructOps,
		"ConcertLogMetadata",
		sizeof(FConcertLogMetadata),
		alignof(FConcertLogMetadata),
		Z_Construct_UScriptStruct_FConcertLogMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLogMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertLogMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLogMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertLogMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertLogMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertLogMetadata.InnerSingleton, Z_Construct_UScriptStruct_FConcertLogMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertLogMetadata.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Widgets_Clients_Logging_ConcertLogEntry_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Widgets_Clients_Logging_ConcertLogEntry_h_Statics::EnumInfo[] = {
		{ EConcertLogAckState_StaticEnum, TEXT("EConcertLogAckState"), &Z_Registration_Info_UEnum_EConcertLogAckState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3219438114U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Widgets_Clients_Logging_ConcertLogEntry_h_Statics::ScriptStructInfo[] = {
		{ FConcertLogMetadata::StaticStruct, Z_Construct_UScriptStruct_FConcertLogMetadata_Statics::NewStructOps, TEXT("ConcertLogMetadata"), &Z_Registration_Info_UScriptStruct_ConcertLogMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertLogMetadata), 1840172387U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Widgets_Clients_Logging_ConcertLogEntry_h_1587540407(TEXT("/Script/MultiUserServer"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Widgets_Clients_Logging_ConcertLogEntry_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Widgets_Clients_Logging_ConcertLogEntry_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Widgets_Clients_Logging_ConcertLogEntry_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserServer_Source_MultiUserServer_Private_Widgets_Clients_Logging_ConcertLogEntry_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
