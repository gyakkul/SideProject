// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteControlProtocolDMX.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlProtocolDMX() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DMXPROTOCOL_API UEnum* Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlProtocolEntity();
	REMOTECONTROLPROTOCOLDMX_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity();
	REMOTECONTROLPROTOCOLDMX_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting();
	UPackage* Z_Construct_UPackage__Script_RemoteControlProtocolDMX();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlDMXProtocolEntityExtraSetting;
class UScriptStruct* FRemoteControlDMXProtocolEntityExtraSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlDMXProtocolEntityExtraSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlDMXProtocolEntityExtraSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting, (UObject*)Z_Construct_UPackage__Script_RemoteControlProtocolDMX(), TEXT("RemoteControlDMXProtocolEntityExtraSetting"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlDMXProtocolEntityExtraSetting.OuterSingleton;
}
template<> REMOTECONTROLPROTOCOLDMX_API UScriptStruct* StaticStruct<FRemoteControlDMXProtocolEntityExtraSetting>()
{
	return FRemoteControlDMXProtocolEntityExtraSetting::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Universe_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Universe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartingChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLSB_MetaData[];
#endif
		static void NewProp_bUseLSB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLSB;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultInputPort_MetaData[];
#endif
		static void NewProp_bUseDefaultInputPort_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultInputPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPortId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputPortId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Using as an inner struct for details customization.\n * Useful to have type customization for the struct\n */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolDMX.h" },
		{ "ToolTip", "Using as an inner struct for details customization.\nUseful to have type customization for the struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlDMXProtocolEntityExtraSetting>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_Universe_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ClampMin", "0" },
		{ "Comment", "/** DMX universe id */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolDMX.h" },
		{ "ToolTip", "DMX universe id" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_Universe = { "Universe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlDMXProtocolEntityExtraSetting, Universe), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_Universe_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_Universe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_StartingChannel_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ClampMax", "512" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Starting channel */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolDMX.h" },
		{ "ToolTip", "Starting channel" },
		{ "UIMax", "512" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_StartingChannel = { "StartingChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlDMXProtocolEntityExtraSetting, StartingChannel), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_StartingChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_StartingChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_bUseLSB_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "/**\n\x09 * Least Significant Byte mode makes the individual bytes (channels) of the function be\n\x09 * interpreted with the first bytes being the lowest part of the number.\n\x09 * Most Fixtures use MSB (Most Significant Byte).\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolDMX.h" },
		{ "ToolTip", "Least Significant Byte mode makes the individual bytes (channels) of the function be\ninterpreted with the first bytes being the lowest part of the number.\nMost Fixtures use MSB (Most Significant Byte)." },
	};
#endif
	void Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_bUseLSB_SetBit(void* Obj)
	{
		((FRemoteControlDMXProtocolEntityExtraSetting*)Obj)->bUseLSB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_bUseLSB = { "bUseLSB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRemoteControlDMXProtocolEntityExtraSetting), &Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_bUseLSB_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_bUseLSB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_bUseLSB_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "/** Defines the used number of channels (bytes) */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolDMX.h" },
		{ "ToolTip", "Defines the used number of channels (bytes)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlDMXProtocolEntityExtraSetting, DataType), Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_DataType_MetaData)) }; // 455975797
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_bUseDefaultInputPort_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "/** If set to true, uses the default input port set in Remote Control Protocol project settings */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolDMX.h" },
		{ "ToolTip", "If set to true, uses the default input port set in Remote Control Protocol project settings" },
	};
#endif
	void Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_bUseDefaultInputPort_SetBit(void* Obj)
	{
		((FRemoteControlDMXProtocolEntityExtraSetting*)Obj)->bUseDefaultInputPort = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_bUseDefaultInputPort = { "bUseDefaultInputPort", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRemoteControlDMXProtocolEntityExtraSetting), &Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_bUseDefaultInputPort_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_bUseDefaultInputPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_bUseDefaultInputPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_InputPortId_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "/** Reference of an input DMX port id */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolDMX.h" },
		{ "ToolTip", "Reference of an input DMX port id" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_InputPortId = { "InputPortId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlDMXProtocolEntityExtraSetting, InputPortId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_InputPortId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_InputPortId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_Universe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_StartingChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_bUseLSB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_DataType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_bUseDefaultInputPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewProp_InputPortId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlProtocolDMX,
		nullptr,
		&NewStructOps,
		"RemoteControlDMXProtocolEntityExtraSetting",
		sizeof(FRemoteControlDMXProtocolEntityExtraSetting),
		alignof(FRemoteControlDMXProtocolEntityExtraSetting),
		Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlDMXProtocolEntityExtraSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlDMXProtocolEntityExtraSetting.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlDMXProtocolEntityExtraSetting.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRemoteControlDMXProtocolEntity>() == std::is_polymorphic<FRemoteControlProtocolEntity>(), "USTRUCT FRemoteControlDMXProtocolEntity cannot be polymorphic unless super FRemoteControlProtocolEntity is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlDMXProtocolEntity;
class UScriptStruct* FRemoteControlDMXProtocolEntity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlDMXProtocolEntity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlDMXProtocolEntity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity, (UObject*)Z_Construct_UPackage__Script_RemoteControlProtocolDMX(), TEXT("RemoteControlDMXProtocolEntity"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlDMXProtocolEntity.OuterSingleton;
}
template<> REMOTECONTROLPROTOCOLDMX_API UScriptStruct* StaticStruct<FRemoteControlDMXProtocolEntity>()
{
	return FRemoteControlDMXProtocolEntity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraSetting_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeInputTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_RangeInputTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Universe_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Universe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLSB_MetaData[];
#endif
		static void NewProp_bUseLSB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLSB;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultInputPort_MetaData[];
#endif
		static void NewProp_bUseDefaultInputPort_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultInputPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPortId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputPortId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * DMX protocol entity for remote control binding\n */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolDMX.h" },
		{ "ToolTip", "DMX protocol entity for remote control binding" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlDMXProtocolEntity>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_ExtraSetting_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "/** Extra protocol settings. Primary using for customization */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolDMX.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Extra protocol settings. Primary using for customization" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_ExtraSetting = { "ExtraSetting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlDMXProtocolEntity, ExtraSetting), Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_ExtraSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_ExtraSetting_MetaData)) }; // 877404748
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_RangeInputTemplate_MetaData[] = {
		{ "Comment", "/** DMX range input property template, used for binding. */" },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolDMX.h" },
		{ "ToolTip", "DMX range input property template, used for binding." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_RangeInputTemplate = { "RangeInputTemplate", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlDMXProtocolEntity, RangeInputTemplate), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_RangeInputTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_RangeInputTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_Universe_MetaData[] = {
		{ "Comment", "// DEPRECATED MEMBERS\n// Deprecated 5.0\n" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This Property is deprecated and will be removed in a future release. It was moved to the ExtraSetting struct member so the property can be customized." },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolDMX.h" },
		{ "ToolTip", "DEPRECATED MEMBERS\nDeprecated 5.0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_Universe = { "Universe", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlDMXProtocolEntity, Universe_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_Universe_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_Universe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_bUseLSB_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This Property is deprecated and will be removed in a future release. It was moved to the ExtraSetting struct member so the property can be customized." },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolDMX.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_bUseLSB_SetBit(void* Obj)
	{
		((FRemoteControlDMXProtocolEntity*)Obj)->bUseLSB_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_bUseLSB = { "bUseLSB", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRemoteControlDMXProtocolEntity), &Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_bUseLSB_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_bUseLSB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_bUseLSB_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_DataType_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This Property is deprecated and will be removed in a future release. It was moved to the ExtraSetting struct member so the property can be customized." },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolDMX.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlDMXProtocolEntity, DataType_DEPRECATED), Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_DataType_MetaData)) }; // 455975797
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_bUseDefaultInputPort_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This Property is deprecated and will be removed in a future release. It was moved to the ExtraSetting struct member so the property can be customized." },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolDMX.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_bUseDefaultInputPort_SetBit(void* Obj)
	{
		((FRemoteControlDMXProtocolEntity*)Obj)->bUseDefaultInputPort_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_bUseDefaultInputPort = { "bUseDefaultInputPort", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRemoteControlDMXProtocolEntity), &Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_bUseDefaultInputPort_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_bUseDefaultInputPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_bUseDefaultInputPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_InputPortId_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This Property is deprecated and will be removed in a future release. It was moved to the ExtraSetting struct member so the property can be customized." },
		{ "ModuleRelativePath", "Public/RemoteControlProtocolDMX.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_InputPortId = { "InputPortId", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlDMXProtocolEntity, InputPortId_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_InputPortId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_InputPortId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_ExtraSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_RangeInputTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_Universe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_bUseLSB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_DataType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_bUseDefaultInputPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewProp_InputPortId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlProtocolDMX,
		Z_Construct_UScriptStruct_FRemoteControlProtocolEntity,
		&NewStructOps,
		"RemoteControlDMXProtocolEntity",
		sizeof(FRemoteControlDMXProtocolEntity),
		alignof(FRemoteControlDMXProtocolEntity),
		Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlDMXProtocolEntity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlDMXProtocolEntity.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlDMXProtocolEntity.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Public_RemoteControlProtocolDMX_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Public_RemoteControlProtocolDMX_h_Statics::ScriptStructInfo[] = {
		{ FRemoteControlDMXProtocolEntityExtraSetting::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntityExtraSetting_Statics::NewStructOps, TEXT("RemoteControlDMXProtocolEntityExtraSetting"), &Z_Registration_Info_UScriptStruct_RemoteControlDMXProtocolEntityExtraSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlDMXProtocolEntityExtraSetting), 877404748U) },
		{ FRemoteControlDMXProtocolEntity::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlDMXProtocolEntity_Statics::NewStructOps, TEXT("RemoteControlDMXProtocolEntity"), &Z_Registration_Info_UScriptStruct_RemoteControlDMXProtocolEntity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlDMXProtocolEntity), 916037401U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Public_RemoteControlProtocolDMX_h_3402807838(TEXT("/Script/RemoteControlProtocolDMX"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Public_RemoteControlProtocolDMX_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlProtocolDMX_Source_RemoteControlProtocolDMX_Public_RemoteControlProtocolDMX_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
