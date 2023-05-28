// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/RemoteControlResponse.h"
#include "../Private/RemoteControlModels.h"
#include "../Private/RemoteControlRoute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlResponse() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WebRemoteControl();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FAPIInfoResponse();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FCheckPassphraseResponse();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FDescribeObjectResponse();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FGetMetadataFieldResponse();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FGetMetadataResponse();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FGetPresetResponse();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FListPresetsResponse();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCActorDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCActorsChangedData();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCActorsChangedEvent();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCAssetDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCControllerModifiedDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCFunctionDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCObjectDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPresetDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPresetFieldRenamed();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPresetLayoutModified();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPresetMetadataModified();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPropertyDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCShortPresetDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCTransactionEndedEvent();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlRouteDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FSearchActorResponse();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FSearchAssetResponse();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FSetEntityLabelResponse();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_APIInfoResponse;
class UScriptStruct* FAPIInfoResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_APIInfoResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_APIInfoResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAPIInfoResponse, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("APIInfoResponse"));
	}
	return Z_Registration_Info_UScriptStruct_APIInfoResponse.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FAPIInfoResponse>()
{
	return FAPIInfoResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAPIInfoResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_HttpRoutes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HttpRoutes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HttpRoutes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivePreset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivePreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAPIInfoResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAPIInfoResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAPIInfoResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAPIInfoResponse_Statics::NewProp_HttpRoutes_Inner = { "HttpRoutes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRemoteControlRouteDescription, METADATA_PARAMS(nullptr, 0) }; // 1093688782
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAPIInfoResponse_Statics::NewProp_HttpRoutes_MetaData[] = {
		{ "Comment", "/**\n\x09 * Descriptions for all the routes that make up the remote control API.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "Descriptions for all the routes that make up the remote control API." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAPIInfoResponse_Statics::NewProp_HttpRoutes = { "HttpRoutes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAPIInfoResponse, HttpRoutes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAPIInfoResponse_Statics::NewProp_HttpRoutes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAPIInfoResponse_Statics::NewProp_HttpRoutes_MetaData)) }; // 1093688782
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAPIInfoResponse_Statics::NewProp_ActivePreset_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAPIInfoResponse_Statics::NewProp_ActivePreset = { "ActivePreset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAPIInfoResponse, ActivePreset), Z_Construct_UScriptStruct_FRCShortPresetDescription, METADATA_PARAMS(Z_Construct_UScriptStruct_FAPIInfoResponse_Statics::NewProp_ActivePreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAPIInfoResponse_Statics::NewProp_ActivePreset_MetaData)) }; // 2744328907
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAPIInfoResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAPIInfoResponse_Statics::NewProp_HttpRoutes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAPIInfoResponse_Statics::NewProp_HttpRoutes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAPIInfoResponse_Statics::NewProp_ActivePreset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAPIInfoResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"APIInfoResponse",
		sizeof(FAPIInfoResponse),
		alignof(FAPIInfoResponse),
		Z_Construct_UScriptStruct_FAPIInfoResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAPIInfoResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAPIInfoResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAPIInfoResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAPIInfoResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_APIInfoResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_APIInfoResponse.InnerSingleton, Z_Construct_UScriptStruct_FAPIInfoResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_APIInfoResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ListPresetsResponse;
class UScriptStruct* FListPresetsResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ListPresetsResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ListPresetsResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FListPresetsResponse, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("ListPresetsResponse"));
	}
	return Z_Registration_Info_UScriptStruct_ListPresetsResponse.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FListPresetsResponse>()
{
	return FListPresetsResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FListPresetsResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Presets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Presets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Presets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FListPresetsResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FListPresetsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FListPresetsResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FListPresetsResponse_Statics::NewProp_Presets_Inner = { "Presets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCShortPresetDescription, METADATA_PARAMS(nullptr, 0) }; // 2744328907
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FListPresetsResponse_Statics::NewProp_Presets_MetaData[] = {
		{ "Comment", "/**\n\x09 * The list of available remote control presets. \n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "The list of available remote control presets." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FListPresetsResponse_Statics::NewProp_Presets = { "Presets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FListPresetsResponse, Presets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FListPresetsResponse_Statics::NewProp_Presets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FListPresetsResponse_Statics::NewProp_Presets_MetaData)) }; // 2744328907
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FListPresetsResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FListPresetsResponse_Statics::NewProp_Presets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FListPresetsResponse_Statics::NewProp_Presets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FListPresetsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"ListPresetsResponse",
		sizeof(FListPresetsResponse),
		alignof(FListPresetsResponse),
		Z_Construct_UScriptStruct_FListPresetsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FListPresetsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FListPresetsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FListPresetsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FListPresetsResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_ListPresetsResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ListPresetsResponse.InnerSingleton, Z_Construct_UScriptStruct_FListPresetsResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ListPresetsResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetPresetResponse;
class UScriptStruct* FGetPresetResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetPresetResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetPresetResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetPresetResponse, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("GetPresetResponse"));
	}
	return Z_Registration_Info_UScriptStruct_GetPresetResponse.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FGetPresetResponse>()
{
	return FGetPresetResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetPresetResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Preset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetPresetResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetPresetResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetPresetResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetPresetResponse_Statics::NewProp_Preset_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetPresetResponse_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetPresetResponse, Preset), Z_Construct_UScriptStruct_FRCPresetDescription, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetPresetResponse_Statics::NewProp_Preset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetPresetResponse_Statics::NewProp_Preset_MetaData)) }; // 3496416879
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetPresetResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetPresetResponse_Statics::NewProp_Preset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetPresetResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"GetPresetResponse",
		sizeof(FGetPresetResponse),
		alignof(FGetPresetResponse),
		Z_Construct_UScriptStruct_FGetPresetResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetPresetResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGetPresetResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetPresetResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGetPresetResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_GetPresetResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetPresetResponse.InnerSingleton, Z_Construct_UScriptStruct_FGetPresetResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetPresetResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CheckPassphraseResponse;
