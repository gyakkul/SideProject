// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Source/LiveLinkVRPN/Public/LiveLinkVRPNConnectionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkVRPNConnectionSettings() {}
// Cross Module References
	LIVELINKVRPN_API UEnum* Z_Construct_UEnum_LiveLinkVRPN_EVRPNDeviceType();
	LIVELINKVRPN_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings();
	UPackage* Z_Construct_UPackage__Script_LiveLinkVRPN();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRPNDeviceType;
	static UEnum* EVRPNDeviceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRPNDeviceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRPNDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveLinkVRPN_EVRPNDeviceType, (UObject*)Z_Construct_UPackage__Script_LiveLinkVRPN(), TEXT("EVRPNDeviceType"));
		}
		return Z_Registration_Info_UEnum_EVRPNDeviceType.OuterSingleton;
	}
	template<> LIVELINKVRPN_API UEnum* StaticEnum<EVRPNDeviceType>()
	{
		return EVRPNDeviceType_StaticEnum();
	}
	struct Z_Construct_UEnum_LiveLinkVRPN_EVRPNDeviceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LiveLinkVRPN_EVRPNDeviceType_Statics::Enumerators[] = {
		{ "EVRPNDeviceType::Analog", (int64)EVRPNDeviceType::Analog },
		{ "EVRPNDeviceType::Dial", (int64)EVRPNDeviceType::Dial },
		{ "EVRPNDeviceType::Button", (int64)EVRPNDeviceType::Button },
		{ "EVRPNDeviceType::Tracker", (int64)EVRPNDeviceType::Tracker },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LiveLinkVRPN_EVRPNDeviceType_Statics::Enum_MetaDataParams[] = {
		{ "Analog.Name", "EVRPNDeviceType::Analog" },
		{ "BlueprintType", "true" },
		{ "Button.Name", "EVRPNDeviceType::Button" },
		{ "Dial.Name", "EVRPNDeviceType::Dial" },
		{ "ModuleRelativePath", "Public/LiveLinkVRPNConnectionSettings.h" },
		{ "Tracker.Name", "EVRPNDeviceType::Tracker" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveLinkVRPN_EVRPNDeviceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LiveLinkVRPN,
		nullptr,
		"EVRPNDeviceType",
		"EVRPNDeviceType",
		Z_Construct_UEnum_LiveLinkVRPN_EVRPNDeviceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLinkVRPN_EVRPNDeviceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LiveLinkVRPN_EVRPNDeviceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLinkVRPN_EVRPNDeviceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LiveLinkVRPN_EVRPNDeviceType()
	{
		if (!Z_Registration_Info_UEnum_EVRPNDeviceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRPNDeviceType.InnerSingleton, Z_Construct_UEnum_LiveLinkVRPN_EVRPNDeviceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRPNDeviceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkVRPNConnectionSettings;
class UScriptStruct* FLiveLinkVRPNConnectionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkVRPNConnectionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkVRPNConnectionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings, (UObject*)Z_Construct_UPackage__Script_LiveLinkVRPN(), TEXT("LiveLinkVRPNConnectionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkVRPNConnectionSettings.OuterSingleton;
}
template<> LIVELINKVRPN_API UScriptStruct* StaticStruct<FLiveLinkVRPNConnectionSettings>()
{
	return FLiveLinkVRPNConnectionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalUpdateRateInHz_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LocalUpdateRateInHz;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SubjectName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkVRPNConnectionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkVRPNConnectionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_IPAddress_MetaData[] = {
		{ "Category", "Connection Settings" },
		{ "Comment", "/** IP address of the VRPN server */" },
		{ "ModuleRelativePath", "Public/LiveLinkVRPNConnectionSettings.h" },
		{ "ToolTip", "IP address of the VRPN server" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkVRPNConnectionSettings, IPAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_IPAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_LocalUpdateRateInHz_MetaData[] = {
		{ "Category", "Connection Settings" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum rate (in Hz) at which to ask the VRPN server to update */" },
		{ "ModuleRelativePath", "Public/LiveLinkVRPNConnectionSettings.h" },
		{ "ToolTip", "Maximum rate (in Hz) at which to ask the VRPN server to update" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_LocalUpdateRateInHz = { "LocalUpdateRateInHz", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkVRPNConnectionSettings, LocalUpdateRateInHz), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_LocalUpdateRateInHz_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_LocalUpdateRateInHz_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "Connection Settings" },
		{ "Comment", "/** VRPN device name */" },
		{ "ModuleRelativePath", "Public/LiveLinkVRPNConnectionSettings.h" },
		{ "ToolTip", "VRPN device name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkVRPNConnectionSettings, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_SubjectName_MetaData[] = {
		{ "Category", "Connection Settings" },
		{ "Comment", "/** LiveLink subject name */" },
		{ "ModuleRelativePath", "Public/LiveLinkVRPNConnectionSettings.h" },
		{ "ToolTip", "LiveLink subject name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkVRPNConnectionSettings, SubjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_SubjectName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Connection Settings" },
		{ "Comment", "/** Device type */" },
		{ "ModuleRelativePath", "Public/LiveLinkVRPNConnectionSettings.h" },
		{ "ToolTip", "Device type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkVRPNConnectionSettings, Type), Z_Construct_UEnum_LiveLinkVRPN_EVRPNDeviceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_Type_MetaData)) }; // 2385685491
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_IPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_LocalUpdateRateInHz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_SubjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkVRPN,
		nullptr,
		&NewStructOps,
		"LiveLinkVRPNConnectionSettings",
		sizeof(FLiveLinkVRPNConnectionSettings),
		alignof(FLiveLinkVRPNConnectionSettings),
		Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkVRPNConnectionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkVRPNConnectionSettings.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkVRPNConnectionSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNConnectionSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNConnectionSettings_h_Statics::EnumInfo[] = {
		{ EVRPNDeviceType_StaticEnum, TEXT("EVRPNDeviceType"), &Z_Registration_Info_UEnum_EVRPNDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2385685491U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNConnectionSettings_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkVRPNConnectionSettings::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkVRPNConnectionSettings_Statics::NewStructOps, TEXT("LiveLinkVRPNConnectionSettings"), &Z_Registration_Info_UScriptStruct_LiveLinkVRPNConnectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkVRPNConnectionSettings), 2653839749U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNConnectionSettings_h_3402494319(TEXT("/Script/LiveLinkVRPN"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNConnectionSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNConnectionSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNConnectionSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkVRPN_Source_LiveLinkVRPN_Public_LiveLinkVRPNConnectionSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
