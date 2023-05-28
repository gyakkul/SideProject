// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXProtocolBlueprintLibrary.h"
#include "IO/DMXInputPortReference.h"
#include "IO/DMXOutputPortReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXProtocolBlueprintLibrary() {}
// Cross Module References
	DMXPROTOCOL_API UClass* Z_Construct_UClass_UDMXProtocolBlueprintLibrary();
	DMXPROTOCOL_API UClass* Z_Construct_UClass_UDMXProtocolBlueprintLibrary_NoRegister();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXInputPortReference();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOutputPortReference();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DMXProtocol();
// End Cross Module References
	DEFINE_FUNCTION(UDMXProtocolBlueprintLibrary::execSetDMXOutputPortDestinationAddress)
	{
		P_GET_STRUCT(FDMXOutputPortReference,Z_Param_OutputPort);
		P_GET_PROPERTY(FStrProperty,Z_Param_DestinationAddress);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDMXProtocolBlueprintLibrary::SetDMXOutputPortDestinationAddress(Z_Param_OutputPort,Z_Param_DestinationAddress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXProtocolBlueprintLibrary::execSetDMXOutputPortDestinationAddresses)
	{
		P_GET_STRUCT(FDMXOutputPortReference,Z_Param_OutputPort);
		P_GET_TARRAY_REF(FString,Z_Param_Out_DestinationAddresses);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDMXProtocolBlueprintLibrary::SetDMXOutputPortDestinationAddresses(Z_Param_OutputPort,Z_Param_Out_DestinationAddresses);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXProtocolBlueprintLibrary::execSetDMXOutputPortDeviceAddress)
	{
		P_GET_STRUCT(FDMXOutputPortReference,Z_Param_OutputPort);
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceAddress);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDMXProtocolBlueprintLibrary::SetDMXOutputPortDeviceAddress(Z_Param_OutputPort,Z_Param_DeviceAddress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXProtocolBlueprintLibrary::execSetDMXInputPortDeviceAddress)
	{
		P_GET_STRUCT(FDMXInputPortReference,Z_Param_InputPort);
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceAddress);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDMXProtocolBlueprintLibrary::SetDMXInputPortDeviceAddress(Z_Param_InputPort,Z_Param_DeviceAddress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXProtocolBlueprintLibrary::execGetLocalDMXNetworkInterfaceCardIPs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UDMXProtocolBlueprintLibrary::GetLocalDMXNetworkInterfaceCardIPs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXProtocolBlueprintLibrary::execIsReceiveDMXEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDMXProtocolBlueprintLibrary::IsReceiveDMXEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXProtocolBlueprintLibrary::execSetReceiveDMXEnabled)
	{
		P_GET_UBOOL(Z_Param_bReceiveDMXEnabled);
		P_GET_UBOOL(Z_Param_bAffectEditor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDMXProtocolBlueprintLibrary::SetReceiveDMXEnabled(Z_Param_bReceiveDMXEnabled,Z_Param_bAffectEditor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXProtocolBlueprintLibrary::execIsSendDMXEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDMXProtocolBlueprintLibrary::IsSendDMXEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXProtocolBlueprintLibrary::execSetSendDMXEnabled)
	{
		P_GET_UBOOL(Z_Param_bSendDMXEnabled);
		P_GET_UBOOL(Z_Param_bAffectEditor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDMXProtocolBlueprintLibrary::SetSendDMXEnabled(Z_Param_bSendDMXEnabled,Z_Param_bAffectEditor);
		P_NATIVE_END;
	}
	void UDMXProtocolBlueprintLibrary::StaticRegisterNativesUDMXProtocolBlueprintLibrary()
	{
		UClass* Class = UDMXProtocolBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLocalDMXNetworkInterfaceCardIPs", &UDMXProtocolBlueprintLibrary::execGetLocalDMXNetworkInterfaceCardIPs },
			{ "IsReceiveDMXEnabled", &UDMXProtocolBlueprintLibrary::execIsReceiveDMXEnabled },
			{ "IsSendDMXEnabled", &UDMXProtocolBlueprintLibrary::execIsSendDMXEnabled },
			{ "SetDMXInputPortDeviceAddress", &UDMXProtocolBlueprintLibrary::execSetDMXInputPortDeviceAddress },
			{ "SetDMXOutputPortDestinationAddress", &UDMXProtocolBlueprintLibrary::execSetDMXOutputPortDestinationAddress },
			{ "SetDMXOutputPortDestinationAddresses", &UDMXProtocolBlueprintLibrary::execSetDMXOutputPortDestinationAddresses },
			{ "SetDMXOutputPortDeviceAddress", &UDMXProtocolBlueprintLibrary::execSetDMXOutputPortDeviceAddress },
			{ "SetReceiveDMXEnabled", &UDMXProtocolBlueprintLibrary::execSetReceiveDMXEnabled },
			{ "SetSendDMXEnabled", &UDMXProtocolBlueprintLibrary::execSetSendDMXEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_GetLocalDMXNetworkInterfaceCardIPs_Statics
	{
		struct DMXProtocolBlueprintLibrary_eventGetLocalDMXNetworkInterfaceCardIPs_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_GetLocalDMXNetworkInterfaceCardIPs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_GetLocalDMXNetworkInterfaceCardIPs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXProtocolBlueprintLibrary_eventGetLocalDMXNetworkInterfaceCardIPs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_GetLocalDMXNetworkInterfaceCardIPs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_GetLocalDMXNetworkInterfaceCardIPs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_GetLocalDMXNetworkInterfaceCardIPs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_GetLocalDMXNetworkInterfaceCardIPs_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Returns the IP addresses of the network interface cards available to the system.\n\x09 * @return\x09\x09The Network Interface Card IP Addresses\n\x09 */" },
		{ "ModuleRelativePath", "Public/DMXProtocolBlueprintLibrary.h" },
		{ "ToolTip", "Returns the IP addresses of the network interface cards available to the system.\n@return              The Network Interface Card IP Addresses" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_GetLocalDMXNetworkInterfaceCardIPs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXProtocolBlueprintLibrary, nullptr, "GetLocalDMXNetworkInterfaceCardIPs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_GetLocalDMXNetworkInterfaceCardIPs_Statics::DMXProtocolBlueprintLibrary_eventGetLocalDMXNetworkInterfaceCardIPs_Parms), Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_GetLocalDMXNetworkInterfaceCardIPs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_GetLocalDMXNetworkInterfaceCardIPs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_GetLocalDMXNetworkInterfaceCardIPs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_GetLocalDMXNetworkInterfaceCardIPs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_GetLocalDMXNetworkInterfaceCardIPs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_GetLocalDMXNetworkInterfaceCardIPs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsReceiveDMXEnabled_Statics
	{
		struct DMXProtocolBlueprintLibrary_eventIsReceiveDMXEnabled_Parms
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
	void Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsReceiveDMXEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXProtocolBlueprintLibrary_eventIsReceiveDMXEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsReceiveDMXEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXProtocolBlueprintLibrary_eventIsReceiveDMXEnabled_Parms), &Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsReceiveDMXEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsReceiveDMXEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsReceiveDMXEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsReceiveDMXEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Returns whether Receive DMX from the network is enabled globally.\n\x09 * @return\x09\x09If true, DMX is received from the Network\n\x09 */" },
		{ "ModuleRelativePath", "Public/DMXProtocolBlueprintLibrary.h" },
		{ "ToolTip", "Returns whether Receive DMX from the network is enabled globally.\n@return              If true, DMX is received from the Network" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsReceiveDMXEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXProtocolBlueprintLibrary, nullptr, "IsReceiveDMXEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsReceiveDMXEnabled_Statics::DMXProtocolBlueprintLibrary_eventIsReceiveDMXEnabled_Parms), Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsReceiveDMXEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsReceiveDMXEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsReceiveDMXEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsReceiveDMXEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsReceiveDMXEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsReceiveDMXEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsSendDMXEnabled_Statics
	{
		struct DMXProtocolBlueprintLibrary_eventIsSendDMXEnabled_Parms
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
	void Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsSendDMXEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DMXProtocolBlueprintLibrary_eventIsSendDMXEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsSendDMXEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXProtocolBlueprintLibrary_eventIsSendDMXEnabled_Parms), &Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsSendDMXEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsSendDMXEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsSendDMXEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsSendDMXEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Returns whether send DMX to the network is enabled globally.\n\x09 * @return\x09\x09If true, DMX is sent to the Network\n\x09 */" },
		{ "ModuleRelativePath", "Public/DMXProtocolBlueprintLibrary.h" },
		{ "ToolTip", "Returns whether send DMX to the network is enabled globally.\n@return              If true, DMX is sent to the Network" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsSendDMXEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXProtocolBlueprintLibrary, nullptr, "IsSendDMXEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsSendDMXEnabled_Statics::DMXProtocolBlueprintLibrary_eventIsSendDMXEnabled_Parms), Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsSendDMXEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsSendDMXEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsSendDMXEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsSendDMXEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsSendDMXEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsSendDMXEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXInputPortDeviceAddress_Statics
	{
		struct DMXProtocolBlueprintLibrary_eventSetDMXInputPortDeviceAddress_Parms
		{
			FDMXInputPortReference InputPort;
			FString DeviceAddress;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceAddress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXInputPortDeviceAddress_Statics::NewProp_InputPort = { "InputPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXProtocolBlueprintLibrary_eventSetDMXInputPortDeviceAddress_Parms, InputPort), Z_Construct_UScriptStruct_FDMXInputPortReference, METADATA_PARAMS(nullptr, 0) }; // 3197363453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXInputPortDeviceAddress_Statics::NewProp_DeviceAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXInputPortDeviceAddress_Statics::NewProp_DeviceAddress = { "DeviceAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXProtocolBlueprintLibrary_eventSetDMXInputPortDeviceAddress_Parms, DeviceAddress), METADATA_PARAMS(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXInputPortDeviceAddress_Statics::NewProp_DeviceAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXInputPortDeviceAddress_Statics::NewProp_DeviceAddress_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXInputPortDeviceAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXInputPortDeviceAddress_Statics::NewProp_InputPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXInputPortDeviceAddress_Statics::NewProp_DeviceAddress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXInputPortDeviceAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Sets the Device Address of the Output Port. For networking Protocols that's the IP Adress of the network interface card.\n\x09 * @param InputPort\x09\x09\x09The Input Port for which the Device Address should be set\n\x09 * @param DeviceAddress\x09\x09The Device Address the Input Port should use\n\x09 */" },
		{ "ModuleRelativePath", "Public/DMXProtocolBlueprintLibrary.h" },
		{ "ToolTip", "Sets the Device Address of the Output Port. For networking Protocols that's the IP Adress of the network interface card.\n@param InputPort                     The Input Port for which the Device Address should be set\n@param DeviceAddress         The Device Address the Input Port should use" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXInputPortDeviceAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXProtocolBlueprintLibrary, nullptr, "SetDMXInputPortDeviceAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXInputPortDeviceAddress_Statics::DMXProtocolBlueprintLibrary_eventSetDMXInputPortDeviceAddress_Parms), Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXInputPortDeviceAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXInputPortDeviceAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXInputPortDeviceAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXInputPortDeviceAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXInputPortDeviceAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXInputPortDeviceAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddress_Statics
	{
		struct DMXProtocolBlueprintLibrary_eventSetDMXOutputPortDestinationAddress_Parms
		{
			FDMXOutputPortReference OutputPort;
			FString DestinationAddress;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationAddress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddress_Statics::NewProp_OutputPort = { "OutputPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXProtocolBlueprintLibrary_eventSetDMXOutputPortDestinationAddress_Parms, OutputPort), Z_Construct_UScriptStruct_FDMXOutputPortReference, METADATA_PARAMS(nullptr, 0) }; // 3396692900
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddress_Statics::NewProp_DestinationAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddress_Statics::NewProp_DestinationAddress = { "DestinationAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXProtocolBlueprintLibrary_eventSetDMXOutputPortDestinationAddress_Parms, DestinationAddress), METADATA_PARAMS(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddress_Statics::NewProp_DestinationAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddress_Statics::NewProp_DestinationAddress_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddress_Statics::NewProp_OutputPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddress_Statics::NewProp_DestinationAddress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Deprecated 5.0. Output Ports now support many Destination Addresses. Please use SetDMXOutputPortDestinationAddresses instead." },
		{ "ModuleRelativePath", "Public/DMXProtocolBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXProtocolBlueprintLibrary, nullptr, "SetDMXOutputPortDestinationAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddress_Statics::DMXProtocolBlueprintLibrary_eventSetDMXOutputPortDestinationAddress_Parms), Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddresses_Statics
	{
		struct DMXProtocolBlueprintLibrary_eventSetDMXOutputPortDestinationAddresses_Parms
		{
			FDMXOutputPortReference OutputPort;
			TArray<FString> DestinationAddresses;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputPort;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationAddresses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationAddresses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DestinationAddresses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddresses_Statics::NewProp_OutputPort = { "OutputPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXProtocolBlueprintLibrary_eventSetDMXOutputPortDestinationAddresses_Parms, OutputPort), Z_Construct_UScriptStruct_FDMXOutputPortReference, METADATA_PARAMS(nullptr, 0) }; // 3396692900
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddresses_Statics::NewProp_DestinationAddresses_Inner = { "DestinationAddresses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddresses_Statics::NewProp_DestinationAddresses_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddresses_Statics::NewProp_DestinationAddresses = { "DestinationAddresses", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXProtocolBlueprintLibrary_eventSetDMXOutputPortDestinationAddresses_Parms, DestinationAddresses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddresses_Statics::NewProp_DestinationAddresses_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddresses_Statics::NewProp_DestinationAddresses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddresses_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddresses_Statics::NewProp_OutputPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddresses_Statics::NewProp_DestinationAddresses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddresses_Statics::NewProp_DestinationAddresses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddresses_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Sets the Destination Address Address of the Output Port. For networking Protocols that's the Unicast IP Adress. Not required for Multicast and Broadcast.\n\x09 * @param PortName\x09\x09\x09\x09The Output Port for which the Unicast IP Address should be set\n\x09 * @param DestinationAddress\x09The Destination Address the Output Port should use \n\x09 */" },
		{ "ModuleRelativePath", "Public/DMXProtocolBlueprintLibrary.h" },
		{ "ToolTip", "Sets the Destination Address Address of the Output Port. For networking Protocols that's the Unicast IP Adress. Not required for Multicast and Broadcast.\n@param PortName                              The Output Port for which the Unicast IP Address should be set\n@param DestinationAddress    The Destination Address the Output Port should use" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddresses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXProtocolBlueprintLibrary, nullptr, "SetDMXOutputPortDestinationAddresses", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddresses_Statics::DMXProtocolBlueprintLibrary_eventSetDMXOutputPortDestinationAddresses_Parms), Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddresses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddresses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddresses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddresses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddresses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddresses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDeviceAddress_Statics
	{
		struct DMXProtocolBlueprintLibrary_eventSetDMXOutputPortDeviceAddress_Parms
		{
			FDMXOutputPortReference OutputPort;
			FString DeviceAddress;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceAddress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDeviceAddress_Statics::NewProp_OutputPort = { "OutputPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXProtocolBlueprintLibrary_eventSetDMXOutputPortDeviceAddress_Parms, OutputPort), Z_Construct_UScriptStruct_FDMXOutputPortReference, METADATA_PARAMS(nullptr, 0) }; // 3396692900
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDeviceAddress_Statics::NewProp_DeviceAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDeviceAddress_Statics::NewProp_DeviceAddress = { "DeviceAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXProtocolBlueprintLibrary_eventSetDMXOutputPortDeviceAddress_Parms, DeviceAddress), METADATA_PARAMS(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDeviceAddress_Statics::NewProp_DeviceAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDeviceAddress_Statics::NewProp_DeviceAddress_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDeviceAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDeviceAddress_Statics::NewProp_OutputPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDeviceAddress_Statics::NewProp_DeviceAddress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDeviceAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Sets the Device Address of the Output Port. For networking Protocols that's the IP Adress of the network interface card.\n\x09 * @param OutputPort\x09\x09The Output Port for which the Device Address should be set\n\x09 * @param DeviceAddress\x09\x09The Device Address the Output Port should use \n\x09 */" },
		{ "ModuleRelativePath", "Public/DMXProtocolBlueprintLibrary.h" },
		{ "ToolTip", "Sets the Device Address of the Output Port. For networking Protocols that's the IP Adress of the network interface card.\n@param OutputPort            The Output Port for which the Device Address should be set\n@param DeviceAddress         The Device Address the Output Port should use" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDeviceAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXProtocolBlueprintLibrary, nullptr, "SetDMXOutputPortDeviceAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDeviceAddress_Statics::DMXProtocolBlueprintLibrary_eventSetDMXOutputPortDeviceAddress_Parms), Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDeviceAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDeviceAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDeviceAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDeviceAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDeviceAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDeviceAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetReceiveDMXEnabled_Statics
	{
		struct DMXProtocolBlueprintLibrary_eventSetReceiveDMXEnabled_Parms
		{
			bool bReceiveDMXEnabled;
			bool bAffectEditor;
		};
		static void NewProp_bReceiveDMXEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceiveDMXEnabled;
		static void NewProp_bAffectEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectEditor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetReceiveDMXEnabled_Statics::NewProp_bReceiveDMXEnabled_SetBit(void* Obj)
	{
		((DMXProtocolBlueprintLibrary_eventSetReceiveDMXEnabled_Parms*)Obj)->bReceiveDMXEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetReceiveDMXEnabled_Statics::NewProp_bReceiveDMXEnabled = { "bReceiveDMXEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXProtocolBlueprintLibrary_eventSetReceiveDMXEnabled_Parms), &Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetReceiveDMXEnabled_Statics::NewProp_bReceiveDMXEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetReceiveDMXEnabled_Statics::NewProp_bAffectEditor_SetBit(void* Obj)
	{
		((DMXProtocolBlueprintLibrary_eventSetReceiveDMXEnabled_Parms*)Obj)->bAffectEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetReceiveDMXEnabled_Statics::NewProp_bAffectEditor = { "bAffectEditor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXProtocolBlueprintLibrary_eventSetReceiveDMXEnabled_Parms), &Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetReceiveDMXEnabled_Statics::NewProp_bAffectEditor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetReceiveDMXEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetReceiveDMXEnabled_Statics::NewProp_bReceiveDMXEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetReceiveDMXEnabled_Statics::NewProp_bAffectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetReceiveDMXEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Sets if DMX is received from the network\n\x09 * @param bReceiveDMXEnabled\x09If true, receives inbound DMX packets on the input ports, else ignores them, globally.\n\x09 * @param bAffectEditor\x09\x09\x09If true, affects the editor. \n\x09 */" },
		{ "CPP_Default_bAffectEditor", "false" },
		{ "CPP_Default_bReceiveDMXEnabled", "true" },
		{ "ModuleRelativePath", "Public/DMXProtocolBlueprintLibrary.h" },
		{ "ToolTip", "Sets if DMX is received from the network\n@param bReceiveDMXEnabled    If true, receives inbound DMX packets on the input ports, else ignores them, globally.\n@param bAffectEditor                 If true, affects the editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetReceiveDMXEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXProtocolBlueprintLibrary, nullptr, "SetReceiveDMXEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetReceiveDMXEnabled_Statics::DMXProtocolBlueprintLibrary_eventSetReceiveDMXEnabled_Parms), Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetReceiveDMXEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetReceiveDMXEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetReceiveDMXEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetReceiveDMXEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetReceiveDMXEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetReceiveDMXEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetSendDMXEnabled_Statics
	{
		struct DMXProtocolBlueprintLibrary_eventSetSendDMXEnabled_Parms
		{
			bool bSendDMXEnabled;
			bool bAffectEditor;
		};
		static void NewProp_bSendDMXEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendDMXEnabled;
		static void NewProp_bAffectEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectEditor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetSendDMXEnabled_Statics::NewProp_bSendDMXEnabled_SetBit(void* Obj)
	{
		((DMXProtocolBlueprintLibrary_eventSetSendDMXEnabled_Parms*)Obj)->bSendDMXEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetSendDMXEnabled_Statics::NewProp_bSendDMXEnabled = { "bSendDMXEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXProtocolBlueprintLibrary_eventSetSendDMXEnabled_Parms), &Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetSendDMXEnabled_Statics::NewProp_bSendDMXEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetSendDMXEnabled_Statics::NewProp_bAffectEditor_SetBit(void* Obj)
	{
		((DMXProtocolBlueprintLibrary_eventSetSendDMXEnabled_Parms*)Obj)->bAffectEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetSendDMXEnabled_Statics::NewProp_bAffectEditor = { "bAffectEditor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DMXProtocolBlueprintLibrary_eventSetSendDMXEnabled_Parms), &Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetSendDMXEnabled_Statics::NewProp_bAffectEditor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetSendDMXEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetSendDMXEnabled_Statics::NewProp_bSendDMXEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetSendDMXEnabled_Statics::NewProp_bAffectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetSendDMXEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Sets if DMX is sent to the network\n\x09 * @param bSendDMXEnabled\x09\x09If true, sends DMX packets to the output ports, else ignores all send calls globally.\n\x09 * @param bAffectEditor\x09\x09\x09If true, affects the editor.\n\x09 */" },
		{ "CPP_Default_bAffectEditor", "false" },
		{ "CPP_Default_bSendDMXEnabled", "true" },
		{ "ModuleRelativePath", "Public/DMXProtocolBlueprintLibrary.h" },
		{ "ToolTip", "Sets if DMX is sent to the network\n@param bSendDMXEnabled               If true, sends DMX packets to the output ports, else ignores all send calls globally.\n@param bAffectEditor                 If true, affects the editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetSendDMXEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXProtocolBlueprintLibrary, nullptr, "SetSendDMXEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetSendDMXEnabled_Statics::DMXProtocolBlueprintLibrary_eventSetSendDMXEnabled_Parms), Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetSendDMXEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetSendDMXEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetSendDMXEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetSendDMXEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetSendDMXEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetSendDMXEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXProtocolBlueprintLibrary);
	UClass* Z_Construct_UClass_UDMXProtocolBlueprintLibrary_NoRegister()
	{
		return UDMXProtocolBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDMXProtocolBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXProtocolBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXProtocol,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXProtocolBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_GetLocalDMXNetworkInterfaceCardIPs, "GetLocalDMXNetworkInterfaceCardIPs" }, // 3118463156
		{ &Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsReceiveDMXEnabled, "IsReceiveDMXEnabled" }, // 994310625
		{ &Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_IsSendDMXEnabled, "IsSendDMXEnabled" }, // 2116247635
		{ &Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXInputPortDeviceAddress, "SetDMXInputPortDeviceAddress" }, // 4165299316
		{ &Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddress, "SetDMXOutputPortDestinationAddress" }, // 637407020
		{ &Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDestinationAddresses, "SetDMXOutputPortDestinationAddresses" }, // 851060485
		{ &Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetDMXOutputPortDeviceAddress, "SetDMXOutputPortDeviceAddress" }, // 2560049142
		{ &Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetReceiveDMXEnabled, "SetReceiveDMXEnabled" }, // 3808625078
		{ &Z_Construct_UFunction_UDMXProtocolBlueprintLibrary_SetSendDMXEnabled, "SetSendDMXEnabled" }, // 3413367730
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXProtocolBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DMXProtocolBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/DMXProtocolBlueprintLibrary.h" },
		{ "ScriptName", "DMXRuntimeLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXProtocolBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXProtocolBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXProtocolBlueprintLibrary_Statics::ClassParams = {
		&UDMXProtocolBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDMXProtocolBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXProtocolBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXProtocolBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UDMXProtocolBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXProtocolBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UDMXProtocolBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXProtocolBlueprintLibrary.OuterSingleton;
	}
	template<> DMXPROTOCOL_API UClass* StaticClass<UDMXProtocolBlueprintLibrary>()
	{
		return UDMXProtocolBlueprintLibrary::StaticClass();
	}
	UDMXProtocolBlueprintLibrary::UDMXProtocolBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXProtocolBlueprintLibrary);
	UDMXProtocolBlueprintLibrary::~UDMXProtocolBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXProtocolBlueprintLibrary, UDMXProtocolBlueprintLibrary::StaticClass, TEXT("UDMXProtocolBlueprintLibrary"), &Z_Registration_Info_UClass_UDMXProtocolBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXProtocolBlueprintLibrary), 1995876736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_2322265660(TEXT("/Script/DMXProtocol"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