class UScriptStruct* FCheckPassphraseResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CheckPassphraseResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CheckPassphraseResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCheckPassphraseResponse, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("CheckPassphraseResponse"));
	}
	return Z_Registration_Info_UScriptStruct_CheckPassphraseResponse.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FCheckPassphraseResponse>()
{
	return FCheckPassphraseResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCheckPassphraseResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_keyCorrect_MetaData[];
#endif
		static void NewProp_keyCorrect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_keyCorrect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckPassphraseResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCheckPassphraseResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCheckPassphraseResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckPassphraseResponse_Statics::NewProp_keyCorrect_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCheckPassphraseResponse_Statics::NewProp_keyCorrect_SetBit(void* Obj)
	{
		((FCheckPassphraseResponse*)Obj)->keyCorrect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCheckPassphraseResponse_Statics::NewProp_keyCorrect = { "keyCorrect", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCheckPassphraseResponse), &Z_Construct_UScriptStruct_FCheckPassphraseResponse_Statics::NewProp_keyCorrect_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckPassphraseResponse_Statics::NewProp_keyCorrect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckPassphraseResponse_Statics::NewProp_keyCorrect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCheckPassphraseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckPassphraseResponse_Statics::NewProp_keyCorrect,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCheckPassphraseResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"CheckPassphraseResponse",
		sizeof(FCheckPassphraseResponse),
		alignof(FCheckPassphraseResponse),
		Z_Construct_UScriptStruct_FCheckPassphraseResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckPassphraseResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckPassphraseResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckPassphraseResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCheckPassphraseResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_CheckPassphraseResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CheckPassphraseResponse.InnerSingleton, Z_Construct_UScriptStruct_FCheckPassphraseResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CheckPassphraseResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DescribeObjectResponse;
class UScriptStruct* FDescribeObjectResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DescribeObjectResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DescribeObjectResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDescribeObjectResponse, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("DescribeObjectResponse"));
	}
	return Z_Registration_Info_UScriptStruct_DescribeObjectResponse.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FDescribeObjectResponse>()
{
	return FDescribeObjectResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_Class;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Functions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Functions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Functions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDescribeObjectResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDescribeObjectResponse, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDescribeObjectResponse, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Class_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCPropertyDescription, METADATA_PARAMS(nullptr, 0) }; // 4101904298
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDescribeObjectResponse, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Properties_MetaData)) }; // 4101904298
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Functions_Inner = { "Functions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCFunctionDescription, METADATA_PARAMS(nullptr, 0) }; // 2894009906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Functions_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Functions = { "Functions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDescribeObjectResponse, Functions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Functions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Functions_MetaData)) }; // 2894009906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Properties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Functions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewProp_Functions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"DescribeObjectResponse",
		sizeof(FDescribeObjectResponse),
		alignof(FDescribeObjectResponse),
		Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDescribeObjectResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_DescribeObjectResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DescribeObjectResponse.InnerSingleton, Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DescribeObjectResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SearchAssetResponse;
class UScriptStruct* FSearchAssetResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SearchAssetResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SearchAssetResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSearchAssetResponse, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("SearchAssetResponse"));
	}
	return Z_Registration_Info_UScriptStruct_SearchAssetResponse.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FSearchAssetResponse>()
{
	return FSearchAssetResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSearchAssetResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Assets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Assets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchAssetResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSearchAssetResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSearchAssetResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchAssetResponse_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCAssetDescription, METADATA_PARAMS(nullptr, 0) }; // 3060493055
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchAssetResponse_Statics::NewProp_Assets_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSearchAssetResponse_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchAssetResponse, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchAssetResponse_Statics::NewProp_Assets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchAssetResponse_Statics::NewProp_Assets_MetaData)) }; // 3060493055
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSearchAssetResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchAssetResponse_Statics::NewProp_Assets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchAssetResponse_Statics::NewProp_Assets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSearchAssetResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"SearchAssetResponse",
		sizeof(FSearchAssetResponse),
		alignof(FSearchAssetResponse),
		Z_Construct_UScriptStruct_FSearchAssetResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchAssetResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchAssetResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchAssetResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSearchAssetResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_SearchAssetResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SearchAssetResponse.InnerSingleton, Z_Construct_UScriptStruct_FSearchAssetResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SearchAssetResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SearchActorResponse;
class UScriptStruct* FSearchActorResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SearchActorResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SearchActorResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSearchActorResponse, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("SearchActorResponse"));
	}
	return Z_Registration_Info_UScriptStruct_SearchActorResponse.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FSearchActorResponse>()
{
	return FSearchActorResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSearchActorResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchActorResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSearchActorResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSearchActorResponse>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchActorResponse_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCObjectDescription, METADATA_PARAMS(nullptr, 0) }; // 2218922714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchActorResponse_Statics::NewProp_Actors_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSearchActorResponse_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchActorResponse, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchActorResponse_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchActorResponse_Statics::NewProp_Actors_MetaData)) }; // 2218922714
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSearchActorResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchActorResponse_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchActorResponse_Statics::NewProp_Actors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSearchActorResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"SearchActorResponse",
		sizeof(FSearchActorResponse),
		alignof(FSearchActorResponse),
		Z_Construct_UScriptStruct_FSearchActorResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchActorResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchActorResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchActorResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSearchActorResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_SearchActorResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SearchActorResponse.InnerSingleton, Z_Construct_UScriptStruct_FSearchActorResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SearchActorResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetMetadataFieldResponse;
