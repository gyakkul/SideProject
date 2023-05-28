// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoogleARCoreServicesFunctionLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "GoogleARCoreServicesTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleARCoreServicesFunctionLibrary() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPin_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	GOOGLEARCORESERVICES_API UClass* Z_Construct_UClass_UCloudARPin_NoRegister();
	GOOGLEARCORESERVICES_API UClass* Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary();
	GOOGLEARCORESERVICES_API UClass* Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary_NoRegister();
	GOOGLEARCORESERVICES_API UEnum* Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudTaskResult();
	GOOGLEARCORESERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig();
	UPackage* Z_Construct_UPackage__Script_GoogleARCoreServices();
// End Cross Module References
	DEFINE_FUNCTION(UGoogleARCoreServicesFunctionLibrary::execGetAllCloudARPin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UCloudARPin*>*)Z_Param__Result=UGoogleARCoreServicesFunctionLibrary::GetAllCloudARPin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreServicesFunctionLibrary::execRemoveCloudARPin)
	{
		P_GET_OBJECT(UCloudARPin,Z_Param_PinToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleARCoreServicesFunctionLibrary::RemoveCloudARPin(Z_Param_PinToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreServicesFunctionLibrary::execCreateAndResolveCloudARPin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CloudId);
		P_GET_ENUM_REF(EARPinCloudTaskResult,Z_Param_Out_OutTaskResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCloudARPin**)Z_Param__Result=UGoogleARCoreServicesFunctionLibrary::CreateAndResolveCloudARPin(Z_Param_CloudId,(EARPinCloudTaskResult&)(Z_Param_Out_OutTaskResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreServicesFunctionLibrary::execCreateAndHostCloudARPin)
	{
		P_GET_OBJECT(UARPin,Z_Param_ARPinToHost);
		P_GET_ENUM_REF(EARPinCloudTaskResult,Z_Param_Out_OutTaskResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCloudARPin**)Z_Param__Result=UGoogleARCoreServicesFunctionLibrary::CreateAndHostCloudARPin(Z_Param_ARPinToHost,(EARPinCloudTaskResult&)(Z_Param_Out_OutTaskResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreServicesFunctionLibrary::execCreateAndResolveCloudARPinLatentAction)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_CloudId);
		P_GET_ENUM_REF(EARPinCloudTaskResult,Z_Param_Out_OutAcquiringResult);
		P_GET_OBJECT_REF(UCloudARPin,Z_Param_Out_OutCloudARPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleARCoreServicesFunctionLibrary::CreateAndResolveCloudARPinLatentAction(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_CloudId,(EARPinCloudTaskResult&)(Z_Param_Out_OutAcquiringResult),Z_Param_Out_OutCloudARPin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreServicesFunctionLibrary::execCreateAndHostCloudARPinLatentAction)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(UARPin,Z_Param_ARPinToHost);
		P_GET_ENUM_REF(EARPinCloudTaskResult,Z_Param_Out_OutHostingResult);
		P_GET_OBJECT_REF(UCloudARPin,Z_Param_Out_OutCloudARPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleARCoreServicesFunctionLibrary::CreateAndHostCloudARPinLatentAction(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_ARPinToHost,(EARPinCloudTaskResult&)(Z_Param_Out_OutHostingResult),Z_Param_Out_OutCloudARPin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreServicesFunctionLibrary::execConfigGoogleARCoreServices)
	{
		P_GET_STRUCT(FGoogleARCoreServicesConfig,Z_Param_ServiceConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGoogleARCoreServicesFunctionLibrary::ConfigGoogleARCoreServices(Z_Param_ServiceConfig);
		P_NATIVE_END;
	}
	void UGoogleARCoreServicesFunctionLibrary::StaticRegisterNativesUGoogleARCoreServicesFunctionLibrary()
	{
		UClass* Class = UGoogleARCoreServicesFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConfigGoogleARCoreServices", &UGoogleARCoreServicesFunctionLibrary::execConfigGoogleARCoreServices },
			{ "CreateAndHostCloudARPin", &UGoogleARCoreServicesFunctionLibrary::execCreateAndHostCloudARPin },
			{ "CreateAndHostCloudARPinLatentAction", &UGoogleARCoreServicesFunctionLibrary::execCreateAndHostCloudARPinLatentAction },
			{ "CreateAndResolveCloudARPin", &UGoogleARCoreServicesFunctionLibrary::execCreateAndResolveCloudARPin },
			{ "CreateAndResolveCloudARPinLatentAction", &UGoogleARCoreServicesFunctionLibrary::execCreateAndResolveCloudARPinLatentAction },
			{ "GetAllCloudARPin", &UGoogleARCoreServicesFunctionLibrary::execGetAllCloudARPin },
			{ "RemoveCloudARPin", &UGoogleARCoreServicesFunctionLibrary::execRemoveCloudARPin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_ConfigGoogleARCoreServices_Statics
	{
		struct GoogleARCoreServicesFunctionLibrary_eventConfigGoogleARCoreServices_Parms
		{
			FGoogleARCoreServicesConfig ServiceConfig;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ServiceConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_ConfigGoogleARCoreServices_Statics::NewProp_ServiceConfig = { "ServiceConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreServicesFunctionLibrary_eventConfigGoogleARCoreServices_Parms, ServiceConfig), Z_Construct_UScriptStruct_FGoogleARCoreServicesConfig, METADATA_PARAMS(nullptr, 0) }; // 3529332240
	void Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_ConfigGoogleARCoreServices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GoogleARCoreServicesFunctionLibrary_eventConfigGoogleARCoreServices_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_ConfigGoogleARCoreServices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GoogleARCoreServicesFunctionLibrary_eventConfigGoogleARCoreServices_Parms), &Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_ConfigGoogleARCoreServices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_ConfigGoogleARCoreServices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_ConfigGoogleARCoreServices_Statics::NewProp_ServiceConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_ConfigGoogleARCoreServices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_ConfigGoogleARCoreServices_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCoreServices|Configuration" },
		{ "Comment", "/**\n\x09 * Configure the current Unreal AR session with the desired GoogleARCoreServices configuration.\n\x09 * If there is an running AR session, the configuration will take effect immediately. Otherwise,\n\x09 * it will take effect when the next AR session is running.\n\x09 * \n\x09 * @param ServiceConfig\x09 The desired GoogleARCoreServices configuration.\n\x09 * @return               True if GoogleARCoreServices is configured successfully.\n\x09 *                       False if the configuration failed to apply.\n\x09 */" },
		{ "Keywords", "googlear ar service config" },
		{ "ModuleRelativePath", "Public/GoogleARCoreServicesFunctionLibrary.h" },
		{ "ToolTip", "Configure the current Unreal AR session with the desired GoogleARCoreServices configuration.\nIf there is an running AR session, the configuration will take effect immediately. Otherwise,\nit will take effect when the next AR session is running.\n\n@param ServiceConfig  The desired GoogleARCoreServices configuration.\n@return               True if GoogleARCoreServices is configured successfully.\n                      False if the configuration failed to apply." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_ConfigGoogleARCoreServices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary, nullptr, "ConfigGoogleARCoreServices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_ConfigGoogleARCoreServices_Statics::GoogleARCoreServicesFunctionLibrary_eventConfigGoogleARCoreServices_Parms), Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_ConfigGoogleARCoreServices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_ConfigGoogleARCoreServices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_ConfigGoogleARCoreServices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_ConfigGoogleARCoreServices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_ConfigGoogleARCoreServices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_ConfigGoogleARCoreServices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPin_Statics
	{
		struct GoogleARCoreServicesFunctionLibrary_eventCreateAndHostCloudARPin_Parms
		{
			UARPin* ARPinToHost;
			EARPinCloudTaskResult OutTaskResult;
			UCloudARPin* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ARPinToHost;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutTaskResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutTaskResult;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPin_Statics::NewProp_ARPinToHost = { "ARPinToHost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreServicesFunctionLibrary_eventCreateAndHostCloudARPin_Parms, ARPinToHost), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPin_Statics::NewProp_OutTaskResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPin_Statics::NewProp_OutTaskResult = { "OutTaskResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreServicesFunctionLibrary_eventCreateAndHostCloudARPin_Parms, OutTaskResult), Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudTaskResult, METADATA_PARAMS(nullptr, 0) }; // 1947592028
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreServicesFunctionLibrary_eventCreateAndHostCloudARPin_Parms, ReturnValue), Z_Construct_UClass_UCloudARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPin_Statics::NewProp_ARPinToHost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPin_Statics::NewProp_OutTaskResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPin_Statics::NewProp_OutTaskResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCoreServices|CloudARPin" },
		{ "Comment", "/**\n\x09 * Creating and hosting a CloudARPin and return it immediately.\n\x09 * Note that this function only start the hosting process. Call GetARPinCloudState to check \n\x09 * if the hosting is finished or failed with error.\n\x09 */" },
		{ "Keywords", "googlear ar service remove" },
		{ "ModuleRelativePath", "Public/GoogleARCoreServicesFunctionLibrary.h" },
		{ "ToolTip", "Creating and hosting a CloudARPin and return it immediately.\nNote that this function only start the hosting process. Call GetARPinCloudState to check\nif the hosting is finished or failed with error." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary, nullptr, "CreateAndHostCloudARPin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPin_Statics::GoogleARCoreServicesFunctionLibrary_eventCreateAndHostCloudARPin_Parms), Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction_Statics
	{
		struct GoogleARCoreServicesFunctionLibrary_eventCreateAndHostCloudARPinLatentAction_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			UARPin* ARPinToHost;
			EARPinCloudTaskResult OutHostingResult;
			UCloudARPin* OutCloudARPin;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ARPinToHost;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutHostingResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutHostingResult;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutCloudARPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreServicesFunctionLibrary_eventCreateAndHostCloudARPinLatentAction_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreServicesFunctionLibrary_eventCreateAndHostCloudARPinLatentAction_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction_Statics::NewProp_ARPinToHost = { "ARPinToHost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreServicesFunctionLibrary_eventCreateAndHostCloudARPinLatentAction_Parms, ARPinToHost), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction_Statics::NewProp_OutHostingResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction_Statics::NewProp_OutHostingResult = { "OutHostingResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreServicesFunctionLibrary_eventCreateAndHostCloudARPinLatentAction_Parms, OutHostingResult), Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudTaskResult, METADATA_PARAMS(nullptr, 0) }; // 1947592028
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction_Statics::NewProp_OutCloudARPin = { "OutCloudARPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreServicesFunctionLibrary_eventCreateAndHostCloudARPinLatentAction_Parms, OutCloudARPin), Z_Construct_UClass_UCloudARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction_Statics::NewProp_ARPinToHost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction_Statics::NewProp_OutHostingResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction_Statics::NewProp_OutHostingResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction_Statics::NewProp_OutCloudARPin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCoreServices|CloudARPin" },
		{ "Comment", "/**\n\x09 * This will start a Latent Action to host the ARPin and creating a UCloudARPin from it.\n\x09 * The complete flow of this Latent Action will be triggered if the hosting is complete\n\x09 * or an error has occurred.\n\x09 *\n\x09 * Note that a UCloudARPin will be always created when this function is called, even in the case\n\x09 * that the CloudId is failed to host. You can check the CloudState of returning UCloudARPin\n\x09 * to see why the hosting failed.\n\x09 *\n\x09 * @param ARPinToHost       The ARPin to host.\n\x09 * @param OutHostingResult  The ARPin hosting result.\n\x09 * @param OutCloudARPin     A new instance of UCloudARPin created using the input ARPinToHost.\n\x09 */" },
		{ "Keywords", "googlear ar service host cloud" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/GoogleARCoreServicesFunctionLibrary.h" },
		{ "ToolTip", "This will start a Latent Action to host the ARPin and creating a UCloudARPin from it.\nThe complete flow of this Latent Action will be triggered if the hosting is complete\nor an error has occurred.\n\nNote that a UCloudARPin will be always created when this function is called, even in the case\nthat the CloudId is failed to host. You can check the CloudState of returning UCloudARPin\nto see why the hosting failed.\n\n@param ARPinToHost       The ARPin to host.\n@param OutHostingResult  The ARPin hosting result.\n@param OutCloudARPin     A new instance of UCloudARPin created using the input ARPinToHost." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary, nullptr, "CreateAndHostCloudARPinLatentAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction_Statics::GoogleARCoreServicesFunctionLibrary_eventCreateAndHostCloudARPinLatentAction_Parms), Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPin_Statics
	{
		struct GoogleARCoreServicesFunctionLibrary_eventCreateAndResolveCloudARPin_Parms
		{
			FString CloudId;
			EARPinCloudTaskResult OutTaskResult;
			UCloudARPin* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_CloudId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutTaskResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutTaskResult;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPin_Statics::NewProp_CloudId = { "CloudId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreServicesFunctionLibrary_eventCreateAndResolveCloudARPin_Parms, CloudId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPin_Statics::NewProp_OutTaskResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPin_Statics::NewProp_OutTaskResult = { "OutTaskResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreServicesFunctionLibrary_eventCreateAndResolveCloudARPin_Parms, OutTaskResult), Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudTaskResult, METADATA_PARAMS(nullptr, 0) }; // 1947592028
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreServicesFunctionLibrary_eventCreateAndResolveCloudARPin_Parms, ReturnValue), Z_Construct_UClass_UCloudARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPin_Statics::NewProp_CloudId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPin_Statics::NewProp_OutTaskResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPin_Statics::NewProp_OutTaskResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCoreServices|CloudARPin" },
		{ "Comment", "/**\n\x09 * Creating and Resolving a CloudARPin and return it immediately.\n\x09 * Note that this function only start the acquiring process. Call GetARPinCloudState to check\n\x09 * if the acquiring is finished or failed with error.\n\x09 */" },
		{ "Keywords", "googlear ar service remove" },
		{ "ModuleRelativePath", "Public/GoogleARCoreServicesFunctionLibrary.h" },
		{ "ToolTip", "Creating and Resolving a CloudARPin and return it immediately.\nNote that this function only start the acquiring process. Call GetARPinCloudState to check\nif the acquiring is finished or failed with error." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary, nullptr, "CreateAndResolveCloudARPin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPin_Statics::GoogleARCoreServicesFunctionLibrary_eventCreateAndResolveCloudARPin_Parms), Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction_Statics
	{
		struct GoogleARCoreServicesFunctionLibrary_eventCreateAndResolveCloudARPinLatentAction_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString CloudId;
			EARPinCloudTaskResult OutAcquiringResult;
			UCloudARPin* OutCloudARPin;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CloudId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutAcquiringResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutAcquiringResult;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutCloudARPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreServicesFunctionLibrary_eventCreateAndResolveCloudARPinLatentAction_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreServicesFunctionLibrary_eventCreateAndResolveCloudARPinLatentAction_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction_Statics::NewProp_CloudId = { "CloudId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreServicesFunctionLibrary_eventCreateAndResolveCloudARPinLatentAction_Parms, CloudId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction_Statics::NewProp_OutAcquiringResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction_Statics::NewProp_OutAcquiringResult = { "OutAcquiringResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreServicesFunctionLibrary_eventCreateAndResolveCloudARPinLatentAction_Parms, OutAcquiringResult), Z_Construct_UEnum_GoogleARCoreServices_EARPinCloudTaskResult, METADATA_PARAMS(nullptr, 0) }; // 1947592028
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction_Statics::NewProp_OutCloudARPin = { "OutCloudARPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreServicesFunctionLibrary_eventCreateAndResolveCloudARPinLatentAction_Parms, OutCloudARPin), Z_Construct_UClass_UCloudARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction_Statics::NewProp_CloudId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction_Statics::NewProp_OutAcquiringResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction_Statics::NewProp_OutAcquiringResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction_Statics::NewProp_OutCloudARPin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCoreServices|CloudARPin" },
		{ "Comment", "/**\n\x09 * This will start a Latent Action to create UCloudARPin using the given CloudId. The complete flow\n\x09 * of this Latent Action will be triggered if creating the UCloudARPin is successfully or an error\n\x09 * has occurred.\n\x09 *\n\x09 * Note that a UCloudARPin will be always created when this function is called, even in the case\n\x09 * that the CloudId is failed to resolve. You can check the CloudState of returning UCloudARPin\n\x09 * to see why the resolving failed.\n\x09 *\n\x09 * @param CloudId               The CloudId that will be used to resolve the ARPin\n\x09 * @param OutAcquiringResult    The ARPin acquiring result.\n\x09 * @param OutARPin              The ARPin that is created when calling this function. \n\x09 */" },
		{ "Keywords", "googlear ar service resolve cloud" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/GoogleARCoreServicesFunctionLibrary.h" },
		{ "ToolTip", "This will start a Latent Action to create UCloudARPin using the given CloudId. The complete flow\nof this Latent Action will be triggered if creating the UCloudARPin is successfully or an error\nhas occurred.\n\nNote that a UCloudARPin will be always created when this function is called, even in the case\nthat the CloudId is failed to resolve. You can check the CloudState of returning UCloudARPin\nto see why the resolving failed.\n\n@param CloudId               The CloudId that will be used to resolve the ARPin\n@param OutAcquiringResult    The ARPin acquiring result.\n@param OutARPin              The ARPin that is created when calling this function." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary, nullptr, "CreateAndResolveCloudARPinLatentAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction_Statics::GoogleARCoreServicesFunctionLibrary_eventCreateAndResolveCloudARPinLatentAction_Parms), Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_GetAllCloudARPin_Statics
	{
		struct GoogleARCoreServicesFunctionLibrary_eventGetAllCloudARPin_Parms
		{
			TArray<UCloudARPin*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_GetAllCloudARPin_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCloudARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_GetAllCloudARPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreServicesFunctionLibrary_eventGetAllCloudARPin_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_GetAllCloudARPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_GetAllCloudARPin_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_GetAllCloudARPin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_GetAllCloudARPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCoreServices|CloudARPin" },
		{ "Comment", "/**\n\x09 * Get a list of all CloudARPin in the current ARSession.\n\x09 */" },
		{ "Keywords", "googlear ar service all" },
		{ "ModuleRelativePath", "Public/GoogleARCoreServicesFunctionLibrary.h" },
		{ "ToolTip", "Get a list of all CloudARPin in the current ARSession." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_GetAllCloudARPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary, nullptr, "GetAllCloudARPin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_GetAllCloudARPin_Statics::GoogleARCoreServicesFunctionLibrary_eventGetAllCloudARPin_Parms), Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_GetAllCloudARPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_GetAllCloudARPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_GetAllCloudARPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_GetAllCloudARPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_GetAllCloudARPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_GetAllCloudARPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_RemoveCloudARPin_Statics
	{
		struct GoogleARCoreServicesFunctionLibrary_eventRemoveCloudARPin_Parms
		{
			UCloudARPin* PinToRemove;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PinToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_RemoveCloudARPin_Statics::NewProp_PinToRemove = { "PinToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreServicesFunctionLibrary_eventRemoveCloudARPin_Parms, PinToRemove), Z_Construct_UClass_UCloudARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_RemoveCloudARPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_RemoveCloudARPin_Statics::NewProp_PinToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_RemoveCloudARPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCoreServices|CloudARPin" },
		{ "Comment", "/**\n\x09 * Remove the given CloudARPin from the current ARSession.\n\x09 */" },
		{ "Keywords", "googlear ar service remove" },
		{ "ModuleRelativePath", "Public/GoogleARCoreServicesFunctionLibrary.h" },
		{ "ToolTip", "Remove the given CloudARPin from the current ARSession." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_RemoveCloudARPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary, nullptr, "RemoveCloudARPin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_RemoveCloudARPin_Statics::GoogleARCoreServicesFunctionLibrary_eventRemoveCloudARPin_Parms), Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_RemoveCloudARPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_RemoveCloudARPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_RemoveCloudARPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_RemoveCloudARPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_RemoveCloudARPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_RemoveCloudARPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoogleARCoreServicesFunctionLibrary);
	UClass* Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary_NoRegister()
	{
		return UGoogleARCoreServicesFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreServices,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_ConfigGoogleARCoreServices, "ConfigGoogleARCoreServices" }, // 1053232092
		{ &Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPin, "CreateAndHostCloudARPin" }, // 808159144
		{ &Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndHostCloudARPinLatentAction, "CreateAndHostCloudARPinLatentAction" }, // 2613355052
		{ &Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPin, "CreateAndResolveCloudARPin" }, // 3923001158
		{ &Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_CreateAndResolveCloudARPinLatentAction, "CreateAndResolveCloudARPinLatentAction" }, // 573273816
		{ &Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_GetAllCloudARPin, "GetAllCloudARPin" }, // 1798366143
		{ &Z_Construct_UFunction_UGoogleARCoreServicesFunctionLibrary_RemoveCloudARPin, "RemoveCloudARPin" }, // 3160941696
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A function library that provides static/Blueprint functions for Google ARCore Services.*/" },
		{ "IncludePath", "GoogleARCoreServicesFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/GoogleARCoreServicesFunctionLibrary.h" },
		{ "ToolTip", "A function library that provides static/Blueprint functions for Google ARCore Services." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleARCoreServicesFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary_Statics::ClassParams = {
		&UGoogleARCoreServicesFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UGoogleARCoreServicesFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoogleARCoreServicesFunctionLibrary.OuterSingleton, Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGoogleARCoreServicesFunctionLibrary.OuterSingleton;
	}
	template<> GOOGLEARCORESERVICES_API UClass* StaticClass<UGoogleARCoreServicesFunctionLibrary>()
	{
		return UGoogleARCoreServicesFunctionLibrary::StaticClass();
	}
	UGoogleARCoreServicesFunctionLibrary::UGoogleARCoreServicesFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleARCoreServicesFunctionLibrary);
	UGoogleARCoreServicesFunctionLibrary::~UGoogleARCoreServicesFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGoogleARCoreServicesFunctionLibrary, UGoogleARCoreServicesFunctionLibrary::StaticClass, TEXT("UGoogleARCoreServicesFunctionLibrary"), &Z_Registration_Info_UClass_UGoogleARCoreServicesFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoogleARCoreServicesFunctionLibrary), 3565357275U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_2858918378(TEXT("/Script/GoogleARCoreServices"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCoreServices_Source_GoogleARCoreServices_Public_GoogleARCoreServicesFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
