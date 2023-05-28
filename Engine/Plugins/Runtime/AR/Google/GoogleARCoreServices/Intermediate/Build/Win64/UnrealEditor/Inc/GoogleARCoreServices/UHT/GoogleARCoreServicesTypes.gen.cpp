// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoogleARCoreServicesTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleARCoreServicesTypes() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPin();
	GOOGLEARCORESERVICES_API UClass* Z_Construct_UClass_UCloudARPin();
	GOOGLEARCORESERVICES_API UClass* Z_Construct_UClass_UCloudARPin_NoRegister();
	GOOGLEARCORESERVICES_API UEnum* Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudMode();
	GOOGLEARCORESERVICES_API UEnum* Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudTaskResult();
	GOOGLEARCORESERVICES_API UEnum* Z_Construct_UEnum_GoogleARCoreServices_ECloudARPinCloudState();
	GOOGLEARCORESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig();
	UPackage* Z_Construct_UPackage__Script_GoogleARCoreServices();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARPinCloudMode;
	static UEnum* EARPinCloudMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARPinCloudMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARPinCloudMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudMode, (UObject*)Z_Construct_UPackage__Script_GoogleARCoreServices(), TEXT("EARPinCloudMode"));
		}
		return Z_Registration_Info_UEnum_EARPinCloudMode.OuterSingleton;
	}
	template<> GOOGLEARCORESERVICES_API UEnum* StaticEnum<EARPinCloudMode>()
	{
		return EARPinCloudMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudMode_Statics::Enumerators[] = {
		{ "EARPinCloudMode::Disabled", (int64)EARPinCloudMode::Disabled },
		{ "EARPinCloudMode::Enabled", (int64)EARPinCloudMode::Enabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "GoogleARCoreServices|Configuration" },
		{ "Comment", "/** \n * @ingroup GoogleARCoreServices\n * This is an enum that can be set in a FGoogleARCoreServicesConfig to enable/disable \n * cloud ARPin. When EARPinCloudMode is Enabled, ARCoreServices will provides functionalities\n * of hosting and resolving cloud ARPins, with the overhead of maintaining the rolling\n * buffer of feature/IMU measurements, and the requirements of INTERNET permissions.\n */" },
		{ "Disabled.Name", "EARPinCloudMode::Disabled" },
		{ "Enabled.Name", "EARPinCloudMode::Enabled" },
		{ "ModuleRelativePath", "Public/GoogleARCoreServicesTypes.h" },
		{ "ToolTip", "@ingroup GoogleARCoreServices\nThis is an enum that can be set in a FGoogleARCoreServicesConfig to enable/disable\ncloud ARPin. When EARPinCloudMode is Enabled, ARCoreServices will provides functionalities\nof hosting and resolving cloud ARPins, with the overhead of maintaining the rolling\nbuffer of feature/IMU measurements, and the requirements of INTERNET permissions." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GoogleARCoreServices,
		nullptr,
		"EARPinCloudMode",
		"EARPinCloudMode",
		Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudMode()
	{
		if (!Z_Registration_Info_UEnum_EARPinCloudMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARPinCloudMode.InnerSingleton, Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARPinCloudMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GoogleARCoreServicesConfig;
class UScriptStruct* FGoogleARCoreServicesConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GoogleARCoreServicesConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GoogleARCoreServicesConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig, (UObject*)Z_Construct_UPackage__Script_GoogleARCoreServices(), TEXT("GoogleARCoreServicesConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GoogleARCoreServicesConfig.OuterSingleton;
}
template<> GOOGLEARCORESERVICES_API UScriptStruct* StaticStruct<FGoogleARCoreServicesConfig>()
{
	return FGoogleARCoreServicesConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ARPinCloudMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ARPinCloudMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ARPinCloudMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "GoogleARCoreServices|Configuration" },
		{ "Comment", "/**\n * @ingroup GoogleARCoreServices\n * A struct describes the configuration in GoogleARCore Services\n */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreServicesTypes.h" },
		{ "ToolTip", "@ingroup GoogleARCoreServices\nA struct describes the configuration in GoogleARCore Services" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGoogleARCoreServicesConfig>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig_Statics::NewProp_ARPinCloudMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig_Statics::NewProp_ARPinCloudMode_MetaData[] = {
		{ "Category", "GoogleARCoreServices|Configuration" },
		{ "Comment", "/** Whether enabling ARPin hosting/resolving in GoogleARCoreServices. */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreServicesTypes.h" },
		{ "ToolTip", "Whether enabling ARPin hosting/resolving in GoogleARCoreServices." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig_Statics::NewProp_ARPinCloudMode = { "ARPinCloudMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGoogleARCoreServicesConfig, ARPinCloudMode), Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig_Statics::NewProp_ARPinCloudMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig_Statics::NewProp_ARPinCloudMode_MetaData)) }; // 1433550896
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig_Statics::NewProp_ARPinCloudMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig_Statics::NewProp_ARPinCloudMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreServices,
		nullptr,
		&NewStructOps,
		"GoogleARCoreServicesConfig",
		sizeof(FGoogleARCoreServicesConfig),
		alignof(FGoogleARCoreServicesConfig),
		Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_GoogleARCoreServicesConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GoogleARCoreServicesConfig.InnerSingleton, Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GoogleARCoreServicesConfig.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARPinCloudTaskResult;
	static UEnum* EARPinCloudTaskResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARPinCloudTaskResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARPinCloudTaskResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudTaskResult, (UObject*)Z_Construct_UPackage__Script_GoogleARCoreServices(), TEXT("EARPinCloudTaskResult"));
		}
		return Z_Registration_Info_UEnum_EARPinCloudTaskResult.OuterSingleton;
	}
	template<> GOOGLEARCORESERVICES_API UEnum* StaticEnum<EARPinCloudTaskResult>()
	{
		return EARPinCloudTaskResult_StaticEnum();
	}
	struct Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudTaskResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudTaskResult_Statics::Enumerators[] = {
		{ "EARPinCloudTaskResult::Success", (int64)EARPinCloudTaskResult::Success },
		{ "EARPinCloudTaskResult::Failed", (int64)EARPinCloudTaskResult::Failed },
		{ "EARPinCloudTaskResult::Started", (int64)EARPinCloudTaskResult::Started },
		{ "EARPinCloudTaskResult::CloudARPinNotEnabled", (int64)EARPinCloudTaskResult::CloudARPinNotEnabled },
		{ "EARPinCloudTaskResult::NotTracking", (int64)EARPinCloudTaskResult::NotTracking },
		{ "EARPinCloudTaskResult::SessionPaused", (int64)EARPinCloudTaskResult::SessionPaused },
		{ "EARPinCloudTaskResult::InvalidPin", (int64)EARPinCloudTaskResult::InvalidPin },
		{ "EARPinCloudTaskResult::ResourceExhausted", (int64)EARPinCloudTaskResult::ResourceExhausted },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudTaskResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "GoogleARCoreServices|CloudARPin" },
		{ "CloudARPinNotEnabled.Comment", "// CloudARPin hosting/resolving failed because ARPin hosting isn't enabled.\n" },
		{ "CloudARPinNotEnabled.Name", "EARPinCloudTaskResult::CloudARPinNotEnabled" },
		{ "CloudARPinNotEnabled.ToolTip", "CloudARPin hosting/resolving failed because ARPin hosting isn't enabled." },
		{ "Comment", "/**\n * @ingroup GoogleARCoreServices\n * A enum describes the CloudARPin task result.\n */" },
		{ "Failed.Comment", "// CloudARPin hosting/resolving is failed. Check the CloudARPin cloud state for details why it failed.\n// Only used the latent action UGoogleARCoreServicesFunctionLibrary::CreateAndHostCloudARPinLatentAction\n// and UGoogleARCoreServicesFunctionLibrary::CreateAndResolveCloudARPinLatentAction.\n" },
		{ "Failed.Name", "EARPinCloudTaskResult::Failed" },
		{ "Failed.ToolTip", "CloudARPin hosting/resolving is failed. Check the CloudARPin cloud state for details why it failed.\nOnly used the latent action UGoogleARCoreServicesFunctionLibrary::CreateAndHostCloudARPinLatentAction\nand UGoogleARCoreServicesFunctionLibrary::CreateAndResolveCloudARPinLatentAction." },
		{ "InvalidPin.Comment", "// CloudARPin hosting failed because the input ARPin is invalid.\n" },
		{ "InvalidPin.Name", "EARPinCloudTaskResult::InvalidPin" },
		{ "InvalidPin.ToolTip", "CloudARPin hosting failed because the input ARPin is invalid." },
		{ "ModuleRelativePath", "Public/GoogleARCoreServicesTypes.h" },
		{ "NotTracking.Comment", "// CloudARPin hosting/resolving failed because ARPin is not in Tracking State.\n" },
		{ "NotTracking.Name", "EARPinCloudTaskResult::NotTracking" },
		{ "NotTracking.ToolTip", "CloudARPin hosting/resolving failed because ARPin is not in Tracking State." },
		{ "ResourceExhausted.Comment", "// CloudARPin hosting failed because a new CloudARPin couldn't be created in ARSystem due to \n// resource exhausted.\n" },
		{ "ResourceExhausted.Name", "EARPinCloudTaskResult::ResourceExhausted" },
		{ "ResourceExhausted.ToolTip", "CloudARPin hosting failed because a new CloudARPin couldn't be created in ARSystem due to\nresource exhausted." },
		{ "SessionPaused.Comment", "// CloudARPin hosting/resolving failed because there is no valid ARSession or the session is paused.\n" },
		{ "SessionPaused.Name", "EARPinCloudTaskResult::SessionPaused" },
		{ "SessionPaused.ToolTip", "CloudARPin hosting/resolving failed because there is no valid ARSession or the session is paused." },
		{ "Started.Comment", "// CloudARPin hosting/resolving is started successfully. \n// Only used the non-latent UGoogleARCoreServicesFunctionLibrary::HostARPin and\n// UGoogleARCoreServicesFunctionLibrary::AcquireHostedARPin.\n" },
		{ "Started.Name", "EARPinCloudTaskResult::Started" },
		{ "Started.ToolTip", "CloudARPin hosting/resolving is started successfully.\nOnly used the non-latent UGoogleARCoreServicesFunctionLibrary::HostARPin and\nUGoogleARCoreServicesFunctionLibrary::AcquireHostedARPin." },
		{ "Success.Comment", "// CloudARPin hosting/resolving task is successfully completed.\n// Only used the latent action UGoogleARCoreServicesFunctionLibrary::CreateAndHostCloudARPinLatentAction\n// and UGoogleARCoreServicesFunctionLibrary::CreateAndResolveCloudARPinLatentAction.\n" },
		{ "Success.Name", "EARPinCloudTaskResult::Success" },
		{ "Success.ToolTip", "CloudARPin hosting/resolving task is successfully completed.\nOnly used the latent action UGoogleARCoreServicesFunctionLibrary::CreateAndHostCloudARPinLatentAction\nand UGoogleARCoreServicesFunctionLibrary::CreateAndResolveCloudARPinLatentAction." },
		{ "ToolTip", "@ingroup GoogleARCoreServices\nA enum describes the CloudARPin task result." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudTaskResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GoogleARCoreServices,
		nullptr,
		"EARPinCloudTaskResult",
		"EARPinCloudTaskResult",
		Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudTaskResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudTaskResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudTaskResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudTaskResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudTaskResult()
	{
		if (!Z_Registration_Info_UEnum_EARPinCloudTaskResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARPinCloudTaskResult.InnerSingleton, Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudTaskResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARPinCloudTaskResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECloudARPinCloudState;
	static UEnum* ECloudARPinCloudState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECloudARPinCloudState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECloudARPinCloudState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GoogleARCoreServices_ECloudARPinCloudState, (UObject*)Z_Construct_UPackage__Script_GoogleARCoreServices(), TEXT("ECloudARPinCloudState"));
		}
		return Z_Registration_Info_UEnum_ECloudARPinCloudState.OuterSingleton;
	}
	template<> GOOGLEARCORESERVICES_API UEnum* StaticEnum<ECloudARPinCloudState>()
	{
		return ECloudARPinCloudState_StaticEnum();
	}
	struct Z_Construct_UEnum_GoogleARCoreServices_ECloudARPinCloudState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GoogleARCoreServices_ECloudARPinCloudState_Statics::Enumerators[] = {
		{ "ECloudARPinCloudState::NotHosted", (int64)ECloudARPinCloudState::NotHosted },
		{ "ECloudARPinCloudState::InProgress", (int64)ECloudARPinCloudState::InProgress },
		{ "ECloudARPinCloudState::Success", (int64)ECloudARPinCloudState::Success },
		{ "ECloudARPinCloudState::ErrorInternalError", (int64)ECloudARPinCloudState::ErrorInternalError },
		{ "ECloudARPinCloudState::ErrorNotAuthorized", (int64)ECloudARPinCloudState::ErrorNotAuthorized },
		{ "ECloudARPinCloudState::ErrorLocalizationFailure", (int64)ECloudARPinCloudState::ErrorLocalizationFailure },
		{ "ECloudARPinCloudState::ErrorServiceUnavailable", (int64)ECloudARPinCloudState::ErrorServiceUnavailable },
		{ "ECloudARPinCloudState::ErrorResourceExhausted", (int64)ECloudARPinCloudState::ErrorResourceExhausted },
		{ "ECloudARPinCloudState::ErrorHostingDatasetProcessingFailed", (int64)ECloudARPinCloudState::ErrorHostingDatasetProcessingFailed },
		{ "ECloudARPinCloudState::ErrorResolvingCloudIDNotFound", (int64)ECloudARPinCloudState::ErrorResolvingCloudIDNotFound },
		{ "ECloudARPinCloudState::ErrorSDKVersionTooOld", (int64)ECloudARPinCloudState::ErrorSDKVersionTooOld },
		{ "ECloudARPinCloudState::ErrorSDKVersionTooNew", (int64)ECloudARPinCloudState::ErrorSDKVersionTooNew },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GoogleARCoreServices_ECloudARPinCloudState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "GoogleARCoreServices|CloudARPin" },
		{ "Comment", "/**\n * @ingroup GoogleARCoreServices\n * A enum describes the cloud state of a CloudARPin.\n */" },
		{ "ErrorHostingDatasetProcessingFailed.Comment", "// Hosting failed, because the server could not successfully process the\n// dataset for the given anchor. The developer should try again after the\n// device has gathered more data from the environment.\n" },
		{ "ErrorHostingDatasetProcessingFailed.Name", "ECloudARPinCloudState::ErrorHostingDatasetProcessingFailed" },
		{ "ErrorHostingDatasetProcessingFailed.ToolTip", "Hosting failed, because the server could not successfully process the\ndataset for the given anchor. The developer should try again after the\ndevice has gathered more data from the environment." },
		{ "ErrorInternalError.Comment", "// A hosting/resolving task for this CloudARPin finished with an internal error.\n// This error is hard to recover from, and there is likely nothing that the\n// developer can do to mitigate it.\n" },
		{ "ErrorInternalError.Name", "ECloudARPinCloudState::ErrorInternalError" },
		{ "ErrorInternalError.ToolTip", "A hosting/resolving task for this CloudARPin finished with an internal error.\nThis error is hard to recover from, and there is likely nothing that the\ndeveloper can do to mitigate it." },
		{ "ErrorLocalizationFailure.Comment", "// The server could not localize the device for the requested Cloud ID. This\n// means that the ARPin was not present in the user's surroundings.\n" },
		{ "ErrorLocalizationFailure.Name", "ECloudARPinCloudState::ErrorLocalizationFailure" },
		{ "ErrorLocalizationFailure.ToolTip", "The server could not localize the device for the requested Cloud ID. This\nmeans that the ARPin was not present in the user's surroundings." },
		{ "ErrorNotAuthorized.Comment", "// The app cannot communicate with the Google AR Cloud Service because of a\n// bad/invalid/nonexistent API key in the manifest.\n" },
		{ "ErrorNotAuthorized.Name", "ECloudARPinCloudState::ErrorNotAuthorized" },
		{ "ErrorNotAuthorized.ToolTip", "The app cannot communicate with the Google AR Cloud Service because of a\nbad/invalid/nonexistent API key in the manifest." },
		{ "ErrorResolvingCloudIDNotFound.Comment", "// Resolving failed, because the AR Cloud Service could not find the\n// provided cloud anchor ID.\n" },
		{ "ErrorResolvingCloudIDNotFound.Name", "ECloudARPinCloudState::ErrorResolvingCloudIDNotFound" },
		{ "ErrorResolvingCloudIDNotFound.ToolTip", "Resolving failed, because the AR Cloud Service could not find the\nprovided cloud anchor ID." },
		{ "ErrorResourceExhausted.Comment", "// The application has exhausted the request quota allotted to the given API\n// key. The developer should request more quota for the Google AR Cloud\n// Service for their API key from the Google Developer Console.\n" },
		{ "ErrorResourceExhausted.Name", "ECloudARPinCloudState::ErrorResourceExhausted" },
		{ "ErrorResourceExhausted.ToolTip", "The application has exhausted the request quota allotted to the given API\nkey. The developer should request more quota for the Google AR Cloud\nService for their API key from the Google Developer Console." },
		{ "ErrorSDKVersionTooNew.Comment", "// The CloudARPin could not be acquired because the SDK used to host the CloudARPin\n// was older than the version being used to acquire it. These versions must\n// be an exact match.\n" },
		{ "ErrorSDKVersionTooNew.Name", "ECloudARPinCloudState::ErrorSDKVersionTooNew" },
		{ "ErrorSDKVersionTooNew.ToolTip", "The CloudARPin could not be acquired because the SDK used to host the CloudARPin\nwas older than the version being used to acquire it. These versions must\nbe an exact match." },
		{ "ErrorSDKVersionTooOld.Comment", "// The CloudARPin could not be resolved because the SDK used to host the CloudARPin\n// was newer than the version being used to acquire it. These versions must\n// be an exact match.\n" },
		{ "ErrorSDKVersionTooOld.Name", "ECloudARPinCloudState::ErrorSDKVersionTooOld" },
		{ "ErrorSDKVersionTooOld.ToolTip", "The CloudARPin could not be resolved because the SDK used to host the CloudARPin\nwas newer than the version being used to acquire it. These versions must\nbe an exact match." },
		{ "ErrorServiceUnavailable.Comment", "// The Google AR Cloud Service was unreachable. This can happen because of a\n// number of reasons. The request sent to the server could have timed out\n// with no response, there could be a bad network connection, DNS\n// unavailability, firewall issues, or anything that could affect the\n// device's ability to connect to the Google AR cloud service.\n" },
		{ "ErrorServiceUnavailable.Name", "ECloudARPinCloudState::ErrorServiceUnavailable" },
		{ "ErrorServiceUnavailable.ToolTip", "The Google AR Cloud Service was unreachable. This can happen because of a\nnumber of reasons. The request sent to the server could have timed out\nwith no response, there could be a bad network connection, DNS\nunavailability, firewall issues, or anything that could affect the\ndevice's ability to connect to the Google AR cloud service." },
		{ "InProgress.Comment", "// A hosting/resolving task for the CloudARPin has been scheduled.\n// Once the task completes in the background, the CloudARPin will get\n// a new cloud state in the next frame.\n" },
		{ "InProgress.Name", "ECloudARPinCloudState::InProgress" },
		{ "InProgress.ToolTip", "A hosting/resolving task for the CloudARPin has been scheduled.\nOnce the task completes in the background, the CloudARPin will get\na new cloud state in the next frame." },
		{ "ModuleRelativePath", "Public/GoogleARCoreServicesTypes.h" },
		{ "NotHosted.Comment", "// The CloudARPin just got created and the background task for hosting/resolving the CloudARPin\n// hasn't started yet.\n" },
		{ "NotHosted.Name", "ECloudARPinCloudState::NotHosted" },
		{ "NotHosted.ToolTip", "The CloudARPin just got created and the background task for hosting/resolving the CloudARPin\nhasn't started yet." },
		{ "Success.Comment", "// A hosting/resolving task for this CloudARPin completed successfully.\n" },
		{ "Success.Name", "ECloudARPinCloudState::Success" },
		{ "Success.ToolTip", "A hosting/resolving task for this CloudARPin completed successfully." },
		{ "ToolTip", "@ingroup GoogleARCoreServices\nA enum describes the cloud state of a CloudARPin." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GoogleARCoreServices_ECloudARPinCloudState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GoogleARCoreServices,
		nullptr,
		"ECloudARPinCloudState",
		"ECloudARPinCloudState",
		Z_Construct_UEnum_GoogleARCoreServices_ECloudARPinCloudState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreServices_ECloudARPinCloudState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GoogleARCoreServices_ECloudARPinCloudState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GoogleARCoreServices_ECloudARPinCloudState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GoogleARCoreServices_ECloudARPinCloudState()
	{
		if (!Z_Registration_Info_UEnum_ECloudARPinCloudState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECloudARPinCloudState.InnerSingleton, Z_Construct_UEnum_GoogleARCoreServices_ECloudARPinCloudState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECloudARPinCloudState.InnerSingleton;
	}
	DEFINE_FUNCTION(UCloudARPin::execGetARPinCloudState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECloudARPinCloudState*)Z_Param__Result=P_THIS->GetARPinCloudState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCloudARPin::execGetCloudID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCloudID();
		P_NATIVE_END;
	}
	void UCloudARPin::StaticRegisterNativesUCloudARPin()
	{
		UClass* Class = UCloudARPin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetARPinCloudState", &UCloudARPin::execGetARPinCloudState },
			{ "GetCloudID", &UCloudARPin::execGetCloudID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCloudARPin_GetARPinCloudState_Statics
	{
		struct CloudARPin_eventGetARPinCloudState_Parms
		{
			ECloudARPinCloudState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCloudARPin_GetARPinCloudState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCloudARPin_GetARPinCloudState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CloudARPin_eventGetARPinCloudState_Parms, ReturnValue), Z_Construct_UEnum_GoogleARCoreServices_ECloudARPinCloudState, METADATA_PARAMS(nullptr, 0) }; // 4227473059
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCloudARPin_GetARPinCloudState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudARPin_GetARPinCloudState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudARPin_GetARPinCloudState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudARPin_GetARPinCloudState_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCoreServices|CloudARPin" },
		{ "Comment", "/**\n\x09 * Gets the current cloud state of this CloudARPin.\n\x09 * Note that the cloud state will only be updated once per frame.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreServicesTypes.h" },
		{ "ToolTip", "Gets the current cloud state of this CloudARPin.\nNote that the cloud state will only be updated once per frame." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCloudARPin_GetARPinCloudState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudARPin, nullptr, "GetARPinCloudState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCloudARPin_GetARPinCloudState_Statics::CloudARPin_eventGetARPinCloudState_Parms), Z_Construct_UFunction_UCloudARPin_GetARPinCloudState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudARPin_GetARPinCloudState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCloudARPin_GetARPinCloudState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudARPin_GetARPinCloudState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCloudARPin_GetARPinCloudState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCloudARPin_GetARPinCloudState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCloudARPin_GetCloudID_Statics
	{
		struct CloudARPin_eventGetCloudID_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCloudARPin_GetCloudID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CloudARPin_eventGetCloudID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCloudARPin_GetCloudID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCloudARPin_GetCloudID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCloudARPin_GetCloudID_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCoreServices|CloudARPin" },
		{ "Comment", "/**\n\x09 * Gets the CloudID of this CloudARPin.\n\x09 * @return\x09Return a non-empty FString if the CloudARPin is ready. otherwise, return\n\x09 *          an empty FString.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreServicesTypes.h" },
		{ "ToolTip", "Gets the CloudID of this CloudARPin.\n@return      Return a non-empty FString if the CloudARPin is ready. otherwise, return\n         an empty FString." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCloudARPin_GetCloudID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCloudARPin, nullptr, "GetCloudID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCloudARPin_GetCloudID_Statics::CloudARPin_eventGetCloudID_Parms), Z_Construct_UFunction_UCloudARPin_GetCloudID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudARPin_GetCloudID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCloudARPin_GetCloudID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCloudARPin_GetCloudID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCloudARPin_GetCloudID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCloudARPin_GetCloudID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCloudARPin);
	UClass* Z_Construct_UClass_UCloudARPin_NoRegister()
	{
		return UCloudARPin::StaticClass();
	}
	struct Z_Construct_UClass_UCloudARPin_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCloudARPin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARPin,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreServices,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCloudARPin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCloudARPin_GetARPinCloudState, "GetARPinCloudState" }, // 4063994285
		{ &Z_Construct_UFunction_UCloudARPin_GetCloudID, "GetCloudID" }, // 1339941322
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCloudARPin_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "GoogleARCoreServices|CloudARPin" },
		{ "Comment", "/**\n * A CloudARPin will be created when you host an existing ARPin, or resolved a\n * previous hosted CloudARPin. It is a subclass of UARPin so all functions on \n * UARPin works on CloudARPin, besides that you can query its CloudState and CloudID\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "GoogleARCoreServicesTypes.h" },
		{ "ModuleRelativePath", "Public/GoogleARCoreServicesTypes.h" },
		{ "ToolTip", "A CloudARPin will be created when you host an existing ARPin, or resolved a\nprevious hosted CloudARPin. It is a subclass of UARPin so all functions on\nUARPin works on CloudARPin, besides that you can query its CloudState and CloudID" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCloudARPin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCloudARPin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCloudARPin_Statics::ClassParams = {
		&UCloudARPin::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCloudARPin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCloudARPin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCloudARPin()
	{
		if (!Z_Registration_Info_UClass_UCloudARPin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCloudARPin.OuterSingleton, Z_Construct_UClass_UCloudARPin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCloudARPin.OuterSingleton;
	}
	template<> GOOGLEARCORESERVICES_API UClass* StaticClass<UCloudARPin>()
	{
		return UCloudARPin::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCloudARPin);
	UCloudARPin::~UCloudARPin() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesTypes_h_Statics::EnumInfo[] = {
		{ EARPinCloudMode_StaticEnum, TEXT("EARPinCloudMode"), &Z_Registration_Info_UEnum_EARPinCloudMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1433550896U) },
		{ EARPinCloudTaskResult_StaticEnum, TEXT("EARPinCloudTaskResult"), &Z_Registration_Info_UEnum_EARPinCloudTaskResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1947592028U) },
		{ ECloudARPinCloudState_StaticEnum, TEXT("ECloudARPinCloudState"), &Z_Registration_Info_UEnum_ECloudARPinCloudState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4227473059U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesTypes_h_Statics::ScriptStructInfo[] = {
		{ FGoogleARCoreServicesConfig::StaticStruct, Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig_Statics::NewStructOps, TEXT("GoogleARCoreServicesConfig"), &Z_Registration_Info_UScriptStruct_GoogleARCoreServicesConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGoogleARCoreServicesConfig), 3529332240U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCloudARPin, UCloudARPin::StaticClass, TEXT("UCloudARPin"), &Z_Registration_Info_UClass_UCloudARPin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCloudARPin), 14645729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesTypes_h_2710731169(TEXT("/Script/GoogleARCoreServices"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