class UScriptStruct* FGetMetadataFieldResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetMetadataFieldResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetMetadataFieldResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetMetadataFieldResponse, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("GetMetadataFieldResponse"));
	}
	return Z_Registration_Info_UScriptStruct_GetMetadataFieldResponse.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FGetMetadataFieldResponse>()
{
	return FGetMetadataFieldResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetMetadataFieldResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetMetadataFieldResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetMetadataFieldResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetMetadataFieldResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetMetadataFieldResponse_Statics::NewProp_Value_MetaData[] = {
		{ "Comment", "/** The metadata value for a given key. */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "The metadata value for a given key." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetMetadataFieldResponse_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetMetadataFieldResponse, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetMetadataFieldResponse_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMetadataFieldResponse_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetMetadataFieldResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetMetadataFieldResponse_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetMetadataFieldResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"GetMetadataFieldResponse",
		sizeof(FGetMetadataFieldResponse),
		alignof(FGetMetadataFieldResponse),
		Z_Construct_UScriptStruct_FGetMetadataFieldResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMetadataFieldResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGetMetadataFieldResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMetadataFieldResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGetMetadataFieldResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_GetMetadataFieldResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetMetadataFieldResponse.InnerSingleton, Z_Construct_UScriptStruct_FGetMetadataFieldResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetMetadataFieldResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetMetadataResponse;
class UScriptStruct* FGetMetadataResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetMetadataResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetMetadataResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetMetadataResponse, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("GetMetadataResponse"));
	}
	return Z_Registration_Info_UScriptStruct_GetMetadataResponse.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FGetMetadataResponse>()
{
	return FGetMetadataResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetMetadataResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetMetadataResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetMetadataResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetMetadataResponse>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetMetadataResponse_Statics::NewProp_Metadata_ValueProp = { "Metadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetMetadataResponse_Statics::NewProp_Metadata_Key_KeyProp = { "Metadata_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetMetadataResponse_Statics::NewProp_Metadata_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGetMetadataResponse_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetMetadataResponse, Metadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetMetadataResponse_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMetadataResponse_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetMetadataResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetMetadataResponse_Statics::NewProp_Metadata_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetMetadataResponse_Statics::NewProp_Metadata_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetMetadataResponse_Statics::NewProp_Metadata,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetMetadataResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"GetMetadataResponse",
		sizeof(FGetMetadataResponse),
		alignof(FGetMetadataResponse),
		Z_Construct_UScriptStruct_FGetMetadataResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMetadataResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGetMetadataResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMetadataResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGetMetadataResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_GetMetadataResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetMetadataResponse.InnerSingleton, Z_Construct_UScriptStruct_FGetMetadataResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetMetadataResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SetEntityLabelResponse;
class UScriptStruct* FSetEntityLabelResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SetEntityLabelResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SetEntityLabelResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetEntityLabelResponse, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("SetEntityLabelResponse"));
	}
	return Z_Registration_Info_UScriptStruct_SetEntityLabelResponse.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FSetEntityLabelResponse>()
{
	return FSetEntityLabelResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSetEntityLabelResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssignedLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssignedLabel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetEntityLabelResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSetEntityLabelResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetEntityLabelResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetEntityLabelResponse_Statics::NewProp_AssignedLabel_MetaData[] = {
		{ "Comment", "/** The label that was assigned when requesting to modify an entity's label. */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "The label that was assigned when requesting to modify an entity's label." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSetEntityLabelResponse_Statics::NewProp_AssignedLabel = { "AssignedLabel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetEntityLabelResponse, AssignedLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSetEntityLabelResponse_Statics::NewProp_AssignedLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetEntityLabelResponse_Statics::NewProp_AssignedLabel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetEntityLabelResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetEntityLabelResponse_Statics::NewProp_AssignedLabel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetEntityLabelResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"SetEntityLabelResponse",
		sizeof(FSetEntityLabelResponse),
		alignof(FSetEntityLabelResponse),
		Z_Construct_UScriptStruct_FSetEntityLabelResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetEntityLabelResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSetEntityLabelResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetEntityLabelResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSetEntityLabelResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_SetEntityLabelResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SetEntityLabelResponse.InnerSingleton, Z_Construct_UScriptStruct_FSetEntityLabelResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SetEntityLabelResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPresetFieldsRenamedEvent;
class UScriptStruct* FRCPresetFieldsRenamedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPresetFieldsRenamedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPresetFieldsRenamedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCPresetFieldsRenamedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_RCPresetFieldsRenamedEvent.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCPresetFieldsRenamedEvent>()
{
	return FRCPresetFieldsRenamedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PresetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresetId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenamedFields_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenamedFields_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RenamedFields;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPresetFieldsRenamedEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetFieldsRenamedEvent, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewProp_PresetName_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetFieldsRenamedEvent, PresetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewProp_PresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewProp_PresetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewProp_PresetId_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetFieldsRenamedEvent, PresetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewProp_PresetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewProp_PresetId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewProp_RenamedFields_Inner = { "RenamedFields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCPresetFieldRenamed, METADATA_PARAMS(nullptr, 0) }; // 2805028843
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewProp_RenamedFields_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewProp_RenamedFields = { "RenamedFields", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetFieldsRenamedEvent, RenamedFields), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewProp_RenamedFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewProp_RenamedFields_MetaData)) }; // 2805028843
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewProp_PresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewProp_PresetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewProp_RenamedFields_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewProp_RenamedFields,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCPresetFieldsRenamedEvent",
		sizeof(FRCPresetFieldsRenamedEvent),
		alignof(FRCPresetFieldsRenamedEvent),
		Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPresetFieldsRenamedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPresetFieldsRenamedEvent.InnerSingleton, Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPresetFieldsRenamedEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPresetMetadataModified;
class UScriptStruct* FRCPresetMetadataModified::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPresetMetadataModified.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPresetMetadataModified.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPresetMetadataModified, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCPresetMetadataModified"));
	}
	return Z_Registration_Info_UScriptStruct_RCPresetMetadataModified.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCPresetMetadataModified>()
{
	return FRCPresetMetadataModified::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PresetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresetId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPresetMetadataModified>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetMetadataModified, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_PresetName_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetMetadataModified, PresetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_PresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_PresetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_PresetId_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetMetadataModified, PresetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_PresetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_PresetId_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_Metadata_ValueProp = { "Metadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_Metadata_Key_KeyProp = { "Metadata_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_Metadata_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetMetadataModified, Metadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_PresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_PresetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_Metadata_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_Metadata_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewProp_Metadata,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCPresetMetadataModified",
		sizeof(FRCPresetMetadataModified),
		alignof(FRCPresetMetadataModified),
		Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPresetMetadataModified()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPresetMetadataModified.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPresetMetadataModified.InnerSingleton, Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPresetMetadataModified.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPresetLayoutModified;
class UScriptStruct* FRCPresetLayoutModified::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPresetLayoutModified.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPresetLayoutModified.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPresetLayoutModified, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCPresetLayoutModified"));
	}
	return Z_Registration_Info_UScriptStruct_RCPresetLayoutModified.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCPresetLayoutModified>()
{
	return FRCPresetLayoutModified::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPresetLayoutModified_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Preset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetLayoutModified_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPresetLayoutModified_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPresetLayoutModified>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetLayoutModified_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetLayoutModified_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetLayoutModified, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetLayoutModified_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetLayoutModified_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetLayoutModified_Statics::NewProp_Preset_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPresetLayoutModified_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetLayoutModified, Preset), Z_Construct_UScriptStruct_FRCPresetDescription, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetLayoutModified_Statics::NewProp_Preset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetLayoutModified_Statics::NewProp_Preset_MetaData)) }; // 3496416879
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPresetLayoutModified_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetLayoutModified_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetLayoutModified_Statics::NewProp_Preset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPresetLayoutModified_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCPresetLayoutModified",
		sizeof(FRCPresetLayoutModified),
		alignof(FRCPresetLayoutModified),
		Z_Construct_UScriptStruct_FRCPresetLayoutModified_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetLayoutModified_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetLayoutModified_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetLayoutModified_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPresetLayoutModified()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPresetLayoutModified.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPresetLayoutModified.InnerSingleton, Z_Construct_UScriptStruct_FRCPresetLayoutModified_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPresetLayoutModified.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPresetFieldsRemovedEvent;
