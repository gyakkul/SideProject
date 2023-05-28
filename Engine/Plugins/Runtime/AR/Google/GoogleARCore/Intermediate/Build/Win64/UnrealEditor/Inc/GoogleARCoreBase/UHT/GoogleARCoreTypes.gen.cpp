// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoogleARCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleARCoreTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreEditorSettings();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreEditorSettings_NoRegister();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreEventManager();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreEventManager_NoRegister();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCorePointCloud();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCorePointCloud_NoRegister();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceMode();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAvailability();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraDepthSensorUsage();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFacing();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFPS();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCoordinates2DType();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreFunctionStatus();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallRequestResult();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallStatus();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreLineTraceChannel();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingFailureReason();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingState();
	GOOGLEARCOREBASE_API UFunction* Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature();
	GOOGLEARCOREBASE_API UScriptStruct* Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig();
	GOOGLEARCOREBASE_API UScriptStruct* Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate();
	UPackage* Z_Construct_UPackage__Script_GoogleARCoreBase();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGoogleARCoreAvailability;
	static UEnum* EGoogleARCoreAvailability_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreAvailability.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGoogleARCoreAvailability.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAvailability, (UObject*)Z_Construct_UPackage__Script_GoogleARCoreBase(), TEXT("EGoogleARCoreAvailability"));
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreAvailability.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UEnum* StaticEnum<EGoogleARCoreAvailability>()
	{
		return EGoogleARCoreAvailability_StaticEnum();
	}
	struct Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAvailability_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAvailability_Statics::Enumerators[] = {
		{ "EGoogleARCoreAvailability::UnknownError", (int64)EGoogleARCoreAvailability::UnknownError },
		{ "EGoogleARCoreAvailability::UnknownChecking", (int64)EGoogleARCoreAvailability::UnknownChecking },
		{ "EGoogleARCoreAvailability::UnknownTimedOut", (int64)EGoogleARCoreAvailability::UnknownTimedOut },
		{ "EGoogleARCoreAvailability::UnsupportedDeviceNotCapable", (int64)EGoogleARCoreAvailability::UnsupportedDeviceNotCapable },
		{ "EGoogleARCoreAvailability::SupportedNotInstalled", (int64)EGoogleARCoreAvailability::SupportedNotInstalled },
		{ "EGoogleARCoreAvailability::SupportedApkTooOld", (int64)EGoogleARCoreAvailability::SupportedApkTooOld },
		{ "EGoogleARCoreAvailability::SupportedInstalled", (int64)EGoogleARCoreAvailability::SupportedInstalled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAvailability_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @defgroup GoogleARCoreBase Google ARCore Base\n/// The base module for Google ARCore plugin\n" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "SupportedApkTooOld.Comment", "/*\n\x09 * The device and Android version are supported, and a version of the\n\x09 * ARCore APK is installed, but that ARCore APK version is too old.\n\x09 */" },
		{ "SupportedApkTooOld.Name", "EGoogleARCoreAvailability::SupportedApkTooOld" },
		{ "SupportedApkTooOld.ToolTip", "* The device and Android version are supported, and a version of the\n* ARCore APK is installed, but that ARCore APK version is too old." },
		{ "SupportedInstalled.Comment", "/* ARCore is supported, installed, and available to use. */" },
		{ "SupportedInstalled.Name", "EGoogleARCoreAvailability::SupportedInstalled" },
		{ "SupportedInstalled.ToolTip", "ARCore is supported, installed, and available to use." },
		{ "SupportedNotInstalled.Comment", "/* The device and Android version are supported, but the ARCore APK is not installed.*/" },
		{ "SupportedNotInstalled.Name", "EGoogleARCoreAvailability::SupportedNotInstalled" },
		{ "SupportedNotInstalled.ToolTip", "The device and Android version are supported, but the ARCore APK is not installed." },
		{ "ToolTip", "@defgroup GoogleARCoreBase Google ARCore Base\nThe base module for Google ARCore plugin" },
		{ "UnknownChecking.Comment", "/* ARCore is not installed, and a query has been issued to check if ARCore is is supported. */" },
		{ "UnknownChecking.Name", "EGoogleARCoreAvailability::UnknownChecking" },
		{ "UnknownChecking.ToolTip", "ARCore is not installed, and a query has been issued to check if ARCore is is supported." },
		{ "UnknownError.Comment", "/* An internal error occurred while determining ARCore availability. */" },
		{ "UnknownError.Name", "EGoogleARCoreAvailability::UnknownError" },
		{ "UnknownError.ToolTip", "An internal error occurred while determining ARCore availability." },
		{ "UnknownTimedOut.Comment", "/*\n\x09 * ARCore is not installed, and the query to check if ARCore is supported\n\x09 * timed out. This may be due to the device being offline.\n\x09 */" },
		{ "UnknownTimedOut.Name", "EGoogleARCoreAvailability::UnknownTimedOut" },
		{ "UnknownTimedOut.ToolTip", "* ARCore is not installed, and the query to check if ARCore is supported\n* timed out. This may be due to the device being offline." },
		{ "UnsupportedDeviceNotCapable.Comment", "/* ARCore is not supported on this device.*/" },
		{ "UnsupportedDeviceNotCapable.Name", "EGoogleARCoreAvailability::UnsupportedDeviceNotCapable" },
		{ "UnsupportedDeviceNotCapable.ToolTip", "ARCore is not supported on this device." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAvailability_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
		nullptr,
		"EGoogleARCoreAvailability",
		"EGoogleARCoreAvailability",
		Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAvailability_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAvailability_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAvailability_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAvailability_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAvailability()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreAvailability.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGoogleARCoreAvailability.InnerSingleton, Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAvailability_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreAvailability.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGoogleARCoreInstallStatus;
	static UEnum* EGoogleARCoreInstallStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreInstallStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGoogleARCoreInstallStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallStatus, (UObject*)Z_Construct_UPackage__Script_GoogleARCoreBase(), TEXT("EGoogleARCoreInstallStatus"));
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreInstallStatus.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UEnum* StaticEnum<EGoogleARCoreInstallStatus>()
	{
		return EGoogleARCoreInstallStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallStatus_Statics::Enumerators[] = {
		{ "EGoogleARCoreInstallStatus::Installed", (int64)EGoogleARCoreInstallStatus::Installed },
		{ "EGoogleARCoreInstallStatus::Requrested", (int64)EGoogleARCoreInstallStatus::Requrested },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Installed.Comment", "/* The requested resource is already installed.*/" },
		{ "Installed.Name", "EGoogleARCoreInstallStatus::Installed" },
		{ "Installed.ToolTip", "The requested resource is already installed." },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "Requrested.Comment", "/* Installation of the resource was requested. The current activity will be paused. */" },
		{ "Requrested.Name", "EGoogleARCoreInstallStatus::Requrested" },
		{ "Requrested.ToolTip", "Installation of the resource was requested. The current activity will be paused." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
		nullptr,
		"EGoogleARCoreInstallStatus",
		"EGoogleARCoreInstallStatus",
		Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallStatus()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreInstallStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGoogleARCoreInstallStatus.InnerSingleton, Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreInstallStatus.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGoogleARCoreInstallRequestResult;
	static UEnum* EGoogleARCoreInstallRequestResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreInstallRequestResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGoogleARCoreInstallRequestResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallRequestResult, (UObject*)Z_Construct_UPackage__Script_GoogleARCoreBase(), TEXT("EGoogleARCoreInstallRequestResult"));
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreInstallRequestResult.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UEnum* StaticEnum<EGoogleARCoreInstallRequestResult>()
	{
		return EGoogleARCoreInstallRequestResult_StaticEnum();
	}
	struct Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallRequestResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallRequestResult_Statics::Enumerators[] = {
		{ "EGoogleARCoreInstallRequestResult::Installed", (int64)EGoogleARCoreInstallRequestResult::Installed },
		{ "EGoogleARCoreInstallRequestResult::DeviceNotCompatible", (int64)EGoogleARCoreInstallRequestResult::DeviceNotCompatible },
		{ "EGoogleARCoreInstallRequestResult::UserDeclinedInstallation", (int64)EGoogleARCoreInstallRequestResult::UserDeclinedInstallation },
		{ "EGoogleARCoreInstallRequestResult::FatalError", (int64)EGoogleARCoreInstallRequestResult::FatalError },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallRequestResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DeviceNotCompatible.Comment", "/* ARCore APK install request failed because the device is not compatible. */" },
		{ "DeviceNotCompatible.Name", "EGoogleARCoreInstallRequestResult::DeviceNotCompatible" },
		{ "DeviceNotCompatible.ToolTip", "ARCore APK install request failed because the device is not compatible." },
		{ "FatalError.Comment", "/* ARCore APK install request failed because unknown error happens while checking or requesting installation. */" },
		{ "FatalError.Name", "EGoogleARCoreInstallRequestResult::FatalError" },
		{ "FatalError.ToolTip", "ARCore APK install request failed because unknown error happens while checking or requesting installation." },
		{ "Installed.Comment", "/* The ARCore APK is installed*/" },
		{ "Installed.Name", "EGoogleARCoreInstallRequestResult::Installed" },
		{ "Installed.ToolTip", "The ARCore APK is installed" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "UserDeclinedInstallation.Comment", "/* ARCore APK install request failed because the current version of android is too old to support ARCore. */" },
		{ "UserDeclinedInstallation.Name", "EGoogleARCoreInstallRequestResult::UserDeclinedInstallation" },
		{ "UserDeclinedInstallation.ToolTip", "ARCore APK install request failed because the current version of android is too old to support ARCore." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallRequestResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
		nullptr,
		"EGoogleARCoreInstallRequestResult",
		"EGoogleARCoreInstallRequestResult",
		Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallRequestResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallRequestResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallRequestResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallRequestResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallRequestResult()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreInstallRequestResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGoogleARCoreInstallRequestResult.InnerSingleton, Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreInstallRequestResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreInstallRequestResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGoogleARCoreFunctionStatus;
	static UEnum* EGoogleARCoreFunctionStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreFunctionStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGoogleARCoreFunctionStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreFunctionStatus, (UObject*)Z_Construct_UPackage__Script_GoogleARCoreBase(), TEXT("EGoogleARCoreFunctionStatus"));
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreFunctionStatus.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UEnum* StaticEnum<EGoogleARCoreFunctionStatus>()
	{
		return EGoogleARCoreFunctionStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreFunctionStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreFunctionStatus_Statics::Enumerators[] = {
		{ "EGoogleARCoreFunctionStatus::Success", (int64)EGoogleARCoreFunctionStatus::Success },
		{ "EGoogleARCoreFunctionStatus::Fatal", (int64)EGoogleARCoreFunctionStatus::Fatal },
		{ "EGoogleARCoreFunctionStatus::SessionPaused", (int64)EGoogleARCoreFunctionStatus::SessionPaused },
		{ "EGoogleARCoreFunctionStatus::NotTracking", (int64)EGoogleARCoreFunctionStatus::NotTracking },
		{ "EGoogleARCoreFunctionStatus::ResourceExhausted", (int64)EGoogleARCoreFunctionStatus::ResourceExhausted },
		{ "EGoogleARCoreFunctionStatus::NotAvailable", (int64)EGoogleARCoreFunctionStatus::NotAvailable },
		{ "EGoogleARCoreFunctionStatus::InvalidType", (int64)EGoogleARCoreFunctionStatus::InvalidType },
		{ "EGoogleARCoreFunctionStatus::IllegalState", (int64)EGoogleARCoreFunctionStatus::IllegalState },
		{ "EGoogleARCoreFunctionStatus::Unknown", (int64)EGoogleARCoreFunctionStatus::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreFunctionStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @ingroup GoogleARCoreBase\n * Describes the status of most ARCore functions.\n */" },
		{ "Fatal.Comment", "/** Function failed due to Fatal error. */" },
		{ "Fatal.Name", "EGoogleARCoreFunctionStatus::Fatal" },
		{ "Fatal.ToolTip", "Function failed due to Fatal error." },
		{ "IllegalState.Comment", "/** Function failed due to it is invoked at an illegal or inappropriate time. */" },
		{ "IllegalState.Name", "EGoogleARCoreFunctionStatus::IllegalState" },
		{ "IllegalState.ToolTip", "Function failed due to it is invoked at an illegal or inappropriate time." },
		{ "InvalidType.Comment", "/** Function failed due to the function augment has invalid type. */" },
		{ "InvalidType.Name", "EGoogleARCoreFunctionStatus::InvalidType" },
		{ "InvalidType.ToolTip", "Function failed due to the function augment has invalid type." },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "NotAvailable.Comment", "/** Function failed due to ARCore session hasn't started or the requested resource isn't available yet. */" },
		{ "NotAvailable.Name", "EGoogleARCoreFunctionStatus::NotAvailable" },
		{ "NotAvailable.ToolTip", "Function failed due to ARCore session hasn't started or the requested resource isn't available yet." },
		{ "NotTracking.Comment", "/** Function failed due to ARCore session isn't in tracking state. */" },
		{ "NotTracking.Name", "EGoogleARCoreFunctionStatus::NotTracking" },
		{ "NotTracking.ToolTip", "Function failed due to ARCore session isn't in tracking state." },
		{ "ResourceExhausted.Comment", "/** Function failed due to the requested resource is exhausted. */" },
		{ "ResourceExhausted.Name", "EGoogleARCoreFunctionStatus::ResourceExhausted" },
		{ "ResourceExhausted.ToolTip", "Function failed due to the requested resource is exhausted." },
		{ "SessionPaused.Comment", "/** Function failed due to the session isn't running. */" },
		{ "SessionPaused.Name", "EGoogleARCoreFunctionStatus::SessionPaused" },
		{ "SessionPaused.ToolTip", "Function failed due to the session isn't running." },
		{ "Success.Comment", "/** Function returned successfully. */" },
		{ "Success.Name", "EGoogleARCoreFunctionStatus::Success" },
		{ "Success.ToolTip", "Function returned successfully." },
		{ "ToolTip", "@ingroup GoogleARCoreBase\nDescribes the status of most ARCore functions." },
		{ "Unknown.Comment", "/** Function failed with unknown reason. */" },
		{ "Unknown.Name", "EGoogleARCoreFunctionStatus::Unknown" },
		{ "Unknown.ToolTip", "Function failed with unknown reason." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreFunctionStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
		nullptr,
		"EGoogleARCoreFunctionStatus",
		"EGoogleARCoreFunctionStatus",
		Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreFunctionStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreFunctionStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreFunctionStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreFunctionStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreFunctionStatus()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreFunctionStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGoogleARCoreFunctionStatus.InnerSingleton, Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreFunctionStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreFunctionStatus.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGoogleARCoreTrackingState;
	static UEnum* EGoogleARCoreTrackingState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreTrackingState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGoogleARCoreTrackingState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingState, (UObject*)Z_Construct_UPackage__Script_GoogleARCoreBase(), TEXT("EGoogleARCoreTrackingState"));
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreTrackingState.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UEnum* StaticEnum<EGoogleARCoreTrackingState>()
	{
		return EGoogleARCoreTrackingState_StaticEnum();
	}
	struct Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingState_Statics::Enumerators[] = {
		{ "EGoogleARCoreTrackingState::Tracking", (int64)EGoogleARCoreTrackingState::Tracking },
		{ "EGoogleARCoreTrackingState::NotTracking", (int64)EGoogleARCoreTrackingState::NotTracking },
		{ "EGoogleARCoreTrackingState::StoppedTracking", (int64)EGoogleARCoreTrackingState::StoppedTracking },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @ingroup GoogleARCoreBase\n * Describes the tracking state of the current ARCore session.\n */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "NotTracking.Comment", "/** Tracking is temporary lost but could recover in the future. */" },
		{ "NotTracking.Name", "EGoogleARCoreTrackingState::NotTracking" },
		{ "NotTracking.ToolTip", "Tracking is temporary lost but could recover in the future." },
		{ "StoppedTracking.Comment", "/** Tracking is lost will not recover. */" },
		{ "StoppedTracking.Name", "EGoogleARCoreTrackingState::StoppedTracking" },
		{ "StoppedTracking.ToolTip", "Tracking is lost will not recover." },
		{ "ToolTip", "@ingroup GoogleARCoreBase\nDescribes the tracking state of the current ARCore session." },
		{ "Tracking.Comment", "/** Tracking is valid. */" },
		{ "Tracking.Name", "EGoogleARCoreTrackingState::Tracking" },
		{ "Tracking.ToolTip", "Tracking is valid." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
		nullptr,
		"EGoogleARCoreTrackingState",
		"EGoogleARCoreTrackingState",
		Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingState()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreTrackingState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGoogleARCoreTrackingState.InnerSingleton, Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreTrackingState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGoogleARCoreCoordinates2DType;
	static UEnum* EGoogleARCoreCoordinates2DType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreCoordinates2DType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGoogleARCoreCoordinates2DType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCoordinates2DType, (UObject*)Z_Construct_UPackage__Script_GoogleARCoreBase(), TEXT("EGoogleARCoreCoordinates2DType"));
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreCoordinates2DType.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UEnum* StaticEnum<EGoogleARCoreCoordinates2DType>()
	{
		return EGoogleARCoreCoordinates2DType_StaticEnum();
	}
	struct Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCoordinates2DType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCoordinates2DType_Statics::Enumerators[] = {
		{ "EGoogleARCoreCoordinates2DType::Texture", (int64)EGoogleARCoreCoordinates2DType::Texture },
		{ "EGoogleARCoreCoordinates2DType::Image", (int64)EGoogleARCoreCoordinates2DType::Image },
		{ "EGoogleARCoreCoordinates2DType::Viewport", (int64)EGoogleARCoreCoordinates2DType::Viewport },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCoordinates2DType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* @ingroup GoogleARCoreBase\n* 2d coordinate systems referenced by ARCore.\n*/" },
		{ "Image.Comment", "/** ARCore normalized pass-through camera image(for CPU usage) space with top-left (0.0f, 0.0f) and bottom-right(1.0f, 1.0f). */" },
		{ "Image.Name", "EGoogleARCoreCoordinates2DType::Image" },
		{ "Image.ToolTip", "ARCore normalized pass-through camera image(for CPU usage) space with top-left (0.0f, 0.0f) and bottom-right(1.0f, 1.0f)." },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "Texture.Comment", "/** ARCore normalized pass-through camera texture(for GPU usage) space with top-left (0.0f, 0.0f) and bottom-right(1.0f, 1.0f). */" },
		{ "Texture.Name", "EGoogleARCoreCoordinates2DType::Texture" },
		{ "Texture.ToolTip", "ARCore normalized pass-through camera texture(for GPU usage) space with top-left (0.0f, 0.0f) and bottom-right(1.0f, 1.0f)." },
		{ "ToolTip", "@ingroup GoogleARCoreBase\n2d coordinate systems referenced by ARCore." },
		{ "Viewport.Comment", "/** UE normalized viewport space with top-left(0,0f ,0.0f) and bottom-right(1.0f, 1.0f) */" },
		{ "Viewport.Name", "EGoogleARCoreCoordinates2DType::Viewport" },
		{ "Viewport.ToolTip", "UE normalized viewport space with top-left(0,0f ,0.0f) and bottom-right(1.0f, 1.0f)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCoordinates2DType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
		nullptr,
		"EGoogleARCoreCoordinates2DType",
		"EGoogleARCoreCoordinates2DType",
		Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCoordinates2DType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCoordinates2DType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCoordinates2DType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCoordinates2DType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCoordinates2DType()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreCoordinates2DType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGoogleARCoreCoordinates2DType.InnerSingleton, Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCoordinates2DType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreCoordinates2DType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GoogleARCoreLightEstimate;
class UScriptStruct* FGoogleARCoreLightEstimate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GoogleARCoreLightEstimate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GoogleARCoreLightEstimate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate, (UObject*)Z_Construct_UPackage__Script_GoogleARCoreBase(), TEXT("GoogleARCoreLightEstimate"));
	}
	return Z_Registration_Info_UScriptStruct_GoogleARCoreLightEstimate.OuterSingleton;
}
template<> GOOGLEARCOREBASE_API UScriptStruct* StaticStruct<FGoogleARCoreLightEstimate>()
{
	return FGoogleARCoreLightEstimate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RGBScaleFactor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RGBScaleFactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A struct describes the ARCore light estimation.\n */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "A struct describes the ARCore light estimation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGoogleARCoreLightEstimate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Category", "GoogleARCore|LightEstimate" },
		{ "Comment", "/** Whether this light estimation is valid. */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "Whether this light estimation is valid." },
	};
#endif
	void Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FGoogleARCoreLightEstimate*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGoogleARCoreLightEstimate), &Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::NewProp_bIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::NewProp_PixelIntensity_MetaData[] = {
		{ "Category", "GoogleARCore|LightEstimate" },
		{ "Comment", "/** The average pixel intensity of the passthrough camera image. */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "The average pixel intensity of the passthrough camera image." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::NewProp_PixelIntensity = { "PixelIntensity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGoogleARCoreLightEstimate, PixelIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::NewProp_PixelIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::NewProp_PixelIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::NewProp_RGBScaleFactor_MetaData[] = {
		{ "Category", "GoogleARCore|LightEstimate" },
		{ "Comment", "/**\n\x09 * The RGB scale to match the color of the light in the real environment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "The RGB scale to match the color of the light in the real environment." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::NewProp_RGBScaleFactor = { "RGBScaleFactor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGoogleARCoreLightEstimate, RGBScaleFactor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::NewProp_RGBScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::NewProp_RGBScaleFactor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::NewProp_PixelIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::NewProp_RGBScaleFactor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
		nullptr,
		&NewStructOps,
		"GoogleARCoreLightEstimate",
		sizeof(FGoogleARCoreLightEstimate),
		alignof(FGoogleARCoreLightEstimate),
		Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate()
	{
		if (!Z_Registration_Info_UScriptStruct_GoogleARCoreLightEstimate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GoogleARCoreLightEstimate.InnerSingleton, Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GoogleARCoreLightEstimate.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGoogleARCoreLineTraceChannel;
	static UEnum* EGoogleARCoreLineTraceChannel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreLineTraceChannel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGoogleARCoreLineTraceChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreLineTraceChannel, (UObject*)Z_Construct_UPackage__Script_GoogleARCoreBase(), TEXT("EGoogleARCoreLineTraceChannel"));
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreLineTraceChannel.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UEnum* StaticEnum<EGoogleARCoreLineTraceChannel>()
	{
		return EGoogleARCoreLineTraceChannel_StaticEnum();
	}
	struct Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreLineTraceChannel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreLineTraceChannel_Statics::Enumerators[] = {
		{ "EGoogleARCoreLineTraceChannel::None", (int64)EGoogleARCoreLineTraceChannel::None },
		{ "EGoogleARCoreLineTraceChannel::FeaturePoint", (int64)EGoogleARCoreLineTraceChannel::FeaturePoint },
		{ "EGoogleARCoreLineTraceChannel::InfinitePlane", (int64)EGoogleARCoreLineTraceChannel::InfinitePlane },
		{ "EGoogleARCoreLineTraceChannel::PlaneUsingExtent", (int64)EGoogleARCoreLineTraceChannel::PlaneUsingExtent },
		{ "EGoogleARCoreLineTraceChannel::PlaneUsingBoundaryPolygon", (int64)EGoogleARCoreLineTraceChannel::PlaneUsingBoundaryPolygon },
		{ "EGoogleARCoreLineTraceChannel::FeaturePointWithSurfaceNormal", (int64)EGoogleARCoreLineTraceChannel::FeaturePointWithSurfaceNormal },
		{ "EGoogleARCoreLineTraceChannel::AugmentedImage", (int64)EGoogleARCoreLineTraceChannel::AugmentedImage },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreLineTraceChannel_Statics::Enum_MetaDataParams[] = {
		{ "AugmentedImage.Comment", "/** Trace against augmented images. */" },
		{ "AugmentedImage.Name", "EGoogleARCoreLineTraceChannel::AugmentedImage" },
		{ "AugmentedImage.ToolTip", "Trace against augmented images." },
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Category", "GoogleARCore|TraceChannel" },
		{ "Comment", "/**\n * @ingroup GoogleARCoreBase\n * Describes which channel ARLineTrace will be performed on.\n */" },
		{ "FeaturePoint.Comment", "/** Trace against feature point cloud. */" },
		{ "FeaturePoint.Name", "EGoogleARCoreLineTraceChannel::FeaturePoint" },
		{ "FeaturePoint.ToolTip", "Trace against feature point cloud." },
		{ "FeaturePointWithSurfaceNormal.Comment", "/**\n\x09 * Trace against feature point and attempt to estimate the normal of the surface centered around the trace hit point.\n\x09 * Surface normal estimation is most likely to succeed on textured surfaces and with camera motion.\n\x09 */" },
		{ "FeaturePointWithSurfaceNormal.Name", "EGoogleARCoreLineTraceChannel::FeaturePointWithSurfaceNormal" },
		{ "FeaturePointWithSurfaceNormal.ToolTip", "Trace against feature point and attempt to estimate the normal of the surface centered around the trace hit point.\nSurface normal estimation is most likely to succeed on textured surfaces and with camera motion." },
		{ "InfinitePlane.Comment", "/** Trace against the infinite plane. */" },
		{ "InfinitePlane.Name", "EGoogleARCoreLineTraceChannel::InfinitePlane" },
		{ "InfinitePlane.ToolTip", "Trace against the infinite plane." },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "None.Name", "EGoogleARCoreLineTraceChannel::None" },
		{ "PlaneUsingBoundaryPolygon.Comment", "/** Trace against the plane using its boundary polygon. */" },
		{ "PlaneUsingBoundaryPolygon.Name", "EGoogleARCoreLineTraceChannel::PlaneUsingBoundaryPolygon" },
		{ "PlaneUsingBoundaryPolygon.ToolTip", "Trace against the plane using its boundary polygon." },
		{ "PlaneUsingExtent.Comment", "/** Trace against the plane using its extent. */" },
		{ "PlaneUsingExtent.Name", "EGoogleARCoreLineTraceChannel::PlaneUsingExtent" },
		{ "PlaneUsingExtent.ToolTip", "Trace against the plane using its extent." },
		{ "ToolTip", "@ingroup GoogleARCoreBase\nDescribes which channel ARLineTrace will be performed on." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreLineTraceChannel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
		nullptr,
		"EGoogleARCoreLineTraceChannel",
		"EGoogleARCoreLineTraceChannel",
		Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreLineTraceChannel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreLineTraceChannel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreLineTraceChannel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreLineTraceChannel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreLineTraceChannel()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreLineTraceChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGoogleARCoreLineTraceChannel.InnerSingleton, Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreLineTraceChannel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreLineTraceChannel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGoogleARCoreCameraFacing;
	static UEnum* EGoogleARCoreCameraFacing_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreCameraFacing.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGoogleARCoreCameraFacing.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFacing, (UObject*)Z_Construct_UPackage__Script_GoogleARCoreBase(), TEXT("EGoogleARCoreCameraFacing"));
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreCameraFacing.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UEnum* StaticEnum<EGoogleARCoreCameraFacing>()
	{
		return EGoogleARCoreCameraFacing_StaticEnum();
	}
	struct Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFacing_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFacing_Statics::Enumerators[] = {
		{ "EGoogleARCoreCameraFacing::None", (int64)EGoogleARCoreCameraFacing::None },
		{ "EGoogleARCoreCameraFacing::Back", (int64)EGoogleARCoreCameraFacing::Back },
		{ "EGoogleARCoreCameraFacing::Front", (int64)EGoogleARCoreCameraFacing::Front },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFacing_Statics::Enum_MetaDataParams[] = {
		{ "Back.Comment", "/* Camera facing away from user. */" },
		{ "Back.Name", "EGoogleARCoreCameraFacing::Back" },
		{ "Back.ToolTip", "Camera facing away from user." },
		{ "BlueprintType", "true" },
		{ "Category", "GoogleARCore|CameraConfig" },
		{ "Comment", "/**\n * @ingroup GoogleARCoreBase\n * Describes the orientation of the selected camera relative to the device display.\n */" },
		{ "Front.Comment", "/* Camera facing towards user. */" },
		{ "Front.Name", "EGoogleARCoreCameraFacing::Front" },
		{ "Front.ToolTip", "Camera facing towards user." },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EGoogleARCoreCameraFacing::None" },
		{ "ToolTip", "@ingroup GoogleARCoreBase\nDescribes the orientation of the selected camera relative to the device display." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFacing_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
		nullptr,
		"EGoogleARCoreCameraFacing",
		"EGoogleARCoreCameraFacing",
		Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFacing_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFacing_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFacing_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFacing_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFacing()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreCameraFacing.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGoogleARCoreCameraFacing.InnerSingleton, Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFacing_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreCameraFacing.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGoogleARCoreAugmentedFaceMode;
	static UEnum* EGoogleARCoreAugmentedFaceMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreAugmentedFaceMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGoogleARCoreAugmentedFaceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceMode, (UObject*)Z_Construct_UPackage__Script_GoogleARCoreBase(), TEXT("EGoogleARCoreAugmentedFaceMode"));
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreAugmentedFaceMode.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UEnum* StaticEnum<EGoogleARCoreAugmentedFaceMode>()
	{
		return EGoogleARCoreAugmentedFaceMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceMode_Statics::Enumerators[] = {
		{ "EGoogleARCoreAugmentedFaceMode::Disabled", (int64)EGoogleARCoreAugmentedFaceMode::Disabled },
		{ "EGoogleARCoreAugmentedFaceMode::PoseAndMesh", (int64)EGoogleARCoreAugmentedFaceMode::PoseAndMesh },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "GoogleARCore|AugmentedFace" },
		{ "Comment", "/**\n * @ingroup GoogleARCoreBase\n * Describes the possible modes for Augmented Face detection.\n */" },
		{ "Disabled.Comment", "/* A mode where AugmentedFace detection is disabled. */" },
		{ "Disabled.Name", "EGoogleARCoreAugmentedFaceMode::Disabled" },
		{ "Disabled.ToolTip", "A mode where AugmentedFace detection is disabled." },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "PoseAndMesh.Comment", "/* A mode where AugmentedFace detection performs face pose, region pose and face mesh estimation. */" },
		{ "PoseAndMesh.Name", "EGoogleARCoreAugmentedFaceMode::PoseAndMesh" },
		{ "PoseAndMesh.ToolTip", "A mode where AugmentedFace detection performs face pose, region pose and face mesh estimation." },
		{ "ToolTip", "@ingroup GoogleARCoreBase\nDescribes the possible modes for Augmented Face detection." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
		nullptr,
		"EGoogleARCoreAugmentedFaceMode",
		"EGoogleARCoreAugmentedFaceMode",
		Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceMode()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreAugmentedFaceMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGoogleARCoreAugmentedFaceMode.InnerSingleton, Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreAugmentedFaceMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGoogleARCoreTrackingFailureReason;
	static UEnum* EGoogleARCoreTrackingFailureReason_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreTrackingFailureReason.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGoogleARCoreTrackingFailureReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingFailureReason, (UObject*)Z_Construct_UPackage__Script_GoogleARCoreBase(), TEXT("EGoogleARCoreTrackingFailureReason"));
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreTrackingFailureReason.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UEnum* StaticEnum<EGoogleARCoreTrackingFailureReason>()
	{
		return EGoogleARCoreTrackingFailureReason_StaticEnum();
	}
	struct Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingFailureReason_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingFailureReason_Statics::Enumerators[] = {
		{ "EGoogleARCoreTrackingFailureReason::None", (int64)EGoogleARCoreTrackingFailureReason::None },
		{ "EGoogleARCoreTrackingFailureReason::BadState", (int64)EGoogleARCoreTrackingFailureReason::BadState },
		{ "EGoogleARCoreTrackingFailureReason::InsufficientLight", (int64)EGoogleARCoreTrackingFailureReason::InsufficientLight },
		{ "EGoogleARCoreTrackingFailureReason::ExcessiveMotion", (int64)EGoogleARCoreTrackingFailureReason::ExcessiveMotion },
		{ "EGoogleARCoreTrackingFailureReason::InsufficientFeatures", (int64)EGoogleARCoreTrackingFailureReason::InsufficientFeatures },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingFailureReason_Statics::Enum_MetaDataParams[] = {
		{ "BadState.Comment", "/**\n\x09 * Tracking lost due to bad internal state. Please try restarting the AR experience.\n\x09 * This should be seen rarely, and should be reported to and fixed by ARCore team.\n\x09 */" },
		{ "BadState.Name", "EGoogleARCoreTrackingFailureReason::BadState" },
		{ "BadState.ToolTip", "Tracking lost due to bad internal state. Please try restarting the AR experience.\nThis should be seen rarely, and should be reported to and fixed by ARCore team." },
		{ "BlueprintType", "true" },
		{ "Category", "GoogleARCore|AugmentedFace" },
		{ "Comment", "/**\n * @ingroup GoogleARCoreBase\n * Describes the possible tracking failure reasons in ARCore.\n */" },
		{ "ExcessiveMotion.Comment", "/** Tracking lost due to excessive motion. Please  move device more slowly. */" },
		{ "ExcessiveMotion.Name", "EGoogleARCoreTrackingFailureReason::ExcessiveMotion" },
		{ "ExcessiveMotion.ToolTip", "Tracking lost due to excessive motion. Please  move device more slowly." },
		{ "InsufficientFeatures.Comment", "/**\n\x09 * Tracking lost due to insufficient trackable features. Please move to area with more features,\n\x09 * such as corners, objects, surfaces with texture. Avoid blank walls and surfaces without detail.\n\x09 */" },
		{ "InsufficientFeatures.Name", "EGoogleARCoreTrackingFailureReason::InsufficientFeatures" },
		{ "InsufficientFeatures.ToolTip", "Tracking lost due to insufficient trackable features. Please move to area with more features,\nsuch as corners, objects, surfaces with texture. Avoid blank walls and surfaces without detail." },
		{ "InsufficientLight.Comment", "/** Tracking lost due to poor lighting conditions. Please move to a more brightly lit area */" },
		{ "InsufficientLight.Name", "EGoogleARCoreTrackingFailureReason::InsufficientLight" },
		{ "InsufficientLight.ToolTip", "Tracking lost due to poor lighting conditions. Please move to a more brightly lit area" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "None.Comment", "/** Tracking is working normally, or ARCore session is not currently running. */" },
		{ "None.Name", "EGoogleARCoreTrackingFailureReason::None" },
		{ "None.ToolTip", "Tracking is working normally, or ARCore session is not currently running." },
		{ "ToolTip", "@ingroup GoogleARCoreBase\nDescribes the possible tracking failure reasons in ARCore." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingFailureReason_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
		nullptr,
		"EGoogleARCoreTrackingFailureReason",
		"EGoogleARCoreTrackingFailureReason",
		Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingFailureReason_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingFailureReason_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingFailureReason_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingFailureReason_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingFailureReason()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreTrackingFailureReason.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGoogleARCoreTrackingFailureReason.InnerSingleton, Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreTrackingFailureReason_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreTrackingFailureReason.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGoogleARCoreCameraFPS;
	static UEnum* EGoogleARCoreCameraFPS_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreCameraFPS.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGoogleARCoreCameraFPS.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFPS, (UObject*)Z_Construct_UPackage__Script_GoogleARCoreBase(), TEXT("EGoogleARCoreCameraFPS"));
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreCameraFPS.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UEnum* StaticEnum<EGoogleARCoreCameraFPS>()
	{
		return EGoogleARCoreCameraFPS_StaticEnum();
	}
	struct Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFPS_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFPS_Statics::Enumerators[] = {
		{ "EGoogleARCoreCameraFPS::FPS_Any", (int64)EGoogleARCoreCameraFPS::FPS_Any },
		{ "EGoogleARCoreCameraFPS::FPS_30", (int64)EGoogleARCoreCameraFPS::FPS_30 },
		{ "EGoogleARCoreCameraFPS::FPS_60", (int64)EGoogleARCoreCameraFPS::FPS_60 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFPS_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "GoogleARCore|CameraConfig" },
		{ "Comment", "/**\n * @ingroup GoogleARCoreBase\n * Describes the target FPS of the ARCore camera.\n */" },
		{ "FPS_30.Comment", "/** Targeting 30 FPS. */" },
		{ "FPS_30.Name", "EGoogleARCoreCameraFPS::FPS_30" },
		{ "FPS_30.ToolTip", "Targeting 30 FPS." },
		{ "FPS_60.Comment", "/** Targeting 60 FPS. */" },
		{ "FPS_60.Name", "EGoogleARCoreCameraFPS::FPS_60" },
		{ "FPS_60.ToolTip", "Targeting 60 FPS." },
		{ "FPS_Any.Comment", "/** Targeting any FPS. */" },
		{ "FPS_Any.Name", "EGoogleARCoreCameraFPS::FPS_Any" },
		{ "FPS_Any.ToolTip", "Targeting any FPS." },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "@ingroup GoogleARCoreBase\nDescribes the target FPS of the ARCore camera." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFPS_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
		nullptr,
		"EGoogleARCoreCameraFPS",
		"EGoogleARCoreCameraFPS",
		Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFPS_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFPS_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFPS_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFPS_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFPS()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreCameraFPS.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGoogleARCoreCameraFPS.InnerSingleton, Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFPS_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreCameraFPS.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGoogleARCoreCameraDepthSensorUsage;
	static UEnum* EGoogleARCoreCameraDepthSensorUsage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreCameraDepthSensorUsage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGoogleARCoreCameraDepthSensorUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraDepthSensorUsage, (UObject*)Z_Construct_UPackage__Script_GoogleARCoreBase(), TEXT("EGoogleARCoreCameraDepthSensorUsage"));
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreCameraDepthSensorUsage.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UEnum* StaticEnum<EGoogleARCoreCameraDepthSensorUsage>()
	{
		return EGoogleARCoreCameraDepthSensorUsage_StaticEnum();
	}
	struct Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraDepthSensorUsage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraDepthSensorUsage_Statics::Enumerators[] = {
		{ "EGoogleARCoreCameraDepthSensorUsage::DepthSensor_Any", (int64)EGoogleARCoreCameraDepthSensorUsage::DepthSensor_Any },
		{ "EGoogleARCoreCameraDepthSensorUsage::DepthSensor_RequireAndUse", (int64)EGoogleARCoreCameraDepthSensorUsage::DepthSensor_RequireAndUse },
		{ "EGoogleARCoreCameraDepthSensorUsage::DepthSensor_DoNotUse", (int64)EGoogleARCoreCameraDepthSensorUsage::DepthSensor_DoNotUse },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraDepthSensorUsage_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "GoogleARCore|CameraConfig" },
		{ "Comment", "/**\n * @ingroup GoogleARCoreBase\n * Describes the usage of the depth sensor of the ARCore camera.\n */" },
		{ "DepthSensor_Any.Comment", "/** Do not specify the depth sensor usage. */" },
		{ "DepthSensor_Any.Name", "EGoogleARCoreCameraDepthSensorUsage::DepthSensor_Any" },
		{ "DepthSensor_Any.ToolTip", "Do not specify the depth sensor usage." },
		{ "DepthSensor_DoNotUse.Comment", "/** Do not use the depth sensor. */" },
		{ "DepthSensor_DoNotUse.Name", "EGoogleARCoreCameraDepthSensorUsage::DepthSensor_DoNotUse" },
		{ "DepthSensor_DoNotUse.ToolTip", "Do not use the depth sensor." },
		{ "DepthSensor_RequireAndUse.Comment", "/** Require and use the depth sensor. */" },
		{ "DepthSensor_RequireAndUse.Name", "EGoogleARCoreCameraDepthSensorUsage::DepthSensor_RequireAndUse" },
		{ "DepthSensor_RequireAndUse.ToolTip", "Require and use the depth sensor." },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "@ingroup GoogleARCoreBase\nDescribes the usage of the depth sensor of the ARCore camera." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraDepthSensorUsage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
		nullptr,
		"EGoogleARCoreCameraDepthSensorUsage",
		"EGoogleARCoreCameraDepthSensorUsage",
		Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraDepthSensorUsage_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraDepthSensorUsage_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraDepthSensorUsage_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraDepthSensorUsage_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraDepthSensorUsage()
	{
		if (!Z_Registration_Info_UEnum_EGoogleARCoreCameraDepthSensorUsage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGoogleARCoreCameraDepthSensorUsage.InnerSingleton, Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraDepthSensorUsage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGoogleARCoreCameraDepthSensorUsage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GoogleARCoreCameraConfig;
class UScriptStruct* FGoogleARCoreCameraConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GoogleARCoreCameraConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GoogleARCoreCameraConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig, (UObject*)Z_Construct_UPackage__Script_GoogleARCoreBase(), TEXT("GoogleARCoreCameraConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GoogleARCoreCameraConfig.OuterSingleton;
}
template<> GOOGLEARCOREBASE_API UScriptStruct* StaticStruct<FGoogleARCoreCameraConfig>()
{
	return FGoogleARCoreCameraConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraImageResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraImageResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraTextureResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraTextureResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CameraID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFPS_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetFPS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthSensorUsage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DepthSensorUsage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Camera configuration from ARCore.\n */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "Camera configuration from ARCore." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGoogleARCoreCameraConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_CameraImageResolution_MetaData[] = {
		{ "Category", "GoogleARCore|CameraConfig" },
		{ "Comment", "/**\n\x09 * CPU-accessible camera image resolution.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "CPU-accessible camera image resolution." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_CameraImageResolution = { "CameraImageResolution", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGoogleARCoreCameraConfig, CameraImageResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_CameraImageResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_CameraImageResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_CameraTextureResolution_MetaData[] = {
		{ "Category", "GoogleARCore|CameraConfig" },
		{ "Comment", "/**\n\x09 * Texture resolution for the camera image accessible to the\n\x09 * graphics API and shaders.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "Texture resolution for the camera image accessible to the\ngraphics API and shaders." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_CameraTextureResolution = { "CameraTextureResolution", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGoogleARCoreCameraConfig, CameraTextureResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_CameraTextureResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_CameraTextureResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_CameraID_MetaData[] = {
		{ "Category", "GoogleARCore|CameraConfig" },
		{ "Comment", "/** The id of the camera will be used in this CameraConfig. */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "The id of the camera will be used in this CameraConfig." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_CameraID = { "CameraID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGoogleARCoreCameraConfig, CameraID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_CameraID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_CameraID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_TargetFPS_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/GoogleARCoreBase.EGoogleARCoreCameraFPS" },
		{ "Category", "GoogleARCore|CameraConfig" },
		{ "Comment", "/** The target FPS of the camera. */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "The target FPS of the camera." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_TargetFPS = { "TargetFPS", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGoogleARCoreCameraConfig, TargetFPS), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_TargetFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_TargetFPS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_DepthSensorUsage_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/GoogleARCoreBase.EGoogleARCoreCameraDepthSensorUsage" },
		{ "Category", "GoogleARCore|CameraConfig" },
		{ "Comment", "/** The desired depth sensor usage of the camera. */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "The desired depth sensor usage of the camera." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_DepthSensorUsage = { "DepthSensorUsage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGoogleARCoreCameraConfig, DepthSensorUsage), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_DepthSensorUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_DepthSensorUsage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_CameraImageResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_CameraTextureResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_CameraID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_TargetFPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewProp_DepthSensorUsage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
		nullptr,
		&NewStructOps,
		"GoogleARCoreCameraConfig",
		sizeof(FGoogleARCoreCameraConfig),
		alignof(FGoogleARCoreCameraConfig),
		Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_GoogleARCoreCameraConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GoogleARCoreCameraConfig.InnerSingleton, Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GoogleARCoreCameraConfig.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature_Statics
	{
		struct GoogleARCoreEventManager_eventGoogleARCoreOnConfigCameraDynamicDelegate_Parms
		{
			TArray<FGoogleARCoreCameraConfig> SupportedCameraConfig;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedCameraConfig_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedCameraConfig_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedCameraConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature_Statics::NewProp_SupportedCameraConfig_Inner = { "SupportedCameraConfig", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig, METADATA_PARAMS(nullptr, 0) }; // 1555340257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature_Statics::NewProp_SupportedCameraConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature_Statics::NewProp_SupportedCameraConfig = { "SupportedCameraConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreEventManager_eventGoogleARCoreOnConfigCameraDynamicDelegate_Parms, SupportedCameraConfig), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature_Statics::NewProp_SupportedCameraConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature_Statics::NewProp_SupportedCameraConfig_MetaData)) }; // 1555340257
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature_Statics::NewProp_SupportedCameraConfig_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature_Statics::NewProp_SupportedCameraConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// @cond EXCLUDE_FROM_DOXYGEN\n" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "@cond EXCLUDE_FROM_DOXYGEN" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreEventManager, nullptr, "GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature_Statics::GoogleARCoreEventManager_eventGoogleARCoreOnConfigCameraDynamicDelegate_Parms), Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UGoogleARCoreEventManager::FGoogleARCoreOnConfigCameraDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& GoogleARCoreOnConfigCameraDynamicDelegate, TArray<FGoogleARCoreCameraConfig> const& SupportedCameraConfig)
{
	struct GoogleARCoreEventManager_eventGoogleARCoreOnConfigCameraDynamicDelegate_Parms
	{
		TArray<FGoogleARCoreCameraConfig> SupportedCameraConfig;
	};
	GoogleARCoreEventManager_eventGoogleARCoreOnConfigCameraDynamicDelegate_Parms Parms;
	Parms.SupportedCameraConfig=SupportedCameraConfig;
	GoogleARCoreOnConfigCameraDynamicDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UGoogleARCoreEventManager::StaticRegisterNativesUGoogleARCoreEventManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoogleARCoreEventManager);
	UClass* Z_Construct_UClass_UGoogleARCoreEventManager_NoRegister()
	{
		return UGoogleARCoreEventManager::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleARCoreEventManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConfigCamera_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConfigCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleARCoreEventManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UGoogleARCoreEventManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature, "GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature" }, // 2904113869
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreEventManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/**\n * Manager for ARCore delegates.\n */" },
		{ "IncludePath", "GoogleARCoreTypes.h" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "Manager for ARCore delegates." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreEventManager_Statics::NewProp_OnConfigCamera_MetaData[] = {
		{ "Comment", "/**\n\x09 * A dynamic delegate can be assigned through blueprint. Will be called before ARSession started and returns\n\x09 * an array of supported ARCore camera config.\n\x09 *\n\x09 * The array will always return 3 camera configs. The GPU texture resolutions\n\x09 * are the same in all three configs. Currently, most devices provide GPU\n\x09 * texture resolution of 1920 x 1080, but devices might provide higher or lower\n\x09 * resolution textures, depending on device capabilities. The CPU image\n\x09 * resolutions returned are VGA, 720p, and a resolution matching the GPU\n\x09 * texture.\n\x09 *\n\x09 * Bind this delegate if you want to choose a specific camera config in your app. Call\n\x09 * UGoogleARCoreSessionFunctionLibrary::ConfigARCoreCamera after the delegate is triggered.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "A dynamic delegate can be assigned through blueprint. Will be called before ARSession started and returns\nan array of supported ARCore camera config.\n\nThe array will always return 3 camera configs. The GPU texture resolutions\nare the same in all three configs. Currently, most devices provide GPU\ntexture resolution of 1920 x 1080, but devices might provide higher or lower\nresolution textures, depending on device capabilities. The CPU image\nresolutions returned are VGA, 720p, and a resolution matching the GPU\ntexture.\n\nBind this delegate if you want to choose a specific camera config in your app. Call\nUGoogleARCoreSessionFunctionLibrary::ConfigARCoreCamera after the delegate is triggered." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGoogleARCoreEventManager_Statics::NewProp_OnConfigCamera = { "OnConfigCamera", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGoogleARCoreEventManager, OnConfigCamera), Z_Construct_UDelegateFunction_UGoogleARCoreEventManager_GoogleARCoreOnConfigCameraDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreEventManager_Statics::NewProp_OnConfigCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreEventManager_Statics::NewProp_OnConfigCamera_MetaData)) }; // 2904113869
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoogleARCoreEventManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreEventManager_Statics::NewProp_OnConfigCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleARCoreEventManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleARCoreEventManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoogleARCoreEventManager_Statics::ClassParams = {
		&UGoogleARCoreEventManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UGoogleARCoreEventManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreEventManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreEventManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreEventManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoogleARCoreEventManager()
	{
		if (!Z_Registration_Info_UClass_UGoogleARCoreEventManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoogleARCoreEventManager.OuterSingleton, Z_Construct_UClass_UGoogleARCoreEventManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGoogleARCoreEventManager.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UClass* StaticClass<UGoogleARCoreEventManager>()
	{
		return UGoogleARCoreEventManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleARCoreEventManager);
	DEFINE_FUNCTION(UGoogleARCorePointCloud::execReleasePointCloud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleasePointCloud();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCorePointCloud::execGetPointInTrackingSpace)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTrackingSpaceLocation);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutConfidence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPointInTrackingSpace(Z_Param_Index,Z_Param_Out_OutTrackingSpaceLocation,Z_Param_Out_OutConfidence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCorePointCloud::execGetPointId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPointId(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCorePointCloud::execGetPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWorldPosition);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutConfidence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPoint(Z_Param_Index,Z_Param_Out_OutWorldPosition,Z_Param_Out_OutConfidence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCorePointCloud::execGetPointNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPointNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCorePointCloud::execIsUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUpdated();
		P_NATIVE_END;
	}
	void UGoogleARCorePointCloud::StaticRegisterNativesUGoogleARCorePointCloud()
	{
		UClass* Class = UGoogleARCorePointCloud::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPoint", &UGoogleARCorePointCloud::execGetPoint },
			{ "GetPointId", &UGoogleARCorePointCloud::execGetPointId },
			{ "GetPointInTrackingSpace", &UGoogleARCorePointCloud::execGetPointInTrackingSpace },
			{ "GetPointNum", &UGoogleARCorePointCloud::execGetPointNum },
			{ "IsUpdated", &UGoogleARCorePointCloud::execIsUpdated },
			{ "ReleasePointCloud", &UGoogleARCorePointCloud::execReleasePointCloud },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGoogleARCorePointCloud_GetPoint_Statics
	{
		struct GoogleARCorePointCloud_eventGetPoint_Parms
		{
			int32 Index;
			FVector OutWorldPosition;
			float OutConfidence;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutWorldPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutConfidence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGoogleARCorePointCloud_GetPoint_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCorePointCloud_eventGetPoint_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCorePointCloud_GetPoint_Statics::NewProp_OutWorldPosition = { "OutWorldPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCorePointCloud_eventGetPoint_Parms, OutWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoogleARCorePointCloud_GetPoint_Statics::NewProp_OutConfidence = { "OutConfidence", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCorePointCloud_eventGetPoint_Parms, OutConfidence), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCorePointCloud_GetPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCorePointCloud_GetPoint_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCorePointCloud_GetPoint_Statics::NewProp_OutWorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCorePointCloud_GetPoint_Statics::NewProp_OutConfidence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCorePointCloud_GetPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|PointCloud" },
		{ "Comment", "/** Returns the point position in Unreal world space and it's confidence value from 0 ~ 1. */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "Returns the point position in Unreal world space and it's confidence value from 0 ~ 1." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCorePointCloud_GetPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCorePointCloud, nullptr, "GetPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCorePointCloud_GetPoint_Statics::GoogleARCorePointCloud_eventGetPoint_Parms), Z_Construct_UFunction_UGoogleARCorePointCloud_GetPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCorePointCloud_GetPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCorePointCloud_GetPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCorePointCloud_GetPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCorePointCloud_GetPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCorePointCloud_GetPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointId_Statics
	{
		struct GoogleARCorePointCloud_eventGetPointId_Parms
		{
			int32 Index;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointId_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCorePointCloud_eventGetPointId_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCorePointCloud_eventGetPointId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointId_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointId_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|PointCloud" },
		{ "Comment", "/**\n\x09 * Returns the point Id of the point at the given index.\n\x09 *\n\x09 * Each point has a unique identifier (within a session) that is persistent\n\x09 * across frames. That is, if a point from point cloud 1 has the same id as the\n\x09 * point from point cloud 2, then it represents the same point in space.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "Returns the point Id of the point at the given index.\n\nEach point has a unique identifier (within a session) that is persistent\nacross frames. That is, if a point from point cloud 1 has the same id as the\npoint from point cloud 2, then it represents the same point in space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCorePointCloud, nullptr, "GetPointId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointId_Statics::GoogleARCorePointCloud_eventGetPointId_Parms), Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointInTrackingSpace_Statics
	{
		struct GoogleARCorePointCloud_eventGetPointInTrackingSpace_Parms
		{
			int32 Index;
			FVector OutTrackingSpaceLocation;
			float OutConfidence;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTrackingSpaceLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutConfidence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointInTrackingSpace_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCorePointCloud_eventGetPointInTrackingSpace_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointInTrackingSpace_Statics::NewProp_OutTrackingSpaceLocation = { "OutTrackingSpaceLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCorePointCloud_eventGetPointInTrackingSpace_Parms, OutTrackingSpaceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointInTrackingSpace_Statics::NewProp_OutConfidence = { "OutConfidence", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCorePointCloud_eventGetPointInTrackingSpace_Parms, OutConfidence), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointInTrackingSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointInTrackingSpace_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointInTrackingSpace_Statics::NewProp_OutTrackingSpaceLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointInTrackingSpace_Statics::NewProp_OutConfidence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointInTrackingSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|PointCloud" },
		{ "Comment", "/** Returns the point position in Unreal AR Tracking space. */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "Returns the point position in Unreal AR Tracking space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointInTrackingSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCorePointCloud, nullptr, "GetPointInTrackingSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointInTrackingSpace_Statics::GoogleARCorePointCloud_eventGetPointInTrackingSpace_Parms), Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointInTrackingSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointInTrackingSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointInTrackingSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointInTrackingSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointInTrackingSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointInTrackingSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointNum_Statics
	{
		struct GoogleARCorePointCloud_eventGetPointNum_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCorePointCloud_eventGetPointNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointNum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|PointCloud" },
		{ "Comment", "/** Returns the number of point inside this point cloud. */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "Returns the number of point inside this point cloud." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCorePointCloud, nullptr, "GetPointNum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointNum_Statics::GoogleARCorePointCloud_eventGetPointNum_Parms), Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCorePointCloud_IsUpdated_Statics
	{
		struct GoogleARCorePointCloud_eventIsUpdated_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGoogleARCorePointCloud_IsUpdated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GoogleARCorePointCloud_eventIsUpdated_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGoogleARCorePointCloud_IsUpdated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GoogleARCorePointCloud_eventIsUpdated_Parms), &Z_Construct_UFunction_UGoogleARCorePointCloud_IsUpdated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCorePointCloud_IsUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCorePointCloud_IsUpdated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCorePointCloud_IsUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|PointCloud" },
		{ "Comment", "/** Checks if this point cloud has been updated in this frame. */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "Checks if this point cloud has been updated in this frame." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCorePointCloud_IsUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCorePointCloud, nullptr, "IsUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCorePointCloud_IsUpdated_Statics::GoogleARCorePointCloud_eventIsUpdated_Parms), Z_Construct_UFunction_UGoogleARCorePointCloud_IsUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCorePointCloud_IsUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCorePointCloud_IsUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCorePointCloud_IsUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCorePointCloud_IsUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCorePointCloud_IsUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCorePointCloud_ReleasePointCloud_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCorePointCloud_ReleasePointCloud_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|PointCloud" },
		{ "Comment", "/** Release PointCloud's resources back to ArCore. Data will not be available after releasePointCloud is called. */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "Release PointCloud's resources back to ArCore. Data will not be available after releasePointCloud is called." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCorePointCloud_ReleasePointCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCorePointCloud, nullptr, "ReleasePointCloud", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCorePointCloud_ReleasePointCloud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCorePointCloud_ReleasePointCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCorePointCloud_ReleasePointCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCorePointCloud_ReleasePointCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoogleARCorePointCloud);
	UClass* Z_Construct_UClass_UGoogleARCorePointCloud_NoRegister()
	{
		return UGoogleARCorePointCloud::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleARCorePointCloud_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleARCorePointCloud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGoogleARCorePointCloud_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoogleARCorePointCloud_GetPoint, "GetPoint" }, // 1452145818
		{ &Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointId, "GetPointId" }, // 286479424
		{ &Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointInTrackingSpace, "GetPointInTrackingSpace" }, // 3354196039
		{ &Z_Construct_UFunction_UGoogleARCorePointCloud_GetPointNum, "GetPointNum" }, // 147773788
		{ &Z_Construct_UFunction_UGoogleARCorePointCloud_IsUpdated, "IsUpdated" }, // 454291358
		{ &Z_Construct_UFunction_UGoogleARCorePointCloud_ReleasePointCloud, "ReleasePointCloud" }, // 1972504380
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCorePointCloud_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A UObject that contains a set of observed 3D points and confidence values.\n */" },
		{ "IncludePath", "GoogleARCoreTypes.h" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "A UObject that contains a set of observed 3D points and confidence values." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleARCorePointCloud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleARCorePointCloud>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoogleARCorePointCloud_Statics::ClassParams = {
		&UGoogleARCorePointCloud::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGoogleARCorePointCloud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCorePointCloud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoogleARCorePointCloud()
	{
		if (!Z_Registration_Info_UClass_UGoogleARCorePointCloud.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoogleARCorePointCloud.OuterSingleton, Z_Construct_UClass_UGoogleARCorePointCloud_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGoogleARCorePointCloud.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UClass* StaticClass<UGoogleARCorePointCloud>()
	{
		return UGoogleARCorePointCloud::StaticClass();
	}
	UGoogleARCorePointCloud::UGoogleARCorePointCloud(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleARCorePointCloud);
	void UGoogleARCoreEditorSettings::StaticRegisterNativesUGoogleARCoreEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoogleARCoreEditorSettings);
	UClass* Z_Construct_UClass_UGoogleARCoreEditorSettings_NoRegister()
	{
		return UGoogleARCoreEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleARCoreEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bARCoreRequiredApp_MetaData[];
#endif
		static void NewProp_bARCoreRequiredApp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bARCoreRequiredApp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleARCoreEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Helper class used to expose FGoogleARCoreSessionConfig setting in the Editor plugin settings.\n*/" },
		{ "IncludePath", "GoogleARCoreTypes.h" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ToolTip", "Helper class used to expose FGoogleARCoreSessionConfig setting in the Editor plugin settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreEditorSettings_Statics::NewProp_bARCoreRequiredApp_MetaData[] = {
		{ "Category", "ARCore Plugin Settings" },
		{ "Comment", "/** Check this option if you app require ARCore to run on Android. */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreTypes.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Check this option if you app require ARCore to run on Android." },
	};
#endif
	void Z_Construct_UClass_UGoogleARCoreEditorSettings_Statics::NewProp_bARCoreRequiredApp_SetBit(void* Obj)
	{
		((UGoogleARCoreEditorSettings*)Obj)->bARCoreRequiredApp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGoogleARCoreEditorSettings_Statics::NewProp_bARCoreRequiredApp = { "bARCoreRequiredApp", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGoogleARCoreEditorSettings), &Z_Construct_UClass_UGoogleARCoreEditorSettings_Statics::NewProp_bARCoreRequiredApp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreEditorSettings_Statics::NewProp_bARCoreRequiredApp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreEditorSettings_Statics::NewProp_bARCoreRequiredApp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoogleARCoreEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreEditorSettings_Statics::NewProp_bARCoreRequiredApp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleARCoreEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleARCoreEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoogleARCoreEditorSettings_Statics::ClassParams = {
		&UGoogleARCoreEditorSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGoogleARCoreEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreEditorSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoogleARCoreEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UGoogleARCoreEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoogleARCoreEditorSettings.OuterSingleton, Z_Construct_UClass_UGoogleARCoreEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGoogleARCoreEditorSettings.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UClass* StaticClass<UGoogleARCoreEditorSettings>()
	{
		return UGoogleARCoreEditorSettings::StaticClass();
	}
	UGoogleARCoreEditorSettings::UGoogleARCoreEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleARCoreEditorSettings);
	UGoogleARCoreEditorSettings::~UGoogleARCoreEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_Statics::EnumInfo[] = {
		{ EGoogleARCoreAvailability_StaticEnum, TEXT("EGoogleARCoreAvailability"), &Z_Registration_Info_UEnum_EGoogleARCoreAvailability, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3793827731U) },
		{ EGoogleARCoreInstallStatus_StaticEnum, TEXT("EGoogleARCoreInstallStatus"), &Z_Registration_Info_UEnum_EGoogleARCoreInstallStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1089669744U) },
		{ EGoogleARCoreInstallRequestResult_StaticEnum, TEXT("EGoogleARCoreInstallRequestResult"), &Z_Registration_Info_UEnum_EGoogleARCoreInstallRequestResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1249832337U) },
		{ EGoogleARCoreFunctionStatus_StaticEnum, TEXT("EGoogleARCoreFunctionStatus"), &Z_Registration_Info_UEnum_EGoogleARCoreFunctionStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2516775692U) },
		{ EGoogleARCoreTrackingState_StaticEnum, TEXT("EGoogleARCoreTrackingState"), &Z_Registration_Info_UEnum_EGoogleARCoreTrackingState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3959168348U) },
		{ EGoogleARCoreCoordinates2DType_StaticEnum, TEXT("EGoogleARCoreCoordinates2DType"), &Z_Registration_Info_UEnum_EGoogleARCoreCoordinates2DType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 24251418U) },
		{ EGoogleARCoreLineTraceChannel_StaticEnum, TEXT("EGoogleARCoreLineTraceChannel"), &Z_Registration_Info_UEnum_EGoogleARCoreLineTraceChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3441697589U) },
		{ EGoogleARCoreCameraFacing_StaticEnum, TEXT("EGoogleARCoreCameraFacing"), &Z_Registration_Info_UEnum_EGoogleARCoreCameraFacing, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1544441471U) },
		{ EGoogleARCoreAugmentedFaceMode_StaticEnum, TEXT("EGoogleARCoreAugmentedFaceMode"), &Z_Registration_Info_UEnum_EGoogleARCoreAugmentedFaceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 314314824U) },
		{ EGoogleARCoreTrackingFailureReason_StaticEnum, TEXT("EGoogleARCoreTrackingFailureReason"), &Z_Registration_Info_UEnum_EGoogleARCoreTrackingFailureReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1247597636U) },
		{ EGoogleARCoreCameraFPS_StaticEnum, TEXT("EGoogleARCoreCameraFPS"), &Z_Registration_Info_UEnum_EGoogleARCoreCameraFPS, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1407210874U) },
		{ EGoogleARCoreCameraDepthSensorUsage_StaticEnum, TEXT("EGoogleARCoreCameraDepthSensorUsage"), &Z_Registration_Info_UEnum_EGoogleARCoreCameraDepthSensorUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3252346751U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_Statics::ScriptStructInfo[] = {
		{ FGoogleARCoreLightEstimate::StaticStruct, Z_Construct_UScriptStruct_FGoogleARCoreLightEstimate_Statics::NewStructOps, TEXT("GoogleARCoreLightEstimate"), &Z_Registration_Info_UScriptStruct_GoogleARCoreLightEstimate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGoogleARCoreLightEstimate), 1581791339U) },
		{ FGoogleARCoreCameraConfig::StaticStruct, Z_Construct_UScriptStruct_FGoogleARCoreCameraConfig_Statics::NewStructOps, TEXT("GoogleARCoreCameraConfig"), &Z_Registration_Info_UScriptStruct_GoogleARCoreCameraConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGoogleARCoreCameraConfig), 1555340257U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGoogleARCoreEventManager, UGoogleARCoreEventManager::StaticClass, TEXT("UGoogleARCoreEventManager"), &Z_Registration_Info_UClass_UGoogleARCoreEventManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoogleARCoreEventManager), 1779169078U) },
		{ Z_Construct_UClass_UGoogleARCorePointCloud, UGoogleARCorePointCloud::StaticClass, TEXT("UGoogleARCorePointCloud"), &Z_Registration_Info_UClass_UGoogleARCorePointCloud, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoogleARCorePointCloud), 3602474986U) },
		{ Z_Construct_UClass_UGoogleARCoreEditorSettings, UGoogleARCoreEditorSettings::StaticClass, TEXT("UGoogleARCoreEditorSettings"), &Z_Registration_Info_UClass_UGoogleARCoreEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoogleARCoreEditorSettings), 501418930U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_4043673184(TEXT("/Script/GoogleARCoreBase"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
