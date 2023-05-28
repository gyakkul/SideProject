// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DMXPixelMappingScreenComponent.h"
#include "DMXProtocolTypes.h"
#include "IO/DMXOutputPortReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingScreenComponent() {}
// Cross Module References
	DMXPIXELMAPPINGCORE_API UEnum* Z_Construct_UEnum_DMXPixelMappingCore_EDMXCellFormat();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingScreenComponent();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingScreenComponent_NoRegister();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOutputPortReference();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXProtocolName();
	DMXRUNTIME_API UEnum* Z_Construct_UEnum_DMXRuntime_EDMXPixelMappingDistribution();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRuntime();
// End Cross Module References
	void UDMXPixelMappingScreenComponent::StaticRegisterNativesUDMXPixelMappingScreenComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingScreenComponent);
	UClass* Z_Construct_UClass_UDMXPixelMappingScreenComponent_NoRegister()
	{
		return UDMXPixelMappingScreenComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSendToAllOutputPorts_MetaData[];
#endif
		static void NewProp_bSendToAllOutputPorts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendToAllOutputPorts;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputPortReferences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPortReferences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputPortReferences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumXCells_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumXCells;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumYCells_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumYCells;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProtocolName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProtocolName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalUniverse_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUniverse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartAddress_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartAddress;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PixelFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PixelFormat;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Distribution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distribution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Distribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAlphaChannel_MetaData[];
#endif
		static void NewProp_bIgnoreAlphaChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAlphaChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlphaIntensity;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowAddresses_MetaData[];
#endif
		static void NewProp_bShowAddresses_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAddresses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowUniverse_MetaData[];
#endif
		static void NewProp_bShowUniverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowUniverse;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * DMX Screen(Grid) rendering component\n */" },
		{ "IncludePath", "Components/DMXPixelMappingScreenComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingScreenComponent.h" },
		{ "ToolTip", "DMX Screen(Grid) rendering component" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bSendToAllOutputPorts_MetaData[] = {
		{ "Category", "Common Settings" },
		{ "Comment", "/** If true, outputs to all DMX Output Ports */" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingScreenComponent.h" },
		{ "ToolTip", "If true, outputs to all DMX Output Ports" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bSendToAllOutputPorts_SetBit(void* Obj)
	{
		((UDMXPixelMappingScreenComponent*)Obj)->bSendToAllOutputPorts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bSendToAllOutputPorts = { "bSendToAllOutputPorts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingScreenComponent), &Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bSendToAllOutputPorts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bSendToAllOutputPorts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bSendToAllOutputPorts_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_OutputPortReferences_Inner = { "OutputPortReferences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXOutputPortReference, METADATA_PARAMS(nullptr, 0) }; // 3396692900
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_OutputPortReferences_MetaData[] = {
		{ "Category", "Common Settings" },
		{ "Comment", "/** The port this render component outputs to */" },
		{ "DisplayName", "DMX Output Ports" },
		{ "EditCondition", "!bSendToAllOutputPorts" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingScreenComponent.h" },
		{ "ToolTip", "The port this render component outputs to" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_OutputPortReferences = { "OutputPortReferences", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingScreenComponent, OutputPortReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_OutputPortReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_OutputPortReferences_MetaData)) }; // 3396692900
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_NumXCells_MetaData[] = {
		{ "Category", "Mapping Settings" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "DisplayName", "X Cells" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingScreenComponent.h" },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_NumXCells = { "NumXCells", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingScreenComponent, NumXCells), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_NumXCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_NumXCells_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_NumYCells_MetaData[] = {
		{ "Category", "Mapping Settings" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Y Cells" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingScreenComponent.h" },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_NumYCells = { "NumYCells", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingScreenComponent, NumYCells), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_NumYCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_NumYCells_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_ProtocolName_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Output Ports instead." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingScreenComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_ProtocolName = { "ProtocolName", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingScreenComponent, ProtocolName_DEPRECATED), Z_Construct_UScriptStruct_FDMXProtocolName, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_ProtocolName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_ProtocolName_MetaData)) }; // 127357705
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_LocalUniverse_MetaData[] = {
		{ "Category", "Patch Settings" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "1" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingScreenComponent.h" },
		{ "UIMax", "100000" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_LocalUniverse = { "LocalUniverse", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingScreenComponent, LocalUniverse), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_LocalUniverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_LocalUniverse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_StartAddress_MetaData[] = {
		{ "Category", "Patch Settings" },
		{ "ClampMax", "512" },
		{ "ClampMin", "1" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingScreenComponent.h" },
		{ "UIMax", "512" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_StartAddress = { "StartAddress", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingScreenComponent, StartAddress), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_StartAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_StartAddress_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_PixelFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_PixelFormat_MetaData[] = {
		{ "Category", "Patch Settings" },
		{ "DisplayName", "Color Space" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingScreenComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_PixelFormat = { "PixelFormat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingScreenComponent, PixelFormat), Z_Construct_UEnum_DMXPixelMappingCore_EDMXCellFormat, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_PixelFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_PixelFormat_MetaData)) }; // 2503594190
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_Distribution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_Distribution_MetaData[] = {
		{ "Category", "Patch Settings" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingScreenComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_Distribution = { "Distribution", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingScreenComponent, Distribution), Z_Construct_UEnum_DMXRuntime_EDMXPixelMappingDistribution, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_Distribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_Distribution_MetaData)) }; // 1209359822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bIgnoreAlphaChannel_MetaData[] = {
		{ "Category", "Patch Settings" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingScreenComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bIgnoreAlphaChannel_SetBit(void* Obj)
	{
		((UDMXPixelMappingScreenComponent*)Obj)->bIgnoreAlphaChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bIgnoreAlphaChannel = { "bIgnoreAlphaChannel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingScreenComponent), &Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bIgnoreAlphaChannel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bIgnoreAlphaChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bIgnoreAlphaChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_PixelIntensity_MetaData[] = {
		{ "Category", "Patch Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingScreenComponent.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_PixelIntensity = { "PixelIntensity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingScreenComponent, PixelIntensity), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_PixelIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_PixelIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_AlphaIntensity_MetaData[] = {
		{ "Category", "Patch Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingScreenComponent.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_AlphaIntensity = { "AlphaIntensity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingScreenComponent, AlphaIntensity), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_AlphaIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_AlphaIntensity_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bShowAddresses_MetaData[] = {
		{ "Category", "Patch Settings" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingScreenComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bShowAddresses_SetBit(void* Obj)
	{
		((UDMXPixelMappingScreenComponent*)Obj)->bShowAddresses = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bShowAddresses = { "bShowAddresses", nullptr, (EPropertyFlags)0x0010000800000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingScreenComponent), &Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bShowAddresses_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bShowAddresses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bShowAddresses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bShowUniverse_MetaData[] = {
		{ "Category", "Patch Settings" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingScreenComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bShowUniverse_SetBit(void* Obj)
	{
		((UDMXPixelMappingScreenComponent*)Obj)->bShowUniverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bShowUniverse = { "bShowUniverse", nullptr, (EPropertyFlags)0x0010000800000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingScreenComponent), &Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bShowUniverse_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bShowUniverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bShowUniverse_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bSendToAllOutputPorts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_OutputPortReferences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_OutputPortReferences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_NumXCells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_NumYCells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_ProtocolName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_LocalUniverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_StartAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_PixelFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_PixelFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_Distribution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_Distribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bIgnoreAlphaChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_PixelIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_AlphaIntensity,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bShowAddresses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::NewProp_bShowUniverse,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingScreenComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::ClassParams = {
		&UDMXPixelMappingScreenComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXPixelMappingScreenComponent()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingScreenComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingScreenComponent.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingScreenComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingScreenComponent.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UClass* StaticClass<UDMXPixelMappingScreenComponent>()
	{
		return UDMXPixelMappingScreenComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingScreenComponent);
	UDMXPixelMappingScreenComponent::~UDMXPixelMappingScreenComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingScreenComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingScreenComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingScreenComponent, UDMXPixelMappingScreenComponent::StaticClass, TEXT("UDMXPixelMappingScreenComponent"), &Z_Registration_Info_UClass_UDMXPixelMappingScreenComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingScreenComponent), 3069545550U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingScreenComponent_h_1761064368(TEXT("/Script/DMXPixelMappingRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingScreenComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingScreenComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