class UScriptStruct* FRCPresetFieldsRemovedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPresetFieldsRemovedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPresetFieldsRemovedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCPresetFieldsRemovedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_RCPresetFieldsRemovedEvent.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCPresetFieldsRemovedEvent>()
{
	return FRCPresetFieldsRemovedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PresetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresetId;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RemovedFields_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemovedFields_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemovedFields;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RemovedFieldIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemovedFieldIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemovedFieldIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPresetFieldsRemovedEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetFieldsRemovedEvent, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_PresetName_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetFieldsRemovedEvent, PresetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_PresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_PresetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_PresetId_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetFieldsRemovedEvent, PresetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_PresetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_PresetId_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_RemovedFields_Inner = { "RemovedFields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_RemovedFields_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_RemovedFields = { "RemovedFields", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetFieldsRemovedEvent, RemovedFields), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_RemovedFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_RemovedFields_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_RemovedFieldIds_Inner = { "RemovedFieldIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_RemovedFieldIds_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_RemovedFieldIds = { "RemovedFieldIds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetFieldsRemovedEvent, RemovedFieldIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_RemovedFieldIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_RemovedFieldIds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_PresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_PresetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_RemovedFields_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_RemovedFields,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_RemovedFieldIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewProp_RemovedFieldIds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCPresetFieldsRemovedEvent",
		sizeof(FRCPresetFieldsRemovedEvent),
		alignof(FRCPresetFieldsRemovedEvent),
		Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPresetFieldsRemovedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPresetFieldsRemovedEvent.InnerSingleton, Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPresetFieldsRemovedEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPresetFieldsAddedEvent;
class UScriptStruct* FRCPresetFieldsAddedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPresetFieldsAddedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPresetFieldsAddedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCPresetFieldsAddedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_RCPresetFieldsAddedEvent.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCPresetFieldsAddedEvent>()
{
	return FRCPresetFieldsAddedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PresetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresetId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPresetFieldsAddedEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetFieldsAddedEvent, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::NewProp_PresetName_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetFieldsAddedEvent, PresetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::NewProp_PresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::NewProp_PresetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::NewProp_PresetId_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetFieldsAddedEvent, PresetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::NewProp_PresetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::NewProp_PresetId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetFieldsAddedEvent, Description), Z_Construct_UScriptStruct_FRCPresetDescription, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::NewProp_Description_MetaData)) }; // 3496416879
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::NewProp_PresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::NewProp_PresetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::NewProp_Description,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCPresetFieldsAddedEvent",
		sizeof(FRCPresetFieldsAddedEvent),
		alignof(FRCPresetFieldsAddedEvent),
		Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPresetFieldsAddedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPresetFieldsAddedEvent.InnerSingleton, Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPresetFieldsAddedEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPresetEntitiesModifiedEvent;
