// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXProtocolSettings.h"
#include "DMXAttribute.h"
#include "IO/DMXInputPortConfig.h"
#include "IO/DMXOutputPortConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXProtocolSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXPROTOCOL_API UClass* Z_Construct_UClass_UDMXProtocolSettings();
	DMXPROTOCOL_API UClass* Z_Construct_UClass_UDMXProtocolSettings_NoRegister();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXAttribute();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXInputPortConfig();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOutputPortConfig();
	UPackage* Z_Construct_UPackage__Script_DMXProtocol();
// End Cross Module References
	void UDMXProtocolSettings::StaticRegisterNativesUDMXProtocolSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXProtocolSettings);
	UClass* Z_Construct_UClass_UDMXProtocolSettings_NoRegister()
	{
		return UDMXProtocolSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDMXProtocolSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputPortConfigs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPortConfigs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputPortConfigs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputPortConfigs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPortConfigs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputPortConfigs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendingRefreshRate_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SendingRefreshRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReceivingRefreshRate_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ReceivingRefreshRate;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FixtureCategories_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixtureCategories_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_FixtureCategories;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Attributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultSendDMXEnabled_MetaData[];
#endif
		static void NewProp_bDefaultSendDMXEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultSendDMXEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultReceiveDMXEnabled_MetaData[];
#endif
		static void NewProp_bDefaultReceiveDMXEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultReceiveDMXEnabled;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllFixturePatchesReceiveDMXInEditor_MetaData[];
#endif
		static void NewProp_bAllFixturePatchesReceiveDMXInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllFixturePatchesReceiveDMXInEditor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceIPAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InterfaceIPAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalArtNetUniverseOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalArtNetUniverseOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSACNUniverseOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalSACNUniverseOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXProtocolSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXProtocol,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXProtocolSettings_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DMX|Communication Settings" },
		{ "Comment", "/**  \n * DMX Project Settings. \n * \n * Note: To handle Port changes in code please refer to FDMXPortManager.\n */" },
		{ "DisplayName", "DMX" },
		{ "IncludePath", "DMXProtocolSettings.h" },
		{ "ModuleRelativePath", "Public/DMXProtocolSettings.h" },
		{ "ToolTip", "DMX Project Settings.\n\nNote: To handle Port changes in code please refer to FDMXPortManager." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_InputPortConfigs_Inner = { "InputPortConfigs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXInputPortConfig, METADATA_PARAMS(nullptr, 0) }; // 1689215049
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_InputPortConfigs_MetaData[] = {
		{ "Category", "DMX|Communication Settings" },
		{ "Comment", "/** DMX Input Port Configs */" },
		{ "DisplayName", "Input Ports" },
		{ "ModuleRelativePath", "Public/DMXProtocolSettings.h" },
		{ "ToolTip", "DMX Input Port Configs" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_InputPortConfigs = { "InputPortConfigs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXProtocolSettings, InputPortConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_InputPortConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_InputPortConfigs_MetaData)) }; // 1689215049
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_OutputPortConfigs_Inner = { "OutputPortConfigs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXOutputPortConfig, METADATA_PARAMS(nullptr, 0) }; // 70472032
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_OutputPortConfigs_MetaData[] = {
		{ "Category", "DMX|Communication Settings" },
		{ "Comment", "/** DMX Output Port Configs */" },
		{ "DisplayName", "Output Ports" },
		{ "ModuleRelativePath", "Public/DMXProtocolSettings.h" },
		{ "ToolTip", "DMX Output Port Configs" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_OutputPortConfigs = { "OutputPortConfigs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXProtocolSettings, OutputPortConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_OutputPortConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_OutputPortConfigs_MetaData)) }; // 70472032
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_SendingRefreshRate_MetaData[] = {
		{ "Category", "DMX|Communication Settings" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Rate at which DMX is sent, in Hz from 1 to 1000. 44Hz is recommended. */" },
		{ "DisplayName", "DMX Send Rate" },
		{ "ModuleRelativePath", "Public/DMXProtocolSettings.h" },
		{ "ToolTip", "Rate at which DMX is sent, in Hz from 1 to 1000. 44Hz is recommended." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_SendingRefreshRate = { "SendingRefreshRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXProtocolSettings, SendingRefreshRate), METADATA_PARAMS(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_SendingRefreshRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_SendingRefreshRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_ReceivingRefreshRate_MetaData[] = {
		{ "Comment", "/** Rate at which DMX is received, in Hz from 1 to 1000. 44Hz is recommended */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "ReceivingRefreshRate is deprecated without replacement. It would prevent from precise timestamps on the receivers." },
		{ "ModuleRelativePath", "Public/DMXProtocolSettings.h" },
		{ "ToolTip", "Rate at which DMX is received, in Hz from 1 to 1000. 44Hz is recommended" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_ReceivingRefreshRate = { "ReceivingRefreshRate", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXProtocolSettings, ReceivingRefreshRate_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_ReceivingRefreshRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_ReceivingRefreshRate_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_FixtureCategories_ElementProp = { "FixtureCategories", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_FixtureCategories_MetaData[] = {
		{ "Category", "DMX|Fixture Settings" },
		{ "Comment", "/** Fixture Categories ENum */" },
		{ "DisplayName", "Fixture Categories" },
		{ "ModuleRelativePath", "Public/DMXProtocolSettings.h" },
		{ "ToolTip", "Fixture Categories ENum" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_FixtureCategories = { "FixtureCategories", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXProtocolSettings, FixtureCategories), METADATA_PARAMS(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_FixtureCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_FixtureCategories_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_Attributes_ElementProp = { "Attributes", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttribute, METADATA_PARAMS(nullptr, 0) }; // 1330867488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_Attributes_MetaData[] = {
		{ "Category", "DMX|Fixture Settings" },
		{ "Comment", "/** Common names to map Fixture Functions to and access them easily on Blueprints */" },
		{ "DisplayName", "Fixture Attributes" },
		{ "ModuleRelativePath", "Public/DMXProtocolSettings.h" },
		{ "ToolTip", "Common names to map Fixture Functions to and access them easily on Blueprints" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FDMXAttribute>::Value, "The structure 'FDMXAttribute' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXProtocolSettings, Attributes), METADATA_PARAMS(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_Attributes_MetaData)) }; // 1330867488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_bDefaultSendDMXEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DMX|Communication Settings" },
		{ "Comment", "/** Whether DMX is sent to the network. Recalled whenever editor or game starts.  */" },
		{ "DisplayName", "Send DMX by default" },
		{ "ModuleRelativePath", "Public/DMXProtocolSettings.h" },
		{ "ToolTip", "Whether DMX is sent to the network. Recalled whenever editor or game starts." },
	};
#endif
	void Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_bDefaultSendDMXEnabled_SetBit(void* Obj)
	{
		((UDMXProtocolSettings*)Obj)->bDefaultSendDMXEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_bDefaultSendDMXEnabled = { "bDefaultSendDMXEnabled", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXProtocolSettings), &Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_bDefaultSendDMXEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_bDefaultSendDMXEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_bDefaultSendDMXEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_bDefaultReceiveDMXEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DMX|Communication Settings" },
		{ "Comment", "/** Whether DMX is received from the network. Recalled whenever editor or game starts. */" },
		{ "DisplayName", "Receive DMX by default" },
		{ "ModuleRelativePath", "Public/DMXProtocolSettings.h" },
		{ "ToolTip", "Whether DMX is received from the network. Recalled whenever editor or game starts." },
	};
#endif
	void Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_bDefaultReceiveDMXEnabled_SetBit(void* Obj)
	{
		((UDMXProtocolSettings*)Obj)->bDefaultReceiveDMXEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_bDefaultReceiveDMXEnabled = { "bDefaultReceiveDMXEnabled", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXProtocolSettings), &Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_bDefaultReceiveDMXEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_bDefaultReceiveDMXEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_bDefaultReceiveDMXEnabled_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_bAllFixturePatchesReceiveDMXInEditor_MetaData[] = {
		{ "Category", "DMX|Communication Settings" },
		{ "Comment", "/** If true, all fixture patches receive DMX in Editor. This overrides the fixture patches 'Receive DMX In Editor' property. */" },
		{ "DisplayName", "All Fixture Patches receive DMX in Editor" },
		{ "ModuleRelativePath", "Public/DMXProtocolSettings.h" },
		{ "ToolTip", "If true, all fixture patches receive DMX in Editor. This overrides the fixture patches 'Receive DMX In Editor' property." },
	};
#endif
	void Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_bAllFixturePatchesReceiveDMXInEditor_SetBit(void* Obj)
	{
		((UDMXProtocolSettings*)Obj)->bAllFixturePatchesReceiveDMXInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_bAllFixturePatchesReceiveDMXInEditor = { "bAllFixturePatchesReceiveDMXInEditor", nullptr, (EPropertyFlags)0x0040000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXProtocolSettings), &Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_bAllFixturePatchesReceiveDMXInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_bAllFixturePatchesReceiveDMXInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_bAllFixturePatchesReceiveDMXInEditor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_InterfaceIPAddress_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "InterfaceIPAddress is deprecated. Use Ports instead." },
		{ "ModuleRelativePath", "Public/DMXProtocolSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_InterfaceIPAddress = { "InterfaceIPAddress", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXProtocolSettings, InterfaceIPAddress_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_InterfaceIPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_InterfaceIPAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_GlobalArtNetUniverseOffset_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "GlobalArtNetUniverseOffset is deprecated. Use Ports instead." },
		{ "ModuleRelativePath", "Public/DMXProtocolSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_GlobalArtNetUniverseOffset = { "GlobalArtNetUniverseOffset", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXProtocolSettings, GlobalArtNetUniverseOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_GlobalArtNetUniverseOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_GlobalArtNetUniverseOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_GlobalSACNUniverseOffset_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "GlobalSACNUniverseOffset is deprecated. Use Ports instead." },
		{ "ModuleRelativePath", "Public/DMXProtocolSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_GlobalSACNUniverseOffset = { "GlobalSACNUniverseOffset", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXProtocolSettings, GlobalSACNUniverseOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_GlobalSACNUniverseOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_GlobalSACNUniverseOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXProtocolSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_InputPortConfigs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_InputPortConfigs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_OutputPortConfigs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_OutputPortConfigs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_SendingRefreshRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_ReceivingRefreshRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_FixtureCategories_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_FixtureCategories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_Attributes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_Attributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_bDefaultSendDMXEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_bDefaultReceiveDMXEnabled,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_bAllFixturePatchesReceiveDMXInEditor,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_InterfaceIPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_GlobalArtNetUniverseOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXProtocolSettings_Statics::NewProp_GlobalSACNUniverseOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXProtocolSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXProtocolSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXProtocolSettings_Statics::ClassParams = {
		&UDMXProtocolSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXProtocolSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXProtocolSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXProtocolSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXProtocolSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXProtocolSettings()
	{
		if (!Z_Registration_Info_UClass_UDMXProtocolSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXProtocolSettings.OuterSingleton, Z_Construct_UClass_UDMXProtocolSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXProtocolSettings.OuterSingleton;
	}
	template<> DMXPROTOCOL_API UClass* StaticClass<UDMXProtocolSettings>()
	{
		return UDMXProtocolSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXProtocolSettings);
	UDMXProtocolSettings::~UDMXProtocolSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXProtocolSettings, UDMXProtocolSettings::StaticClass, TEXT("UDMXProtocolSettings"), &Z_Registration_Info_UClass_UDMXProtocolSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXProtocolSettings), 7536703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolSettings_h_1173946812(TEXT("/Script/DMXProtocol"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
