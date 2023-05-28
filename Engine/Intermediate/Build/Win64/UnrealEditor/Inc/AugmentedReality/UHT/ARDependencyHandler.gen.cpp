// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARDependencyHandler.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARDependencyHandler() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARDependencyHandler();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARDependencyHandler_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSessionConfig_NoRegister();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARServiceAvailability();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARServiceAvailability;
	static UEnum* EARServiceAvailability_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARServiceAvailability.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARServiceAvailability.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARServiceAvailability, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARServiceAvailability"));
		}
		return Z_Registration_Info_UEnum_EARServiceAvailability.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARServiceAvailability>()
	{
		return EARServiceAvailability_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARServiceAvailability_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARServiceAvailability_Statics::Enumerators[] = {
		{ "EARServiceAvailability::UnknownError", (int64)EARServiceAvailability::UnknownError },
		{ "EARServiceAvailability::UnknownChecking", (int64)EARServiceAvailability::UnknownChecking },
		{ "EARServiceAvailability::UnknownTimedOut", (int64)EARServiceAvailability::UnknownTimedOut },
		{ "EARServiceAvailability::UnsupportedDeviceNotCapable", (int64)EARServiceAvailability::UnsupportedDeviceNotCapable },
		{ "EARServiceAvailability::SupportedNotInstalled", (int64)EARServiceAvailability::SupportedNotInstalled },
		{ "EARServiceAvailability::SupportedVersionTooOld", (int64)EARServiceAvailability::SupportedVersionTooOld },
		{ "EARServiceAvailability::SupportedInstalled", (int64)EARServiceAvailability::SupportedInstalled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARServiceAvailability_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARDependencyHandler.h" },
		{ "SupportedInstalled.Comment", "/** AR service is supported and installed */" },
		{ "SupportedInstalled.Name", "EARServiceAvailability::SupportedInstalled" },
		{ "SupportedInstalled.ToolTip", "AR service is supported and installed" },
		{ "SupportedNotInstalled.Comment", "/** AR service is not installed */" },
		{ "SupportedNotInstalled.Name", "EARServiceAvailability::SupportedNotInstalled" },
		{ "SupportedNotInstalled.ToolTip", "AR service is not installed" },
		{ "SupportedVersionTooOld.Comment", "/** AR service is installed but the version is too old */" },
		{ "SupportedVersionTooOld.Name", "EARServiceAvailability::SupportedVersionTooOld" },
		{ "SupportedVersionTooOld.ToolTip", "AR service is installed but the version is too old" },
		{ "UnknownChecking.Comment", "/** Availability is being checked */" },
		{ "UnknownChecking.Name", "EARServiceAvailability::UnknownChecking" },
		{ "UnknownChecking.ToolTip", "Availability is being checked" },
		{ "UnknownError.Comment", "/** Availability is unknown due to an error during checking */" },
		{ "UnknownError.Name", "EARServiceAvailability::UnknownError" },
		{ "UnknownError.ToolTip", "Availability is unknown due to an error during checking" },
		{ "UnknownTimedOut.Comment", "/** Availability is unknown due to timeout during checking */" },
		{ "UnknownTimedOut.Name", "EARServiceAvailability::UnknownTimedOut" },
		{ "UnknownTimedOut.ToolTip", "Availability is unknown due to timeout during checking" },
		{ "UnsupportedDeviceNotCapable.Comment", "/** The device is not capable of running the AR service */" },
		{ "UnsupportedDeviceNotCapable.Name", "EARServiceAvailability::UnsupportedDeviceNotCapable" },
		{ "UnsupportedDeviceNotCapable.ToolTip", "The device is not capable of running the AR service" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARServiceAvailability_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARServiceAvailability",
		"EARServiceAvailability",
		Z_Construct_UEnum_AugmentedReality_EARServiceAvailability_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARServiceAvailability_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARServiceAvailability_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARServiceAvailability_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARServiceAvailability()
	{
		if (!Z_Registration_Info_UEnum_EARServiceAvailability.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARServiceAvailability.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARServiceAvailability_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARServiceAvailability.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARServiceInstallRequestResult;
	static UEnum* EARServiceInstallRequestResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARServiceInstallRequestResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARServiceInstallRequestResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARServiceInstallRequestResult"));
		}
		return Z_Registration_Info_UEnum_EARServiceInstallRequestResult.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARServiceInstallRequestResult>()
	{
		return EARServiceInstallRequestResult_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult_Statics::Enumerators[] = {
		{ "EARServiceInstallRequestResult::Installed", (int64)EARServiceInstallRequestResult::Installed },
		{ "EARServiceInstallRequestResult::DeviceNotCompatible", (int64)EARServiceInstallRequestResult::DeviceNotCompatible },
		{ "EARServiceInstallRequestResult::UserDeclinedInstallation", (int64)EARServiceInstallRequestResult::UserDeclinedInstallation },
		{ "EARServiceInstallRequestResult::FatalError", (int64)EARServiceInstallRequestResult::FatalError },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DeviceNotCompatible.Comment", "/** The device is not capable of running the AR service */" },
		{ "DeviceNotCompatible.Name", "EARServiceInstallRequestResult::DeviceNotCompatible" },
		{ "DeviceNotCompatible.ToolTip", "The device is not capable of running the AR service" },
		{ "FatalError.Comment", "/** Other error while installing the AR service */" },
		{ "FatalError.Name", "EARServiceInstallRequestResult::FatalError" },
		{ "FatalError.ToolTip", "Other error while installing the AR service" },
		{ "Installed.Comment", "/** AR service is installed */" },
		{ "Installed.Name", "EARServiceInstallRequestResult::Installed" },
		{ "Installed.ToolTip", "AR service is installed" },
		{ "ModuleRelativePath", "Public/ARDependencyHandler.h" },
		{ "UserDeclinedInstallation.Comment", "/** The user declined the request to install the AR service */" },
		{ "UserDeclinedInstallation.Name", "EARServiceInstallRequestResult::UserDeclinedInstallation" },
		{ "UserDeclinedInstallation.ToolTip", "The user declined the request to install the AR service" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARServiceInstallRequestResult",
		"EARServiceInstallRequestResult",
		Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult()
	{
		if (!Z_Registration_Info_UEnum_EARServiceInstallRequestResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARServiceInstallRequestResult.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARServiceInstallRequestResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARServicePermissionRequestResult;
	static UEnum* EARServicePermissionRequestResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARServicePermissionRequestResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARServicePermissionRequestResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARServicePermissionRequestResult"));
		}
		return Z_Registration_Info_UEnum_EARServicePermissionRequestResult.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARServicePermissionRequestResult>()
	{
		return EARServicePermissionRequestResult_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult_Statics::Enumerators[] = {
		{ "EARServicePermissionRequestResult::Granted", (int64)EARServicePermissionRequestResult::Granted },
		{ "EARServicePermissionRequestResult::Denied", (int64)EARServicePermissionRequestResult::Denied },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Denied.Comment", "/** The permission is denied by the user */" },
		{ "Denied.Name", "EARServicePermissionRequestResult::Denied" },
		{ "Denied.ToolTip", "The permission is denied by the user" },
		{ "Granted.Comment", "/** The permission is granted by the user */" },
		{ "Granted.Name", "EARServicePermissionRequestResult::Granted" },
		{ "Granted.ToolTip", "The permission is granted by the user" },
		{ "ModuleRelativePath", "Public/ARDependencyHandler.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARServicePermissionRequestResult",
		"EARServicePermissionRequestResult",
		Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult()
	{
		if (!Z_Registration_Info_UEnum_EARServicePermissionRequestResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARServicePermissionRequestResult.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARServicePermissionRequestResult.InnerSingleton;
	}
	DEFINE_FUNCTION(UARDependencyHandler::execStartARSessionLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UARSessionConfig,Z_Param_SessionConfig);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartARSessionLatent(Z_Param_WorldContextObject,Z_Param_SessionConfig,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARDependencyHandler::execRequestARSessionPermission)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UARSessionConfig,Z_Param_SessionConfig);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_ENUM_REF(EARServicePermissionRequestResult,Z_Param_Out_OutPermissionResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestARSessionPermission(Z_Param_WorldContextObject,Z_Param_SessionConfig,Z_Param_LatentInfo,(EARServicePermissionRequestResult&)(Z_Param_Out_OutPermissionResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARDependencyHandler::execInstallARService)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_ENUM_REF(EARServiceInstallRequestResult,Z_Param_Out_OutInstallResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InstallARService(Z_Param_WorldContextObject,Z_Param_LatentInfo,(EARServiceInstallRequestResult&)(Z_Param_Out_OutInstallResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARDependencyHandler::execCheckARServiceAvailability)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_ENUM_REF(EARServiceAvailability,Z_Param_Out_OutAvailability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckARServiceAvailability(Z_Param_WorldContextObject,Z_Param_LatentInfo,(EARServiceAvailability&)(Z_Param_Out_OutAvailability));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARDependencyHandler::execGetARDependencyHandler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARDependencyHandler**)Z_Param__Result=UARDependencyHandler::GetARDependencyHandler();
		P_NATIVE_END;
	}
	void UARDependencyHandler::StaticRegisterNativesUARDependencyHandler()
	{
		UClass* Class = UARDependencyHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckARServiceAvailability", &UARDependencyHandler::execCheckARServiceAvailability },
			{ "GetARDependencyHandler", &UARDependencyHandler::execGetARDependencyHandler },
			{ "InstallARService", &UARDependencyHandler::execInstallARService },
			{ "RequestARSessionPermission", &UARDependencyHandler::execRequestARSessionPermission },
			{ "StartARSessionLatent", &UARDependencyHandler::execStartARSessionLatent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics
	{
		struct ARDependencyHandler_eventCheckARServiceAvailability_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			EARServiceAvailability OutAvailability;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutAvailability_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutAvailability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARDependencyHandler_eventCheckARServiceAvailability_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARDependencyHandler_eventCheckARServiceAvailability_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::NewProp_OutAvailability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::NewProp_OutAvailability = { "OutAvailability", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARDependencyHandler_eventCheckARServiceAvailability_Parms, OutAvailability), Z_Construct_UEnum_AugmentedReality_EARServiceAvailability, METADATA_PARAMS(nullptr, 0) }; // 3460565272
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::NewProp_OutAvailability_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::NewProp_OutAvailability,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/** Latent action to check AR availability on the current platform. */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/ARDependencyHandler.h" },
		{ "ToolTip", "Latent action to check AR availability on the current platform." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARDependencyHandler, nullptr, "CheckARServiceAvailability", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::ARDependencyHandler_eventCheckARServiceAvailability_Parms), Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics
	{
		struct ARDependencyHandler_eventGetARDependencyHandler_Parms
		{
			UARDependencyHandler* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARDependencyHandler_eventGetARDependencyHandler_Parms, ReturnValue), Z_Construct_UClass_UARDependencyHandler_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/**\n\x09 * @return the dependency handler for the current platform.\n\x09 * Can return null if the current platform doesn't support AR, or the AR system doesn't require dependency handling.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARDependencyHandler.h" },
		{ "ToolTip", "@return the dependency handler for the current platform.\nCan return null if the current platform doesn't support AR, or the AR system doesn't require dependency handling." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARDependencyHandler, nullptr, "GetARDependencyHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics::ARDependencyHandler_eventGetARDependencyHandler_Parms), Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics
	{
		struct ARDependencyHandler_eventInstallARService_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			EARServiceInstallRequestResult OutInstallResult;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutInstallResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutInstallResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARDependencyHandler_eventInstallARService_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARDependencyHandler_eventInstallARService_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::NewProp_OutInstallResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::NewProp_OutInstallResult = { "OutInstallResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARDependencyHandler_eventInstallARService_Parms, OutInstallResult), Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult, METADATA_PARAMS(nullptr, 0) }; // 2338349313
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::NewProp_OutInstallResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::NewProp_OutInstallResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/** Latent action to install AR service on the current platform. */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/ARDependencyHandler.h" },
		{ "ToolTip", "Latent action to install AR service on the current platform." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARDependencyHandler, nullptr, "InstallARService", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::ARDependencyHandler_eventInstallARService_Parms), Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARDependencyHandler_InstallARService()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics
	{
		struct ARDependencyHandler_eventRequestARSessionPermission_Parms
		{
			UObject* WorldContextObject;
			UARSessionConfig* SessionConfig;
			FLatentActionInfo LatentInfo;
			EARServicePermissionRequestResult OutPermissionResult;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SessionConfig;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutPermissionResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutPermissionResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARDependencyHandler_eventRequestARSessionPermission_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::NewProp_SessionConfig = { "SessionConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARDependencyHandler_eventRequestARSessionPermission_Parms, SessionConfig), Z_Construct_UClass_UARSessionConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARDependencyHandler_eventRequestARSessionPermission_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::NewProp_OutPermissionResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::NewProp_OutPermissionResult = { "OutPermissionResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARDependencyHandler_eventRequestARSessionPermission_Parms, OutPermissionResult), Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult, METADATA_PARAMS(nullptr, 0) }; // 1866327802
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::NewProp_SessionConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::NewProp_OutPermissionResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::NewProp_OutPermissionResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/** Latent action to request permission to run the supplied session configuration. */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/ARDependencyHandler.h" },
		{ "ToolTip", "Latent action to request permission to run the supplied session configuration." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARDependencyHandler, nullptr, "RequestARSessionPermission", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::ARDependencyHandler_eventRequestARSessionPermission_Parms), Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics
	{
		struct ARDependencyHandler_eventStartARSessionLatent_Parms
		{
			UObject* WorldContextObject;
			UARSessionConfig* SessionConfig;
			FLatentActionInfo LatentInfo;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SessionConfig;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARDependencyHandler_eventStartARSessionLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::NewProp_SessionConfig = { "SessionConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARDependencyHandler_eventStartARSessionLatent_Parms, SessionConfig), Z_Construct_UClass_UARSessionConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARDependencyHandler_eventStartARSessionLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::NewProp_SessionConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/**\n\x09 * Latent action to start AR session.\n\x09 * Will make sure dependency and permission issues are resolved internally, only returns the AR session starts successfully.\n\x09 */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/ARDependencyHandler.h" },
		{ "ToolTip", "Latent action to start AR session.\nWill make sure dependency and permission issues are resolved internally, only returns the AR session starts successfully." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARDependencyHandler, nullptr, "StartARSessionLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::ARDependencyHandler_eventStartARSessionLatent_Parms), Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARDependencyHandler);
	UClass* Z_Construct_UClass_UARDependencyHandler_NoRegister()
	{
		return UARDependencyHandler::StaticClass();
	}
	struct Z_Construct_UClass_UARDependencyHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARDependencyHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARDependencyHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability, "CheckARServiceAvailability" }, // 3999282445
		{ &Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler, "GetARDependencyHandler" }, // 3966571437
		{ &Z_Construct_UFunction_UARDependencyHandler_InstallARService, "InstallARService" }, // 3664777595
		{ &Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission, "RequestARSessionPermission" }, // 1091104480
		{ &Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent, "StartARSessionLatent" }, // 4102914775
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARDependencyHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "" },
		{ "Comment", "/**\n * Helper class that allows the user to explicitly request AR service installation and permission granting.\n * Recommended flow for explicit management:\n * 1. Call \"GetARDependencyHandler\" to get a handler, if valid:\n * 2. Call \"CheckARServiceAvailability\" to check availability, if the device is supported:\n * 3. Call \"InstallARService\" to install AR service dependency, if installed:\n * 4. Call \"RequestARSessionPermission\" to request permission, if granted:\n * 5. Call \"UARBlueprintLibrary::StartARSession\" to start the session.\n * Alternatively, you can also call \"StartARSessionLatent\" which handles dependency and permission internally.\n */" },
		{ "IncludePath", "ARDependencyHandler.h" },
		{ "ModuleRelativePath", "Public/ARDependencyHandler.h" },
		{ "ToolTip", "Helper class that allows the user to explicitly request AR service installation and permission granting.\nRecommended flow for explicit management:\n1. Call \"GetARDependencyHandler\" to get a handler, if valid:\n2. Call \"CheckARServiceAvailability\" to check availability, if the device is supported:\n3. Call \"InstallARService\" to install AR service dependency, if installed:\n4. Call \"RequestARSessionPermission\" to request permission, if granted:\n5. Call \"UARBlueprintLibrary::StartARSession\" to start the session.\nAlternatively, you can also call \"StartARSessionLatent\" which handles dependency and permission internally." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARDependencyHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARDependencyHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARDependencyHandler_Statics::ClassParams = {
		&UARDependencyHandler::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UARDependencyHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARDependencyHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARDependencyHandler()
	{
		if (!Z_Registration_Info_UClass_UARDependencyHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARDependencyHandler.OuterSingleton, Z_Construct_UClass_UARDependencyHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARDependencyHandler.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARDependencyHandler>()
	{
		return UARDependencyHandler::StaticClass();
	}
	UARDependencyHandler::UARDependencyHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARDependencyHandler);
	UARDependencyHandler::~UARDependencyHandler() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_Statics::EnumInfo[] = {
		{ EARServiceAvailability_StaticEnum, TEXT("EARServiceAvailability"), &Z_Registration_Info_UEnum_EARServiceAvailability, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3460565272U) },
		{ EARServiceInstallRequestResult_StaticEnum, TEXT("EARServiceInstallRequestResult"), &Z_Registration_Info_UEnum_EARServiceInstallRequestResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2338349313U) },
		{ EARServicePermissionRequestResult_StaticEnum, TEXT("EARServicePermissionRequestResult"), &Z_Registration_Info_UEnum_EARServicePermissionRequestResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1866327802U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARDependencyHandler, UARDependencyHandler::StaticClass, TEXT("UARDependencyHandler"), &Z_Registration_Info_UClass_UARDependencyHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARDependencyHandler), 3242002347U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_3477122546(TEXT("/Script/AugmentedReality"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
