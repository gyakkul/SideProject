// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OSCManager.h"
#include "OSCAddress.h"
#include "OSCBundle.h"
#include "OSCMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSCManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	OSC_API UClass* Z_Construct_UClass_UOSCClient_NoRegister();
	OSC_API UClass* Z_Construct_UClass_UOSCManager();
	OSC_API UClass* Z_Construct_UClass_UOSCManager_NoRegister();
	OSC_API UClass* Z_Construct_UClass_UOSCServer_NoRegister();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOSCAddress();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOSCBundle();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOSCMessage();
	UPackage* Z_Construct_UPackage__Script_OSC();
// End Cross Module References
	DEFINE_FUNCTION(UOSCManager::execSetOSCAddressMethod)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_Address);
		P_GET_PROPERTY(FStrProperty,Z_Param_Method);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCAddress*)Z_Param__Result=UOSCManager::SetOSCAddressMethod(Z_Param_Out_Address,Z_Param_Method);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execClearOSCAddressContainers)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_Address);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCAddress*)Z_Param__Result=UOSCManager::ClearOSCAddressContainers(Z_Param_Out_Address);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execGetOSCAddressMethod)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_Address);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOSCManager::GetOSCAddressMethod(Z_Param_Out_Address);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execGetOSCAddressFullPath)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_Address);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOSCManager::GetOSCAddressFullPath(Z_Param_Out_Address);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execGetOSCAddressContainerPath)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_Address);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOSCManager::GetOSCAddressContainerPath(Z_Param_Out_Address);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execGetOSCAddressContainers)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_Address);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UOSCManager::GetOSCAddressContainers(Z_Param_Out_Address);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execGetOSCAddressContainer)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_Address);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOSCManager::GetOSCAddressContainer(Z_Param_Out_Address,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execSetOSCMessageAddress)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_Address);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCMessage*)Z_Param__Result=UOSCManager::SetOSCMessageAddress(Z_Param_Out_Message,Z_Param_Out_Address);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execGetOSCMessageAddress)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCAddress*)Z_Param__Result=UOSCManager::GetOSCMessageAddress(Z_Param_Out_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execOSCAddressRemoveContainers)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_Address);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCAddress*)Z_Param__Result=UOSCManager::OSCAddressRemoveContainers(Z_Param_Out_Address,Z_Param_Index,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execOSCAddressPopContainers)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_Address);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumContainers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UOSCManager::OSCAddressPopContainers(Z_Param_Out_Address,Z_Param_NumContainers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execOSCAddressPopContainer)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_Address);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOSCManager::OSCAddressPopContainer(Z_Param_Out_Address);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execOSCAddressPushContainers)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_Address);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Containers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCAddress*)Z_Param__Result=UOSCManager::OSCAddressPushContainers(Z_Param_Out_Address,Z_Param_Out_Containers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execOSCAddressPushContainer)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_Address);
		P_GET_PROPERTY(FStrProperty,Z_Param_Container);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCAddress*)Z_Param__Result=UOSCManager::OSCAddressPushContainer(Z_Param_Out_Address,Z_Param_Container);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execObjectPathFromOSCAddress)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_Address);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UOSCManager::ObjectPathFromOSCAddress(Z_Param_Out_Address);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execOSCAddressFromObjectPathString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCAddress*)Z_Param__Result=UOSCManager::OSCAddressFromObjectPathString(Z_Param_PathName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execOSCAddressFromObjectPath)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCAddress*)Z_Param__Result=UOSCManager::OSCAddressFromObjectPath(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execFindObjectAtOSCAddress)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_Address);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UOSCManager::FindObjectAtOSCAddress(Z_Param_Out_Address);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execOSCAddressPathMatchesPattern)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_Pattern);
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOSCManager::OSCAddressPathMatchesPattern(Z_Param_Out_Pattern,Z_Param_Out_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execConvertStringToOSCAddress)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCAddress*)Z_Param__Result=UOSCManager::ConvertStringToOSCAddress(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execOSCAddressIsValidPattern)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_Address);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOSCManager::OSCAddressIsValidPattern(Z_Param_Out_Address);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execOSCAddressIsValidPath)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_Address);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOSCManager::OSCAddressIsValidPath(Z_Param_Out_Address);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execGetBlob)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOSCManager::GetBlob(Z_Param_Out_Message,Z_Param_Index,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execGetAllBools)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_TARRAY_REF(bool,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOSCManager::GetAllBools(Z_Param_Out_Message,Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execGetBool)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL_REF(Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOSCManager::GetBool(Z_Param_Out_Message,Z_Param_Index,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execGetAllStrings)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOSCManager::GetAllStrings(Z_Param_Out_Message,Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execGetString)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOSCManager::GetString(Z_Param_Out_Message,Z_Param_Index,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execGetAllInt64s)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_TARRAY_REF(int64,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOSCManager::GetAllInt64s(Z_Param_Out_Message,Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execGetInt64)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOSCManager::GetInt64(Z_Param_Out_Message,Z_Param_Index,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execGetAllInt32s)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOSCManager::GetAllInt32s(Z_Param_Out_Message,Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execGetInt32)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOSCManager::GetInt32(Z_Param_Out_Message,Z_Param_Index,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execGetAllFloats)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_TARRAY_REF(float,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOSCManager::GetAllFloats(Z_Param_Out_Message,Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execGetFloat)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOSCManager::GetFloat(Z_Param_Out_Message,Z_Param_Index,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execGetAllAddresses)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_TARRAY_REF(FOSCAddress,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOSCManager::GetAllAddresses(Z_Param_Out_Message,Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execGetAddress)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOSCManager::GetAddress(Z_Param_Out_Message,Z_Param_Index,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execAddBool)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCMessage*)Z_Param__Result=UOSCManager::AddBool(Z_Param_Out_Message,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execAddBlob)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCMessage*)Z_Param__Result=UOSCManager::AddBlob(Z_Param_Out_Message,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execAddString)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCMessage*)Z_Param__Result=UOSCManager::AddString(Z_Param_Out_Message,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execAddAddress)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCMessage*)Z_Param__Result=UOSCManager::AddAddress(Z_Param_Out_Message,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execAddInt64)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_PROPERTY(FInt64Property,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCMessage*)Z_Param__Result=UOSCManager::AddInt64(Z_Param_Out_Message,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execAddInt32)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCMessage*)Z_Param__Result=UOSCManager::AddInt32(Z_Param_Out_Message,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execAddFloat)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCMessage*)Z_Param__Result=UOSCManager::AddFloat(Z_Param_Out_Message,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execClearBundle)
	{
		P_GET_STRUCT_REF(FOSCBundle,Z_Param_Out_Bundle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCBundle*)Z_Param__Result=UOSCManager::ClearBundle(Z_Param_Out_Bundle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execClearMessage)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCMessage*)Z_Param__Result=UOSCManager::ClearMessage(Z_Param_Out_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execGetMessagesFromBundle)
	{
		P_GET_STRUCT_REF(FOSCBundle,Z_Param_Out_Bundle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FOSCMessage>*)Z_Param__Result=UOSCManager::GetMessagesFromBundle(Z_Param_Out_Bundle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execGetMessageFromBundle)
	{
		P_GET_STRUCT_REF(FOSCBundle,Z_Param_Out_Bundle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL_REF(Z_Param_Out_bSucceeded);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCMessage*)Z_Param__Result=UOSCManager::GetMessageFromBundle(Z_Param_Out_Bundle,Z_Param_Index,Z_Param_Out_bSucceeded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execGetBundlesFromBundle)
	{
		P_GET_STRUCT_REF(FOSCBundle,Z_Param_Out_Bundle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FOSCBundle>*)Z_Param__Result=UOSCManager::GetBundlesFromBundle(Z_Param_Out_Bundle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execAddBundleToBundle)
	{
		P_GET_STRUCT_REF(FOSCBundle,Z_Param_Out_InBundle);
		P_GET_STRUCT_REF(FOSCBundle,Z_Param_Out_OutBundle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCBundle*)Z_Param__Result=UOSCManager::AddBundleToBundle(Z_Param_Out_InBundle,Z_Param_Out_OutBundle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execAddMessageToBundle)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_STRUCT_REF(FOSCBundle,Z_Param_Out_Bundle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOSCBundle*)Z_Param__Result=UOSCManager::AddMessageToBundle(Z_Param_Out_Message,Z_Param_Out_Bundle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execCreateOSCClient)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SendIPAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_GET_PROPERTY(FStrProperty,Z_Param_ClientName);
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOSCClient**)Z_Param__Result=UOSCManager::CreateOSCClient(Z_Param_SendIPAddress,Z_Param_Port,Z_Param_ClientName,Z_Param_Outer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCManager::execCreateOSCServer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ReceiveIPAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_GET_UBOOL(Z_Param_bMulticastLoopback);
		P_GET_UBOOL(Z_Param_bStartListening);
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerName);
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOSCServer**)Z_Param__Result=UOSCManager::CreateOSCServer(Z_Param_ReceiveIPAddress,Z_Param_Port,Z_Param_bMulticastLoopback,Z_Param_bStartListening,Z_Param_ServerName,Z_Param_Outer);
		P_NATIVE_END;
	}
	void UOSCManager::StaticRegisterNativesUOSCManager()
	{
		UClass* Class = UOSCManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAddress", &UOSCManager::execAddAddress },
			{ "AddBlob", &UOSCManager::execAddBlob },
			{ "AddBool", &UOSCManager::execAddBool },
			{ "AddBundleToBundle", &UOSCManager::execAddBundleToBundle },
			{ "AddFloat", &UOSCManager::execAddFloat },
			{ "AddInt32", &UOSCManager::execAddInt32 },
			{ "AddInt64", &UOSCManager::execAddInt64 },
			{ "AddMessageToBundle", &UOSCManager::execAddMessageToBundle },
			{ "AddString", &UOSCManager::execAddString },
			{ "ClearBundle", &UOSCManager::execClearBundle },
			{ "ClearMessage", &UOSCManager::execClearMessage },
			{ "ClearOSCAddressContainers", &UOSCManager::execClearOSCAddressContainers },
			{ "ConvertStringToOSCAddress", &UOSCManager::execConvertStringToOSCAddress },
			{ "CreateOSCClient", &UOSCManager::execCreateOSCClient },
			{ "CreateOSCServer", &UOSCManager::execCreateOSCServer },
			{ "FindObjectAtOSCAddress", &UOSCManager::execFindObjectAtOSCAddress },
			{ "GetAddress", &UOSCManager::execGetAddress },
			{ "GetAllAddresses", &UOSCManager::execGetAllAddresses },
			{ "GetAllBools", &UOSCManager::execGetAllBools },
			{ "GetAllFloats", &UOSCManager::execGetAllFloats },
			{ "GetAllInt32s", &UOSCManager::execGetAllInt32s },
			{ "GetAllInt64s", &UOSCManager::execGetAllInt64s },
			{ "GetAllStrings", &UOSCManager::execGetAllStrings },
			{ "GetBlob", &UOSCManager::execGetBlob },
			{ "GetBool", &UOSCManager::execGetBool },
			{ "GetBundlesFromBundle", &UOSCManager::execGetBundlesFromBundle },
			{ "GetFloat", &UOSCManager::execGetFloat },
			{ "GetInt32", &UOSCManager::execGetInt32 },
			{ "GetInt64", &UOSCManager::execGetInt64 },
			{ "GetMessageFromBundle", &UOSCManager::execGetMessageFromBundle },
			{ "GetMessagesFromBundle", &UOSCManager::execGetMessagesFromBundle },
			{ "GetOSCAddressContainer", &UOSCManager::execGetOSCAddressContainer },
			{ "GetOSCAddressContainerPath", &UOSCManager::execGetOSCAddressContainerPath },
			{ "GetOSCAddressContainers", &UOSCManager::execGetOSCAddressContainers },
			{ "GetOSCAddressFullPath", &UOSCManager::execGetOSCAddressFullPath },
			{ "GetOSCAddressMethod", &UOSCManager::execGetOSCAddressMethod },
			{ "GetOSCMessageAddress", &UOSCManager::execGetOSCMessageAddress },
			{ "GetString", &UOSCManager::execGetString },
			{ "ObjectPathFromOSCAddress", &UOSCManager::execObjectPathFromOSCAddress },
			{ "OSCAddressFromObjectPath", &UOSCManager::execOSCAddressFromObjectPath },
			{ "OSCAddressFromObjectPathString", &UOSCManager::execOSCAddressFromObjectPathString },
			{ "OSCAddressIsValidPath", &UOSCManager::execOSCAddressIsValidPath },
			{ "OSCAddressIsValidPattern", &UOSCManager::execOSCAddressIsValidPattern },
			{ "OSCAddressPathMatchesPattern", &UOSCManager::execOSCAddressPathMatchesPattern },
			{ "OSCAddressPopContainer", &UOSCManager::execOSCAddressPopContainer },
			{ "OSCAddressPopContainers", &UOSCManager::execOSCAddressPopContainers },
			{ "OSCAddressPushContainer", &UOSCManager::execOSCAddressPushContainer },
			{ "OSCAddressPushContainers", &UOSCManager::execOSCAddressPushContainers },
			{ "OSCAddressRemoveContainers", &UOSCManager::execOSCAddressRemoveContainers },
			{ "SetOSCAddressMethod", &UOSCManager::execSetOSCAddressMethod },
			{ "SetOSCMessageAddress", &UOSCManager::execSetOSCMessageAddress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOSCManager_AddAddress_Statics
	{
		struct OSCManager_eventAddAddress_Parms
		{
			FOSCMessage Message;
			FOSCAddress Value;
			FOSCMessage ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_AddAddress_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddAddress_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(nullptr, 0) }; // 3256038154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_AddAddress_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_AddAddress_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddAddress_Parms, Value), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_AddAddress_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddAddress_Statics::NewProp_Value_MetaData)) }; // 1476147242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_AddAddress_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Message" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_AddAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddAddress_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_AddAddress_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddAddress_Statics::NewProp_ReturnValue_MetaData)) }; // 3256038154
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_AddAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddAddress_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddAddress_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_AddAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Adds address (packed as string) value to end of OSCMessage */" },
		{ "DisplayName", "Add OSC Address (As String) to OSC Message" },
		{ "Keywords", "osc message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Adds address (packed as string) value to end of OSCMessage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_AddAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "AddAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_AddAddress_Statics::OSCManager_eventAddAddress_Parms), Z_Construct_UFunction_UOSCManager_AddAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_AddAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_AddAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_AddAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_AddBlob_Statics
	{
		struct OSCManager_eventAddBlob_Parms
		{
			FOSCMessage Message;
			TArray<uint8> Value;
			FOSCMessage ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_AddBlob_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddBlob_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(nullptr, 0) }; // 3256038154
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOSCManager_AddBlob_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_AddBlob_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOSCManager_AddBlob_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddBlob_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_AddBlob_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddBlob_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_AddBlob_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Message" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_AddBlob_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddBlob_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_AddBlob_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddBlob_Statics::NewProp_ReturnValue_MetaData)) }; // 3256038154
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_AddBlob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddBlob_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddBlob_Statics::NewProp_Value_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddBlob_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddBlob_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_AddBlob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Adds blob value to end of OSCMessage */" },
		{ "DisplayName", "Add Blob to OSC Message" },
		{ "Keywords", "osc message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Adds blob value to end of OSCMessage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_AddBlob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "AddBlob", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_AddBlob_Statics::OSCManager_eventAddBlob_Parms), Z_Construct_UFunction_UOSCManager_AddBlob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddBlob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_AddBlob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddBlob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_AddBlob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_AddBlob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_AddBool_Statics
	{
		struct OSCManager_eventAddBool_Parms
		{
			FOSCMessage Message;
			bool Value;
			FOSCMessage ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_AddBool_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddBool_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(nullptr, 0) }; // 3256038154
	void Z_Construct_UFunction_UOSCManager_AddBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((OSCManager_eventAddBool_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCManager_AddBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCManager_eventAddBool_Parms), &Z_Construct_UFunction_UOSCManager_AddBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_AddBool_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Message" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_AddBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddBool_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_AddBool_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddBool_Statics::NewProp_ReturnValue_MetaData)) }; // 3256038154
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_AddBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddBool_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddBool_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_AddBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Adds boolean value to end of OSCMessage */" },
		{ "DisplayName", "Add Bool to OSC Message" },
		{ "Keywords", "osc message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Adds boolean value to end of OSCMessage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_AddBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "AddBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_AddBool_Statics::OSCManager_eventAddBool_Parms), Z_Construct_UFunction_UOSCManager_AddBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_AddBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_AddBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_AddBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_AddBundleToBundle_Statics
	{
		struct OSCManager_eventAddBundleToBundle_Parms
		{
			FOSCBundle InBundle;
			FOSCBundle OutBundle;
			FOSCBundle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBundle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBundle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutBundle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_AddBundleToBundle_Statics::NewProp_InBundle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_AddBundleToBundle_Statics::NewProp_InBundle = { "InBundle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddBundleToBundle_Parms, InBundle), Z_Construct_UScriptStruct_FOSCBundle, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_AddBundleToBundle_Statics::NewProp_InBundle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddBundleToBundle_Statics::NewProp_InBundle_MetaData)) }; // 3436399830
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_AddBundleToBundle_Statics::NewProp_OutBundle = { "OutBundle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddBundleToBundle_Parms, OutBundle), Z_Construct_UScriptStruct_FOSCBundle, METADATA_PARAMS(nullptr, 0) }; // 3436399830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_AddBundleToBundle_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "OutBundle" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_AddBundleToBundle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddBundleToBundle_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCBundle, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_AddBundleToBundle_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddBundleToBundle_Statics::NewProp_ReturnValue_MetaData)) }; // 3436399830
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_AddBundleToBundle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddBundleToBundle_Statics::NewProp_InBundle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddBundleToBundle_Statics::NewProp_OutBundle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddBundleToBundle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_AddBundleToBundle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Adds bundle packet to bundle. */" },
		{ "DisplayName", "Add OSC Bundle to Bundle" },
		{ "Keywords", "osc message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Adds bundle packet to bundle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_AddBundleToBundle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "AddBundleToBundle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_AddBundleToBundle_Statics::OSCManager_eventAddBundleToBundle_Parms), Z_Construct_UFunction_UOSCManager_AddBundleToBundle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddBundleToBundle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_AddBundleToBundle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddBundleToBundle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_AddBundleToBundle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_AddBundleToBundle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_AddFloat_Statics
	{
		struct OSCManager_eventAddFloat_Parms
		{
			FOSCMessage Message;
			float Value;
			FOSCMessage ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_AddFloat_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddFloat_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(nullptr, 0) }; // 3256038154
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOSCManager_AddFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_AddFloat_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Message" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_AddFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddFloat_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_AddFloat_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddFloat_Statics::NewProp_ReturnValue_MetaData)) }; // 3256038154
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_AddFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddFloat_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_AddFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Adds float value to end of OSCMessage */" },
		{ "DisplayName", "Add Float to OSC Message" },
		{ "Keywords", "osc message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Adds float value to end of OSCMessage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_AddFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "AddFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_AddFloat_Statics::OSCManager_eventAddFloat_Parms), Z_Construct_UFunction_UOSCManager_AddFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_AddFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_AddFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_AddFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_AddInt32_Statics
	{
		struct OSCManager_eventAddInt32_Parms
		{
			FOSCMessage Message;
			int32 Value;
			FOSCMessage ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_AddInt32_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddInt32_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(nullptr, 0) }; // 3256038154
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOSCManager_AddInt32_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddInt32_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_AddInt32_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Message" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_AddInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddInt32_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_AddInt32_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddInt32_Statics::NewProp_ReturnValue_MetaData)) }; // 3256038154
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_AddInt32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddInt32_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddInt32_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddInt32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_AddInt32_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Adds Int32 value to end of OSCMessage */" },
		{ "DisplayName", "Add Integer to OSC Message" },
		{ "Keywords", "osc message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Adds Int32 value to end of OSCMessage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_AddInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "AddInt32", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_AddInt32_Statics::OSCManager_eventAddInt32_Parms), Z_Construct_UFunction_UOSCManager_AddInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddInt32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_AddInt32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddInt32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_AddInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_AddInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_AddInt64_Statics
	{
		struct OSCManager_eventAddInt64_Parms
		{
			FOSCMessage Message;
			int64 Value;
			FOSCMessage ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_AddInt64_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddInt64_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(nullptr, 0) }; // 3256038154
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOSCManager_AddInt64_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddInt64_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_AddInt64_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Message" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_AddInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddInt64_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_AddInt64_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddInt64_Statics::NewProp_ReturnValue_MetaData)) }; // 3256038154
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_AddInt64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddInt64_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddInt64_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_AddInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Adds Int64 value to end of OSCMessage */" },
		{ "DisplayName", "Add Integer (64-bit) to OSC Message" },
		{ "Keywords", "osc message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Adds Int64 value to end of OSCMessage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_AddInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "AddInt64", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_AddInt64_Statics::OSCManager_eventAddInt64_Parms), Z_Construct_UFunction_UOSCManager_AddInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_AddInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_AddInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_AddInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_AddMessageToBundle_Statics
	{
		struct OSCManager_eventAddMessageToBundle_Parms
		{
			FOSCMessage Message;
			FOSCBundle Bundle;
			FOSCBundle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bundle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_AddMessageToBundle_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_AddMessageToBundle_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddMessageToBundle_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_AddMessageToBundle_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddMessageToBundle_Statics::NewProp_Message_MetaData)) }; // 3256038154
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_AddMessageToBundle_Statics::NewProp_Bundle = { "Bundle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddMessageToBundle_Parms, Bundle), Z_Construct_UScriptStruct_FOSCBundle, METADATA_PARAMS(nullptr, 0) }; // 3436399830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_AddMessageToBundle_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bundle" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_AddMessageToBundle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddMessageToBundle_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCBundle, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_AddMessageToBundle_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddMessageToBundle_Statics::NewProp_ReturnValue_MetaData)) }; // 3436399830
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_AddMessageToBundle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddMessageToBundle_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddMessageToBundle_Statics::NewProp_Bundle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddMessageToBundle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_AddMessageToBundle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Adds provided message packet to bundle. */" },
		{ "DisplayName", "Add OSC Message to Bundle" },
		{ "Keywords", "osc message bundle" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Adds provided message packet to bundle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_AddMessageToBundle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "AddMessageToBundle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_AddMessageToBundle_Statics::OSCManager_eventAddMessageToBundle_Parms), Z_Construct_UFunction_UOSCManager_AddMessageToBundle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddMessageToBundle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_AddMessageToBundle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddMessageToBundle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_AddMessageToBundle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_AddMessageToBundle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_AddString_Statics
	{
		struct OSCManager_eventAddString_Parms
		{
			FOSCMessage Message;
			FString Value;
			FOSCMessage ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_AddString_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddString_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(nullptr, 0) }; // 3256038154
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCManager_AddString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_AddString_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Message" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_AddString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventAddString_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_AddString_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddString_Statics::NewProp_ReturnValue_MetaData)) }; // 3256038154
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_AddString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddString_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddString_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_AddString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_AddString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Adds string value to end of OSCMessage */" },
		{ "DisplayName", "Add String to OSC Message" },
		{ "Keywords", "osc message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Adds string value to end of OSCMessage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_AddString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "AddString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_AddString_Statics::OSCManager_eventAddString_Parms), Z_Construct_UFunction_UOSCManager_AddString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_AddString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_AddString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_AddString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_AddString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_ClearBundle_Statics
	{
		struct OSCManager_eventClearBundle_Parms
		{
			FOSCBundle Bundle;
			FOSCBundle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bundle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_ClearBundle_Statics::NewProp_Bundle = { "Bundle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventClearBundle_Parms, Bundle), Z_Construct_UScriptStruct_FOSCBundle, METADATA_PARAMS(nullptr, 0) }; // 3436399830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_ClearBundle_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bundle" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_ClearBundle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventClearBundle_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCBundle, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_ClearBundle_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_ClearBundle_Statics::NewProp_ReturnValue_MetaData)) }; // 3436399830
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_ClearBundle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_ClearBundle_Statics::NewProp_Bundle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_ClearBundle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_ClearBundle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Clears provided bundle of all internal messages/bundle packets. */" },
		{ "DisplayName", "Clear OSC Bundle" },
		{ "Keywords", "osc message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Clears provided bundle of all internal messages/bundle packets." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_ClearBundle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "ClearBundle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_ClearBundle_Statics::OSCManager_eventClearBundle_Parms), Z_Construct_UFunction_UOSCManager_ClearBundle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_ClearBundle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_ClearBundle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_ClearBundle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_ClearBundle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_ClearBundle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_ClearMessage_Statics
	{
		struct OSCManager_eventClearMessage_Parms
		{
			FOSCMessage Message;
			FOSCMessage ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_ClearMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventClearMessage_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(nullptr, 0) }; // 3256038154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_ClearMessage_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Message" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_ClearMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventClearMessage_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_ClearMessage_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_ClearMessage_Statics::NewProp_ReturnValue_MetaData)) }; // 3256038154
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_ClearMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_ClearMessage_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_ClearMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_ClearMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Clears provided message of all arguments. */" },
		{ "DisplayName", "Clear OSC Message" },
		{ "Keywords", "osc message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Clears provided message of all arguments." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_ClearMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "ClearMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_ClearMessage_Statics::OSCManager_eventClearMessage_Parms), Z_Construct_UFunction_UOSCManager_ClearMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_ClearMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_ClearMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_ClearMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_ClearMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_ClearMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_ClearOSCAddressContainers_Statics
	{
		struct OSCManager_eventClearOSCAddressContainers_Parms
		{
			FOSCAddress Address;
			FOSCAddress ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Address;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_ClearOSCAddressContainers_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventClearOSCAddressContainers_Parms, Address), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(nullptr, 0) }; // 1476147242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_ClearOSCAddressContainers_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Address" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_ClearOSCAddressContainers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventClearOSCAddressContainers_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_ClearOSCAddressContainers_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_ClearOSCAddressContainers_Statics::NewProp_ReturnValue_MetaData)) }; // 1476147242
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_ClearOSCAddressContainers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_ClearOSCAddressContainers_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_ClearOSCAddressContainers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_ClearOSCAddressContainers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Clears containers of OSC Address provided */" },
		{ "DisplayName", "Clear OSC Address Containers" },
		{ "Keywords", "osc address clear" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Clears containers of OSC Address provided" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_ClearOSCAddressContainers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "ClearOSCAddressContainers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_ClearOSCAddressContainers_Statics::OSCManager_eventClearOSCAddressContainers_Parms), Z_Construct_UFunction_UOSCManager_ClearOSCAddressContainers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_ClearOSCAddressContainers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_ClearOSCAddressContainers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_ClearOSCAddressContainers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_ClearOSCAddressContainers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_ClearOSCAddressContainers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_ConvertStringToOSCAddress_Statics
	{
		struct OSCManager_eventConvertStringToOSCAddress_Parms
		{
			FString String;
			FOSCAddress ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_ConvertStringToOSCAddress_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCManager_ConvertStringToOSCAddress_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventConvertStringToOSCAddress_Parms, String), METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_ConvertStringToOSCAddress_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_ConvertStringToOSCAddress_Statics::NewProp_String_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_ConvertStringToOSCAddress_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Address" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_ConvertStringToOSCAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventConvertStringToOSCAddress_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_ConvertStringToOSCAddress_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_ConvertStringToOSCAddress_Statics::NewProp_ReturnValue_MetaData)) }; // 1476147242
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_ConvertStringToOSCAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_ConvertStringToOSCAddress_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_ConvertStringToOSCAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_ConvertStringToOSCAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/* Converts string to OSC Address */" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Converts string to OSC Address" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_ConvertStringToOSCAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "ConvertStringToOSCAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_ConvertStringToOSCAddress_Statics::OSCManager_eventConvertStringToOSCAddress_Parms), Z_Construct_UFunction_UOSCManager_ConvertStringToOSCAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_ConvertStringToOSCAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_ConvertStringToOSCAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_ConvertStringToOSCAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_ConvertStringToOSCAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_ConvertStringToOSCAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_CreateOSCClient_Statics
	{
		struct OSCManager_eventCreateOSCClient_Parms
		{
			FString SendIPAddress;
			int32 Port;
			FString ClientName;
			UObject* Outer;
			UOSCClient* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SendIPAddress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCManager_CreateOSCClient_Statics::NewProp_SendIPAddress = { "SendIPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventCreateOSCClient_Parms, SendIPAddress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOSCManager_CreateOSCClient_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventCreateOSCClient_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCManager_CreateOSCClient_Statics::NewProp_ClientName = { "ClientName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventCreateOSCClient_Parms, ClientName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOSCManager_CreateOSCClient_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventCreateOSCClient_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOSCManager_CreateOSCClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventCreateOSCClient_Parms, ReturnValue), Z_Construct_UClass_UOSCClient_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_CreateOSCClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_CreateOSCClient_Statics::NewProp_SendIPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_CreateOSCClient_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_CreateOSCClient_Statics::NewProp_ClientName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_CreateOSCClient_Statics::NewProp_Outer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_CreateOSCClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_CreateOSCClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "// Creates an OSC Client.  If SendIPAddress left empty (or '0'), attempts to use\n// attempts to use LocalHost IP address.\n" },
		{ "CPP_Default_Outer", "None" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Creates an OSC Client.  If SendIPAddress left empty (or '0'), attempts to use\nattempts to use LocalHost IP address." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_CreateOSCClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "CreateOSCClient", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_CreateOSCClient_Statics::OSCManager_eventCreateOSCClient_Parms), Z_Construct_UFunction_UOSCManager_CreateOSCClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_CreateOSCClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_CreateOSCClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_CreateOSCClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_CreateOSCClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_CreateOSCClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics
	{
		struct OSCManager_eventCreateOSCServer_Parms
		{
			FString ReceiveIPAddress;
			int32 Port;
			bool bMulticastLoopback;
			bool bStartListening;
			FString ServerName;
			UObject* Outer;
			UOSCServer* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReceiveIPAddress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static void NewProp_bMulticastLoopback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMulticastLoopback;
		static void NewProp_bStartListening_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartListening;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::NewProp_ReceiveIPAddress = { "ReceiveIPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventCreateOSCServer_Parms, ReceiveIPAddress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventCreateOSCServer_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::NewProp_bMulticastLoopback_SetBit(void* Obj)
	{
		((OSCManager_eventCreateOSCServer_Parms*)Obj)->bMulticastLoopback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::NewProp_bMulticastLoopback = { "bMulticastLoopback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCManager_eventCreateOSCServer_Parms), &Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::NewProp_bMulticastLoopback_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::NewProp_bStartListening_SetBit(void* Obj)
	{
		((OSCManager_eventCreateOSCServer_Parms*)Obj)->bStartListening = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::NewProp_bStartListening = { "bStartListening", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCManager_eventCreateOSCServer_Parms), &Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::NewProp_bStartListening_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventCreateOSCServer_Parms, ServerName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventCreateOSCServer_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventCreateOSCServer_Parms, ReturnValue), Z_Construct_UClass_UOSCServer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::NewProp_ReceiveIPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::NewProp_bMulticastLoopback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::NewProp_bStartListening,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::NewProp_ServerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::NewProp_Outer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "// Creates an OSC Server.  If ReceiveIPAddress left empty (or '0'),\n// attempts to use LocalHost IP address. If StartListening set,\n// immediately begins listening on creation.\n" },
		{ "CPP_Default_Outer", "None" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Creates an OSC Server.  If ReceiveIPAddress left empty (or '0'),\nattempts to use LocalHost IP address. If StartListening set,\nimmediately begins listening on creation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "CreateOSCServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::OSCManager_eventCreateOSCServer_Parms), Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_CreateOSCServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_CreateOSCServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_FindObjectAtOSCAddress_Statics
	{
		struct OSCManager_eventFindObjectAtOSCAddress_Parms
		{
			FOSCAddress Address;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Address;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_FindObjectAtOSCAddress_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_FindObjectAtOSCAddress_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventFindObjectAtOSCAddress_Parms, Address), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_FindObjectAtOSCAddress_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_FindObjectAtOSCAddress_Statics::NewProp_Address_MetaData)) }; // 1476147242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_FindObjectAtOSCAddress_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Object" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOSCManager_FindObjectAtOSCAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventFindObjectAtOSCAddress_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_FindObjectAtOSCAddress_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_FindObjectAtOSCAddress_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_FindObjectAtOSCAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_FindObjectAtOSCAddress_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_FindObjectAtOSCAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_FindObjectAtOSCAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Finds an object with the given OSC Address in path form, where containers correspond to path folders and the the address method to the object's name.\n\x09  * Only supports parent objects.\n\x09  */" },
		{ "DisplayName", "Find Object at OSC Address" },
		{ "Keywords", "osc address path uobject" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Finds an object with the given OSC Address in path form, where containers correspond to path folders and the the address method to the object's name.\nOnly supports parent objects." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_FindObjectAtOSCAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "FindObjectAtOSCAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_FindObjectAtOSCAddress_Statics::OSCManager_eventFindObjectAtOSCAddress_Parms), Z_Construct_UFunction_UOSCManager_FindObjectAtOSCAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_FindObjectAtOSCAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_FindObjectAtOSCAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_FindObjectAtOSCAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_FindObjectAtOSCAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_FindObjectAtOSCAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_GetAddress_Statics
	{
		struct OSCManager_eventGetAddress_Parms
		{
			FOSCMessage Message;
			int32 Index;
			FOSCAddress Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetAddress_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetAddress_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetAddress_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetAddress_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAddress_Statics::NewProp_Message_MetaData)) }; // 3256038154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetAddress_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOSCManager_GetAddress_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetAddress_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetAddress_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAddress_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetAddress_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetAddress_Parms, Value), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(nullptr, 0) }; // 1476147242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetAddress_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Succeeded" },
	};
#endif
	void Z_Construct_UFunction_UOSCManager_GetAddress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OSCManager_eventGetAddress_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCManager_GetAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCManager_eventGetAddress_Parms), &Z_Construct_UFunction_UOSCManager_GetAddress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetAddress_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAddress_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_GetAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetAddress_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetAddress_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetAddress_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Sets Value to address at provided Index in OSCMessage if in bounds and OSC type matches 'String' (Does NOT return address of message, rather\n\x09 * string packed in message and casts to OSC address). Returns if string found at index and is valid OSC address path.\n\x09 */" },
		{ "DisplayName", "Get OSC Message Address At Index" },
		{ "Keywords", "osc message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Sets Value to address at provided Index in OSCMessage if in bounds and OSC type matches 'String' (Does NOT return address of message, rather\nstring packed in message and casts to OSC address). Returns if string found at index and is valid OSC address path." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_GetAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "GetAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_GetAddress_Statics::OSCManager_eventGetAddress_Parms), Z_Construct_UFunction_UOSCManager_GetAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_GetAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_GetAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_GetAllAddresses_Statics
	{
		struct OSCManager_eventGetAllAddresses_Parms
		{
			FOSCMessage Message;
			TArray<FOSCAddress> Values;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetAllAddresses_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetAllAddresses_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetAllAddresses_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetAllAddresses_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAllAddresses_Statics::NewProp_Message_MetaData)) }; // 3256038154
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetAllAddresses_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(nullptr, 0) }; // 1476147242
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOSCManager_GetAllAddresses_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetAllAddresses_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1476147242
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_GetAllAddresses_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetAllAddresses_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetAllAddresses_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetAllAddresses_Statics::NewProp_Values,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetAllAddresses_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Returns all strings that are valid address paths in order received from OSCMessage (Does NOT include address of message, just\n\x09 * strings packed in message that are valid paths).\n\x09 */" },
		{ "DisplayName", "Get OSC Message Addresses" },
		{ "Keywords", "osc message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Returns all strings that are valid address paths in order received from OSCMessage (Does NOT include address of message, just\nstrings packed in message that are valid paths)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_GetAllAddresses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "GetAllAddresses", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_GetAllAddresses_Statics::OSCManager_eventGetAllAddresses_Parms), Z_Construct_UFunction_UOSCManager_GetAllAddresses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAllAddresses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetAllAddresses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAllAddresses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_GetAllAddresses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_GetAllAddresses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_GetAllBools_Statics
	{
		struct OSCManager_eventGetAllBools_Parms
		{
			FOSCMessage Message;
			TArray<bool> Values;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Values_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetAllBools_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetAllBools_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetAllBools_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetAllBools_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAllBools_Statics::NewProp_Message_MetaData)) }; // 3256038154
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCManager_GetAllBools_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOSCManager_GetAllBools_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetAllBools_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_GetAllBools_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetAllBools_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetAllBools_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetAllBools_Statics::NewProp_Values,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetAllBools_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Returns all boolean values in order of received from OSCMessage */" },
		{ "DisplayName", "Get OSC Message Bools" },
		{ "Keywords", "osc message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Returns all boolean values in order of received from OSCMessage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_GetAllBools_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "GetAllBools", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_GetAllBools_Statics::OSCManager_eventGetAllBools_Parms), Z_Construct_UFunction_UOSCManager_GetAllBools_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAllBools_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetAllBools_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAllBools_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_GetAllBools()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_GetAllBools_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_GetAllFloats_Statics
	{
		struct OSCManager_eventGetAllFloats_Parms
		{
			FOSCMessage Message;
			TArray<float> Values;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetAllFloats_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetAllFloats_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetAllFloats_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetAllFloats_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAllFloats_Statics::NewProp_Message_MetaData)) }; // 3256038154
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOSCManager_GetAllFloats_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOSCManager_GetAllFloats_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetAllFloats_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_GetAllFloats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetAllFloats_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetAllFloats_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetAllFloats_Statics::NewProp_Values,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetAllFloats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Returns all float values in order of received from OSCMessage */" },
		{ "DisplayName", "Get OSC Message Floats" },
		{ "Keywords", "osc message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Returns all float values in order of received from OSCMessage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_GetAllFloats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "GetAllFloats", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_GetAllFloats_Statics::OSCManager_eventGetAllFloats_Parms), Z_Construct_UFunction_UOSCManager_GetAllFloats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAllFloats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetAllFloats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAllFloats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_GetAllFloats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_GetAllFloats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_GetAllInt32s_Statics
	{
		struct OSCManager_eventGetAllInt32s_Parms
		{
			FOSCMessage Message;
			TArray<int32> Values;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetAllInt32s_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetAllInt32s_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetAllInt32s_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetAllInt32s_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAllInt32s_Statics::NewProp_Message_MetaData)) }; // 3256038154
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOSCManager_GetAllInt32s_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOSCManager_GetAllInt32s_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetAllInt32s_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_GetAllInt32s_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetAllInt32s_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetAllInt32s_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetAllInt32s_Statics::NewProp_Values,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetAllInt32s_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Returns all integer values in order of received from OSCMessage */" },
		{ "DisplayName", "Get OSC Message Integers" },
		{ "Keywords", "osc message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Returns all integer values in order of received from OSCMessage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_GetAllInt32s_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "GetAllInt32s", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_GetAllInt32s_Statics::OSCManager_eventGetAllInt32s_Parms), Z_Construct_UFunction_UOSCManager_GetAllInt32s_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAllInt32s_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetAllInt32s_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAllInt32s_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_GetAllInt32s()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_GetAllInt32s_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_GetAllInt64s_Statics
	{
		struct OSCManager_eventGetAllInt64s_Parms
		{
			FOSCMessage Message;
			TArray<int64> Values;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Values_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetAllInt64s_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetAllInt64s_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetAllInt64s_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetAllInt64s_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAllInt64s_Statics::NewProp_Message_MetaData)) }; // 3256038154
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOSCManager_GetAllInt64s_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOSCManager_GetAllInt64s_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetAllInt64s_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_GetAllInt64s_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetAllInt64s_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetAllInt64s_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetAllInt64s_Statics::NewProp_Values,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetAllInt64s_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Returns all Int64 values in order of received from OSCMessage */" },
		{ "DisplayName", "Get OSC Message Integers (64-bit)" },
		{ "Keywords", "osc message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Returns all Int64 values in order of received from OSCMessage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_GetAllInt64s_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "GetAllInt64s", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_GetAllInt64s_Statics::OSCManager_eventGetAllInt64s_Parms), Z_Construct_UFunction_UOSCManager_GetAllInt64s_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAllInt64s_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetAllInt64s_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAllInt64s_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_GetAllInt64s()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_GetAllInt64s_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_GetAllStrings_Statics
	{
		struct OSCManager_eventGetAllStrings_Parms
		{
			FOSCMessage Message;
			TArray<FString> Values;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Values_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetAllStrings_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetAllStrings_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetAllStrings_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetAllStrings_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAllStrings_Statics::NewProp_Message_MetaData)) }; // 3256038154
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCManager_GetAllStrings_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOSCManager_GetAllStrings_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetAllStrings_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_GetAllStrings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetAllStrings_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetAllStrings_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetAllStrings_Statics::NewProp_Values,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetAllStrings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Returns all string values in order of received from OSCMessage */" },
		{ "DisplayName", "Get OSC Message Strings" },
		{ "Keywords", "osc message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Returns all string values in order of received from OSCMessage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_GetAllStrings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "GetAllStrings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_GetAllStrings_Statics::OSCManager_eventGetAllStrings_Parms), Z_Construct_UFunction_UOSCManager_GetAllStrings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAllStrings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetAllStrings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetAllStrings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_GetAllStrings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_GetAllStrings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_GetBlob_Statics
	{
		struct OSCManager_eventGetBlob_Parms
		{
			FOSCMessage Message;
			int32 Index;
			TArray<uint8> Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetBlob_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetBlob_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetBlob_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetBlob_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetBlob_Statics::NewProp_Message_MetaData)) }; // 3256038154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetBlob_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOSCManager_GetBlob_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetBlob_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetBlob_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetBlob_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOSCManager_GetBlob_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOSCManager_GetBlob_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetBlob_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetBlob_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Succeeded" },
	};
#endif
	void Z_Construct_UFunction_UOSCManager_GetBlob_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OSCManager_eventGetBlob_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCManager_GetBlob_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCManager_eventGetBlob_Parms), &Z_Construct_UFunction_UOSCManager_GetBlob_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetBlob_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetBlob_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_GetBlob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetBlob_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetBlob_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetBlob_Statics::NewProp_Value_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetBlob_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetBlob_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetBlob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Sets Value to blob at provided Index from OSCMessage if in bounds and type matches */" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Sets Value to blob at provided Index from OSCMessage if in bounds and type matches" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_GetBlob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "GetBlob", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_GetBlob_Statics::OSCManager_eventGetBlob_Parms), Z_Construct_UFunction_UOSCManager_GetBlob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetBlob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetBlob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetBlob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_GetBlob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_GetBlob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_GetBool_Statics
	{
		struct OSCManager_eventGetBool_Parms
		{
			FOSCMessage Message;
			int32 Index;
			bool Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetBool_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetBool_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetBool_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetBool_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetBool_Statics::NewProp_Message_MetaData)) }; // 3256038154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetBool_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOSCManager_GetBool_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetBool_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetBool_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetBool_Statics::NewProp_Index_MetaData)) };
	void Z_Construct_UFunction_UOSCManager_GetBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((OSCManager_eventGetBool_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCManager_GetBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCManager_eventGetBool_Parms), &Z_Construct_UFunction_UOSCManager_GetBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetBool_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Succeeded" },
	};
#endif
	void Z_Construct_UFunction_UOSCManager_GetBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OSCManager_eventGetBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCManager_GetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCManager_eventGetBool_Parms), &Z_Construct_UFunction_UOSCManager_GetBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetBool_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetBool_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_GetBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetBool_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetBool_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetBool_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Sets Value to boolean at provided Index from OSCMessage if in bounds and type matches */" },
		{ "DisplayName", "Get OSC Message Bool At Index" },
		{ "Keywords", "osc message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Sets Value to boolean at provided Index from OSCMessage if in bounds and type matches" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_GetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "GetBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_GetBool_Statics::OSCManager_eventGetBool_Parms), Z_Construct_UFunction_UOSCManager_GetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_GetBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_GetBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle_Statics
	{
		struct OSCManager_eventGetBundlesFromBundle_Parms
		{
			FOSCBundle Bundle;
			TArray<FOSCBundle> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bundle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bundle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle_Statics::NewProp_Bundle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle_Statics::NewProp_Bundle = { "Bundle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetBundlesFromBundle_Parms, Bundle), Z_Construct_UScriptStruct_FOSCBundle, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle_Statics::NewProp_Bundle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle_Statics::NewProp_Bundle_MetaData)) }; // 3436399830
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOSCBundle, METADATA_PARAMS(nullptr, 0) }; // 3436399830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Bundles" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetBundlesFromBundle_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle_Statics::NewProp_ReturnValue_MetaData)) }; // 3436399830
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle_Statics::NewProp_Bundle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Fills array with child bundles found in bundle. */" },
		{ "DisplayName", "Get OSC Bundles From Bundle" },
		{ "Keywords", "osc bundle" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Fills array with child bundles found in bundle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "GetBundlesFromBundle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle_Statics::OSCManager_eventGetBundlesFromBundle_Parms), Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_GetFloat_Statics
	{
		struct OSCManager_eventGetFloat_Parms
		{
			FOSCMessage Message;
			int32 Index;
			float Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetFloat_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetFloat_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetFloat_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetFloat_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetFloat_Statics::NewProp_Message_MetaData)) }; // 3256038154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetFloat_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOSCManager_GetFloat_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetFloat_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetFloat_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetFloat_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOSCManager_GetFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetFloat_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Succeeded" },
	};
#endif
	void Z_Construct_UFunction_UOSCManager_GetFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OSCManager_eventGetFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCManager_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCManager_eventGetFloat_Parms), &Z_Construct_UFunction_UOSCManager_GetFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetFloat_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetFloat_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_GetFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetFloat_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetFloat_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/**\n\x09 * Set Value to float at provided Index in OSCMessage if in bounds and type matches\n\x09 */" },
		{ "DisplayName", "Get OSC Message Float At Index" },
		{ "Keywords", "osc message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Set Value to float at provided Index in OSCMessage if in bounds and type matches" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "GetFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_GetFloat_Statics::OSCManager_eventGetFloat_Parms), Z_Construct_UFunction_UOSCManager_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_GetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_GetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_GetInt32_Statics
	{
		struct OSCManager_eventGetInt32_Parms
		{
			FOSCMessage Message;
			int32 Index;
			int32 Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetInt32_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetInt32_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetInt32_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetInt32_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetInt32_Statics::NewProp_Message_MetaData)) }; // 3256038154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetInt32_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOSCManager_GetInt32_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetInt32_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetInt32_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetInt32_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOSCManager_GetInt32_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetInt32_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetInt32_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Succeeded" },
	};
#endif
	void Z_Construct_UFunction_UOSCManager_GetInt32_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OSCManager_eventGetInt32_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCManager_GetInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCManager_eventGetInt32_Parms), &Z_Construct_UFunction_UOSCManager_GetInt32_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetInt32_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetInt32_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_GetInt32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetInt32_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetInt32_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetInt32_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetInt32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetInt32_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Set Value to integer at provided Index in OSCMessage if in bounds and type matches */" },
		{ "DisplayName", "Get OSC Message Integer at Index" },
		{ "Keywords", "osc message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Set Value to integer at provided Index in OSCMessage if in bounds and type matches" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_GetInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "GetInt32", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_GetInt32_Statics::OSCManager_eventGetInt32_Parms), Z_Construct_UFunction_UOSCManager_GetInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetInt32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetInt32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetInt32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_GetInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_GetInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_GetInt64_Statics
	{
		struct OSCManager_eventGetInt64_Parms
		{
			FOSCMessage Message;
			int32 Index;
			int64 Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetInt64_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetInt64_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetInt64_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetInt64_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetInt64_Statics::NewProp_Message_MetaData)) }; // 3256038154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetInt64_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOSCManager_GetInt64_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetInt64_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetInt64_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetInt64_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UOSCManager_GetInt64_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetInt64_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetInt64_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Succeeded" },
	};
#endif
	void Z_Construct_UFunction_UOSCManager_GetInt64_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OSCManager_eventGetInt64_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCManager_GetInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCManager_eventGetInt64_Parms), &Z_Construct_UFunction_UOSCManager_GetInt64_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetInt64_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetInt64_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_GetInt64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetInt64_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetInt64_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetInt64_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Set Value to Int64 at provided Index in OSCMessage if in bounds and type matches */" },
		{ "DisplayName", "Get OSC Message Integer (64-bit) at Index" },
		{ "Keywords", "osc message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Set Value to Int64 at provided Index in OSCMessage if in bounds and type matches" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_GetInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "GetInt64", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_GetInt64_Statics::OSCManager_eventGetInt64_Parms), Z_Construct_UFunction_UOSCManager_GetInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_GetInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_GetInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics
	{
		struct OSCManager_eventGetMessageFromBundle_Parms
		{
			FOSCBundle Bundle;
			int32 Index;
			bool bSucceeded;
			FOSCMessage ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bundle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bundle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_bSucceeded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::NewProp_Bundle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::NewProp_Bundle = { "Bundle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetMessageFromBundle_Parms, Bundle), Z_Construct_UScriptStruct_FOSCBundle, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::NewProp_Bundle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::NewProp_Bundle_MetaData)) }; // 3436399830
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetMessageFromBundle_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::NewProp_bSucceeded_SetBit(void* Obj)
	{
		((OSCManager_eventGetMessageFromBundle_Parms*)Obj)->bSucceeded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCManager_eventGetMessageFromBundle_Parms), &Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Message" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetMessageFromBundle_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::NewProp_ReturnValue_MetaData)) }; // 3256038154
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::NewProp_Bundle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::NewProp_bSucceeded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Returns message found in bundle at ordered index. */" },
		{ "DisplayName", "Get OSC Message From Bundle At Index" },
		{ "Keywords", "osc bundle message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Returns message found in bundle at ordered index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "GetMessageFromBundle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::OSCManager_eventGetMessageFromBundle_Parms), Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_GetMessageFromBundle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_GetMessageFromBundle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle_Statics
	{
		struct OSCManager_eventGetMessagesFromBundle_Parms
		{
			FOSCBundle Bundle;
			TArray<FOSCMessage> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bundle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bundle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle_Statics::NewProp_Bundle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle_Statics::NewProp_Bundle = { "Bundle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetMessagesFromBundle_Parms, Bundle), Z_Construct_UScriptStruct_FOSCBundle, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle_Statics::NewProp_Bundle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle_Statics::NewProp_Bundle_MetaData)) }; // 3436399830
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(nullptr, 0) }; // 3256038154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Messages" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetMessagesFromBundle_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle_Statics::NewProp_ReturnValue_MetaData)) }; // 3256038154
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle_Statics::NewProp_Bundle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Fills array with messages found in bundle. */" },
		{ "DisplayName", "Get OSC Messages From Bundle" },
		{ "Keywords", "osc bundle message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Fills array with messages found in bundle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "GetMessagesFromBundle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle_Statics::OSCManager_eventGetMessagesFromBundle_Parms), Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics
	{
		struct OSCManager_eventGetOSCAddressContainer_Parms
		{
			FOSCAddress Address;
			int32 Index;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Address;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetOSCAddressContainer_Parms, Address), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::NewProp_Address_MetaData)) }; // 1476147242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetOSCAddressContainer_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Container" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetOSCAddressContainer_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Returns the OSC Address container at the provided 'Index.' Returns empty string if index is out-of-bounds. */" },
		{ "DisplayName", "Get OSC Address Container At Index" },
		{ "Keywords", "osc address container path" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Returns the OSC Address container at the provided 'Index.' Returns empty string if index is out-of-bounds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "GetOSCAddressContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::OSCManager_eventGetOSCAddressContainer_Parms), Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_GetOSCAddressContainerPath_Statics
	{
		struct OSCManager_eventGetOSCAddressContainerPath_Parms
		{
			FOSCAddress Address;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Address;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetOSCAddressContainerPath_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetOSCAddressContainerPath_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetOSCAddressContainerPath_Parms, Address), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainerPath_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainerPath_Statics::NewProp_Address_MetaData)) }; // 1476147242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetOSCAddressContainerPath_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Path" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCManager_GetOSCAddressContainerPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetOSCAddressContainerPath_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainerPath_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainerPath_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_GetOSCAddressContainerPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetOSCAddressContainerPath_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetOSCAddressContainerPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetOSCAddressContainerPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Returns full path of OSC address in the form '/Container1/Container2/Method' */" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Returns full path of OSC address in the form '/Container1/Container2/Method'" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_GetOSCAddressContainerPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "GetOSCAddressContainerPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainerPath_Statics::OSCManager_eventGetOSCAddressContainerPath_Parms), Z_Construct_UFunction_UOSCManager_GetOSCAddressContainerPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainerPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainerPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainerPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_GetOSCAddressContainerPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_GetOSCAddressContainerPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers_Statics
	{
		struct OSCManager_eventGetOSCAddressContainers_Parms
		{
			FOSCAddress Address;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Address;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetOSCAddressContainers_Parms, Address), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers_Statics::NewProp_Address_MetaData)) }; // 1476147242
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Containers" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetOSCAddressContainers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Builds referenced array of address of containers in order */" },
		{ "DisplayName", "Get OSC Address Containers" },
		{ "Keywords", "osc address container path" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Builds referenced array of address of containers in order" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "GetOSCAddressContainers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers_Statics::OSCManager_eventGetOSCAddressContainers_Parms), Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_GetOSCAddressFullPath_Statics
	{
		struct OSCManager_eventGetOSCAddressFullPath_Parms
		{
			FOSCAddress Address;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Address;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetOSCAddressFullPath_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetOSCAddressFullPath_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetOSCAddressFullPath_Parms, Address), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetOSCAddressFullPath_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCAddressFullPath_Statics::NewProp_Address_MetaData)) }; // 1476147242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetOSCAddressFullPath_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Full Path" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCManager_GetOSCAddressFullPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetOSCAddressFullPath_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetOSCAddressFullPath_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCAddressFullPath_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_GetOSCAddressFullPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetOSCAddressFullPath_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetOSCAddressFullPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetOSCAddressFullPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Returns full path of OSC address in the form '/Container1/Container2' */" },
		{ "DisplayName", "Convert OSC Address To String" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Returns full path of OSC address in the form '/Container1/Container2'" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_GetOSCAddressFullPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "GetOSCAddressFullPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_GetOSCAddressFullPath_Statics::OSCManager_eventGetOSCAddressFullPath_Parms), Z_Construct_UFunction_UOSCManager_GetOSCAddressFullPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCAddressFullPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetOSCAddressFullPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCAddressFullPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_GetOSCAddressFullPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_GetOSCAddressFullPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_GetOSCAddressMethod_Statics
	{
		struct OSCManager_eventGetOSCAddressMethod_Parms
		{
			FOSCAddress Address;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Address;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetOSCAddressMethod_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetOSCAddressMethod_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetOSCAddressMethod_Parms, Address), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetOSCAddressMethod_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCAddressMethod_Statics::NewProp_Address_MetaData)) }; // 1476147242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetOSCAddressMethod_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Method" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCManager_GetOSCAddressMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetOSCAddressMethod_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetOSCAddressMethod_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCAddressMethod_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_GetOSCAddressMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetOSCAddressMethod_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetOSCAddressMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetOSCAddressMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Returns method name of OSC Address provided */" },
		{ "DisplayName", "Get OSC Address Method" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Returns method name of OSC Address provided" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_GetOSCAddressMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "GetOSCAddressMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_GetOSCAddressMethod_Statics::OSCManager_eventGetOSCAddressMethod_Parms), Z_Construct_UFunction_UOSCManager_GetOSCAddressMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCAddressMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetOSCAddressMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCAddressMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_GetOSCAddressMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_GetOSCAddressMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_GetOSCMessageAddress_Statics
	{
		struct OSCManager_eventGetOSCMessageAddress_Parms
		{
			FOSCMessage Message;
			FOSCAddress ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetOSCMessageAddress_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetOSCMessageAddress_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetOSCMessageAddress_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetOSCMessageAddress_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCMessageAddress_Statics::NewProp_Message_MetaData)) }; // 3256038154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetOSCMessageAddress_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Address" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetOSCMessageAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetOSCMessageAddress_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetOSCMessageAddress_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCMessageAddress_Statics::NewProp_ReturnValue_MetaData)) }; // 1476147242
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_GetOSCMessageAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetOSCMessageAddress_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetOSCMessageAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetOSCMessageAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/* Returns copy of message's OSC Address */" },
		{ "DisplayName", "Get OSC Message Address" },
		{ "Keywords", "osc address" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Returns copy of message's OSC Address" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_GetOSCMessageAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "GetOSCMessageAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_GetOSCMessageAddress_Statics::OSCManager_eventGetOSCMessageAddress_Parms), Z_Construct_UFunction_UOSCManager_GetOSCMessageAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCMessageAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetOSCMessageAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetOSCMessageAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_GetOSCMessageAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_GetOSCMessageAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_GetString_Statics
	{
		struct OSCManager_eventGetString_Parms
		{
			FOSCMessage Message;
			int32 Index;
			FString Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetString_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_GetString_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetString_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetString_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetString_Statics::NewProp_Message_MetaData)) }; // 3256038154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetString_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOSCManager_GetString_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetString_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetString_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetString_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCManager_GetString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventGetString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetString_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Succeeded" },
	};
#endif
	void Z_Construct_UFunction_UOSCManager_GetString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OSCManager_eventGetString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCManager_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCManager_eventGetString_Parms), &Z_Construct_UFunction_UOSCManager_GetString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetString_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetString_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_GetString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetString_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetString_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetString_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_GetString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_GetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Set Value to string at provided Index in OSCMessage if in bounds and type matches */" },
		{ "DisplayName", "Get OSC Message String at Index" },
		{ "Keywords", "osc message" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Set Value to string at provided Index in OSCMessage if in bounds and type matches" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "GetString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_GetString_Statics::OSCManager_eventGetString_Parms), Z_Construct_UFunction_UOSCManager_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_GetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_GetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_GetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_GetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_ObjectPathFromOSCAddress_Statics
	{
		struct OSCManager_eventObjectPathFromOSCAddress_Parms
		{
			FOSCAddress Address;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Address;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_ObjectPathFromOSCAddress_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_ObjectPathFromOSCAddress_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventObjectPathFromOSCAddress_Parms, Address), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_ObjectPathFromOSCAddress_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_ObjectPathFromOSCAddress_Statics::NewProp_Address_MetaData)) }; // 1476147242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_ObjectPathFromOSCAddress_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Path" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCManager_ObjectPathFromOSCAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventObjectPathFromOSCAddress_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_ObjectPathFromOSCAddress_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_ObjectPathFromOSCAddress_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_ObjectPathFromOSCAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_ObjectPathFromOSCAddress_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_ObjectPathFromOSCAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_ObjectPathFromOSCAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Converts OSC Address to an object path. */" },
		{ "DisplayName", "Convert OSC Address to Object Path" },
		{ "Keywords", "osc address path uobject" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Converts OSC Address to an object path." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_ObjectPathFromOSCAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "ObjectPathFromOSCAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_ObjectPathFromOSCAddress_Statics::OSCManager_eventObjectPathFromOSCAddress_Parms), Z_Construct_UFunction_UOSCManager_ObjectPathFromOSCAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_ObjectPathFromOSCAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_ObjectPathFromOSCAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_ObjectPathFromOSCAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_ObjectPathFromOSCAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_ObjectPathFromOSCAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPath_Statics
	{
		struct OSCManager_eventOSCAddressFromObjectPath_Parms
		{
			UObject* Object;
			FOSCAddress ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPath_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressFromObjectPath_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPath_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Address" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressFromObjectPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPath_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPath_Statics::NewProp_ReturnValue_MetaData)) }; // 1476147242
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPath_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Converts object path to OSC Address, converting folders to address containers and the object's name to the address method.\n\x09 * Only supports parent objects (See UObjectBaseUtility::GetPathName and UObjectBaseUtility::GetFullName).\n\x09 */" },
		{ "DisplayName", "Convert Object Path to OSC Address" },
		{ "Keywords", "osc address path uobject" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Converts object path to OSC Address, converting folders to address containers and the object's name to the address method.\nOnly supports parent objects (See UObjectBaseUtility::GetPathName and UObjectBaseUtility::GetFullName)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "OSCAddressFromObjectPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPath_Statics::OSCManager_eventOSCAddressFromObjectPath_Parms), Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPathString_Statics
	{
		struct OSCManager_eventOSCAddressFromObjectPathString_Parms
		{
			FString PathName;
			FOSCAddress ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPathString_Statics::NewProp_PathName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPathString_Statics::NewProp_PathName = { "PathName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressFromObjectPathString_Parms, PathName), METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPathString_Statics::NewProp_PathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPathString_Statics::NewProp_PathName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPathString_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Address" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPathString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressFromObjectPathString_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPathString_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPathString_Statics::NewProp_ReturnValue_MetaData)) }; // 1476147242
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPathString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPathString_Statics::NewProp_PathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPathString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPathString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Converts object path string to OSC Address, converting folders to address containers and the object's name to the address method.\n\x09 * Only supports parent objects (See UObjectBaseUtility::GetPathName and UObjectBaseUtility::GetFullName).\n\x09 */" },
		{ "DisplayName", "Convert Object Path (String) to OSC Address" },
		{ "Keywords", "osc address path uobject" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Converts object path string to OSC Address, converting folders to address containers and the object's name to the address method.\nOnly supports parent objects (See UObjectBaseUtility::GetPathName and UObjectBaseUtility::GetFullName)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPathString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "OSCAddressFromObjectPathString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPathString_Statics::OSCManager_eventOSCAddressFromObjectPathString_Parms), Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPathString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPathString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPathString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPathString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPathString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPathString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPath_Statics
	{
		struct OSCManager_eventOSCAddressIsValidPath_Parms
		{
			FOSCAddress Address;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Address;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPath_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPath_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressIsValidPath_Parms, Address), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPath_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPath_Statics::NewProp_Address_MetaData)) }; // 1476147242
	void Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OSCManager_eventOSCAddressIsValidPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCManager_eventOSCAddressIsValidPath_Parms), &Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPath_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Returns whether OSC Address is valid path */" },
		{ "DisplayName", "Is OSC Address Valid Path" },
		{ "Keywords", "valid osc address path address" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Returns whether OSC Address is valid path" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "OSCAddressIsValidPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPath_Statics::OSCManager_eventOSCAddressIsValidPath_Parms), Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPattern_Statics
	{
		struct OSCManager_eventOSCAddressIsValidPattern_Parms
		{
			FOSCAddress Address;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Address;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPattern_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPattern_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressIsValidPattern_Parms, Address), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPattern_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPattern_Statics::NewProp_Address_MetaData)) }; // 1476147242
	void Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPattern_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OSCManager_eventOSCAddressIsValidPattern_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPattern_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCManager_eventOSCAddressIsValidPattern_Parms), &Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPattern_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPattern_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPattern_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPattern_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPattern_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Returns whether OSC Address is valid pattern to match against */" },
		{ "DisplayName", "Is OSC Address Valid Pattern" },
		{ "Keywords", "valid osc address pattern address" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Returns whether OSC Address is valid pattern to match against" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "OSCAddressIsValidPattern", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPattern_Statics::OSCManager_eventOSCAddressIsValidPattern_Parms), Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPattern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPattern_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPattern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPattern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPattern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPattern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics
	{
		struct OSCManager_eventOSCAddressPathMatchesPattern_Parms
		{
			FOSCAddress Pattern;
			FOSCAddress Path;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::NewProp_Pattern_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressPathMatchesPattern_Parms, Pattern), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::NewProp_Pattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::NewProp_Pattern_MetaData)) }; // 1476147242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressPathMatchesPattern_Parms, Path), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::NewProp_Path_MetaData)) }; // 1476147242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Match" },
	};
