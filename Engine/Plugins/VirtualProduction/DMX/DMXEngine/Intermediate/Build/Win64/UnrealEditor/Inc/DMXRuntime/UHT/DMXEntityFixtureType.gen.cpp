// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Library/DMXEntityFixtureType.h"
#include "DMXAttribute.h"
#include "DMXProtocolTypes.h"
#include "Library/DMXEntityReference.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXEntityFixtureType() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	DMXPROTOCOL_API UEnum* Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXAttributeName();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXFixtureCategory();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntity();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityFixtureType();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityFixtureType_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImport_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXLibrary_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXModulator_NoRegister();
	DMXRUNTIME_API UEnum* Z_Construct_UEnum_DMXRuntime_EDMXPixelMappingDistribution();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXCell();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXFixtureCellAttribute();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXFixtureFunction();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXFixtureMatrix();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXFixtureMode();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDMXPixelMappingDistribution;
	static UEnum* EDMXPixelMappingDistribution_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDMXPixelMappingDistribution.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDMXPixelMappingDistribution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DMXRuntime_EDMXPixelMappingDistribution, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("EDMXPixelMappingDistribution"));
		}
		return Z_Registration_Info_UEnum_EDMXPixelMappingDistribution.OuterSingleton;
	}
	template<> DMXRUNTIME_API UEnum* StaticEnum<EDMXPixelMappingDistribution>()
	{
		return EDMXPixelMappingDistribution_StaticEnum();
	}
	struct Z_Construct_UEnum_DMXRuntime_EDMXPixelMappingDistribution_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DMXRuntime_EDMXPixelMappingDistribution_Statics::Enumerators[] = {
		{ "EDMXPixelMappingDistribution::TopLeftToRight", (int64)EDMXPixelMappingDistribution::TopLeftToRight },
		{ "EDMXPixelMappingDistribution::TopLeftToBottom", (int64)EDMXPixelMappingDistribution::TopLeftToBottom },
		{ "EDMXPixelMappingDistribution::TopLeftToClockwise", (int64)EDMXPixelMappingDistribution::TopLeftToClockwise },
		{ "EDMXPixelMappingDistribution::TopLeftToAntiClockwise", (int64)EDMXPixelMappingDistribution::TopLeftToAntiClockwise },
		{ "EDMXPixelMappingDistribution::TopRightToLeft", (int64)EDMXPixelMappingDistribution::TopRightToLeft },
		{ "EDMXPixelMappingDistribution::BottomLeftToTop", (int64)EDMXPixelMappingDistribution::BottomLeftToTop },
		{ "EDMXPixelMappingDistribution::TopRightToAntiClockwise", (int64)EDMXPixelMappingDistribution::TopRightToAntiClockwise },
		{ "EDMXPixelMappingDistribution::BottomLeftToClockwise", (int64)EDMXPixelMappingDistribution::BottomLeftToClockwise },
		{ "EDMXPixelMappingDistribution::BottomLeftToRight", (int64)EDMXPixelMappingDistribution::BottomLeftToRight },
		{ "EDMXPixelMappingDistribution::TopRightToBottom", (int64)EDMXPixelMappingDistribution::TopRightToBottom },
		{ "EDMXPixelMappingDistribution::BottomLeftAntiClockwise", (int64)EDMXPixelMappingDistribution::BottomLeftAntiClockwise },
		{ "EDMXPixelMappingDistribution::TopRightToClockwise", (int64)EDMXPixelMappingDistribution::TopRightToClockwise },
		{ "EDMXPixelMappingDistribution::BottomRightToLeft", (int64)EDMXPixelMappingDistribution::BottomRightToLeft },
		{ "EDMXPixelMappingDistribution::BottomRightToTop", (int64)EDMXPixelMappingDistribution::BottomRightToTop },
		{ "EDMXPixelMappingDistribution::BottomRightToClockwise", (int64)EDMXPixelMappingDistribution::BottomRightToClockwise },
		{ "EDMXPixelMappingDistribution::BottomRightToAntiClockwise", (int64)EDMXPixelMappingDistribution::BottomRightToAntiClockwise },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DMXRuntime_EDMXPixelMappingDistribution_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BottomLeftAntiClockwise.Name", "EDMXPixelMappingDistribution::BottomLeftAntiClockwise" },
		{ "BottomLeftToClockwise.Name", "EDMXPixelMappingDistribution::BottomLeftToClockwise" },
		{ "BottomLeftToRight.Name", "EDMXPixelMappingDistribution::BottomLeftToRight" },
		{ "BottomLeftToTop.Name", "EDMXPixelMappingDistribution::BottomLeftToTop" },
		{ "BottomRightToAntiClockwise.Name", "EDMXPixelMappingDistribution::BottomRightToAntiClockwise" },
		{ "BottomRightToClockwise.Name", "EDMXPixelMappingDistribution::BottomRightToClockwise" },
		{ "BottomRightToLeft.Name", "EDMXPixelMappingDistribution::BottomRightToLeft" },
		{ "BottomRightToTop.Name", "EDMXPixelMappingDistribution::BottomRightToTop" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "TopLeftToAntiClockwise.Name", "EDMXPixelMappingDistribution::TopLeftToAntiClockwise" },
		{ "TopLeftToBottom.Name", "EDMXPixelMappingDistribution::TopLeftToBottom" },
		{ "TopLeftToClockwise.Name", "EDMXPixelMappingDistribution::TopLeftToClockwise" },
		{ "TopLeftToRight.Name", "EDMXPixelMappingDistribution::TopLeftToRight" },
		{ "TopRightToAntiClockwise.Name", "EDMXPixelMappingDistribution::TopRightToAntiClockwise" },
		{ "TopRightToBottom.Name", "EDMXPixelMappingDistribution::TopRightToBottom" },
		{ "TopRightToClockwise.Name", "EDMXPixelMappingDistribution::TopRightToClockwise" },
		{ "TopRightToLeft.Name", "EDMXPixelMappingDistribution::TopRightToLeft" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DMXRuntime_EDMXPixelMappingDistribution_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		"EDMXPixelMappingDistribution",
		"EDMXPixelMappingDistribution",
		Z_Construct_UEnum_DMXRuntime_EDMXPixelMappingDistribution_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DMXRuntime_EDMXPixelMappingDistribution_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DMXRuntime_EDMXPixelMappingDistribution_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DMXRuntime_EDMXPixelMappingDistribution_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DMXRuntime_EDMXPixelMappingDistribution()
	{
		if (!Z_Registration_Info_UEnum_EDMXPixelMappingDistribution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDMXPixelMappingDistribution.InnerSingleton, Z_Construct_UEnum_DMXRuntime_EDMXPixelMappingDistribution_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDMXPixelMappingDistribution.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXFixtureFunction;
class UScriptStruct* FDMXFixtureFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXFixtureFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXFixtureFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXFixtureFunction, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXFixtureFunction"));
	}
	return Z_Registration_Info_UScriptStruct_DMXFixtureFunction.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXFixtureFunction>()
{
	return FDMXFixtureFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelOffset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLSBMode_MetaData[];
#endif
		static void NewProp_bUseLSBMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLSBMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXFixtureFunction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_Attribute_MetaData[] = {
		{ "Category", "Function Settings" },
		{ "Comment", "/**\n\x09 * The Attribute name to map this Function to.\n\x09 * This is used to easily find the Function in Blueprints, using an Attribute\n\x09 * list instead of typing the Function name directly.\n\x09 * The list of Attributes can be edited on\n\x09 * Project Settings->Plugins->DMX Protocol->Fixture Settings->Fixture Function Attributes\n\x09 */" },
		{ "DisplayName", "Attribute Mapping" },
		{ "DisplayPriority", "11" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "The Attribute name to map this Function to.\nThis is used to easily find the Function in Blueprints, using an Attribute\nlist instead of typing the Function name directly.\nThe list of Attributes can be edited on\nProject Settings->Plugins->DMX Protocol->Fixture Settings->Fixture Function Attributes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureFunction, Attribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_Attribute_MetaData)) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_FunctionName_MetaData[] = {
		{ "Category", "Function Settings" },
		{ "DisplayPriority", "10" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureFunction, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Function Settings" },
		{ "DisplayPriority", "20" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureFunction, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Function Settings" },
		{ "Comment", "/** The Default Value of the function, imported from GDTF. The plugin doesn't make use of this value, but it can be used in blueprints */" },
		{ "DisplayPriority", "30" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "The Default Value of the function, imported from GDTF. The plugin doesn't make use of this value, but it can be used in blueprints" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureFunction, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "Function Settings" },
		{ "Comment", "/** This function's starting channel (use editor above to make changes) */" },
		{ "DisplayName", "Channel Assignment" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "This function's starting channel (use editor above to make changes)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureFunction, Channel), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_Channel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_ChannelOffset_MetaData[] = {
		{ "Comment", "/** DEPRECATED 5.0. Instead the 'Channel' property is EditAnywhere so any function can be assigned freely */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated since the Channel property can be set in the DMX Library Editor." },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "DEPRECATED 5.0. Instead the 'Channel' property is EditAnywhere so any function can be assigned freely" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_ChannelOffset = { "ChannelOffset", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureFunction, ChannelOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_ChannelOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_ChannelOffset_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "Function Settings" },
		{ "Comment", "/** This function's data type. Defines the used number of channels (bytes) */" },
		{ "DisplayPriority", "5" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "This function's data type. Defines the used number of channels (bytes)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureFunction, DataType), Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_DataType_MetaData)) }; // 455975797
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_bUseLSBMode_MetaData[] = {
		{ "Category", "Function Settings" },
		{ "Comment", "/**\n\x09 * Least Significant Byte mode makes the individual bytes (channels) of the function be\n\x09 * interpreted with the first bytes being the lowest part of the number (endianness).\n\x09 * \n\x09 * E.g., given a 16 bit function with two channel values set to [0, 1],\n\x09 * they would be interpreted as the binary number 0x01 0x00, which means 256.\n\x09 * The first byte (0) became the lowest part in binary form and the following byte (1), the highest.\n\x09 * \n\x09 * Most Fixtures use MSB (Most Significant Byte) mode, which interprets bytes as highest first.\n\x09 * In MSB mode, the example above would be interpreted in binary as 0x00 0x01, which means 1.\n\x09 * The first byte (0) became the highest part in binary form and the following byte (1), the lowest.\n\x09 */" },
		{ "DisplayName", "Use LSB Mode" },
		{ "DisplayPriority", "29" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "Least Significant Byte mode makes the individual bytes (channels) of the function be\ninterpreted with the first bytes being the lowest part of the number (endianness).\n\nE.g., given a 16 bit function with two channel values set to [0, 1],\nthey would be interpreted as the binary number 0x01 0x00, which means 256.\nThe first byte (0) became the lowest part in binary form and the following byte (1), the highest.\n\nMost Fixtures use MSB (Most Significant Byte) mode, which interprets bytes as highest first.\nIn MSB mode, the example above would be interpreted in binary as 0x00 0x01, which means 1.\nThe first byte (0) became the highest part in binary form and the following byte (1), the lowest." },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_bUseLSBMode_SetBit(void* Obj)
	{
		((FDMXFixtureFunction*)Obj)->bUseLSBMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_bUseLSBMode = { "bUseLSBMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDMXFixtureFunction), &Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_bUseLSBMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_bUseLSBMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_bUseLSBMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_FunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_ChannelOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_DataType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewProp_bUseLSBMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXFixtureFunction",
		sizeof(FDMXFixtureFunction),
		alignof(FDMXFixtureFunction),
		Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXFixtureFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXFixtureFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXFixtureFunction.InnerSingleton, Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXFixtureFunction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXFixtureCellAttribute;
class UScriptStruct* FDMXFixtureCellAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXFixtureCellAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXFixtureCellAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXFixtureCellAttribute, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXFixtureCellAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_DMXFixtureCellAttribute.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXFixtureCellAttribute>()
{
	return FDMXFixtureCellAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLSBMode_MetaData[];
#endif
		static void NewProp_bUseLSBMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLSBMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXFixtureCellAttribute>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_Attribute_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * The Attribute name to map this Function to.\n\x09 * This is used to easily find the Function in Blueprints, using an Attribute\n\x09 * list instead of typing the Function name directly.\n\x09 * The list of Attributes can be edited on\n\x09 * Project Settings->Plugins->DMX Protocol->Fixture Settings->Fixture Function Attributes\n\x09 */" },
		{ "DisplayName", "Attribute Mapping" },
		{ "DisplayPriority", "11" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "The Attribute name to map this Function to.\nThis is used to easily find the Function in Blueprints, using an Attribute\nlist instead of typing the Function name directly.\nThe list of Attributes can be edited on\nProject Settings->Plugins->DMX Protocol->Fixture Settings->Fixture Function Attributes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureCellAttribute, Attribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_Attribute_MetaData)) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "DMX" },
		{ "DisplayName", "Description" },
		{ "DisplayPriority", "20" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureCellAttribute, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Initial value for this function when no value is set */" },
		{ "DisplayName", "Default Value" },
		{ "DisplayPriority", "30" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "Initial value for this function when no value is set" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureCellAttribute, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** This function's data type. Defines the used number of channels (bytes) */" },
		{ "DisplayName", "Data Type" },
		{ "DisplayPriority", "5" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "This function's data type. Defines the used number of channels (bytes)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureCellAttribute, DataType), Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_DataType_MetaData)) }; // 455975797
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_bUseLSBMode_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * The Endianess of the Attribute:\n\x09 * Least Significant Byte mode makes the individual bytes (channels) of the function be\n\x09 * interpreted with the first bytes being the lowest part of the number.\n\x09 *\n\x09 * E.g., given a 16 bit function with two channel values set to [0, 1],\n\x09 * they would be interpreted as the binary number 00000001 00000000, which means 256.\n\x09 * The first byte (0) became the lowest part in binary form and the following byte (1), the highest.\n\x09 *\n\x09 * Most Fixtures use MSB (Most Significant Byte) mode, which interprets bytes as highest first.\n\x09 * In MSB mode, the example above would be interpreted in binary as 00000000 00000001, which means 1.\n\x09 * The first byte (0) became the highest part in binary form and the following byte (1), the lowest.\n\x09 */" },
		{ "DisplayName", "Use LSB Mode" },
		{ "DisplayPriority", "29" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "The Endianess of the Attribute:\nLeast Significant Byte mode makes the individual bytes (channels) of the function be\ninterpreted with the first bytes being the lowest part of the number.\n\nE.g., given a 16 bit function with two channel values set to [0, 1],\nthey would be interpreted as the binary number 00000001 00000000, which means 256.\nThe first byte (0) became the lowest part in binary form and the following byte (1), the highest.\n\nMost Fixtures use MSB (Most Significant Byte) mode, which interprets bytes as highest first.\nIn MSB mode, the example above would be interpreted in binary as 00000000 00000001, which means 1.\nThe first byte (0) became the highest part in binary form and the following byte (1), the lowest." },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_bUseLSBMode_SetBit(void* Obj)
	{
		((FDMXFixtureCellAttribute*)Obj)->bUseLSBMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_bUseLSBMode = { "bUseLSBMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDMXFixtureCellAttribute), &Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_bUseLSBMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_bUseLSBMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_bUseLSBMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_DataType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewProp_bUseLSBMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXFixtureCellAttribute",
		sizeof(FDMXFixtureCellAttribute),
		alignof(FDMXFixtureCellAttribute),
		Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXFixtureCellAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXFixtureCellAttribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXFixtureCellAttribute.InnerSingleton, Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXFixtureCellAttribute.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXFixtureMatrix;
class UScriptStruct* FDMXFixtureMatrix::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXFixtureMatrix.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXFixtureMatrix.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXFixtureMatrix, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXFixtureMatrix"));
	}
	return Z_Registration_Info_UScriptStruct_DMXFixtureMatrix.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXFixtureMatrix>()
{
	return FDMXFixtureMatrix::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_CellAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CellAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstCellChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FirstCellChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XCells_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_XCells;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YCells_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_YCells;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PixelMappingDistribution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelMappingDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PixelMappingDistribution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXFixtureMatrix>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_CellAttributes_Inner = { "CellAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXFixtureCellAttribute, METADATA_PARAMS(nullptr, 0) }; // 3817958936
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_CellAttributes_MetaData[] = {
		{ "Category", "Mode Settings" },
		{ "DisplayName", "Cell Attributes" },
		{ "DisplayPriority", "60" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_CellAttributes = { "CellAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureMatrix, CellAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_CellAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_CellAttributes_MetaData)) }; // 3817958936
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_FirstCellChannel_MetaData[] = {
		{ "Category", "Mode Settings" },
		{ "ClampMax", "512" },
		{ "ClampMin", "1" },
		{ "DisplayName", "First Cell Channel" },
		{ "DisplayPriority", "20" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_FirstCellChannel = { "FirstCellChannel", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureMatrix, FirstCellChannel), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_FirstCellChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_FirstCellChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_XCells_MetaData[] = {
		{ "Category", "Mode Settings" },
		{ "ClampMax", "512" },
		{ "ClampMin", "1" },
		{ "DisplayName", "X Cells" },
		{ "DisplayPriority", "30" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "UIMax", "512" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_XCells = { "XCells", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureMatrix, XCells), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_XCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_XCells_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_YCells_MetaData[] = {
		{ "Category", "Mode Settings" },
		{ "ClampMax", "512" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Y Cells" },
		{ "DisplayPriority", "40" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "UIMax", "512" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_YCells = { "YCells", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureMatrix, YCells), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_YCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_YCells_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_PixelMappingDistribution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_PixelMappingDistribution_MetaData[] = {
		{ "Category", "Mode Settings" },
		{ "DisplayName", "PixelMapping Distribution" },
		{ "DisplayPriority", "50" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_PixelMappingDistribution = { "PixelMappingDistribution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureMatrix, PixelMappingDistribution), Z_Construct_UEnum_DMXRuntime_EDMXPixelMappingDistribution, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_PixelMappingDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_PixelMappingDistribution_MetaData)) }; // 1209359822
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_CellAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_CellAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_FirstCellChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_XCells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_YCells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_PixelMappingDistribution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewProp_PixelMappingDistribution,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXFixtureMatrix",
		sizeof(FDMXFixtureMatrix),
		alignof(FDMXFixtureMatrix),
		Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXFixtureMatrix()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXFixtureMatrix.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXFixtureMatrix.InnerSingleton, Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXFixtureMatrix.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXCell;
class UScriptStruct* FDMXCell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXCell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXCell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXCell, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXCell"));
	}
	return Z_Registration_Info_UScriptStruct_DMXCell.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXCell>()
{
	return FDMXCell::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXCell_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXCell_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXCell_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXCell>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXCell_Statics::NewProp_CellID_MetaData[] = {
		{ "Category", "DMX" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The cell index in a 1D Array (row order), starting from 0 */" },
		{ "DisplayName", "Cell ID" },
		{ "DisplayPriority", "20" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "The cell index in a 1D Array (row order), starting from 0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXCell_Statics::NewProp_CellID = { "CellID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXCell, CellID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXCell_Statics::NewProp_CellID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXCell_Statics::NewProp_CellID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXCell_Statics::NewProp_Coordinate_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** The cell coordinate in a 2D Array, starting from (0, 0) */" },
		{ "DisplayName", "Coordinate" },
		{ "DisplayPriority", "30" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "The cell coordinate in a 2D Array, starting from (0, 0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXCell_Statics::NewProp_Coordinate = { "Coordinate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXCell, Coordinate), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXCell_Statics::NewProp_Coordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXCell_Statics::NewProp_Coordinate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXCell_Statics::NewProp_CellID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXCell_Statics::NewProp_Coordinate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXCell_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXCell",
		sizeof(FDMXCell),
		alignof(FDMXCell),
		Z_Construct_UScriptStruct_FDMXCell_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXCell_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXCell_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXCell_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXCell()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXCell.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXCell.InnerSingleton, Z_Construct_UScriptStruct_FDMXCell_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXCell.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXFixtureMode;
class UScriptStruct* FDMXFixtureMode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXFixtureMode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXFixtureMode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXFixtureMode, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXFixtureMode"));
	}
	return Z_Registration_Info_UScriptStruct_DMXFixtureMode.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXFixtureMode>()
{
	return FDMXFixtureMode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXFixtureMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Functions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Functions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Functions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoChannelSpan_MetaData[];
#endif
		static void NewProp_bAutoChannelSpan_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoChannelSpan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelSpan_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelSpan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFixtureMatrixEnabled_MetaData[];
#endif
		static void NewProp_bFixtureMatrixEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixtureMatrixEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixtureMatrixConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixtureMatrixConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXFixtureMode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_ModeName_MetaData[] = {
		{ "Category", "Mode Settings" },
		{ "DisplayPriority", "10" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_ModeName = { "ModeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureMode, ModeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_ModeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_ModeName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_Functions_Inner = { "Functions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXFixtureFunction, METADATA_PARAMS(nullptr, 0) }; // 1606425658
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_Functions_MetaData[] = {
		{ "Category", "Mode Settings" },
		{ "DisplayPriority", "20" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_Functions = { "Functions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureMode, Functions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_Functions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_Functions_MetaData)) }; // 1606425658
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_bAutoChannelSpan_MetaData[] = {
		{ "Category", "Mode Settings" },
		{ "Comment", "/**\n\x09 * When enabled, ChannelSpan is automatically set based on the created functions and their data types.\n\x09 * If disabled, ChannelSpan can be manually set and functions and functions' channels beyond the\n\x09 * specified span will be ignored.\n\x09 */" },
		{ "DisplayPriority", "30" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "When enabled, ChannelSpan is automatically set based on the created functions and their data types.\nIf disabled, ChannelSpan can be manually set and functions and functions' channels beyond the\nspecified span will be ignored." },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_bAutoChannelSpan_SetBit(void* Obj)
	{
		((FDMXFixtureMode*)Obj)->bAutoChannelSpan = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_bAutoChannelSpan = { "bAutoChannelSpan", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDMXFixtureMode), &Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_bAutoChannelSpan_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_bAutoChannelSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_bAutoChannelSpan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_ChannelSpan_MetaData[] = {
		{ "Category", "Mode Settings" },
		{ "ClampMax", "512" },
		{ "ClampMin", "4" },
		{ "Comment", "/** Number of channels (bytes) used by this mode's functions */" },
		{ "DisplayPriority", "40" },
		{ "EditCondition", "!bAutoChannelSpan" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "Number of channels (bytes) used by this mode's functions" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_ChannelSpan = { "ChannelSpan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureMode, ChannelSpan), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_ChannelSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_ChannelSpan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_bFixtureMatrixEnabled_MetaData[] = {
		{ "Category", "Mode Settings" },
		{ "DisplayPriority", "60" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_bFixtureMatrixEnabled_SetBit(void* Obj)
	{
		((FDMXFixtureMode*)Obj)->bFixtureMatrixEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_bFixtureMatrixEnabled = { "bFixtureMatrixEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDMXFixtureMode), &Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_bFixtureMatrixEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_bFixtureMatrixEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_bFixtureMatrixEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_FixtureMatrixConfig_MetaData[] = {
		{ "Category", "Mode Settings" },
		{ "DisplayPriority", "70" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_FixtureMatrixConfig = { "FixtureMatrixConfig", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureMode, FixtureMatrixConfig), Z_Construct_UScriptStruct_FDMXFixtureMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_FixtureMatrixConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_FixtureMatrixConfig_MetaData)) }; // 1203479243
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_ModeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_Functions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_Functions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_bAutoChannelSpan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_ChannelSpan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_bFixtureMatrixEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewProp_FixtureMatrixConfig,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXFixtureMode",
		sizeof(FDMXFixtureMode),
		alignof(FDMXFixtureMode),
		Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXFixtureMode()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXFixtureMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXFixtureMode.InnerSingleton, Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXFixtureMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXEntityFixtureTypeConstructionParams;
class UScriptStruct* FDMXEntityFixtureTypeConstructionParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXEntityFixtureTypeConstructionParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXEntityFixtureTypeConstructionParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXEntityFixtureTypeConstructionParams"));
	}
	return Z_Registration_Info_UScriptStruct_DMXEntityFixtureTypeConstructionParams.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXEntityFixtureTypeConstructionParams>()
{
	return FDMXEntityFixtureTypeConstructionParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentDMXLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentDMXLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXCategory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DMXCategory;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Parameters to construct a Fixture Type. */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "Parameters to construct a Fixture Type." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXEntityFixtureTypeConstructionParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::NewProp_ParentDMXLibrary_MetaData[] = {
		{ "Category", "Fixture Type" },
		{ "Comment", "/** The DMX Library in which the Fixture Type will be constructed */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "The DMX Library in which the Fixture Type will be constructed" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::NewProp_ParentDMXLibrary = { "ParentDMXLibrary", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXEntityFixtureTypeConstructionParams, ParentDMXLibrary), Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::NewProp_ParentDMXLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::NewProp_ParentDMXLibrary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::NewProp_DMXCategory_MetaData[] = {
		{ "Category", "Fixture Type" },
		{ "Comment", "/** The Category of the Fixture, useful for Filtering */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "The Category of the Fixture, useful for Filtering" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::NewProp_DMXCategory = { "DMXCategory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXEntityFixtureTypeConstructionParams, DMXCategory), Z_Construct_UScriptStruct_FDMXFixtureCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::NewProp_DMXCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::NewProp_DMXCategory_MetaData)) }; // 2459608541
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::NewProp_Modes_Inner = { "Modes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXFixtureMode, METADATA_PARAMS(nullptr, 0) }; // 1590717303
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::NewProp_Modes_MetaData[] = {
		{ "Category", "Fixture Type" },
		{ "Comment", "/** The Modes of the Fixture Type */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "The Modes of the Fixture Type" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::NewProp_Modes = { "Modes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXEntityFixtureTypeConstructionParams, Modes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::NewProp_Modes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::NewProp_Modes_MetaData)) }; // 1590717303
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::NewProp_ParentDMXLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::NewProp_DMXCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::NewProp_Modes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::NewProp_Modes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXEntityFixtureTypeConstructionParams",
		sizeof(FDMXEntityFixtureTypeConstructionParams),
		alignof(FDMXEntityFixtureTypeConstructionParams),
		Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXEntityFixtureTypeConstructionParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXEntityFixtureTypeConstructionParams.InnerSingleton, Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXEntityFixtureTypeConstructionParams.InnerSingleton;
	}
	DEFINE_FUNCTION(UDMXEntityFixtureType::execRemoveFixtureTypeFromLibrary)
	{
		P_GET_STRUCT(FDMXEntityFixtureTypeRef,Z_Param_FixtureTypeRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDMXEntityFixtureType::RemoveFixtureTypeFromLibrary(Z_Param_FixtureTypeRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityFixtureType::execCreateFixtureTypeInLibrary)
	{
		P_GET_STRUCT(FDMXEntityFixtureTypeConstructionParams,Z_Param_ConstructionParams);
		P_GET_PROPERTY(FStrProperty,Z_Param_DesiredName);
		P_GET_UBOOL(Z_Param_bMarkDMXLibraryDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDMXEntityFixtureType**)Z_Param__Result=UDMXEntityFixtureType::CreateFixtureTypeInLibrary(Z_Param_ConstructionParams,Z_Param_DesiredName,Z_Param_bMarkDMXLibraryDirty);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UDMXEntityFixtureType::execSetModesFromDMXImport)
	{
		P_GET_OBJECT(UDMXImport,Z_Param_DMXImportAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModesFromDMXImport(Z_Param_DMXImportAsset);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UDMXEntityFixtureType::StaticRegisterNativesUDMXEntityFixtureType()
	{
		UClass* Class = UDMXEntityFixtureType::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateFixtureTypeInLibrary", &UDMXEntityFixtureType::execCreateFixtureTypeInLibrary },
			{ "RemoveFixtureTypeFromLibrary", &UDMXEntityFixtureType::execRemoveFixtureTypeFromLibrary },
#if WITH_EDITOR
			{ "SetModesFromDMXImport", &UDMXEntityFixtureType::execSetModesFromDMXImport },
#endif // WITH_EDITOR
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics
	{
		struct DMXEntityFixtureType_eventCreateFixtureTypeInLibrary_Parms
		{
			FDMXEntityFixtureTypeConstructionParams ConstructionParams;
			FString DesiredName;
			bool bMarkDMXLibraryDirty;
			UDMXEntityFixtureType* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstructionParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DesiredName;
		static void NewProp_bMarkDMXLibraryDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkDMXLibraryDirty;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics::NewProp_ConstructionParams = { "ConstructionParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixtureType_eventCreateFixtureTypeInLibrary_Parms, ConstructionParams), Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams, METADATA_PARAMS(nullptr, 0) }; // 165430326
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics::NewProp_DesiredName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics::NewProp_DesiredName = { "DesiredName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixtureType_eventCreateFixtureTypeInLibrary_Parms, DesiredName), METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics::NewProp_DesiredName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics::NewProp_DesiredName_MetaData)) };
	void Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics::NewProp_bMarkDMXLibraryDirty_SetBit(void* Obj)
	{
		((DMXEntityFixtureType_eventCreateFixtureTypeInLibrary_Parms*)Obj)->bMarkDMXLibraryDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics::NewProp_bMarkDMXLibraryDirty = { "bMarkDMXLibraryDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXEntityFixtureType_eventCreateFixtureTypeInLibrary_Parms), &Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics::NewProp_bMarkDMXLibraryDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixtureType_eventCreateFixtureTypeInLibrary_Parms, ReturnValue), Z_Construct_UClass_UDMXEntityFixtureType_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics::NewProp_ConstructionParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics::NewProp_DesiredName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics::NewProp_bMarkDMXLibraryDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Creates a new Fixture Type in the DMX Library */" },
		{ "CPP_Default_bMarkDMXLibraryDirty", "true" },
		{ "CPP_Default_DesiredName", "" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "Creates a new Fixture Type in the DMX Library" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixtureType, nullptr, "CreateFixtureTypeInLibrary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics::DMXEntityFixtureType_eventCreateFixtureTypeInLibrary_Parms), Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityFixtureType_RemoveFixtureTypeFromLibrary_Statics
	{
		struct DMXEntityFixtureType_eventRemoveFixtureTypeFromLibrary_Parms
		{
			FDMXEntityFixtureTypeRef FixtureTypeRef;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixtureTypeRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityFixtureType_RemoveFixtureTypeFromLibrary_Statics::NewProp_FixtureTypeRef = { "FixtureTypeRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixtureType_eventRemoveFixtureTypeFromLibrary_Parms, FixtureTypeRef), Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef, METADATA_PARAMS(nullptr, 0) }; // 3909030762
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixtureType_RemoveFixtureTypeFromLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixtureType_RemoveFixtureTypeFromLibrary_Statics::NewProp_FixtureTypeRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixtureType_RemoveFixtureTypeFromLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Removes a Fixture Type from a DMX Library */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "Removes a Fixture Type from a DMX Library" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixtureType_RemoveFixtureTypeFromLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixtureType, nullptr, "RemoveFixtureTypeFromLibrary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixtureType_RemoveFixtureTypeFromLibrary_Statics::DMXEntityFixtureType_eventRemoveFixtureTypeFromLibrary_Parms), Z_Construct_UFunction_UDMXEntityFixtureType_RemoveFixtureTypeFromLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixtureType_RemoveFixtureTypeFromLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixtureType_RemoveFixtureTypeFromLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixtureType_RemoveFixtureTypeFromLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixtureType_RemoveFixtureTypeFromLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixtureType_RemoveFixtureTypeFromLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UDMXEntityFixtureType_SetModesFromDMXImport_Statics
	{
		struct DMXEntityFixtureType_eventSetModesFromDMXImport_Parms
		{
			UDMXImport* DMXImportAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DMXImportAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXEntityFixtureType_SetModesFromDMXImport_Statics::NewProp_DMXImportAsset = { "DMXImportAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityFixtureType_eventSetModesFromDMXImport_Parms, DMXImportAsset), Z_Construct_UClass_UDMXImport_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityFixtureType_SetModesFromDMXImport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityFixtureType_SetModesFromDMXImport_Statics::NewProp_DMXImportAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityFixtureType_SetModesFromDMXImport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fixture Settings" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityFixtureType_SetModesFromDMXImport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityFixtureType, nullptr, "SetModesFromDMXImport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityFixtureType_SetModesFromDMXImport_Statics::DMXEntityFixtureType_eventSetModesFromDMXImport_Parms), Z_Construct_UFunction_UDMXEntityFixtureType_SetModesFromDMXImport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixtureType_SetModesFromDMXImport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityFixtureType_SetModesFromDMXImport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityFixtureType_SetModesFromDMXImport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityFixtureType_SetModesFromDMXImport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityFixtureType_SetModesFromDMXImport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXEntityFixtureType);
	UClass* Z_Construct_UClass_UDMXEntityFixtureType_NoRegister()
	{
		return UDMXEntityFixtureType::StaticClass();
	}
	struct Z_Construct_UClass_UDMXEntityFixtureType_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXImport_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DMXImport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXCategory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DMXCategory;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputModulators_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputModulators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputModulators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputModulators;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFixtureMatrixEnabled_MetaData[];
#endif
		static void NewProp_bFixtureMatrixEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixtureMatrixEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXEntityFixtureType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXEntity,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXEntityFixtureType_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMXEntityFixtureType_CreateFixtureTypeInLibrary, "CreateFixtureTypeInLibrary" }, // 1783530449
		{ &Z_Construct_UFunction_UDMXEntityFixtureType_RemoveFixtureTypeFromLibrary, "RemoveFixtureTypeFromLibrary" }, // 4212051441
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UDMXEntityFixtureType_SetModesFromDMXImport, "SetModesFromDMXImport" }, // 2774648192
#endif //WITH_EDITOR
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityFixtureType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Class to describe a type of Fixture. Fixture Patches can be created from Fixture Types (see UDMXEntityFixturePatch::ParentFixtureTypeTemplate).\n */" },
		{ "DisplayName", "DMX Fixture Type" },
		{ "IncludePath", "Library/DMXEntityFixtureType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "Class to describe a type of Fixture. Fixture Patches can be created from Fixture Types (see UDMXEntityFixturePatch::ParentFixtureTypeTemplate)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_DMXImport_MetaData[] = {
		{ "Category", "Fixture Settings" },
		{ "Comment", "/** The GDTF file from which the Fixture Type was setup */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "The GDTF file from which the Fixture Type was setup" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_DMXImport = { "DMXImport", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityFixtureType, DMXImport), Z_Construct_UClass_UDMXImport_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_DMXImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_DMXImport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_DMXCategory_MetaData[] = {
		{ "Category", "Fixture Settings" },
		{ "Comment", "/** The Category of the Fixture, useful for Filtering */" },
		{ "DisplayName", "DMX Category" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "The Category of the Fixture, useful for Filtering" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_DMXCategory = { "DMXCategory", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityFixtureType, DMXCategory), Z_Construct_UScriptStruct_FDMXFixtureCategory, METADATA_PARAMS(Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_DMXCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_DMXCategory_MetaData)) }; // 2459608541
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_Modes_Inner = { "Modes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXFixtureMode, METADATA_PARAMS(nullptr, 0) }; // 1590717303
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_Modes_MetaData[] = {
		{ "Category", "Fixture Settings" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_Modes = { "Modes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityFixtureType, Modes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_Modes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_Modes_MetaData)) }; // 1590717303
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_InputModulators_Inner_MetaData[] = {
		{ "Category", "Mode Settings" },
		{ "Comment", "/** \n\x09 * Modulators applied right before a patch of this type is received. \n\x09 * NOTE: Modulators only affect the patch's normalized values! Untouched values are still available when accesing raw values. \n\x09 */" },
		{ "DisplayPriority", "50" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "Modulators applied right before a patch of this type is received.\nNOTE: Modulators only affect the patch's normalized values! Untouched values are still available when accesing raw values." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_InputModulators_Inner = { "InputModulators", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXModulator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_InputModulators_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_InputModulators_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_InputModulators_MetaData[] = {
		{ "Category", "Mode Settings" },
		{ "Comment", "/** \n\x09 * Modulators applied right before a patch of this type is received. \n\x09 * NOTE: Modulators only affect the patch's normalized values! Untouched values are still available when accesing raw values. \n\x09 */" },
		{ "DisplayPriority", "50" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
		{ "ToolTip", "Modulators applied right before a patch of this type is received.\nNOTE: Modulators only affect the patch's normalized values! Untouched values are still available when accesing raw values." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_InputModulators = { "InputModulators", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXEntityFixtureType, InputModulators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_InputModulators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_InputModulators_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_bFixtureMatrixEnabled_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "FixtureMatrixEnabled is deprecated. Instead now each Mode has a FixtureMatrixEnabled property." },
		{ "ModuleRelativePath", "Public/Library/DMXEntityFixtureType.h" },
	};
#endif
	void Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_bFixtureMatrixEnabled_SetBit(void* Obj)
	{
		((UDMXEntityFixtureType*)Obj)->bFixtureMatrixEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_bFixtureMatrixEnabled = { "bFixtureMatrixEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXEntityFixtureType), &Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_bFixtureMatrixEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_bFixtureMatrixEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_bFixtureMatrixEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXEntityFixtureType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_DMXImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_DMXCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_Modes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_Modes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_InputModulators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_InputModulators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXEntityFixtureType_Statics::NewProp_bFixtureMatrixEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXEntityFixtureType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXEntityFixtureType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXEntityFixtureType_Statics::ClassParams = {
		&UDMXEntityFixtureType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDMXEntityFixtureType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityFixtureType_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXEntityFixtureType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityFixtureType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXEntityFixtureType()
	{
		if (!Z_Registration_Info_UClass_UDMXEntityFixtureType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXEntityFixtureType.OuterSingleton, Z_Construct_UClass_UDMXEntityFixtureType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXEntityFixtureType.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXEntityFixtureType>()
	{
		return UDMXEntityFixtureType::StaticClass();
	}
	UDMXEntityFixtureType::UDMXEntityFixtureType() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXEntityFixtureType);
	UDMXEntityFixtureType::~UDMXEntityFixtureType() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDMXEntityFixtureType)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_Statics::EnumInfo[] = {
		{ EDMXPixelMappingDistribution_StaticEnum, TEXT("EDMXPixelMappingDistribution"), &Z_Registration_Info_UEnum_EDMXPixelMappingDistribution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1209359822U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_Statics::ScriptStructInfo[] = {
		{ FDMXFixtureFunction::StaticStruct, Z_Construct_UScriptStruct_FDMXFixtureFunction_Statics::NewStructOps, TEXT("DMXFixtureFunction"), &Z_Registration_Info_UScriptStruct_DMXFixtureFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXFixtureFunction), 1606425658U) },
		{ FDMXFixtureCellAttribute::StaticStruct, Z_Construct_UScriptStruct_FDMXFixtureCellAttribute_Statics::NewStructOps, TEXT("DMXFixtureCellAttribute"), &Z_Registration_Info_UScriptStruct_DMXFixtureCellAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXFixtureCellAttribute), 3817958936U) },
		{ FDMXFixtureMatrix::StaticStruct, Z_Construct_UScriptStruct_FDMXFixtureMatrix_Statics::NewStructOps, TEXT("DMXFixtureMatrix"), &Z_Registration_Info_UScriptStruct_DMXFixtureMatrix, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXFixtureMatrix), 1203479243U) },
		{ FDMXCell::StaticStruct, Z_Construct_UScriptStruct_FDMXCell_Statics::NewStructOps, TEXT("DMXCell"), &Z_Registration_Info_UScriptStruct_DMXCell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXCell), 2201996212U) },
		{ FDMXFixtureMode::StaticStruct, Z_Construct_UScriptStruct_FDMXFixtureMode_Statics::NewStructOps, TEXT("DMXFixtureMode"), &Z_Registration_Info_UScriptStruct_DMXFixtureMode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXFixtureMode), 1590717303U) },
		{ FDMXEntityFixtureTypeConstructionParams::StaticStruct, Z_Construct_UScriptStruct_FDMXEntityFixtureTypeConstructionParams_Statics::NewStructOps, TEXT("DMXEntityFixtureTypeConstructionParams"), &Z_Registration_Info_UScriptStruct_DMXEntityFixtureTypeConstructionParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXEntityFixtureTypeConstructionParams), 165430326U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXEntityFixtureType, UDMXEntityFixtureType::StaticClass, TEXT("UDMXEntityFixtureType"), &Z_Registration_Info_UClass_UDMXEntityFixtureType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXEntityFixtureType), 2437541110U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_866702492(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixtureType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
