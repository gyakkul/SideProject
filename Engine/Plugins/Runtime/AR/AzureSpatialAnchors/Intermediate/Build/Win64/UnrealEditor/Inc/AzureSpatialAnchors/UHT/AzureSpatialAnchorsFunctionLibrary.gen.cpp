// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzureSpatialAnchorsFunctionLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "AzureSpatialAnchorsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzureSpatialAnchorsFunctionLibrary() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPin_NoRegister();
	AZURESPATIALANCHORS_API UClass* Z_Construct_UClass_UAzureCloudSpatialAnchor_NoRegister();
	AZURESPATIALANCHORS_API UClass* Z_Construct_UClass_UAzureSpatialAnchorsLibrary();
	AZURESPATIALANCHORS_API UClass* Z_Construct_UClass_UAzureSpatialAnchorsLibrary_NoRegister();
	AZURESPATIALANCHORS_API UEnum* Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLogVerbosity();
	AZURESPATIALANCHORS_API UEnum* Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult();
	AZURESPATIALANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria();
	AZURESPATIALANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration();
	AZURESPATIALANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus();
	AZURESPATIALANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FCoarseLocalizationSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	UPackage* Z_Construct_UPackage__Script_AzureSpatialAnchors();
// End Cross Module References
	DEFINE_FUNCTION(UAzureSpatialAnchorsLibrary::execCreateARPinAroundAzureCloudSpatialAnchor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PinId);
		P_GET_OBJECT(UAzureCloudSpatialAnchor,Z_Param_InAzureCloudSpatialAnchor);
		P_GET_OBJECT_REF(UARPin,Z_Param_Out_OutARPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAzureSpatialAnchorsLibrary::CreateARPinAroundAzureCloudSpatialAnchor(Z_Param_PinId,Z_Param_InAzureCloudSpatialAnchor,Z_Param_Out_OutARPin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureSpatialAnchorsLibrary::execStopWatcher)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InWatcherIdentifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAzureSpatialAnchorsLibrary::StopWatcher(Z_Param_InWatcherIdentifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureSpatialAnchorsLibrary::execCreateWatcher)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FAzureSpatialAnchorsLocateCriteria,Z_Param_Out_InLocateCriteria);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutWatcherIdentifier);
		P_GET_ENUM_REF(EAzureSpatialAnchorsResult,Z_Param_Out_OutResult);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutErrorString);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAzureSpatialAnchorsLibrary::CreateWatcher(Z_Param_WorldContextObject,Z_Param_Out_InLocateCriteria,Z_Param_Out_OutWatcherIdentifier,(EAzureSpatialAnchorsResult&)(Z_Param_Out_OutResult),Z_Param_Out_OutErrorString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureSpatialAnchorsLibrary::execRefreshCloudAnchorProperties)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(UAzureCloudSpatialAnchor,Z_Param_InAzureCloudSpatialAnchor);
		P_GET_ENUM_REF(EAzureSpatialAnchorsResult,Z_Param_Out_OutResult);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutErrorString);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAzureSpatialAnchorsLibrary::RefreshCloudAnchorProperties(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_InAzureCloudSpatialAnchor,(EAzureSpatialAnchorsResult&)(Z_Param_Out_OutResult),Z_Param_Out_OutErrorString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureSpatialAnchorsLibrary::execUpdateCloudAnchorProperties)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(UAzureCloudSpatialAnchor,Z_Param_InAzureCloudSpatialAnchor);
		P_GET_ENUM_REF(EAzureSpatialAnchorsResult,Z_Param_Out_OutResult);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutErrorString);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAzureSpatialAnchorsLibrary::UpdateCloudAnchorProperties(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_InAzureCloudSpatialAnchor,(EAzureSpatialAnchorsResult&)(Z_Param_Out_OutResult),Z_Param_Out_OutErrorString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureSpatialAnchorsLibrary::execSaveCloudAnchor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(UAzureCloudSpatialAnchor,Z_Param_InAzureCloudSpatialAnchor);
		P_GET_ENUM_REF(EAzureSpatialAnchorsResult,Z_Param_Out_OutResult);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutErrorString);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAzureSpatialAnchorsLibrary::SaveCloudAnchor(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_InAzureCloudSpatialAnchor,(EAzureSpatialAnchorsResult&)(Z_Param_Out_OutResult),Z_Param_Out_OutErrorString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureSpatialAnchorsLibrary::execConstructCloudAnchor)
	{
		P_GET_OBJECT(UARPin,Z_Param_ARPin);
		P_GET_OBJECT_REF(UAzureCloudSpatialAnchor,Z_Param_Out_OutAzureCloudSpatialAnchor);
		P_GET_ENUM_REF(EAzureSpatialAnchorsResult,Z_Param_Out_OutResult);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutErrorString);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAzureSpatialAnchorsLibrary::ConstructCloudAnchor(Z_Param_ARPin,Z_Param_Out_OutAzureCloudSpatialAnchor,(EAzureSpatialAnchorsResult&)(Z_Param_Out_OutResult),Z_Param_Out_OutErrorString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureSpatialAnchorsLibrary::execLoadCloudAnchor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_CloudIdentifier);
		P_GET_PROPERTY(FStrProperty,Z_Param_PinId);
		P_GET_OBJECT_REF(UARPin,Z_Param_Out_OutARPin);
		P_GET_OBJECT_REF(UAzureCloudSpatialAnchor,Z_Param_Out_OutAzureCloudSpatialAnchor);
		P_GET_ENUM_REF(EAzureSpatialAnchorsResult,Z_Param_Out_OutResult);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutErrorString);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAzureSpatialAnchorsLibrary::LoadCloudAnchor(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_CloudIdentifier,Z_Param_PinId,Z_Param_Out_OutARPin,Z_Param_Out_OutAzureCloudSpatialAnchor,(EAzureSpatialAnchorsResult&)(Z_Param_Out_OutResult),Z_Param_Out_OutErrorString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureSpatialAnchorsLibrary::execDeleteCloudAnchor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(UAzureCloudSpatialAnchor,Z_Param_CloudSpatialAnchor);
		P_GET_ENUM_REF(EAzureSpatialAnchorsResult,Z_Param_Out_OutResult);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutErrorString);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAzureSpatialAnchorsLibrary::DeleteCloudAnchor(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_CloudSpatialAnchor,(EAzureSpatialAnchorsResult&)(Z_Param_Out_OutResult),Z_Param_Out_OutErrorString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureSpatialAnchorsLibrary::execSavePinToCloudWithAppProperties)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(UARPin,Z_Param_ARPin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Lifetime);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_InAppProperties);
		P_GET_OBJECT_REF(UAzureCloudSpatialAnchor,Z_Param_Out_OutAzureCloudSpatialAnchor);
		P_GET_ENUM_REF(EAzureSpatialAnchorsResult,Z_Param_Out_OutResult);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutErrorString);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAzureSpatialAnchorsLibrary::SavePinToCloudWithAppProperties(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_ARPin,Z_Param_Lifetime,Z_Param_Out_InAppProperties,Z_Param_Out_OutAzureCloudSpatialAnchor,(EAzureSpatialAnchorsResult&)(Z_Param_Out_OutResult),Z_Param_Out_OutErrorString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureSpatialAnchorsLibrary::execSavePinToCloud)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(UARPin,Z_Param_ARPin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Lifetime);
		P_GET_OBJECT_REF(UAzureCloudSpatialAnchor,Z_Param_Out_OutAzureCloudSpatialAnchor);
		P_GET_ENUM_REF(EAzureSpatialAnchorsResult,Z_Param_Out_OutResult);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutErrorString);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAzureSpatialAnchorsLibrary::SavePinToCloud(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_ARPin,Z_Param_Lifetime,Z_Param_Out_OutAzureCloudSpatialAnchor,(EAzureSpatialAnchorsResult&)(Z_Param_Out_OutResult),Z_Param_Out_OutErrorString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureSpatialAnchorsLibrary::execGetCloudAnchors)
	{
		P_GET_TARRAY_REF(UAzureCloudSpatialAnchor*,Z_Param_Out_OutCloudAnchors);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAzureSpatialAnchorsLibrary::GetCloudAnchors(Z_Param_Out_OutCloudAnchors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureSpatialAnchorsLibrary::execGetCloudAnchor)
	{
		P_GET_OBJECT(UARPin,Z_Param_ARPin);
		P_GET_OBJECT_REF(UAzureCloudSpatialAnchor,Z_Param_Out_OutAzureCloudSpatialAnchor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAzureSpatialAnchorsLibrary::GetCloudAnchor(Z_Param_ARPin,Z_Param_Out_OutAzureCloudSpatialAnchor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureSpatialAnchorsLibrary::execGetSessionStatus)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_STRUCT_REF(FAzureSpatialAnchorsSessionStatus,Z_Param_Out_OutStatus);
		P_GET_ENUM_REF(EAzureSpatialAnchorsResult,Z_Param_Out_OutResult);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutErrorString);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAzureSpatialAnchorsLibrary::GetSessionStatus(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_OutStatus,(EAzureSpatialAnchorsResult&)(Z_Param_Out_OutResult),Z_Param_Out_OutErrorString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureSpatialAnchorsLibrary::execGetCachedSessionStatus)
	{
		P_GET_STRUCT_REF(FAzureSpatialAnchorsSessionStatus,Z_Param_Out_OutStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAzureSpatialAnchorsLibrary::GetCachedSessionStatus(Z_Param_Out_OutStatus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureSpatialAnchorsLibrary::execDestroySession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAzureSpatialAnchorsLibrary::DestroySession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureSpatialAnchorsLibrary::execStopSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAzureSpatialAnchorsLibrary::StopSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureSpatialAnchorsLibrary::execStartSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAzureSpatialAnchorsLibrary::StartSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureSpatialAnchorsLibrary::execConfigSession2)
	{
		P_GET_STRUCT_REF(FAzureSpatialAnchorsSessionConfiguration,Z_Param_Out_SessionConfiguration);
		P_GET_STRUCT(FCoarseLocalizationSettings,Z_Param_CoarseLocalizationSettings);
		P_GET_ENUM(EAzureSpatialAnchorsLogVerbosity,Z_Param_LogVerbosity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAzureSpatialAnchorsLibrary::ConfigSession2(Z_Param_Out_SessionConfiguration,Z_Param_CoarseLocalizationSettings,EAzureSpatialAnchorsLogVerbosity(Z_Param_LogVerbosity));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureSpatialAnchorsLibrary::execConfigSession)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AccountId);
		P_GET_PROPERTY(FStrProperty,Z_Param_AccountKey);
		P_GET_STRUCT(FCoarseLocalizationSettings,Z_Param_CoarseLocalizationSettings);
		P_GET_ENUM(EAzureSpatialAnchorsLogVerbosity,Z_Param_LogVerbosity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAzureSpatialAnchorsLibrary::ConfigSession(Z_Param_AccountId,Z_Param_AccountKey,Z_Param_CoarseLocalizationSettings,EAzureSpatialAnchorsLogVerbosity(Z_Param_LogVerbosity));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureSpatialAnchorsLibrary::execCreateSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAzureSpatialAnchorsLibrary::CreateSession();
		P_NATIVE_END;
	}
	void UAzureSpatialAnchorsLibrary::StaticRegisterNativesUAzureSpatialAnchorsLibrary()
	{
		UClass* Class = UAzureSpatialAnchorsLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConfigSession", &UAzureSpatialAnchorsLibrary::execConfigSession },
			{ "ConfigSession2", &UAzureSpatialAnchorsLibrary::execConfigSession2 },
			{ "ConstructCloudAnchor", &UAzureSpatialAnchorsLibrary::execConstructCloudAnchor },
			{ "CreateARPinAroundAzureCloudSpatialAnchor", &UAzureSpatialAnchorsLibrary::execCreateARPinAroundAzureCloudSpatialAnchor },
			{ "CreateSession", &UAzureSpatialAnchorsLibrary::execCreateSession },
			{ "CreateWatcher", &UAzureSpatialAnchorsLibrary::execCreateWatcher },
			{ "DeleteCloudAnchor", &UAzureSpatialAnchorsLibrary::execDeleteCloudAnchor },
			{ "DestroySession", &UAzureSpatialAnchorsLibrary::execDestroySession },
			{ "GetCachedSessionStatus", &UAzureSpatialAnchorsLibrary::execGetCachedSessionStatus },
			{ "GetCloudAnchor", &UAzureSpatialAnchorsLibrary::execGetCloudAnchor },
			{ "GetCloudAnchors", &UAzureSpatialAnchorsLibrary::execGetCloudAnchors },
			{ "GetSessionStatus", &UAzureSpatialAnchorsLibrary::execGetSessionStatus },
			{ "LoadCloudAnchor", &UAzureSpatialAnchorsLibrary::execLoadCloudAnchor },
			{ "RefreshCloudAnchorProperties", &UAzureSpatialAnchorsLibrary::execRefreshCloudAnchorProperties },
			{ "SaveCloudAnchor", &UAzureSpatialAnchorsLibrary::execSaveCloudAnchor },
			{ "SavePinToCloud", &UAzureSpatialAnchorsLibrary::execSavePinToCloud },
			{ "SavePinToCloudWithAppProperties", &UAzureSpatialAnchorsLibrary::execSavePinToCloudWithAppProperties },
			{ "StartSession", &UAzureSpatialAnchorsLibrary::execStartSession },
			{ "StopSession", &UAzureSpatialAnchorsLibrary::execStopSession },
			{ "StopWatcher", &UAzureSpatialAnchorsLibrary::execStopWatcher },
			{ "UpdateCloudAnchorProperties", &UAzureSpatialAnchorsLibrary::execUpdateCloudAnchorProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics
	{
		struct AzureSpatialAnchorsLibrary_eventConfigSession_Parms
		{
			FString AccountId;
			FString AccountKey;
			FCoarseLocalizationSettings CoarseLocalizationSettings;
			EAzureSpatialAnchorsLogVerbosity LogVerbosity;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccountId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AccountId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccountKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AccountKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoarseLocalizationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CoarseLocalizationSettings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LogVerbosity_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LogVerbosity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_AccountId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_AccountId = { "AccountId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventConfigSession_Parms, AccountId), METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_AccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_AccountId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_AccountKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_AccountKey = { "AccountKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventConfigSession_Parms, AccountKey), METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_AccountKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_AccountKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_CoarseLocalizationSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_CoarseLocalizationSettings = { "CoarseLocalizationSettings", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventConfigSession_Parms, CoarseLocalizationSettings), Z_Construct_UScriptStruct_FCoarseLocalizationSettings, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_CoarseLocalizationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_CoarseLocalizationSettings_MetaData)) }; // 1773773959
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_LogVerbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_LogVerbosity = { "LogVerbosity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventConfigSession_Parms, LogVerbosity), Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLogVerbosity, METADATA_PARAMS(nullptr, 0) }; // 3052599607
	void Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AzureSpatialAnchorsLibrary_eventConfigSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AzureSpatialAnchorsLibrary_eventConfigSession_Parms), &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_AccountId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_AccountKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_CoarseLocalizationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_LogVerbosity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_LogVerbosity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR|AzureSpatialAnchors" },
		{ "Comment", "///**\n// * Configure the ASA session.  \n// * This will take effect when the next session is started.\n// * This version is deprecated.  Please use ConfigSession2 instead.\n// * \n// * @param AccountId      The Azure Spatial Anchor Account ID.\n// * @param AccountKey\x09\x09The Azure Spatial Anchor Account Key.\n// * @param CoarseLocalizationSettings\x09Settings related to locating the device in the world (eg GPS).\n// * @param LogVerbosity\x09Logging verbosity for the Azure Spatial Anchor api.\n// *\n// * @return (Boolean)  True if the session configuration was set.\n// */\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "ConfigSession is deprecated, use ConfigSession2 instead." },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ToolTip", "Configure the ASA session.\nThis will take effect when the next session is started.\nThis version is deprecated.  Please use ConfigSession2 instead.\n\n@param AccountId      The Azure Spatial Anchor Account ID.\n@param AccountKey           The Azure Spatial Anchor Account Key.\n@param CoarseLocalizationSettings   Settings related to locating the device in the world (eg GPS).\n@param LogVerbosity Logging verbosity for the Azure Spatial Anchor api.\n\n@return (Boolean)  True if the session configuration was set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsLibrary, nullptr, "ConfigSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::AzureSpatialAnchorsLibrary_eventConfigSession_Parms), Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics
	{
		struct AzureSpatialAnchorsLibrary_eventConfigSession2_Parms
		{
			FAzureSpatialAnchorsSessionConfiguration SessionConfiguration;
			FCoarseLocalizationSettings CoarseLocalizationSettings;
			EAzureSpatialAnchorsLogVerbosity LogVerbosity;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionConfiguration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoarseLocalizationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CoarseLocalizationSettings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LogVerbosity_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LogVerbosity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::NewProp_SessionConfiguration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::NewProp_SessionConfiguration = { "SessionConfiguration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventConfigSession2_Parms, SessionConfiguration), Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::NewProp_SessionConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::NewProp_SessionConfiguration_MetaData)) }; // 925907547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::NewProp_CoarseLocalizationSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::NewProp_CoarseLocalizationSettings = { "CoarseLocalizationSettings", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventConfigSession2_Parms, CoarseLocalizationSettings), Z_Construct_UScriptStruct_FCoarseLocalizationSettings, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::NewProp_CoarseLocalizationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::NewProp_CoarseLocalizationSettings_MetaData)) }; // 1773773959
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::NewProp_LogVerbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::NewProp_LogVerbosity = { "LogVerbosity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventConfigSession2_Parms, LogVerbosity), Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLogVerbosity, METADATA_PARAMS(nullptr, 0) }; // 3052599607
	void Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AzureSpatialAnchorsLibrary_eventConfigSession2_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AzureSpatialAnchorsLibrary_eventConfigSession2_Parms), &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::NewProp_SessionConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::NewProp_CoarseLocalizationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::NewProp_LogVerbosity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::NewProp_LogVerbosity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR|AzureSpatialAnchors" },
		{ "Comment", "///**\n// * Configure the ASA session.  \n// * This will take effect when the next session is started.\n// * \n// * @param SessionConfiguration\x09\x09""Azure cloud sign in related configuration.\n// * @param CoarseLocalizationSettings\x09Settings related to locating the device in the world (eg GPS).\n// * @param LogVerbosity\x09\x09\x09\x09Logging verbosity for the Azure Spatial Anchor api.\n// *\n// * @return (Boolean)  True if the session configuration was set.\n// */\n" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ToolTip", "Configure the ASA session.\nThis will take effect when the next session is started.\n\n@param SessionConfiguration         Azure cloud sign in related configuration.\n@param CoarseLocalizationSettings   Settings related to locating the device in the world (eg GPS).\n@param LogVerbosity                         Logging verbosity for the Azure Spatial Anchor api.\n\n@return (Boolean)  True if the session configuration was set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsLibrary, nullptr, "ConfigSession2", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::AzureSpatialAnchorsLibrary_eventConfigSession2_Parms), Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConstructCloudAnchor_Statics
	{
		struct AzureSpatialAnchorsLibrary_eventConstructCloudAnchor_Parms
		{
			UARPin* ARPin;
			UAzureCloudSpatialAnchor* OutAzureCloudSpatialAnchor;
			EAzureSpatialAnchorsResult OutResult;
			FString OutErrorString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ARPin;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAzureCloudSpatialAnchor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutErrorString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConstructCloudAnchor_Statics::NewProp_ARPin = { "ARPin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventConstructCloudAnchor_Parms, ARPin), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConstructCloudAnchor_Statics::NewProp_OutAzureCloudSpatialAnchor = { "OutAzureCloudSpatialAnchor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventConstructCloudAnchor_Parms, OutAzureCloudSpatialAnchor), Z_Construct_UClass_UAzureCloudSpatialAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConstructCloudAnchor_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConstructCloudAnchor_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventConstructCloudAnchor_Parms, OutResult), Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult, METADATA_PARAMS(nullptr, 0) }; // 534733115
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConstructCloudAnchor_Statics::NewProp_OutErrorString = { "OutErrorString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventConstructCloudAnchor_Parms, OutErrorString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConstructCloudAnchor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConstructCloudAnchor_Statics::NewProp_ARPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConstructCloudAnchor_Statics::NewProp_OutAzureCloudSpatialAnchor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConstructCloudAnchor_Statics::NewProp_OutResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConstructCloudAnchor_Statics::NewProp_OutResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConstructCloudAnchor_Statics::NewProp_OutErrorString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConstructCloudAnchor_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "///**\n// * Construct a cloud anchor for the pin.  This is not yet stored in the cloud.\n// *\n// * @param ARPin      The ARPin to create an anchor for.\n// * @param OutAzureCloudSpatialAnchor  The Cloud anchor handle. (null if fails)\n// * @param OutResult\x09\x09\x09\x09\x09The Result enumeration.\n// * @param OutErrorString\x09\x09\x09\x09""Additional informatiuon about the OutResult (often empty).\n// */\n" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ToolTip", "Construct a cloud anchor for the pin.  This is not yet stored in the cloud.\n\n@param ARPin      The ARPin to create an anchor for.\n@param OutAzureCloudSpatialAnchor  The Cloud anchor handle. (null if fails)\n@param OutResult                                    The Result enumeration.\n@param OutErrorString                               Additional informatiuon about the OutResult (often empty)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConstructCloudAnchor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsLibrary, nullptr, "ConstructCloudAnchor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConstructCloudAnchor_Statics::AzureSpatialAnchorsLibrary_eventConstructCloudAnchor_Parms), Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConstructCloudAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConstructCloudAnchor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConstructCloudAnchor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConstructCloudAnchor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConstructCloudAnchor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConstructCloudAnchor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateARPinAroundAzureCloudSpatialAnchor_Statics
	{
		struct AzureSpatialAnchorsLibrary_eventCreateARPinAroundAzureCloudSpatialAnchor_Parms
		{
			FString PinId;
			UAzureCloudSpatialAnchor* InAzureCloudSpatialAnchor;
			UARPin* OutARPin;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PinId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAzureCloudSpatialAnchor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutARPin;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateARPinAroundAzureCloudSpatialAnchor_Statics::NewProp_PinId = { "PinId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventCreateARPinAroundAzureCloudSpatialAnchor_Parms, PinId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateARPinAroundAzureCloudSpatialAnchor_Statics::NewProp_InAzureCloudSpatialAnchor = { "InAzureCloudSpatialAnchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventCreateARPinAroundAzureCloudSpatialAnchor_Parms, InAzureCloudSpatialAnchor), Z_Construct_UClass_UAzureCloudSpatialAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateARPinAroundAzureCloudSpatialAnchor_Statics::NewProp_OutARPin = { "OutARPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventCreateARPinAroundAzureCloudSpatialAnchor_Parms, OutARPin), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateARPinAroundAzureCloudSpatialAnchor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AzureSpatialAnchorsLibrary_eventCreateARPinAroundAzureCloudSpatialAnchor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateARPinAroundAzureCloudSpatialAnchor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AzureSpatialAnchorsLibrary_eventCreateARPinAroundAzureCloudSpatialAnchor_Parms), &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateARPinAroundAzureCloudSpatialAnchor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateARPinAroundAzureCloudSpatialAnchor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateARPinAroundAzureCloudSpatialAnchor_Statics::NewProp_PinId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateARPinAroundAzureCloudSpatialAnchor_Statics::NewProp_InAzureCloudSpatialAnchor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateARPinAroundAzureCloudSpatialAnchor_Statics::NewProp_OutARPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateARPinAroundAzureCloudSpatialAnchor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateARPinAroundAzureCloudSpatialAnchor_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "///**\n// * Create an ARPin around an already existing cloud anchor. \n// *\n// * @param PinId      The name of the pin we want created.\n// * @param InAzureCloudSpatialAnchor  The cloud anchor we will create the pin around.\n// * @param OutARPin The pin that was created, or null.\n// *\n// * @return (Boolean)  True if we were able to create.\n// */\n" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ToolTip", "Create an ARPin around an already existing cloud anchor.\n\n@param PinId      The name of the pin we want created.\n@param InAzureCloudSpatialAnchor  The cloud anchor we will create the pin around.\n@param OutARPin The pin that was created, or null.\n\n@return (Boolean)  True if we were able to create." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateARPinAroundAzureCloudSpatialAnchor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsLibrary, nullptr, "CreateARPinAroundAzureCloudSpatialAnchor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateARPinAroundAzureCloudSpatialAnchor_Statics::AzureSpatialAnchorsLibrary_eventCreateARPinAroundAzureCloudSpatialAnchor_Parms), Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateARPinAroundAzureCloudSpatialAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateARPinAroundAzureCloudSpatialAnchor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateARPinAroundAzureCloudSpatialAnchor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateARPinAroundAzureCloudSpatialAnchor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateARPinAroundAzureCloudSpatialAnchor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateARPinAroundAzureCloudSpatialAnchor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateSession_Statics
	{
		struct AzureSpatialAnchorsLibrary_eventCreateSession_Parms
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
	void Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AzureSpatialAnchorsLibrary_eventCreateSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AzureSpatialAnchorsLibrary_eventCreateSession_Parms), &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR|AzureSpatialAnchors" },
		{ "Comment", "///**\n// * Create an ASA session.  \n// * It is not yet active.\n// *\n// * @return (Boolean)  True if a session has been created (even if it already existed).\n// */\n" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ToolTip", "Create an ASA session.\nIt is not yet active.\n\n@return (Boolean)  True if a session has been created (even if it already existed)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsLibrary, nullptr, "CreateSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateSession_Statics::AzureSpatialAnchorsLibrary_eventCreateSession_Parms), Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics
	{
		struct AzureSpatialAnchorsLibrary_eventCreateWatcher_Parms
		{
			UObject* WorldContextObject;
			FAzureSpatialAnchorsLocateCriteria InLocateCriteria;
			int32 OutWatcherIdentifier;
			EAzureSpatialAnchorsResult OutResult;
			FString OutErrorString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLocateCriteria_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InLocateCriteria;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutWatcherIdentifier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutErrorString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventCreateWatcher_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::NewProp_InLocateCriteria_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::NewProp_InLocateCriteria = { "InLocateCriteria", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventCreateWatcher_Parms, InLocateCriteria), Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::NewProp_InLocateCriteria_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::NewProp_InLocateCriteria_MetaData)) }; // 1926292508
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::NewProp_OutWatcherIdentifier = { "OutWatcherIdentifier", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventCreateWatcher_Parms, OutWatcherIdentifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventCreateWatcher_Parms, OutResult), Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult, METADATA_PARAMS(nullptr, 0) }; // 534733115
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::NewProp_OutErrorString = { "OutErrorString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventCreateWatcher_Parms, OutErrorString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::NewProp_InLocateCriteria,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::NewProp_OutWatcherIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::NewProp_OutResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::NewProp_OutResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::NewProp_OutErrorString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "///**\n// * Create and start a 'Watcher' searching for azure cloud spatial anchors as specified in the locate criteria.  Use an AzureSpatialAnchorsEventComponent's events to get\n// * notifications of found anchors and watcher completion.\n// *\n// * @param InLocateCriteria      Structure describing the watcher we wish to start.\n// * @param OutWatcherIdentifier   The ID of the created watcher (can be used to stop the watcher).\n// * @param OutResult\x09The Result enumeration.\n// * @param OutErrorString\x09""Additional information about the OutResult (often empty).\n// */\n" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ToolTip", "Create and start a 'Watcher' searching for azure cloud spatial anchors as specified in the locate criteria.  Use an AzureSpatialAnchorsEventComponent's events to get\nnotifications of found anchors and watcher completion.\n\n@param InLocateCriteria      Structure describing the watcher we wish to start.\n@param OutWatcherIdentifier   The ID of the created watcher (can be used to stop the watcher).\n@param OutResult    The Result enumeration.\n@param OutErrorString       Additional information about the OutResult (often empty)." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsLibrary, nullptr, "CreateWatcher", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::AzureSpatialAnchorsLibrary_eventCreateWatcher_Parms), Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor_Statics
	{
		struct AzureSpatialAnchorsLibrary_eventDeleteCloudAnchor_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			UAzureCloudSpatialAnchor* CloudSpatialAnchor;
			EAzureSpatialAnchorsResult OutResult;
			FString OutErrorString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CloudSpatialAnchor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutErrorString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventDeleteCloudAnchor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventDeleteCloudAnchor_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor_Statics::NewProp_CloudSpatialAnchor = { "CloudSpatialAnchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventDeleteCloudAnchor_Parms, CloudSpatialAnchor), Z_Construct_UClass_UAzureCloudSpatialAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventDeleteCloudAnchor_Parms, OutResult), Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult, METADATA_PARAMS(nullptr, 0) }; // 534733115
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor_Statics::NewProp_OutErrorString = { "OutErrorString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventDeleteCloudAnchor_Parms, OutErrorString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor_Statics::NewProp_CloudSpatialAnchor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor_Statics::NewProp_OutResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor_Statics::NewProp_OutResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor_Statics::NewProp_OutErrorString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR|AzureSpatialAnchors" },
		{ "Comment", "///**\n// * Delete the cloud anchor in the cloud.\n// * This will start a Latent Action to delete the cloud anchor from the cloud service.\n// *\n// * @param CloudSpatialAnchor      The Cloud anchor to delete.\n// * @param OutResult\x09Result of the Delete attempt.\n// * @param OutErrorString\x09""Additional information about the OutResult (often empty).\n// */\n" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ToolTip", "Delete the cloud anchor in the cloud.\nThis will start a Latent Action to delete the cloud anchor from the cloud service.\n\n@param CloudSpatialAnchor      The Cloud anchor to delete.\n@param OutResult    Result of the Delete attempt.\n@param OutErrorString       Additional information about the OutResult (often empty)." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsLibrary, nullptr, "DeleteCloudAnchor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor_Statics::AzureSpatialAnchorsLibrary_eventDeleteCloudAnchor_Parms), Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DestroySession_Statics
	{
		struct AzureSpatialAnchorsLibrary_eventDestroySession_Parms
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
	void Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DestroySession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AzureSpatialAnchorsLibrary_eventDestroySession_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DestroySession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AzureSpatialAnchorsLibrary_eventDestroySession_Parms), &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DestroySession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DestroySession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DestroySession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DestroySession_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR|AzureSpatialAnchors" },
		{ "Comment", "///**\n// * The session will be destroyed.\n// */\n" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ToolTip", "The session will be destroyed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DestroySession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsLibrary, nullptr, "DestroySession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DestroySession_Statics::AzureSpatialAnchorsLibrary_eventDestroySession_Parms), Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DestroySession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DestroySession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DestroySession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DestroySession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DestroySession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DestroySession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCachedSessionStatus_Statics
	{
		struct AzureSpatialAnchorsLibrary_eventGetCachedSessionStatus_Parms
		{
			FAzureSpatialAnchorsSessionStatus OutStatus;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStatus;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCachedSessionStatus_Statics::NewProp_OutStatus = { "OutStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventGetCachedSessionStatus_Parms, OutStatus), Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus, METADATA_PARAMS(nullptr, 0) }; // 3038336799
	void Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCachedSessionStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AzureSpatialAnchorsLibrary_eventGetCachedSessionStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCachedSessionStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AzureSpatialAnchorsLibrary_eventGetCachedSessionStatus_Parms), &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCachedSessionStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCachedSessionStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCachedSessionStatus_Statics::NewProp_OutStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCachedSessionStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCachedSessionStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR|AzureSpatialAnchors" },
		{ "Comment", "///**\n// * Get the azure spatial anchors session status struct.\n// *\n// * @param OutStatus\x09The retrieved status struct.\n// * @return (Boolean&)  True if is an AzureSpatialAnchors plugin running.  False probably means that this platform does not support ASA or the plugin for this platform is not enabled.\n// */\n" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ToolTip", "Get the azure spatial anchors session status struct.\n\n@param OutStatus    The retrieved status struct.\n@return (Boolean&)  True if is an AzureSpatialAnchors plugin running.  False probably means that this platform does not support ASA or the plugin for this platform is not enabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCachedSessionStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsLibrary, nullptr, "GetCachedSessionStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCachedSessionStatus_Statics::AzureSpatialAnchorsLibrary_eventGetCachedSessionStatus_Parms), Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCachedSessionStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCachedSessionStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCachedSessionStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCachedSessionStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCachedSessionStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCachedSessionStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchor_Statics
	{
		struct AzureSpatialAnchorsLibrary_eventGetCloudAnchor_Parms
		{
			UARPin* ARPin;
			UAzureCloudSpatialAnchor* OutAzureCloudSpatialAnchor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ARPin;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAzureCloudSpatialAnchor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchor_Statics::NewProp_ARPin = { "ARPin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventGetCloudAnchor_Parms, ARPin), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchor_Statics::NewProp_OutAzureCloudSpatialAnchor = { "OutAzureCloudSpatialAnchor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventGetCloudAnchor_Parms, OutAzureCloudSpatialAnchor), Z_Construct_UClass_UAzureCloudSpatialAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchor_Statics::NewProp_ARPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchor_Statics::NewProp_OutAzureCloudSpatialAnchor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchor_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR|AzureSpatialAnchors" },
		{ "Comment", "///**\n// * Get the cloud anchor associated with a particular ARPin.\n// *\n// * @param ARPin      The ARPin who's cloud anchor we hope to get.\n// * @param OutAzureCloudSpatialAnchor\x09The cloud spatial anchor, or null.\n// */\n" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ToolTip", "Get the cloud anchor associated with a particular ARPin.\n\n@param ARPin      The ARPin who's cloud anchor we hope to get.\n@param OutAzureCloudSpatialAnchor   The cloud spatial anchor, or null." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsLibrary, nullptr, "GetCloudAnchor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchor_Statics::AzureSpatialAnchorsLibrary_eventGetCloudAnchor_Parms), Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchors_Statics
	{
		struct AzureSpatialAnchorsLibrary_eventGetCloudAnchors_Parms
		{
			TArray<UAzureCloudSpatialAnchor*> OutCloudAnchors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutCloudAnchors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutCloudAnchors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchors_Statics::NewProp_OutCloudAnchors_Inner = { "OutCloudAnchors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAzureCloudSpatialAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchors_Statics::NewProp_OutCloudAnchors = { "OutCloudAnchors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventGetCloudAnchors_Parms, OutCloudAnchors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchors_Statics::NewProp_OutCloudAnchors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchors_Statics::NewProp_OutCloudAnchors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR|AzureSpatialAnchors" },
		{ "Comment", "///**\n// * Get list of all CloudAnchors.\n// *\n// * @param OutCloudAnchors \x09The cloud spatial anchors\n// */\n" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ToolTip", "Get list of all CloudAnchors.\n\n@param OutCloudAnchors      The cloud spatial anchors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsLibrary, nullptr, "GetCloudAnchors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchors_Statics::AzureSpatialAnchorsLibrary_eventGetCloudAnchors_Parms), Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus_Statics
	{
		struct AzureSpatialAnchorsLibrary_eventGetSessionStatus_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FAzureSpatialAnchorsSessionStatus OutStatus;
			EAzureSpatialAnchorsResult OutResult;
			FString OutErrorString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStatus;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutErrorString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventGetSessionStatus_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventGetSessionStatus_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus_Statics::NewProp_OutStatus = { "OutStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventGetSessionStatus_Parms, OutStatus), Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus, METADATA_PARAMS(nullptr, 0) }; // 3038336799
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventGetSessionStatus_Parms, OutResult), Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult, METADATA_PARAMS(nullptr, 0) }; // 534733115
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus_Statics::NewProp_OutErrorString = { "OutErrorString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventGetSessionStatus_Parms, OutErrorString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus_Statics::NewProp_OutStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus_Statics::NewProp_OutResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus_Statics::NewProp_OutResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus_Statics::NewProp_OutErrorString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR|AzureSpatialAnchors" },
		{ "Comment", "///**\n// * Get the AzureSpatialAnchors Session's Status.\n// * This will start a Latent Action to get the Session Status.\n// *\n// * @param OutStatus\x09The retrieved status struct.\n// * @param OutResult\x09Result of the Save attempt.\n// * @param OutErrorString\x09""Additional information about the OutResult (often empty).\n// */\n" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ToolTip", "Get the AzureSpatialAnchors Session's Status.\nThis will start a Latent Action to get the Session Status.\n\n@param OutStatus    The retrieved status struct.\n@param OutResult    Result of the Save attempt.\n@param OutErrorString       Additional information about the OutResult (often empty)." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsLibrary, nullptr, "GetSessionStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus_Statics::AzureSpatialAnchorsLibrary_eventGetSessionStatus_Parms), Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics
	{
		struct AzureSpatialAnchorsLibrary_eventLoadCloudAnchor_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString CloudIdentifier;
			FString PinId;
			UARPin* OutARPin;
			UAzureCloudSpatialAnchor* OutAzureCloudSpatialAnchor;
			EAzureSpatialAnchorsResult OutResult;
			FString OutErrorString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CloudIdentifier;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PinId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutARPin;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAzureCloudSpatialAnchor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutErrorString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventLoadCloudAnchor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventLoadCloudAnchor_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::NewProp_CloudIdentifier = { "CloudIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventLoadCloudAnchor_Parms, CloudIdentifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::NewProp_PinId = { "PinId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventLoadCloudAnchor_Parms, PinId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::NewProp_OutARPin = { "OutARPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventLoadCloudAnchor_Parms, OutARPin), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::NewProp_OutAzureCloudSpatialAnchor = { "OutAzureCloudSpatialAnchor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventLoadCloudAnchor_Parms, OutAzureCloudSpatialAnchor), Z_Construct_UClass_UAzureCloudSpatialAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventLoadCloudAnchor_Parms, OutResult), Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult, METADATA_PARAMS(nullptr, 0) }; // 534733115
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::NewProp_OutErrorString = { "OutErrorString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventLoadCloudAnchor_Parms, OutErrorString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::NewProp_CloudIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::NewProp_PinId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::NewProp_OutARPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::NewProp_OutAzureCloudSpatialAnchor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::NewProp_OutResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::NewProp_OutResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::NewProp_OutErrorString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR|AzureSpatialAnchors" },
		{ "Comment", "///**\n// * Load a pin from the cloud..\n// * This will start a Latent Action to load a cloud anchor and create a pin for it.\n// *\n// * @param CloudIdentifier\x09\x09\x09\x09The Azure Cloud Spatial Anchor Identifier of the cloud anchor we will try to load.\n// * @param PinId\x09\x09\x09\x09\x09\x09Specify the name of the Pin to load into.  Will fail if a pin of this name already exists.  If empty an auto-generated id will be used.\n// * @param OutARPin\x09\x09\x09\x09\x09""Filled in with the pin created, if successful.\n// * @param OutAzureCloudSpatialAnchor\x09""Filled in with the UE representation of the cloud spatial anchor created, if successful.\n// * @param OutResult\x09\x09\x09\x09\x09The Result enumeration.\n// * @param OutErrorString\x09\x09\x09\x09""Additional informatiuon about the OutResult (often empty).\n// */\n" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ToolTip", "Load a pin from the cloud..\nThis will start a Latent Action to load a cloud anchor and create a pin for it.\n\n@param CloudIdentifier                              The Azure Cloud Spatial Anchor Identifier of the cloud anchor we will try to load.\n@param PinId                                                Specify the name of the Pin to load into.  Will fail if a pin of this name already exists.  If empty an auto-generated id will be used.\n@param OutARPin                                     Filled in with the pin created, if successful.\n@param OutAzureCloudSpatialAnchor   Filled in with the UE representation of the cloud spatial anchor created, if successful.\n@param OutResult                                    The Result enumeration.\n@param OutErrorString                               Additional informatiuon about the OutResult (often empty)." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsLibrary, nullptr, "LoadCloudAnchor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::AzureSpatialAnchorsLibrary_eventLoadCloudAnchor_Parms), Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties_Statics
	{
		struct AzureSpatialAnchorsLibrary_eventRefreshCloudAnchorProperties_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			UAzureCloudSpatialAnchor* InAzureCloudSpatialAnchor;
			EAzureSpatialAnchorsResult OutResult;
			FString OutErrorString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAzureCloudSpatialAnchor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutErrorString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventRefreshCloudAnchorProperties_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventRefreshCloudAnchorProperties_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties_Statics::NewProp_InAzureCloudSpatialAnchor = { "InAzureCloudSpatialAnchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventRefreshCloudAnchorProperties_Parms, InAzureCloudSpatialAnchor), Z_Construct_UClass_UAzureCloudSpatialAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventRefreshCloudAnchorProperties_Parms, OutResult), Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult, METADATA_PARAMS(nullptr, 0) }; // 534733115
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties_Statics::NewProp_OutErrorString = { "OutErrorString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventRefreshCloudAnchorProperties_Parms, OutErrorString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties_Statics::NewProp_InAzureCloudSpatialAnchor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties_Statics::NewProp_OutResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties_Statics::NewProp_OutResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties_Statics::NewProp_OutErrorString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "///**\n// * Get the latest cloud anchor properties from the cloud.\n// * This will start a Latent Action to fetch the AzureCloudSpatialAnchor's propertiesfrom the Azure Spatial Anchors cloud service.\n// *\n// * @param InAzureCloudSpatialAnchor      The AzureCloudSpatialAnchor to refresh.\n// * @param OutResult\x09The Result enumeration.\n// * @param OutErrorString\x09""Additional information about the OutResult (often empty).\n// */\n" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ToolTip", "Get the latest cloud anchor properties from the cloud.\nThis will start a Latent Action to fetch the AzureCloudSpatialAnchor's propertiesfrom the Azure Spatial Anchors cloud service.\n\n@param InAzureCloudSpatialAnchor      The AzureCloudSpatialAnchor to refresh.\n@param OutResult    The Result enumeration.\n@param OutErrorString       Additional information about the OutResult (often empty)." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsLibrary, nullptr, "RefreshCloudAnchorProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties_Statics::AzureSpatialAnchorsLibrary_eventRefreshCloudAnchorProperties_Parms), Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor_Statics
	{
		struct AzureSpatialAnchorsLibrary_eventSaveCloudAnchor_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			UAzureCloudSpatialAnchor* InAzureCloudSpatialAnchor;
			EAzureSpatialAnchorsResult OutResult;
			FString OutErrorString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAzureCloudSpatialAnchor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutErrorString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventSaveCloudAnchor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventSaveCloudAnchor_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor_Statics::NewProp_InAzureCloudSpatialAnchor = { "InAzureCloudSpatialAnchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventSaveCloudAnchor_Parms, InAzureCloudSpatialAnchor), Z_Construct_UClass_UAzureCloudSpatialAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventSaveCloudAnchor_Parms, OutResult), Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult, METADATA_PARAMS(nullptr, 0) }; // 534733115
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor_Statics::NewProp_OutErrorString = { "OutErrorString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventSaveCloudAnchor_Parms, OutErrorString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor_Statics::NewProp_InAzureCloudSpatialAnchor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor_Statics::NewProp_OutResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor_Statics::NewProp_OutResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor_Statics::NewProp_OutErrorString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "///**\n// * Save the cloud anchor to the cloud.\n// * This will start a Latent Action to save the AzureCloudSpatialAnchor to the Azure Spatial Anchors cloud service.\n// *\n// * @param InAzureCloudSpatialAnchor      The AzureCloudSpatialAnchor to save.\n// * @param OutResult\x09The Result enumeration.\n// * @param OutErrorString\x09""Additional information about the OutResult (often empty).\n// */\n" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ToolTip", "Save the cloud anchor to the cloud.\nThis will start a Latent Action to save the AzureCloudSpatialAnchor to the Azure Spatial Anchors cloud service.\n\n@param InAzureCloudSpatialAnchor      The AzureCloudSpatialAnchor to save.\n@param OutResult    The Result enumeration.\n@param OutErrorString       Additional information about the OutResult (often empty)." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsLibrary, nullptr, "SaveCloudAnchor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor_Statics::AzureSpatialAnchorsLibrary_eventSaveCloudAnchor_Parms), Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics
	{
		struct AzureSpatialAnchorsLibrary_eventSavePinToCloud_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			UARPin* ARPin;
			float Lifetime;
			UAzureCloudSpatialAnchor* OutAzureCloudSpatialAnchor;
			EAzureSpatialAnchorsResult OutResult;
			FString OutErrorString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ARPin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAzureCloudSpatialAnchor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutErrorString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventSavePinToCloud_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventSavePinToCloud_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::NewProp_ARPin = { "ARPin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventSavePinToCloud_Parms, ARPin), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventSavePinToCloud_Parms, Lifetime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::NewProp_OutAzureCloudSpatialAnchor = { "OutAzureCloudSpatialAnchor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventSavePinToCloud_Parms, OutAzureCloudSpatialAnchor), Z_Construct_UClass_UAzureCloudSpatialAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventSavePinToCloud_Parms, OutResult), Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult, METADATA_PARAMS(nullptr, 0) }; // 534733115
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::NewProp_OutErrorString = { "OutErrorString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventSavePinToCloud_Parms, OutErrorString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::NewProp_ARPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::NewProp_Lifetime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::NewProp_OutAzureCloudSpatialAnchor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::NewProp_OutResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::NewProp_OutResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::NewProp_OutErrorString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR|AzureSpatialAnchors" },
		{ "Comment", "///**\n// * Save the pin to the cloud.\n// * This will start a Latent Action to save the ARPin to the Azure Spatial Anchors cloud service.\n// *\x09\n// * @param ARPin\x09\x09\x09\x09\x09\x09The ARPin to save.\n// * @param Lifetime\x09\x09\x09\x09\x09The lifetime time of the cloud pin in the cloud in seconds.  <= 0 means no expiration.  I would not expect expiration to be accurate to the second.\n// * @param OutAzureCloudSpatialAnchor  The Cloud anchor handle.\n// * @param OutResult\x09\x09\x09\x09\x09Result of the Save attempt.\n// * @param OutErrorString\x09\x09\x09\x09""Additional information about the OutResult (often empty).\n// */\n" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ToolTip", "Save the pin to the cloud.\nThis will start a Latent Action to save the ARPin to the Azure Spatial Anchors cloud service.\n\n@param ARPin                                                The ARPin to save.\n@param Lifetime                                     The lifetime time of the cloud pin in the cloud in seconds.  <= 0 means no expiration.  I would not expect expiration to be accurate to the second.\n@param OutAzureCloudSpatialAnchor  The Cloud anchor handle.\n@param OutResult                                    Result of the Save attempt.\n@param OutErrorString                               Additional information about the OutResult (often empty)." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsLibrary, nullptr, "SavePinToCloud", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::AzureSpatialAnchorsLibrary_eventSavePinToCloud_Parms), Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics
	{
		struct AzureSpatialAnchorsLibrary_eventSavePinToCloudWithAppProperties_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			UARPin* ARPin;
			float Lifetime;
			TMap<FString,FString> InAppProperties;
			UAzureCloudSpatialAnchor* OutAzureCloudSpatialAnchor;
			EAzureSpatialAnchorsResult OutResult;
			FString OutErrorString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ARPin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InAppProperties_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InAppProperties_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAppProperties_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InAppProperties;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAzureCloudSpatialAnchor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutErrorString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventSavePinToCloudWithAppProperties_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventSavePinToCloudWithAppProperties_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_ARPin = { "ARPin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventSavePinToCloudWithAppProperties_Parms, ARPin), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventSavePinToCloudWithAppProperties_Parms, Lifetime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_InAppProperties_ValueProp = { "InAppProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_InAppProperties_Key_KeyProp = { "InAppProperties_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_InAppProperties_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_InAppProperties = { "InAppProperties", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventSavePinToCloudWithAppProperties_Parms, InAppProperties), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_InAppProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_InAppProperties_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_OutAzureCloudSpatialAnchor = { "OutAzureCloudSpatialAnchor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventSavePinToCloudWithAppProperties_Parms, OutAzureCloudSpatialAnchor), Z_Construct_UClass_UAzureCloudSpatialAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventSavePinToCloudWithAppProperties_Parms, OutResult), Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult, METADATA_PARAMS(nullptr, 0) }; // 534733115
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_OutErrorString = { "OutErrorString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventSavePinToCloudWithAppProperties_Parms, OutErrorString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_ARPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_Lifetime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_InAppProperties_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_InAppProperties_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_InAppProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_OutAzureCloudSpatialAnchor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_OutResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_OutResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::NewProp_OutErrorString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR|AzureSpatialAnchors" },
		{ "Comment", "///**\n// * Save the pin to the cloud.\n// * This will start a Latent Action to save the ARPin to the Azure Spatial Anchors cloud service.\n// *\x09\n// * @param ARPin\x09\x09\x09\x09\x09\x09The ARPin to save.\n// * @param Lifetime\x09\x09\x09\x09\x09The lifetime time of the cloud pin in the cloud in seconds.  <= 0 means no expiration.  I would not expect expiration to be accurate to the second.\n// * @param InAppProperties\x09\x09\x09\x09Key-Value pairs of strings that will be stored to the cloud with the anchor.  Use them to attach app-specific information to an anchor.\n// * @param OutAzureCloudSpatialAnchor  The Cloud anchor handle.\n// * @param OutResult\x09\x09\x09\x09\x09Result of the Save attempt.\n// * @param OutErrorString\x09\x09\x09\x09""Additional information about the OutResult (often empty).\n// */\n" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ToolTip", "Save the pin to the cloud.\nThis will start a Latent Action to save the ARPin to the Azure Spatial Anchors cloud service.\n\n@param ARPin                                                The ARPin to save.\n@param Lifetime                                     The lifetime time of the cloud pin in the cloud in seconds.  <= 0 means no expiration.  I would not expect expiration to be accurate to the second.\n@param InAppProperties                              Key-Value pairs of strings that will be stored to the cloud with the anchor.  Use them to attach app-specific information to an anchor.\n@param OutAzureCloudSpatialAnchor  The Cloud anchor handle.\n@param OutResult                                    Result of the Save attempt.\n@param OutErrorString                               Additional information about the OutResult (often empty)." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsLibrary, nullptr, "SavePinToCloudWithAppProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::AzureSpatialAnchorsLibrary_eventSavePinToCloudWithAppProperties_Parms), Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StartSession_Statics
	{
		struct AzureSpatialAnchorsLibrary_eventStartSession_Parms
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
	void Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StartSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AzureSpatialAnchorsLibrary_eventStartSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StartSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AzureSpatialAnchorsLibrary_eventStartSession_Parms), &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StartSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StartSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StartSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StartSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR|AzureSpatialAnchors" },
		{ "Comment", "///**\n// * Start a Session running.  \n// * ASA will start collecting tracking data.\n// *\n// * @return (Boolean)  True if a session has been started (even if it was already started).\n// */\n" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ToolTip", "Start a Session running.\nASA will start collecting tracking data.\n\n@return (Boolean)  True if a session has been started (even if it was already started)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StartSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsLibrary, nullptr, "StartSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StartSession_Statics::AzureSpatialAnchorsLibrary_eventStartSession_Parms), Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StartSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StartSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StartSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StartSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StartSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StartSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopSession_Statics
	{
		struct AzureSpatialAnchorsLibrary_eventStopSession_Parms
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
	void Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AzureSpatialAnchorsLibrary_eventStopSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AzureSpatialAnchorsLibrary_eventStopSession_Parms), &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR|AzureSpatialAnchors" },
		{ "Comment", "///**\n// * The session will stop, it can be started again.\n// */\n" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ToolTip", "The session will stop, it can be started again." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsLibrary, nullptr, "StopSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopSession_Statics::AzureSpatialAnchorsLibrary_eventStopSession_Parms), Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopWatcher_Statics
	{
		struct AzureSpatialAnchorsLibrary_eventStopWatcher_Parms
		{
			int32 InWatcherIdentifier;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InWatcherIdentifier;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopWatcher_Statics::NewProp_InWatcherIdentifier = { "InWatcherIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventStopWatcher_Parms, InWatcherIdentifier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopWatcher_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AzureSpatialAnchorsLibrary_eventStopWatcher_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopWatcher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AzureSpatialAnchorsLibrary_eventStopWatcher_Parms), &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopWatcher_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopWatcher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopWatcher_Statics::NewProp_InWatcherIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopWatcher_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopWatcher_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "///**\n// * Stop the specified Watcher looking for anchors, if it still exists.  \n// *\n// * @param InWatcherIdentifier      The identifier of the watcher we are trying to stop.\n// *\n// * @return (Boolean)  True if the watcher existed.  False if it did not.\n// */\n" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ToolTip", "Stop the specified Watcher looking for anchors, if it still exists.\n\n@param InWatcherIdentifier      The identifier of the watcher we are trying to stop.\n\n@return (Boolean)  True if the watcher existed.  False if it did not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopWatcher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsLibrary, nullptr, "StopWatcher", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopWatcher_Statics::AzureSpatialAnchorsLibrary_eventStopWatcher_Parms), Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopWatcher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopWatcher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopWatcher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopWatcher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopWatcher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopWatcher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties_Statics
	{
		struct AzureSpatialAnchorsLibrary_eventUpdateCloudAnchorProperties_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			UAzureCloudSpatialAnchor* InAzureCloudSpatialAnchor;
			EAzureSpatialAnchorsResult OutResult;
			FString OutErrorString;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAzureCloudSpatialAnchor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutErrorString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventUpdateCloudAnchorProperties_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventUpdateCloudAnchorProperties_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties_Statics::NewProp_InAzureCloudSpatialAnchor = { "InAzureCloudSpatialAnchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventUpdateCloudAnchorProperties_Parms, InAzureCloudSpatialAnchor), Z_Construct_UClass_UAzureCloudSpatialAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventUpdateCloudAnchorProperties_Parms, OutResult), Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult, METADATA_PARAMS(nullptr, 0) }; // 534733115
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties_Statics::NewProp_OutErrorString = { "OutErrorString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsLibrary_eventUpdateCloudAnchorProperties_Parms, OutErrorString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties_Statics::NewProp_InAzureCloudSpatialAnchor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties_Statics::NewProp_OutResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties_Statics::NewProp_OutResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties_Statics::NewProp_OutErrorString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "///**\n// * Save the cloud anchor's properties to the cloud.\n// * This will start a Latent Action to save the AzureCloudSpatialAnchor properties to the Azure Spatial Anchors cloud service.\n// * This can fail if another client updates the anchor.  If that happens you will have to call RefreshCloudAnchorProperties to get the updated values before you might UpdateCloudAnchorProperties sucessfully.\n// *\n// * @param InAzureCloudSpatialAnchor      The AzureCloudSpatialAnchor to update.\n// * @param OutResult\x09The Result enumeration.\n// * @param OutErrorString\x09""Additional information about the OutResult (often empty).\n// */\n" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ToolTip", "Save the cloud anchor's properties to the cloud.\nThis will start a Latent Action to save the AzureCloudSpatialAnchor properties to the Azure Spatial Anchors cloud service.\nThis can fail if another client updates the anchor.  If that happens you will have to call RefreshCloudAnchorProperties to get the updated values before you might UpdateCloudAnchorProperties sucessfully.\n\n@param InAzureCloudSpatialAnchor      The AzureCloudSpatialAnchor to update.\n@param OutResult    The Result enumeration.\n@param OutErrorString       Additional information about the OutResult (often empty)." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsLibrary, nullptr, "UpdateCloudAnchorProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties_Statics::AzureSpatialAnchorsLibrary_eventUpdateCloudAnchorProperties_Parms), Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAzureSpatialAnchorsLibrary);
	UClass* Z_Construct_UClass_UAzureSpatialAnchorsLibrary_NoRegister()
	{
		return UAzureSpatialAnchorsLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAzureSpatialAnchorsLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAzureSpatialAnchorsLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AzureSpatialAnchors,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAzureSpatialAnchorsLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession, "ConfigSession" }, // 189953145
		{ &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConfigSession2, "ConfigSession2" }, // 3059270655
		{ &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_ConstructCloudAnchor, "ConstructCloudAnchor" }, // 3865041191
		{ &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateARPinAroundAzureCloudSpatialAnchor, "CreateARPinAroundAzureCloudSpatialAnchor" }, // 2434292258
		{ &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateSession, "CreateSession" }, // 1675994046
		{ &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_CreateWatcher, "CreateWatcher" }, // 2475686986
		{ &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DeleteCloudAnchor, "DeleteCloudAnchor" }, // 691498040
		{ &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_DestroySession, "DestroySession" }, // 2579723733
		{ &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCachedSessionStatus, "GetCachedSessionStatus" }, // 931016834
		{ &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchor, "GetCloudAnchor" }, // 1024398547
		{ &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetCloudAnchors, "GetCloudAnchors" }, // 2189201499
		{ &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_GetSessionStatus, "GetSessionStatus" }, // 2158608734
		{ &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_LoadCloudAnchor, "LoadCloudAnchor" }, // 1055063017
		{ &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_RefreshCloudAnchorProperties, "RefreshCloudAnchorProperties" }, // 1924277440
		{ &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SaveCloudAnchor, "SaveCloudAnchor" }, // 809034546
		{ &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloud, "SavePinToCloud" }, // 2492983890
		{ &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_SavePinToCloudWithAppProperties, "SavePinToCloudWithAppProperties" }, // 2651434577
		{ &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StartSession, "StartSession" }, // 3312860542
		{ &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopSession, "StopSession" }, // 1851199453
		{ &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_StopWatcher, "StopWatcher" }, // 3350810654
		{ &Z_Construct_UFunction_UAzureSpatialAnchorsLibrary_UpdateCloudAnchorProperties, "UpdateCloudAnchorProperties" }, // 2075517661
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzureSpatialAnchorsLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A function library that provides static/Blueprint functions for AzureSpatialAnchors.*/" },
		{ "IncludePath", "AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsFunctionLibrary.h" },
		{ "ToolTip", "A function library that provides static/Blueprint functions for AzureSpatialAnchors." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAzureSpatialAnchorsLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzureSpatialAnchorsLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzureSpatialAnchorsLibrary_Statics::ClassParams = {
		&UAzureSpatialAnchorsLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAzureSpatialAnchorsLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAzureSpatialAnchorsLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAzureSpatialAnchorsLibrary()
	{
		if (!Z_Registration_Info_UClass_UAzureSpatialAnchorsLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzureSpatialAnchorsLibrary.OuterSingleton, Z_Construct_UClass_UAzureSpatialAnchorsLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAzureSpatialAnchorsLibrary.OuterSingleton;
	}
	template<> AZURESPATIALANCHORS_API UClass* StaticClass<UAzureSpatialAnchorsLibrary>()
	{
		return UAzureSpatialAnchorsLibrary::StaticClass();
	}
	UAzureSpatialAnchorsLibrary::UAzureSpatialAnchorsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAzureSpatialAnchorsLibrary);
	UAzureSpatialAnchorsLibrary::~UAzureSpatialAnchorsLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAzureSpatialAnchorsLibrary, UAzureSpatialAnchorsLibrary::StaticClass, TEXT("UAzureSpatialAnchorsLibrary"), &Z_Registration_Info_UClass_UAzureSpatialAnchorsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzureSpatialAnchorsLibrary), 1340198513U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_2635297634(TEXT("/Script/AzureSpatialAnchors"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