#endif
	void Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OSCManager_eventOSCAddressPathMatchesPattern_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCManager_eventOSCAddressPathMatchesPattern_Parms), &Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::NewProp_Pattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Returns if address pattern matches the provided address path.\n\x09  * If passed address is not a valid path, returns false.\n\x09  */" },
		{ "DisplayName", "OSC Address Path Matches Pattern" },
		{ "Keywords", "matches osc address path address" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Returns if address pattern matches the provided address path.\nIf passed address is not a valid path, returns false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "OSCAddressPathMatchesPattern", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::OSCManager_eventOSCAddressPathMatchesPattern_Parms), Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_OSCAddressPopContainer_Statics
	{
		struct OSCManager_eventOSCAddressPopContainer_Parms
		{
			FOSCAddress Address;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Address;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressPopContainer_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressPopContainer_Parms, Address), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(nullptr, 0) }; // 1476147242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressPopContainer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Container" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressPopContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressPopContainer_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressPopContainer_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressPopContainer_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_OSCAddressPopContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressPopContainer_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressPopContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressPopContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Pops container from ordered array of containers. If no containers, returns empty string */" },
		{ "DisplayName", "Pop Container from OSC Address" },
		{ "Keywords", "pop osc address container" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Pops container from ordered array of containers. If no containers, returns empty string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_OSCAddressPopContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "OSCAddressPopContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_OSCAddressPopContainer_Statics::OSCManager_eventOSCAddressPopContainer_Parms), Z_Construct_UFunction_UOSCManager_OSCAddressPopContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressPopContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressPopContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressPopContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_OSCAddressPopContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_OSCAddressPopContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers_Statics
	{
		struct OSCManager_eventOSCAddressPopContainers_Parms
		{
			FOSCAddress Address;
			int32 NumContainers;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Address;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumContainers;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressPopContainers_Parms, Address), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(nullptr, 0) }; // 1476147242
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers_Statics::NewProp_NumContainers = { "NumContainers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressPopContainers_Parms, NumContainers), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Containers" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressPopContainers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers_Statics::NewProp_NumContainers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Pops container from ordered array of containers. If NumContainers is greater than or equal to the number of containers in address, returns all containers. */" },
		{ "DisplayName", "Pop Containers from OSC Address" },
		{ "Keywords", "pop osc address container" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Pops container from ordered array of containers. If NumContainers is greater than or equal to the number of containers in address, returns all containers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "OSCAddressPopContainers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers_Statics::OSCManager_eventOSCAddressPopContainers_Parms), Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer_Statics
	{
		struct OSCManager_eventOSCAddressPushContainer_Parms
		{
			FOSCAddress Address;
			FString Container;
			FOSCAddress ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Address;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Container;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressPushContainer_Parms, Address), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(nullptr, 0) }; // 1476147242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer_Statics::NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressPushContainer_Parms, Container), METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer_Statics::NewProp_Container_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Address" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressPushContainer_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer_Statics::NewProp_ReturnValue_MetaData)) }; // 1476147242
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Pushes container onto address' ordered array of containers */" },
		{ "DisplayName", "Push Container to OSC Address" },
		{ "Keywords", "push osc address container" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Pushes container onto address' ordered array of containers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "OSCAddressPushContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer_Statics::OSCManager_eventOSCAddressPushContainer_Parms), Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics
	{
		struct OSCManager_eventOSCAddressPushContainers_Parms
		{
			FOSCAddress Address;
			TArray<FString> Containers;
			FOSCAddress ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Address;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Containers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Containers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Containers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressPushContainers_Parms, Address), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(nullptr, 0) }; // 1476147242
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::NewProp_Containers_Inner = { "Containers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::NewProp_Containers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::NewProp_Containers = { "Containers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressPushContainers_Parms, Containers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::NewProp_Containers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::NewProp_Containers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Address" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressPushContainers_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::NewProp_ReturnValue_MetaData)) }; // 1476147242
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::NewProp_Containers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::NewProp_Containers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Pushes container onto address' ordered array of containers */" },
		{ "DisplayName", "Push Container Array to OSC Address" },
		{ "Keywords", "push osc address container" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Pushes container onto address' ordered array of containers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "OSCAddressPushContainers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::OSCManager_eventOSCAddressPushContainers_Parms), Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers_Statics
	{
		struct OSCManager_eventOSCAddressRemoveContainers_Parms
		{
			FOSCAddress Address;
			int32 Index;
			int32 Count;
			FOSCAddress ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Address;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressRemoveContainers_Parms, Address), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(nullptr, 0) }; // 1476147242
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressRemoveContainers_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressRemoveContainers_Parms, Count), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Address" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventOSCAddressRemoveContainers_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers_Statics::NewProp_ReturnValue_MetaData)) }; // 1476147242
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Remove containers from ordered array of containers at index up to count of containers. */" },
		{ "DisplayName", "Remove Containers from OSC Address" },
		{ "Keywords", "remove osc address container" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Remove containers from ordered array of containers at index up to count of containers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "OSCAddressRemoveContainers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers_Statics::OSCManager_eventOSCAddressRemoveContainers_Parms), Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod_Statics
	{
		struct OSCManager_eventSetOSCAddressMethod_Parms
		{
			FOSCAddress Address;
			FString Method;
			FOSCAddress ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Address;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventSetOSCAddressMethod_Parms, Address), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(nullptr, 0) }; // 1476147242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod_Statics::NewProp_Method_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventSetOSCAddressMethod_Parms, Method), METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod_Statics::NewProp_Method_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Address" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventSetOSCAddressMethod_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod_Statics::NewProp_ReturnValue_MetaData)) }; // 1476147242
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Sets the method name of the OSC Address provided */" },
		{ "DisplayName", "Set OSC Address Method" },
		{ "Keywords", "osc method" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Sets the method name of the OSC Address provided" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "SetOSCAddressMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod_Statics::OSCManager_eventSetOSCAddressMethod_Parms), Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress_Statics
	{
		struct OSCManager_eventSetOSCMessageAddress_Parms
		{
			FOSCMessage Message;
			FOSCAddress Address;
			FOSCMessage ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Address;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventSetOSCMessageAddress_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(nullptr, 0) }; // 3256038154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventSetOSCMessageAddress_Parms, Address), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress_Statics::NewProp_Address_MetaData)) }; // 1476147242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Message" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCManager_eventSetOSCMessageAddress_Parms, ReturnValue), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress_Statics::NewProp_ReturnValue_MetaData)) }; // 3256038154
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Sets the OSC Address of the provided message */" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
		{ "ToolTip", "Sets the OSC Address of the provided message" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCManager, nullptr, "SetOSCMessageAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress_Statics::OSCManager_eventSetOSCMessageAddress_Parms), Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOSCManager);
	UClass* Z_Construct_UClass_UOSCManager_NoRegister()
	{
		return UOSCManager::StaticClass();
	}
	struct Z_Construct_UClass_UOSCManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOSCManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OSC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOSCManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOSCManager_AddAddress, "AddAddress" }, // 2884606828
		{ &Z_Construct_UFunction_UOSCManager_AddBlob, "AddBlob" }, // 2659133904
		{ &Z_Construct_UFunction_UOSCManager_AddBool, "AddBool" }, // 2104518217
		{ &Z_Construct_UFunction_UOSCManager_AddBundleToBundle, "AddBundleToBundle" }, // 3175873988
		{ &Z_Construct_UFunction_UOSCManager_AddFloat, "AddFloat" }, // 3393586017
		{ &Z_Construct_UFunction_UOSCManager_AddInt32, "AddInt32" }, // 1871276901
		{ &Z_Construct_UFunction_UOSCManager_AddInt64, "AddInt64" }, // 3136055524
		{ &Z_Construct_UFunction_UOSCManager_AddMessageToBundle, "AddMessageToBundle" }, // 985486477
		{ &Z_Construct_UFunction_UOSCManager_AddString, "AddString" }, // 3678882148
		{ &Z_Construct_UFunction_UOSCManager_ClearBundle, "ClearBundle" }, // 1491861318
		{ &Z_Construct_UFunction_UOSCManager_ClearMessage, "ClearMessage" }, // 1472482525
		{ &Z_Construct_UFunction_UOSCManager_ClearOSCAddressContainers, "ClearOSCAddressContainers" }, // 1000821603
		{ &Z_Construct_UFunction_UOSCManager_ConvertStringToOSCAddress, "ConvertStringToOSCAddress" }, // 4066197809
		{ &Z_Construct_UFunction_UOSCManager_CreateOSCClient, "CreateOSCClient" }, // 2285077622
		{ &Z_Construct_UFunction_UOSCManager_CreateOSCServer, "CreateOSCServer" }, // 3373118973
		{ &Z_Construct_UFunction_UOSCManager_FindObjectAtOSCAddress, "FindObjectAtOSCAddress" }, // 2216435051
		{ &Z_Construct_UFunction_UOSCManager_GetAddress, "GetAddress" }, // 3594513207
		{ &Z_Construct_UFunction_UOSCManager_GetAllAddresses, "GetAllAddresses" }, // 21987520
		{ &Z_Construct_UFunction_UOSCManager_GetAllBools, "GetAllBools" }, // 1032692580
		{ &Z_Construct_UFunction_UOSCManager_GetAllFloats, "GetAllFloats" }, // 3796712704
		{ &Z_Construct_UFunction_UOSCManager_GetAllInt32s, "GetAllInt32s" }, // 3205560482
		{ &Z_Construct_UFunction_UOSCManager_GetAllInt64s, "GetAllInt64s" }, // 3501318642
		{ &Z_Construct_UFunction_UOSCManager_GetAllStrings, "GetAllStrings" }, // 2451073234
		{ &Z_Construct_UFunction_UOSCManager_GetBlob, "GetBlob" }, // 3903681059
		{ &Z_Construct_UFunction_UOSCManager_GetBool, "GetBool" }, // 519326650
		{ &Z_Construct_UFunction_UOSCManager_GetBundlesFromBundle, "GetBundlesFromBundle" }, // 729661628
		{ &Z_Construct_UFunction_UOSCManager_GetFloat, "GetFloat" }, // 393448386
		{ &Z_Construct_UFunction_UOSCManager_GetInt32, "GetInt32" }, // 3186152415
		{ &Z_Construct_UFunction_UOSCManager_GetInt64, "GetInt64" }, // 3822121467
		{ &Z_Construct_UFunction_UOSCManager_GetMessageFromBundle, "GetMessageFromBundle" }, // 2436886042
		{ &Z_Construct_UFunction_UOSCManager_GetMessagesFromBundle, "GetMessagesFromBundle" }, // 3222701249
		{ &Z_Construct_UFunction_UOSCManager_GetOSCAddressContainer, "GetOSCAddressContainer" }, // 2043488485
		{ &Z_Construct_UFunction_UOSCManager_GetOSCAddressContainerPath, "GetOSCAddressContainerPath" }, // 1758111353
		{ &Z_Construct_UFunction_UOSCManager_GetOSCAddressContainers, "GetOSCAddressContainers" }, // 2361069633
		{ &Z_Construct_UFunction_UOSCManager_GetOSCAddressFullPath, "GetOSCAddressFullPath" }, // 980869250
		{ &Z_Construct_UFunction_UOSCManager_GetOSCAddressMethod, "GetOSCAddressMethod" }, // 2590028696
		{ &Z_Construct_UFunction_UOSCManager_GetOSCMessageAddress, "GetOSCMessageAddress" }, // 872172557
		{ &Z_Construct_UFunction_UOSCManager_GetString, "GetString" }, // 755679997
		{ &Z_Construct_UFunction_UOSCManager_ObjectPathFromOSCAddress, "ObjectPathFromOSCAddress" }, // 1696608166
		{ &Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPath, "OSCAddressFromObjectPath" }, // 1266137921
		{ &Z_Construct_UFunction_UOSCManager_OSCAddressFromObjectPathString, "OSCAddressFromObjectPathString" }, // 2032065962
		{ &Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPath, "OSCAddressIsValidPath" }, // 1002197188
		{ &Z_Construct_UFunction_UOSCManager_OSCAddressIsValidPattern, "OSCAddressIsValidPattern" }, // 3926882459
		{ &Z_Construct_UFunction_UOSCManager_OSCAddressPathMatchesPattern, "OSCAddressPathMatchesPattern" }, // 1968828202
		{ &Z_Construct_UFunction_UOSCManager_OSCAddressPopContainer, "OSCAddressPopContainer" }, // 2753932081
		{ &Z_Construct_UFunction_UOSCManager_OSCAddressPopContainers, "OSCAddressPopContainers" }, // 2899772731
		{ &Z_Construct_UFunction_UOSCManager_OSCAddressPushContainer, "OSCAddressPushContainer" }, // 1390901147
		{ &Z_Construct_UFunction_UOSCManager_OSCAddressPushContainers, "OSCAddressPushContainers" }, // 1244364356
		{ &Z_Construct_UFunction_UOSCManager_OSCAddressRemoveContainers, "OSCAddressRemoveContainers" }, // 755077576
		{ &Z_Construct_UFunction_UOSCManager_SetOSCAddressMethod, "SetOSCAddressMethod" }, // 757505183
		{ &Z_Construct_UFunction_UOSCManager_SetOSCMessageAddress, "SetOSCMessageAddress" }, // 2786257908
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOSCManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OSCManager.h" },
		{ "ModuleRelativePath", "Public/OSCManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOSCManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOSCManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOSCManager_Statics::ClassParams = {
		&UOSCManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOSCManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOSCManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOSCManager()
	{
		if (!Z_Registration_Info_UClass_UOSCManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOSCManager.OuterSingleton, Z_Construct_UClass_UOSCManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOSCManager.OuterSingleton;
	}
	template<> OSC_API UClass* StaticClass<UOSCManager>()
	{
		return UOSCManager::StaticClass();
	}
	UOSCManager::UOSCManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOSCManager);
	UOSCManager::~UOSCManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOSCManager, UOSCManager::StaticClass, TEXT("UOSCManager"), &Z_Registration_Info_UClass_UOSCManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOSCManager), 2665617211U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_3975507974(TEXT("/Script/OSC"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
