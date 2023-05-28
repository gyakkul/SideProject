// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetDeviceServiceMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetDeviceServiceMessages() {}
// Cross Module References
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceClaimDenied();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceClaimed();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServicePing();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServicePong();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServiceReboot();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceUnclaimed();
	TARGETDEVICESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceVariant();
	UPackage* Z_Construct_UPackage__Script_TargetDeviceServices();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetDeviceServiceTerminateLaunchedProcess;
class UScriptStruct* FTargetDeviceServiceTerminateLaunchedProcess::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetDeviceServiceTerminateLaunchedProcess.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetDeviceServiceTerminateLaunchedProcess.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess, (UObject*)Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceServiceTerminateLaunchedProcess"));
	}
	return Z_Registration_Info_UScriptStruct_TargetDeviceServiceTerminateLaunchedProcess.OuterSingleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceServiceTerminateLaunchedProcess>()
{
	return FTargetDeviceServiceTerminateLaunchedProcess::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variant_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Variant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AppID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements a message for terminating an application running on the device.\n*\n* @see FTargetDeviceServiceTerminateLaunchedProcess\n*/" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message for terminating an application running on the device.\n\n@see FTargetDeviceServiceTerminateLaunchedProcess" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceServiceTerminateLaunchedProcess>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewProp_Variant_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the variant identifier of the target device to use. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the variant identifier of the target device to use." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceServiceTerminateLaunchedProcess, Variant), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewProp_Variant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewProp_Variant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewProp_AppID_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**\n\x09* Holds the identifier of the application to launch.\n\x09*\n\x09* The semantics of this identifier are target platform specific. In some cases it may be\n\x09* a GUID, in other cases it may be the path to the application or some other means of\n\x09* identifying the application. Application identifiers are returned from target device\n\x09* services as result of successful deployment transactions.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the identifier of the application to launch.\n\nThe semantics of this identifier are target platform specific. In some cases it may be\na GUID, in other cases it may be the path to the application or some other means of\nidentifying the application. Application identifiers are returned from target device\nservices as result of successful deployment transactions." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceServiceTerminateLaunchedProcess, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewProp_AppID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewProp_Variant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewProp_AppID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceServiceTerminateLaunchedProcess",
		sizeof(FTargetDeviceServiceTerminateLaunchedProcess),
		alignof(FTargetDeviceServiceTerminateLaunchedProcess),
		Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetDeviceServiceTerminateLaunchedProcess.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetDeviceServiceTerminateLaunchedProcess.InnerSingleton, Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetDeviceServiceTerminateLaunchedProcess.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetDeviceClaimDenied;
class UScriptStruct* FTargetDeviceClaimDenied::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetDeviceClaimDenied.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetDeviceClaimDenied.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceClaimDenied, (UObject*)Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceClaimDenied"));
	}
	return Z_Registration_Info_UScriptStruct_TargetDeviceClaimDenied.OuterSingleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceClaimDenied>()
{
	return FTargetDeviceClaimDenied::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HostName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostUser_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HostUser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that is sent when a device is already claimed by someone else.\n *\n * @see FTargetDeviceClaimDropped\n * @see FTargetDeviceClaimRequest\n */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message that is sent when a device is already claimed by someone else.\n\n@see FTargetDeviceClaimDropped\n@see FTargetDeviceClaimRequest" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceClaimDenied>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the identifier of the device that is already claimed. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the identifier of the device that is already claimed." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceClaimDenied, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_HostName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the host computer that claimed the device. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the host computer that claimed the device." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_HostName = { "HostName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceClaimDenied, HostName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_HostName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_HostName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_HostUser_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the user that claimed the device. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that claimed the device." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_HostUser = { "HostUser", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceClaimDenied, HostUser), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_HostUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_HostUser_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_HostName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewProp_HostUser,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceClaimDenied",
		sizeof(FTargetDeviceClaimDenied),
		alignof(FTargetDeviceClaimDenied),
		Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceClaimDenied()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetDeviceClaimDenied.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetDeviceClaimDenied.InnerSingleton, Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetDeviceClaimDenied.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetDeviceClaimed;
class UScriptStruct* FTargetDeviceClaimed::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetDeviceClaimed.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetDeviceClaimed.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceClaimed, (UObject*)Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceClaimed"));
	}
	return Z_Registration_Info_UScriptStruct_TargetDeviceClaimed.OuterSingleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceClaimed>()
{
	return FTargetDeviceClaimed::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HostName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostUser_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HostUser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that is sent when a service claimed a device.\n *\n * @see FTargetDeviceClaimDenied\n * @see FTargetDeviceClaimDropped\n */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message that is sent when a service claimed a device.\n\n@see FTargetDeviceClaimDenied\n@see FTargetDeviceClaimDropped" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceClaimed>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the identifier of the device that is being claimed. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the identifier of the device that is being claimed." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceClaimed, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_HostName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the host computer that is claiming the device. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the host computer that is claiming the device." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_HostName = { "HostName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceClaimed, HostName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_HostName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_HostName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_HostUser_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the user that is claiming the device. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that is claiming the device." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_HostUser = { "HostUser", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceClaimed, HostUser), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_HostUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_HostUser_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_HostName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewProp_HostUser,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceClaimed",
		sizeof(FTargetDeviceClaimed),
		alignof(FTargetDeviceClaimed),
		Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceClaimed()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetDeviceClaimed.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetDeviceClaimed.InnerSingleton, Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetDeviceClaimed.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetDeviceUnclaimed;
class UScriptStruct* FTargetDeviceUnclaimed::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetDeviceUnclaimed.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetDeviceUnclaimed.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceUnclaimed, (UObject*)Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceUnclaimed"));
	}
	return Z_Registration_Info_UScriptStruct_TargetDeviceUnclaimed.OuterSingleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceUnclaimed>()
{
	return FTargetDeviceUnclaimed::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HostName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostUser_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HostUser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that is sent when a device is no longer claimed.\n *\n * @see FTargetDeviceClaimDenied, FTargetDeviceClaimRequest\n */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message that is sent when a device is no longer claimed.\n\n@see FTargetDeviceClaimDenied, FTargetDeviceClaimRequest" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceUnclaimed>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the identifier of the device that is no longer claimed. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the identifier of the device that is no longer claimed." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceUnclaimed, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_HostName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the host computer that had claimed the device. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the host computer that had claimed the device." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_HostName = { "HostName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceUnclaimed, HostName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_HostName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_HostName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_HostUser_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the user that had claimed the device. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that had claimed the device." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_HostUser = { "HostUser", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceUnclaimed, HostUser), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_HostUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_HostUser_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_HostName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewProp_HostUser,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceUnclaimed",
		sizeof(FTargetDeviceUnclaimed),
		alignof(FTargetDeviceUnclaimed),
		Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceUnclaimed()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetDeviceUnclaimed.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetDeviceUnclaimed.InnerSingleton, Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetDeviceUnclaimed.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetDeviceServicePing;
class UScriptStruct* FTargetDeviceServicePing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetDeviceServicePing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetDeviceServicePing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceServicePing, (UObject*)Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceServicePing"));
	}
	return Z_Registration_Info_UScriptStruct_TargetDeviceServicePing.OuterSingleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceServicePing>()
{
	return FTargetDeviceServicePing::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostUser_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HostUser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message for discovering target device services on the network.\n */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message for discovering target device services on the network." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceServicePing>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::NewProp_HostUser_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the user who generated the ping. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user who generated the ping." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::NewProp_HostUser = { "HostUser", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceServicePing, HostUser), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::NewProp_HostUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::NewProp_HostUser_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::NewProp_HostUser,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceServicePing",
		sizeof(FTargetDeviceServicePing),
		alignof(FTargetDeviceServicePing),
		Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServicePing()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetDeviceServicePing.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetDeviceServicePing.InnerSingleton, Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetDeviceServicePing.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetDeviceVariant;
class UScriptStruct* FTargetDeviceVariant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetDeviceVariant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetDeviceVariant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceVariant, (UObject*)Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceVariant"));
	}
	return Z_Registration_Info_UScriptStruct_TargetDeviceVariant.OuterSingleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceVariant>()
{
	return FTargetDeviceVariant::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariantName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VariantName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPlatformName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetPlatformName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPlatformId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetPlatformId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VanillaPlatformId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VanillaPlatformId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformDisplayName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Struct for a flavor's information\n*/" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Struct for a flavor's information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceVariant>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_DeviceID_MetaData[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceVariant, DeviceID), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_DeviceID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_VariantName_MetaData[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_VariantName = { "VariantName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceVariant, VariantName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_VariantName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_VariantName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_TargetPlatformName_MetaData[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_TargetPlatformName = { "TargetPlatformName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceVariant, TargetPlatformName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_TargetPlatformName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_TargetPlatformName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_TargetPlatformId_MetaData[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_TargetPlatformId = { "TargetPlatformId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceVariant, TargetPlatformId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_TargetPlatformId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_TargetPlatformId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_VanillaPlatformId_MetaData[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_VanillaPlatformId = { "VanillaPlatformId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceVariant, VanillaPlatformId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_VanillaPlatformId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_VanillaPlatformId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_PlatformDisplayName_MetaData[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_PlatformDisplayName = { "PlatformDisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceVariant, PlatformDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_PlatformDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_PlatformDisplayName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_DeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_VariantName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_TargetPlatformName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_TargetPlatformId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_VanillaPlatformId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewProp_PlatformDisplayName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceVariant",
		sizeof(FTargetDeviceVariant),
		alignof(FTargetDeviceVariant),
		Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceVariant()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetDeviceVariant.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetDeviceVariant.InnerSingleton, Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetDeviceVariant.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetDeviceServicePong;
class UScriptStruct* FTargetDeviceServicePong::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetDeviceServicePong.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetDeviceServicePong.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceServicePong, (UObject*)Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceServicePong"));
	}
	return Z_Registration_Info_UScriptStruct_TargetDeviceServicePong.OuterSingleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceServicePong>()
{
	return FTargetDeviceServicePong::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connected_MetaData[];
#endif
		static void NewProp_Connected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Connected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Authorized_MetaData[];
#endif
		static void NewProp_Authorized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Authorized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HostName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostUser_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HostUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Make_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Make;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Model;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceUser_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceUserPassword_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceUserPassword;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shared_MetaData[];
#endif
		static void NewProp_Shared_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Shared;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportsMultiLaunch_MetaData[];
#endif
		static void NewProp_SupportsMultiLaunch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SupportsMultiLaunch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportsPowerOff_MetaData[];
#endif
		static void NewProp_SupportsPowerOff_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SupportsPowerOff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportsPowerOn_MetaData[];
#endif
		static void NewProp_SupportsPowerOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SupportsPowerOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportsReboot_MetaData[];
#endif
		static void NewProp_SupportsReboot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SupportsReboot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportsVariants_MetaData[];
#endif
		static void NewProp_SupportsVariants_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SupportsVariants;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVariant_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultVariant;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Variants_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variants_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Variants;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Aggregated_MetaData[];
#endif
		static void NewProp_Aggregated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Aggregated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllDevicesName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllDevicesName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllDevicesDefaultVariant_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AllDevicesDefaultVariant;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that is sent in response to target device service discovery messages.\n */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message that is sent in response to target device service discovery messages." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceServicePong>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Connected_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds a flag indicating whether the device is currently connected. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether the device is currently connected." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Connected_SetBit(void* Obj)
	{
		((FTargetDeviceServicePong*)Obj)->Connected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Connected = { "Connected", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTargetDeviceServicePong), &Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Connected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Connected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Connected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Authorized_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds a flag indicating whether the device is authorized. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether the device is authorized." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Authorized_SetBit(void* Obj)
	{
		((FTargetDeviceServicePong*)Obj)->Authorized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Authorized = { "Authorized", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTargetDeviceServicePong), &Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Authorized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Authorized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Authorized_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_HostName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the host computer that the device is attached to. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the host computer that the device is attached to." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_HostName = { "HostName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceServicePong, HostName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_HostName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_HostName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_HostUser_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the user under which the host computer is running. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user under which the host computer is running." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_HostUser = { "HostUser", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceServicePong, HostUser), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_HostUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_HostUser_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Make_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the make of the device, i.e. Microsoft or Sony. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the make of the device, i.e. Microsoft or Sony." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Make = { "Make", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceServicePong, Make), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Make_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Make_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Model_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the model of the device. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the model of the device." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceServicePong, Model), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Model_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the human readable name of the device, i.e \"Bob's XBox'. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the human readable name of the device, i.e \"Bob's XBox'." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceServicePong, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DeviceUser_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the user that we log in to remote device as, i.e \"root\". */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that we log in to remote device as, i.e \"root\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DeviceUser = { "DeviceUser", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceServicePong, DeviceUser), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DeviceUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DeviceUser_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DeviceUserPassword_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the password of the user that we log in to remote device as, i.e \"12345\". */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the password of the user that we log in to remote device as, i.e \"12345\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DeviceUserPassword = { "DeviceUserPassword", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceServicePong, DeviceUserPassword), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DeviceUserPassword_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DeviceUserPassword_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Shared_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds a flag indicating whether this device is shared with other users on the network. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether this device is shared with other users on the network." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Shared_SetBit(void* Obj)
	{
		((FTargetDeviceServicePong*)Obj)->Shared = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Shared = { "Shared", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTargetDeviceServicePong), &Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Shared_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Shared_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Shared_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsMultiLaunch_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds a flag indicating whether the device supports running multiple application instances in parallel. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether the device supports running multiple application instances in parallel." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsMultiLaunch_SetBit(void* Obj)
	{
		((FTargetDeviceServicePong*)Obj)->SupportsMultiLaunch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsMultiLaunch = { "SupportsMultiLaunch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTargetDeviceServicePong), &Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsMultiLaunch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsMultiLaunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsMultiLaunch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOff_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds a flag indicating whether the device can be powered off. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether the device can be powered off." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOff_SetBit(void* Obj)
	{
		((FTargetDeviceServicePong*)Obj)->SupportsPowerOff = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOff = { "SupportsPowerOff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTargetDeviceServicePong), &Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOff_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOn_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds a flag indicating whether the device can be powered on. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether the device can be powered on." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOn_SetBit(void* Obj)
	{
		((FTargetDeviceServicePong*)Obj)->SupportsPowerOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOn = { "SupportsPowerOn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTargetDeviceServicePong), &Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsReboot_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds a flag indicating whether the device can be rebooted. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether the device can be rebooted." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsReboot_SetBit(void* Obj)
	{
		((FTargetDeviceServicePong*)Obj)->SupportsReboot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsReboot = { "SupportsReboot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTargetDeviceServicePong), &Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsReboot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsReboot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsReboot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsVariants_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds a flag indicating whether the device's target platform supports variants. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether the device's target platform supports variants." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsVariants_SetBit(void* Obj)
	{
		((FTargetDeviceServicePong*)Obj)->SupportsVariants = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsVariants = { "SupportsVariants", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTargetDeviceServicePong), &Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsVariants_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsVariants_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsVariants_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the device type. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the device type." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceServicePong, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DefaultVariant_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the variant name of the default device. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the variant name of the default device." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DefaultVariant = { "DefaultVariant", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceServicePong, DefaultVariant), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DefaultVariant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DefaultVariant_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Variants_Inner = { "Variants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTargetDeviceVariant, METADATA_PARAMS(nullptr, 0) }; // 232202565
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Variants_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** List of the Flavors this service supports */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "List of the Flavors this service supports" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Variants = { "Variants", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceServicePong, Variants), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Variants_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Variants_MetaData)) }; // 232202565
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Aggregated_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Flag for the \"All devices\" proxy. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Flag for the \"All devices\" proxy." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Aggregated_SetBit(void* Obj)
	{
		((FTargetDeviceServicePong*)Obj)->Aggregated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Aggregated = { "Aggregated", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTargetDeviceServicePong), &Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Aggregated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Aggregated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Aggregated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_AllDevicesName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of \"All devices\" proxy. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of \"All devices\" proxy." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_AllDevicesName = { "AllDevicesName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceServicePong, AllDevicesName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_AllDevicesName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_AllDevicesName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_AllDevicesDefaultVariant_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the default variant name of \"All devices\" proxy. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the default variant name of \"All devices\" proxy." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_AllDevicesDefaultVariant = { "AllDevicesDefaultVariant", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceServicePong, AllDevicesDefaultVariant), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_AllDevicesDefaultVariant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_AllDevicesDefaultVariant_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Connected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Authorized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_HostName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_HostUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Make,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DeviceUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DeviceUserPassword,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Shared,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsMultiLaunch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsPowerOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsReboot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_SupportsVariants,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_DefaultVariant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Variants_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Variants,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_Aggregated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_AllDevicesName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewProp_AllDevicesDefaultVariant,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceServicePong",
		sizeof(FTargetDeviceServicePong),
		alignof(FTargetDeviceServicePong),
		Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServicePong()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetDeviceServicePong.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetDeviceServicePong.InnerSingleton, Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetDeviceServicePong.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetDeviceServicePowerOff;
class UScriptStruct* FTargetDeviceServicePowerOff::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetDeviceServicePowerOff.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetDeviceServicePowerOff.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff, (UObject*)Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceServicePowerOff"));
	}
	return Z_Registration_Info_UScriptStruct_TargetDeviceServicePowerOff.OuterSingleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceServicePowerOff>()
{
	return FTargetDeviceServicePowerOff::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static void NewProp_Force_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Force;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Operator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message for powering on a target device.\n */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message for powering on a target device." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceServicePowerOff>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Force_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/**\n\x09 * Holds a flag indicating whether the power-off should be enforced.\n\x09 *\n\x09 * If powering off is not enforced, if may fail if some running application prevents it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether the power-off should be enforced.\n\nIf powering off is not enforced, if may fail if some running application prevents it." },
	};
#endif
	void Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((FTargetDeviceServicePowerOff*)Obj)->Force = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTargetDeviceServicePowerOff), &Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Force_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Force_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Operator_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the user that wishes to power off the device. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that wishes to power off the device." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceServicePowerOff, Operator), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Operator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Operator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Force,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewProp_Operator,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceServicePowerOff",
		sizeof(FTargetDeviceServicePowerOff),
		alignof(FTargetDeviceServicePowerOff),
		Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetDeviceServicePowerOff.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetDeviceServicePowerOff.InnerSingleton, Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetDeviceServicePowerOff.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetDeviceServicePowerOn;
class UScriptStruct* FTargetDeviceServicePowerOn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetDeviceServicePowerOn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetDeviceServicePowerOn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn, (UObject*)Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceServicePowerOn"));
	}
	return Z_Registration_Info_UScriptStruct_TargetDeviceServicePowerOn.OuterSingleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceServicePowerOn>()
{
	return FTargetDeviceServicePowerOn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Operator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message for powering on a target device.\n */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message for powering on a target device." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceServicePowerOn>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::NewProp_Operator_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the user that wishes to power on the device. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that wishes to power on the device." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceServicePowerOn, Operator), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::NewProp_Operator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::NewProp_Operator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::NewProp_Operator,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceServicePowerOn",
		sizeof(FTargetDeviceServicePowerOn),
		alignof(FTargetDeviceServicePowerOn),
		Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetDeviceServicePowerOn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetDeviceServicePowerOn.InnerSingleton, Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetDeviceServicePowerOn.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetDeviceServiceReboot;
class UScriptStruct* FTargetDeviceServiceReboot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetDeviceServiceReboot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetDeviceServiceReboot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetDeviceServiceReboot, (UObject*)Z_Construct_UPackage__Script_TargetDeviceServices(), TEXT("TargetDeviceServiceReboot"));
	}
	return Z_Registration_Info_UScriptStruct_TargetDeviceServiceReboot.OuterSingleton;
}
template<> TARGETDEVICESERVICES_API UScriptStruct* StaticStruct<FTargetDeviceServiceReboot>()
{
	return FTargetDeviceServiceReboot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Operator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message for rebooting a target device.\n */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Implements a message for rebooting a target device." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetDeviceServiceReboot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::NewProp_Operator_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the user that wishes to reboot the device. */" },
		{ "ModuleRelativePath", "Public/TargetDeviceServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that wishes to reboot the device." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetDeviceServiceReboot, Operator), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::NewProp_Operator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::NewProp_Operator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::NewProp_Operator,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetDeviceServices,
		nullptr,
		&NewStructOps,
		"TargetDeviceServiceReboot",
		sizeof(FTargetDeviceServiceReboot),
		alignof(FTargetDeviceServiceReboot),
		Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetDeviceServiceReboot()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetDeviceServiceReboot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetDeviceServiceReboot.InnerSingleton, Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetDeviceServiceReboot.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_TargetDeviceServices_Public_TargetDeviceServiceMessages_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_TargetDeviceServices_Public_TargetDeviceServiceMessages_h_Statics::ScriptStructInfo[] = {
		{ FTargetDeviceServiceTerminateLaunchedProcess::StaticStruct, Z_Construct_UScriptStruct_FTargetDeviceServiceTerminateLaunchedProcess_Statics::NewStructOps, TEXT("TargetDeviceServiceTerminateLaunchedProcess"), &Z_Registration_Info_UScriptStruct_TargetDeviceServiceTerminateLaunchedProcess, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetDeviceServiceTerminateLaunchedProcess), 3578540977U) },
		{ FTargetDeviceClaimDenied::StaticStruct, Z_Construct_UScriptStruct_FTargetDeviceClaimDenied_Statics::NewStructOps, TEXT("TargetDeviceClaimDenied"), &Z_Registration_Info_UScriptStruct_TargetDeviceClaimDenied, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetDeviceClaimDenied), 661594330U) },
		{ FTargetDeviceClaimed::StaticStruct, Z_Construct_UScriptStruct_FTargetDeviceClaimed_Statics::NewStructOps, TEXT("TargetDeviceClaimed"), &Z_Registration_Info_UScriptStruct_TargetDeviceClaimed, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetDeviceClaimed), 1656757081U) },
		{ FTargetDeviceUnclaimed::StaticStruct, Z_Construct_UScriptStruct_FTargetDeviceUnclaimed_Statics::NewStructOps, TEXT("TargetDeviceUnclaimed"), &Z_Registration_Info_UScriptStruct_TargetDeviceUnclaimed, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetDeviceUnclaimed), 3420752367U) },
		{ FTargetDeviceServicePing::StaticStruct, Z_Construct_UScriptStruct_FTargetDeviceServicePing_Statics::NewStructOps, TEXT("TargetDeviceServicePing"), &Z_Registration_Info_UScriptStruct_TargetDeviceServicePing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetDeviceServicePing), 677800562U) },
		{ FTargetDeviceVariant::StaticStruct, Z_Construct_UScriptStruct_FTargetDeviceVariant_Statics::NewStructOps, TEXT("TargetDeviceVariant"), &Z_Registration_Info_UScriptStruct_TargetDeviceVariant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetDeviceVariant), 232202565U) },
		{ FTargetDeviceServicePong::StaticStruct, Z_Construct_UScriptStruct_FTargetDeviceServicePong_Statics::NewStructOps, TEXT("TargetDeviceServicePong"), &Z_Registration_Info_UScriptStruct_TargetDeviceServicePong, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetDeviceServicePong), 3807700752U) },
		{ FTargetDeviceServicePowerOff::StaticStruct, Z_Construct_UScriptStruct_FTargetDeviceServicePowerOff_Statics::NewStructOps, TEXT("TargetDeviceServicePowerOff"), &Z_Registration_Info_UScriptStruct_TargetDeviceServicePowerOff, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetDeviceServicePowerOff), 193740115U) },
		{ FTargetDeviceServicePowerOn::StaticStruct, Z_Construct_UScriptStruct_FTargetDeviceServicePowerOn_Statics::NewStructOps, TEXT("TargetDeviceServicePowerOn"), &Z_Registration_Info_UScriptStruct_TargetDeviceServicePowerOn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetDeviceServicePowerOn), 97469853U) },
		{ FTargetDeviceServiceReboot::StaticStruct, Z_Construct_UScriptStruct_FTargetDeviceServiceReboot_Statics::NewStructOps, TEXT("TargetDeviceServiceReboot"), &Z_Registration_Info_UScriptStruct_TargetDeviceServiceReboot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetDeviceServiceReboot), 2525113350U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_TargetDeviceServices_Public_TargetDeviceServiceMessages_h_1228032129(TEXT("/Script/TargetDeviceServices"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_TargetDeviceServices_Public_TargetDeviceServiceMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_TargetDeviceServices_Public_TargetDeviceServiceMessages_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