class UScriptStruct* FRCPresetEntitiesModifiedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPresetEntitiesModifiedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPresetEntitiesModifiedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCPresetEntitiesModifiedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_RCPresetEntitiesModifiedEvent.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCPresetEntitiesModifiedEvent>()
{
	return FRCPresetEntitiesModifiedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PresetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresetId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedEntities_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedEntities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Event triggered when an exposed entity struct is modified.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "Event triggered when an exposed entity struct is modified." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPresetEntitiesModifiedEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/**\n\x09 * Type of the event.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "Type of the event." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetEntitiesModifiedEvent, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::NewProp_PresetName_MetaData[] = {
		{ "Comment", "/**\n\x09 * Name of the preset which contains the modified entities.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "Name of the preset which contains the modified entities." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetEntitiesModifiedEvent, PresetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::NewProp_PresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::NewProp_PresetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::NewProp_PresetId_MetaData[] = {
		{ "Comment", "/**\n\x09 * ID of the preset that contains the modified entities.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "ID of the preset that contains the modified entities." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetEntitiesModifiedEvent, PresetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::NewProp_PresetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::NewProp_PresetId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::NewProp_ModifiedEntities_MetaData[] = {
		{ "Comment", "/**\n\x09 * The entities that were modified in the last frame.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "The entities that were modified in the last frame." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::NewProp_ModifiedEntities = { "ModifiedEntities", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetEntitiesModifiedEvent, ModifiedEntities), Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::NewProp_ModifiedEntities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::NewProp_ModifiedEntities_MetaData)) }; // 3991747579
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::NewProp_PresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::NewProp_PresetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::NewProp_ModifiedEntities,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCPresetEntitiesModifiedEvent",
		sizeof(FRCPresetEntitiesModifiedEvent),
		alignof(FRCPresetEntitiesModifiedEvent),
		Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPresetEntitiesModifiedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPresetEntitiesModifiedEvent.InnerSingleton, Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPresetEntitiesModifiedEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPresetControllersRenamedEvent;
class UScriptStruct* FRCPresetControllersRenamedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPresetControllersRenamedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPresetControllersRenamedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCPresetControllersRenamedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_RCPresetControllersRenamedEvent.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCPresetControllersRenamedEvent>()
{
	return FRCPresetControllersRenamedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PresetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresetId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenamedControllers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenamedControllers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RenamedControllers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPresetControllersRenamedEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetControllersRenamedEvent, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewProp_PresetName_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetControllersRenamedEvent, PresetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewProp_PresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewProp_PresetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewProp_PresetId_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetControllersRenamedEvent, PresetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewProp_PresetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewProp_PresetId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewProp_RenamedControllers_Inner = { "RenamedControllers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCPresetFieldRenamed, METADATA_PARAMS(nullptr, 0) }; // 2805028843
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewProp_RenamedControllers_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewProp_RenamedControllers = { "RenamedControllers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetControllersRenamedEvent, RenamedControllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewProp_RenamedControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewProp_RenamedControllers_MetaData)) }; // 2805028843
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewProp_PresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewProp_PresetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewProp_RenamedControllers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewProp_RenamedControllers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCPresetControllersRenamedEvent",
		sizeof(FRCPresetControllersRenamedEvent),
		alignof(FRCPresetControllersRenamedEvent),
		Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPresetControllersRenamedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPresetControllersRenamedEvent.InnerSingleton, Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPresetControllersRenamedEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPresetControllersRemovedEvent;
class UScriptStruct* FRCPresetControllersRemovedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPresetControllersRemovedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPresetControllersRemovedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCPresetControllersRemovedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_RCPresetControllersRemovedEvent.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCPresetControllersRemovedEvent>()
{
	return FRCPresetControllersRemovedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PresetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresetId;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RemovedControllers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemovedControllers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemovedControllers;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RemovedControllerIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemovedControllerIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemovedControllerIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPresetControllersRemovedEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetControllersRemovedEvent, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_PresetName_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetControllersRemovedEvent, PresetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_PresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_PresetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_PresetId_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetControllersRemovedEvent, PresetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_PresetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_PresetId_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_RemovedControllers_Inner = { "RemovedControllers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_RemovedControllers_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_RemovedControllers = { "RemovedControllers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetControllersRemovedEvent, RemovedControllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_RemovedControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_RemovedControllers_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_RemovedControllerIds_Inner = { "RemovedControllerIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_RemovedControllerIds_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_RemovedControllerIds = { "RemovedControllerIds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetControllersRemovedEvent, RemovedControllerIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_RemovedControllerIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_RemovedControllerIds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_PresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_PresetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_RemovedControllers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_RemovedControllers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_RemovedControllerIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewProp_RemovedControllerIds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCPresetControllersRemovedEvent",
		sizeof(FRCPresetControllersRemovedEvent),
		alignof(FRCPresetControllersRemovedEvent),
		Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPresetControllersRemovedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPresetControllersRemovedEvent.InnerSingleton, Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPresetControllersRemovedEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPresetControllersAddedEvent;
class UScriptStruct* FRCPresetControllersAddedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPresetControllersAddedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPresetControllersAddedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCPresetControllersAddedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_RCPresetControllersAddedEvent.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCPresetControllersAddedEvent>()
{
	return FRCPresetControllersAddedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PresetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresetId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPresetControllersAddedEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetControllersAddedEvent, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::NewProp_PresetName_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetControllersAddedEvent, PresetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::NewProp_PresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::NewProp_PresetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::NewProp_PresetId_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetControllersAddedEvent, PresetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::NewProp_PresetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::NewProp_PresetId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetControllersAddedEvent, Description), Z_Construct_UScriptStruct_FRCPresetDescription, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::NewProp_Description_MetaData)) }; // 3496416879
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::NewProp_PresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::NewProp_PresetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::NewProp_Description,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCPresetControllersAddedEvent",
		sizeof(FRCPresetControllersAddedEvent),
		alignof(FRCPresetControllersAddedEvent),
		Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPresetControllersAddedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPresetControllersAddedEvent.InnerSingleton, Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPresetControllersAddedEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPresetControllersModifiedEvent;
class UScriptStruct* FRCPresetControllersModifiedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPresetControllersModifiedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPresetControllersModifiedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCPresetControllersModifiedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_RCPresetControllersModifiedEvent.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCPresetControllersModifiedEvent>()
{
	return FRCPresetControllersModifiedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PresetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresetId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedControllers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedControllers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Event which is triggered whenever a Controller is modified. */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "Event which is triggered whenever a Controller is modified." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPresetControllersModifiedEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/**\n\x09 * Type of the event.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "Type of the event." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetControllersModifiedEvent, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::NewProp_PresetName_MetaData[] = {
		{ "Comment", "/**\n\x09 * Name of the preset which contains the modified controller.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "Name of the preset which contains the modified controller." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetControllersModifiedEvent, PresetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::NewProp_PresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::NewProp_PresetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::NewProp_PresetId_MetaData[] = {
		{ "Comment", "/**\n\x09 * ID of the preset that contains the modified controller.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "ID of the preset that contains the modified controller." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetControllersModifiedEvent, PresetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::NewProp_PresetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::NewProp_PresetId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::NewProp_ModifiedControllers_MetaData[] = {
		{ "Comment", "/**\n\x09 * The controllers that were modified in the last frame.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "The controllers that were modified in the last frame." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::NewProp_ModifiedControllers = { "ModifiedControllers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetControllersModifiedEvent, ModifiedControllers), Z_Construct_UScriptStruct_FRCControllerModifiedDescription, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::NewProp_ModifiedControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::NewProp_ModifiedControllers_MetaData)) }; // 2095707988
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::NewProp_PresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::NewProp_PresetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::NewProp_ModifiedControllers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCPresetControllersModifiedEvent",
		sizeof(FRCPresetControllersModifiedEvent),
		alignof(FRCPresetControllersModifiedEvent),
		Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPresetControllersModifiedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPresetControllersModifiedEvent.InnerSingleton, Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPresetControllersModifiedEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCActorsChangedData;
class UScriptStruct* FRCActorsChangedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCActorsChangedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCActorsChangedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCActorsChangedData, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCActorsChangedData"));
	}
	return Z_Registration_Info_UScriptStruct_RCActorsChangedData.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCActorsChangedData>()
{
	return FRCActorsChangedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCActorsChangedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AddedActors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenamedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenamedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RenamedActors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeletedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeletedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeletedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Data about actors that have changed in the scene.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "Data about actors that have changed in the scene." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCActorsChangedData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewProp_AddedActors_Inner = { "AddedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCActorDescription, METADATA_PARAMS(nullptr, 0) }; // 180742370
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewProp_AddedActors_MetaData[] = {
		{ "Comment", "/** Actors that were added. */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "Actors that were added." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewProp_AddedActors = { "AddedActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCActorsChangedData, AddedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewProp_AddedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewProp_AddedActors_MetaData)) }; // 180742370
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewProp_RenamedActors_Inner = { "RenamedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCActorDescription, METADATA_PARAMS(nullptr, 0) }; // 180742370
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewProp_RenamedActors_MetaData[] = {
		{ "Comment", "/** Actors that were renamed. */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "Actors that were renamed." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewProp_RenamedActors = { "RenamedActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCActorsChangedData, RenamedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewProp_RenamedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewProp_RenamedActors_MetaData)) }; // 180742370
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewProp_DeletedActors_Inner = { "DeletedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCActorDescription, METADATA_PARAMS(nullptr, 0) }; // 180742370
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewProp_DeletedActors_MetaData[] = {
		{ "Comment", "/** Actors that were deleted. */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "Actors that were deleted." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewProp_DeletedActors = { "DeletedActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCActorsChangedData, DeletedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewProp_DeletedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewProp_DeletedActors_MetaData)) }; // 180742370
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewProp_AddedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewProp_AddedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewProp_RenamedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewProp_RenamedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewProp_DeletedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewProp_DeletedActors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCActorsChangedData",
		sizeof(FRCActorsChangedData),
		alignof(FRCActorsChangedData),
		Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCActorsChangedData()
	{
		if (!Z_Registration_Info_UScriptStruct_RCActorsChangedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCActorsChangedData.InnerSingleton, Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCActorsChangedData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCActorsChangedEvent;
class UScriptStruct* FRCActorsChangedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCActorsChangedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCActorsChangedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCActorsChangedEvent, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCActorsChangedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_RCActorsChangedEvent.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCActorsChangedEvent>()
{
	return FRCActorsChangedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Changes_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Changes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Changes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Changes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Event triggered when the list of actors in the current scene (or their names) changes.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "Event triggered when the list of actors in the current scene (or their names) changes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCActorsChangedEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/**\n\x09 * Type of the event.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "Type of the event." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCActorsChangedEvent, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::NewProp_Type_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::NewProp_Changes_ValueProp = { "Changes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRCActorsChangedData, METADATA_PARAMS(nullptr, 0) }; // 1434756420
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::NewProp_Changes_Key_KeyProp = { "Changes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::NewProp_Changes_MetaData[] = {
		{ "Comment", "/**\n\x09 * Map from class name to changes in actors of that type.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "Map from class name to changes in actors of that type." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::NewProp_Changes = { "Changes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCActorsChangedEvent, Changes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::NewProp_Changes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::NewProp_Changes_MetaData)) }; // 1434756420
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::NewProp_Changes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::NewProp_Changes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::NewProp_Changes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCActorsChangedEvent",
		sizeof(FRCActorsChangedEvent),
		alignof(FRCActorsChangedEvent),
		Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCActorsChangedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_RCActorsChangedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCActorsChangedEvent.InnerSingleton, Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCActorsChangedEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCTransactionEndedEvent;
class UScriptStruct* FRCTransactionEndedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCTransactionEndedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCTransactionEndedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCTransactionEndedEvent, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCTransactionEndedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_RCTransactionEndedEvent.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCTransactionEndedEvent>()
{
	return FRCTransactionEndedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TransactionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceNumber_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_SequenceNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Event sent to a client that contributed to a transaction, indicating that the transaction was either cancelled or finalized.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "Event sent to a client that contributed to a transaction, indicating that the transaction was either cancelled or finalized." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCTransactionEndedEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/**\n\x09 * Type of the event.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "Type of the event." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCTransactionEndedEvent, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::NewProp_TransactionId_MetaData[] = {
		{ "Comment", "/**\n\x09 * The client-specific ID of the transaction that was ended.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "The client-specific ID of the transaction that was ended." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::NewProp_TransactionId = { "TransactionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCTransactionEndedEvent, TransactionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::NewProp_TransactionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::NewProp_TransactionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::NewProp_SequenceNumber_MetaData[] = {
		{ "Comment", "/**\n\x09 * The highest sequence number received from the receiving client at the time that the transaction ended.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlResponse.h" },
		{ "ToolTip", "The highest sequence number received from the receiving client at the time that the transaction ended." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::NewProp_SequenceNumber = { "SequenceNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCTransactionEndedEvent, SequenceNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::NewProp_SequenceNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::NewProp_SequenceNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::NewProp_TransactionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::NewProp_SequenceNumber,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCTransactionEndedEvent",
		sizeof(FRCTransactionEndedEvent),
		alignof(FRCTransactionEndedEvent),
		Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCTransactionEndedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_RCTransactionEndedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCTransactionEndedEvent.InnerSingleton, Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCTransactionEndedEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlResponse_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlResponse_h_Statics::ScriptStructInfo[] = {
		{ FAPIInfoResponse::StaticStruct, Z_Construct_UScriptStruct_FAPIInfoResponse_Statics::NewStructOps, TEXT("APIInfoResponse"), &Z_Registration_Info_UScriptStruct_APIInfoResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAPIInfoResponse), 1984392169U) },
		{ FListPresetsResponse::StaticStruct, Z_Construct_UScriptStruct_FListPresetsResponse_Statics::NewStructOps, TEXT("ListPresetsResponse"), &Z_Registration_Info_UScriptStruct_ListPresetsResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FListPresetsResponse), 2682454261U) },
		{ FGetPresetResponse::StaticStruct, Z_Construct_UScriptStruct_FGetPresetResponse_Statics::NewStructOps, TEXT("GetPresetResponse"), &Z_Registration_Info_UScriptStruct_GetPresetResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetPresetResponse), 3761961767U) },
		{ FCheckPassphraseResponse::StaticStruct, Z_Construct_UScriptStruct_FCheckPassphraseResponse_Statics::NewStructOps, TEXT("CheckPassphraseResponse"), &Z_Registration_Info_UScriptStruct_CheckPassphraseResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCheckPassphraseResponse), 1418687988U) },
		{ FDescribeObjectResponse::StaticStruct, Z_Construct_UScriptStruct_FDescribeObjectResponse_Statics::NewStructOps, TEXT("DescribeObjectResponse"), &Z_Registration_Info_UScriptStruct_DescribeObjectResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDescribeObjectResponse), 2691911595U) },
		{ FSearchAssetResponse::StaticStruct, Z_Construct_UScriptStruct_FSearchAssetResponse_Statics::NewStructOps, TEXT("SearchAssetResponse"), &Z_Registration_Info_UScriptStruct_SearchAssetResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSearchAssetResponse), 545360729U) },
		{ FSearchActorResponse::StaticStruct, Z_Construct_UScriptStruct_FSearchActorResponse_Statics::NewStructOps, TEXT("SearchActorResponse"), &Z_Registration_Info_UScriptStruct_SearchActorResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSearchActorResponse), 1591975797U) },
		{ FGetMetadataFieldResponse::StaticStruct, Z_Construct_UScriptStruct_FGetMetadataFieldResponse_Statics::NewStructOps, TEXT("GetMetadataFieldResponse"), &Z_Registration_Info_UScriptStruct_GetMetadataFieldResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetMetadataFieldResponse), 1943772723U) },
		{ FGetMetadataResponse::StaticStruct, Z_Construct_UScriptStruct_FGetMetadataResponse_Statics::NewStructOps, TEXT("GetMetadataResponse"), &Z_Registration_Info_UScriptStruct_GetMetadataResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetMetadataResponse), 2798847139U) },
		{ FSetEntityLabelResponse::StaticStruct, Z_Construct_UScriptStruct_FSetEntityLabelResponse_Statics::NewStructOps, TEXT("SetEntityLabelResponse"), &Z_Registration_Info_UScriptStruct_SetEntityLabelResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSetEntityLabelResponse), 3193694625U) },
		{ FRCPresetFieldsRenamedEvent::StaticStruct, Z_Construct_UScriptStruct_FRCPresetFieldsRenamedEvent_Statics::NewStructOps, TEXT("RCPresetFieldsRenamedEvent"), &Z_Registration_Info_UScriptStruct_RCPresetFieldsRenamedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPresetFieldsRenamedEvent), 143240969U) },
		{ FRCPresetMetadataModified::StaticStruct, Z_Construct_UScriptStruct_FRCPresetMetadataModified_Statics::NewStructOps, TEXT("RCPresetMetadataModified"), &Z_Registration_Info_UScriptStruct_RCPresetMetadataModified, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPresetMetadataModified), 237903083U) },
		{ FRCPresetLayoutModified::StaticStruct, Z_Construct_UScriptStruct_FRCPresetLayoutModified_Statics::NewStructOps, TEXT("RCPresetLayoutModified"), &Z_Registration_Info_UScriptStruct_RCPresetLayoutModified, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPresetLayoutModified), 2018981819U) },
		{ FRCPresetFieldsRemovedEvent::StaticStruct, Z_Construct_UScriptStruct_FRCPresetFieldsRemovedEvent_Statics::NewStructOps, TEXT("RCPresetFieldsRemovedEvent"), &Z_Registration_Info_UScriptStruct_RCPresetFieldsRemovedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPresetFieldsRemovedEvent), 1072459596U) },
		{ FRCPresetFieldsAddedEvent::StaticStruct, Z_Construct_UScriptStruct_FRCPresetFieldsAddedEvent_Statics::NewStructOps, TEXT("RCPresetFieldsAddedEvent"), &Z_Registration_Info_UScriptStruct_RCPresetFieldsAddedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPresetFieldsAddedEvent), 3763158103U) },
		{ FRCPresetEntitiesModifiedEvent::StaticStruct, Z_Construct_UScriptStruct_FRCPresetEntitiesModifiedEvent_Statics::NewStructOps, TEXT("RCPresetEntitiesModifiedEvent"), &Z_Registration_Info_UScriptStruct_RCPresetEntitiesModifiedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPresetEntitiesModifiedEvent), 2018138036U) },
		{ FRCPresetControllersRenamedEvent::StaticStruct, Z_Construct_UScriptStruct_FRCPresetControllersRenamedEvent_Statics::NewStructOps, TEXT("RCPresetControllersRenamedEvent"), &Z_Registration_Info_UScriptStruct_RCPresetControllersRenamedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPresetControllersRenamedEvent), 2455509339U) },
		{ FRCPresetControllersRemovedEvent::StaticStruct, Z_Construct_UScriptStruct_FRCPresetControllersRemovedEvent_Statics::NewStructOps, TEXT("RCPresetControllersRemovedEvent"), &Z_Registration_Info_UScriptStruct_RCPresetControllersRemovedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPresetControllersRemovedEvent), 4062662909U) },
		{ FRCPresetControllersAddedEvent::StaticStruct, Z_Construct_UScriptStruct_FRCPresetControllersAddedEvent_Statics::NewStructOps, TEXT("RCPresetControllersAddedEvent"), &Z_Registration_Info_UScriptStruct_RCPresetControllersAddedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPresetControllersAddedEvent), 2066625252U) },
		{ FRCPresetControllersModifiedEvent::StaticStruct, Z_Construct_UScriptStruct_FRCPresetControllersModifiedEvent_Statics::NewStructOps, TEXT("RCPresetControllersModifiedEvent"), &Z_Registration_Info_UScriptStruct_RCPresetControllersModifiedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPresetControllersModifiedEvent), 4050817301U) },
		{ FRCActorsChangedData::StaticStruct, Z_Construct_UScriptStruct_FRCActorsChangedData_Statics::NewStructOps, TEXT("RCActorsChangedData"), &Z_Registration_Info_UScriptStruct_RCActorsChangedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCActorsChangedData), 1434756420U) },
		{ FRCActorsChangedEvent::StaticStruct, Z_Construct_UScriptStruct_FRCActorsChangedEvent_Statics::NewStructOps, TEXT("RCActorsChangedEvent"), &Z_Registration_Info_UScriptStruct_RCActorsChangedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCActorsChangedEvent), 1008108592U) },
		{ FRCTransactionEndedEvent::StaticStruct, Z_Construct_UScriptStruct_FRCTransactionEndedEvent_Statics::NewStructOps, TEXT("RCTransactionEndedEvent"), &Z_Registration_Info_UScriptStruct_RCTransactionEndedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCTransactionEndedEvent), 1731383909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlResponse_h_2372648137(TEXT("/Script/WebRemoteControl"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlResponse_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlResponse_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
