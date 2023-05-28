// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXProtocolTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXProtocolTypes() {}
// Cross Module References
	DMXPROTOCOL_API UClass* Z_Construct_UClass_UDMXNameContainersConversions();
	DMXPROTOCOL_API UClass* Z_Construct_UClass_UDMXNameContainersConversions_NoRegister();
	DMXPROTOCOL_API UEnum* Z_Construct_UEnum_DMXProtocol_EDMXCommunicationType();
	DMXPROTOCOL_API UEnum* Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat();
	DMXPROTOCOL_API UEnum* Z_Construct_UEnum_DMXProtocol_EDMXSendResult();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXFixtureCategory();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXProtocolName();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DMXProtocol();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDMXCommunicationType;
	static UEnum* EDMXCommunicationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDMXCommunicationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDMXCommunicationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DMXProtocol_EDMXCommunicationType, (UObject*)Z_Construct_UPackage__Script_DMXProtocol(), TEXT("EDMXCommunicationType"));
		}
		return Z_Registration_Info_UEnum_EDMXCommunicationType.OuterSingleton;
	}
	template<> DMXPROTOCOL_API UEnum* StaticEnum<EDMXCommunicationType>()
	{
		return EDMXCommunicationType_StaticEnum();
	}
	struct Z_Construct_UEnum_DMXProtocol_EDMXCommunicationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DMXProtocol_EDMXCommunicationType_Statics::Enumerators[] = {
		{ "EDMXCommunicationType::Broadcast", (int64)EDMXCommunicationType::Broadcast },
		{ "EDMXCommunicationType::Unicast", (int64)EDMXCommunicationType::Unicast },
		{ "EDMXCommunicationType::Multicast", (int64)EDMXCommunicationType::Multicast },
		{ "EDMXCommunicationType::InternalOnly", (int64)EDMXCommunicationType::InternalOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DMXProtocol_EDMXCommunicationType_Statics::Enum_MetaDataParams[] = {
		{ "Broadcast.Name", "EDMXCommunicationType::Broadcast" },
		{ "Comment", "/** Type of network communication */" },
		{ "InternalOnly.Name", "EDMXCommunicationType::InternalOnly" },
		{ "ModuleRelativePath", "Public/DMXProtocolTypes.h" },
		{ "Multicast.Name", "EDMXCommunicationType::Multicast" },
		{ "ToolTip", "Type of network communication" },
		{ "Unicast.Name", "EDMXCommunicationType::Unicast" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DMXProtocol_EDMXCommunicationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DMXProtocol,
		nullptr,
		"EDMXCommunicationType",
		"EDMXCommunicationType",
		Z_Construct_UEnum_DMXProtocol_EDMXCommunicationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DMXProtocol_EDMXCommunicationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DMXProtocol_EDMXCommunicationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DMXProtocol_EDMXCommunicationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DMXProtocol_EDMXCommunicationType()
	{
		if (!Z_Registration_Info_UEnum_EDMXCommunicationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDMXCommunicationType.InnerSingleton, Z_Construct_UEnum_DMXProtocol_EDMXCommunicationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDMXCommunicationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDMXSendResult;
	static UEnum* EDMXSendResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDMXSendResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDMXSendResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DMXProtocol_EDMXSendResult, (UObject*)Z_Construct_UPackage__Script_DMXProtocol(), TEXT("EDMXSendResult"));
		}
		return Z_Registration_Info_UEnum_EDMXSendResult.OuterSingleton;
	}
	template<> DMXPROTOCOL_API UEnum* StaticEnum<EDMXSendResult>()
	{
		return EDMXSendResult_StaticEnum();
	}
	struct Z_Construct_UEnum_DMXProtocol_EDMXSendResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DMXProtocol_EDMXSendResult_Statics::Enumerators[] = {
		{ "EDMXSendResult::Success", (int64)EDMXSendResult::Success },
		{ "EDMXSendResult::ErrorGetUniverse", (int64)EDMXSendResult::ErrorGetUniverse },
		{ "EDMXSendResult::ErrorSetBuffer", (int64)EDMXSendResult::ErrorSetBuffer },
		{ "EDMXSendResult::ErrorSizeBuffer", (int64)EDMXSendResult::ErrorSizeBuffer },
		{ "EDMXSendResult::ErrorEnqueuePackage", (int64)EDMXSendResult::ErrorEnqueuePackage },
		{ "EDMXSendResult::ErrorNoSenderInterface", (int64)EDMXSendResult::ErrorNoSenderInterface },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DMXProtocol_EDMXSendResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DMX" },
		{ "Comment", "/** Result when sending a DMX packet */" },
		{ "ErrorEnqueuePackage.DisplayName", "Error Enqueue Package" },
		{ "ErrorEnqueuePackage.Name", "EDMXSendResult::ErrorEnqueuePackage" },
		{ "ErrorGetUniverse.DisplayName", "Error Get Universe" },
		{ "ErrorGetUniverse.Name", "EDMXSendResult::ErrorGetUniverse" },
		{ "ErrorNoSenderInterface.DisplayName", "Error No Sending Interface" },
		{ "ErrorNoSenderInterface.Name", "EDMXSendResult::ErrorNoSenderInterface" },
		{ "ErrorSetBuffer.DisplayName", "Error Set Buffer" },
		{ "ErrorSetBuffer.Name", "EDMXSendResult::ErrorSetBuffer" },
		{ "ErrorSizeBuffer.DisplayName", "Error Size Buffer" },
		{ "ErrorSizeBuffer.Name", "EDMXSendResult::ErrorSizeBuffer" },
		{ "ModuleRelativePath", "Public/DMXProtocolTypes.h" },
		{ "Success.DisplayName", "Successfully sent" },
		{ "Success.Name", "EDMXSendResult::Success" },
		{ "ToolTip", "Result when sending a DMX packet" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DMXProtocol_EDMXSendResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DMXProtocol,
		nullptr,
		"EDMXSendResult",
		"EDMXSendResult",
		Z_Construct_UEnum_DMXProtocol_EDMXSendResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DMXProtocol_EDMXSendResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DMXProtocol_EDMXSendResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DMXProtocol_EDMXSendResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DMXProtocol_EDMXSendResult()
	{
		if (!Z_Registration_Info_UEnum_EDMXSendResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDMXSendResult.InnerSingleton, Z_Construct_UEnum_DMXProtocol_EDMXSendResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDMXSendResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDMXFixtureSignalFormat;
	static UEnum* EDMXFixtureSignalFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDMXFixtureSignalFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDMXFixtureSignalFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat, (UObject*)Z_Construct_UPackage__Script_DMXProtocol(), TEXT("EDMXFixtureSignalFormat"));
		}
		return Z_Registration_Info_UEnum_EDMXFixtureSignalFormat.OuterSingleton;
	}
	template<> DMXPROTOCOL_API UEnum* StaticEnum<EDMXFixtureSignalFormat>()
	{
		return EDMXFixtureSignalFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat_Statics::Enumerators[] = {
		{ "EDMXFixtureSignalFormat::E8Bit", (int64)EDMXFixtureSignalFormat::E8Bit },
		{ "EDMXFixtureSignalFormat::E16Bit", (int64)EDMXFixtureSignalFormat::E16Bit },
		{ "EDMXFixtureSignalFormat::E24Bit", (int64)EDMXFixtureSignalFormat::E24Bit },
		{ "EDMXFixtureSignalFormat::E32Bit", (int64)EDMXFixtureSignalFormat::E32Bit },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DMX" },
		{ "E16Bit.Comment", "/** Uses 2 channels (bytes). Range: 0 to 65.535 */" },
		{ "E16Bit.DisplayName", "16 Bit" },
		{ "E16Bit.Name", "EDMXFixtureSignalFormat::E16Bit" },
		{ "E16Bit.ToolTip", "Uses 2 channels (bytes). Range: 0 to 65.535" },
		{ "E24Bit.Comment", "/** Uses 3 channels (bytes). Range: 0 to 16.777.215 */" },
		{ "E24Bit.DisplayName", "24 Bit" },
		{ "E24Bit.Name", "EDMXFixtureSignalFormat::E24Bit" },
		{ "E24Bit.ToolTip", "Uses 3 channels (bytes). Range: 0 to 16.777.215" },
		{ "E32Bit.Comment", "/** Uses 4 channels (bytes). Range: 0 to 4.294.967.295 */" },
		{ "E32Bit.DisplayName", "32 Bit" },
		{ "E32Bit.Name", "EDMXFixtureSignalFormat::E32Bit" },
		{ "E32Bit.ToolTip", "Uses 4 channels (bytes). Range: 0 to 4.294.967.295" },
		{ "E8Bit.Comment", "/** Uses 1 channel (byte). Range: 0 to 255 */" },
		{ "E8Bit.DisplayName", "8 Bit" },
		{ "E8Bit.Name", "EDMXFixtureSignalFormat::E8Bit" },
		{ "E8Bit.ToolTip", "Uses 1 channel (byte). Range: 0 to 255" },
		{ "ModuleRelativePath", "Public/DMXProtocolTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DMXProtocol,
		nullptr,
		"EDMXFixtureSignalFormat",
		"EDMXFixtureSignalFormat",
		Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat()
	{
		if (!Z_Registration_Info_UEnum_EDMXFixtureSignalFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDMXFixtureSignalFormat.InnerSingleton, Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDMXFixtureSignalFormat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXProtocolName;
class UScriptStruct* FDMXProtocolName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXProtocolName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXProtocolName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXProtocolName, (UObject*)Z_Construct_UPackage__Script_DMXProtocol(), TEXT("DMXProtocolName"));
	}
	return Z_Registration_Info_UScriptStruct_DMXProtocolName.OuterSingleton;
}
template<> DMXPROTOCOL_API UScriptStruct* StaticStruct<FDMXProtocolName>()
{
	return FDMXProtocolName::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXProtocolName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXProtocolName_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DMX" },
		{ "Comment", "/** A DMX protocol as a name that can be displayed in UI. The protocol is directly accessible via GetProtocol */" },
		{ "ModuleRelativePath", "Public/DMXProtocolTypes.h" },
		{ "ToolTip", "A DMX protocol as a name that can be displayed in UI. The protocol is directly accessible via GetProtocol" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXProtocolName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXProtocolName>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXProtocolName_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** The Protocol Name */" },
		{ "ModuleRelativePath", "Public/DMXProtocolTypes.h" },
		{ "ToolTip", "The Protocol Name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDMXProtocolName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXProtocolName, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXProtocolName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXProtocolName_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXProtocolName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXProtocolName_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXProtocolName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXProtocol,
		nullptr,
		&NewStructOps,
		"DMXProtocolName",
		sizeof(FDMXProtocolName),
		alignof(FDMXProtocolName),
		Z_Construct_UScriptStruct_FDMXProtocolName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXProtocolName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXProtocolName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXProtocolName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXProtocolName()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXProtocolName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXProtocolName.InnerSingleton, Z_Construct_UScriptStruct_FDMXProtocolName_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXProtocolName.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXFixtureCategory;
class UScriptStruct* FDMXFixtureCategory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXFixtureCategory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXFixtureCategory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXFixtureCategory, (UObject*)Z_Construct_UPackage__Script_DMXProtocol(), TEXT("DMXFixtureCategory"));
	}
	return Z_Registration_Info_UScriptStruct_DMXFixtureCategory.OuterSingleton;
}
template<> DMXPROTOCOL_API UScriptStruct* StaticStruct<FDMXFixtureCategory>()
{
	return FDMXFixtureCategory::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXFixtureCategory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureCategory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DMX" },
		{ "Comment", "/** Category of a fixture */" },
		{ "ModuleRelativePath", "Public/DMXProtocolTypes.h" },
		{ "ToolTip", "Category of a fixture" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXFixtureCategory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXFixtureCategory>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureCategory_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** The Protocol Name */" },
		{ "ModuleRelativePath", "Public/DMXProtocolTypes.h" },
		{ "ToolTip", "The Protocol Name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDMXFixtureCategory_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureCategory, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureCategory_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureCategory_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXFixtureCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureCategory_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXFixtureCategory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXProtocol,
		nullptr,
		&NewStructOps,
		"DMXFixtureCategory",
		sizeof(FDMXFixtureCategory),
		alignof(FDMXFixtureCategory),
		Z_Construct_UScriptStruct_FDMXFixtureCategory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureCategory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureCategory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureCategory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXFixtureCategory()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXFixtureCategory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXFixtureCategory.InnerSingleton, Z_Construct_UScriptStruct_FDMXFixtureCategory_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXFixtureCategory.InnerSingleton;
	}
	DEFINE_FUNCTION(UDMXNameContainersConversions::execConv_DMXFixtureCategoryToName)
	{
		P_GET_STRUCT_REF(FDMXFixtureCategory,Z_Param_Out_InFixtureCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UDMXNameContainersConversions::Conv_DMXFixtureCategoryToName(Z_Param_Out_InFixtureCategory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXNameContainersConversions::execConv_DMXFixtureCategoryToString)
	{
		P_GET_STRUCT_REF(FDMXFixtureCategory,Z_Param_Out_InFixtureCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDMXNameContainersConversions::Conv_DMXFixtureCategoryToString(Z_Param_Out_InFixtureCategory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXNameContainersConversions::execConv_DMXProtocolNameToName)
	{
		P_GET_STRUCT_REF(FDMXProtocolName,Z_Param_Out_InProtocolName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UDMXNameContainersConversions::Conv_DMXProtocolNameToName(Z_Param_Out_InProtocolName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXNameContainersConversions::execConv_DMXProtocolNameToString)
	{
		P_GET_STRUCT_REF(FDMXProtocolName,Z_Param_Out_InProtocolName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDMXNameContainersConversions::Conv_DMXProtocolNameToString(Z_Param_Out_InProtocolName);
		P_NATIVE_END;
	}
	void UDMXNameContainersConversions::StaticRegisterNativesUDMXNameContainersConversions()
	{
		UClass* Class = UDMXNameContainersConversions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_DMXFixtureCategoryToName", &UDMXNameContainersConversions::execConv_DMXFixtureCategoryToName },
			{ "Conv_DMXFixtureCategoryToString", &UDMXNameContainersConversions::execConv_DMXFixtureCategoryToString },
			{ "Conv_DMXProtocolNameToName", &UDMXNameContainersConversions::execConv_DMXProtocolNameToName },
			{ "Conv_DMXProtocolNameToString", &UDMXNameContainersConversions::execConv_DMXProtocolNameToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToName_Statics
	{
		struct DMXNameContainersConversions_eventConv_DMXFixtureCategoryToName_Parms
		{
			FDMXFixtureCategory InFixtureCategory;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFixtureCategory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFixtureCategory;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToName_Statics::NewProp_InFixtureCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToName_Statics::NewProp_InFixtureCategory = { "InFixtureCategory", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXNameContainersConversions_eventConv_DMXFixtureCategoryToName_Parms, InFixtureCategory), Z_Construct_UScriptStruct_FDMXFixtureCategory, METADATA_PARAMS(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToName_Statics::NewProp_InFixtureCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToName_Statics::NewProp_InFixtureCategory_MetaData)) }; // 2459608541
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXNameContainersConversions_eventConv_DMXFixtureCategoryToName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToName_Statics::NewProp_InFixtureCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|DMX" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToName (DMX Fixture Category)" },
		{ "ModuleRelativePath", "Public/DMXProtocolTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXNameContainersConversions, nullptr, "Conv_DMXFixtureCategoryToName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToName_Statics::DMXNameContainersConversions_eventConv_DMXFixtureCategoryToName_Parms), Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToString_Statics
	{
		struct DMXNameContainersConversions_eventConv_DMXFixtureCategoryToString_Parms
		{
			FDMXFixtureCategory InFixtureCategory;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFixtureCategory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFixtureCategory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToString_Statics::NewProp_InFixtureCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToString_Statics::NewProp_InFixtureCategory = { "InFixtureCategory", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXNameContainersConversions_eventConv_DMXFixtureCategoryToString_Parms, InFixtureCategory), Z_Construct_UScriptStruct_FDMXFixtureCategory, METADATA_PARAMS(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToString_Statics::NewProp_InFixtureCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToString_Statics::NewProp_InFixtureCategory_MetaData)) }; // 2459608541
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXNameContainersConversions_eventConv_DMXFixtureCategoryToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToString_Statics::NewProp_InFixtureCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|DMX" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (DMX Fixture Category)" },
		{ "ModuleRelativePath", "Public/DMXProtocolTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXNameContainersConversions, nullptr, "Conv_DMXFixtureCategoryToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToString_Statics::DMXNameContainersConversions_eventConv_DMXFixtureCategoryToString_Parms), Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToName_Statics
	{
		struct DMXNameContainersConversions_eventConv_DMXProtocolNameToName_Parms
		{
			FDMXProtocolName InProtocolName;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InProtocolName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InProtocolName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToName_Statics::NewProp_InProtocolName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToName_Statics::NewProp_InProtocolName = { "InProtocolName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXNameContainersConversions_eventConv_DMXProtocolNameToName_Parms, InProtocolName), Z_Construct_UScriptStruct_FDMXProtocolName, METADATA_PARAMS(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToName_Statics::NewProp_InProtocolName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToName_Statics::NewProp_InProtocolName_MetaData)) }; // 127357705
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXNameContainersConversions_eventConv_DMXProtocolNameToName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToName_Statics::NewProp_InProtocolName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|DMX" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToName (DMX Protocol Name)" },
		{ "ModuleRelativePath", "Public/DMXProtocolTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXNameContainersConversions, nullptr, "Conv_DMXProtocolNameToName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToName_Statics::DMXNameContainersConversions_eventConv_DMXProtocolNameToName_Parms), Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToString_Statics
	{
		struct DMXNameContainersConversions_eventConv_DMXProtocolNameToString_Parms
		{
			FDMXProtocolName InProtocolName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InProtocolName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InProtocolName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToString_Statics::NewProp_InProtocolName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToString_Statics::NewProp_InProtocolName = { "InProtocolName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXNameContainersConversions_eventConv_DMXProtocolNameToString_Parms, InProtocolName), Z_Construct_UScriptStruct_FDMXProtocolName, METADATA_PARAMS(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToString_Statics::NewProp_InProtocolName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToString_Statics::NewProp_InProtocolName_MetaData)) }; // 127357705
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXNameContainersConversions_eventConv_DMXProtocolNameToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToString_Statics::NewProp_InProtocolName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|DMX" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (DMX Protocol Name)" },
		{ "ModuleRelativePath", "Public/DMXProtocolTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXNameContainersConversions, nullptr, "Conv_DMXProtocolNameToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToString_Statics::DMXNameContainersConversions_eventConv_DMXProtocolNameToString_Parms), Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXNameContainersConversions);
	UClass* Z_Construct_UClass_UDMXNameContainersConversions_NoRegister()
	{
		return UDMXNameContainersConversions::StaticClass();
	}
	struct Z_Construct_UClass_UDMXNameContainersConversions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXNameContainersConversions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXProtocol,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXNameContainersConversions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToName, "Conv_DMXFixtureCategoryToName" }, // 346417909
		{ &Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXFixtureCategoryToString, "Conv_DMXFixtureCategoryToString" }, // 3646459716
		{ &Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToName, "Conv_DMXProtocolNameToName" }, // 20241966
		{ &Z_Construct_UFunction_UDMXNameContainersConversions_Conv_DMXProtocolNameToString, "Conv_DMXProtocolNameToString" }, // 110200320
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXNameContainersConversions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DMXProtocolTypes.h" },
		{ "ModuleRelativePath", "Public/DMXProtocolTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXNameContainersConversions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXNameContainersConversions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXNameContainersConversions_Statics::ClassParams = {
		&UDMXNameContainersConversions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXNameContainersConversions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXNameContainersConversions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXNameContainersConversions()
	{
		if (!Z_Registration_Info_UClass_UDMXNameContainersConversions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXNameContainersConversions.OuterSingleton, Z_Construct_UClass_UDMXNameContainersConversions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXNameContainersConversions.OuterSingleton;
	}
	template<> DMXPROTOCOL_API UClass* StaticClass<UDMXNameContainersConversions>()
	{
		return UDMXNameContainersConversions::StaticClass();
	}
	UDMXNameContainersConversions::UDMXNameContainersConversions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXNameContainersConversions);
	UDMXNameContainersConversions::~UDMXNameContainersConversions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolTypes_h_Statics::EnumInfo[] = {
		{ EDMXCommunicationType_StaticEnum, TEXT("EDMXCommunicationType"), &Z_Registration_Info_UEnum_EDMXCommunicationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1471026857U) },
		{ EDMXSendResult_StaticEnum, TEXT("EDMXSendResult"), &Z_Registration_Info_UEnum_EDMXSendResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3405712147U) },
		{ EDMXFixtureSignalFormat_StaticEnum, TEXT("EDMXFixtureSignalFormat"), &Z_Registration_Info_UEnum_EDMXFixtureSignalFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 455975797U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolTypes_h_Statics::ScriptStructInfo[] = {
		{ FDMXProtocolName::StaticStruct, Z_Construct_UScriptStruct_FDMXProtocolName_Statics::NewStructOps, TEXT("DMXProtocolName"), &Z_Registration_Info_UScriptStruct_DMXProtocolName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXProtocolName), 127357705U) },
		{ FDMXFixtureCategory::StaticStruct, Z_Construct_UScriptStruct_FDMXFixtureCategory_Statics::NewStructOps, TEXT("DMXFixtureCategory"), &Z_Registration_Info_UScriptStruct_DMXFixtureCategory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXFixtureCategory), 2459608541U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXNameContainersConversions, UDMXNameContainersConversions::StaticClass, TEXT("UDMXNameContainersConversions"), &Z_Registration_Info_UClass_UDMXNameContainersConversions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXNameContainersConversions), 289188443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolTypes_h_2981179679(TEXT("/Script/DMXProtocol"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
