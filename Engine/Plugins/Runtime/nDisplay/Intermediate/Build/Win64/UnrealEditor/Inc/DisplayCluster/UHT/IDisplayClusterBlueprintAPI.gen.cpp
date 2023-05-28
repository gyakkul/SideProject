// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprints/IDisplayClusterBlueprintAPI.h"
#include "Cluster/DisplayClusterClusterEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIDisplayClusterBlueprintAPI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_ADisplayClusterRootActor_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterBlueprintAPI();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterBlueprintAPI_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterClusterEventListener_NoRegister();
	DISPLAYCLUSTER_API UEnum* Z_Construct_UEnum_DisplayCluster_EDisplayClusterNodeRole();
	DISPLAYCLUSTER_API UEnum* Z_Construct_UEnum_DisplayCluster_EDisplayClusterOperationMode();
	DISPLAYCLUSTER_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary();
	DISPLAYCLUSTER_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	DEFINE_FUNCTION(IDisplayClusterBlueprintAPI::execSendClusterEventBinaryTo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Address);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_GET_STRUCT_REF(FDisplayClusterClusterEventBinary,Z_Param_Out_Event);
		P_GET_UBOOL(Z_Param_bPrimaryOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendClusterEventBinaryTo(Z_Param_Address,Z_Param_Port,Z_Param_Out_Event,Z_Param_bPrimaryOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDisplayClusterBlueprintAPI::execSendClusterEventJsonTo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Address);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_GET_STRUCT_REF(FDisplayClusterClusterEventJson,Z_Param_Out_Event);
		P_GET_UBOOL(Z_Param_bPrimaryOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendClusterEventJsonTo(Z_Param_Address,Z_Param_Port,Z_Param_Out_Event,Z_Param_bPrimaryOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDisplayClusterBlueprintAPI::execEmitClusterEventBinary)
	{
		P_GET_STRUCT_REF(FDisplayClusterClusterEventBinary,Z_Param_Out_Event);
		P_GET_UBOOL(Z_Param_bPrimaryOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EmitClusterEventBinary(Z_Param_Out_Event,Z_Param_bPrimaryOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDisplayClusterBlueprintAPI::execEmitClusterEventJson)
	{
		P_GET_STRUCT_REF(FDisplayClusterClusterEventJson,Z_Param_Out_Event);
		P_GET_UBOOL(Z_Param_bPrimaryOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EmitClusterEventJson(Z_Param_Out_Event,Z_Param_bPrimaryOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDisplayClusterBlueprintAPI::execRemoveClusterEventListener)
	{
		P_GET_TINTERFACE(IDisplayClusterClusterEventListener,Z_Param_Listener);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveClusterEventListener(Z_Param_Listener);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDisplayClusterBlueprintAPI::execAddClusterEventListener)
	{
		P_GET_TINTERFACE(IDisplayClusterClusterEventListener,Z_Param_Listener);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddClusterEventListener(Z_Param_Listener);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDisplayClusterBlueprintAPI::execGetClusterRole)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDisplayClusterNodeRole*)Z_Param__Result=P_THIS->GetClusterRole();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDisplayClusterBlueprintAPI::execIsBackup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBackup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDisplayClusterBlueprintAPI::execIsSecondary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSecondary();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDisplayClusterBlueprintAPI::execIsPrimary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPrimary();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDisplayClusterBlueprintAPI::execGetActiveNodesAmount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActiveNodesAmount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDisplayClusterBlueprintAPI::execGetActiveNodeIds)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutNodeIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActiveNodeIds(Z_Param_Out_OutNodeIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDisplayClusterBlueprintAPI::execGetNodeId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNodeId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDisplayClusterBlueprintAPI::execGetRootActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADisplayClusterRootActor**)Z_Param__Result=P_THIS->GetRootActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDisplayClusterBlueprintAPI::execGetOperationMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDisplayClusterOperationMode*)Z_Param__Result=P_THIS->GetOperationMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDisplayClusterBlueprintAPI::execIsModuleInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsModuleInitialized();
		P_NATIVE_END;
	}
	void UDisplayClusterBlueprintAPI::StaticRegisterNativesUDisplayClusterBlueprintAPI()
	{
		UClass* Class = UDisplayClusterBlueprintAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddClusterEventListener", &IDisplayClusterBlueprintAPI::execAddClusterEventListener },
			{ "EmitClusterEventBinary", &IDisplayClusterBlueprintAPI::execEmitClusterEventBinary },
			{ "EmitClusterEventJson", &IDisplayClusterBlueprintAPI::execEmitClusterEventJson },
			{ "GetActiveNodeIds", &IDisplayClusterBlueprintAPI::execGetActiveNodeIds },
			{ "GetActiveNodesAmount", &IDisplayClusterBlueprintAPI::execGetActiveNodesAmount },
			{ "GetClusterRole", &IDisplayClusterBlueprintAPI::execGetClusterRole },
			{ "GetNodeId", &IDisplayClusterBlueprintAPI::execGetNodeId },
			{ "GetOperationMode", &IDisplayClusterBlueprintAPI::execGetOperationMode },
			{ "GetRootActor", &IDisplayClusterBlueprintAPI::execGetRootActor },
			{ "IsBackup", &IDisplayClusterBlueprintAPI::execIsBackup },
			{ "IsModuleInitialized", &IDisplayClusterBlueprintAPI::execIsModuleInitialized },
			{ "IsPrimary", &IDisplayClusterBlueprintAPI::execIsPrimary },
			{ "IsSecondary", &IDisplayClusterBlueprintAPI::execIsSecondary },
			{ "RemoveClusterEventListener", &IDisplayClusterBlueprintAPI::execRemoveClusterEventListener },
			{ "SendClusterEventBinaryTo", &IDisplayClusterBlueprintAPI::execSendClusterEventBinaryTo },
			{ "SendClusterEventJsonTo", &IDisplayClusterBlueprintAPI::execSendClusterEventJsonTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPI_AddClusterEventListener_Statics
	{
		struct DisplayClusterBlueprintAPI_eventAddClusterEventListener_Parms
		{
			TScriptInterface<IDisplayClusterClusterEventListener> Listener;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Listener;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_AddClusterEventListener_Statics::NewProp_Listener = { "Listener", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPI_eventAddClusterEventListener_Parms, Listener), Z_Construct_UClass_UDisplayClusterClusterEventListener_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPI_AddClusterEventListener_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_AddClusterEventListener_Statics::NewProp_Listener,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_AddClusterEventListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "Comment", "/** Adds cluster event listener. */" },
		{ "DisplayName", "Add cluster event listener" },
		{ "ModuleRelativePath", "Public/Blueprints/IDisplayClusterBlueprintAPI.h" },
		{ "ToolTip", "Adds cluster event listener." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_AddClusterEventListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPI, nullptr, "AddClusterEventListener", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_AddClusterEventListener_Statics::DisplayClusterBlueprintAPI_eventAddClusterEventListener_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPI_AddClusterEventListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_AddClusterEventListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_AddClusterEventListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_AddClusterEventListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPI_AddClusterEventListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPI_AddClusterEventListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventBinary_Statics
	{
		struct DisplayClusterBlueprintAPI_eventEmitClusterEventBinary_Parms
		{
			FDisplayClusterClusterEventBinary Event;
			bool bPrimaryOnly;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
		static void NewProp_bPrimaryOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrimaryOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventBinary_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventBinary_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPI_eventEmitClusterEventBinary_Parms, Event), Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventBinary_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventBinary_Statics::NewProp_Event_MetaData)) }; // 1904386298
	void Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventBinary_Statics::NewProp_bPrimaryOnly_SetBit(void* Obj)
	{
		((DisplayClusterBlueprintAPI_eventEmitClusterEventBinary_Parms*)Obj)->bPrimaryOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventBinary_Statics::NewProp_bPrimaryOnly = { "bPrimaryOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterBlueprintAPI_eventEmitClusterEventBinary_Parms), &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventBinary_Statics::NewProp_bPrimaryOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventBinary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventBinary_Statics::NewProp_Event,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventBinary_Statics::NewProp_bPrimaryOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventBinary_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "Comment", "/** Emits binary cluster event. */" },
		{ "DisplayName", "Emit binary cluster event" },
		{ "ModuleRelativePath", "Public/Blueprints/IDisplayClusterBlueprintAPI.h" },
		{ "ToolTip", "Emits binary cluster event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventBinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPI, nullptr, "EmitClusterEventBinary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventBinary_Statics::DisplayClusterBlueprintAPI_eventEmitClusterEventBinary_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventBinary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventBinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventBinary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventBinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventBinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventBinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventJson_Statics
	{
		struct DisplayClusterBlueprintAPI_eventEmitClusterEventJson_Parms
		{
			FDisplayClusterClusterEventJson Event;
			bool bPrimaryOnly;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
		static void NewProp_bPrimaryOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrimaryOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventJson_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventJson_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPI_eventEmitClusterEventJson_Parms, Event), Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventJson_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventJson_Statics::NewProp_Event_MetaData)) }; // 62572603
	void Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventJson_Statics::NewProp_bPrimaryOnly_SetBit(void* Obj)
	{
		((DisplayClusterBlueprintAPI_eventEmitClusterEventJson_Parms*)Obj)->bPrimaryOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventJson_Statics::NewProp_bPrimaryOnly = { "bPrimaryOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterBlueprintAPI_eventEmitClusterEventJson_Parms), &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventJson_Statics::NewProp_bPrimaryOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventJson_Statics::NewProp_Event,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventJson_Statics::NewProp_bPrimaryOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "Comment", "/** Emits JSON cluster event. */" },
		{ "DisplayName", "Emit JSON cluster event" },
		{ "ModuleRelativePath", "Public/Blueprints/IDisplayClusterBlueprintAPI.h" },
		{ "ToolTip", "Emits JSON cluster event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPI, nullptr, "EmitClusterEventJson", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventJson_Statics::DisplayClusterBlueprintAPI_eventEmitClusterEventJson_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodeIds_Statics
	{
		struct DisplayClusterBlueprintAPI_eventGetActiveNodeIds_Parms
		{
			TArray<FString> OutNodeIds;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutNodeIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutNodeIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodeIds_Statics::NewProp_OutNodeIds_Inner = { "OutNodeIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodeIds_Statics::NewProp_OutNodeIds = { "OutNodeIds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPI_eventGetActiveNodeIds_Parms, OutNodeIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodeIds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodeIds_Statics::NewProp_OutNodeIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodeIds_Statics::NewProp_OutNodeIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodeIds_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "Comment", "/** Returns List of the active nodes in the runtime cluster node in a cluster. */" },
		{ "DisplayName", "Get cluster node IDs" },
		{ "ModuleRelativePath", "Public/Blueprints/IDisplayClusterBlueprintAPI.h" },
		{ "ToolTip", "Returns List of the active nodes in the runtime cluster node in a cluster." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodeIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPI, nullptr, "GetActiveNodeIds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodeIds_Statics::DisplayClusterBlueprintAPI_eventGetActiveNodeIds_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodeIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodeIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodeIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodeIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodeIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodeIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodesAmount_Statics
	{
		struct DisplayClusterBlueprintAPI_eventGetActiveNodesAmount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodesAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPI_eventGetActiveNodesAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodesAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodesAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodesAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "Comment", "/** Returns amount of active nodes in a cluster. */" },
		{ "DisplayName", "Get nodes amount" },
		{ "ModuleRelativePath", "Public/Blueprints/IDisplayClusterBlueprintAPI.h" },
		{ "ToolTip", "Returns amount of active nodes in a cluster." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodesAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPI, nullptr, "GetActiveNodesAmount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodesAmount_Statics::DisplayClusterBlueprintAPI_eventGetActiveNodesAmount_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodesAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodesAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodesAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodesAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodesAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodesAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetClusterRole_Statics
	{
		struct DisplayClusterBlueprintAPI_eventGetClusterRole_Parms
		{
			EDisplayClusterNodeRole ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetClusterRole_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetClusterRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPI_eventGetClusterRole_Parms, ReturnValue), Z_Construct_UEnum_DisplayCluster_EDisplayClusterNodeRole, METADATA_PARAMS(nullptr, 0) }; // 1884238287
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetClusterRole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetClusterRole_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetClusterRole_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetClusterRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "Comment", "/** Returns the role of the current cluster node. */" },
		{ "DisplayName", "Get cluster role" },
		{ "ModuleRelativePath", "Public/Blueprints/IDisplayClusterBlueprintAPI.h" },
		{ "ToolTip", "Returns the role of the current cluster node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetClusterRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPI, nullptr, "GetClusterRole", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetClusterRole_Statics::DisplayClusterBlueprintAPI_eventGetClusterRole_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetClusterRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetClusterRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetClusterRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetClusterRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetClusterRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetClusterRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetNodeId_Statics
	{
		struct DisplayClusterBlueprintAPI_eventGetNodeId_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetNodeId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPI_eventGetNodeId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetNodeId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetNodeId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetNodeId_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "Comment", "/** Returns Id of the current node in a cluster. */" },
		{ "DisplayName", "Get node ID" },
		{ "ModuleRelativePath", "Public/Blueprints/IDisplayClusterBlueprintAPI.h" },
		{ "ToolTip", "Returns Id of the current node in a cluster." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetNodeId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPI, nullptr, "GetNodeId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetNodeId_Statics::DisplayClusterBlueprintAPI_eventGetNodeId_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetNodeId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetNodeId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetNodeId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetNodeId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetNodeId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetNodeId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetOperationMode_Statics
	{
		struct DisplayClusterBlueprintAPI_eventGetOperationMode_Parms
		{
			EDisplayClusterOperationMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetOperationMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetOperationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPI_eventGetOperationMode_Parms, ReturnValue), Z_Construct_UEnum_DisplayCluster_EDisplayClusterOperationMode, METADATA_PARAMS(nullptr, 0) }; // 506207516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetOperationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetOperationMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetOperationMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetOperationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "/** Returns current operation mode. */" },
		{ "DisplayName", "Get operation mode" },
		{ "ModuleRelativePath", "Public/Blueprints/IDisplayClusterBlueprintAPI.h" },
		{ "ToolTip", "Returns current operation mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetOperationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPI, nullptr, "GetOperationMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetOperationMode_Statics::DisplayClusterBlueprintAPI_eventGetOperationMode_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetOperationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetOperationMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetOperationMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetOperationMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetOperationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetOperationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetRootActor_Statics
	{
		struct DisplayClusterBlueprintAPI_eventGetRootActor_Parms
		{
			ADisplayClusterRootActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetRootActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPI_eventGetRootActor_Parms, ReturnValue), Z_Construct_UClass_ADisplayClusterRootActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetRootActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetRootActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetRootActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Game" },
		{ "Comment", "/** Returns DisplayCluster root actor. */" },
		{ "DisplayName", "Get root actor" },
		{ "ModuleRelativePath", "Public/Blueprints/IDisplayClusterBlueprintAPI.h" },
		{ "ToolTip", "Returns DisplayCluster root actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetRootActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPI, nullptr, "GetRootActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetRootActor_Statics::DisplayClusterBlueprintAPI_eventGetRootActor_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetRootActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetRootActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetRootActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetRootActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetRootActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetRootActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsBackup_Statics
	{
		struct DisplayClusterBlueprintAPI_eventIsBackup_Parms
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
	void Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsBackup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DisplayClusterBlueprintAPI_eventIsBackup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsBackup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterBlueprintAPI_eventIsBackup_Parms), &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsBackup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsBackup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsBackup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsBackup_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "Comment", "/** Returns true if current node is a backup node in a cluster. */" },
		{ "DisplayName", "Is a backup node" },
		{ "ModuleRelativePath", "Public/Blueprints/IDisplayClusterBlueprintAPI.h" },
		{ "ToolTip", "Returns true if current node is a backup node in a cluster." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsBackup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPI, nullptr, "IsBackup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsBackup_Statics::DisplayClusterBlueprintAPI_eventIsBackup_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsBackup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsBackup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsBackup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsBackup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsBackup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsBackup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsModuleInitialized_Statics
	{
		struct DisplayClusterBlueprintAPI_eventIsModuleInitialized_Parms
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
	void Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsModuleInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DisplayClusterBlueprintAPI_eventIsModuleInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsModuleInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterBlueprintAPI_eventIsModuleInitialized_Parms), &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsModuleInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsModuleInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsModuleInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsModuleInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "/* Returns true if the module has been initialized. */" },
		{ "DisplayName", "Is module initialized" },
		{ "ModuleRelativePath", "Public/Blueprints/IDisplayClusterBlueprintAPI.h" },
		{ "ToolTip", "Returns true if the module has been initialized." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsModuleInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPI, nullptr, "IsModuleInitialized", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsModuleInitialized_Statics::DisplayClusterBlueprintAPI_eventIsModuleInitialized_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsModuleInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsModuleInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsModuleInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsModuleInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsModuleInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsModuleInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsPrimary_Statics
	{
		struct DisplayClusterBlueprintAPI_eventIsPrimary_Parms
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
	void Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsPrimary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DisplayClusterBlueprintAPI_eventIsPrimary_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsPrimary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterBlueprintAPI_eventIsPrimary_Parms), &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsPrimary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsPrimary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsPrimary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsPrimary_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "Comment", "/** Returns true if current node is a primary node in a cluster. */" },
		{ "DisplayName", "Is a primary node" },
		{ "ModuleRelativePath", "Public/Blueprints/IDisplayClusterBlueprintAPI.h" },
		{ "ToolTip", "Returns true if current node is a primary node in a cluster." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsPrimary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPI, nullptr, "IsPrimary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsPrimary_Statics::DisplayClusterBlueprintAPI_eventIsPrimary_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsPrimary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsPrimary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsPrimary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsPrimary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsPrimary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsPrimary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsSecondary_Statics
	{
		struct DisplayClusterBlueprintAPI_eventIsSecondary_Parms
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
	void Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsSecondary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DisplayClusterBlueprintAPI_eventIsSecondary_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsSecondary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterBlueprintAPI_eventIsSecondary_Parms), &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsSecondary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsSecondary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsSecondary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsSecondary_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "Comment", "/** Returns true if current node is a secondary node in a cluster. */" },
		{ "DisplayName", "Is a secondary node" },
		{ "ModuleRelativePath", "Public/Blueprints/IDisplayClusterBlueprintAPI.h" },
		{ "ToolTip", "Returns true if current node is a secondary node in a cluster." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsSecondary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPI, nullptr, "IsSecondary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsSecondary_Statics::DisplayClusterBlueprintAPI_eventIsSecondary_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsSecondary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsSecondary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsSecondary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsSecondary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsSecondary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsSecondary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPI_RemoveClusterEventListener_Statics
	{
		struct DisplayClusterBlueprintAPI_eventRemoveClusterEventListener_Parms
		{
			TScriptInterface<IDisplayClusterClusterEventListener> Listener;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Listener;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_RemoveClusterEventListener_Statics::NewProp_Listener = { "Listener", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPI_eventRemoveClusterEventListener_Parms, Listener), Z_Construct_UClass_UDisplayClusterClusterEventListener_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPI_RemoveClusterEventListener_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_RemoveClusterEventListener_Statics::NewProp_Listener,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_RemoveClusterEventListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "Comment", "/** Removes cluster event listener. */" },
		{ "DisplayName", "Remove cluster event listener" },
		{ "ModuleRelativePath", "Public/Blueprints/IDisplayClusterBlueprintAPI.h" },
		{ "ToolTip", "Removes cluster event listener." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_RemoveClusterEventListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPI, nullptr, "RemoveClusterEventListener", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_RemoveClusterEventListener_Statics::DisplayClusterBlueprintAPI_eventRemoveClusterEventListener_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPI_RemoveClusterEventListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_RemoveClusterEventListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_RemoveClusterEventListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_RemoveClusterEventListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPI_RemoveClusterEventListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPI_RemoveClusterEventListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics
	{
		struct DisplayClusterBlueprintAPI_eventSendClusterEventBinaryTo_Parms
		{
			FString Address;
			int32 Port;
			FDisplayClusterClusterEventBinary Event;
			bool bPrimaryOnly;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Address;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
		static void NewProp_bPrimaryOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrimaryOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPI_eventSendClusterEventBinaryTo_Parms, Address), METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::NewProp_Address_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::NewProp_Port_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPI_eventSendClusterEventBinaryTo_Parms, Port), METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPI_eventSendClusterEventBinaryTo_Parms, Event), Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::NewProp_Event_MetaData)) }; // 1904386298
	void Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::NewProp_bPrimaryOnly_SetBit(void* Obj)
	{
		((DisplayClusterBlueprintAPI_eventSendClusterEventBinaryTo_Parms*)Obj)->bPrimaryOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::NewProp_bPrimaryOnly = { "bPrimaryOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterBlueprintAPI_eventSendClusterEventBinaryTo_Parms), &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::NewProp_bPrimaryOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::NewProp_Event,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::NewProp_bPrimaryOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "Comment", "/** Sends binary cluster event to a specific target (outside of the cluster). */" },
		{ "DisplayName", "Send binary event to a specific host" },
		{ "ModuleRelativePath", "Public/Blueprints/IDisplayClusterBlueprintAPI.h" },
		{ "ToolTip", "Sends binary cluster event to a specific target (outside of the cluster)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPI, nullptr, "SendClusterEventBinaryTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::DisplayClusterBlueprintAPI_eventSendClusterEventBinaryTo_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics
	{
		struct DisplayClusterBlueprintAPI_eventSendClusterEventJsonTo_Parms
		{
			FString Address;
			int32 Port;
			FDisplayClusterClusterEventJson Event;
			bool bPrimaryOnly;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Address;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
		static void NewProp_bPrimaryOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrimaryOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPI_eventSendClusterEventJsonTo_Parms, Address), METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::NewProp_Address_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::NewProp_Port_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPI_eventSendClusterEventJsonTo_Parms, Port), METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPI_eventSendClusterEventJsonTo_Parms, Event), Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::NewProp_Event_MetaData)) }; // 62572603
	void Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::NewProp_bPrimaryOnly_SetBit(void* Obj)
	{
		((DisplayClusterBlueprintAPI_eventSendClusterEventJsonTo_Parms*)Obj)->bPrimaryOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::NewProp_bPrimaryOnly = { "bPrimaryOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterBlueprintAPI_eventSendClusterEventJsonTo_Parms), &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::NewProp_bPrimaryOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::NewProp_Event,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::NewProp_bPrimaryOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "Comment", "/** Sends JSON cluster event to a specific target (outside of the cluster). */" },
		{ "DisplayName", "Send JSON event to a specific host" },
		{ "ModuleRelativePath", "Public/Blueprints/IDisplayClusterBlueprintAPI.h" },
		{ "ToolTip", "Sends JSON cluster event to a specific target (outside of the cluster)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPI, nullptr, "SendClusterEventJsonTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::DisplayClusterBlueprintAPI_eventSendClusterEventJsonTo_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterBlueprintAPI);
	UClass* Z_Construct_UClass_UDisplayClusterBlueprintAPI_NoRegister()
	{
		return UDisplayClusterBlueprintAPI::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterBlueprintAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterBlueprintAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDisplayClusterBlueprintAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_AddClusterEventListener, "AddClusterEventListener" }, // 2197845626
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventBinary, "EmitClusterEventBinary" }, // 4082660907
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_EmitClusterEventJson, "EmitClusterEventJson" }, // 2603669716
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodeIds, "GetActiveNodeIds" }, // 3084323617
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetActiveNodesAmount, "GetActiveNodesAmount" }, // 3197172012
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetClusterRole, "GetClusterRole" }, // 1406442168
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetNodeId, "GetNodeId" }, // 1226125553
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetOperationMode, "GetOperationMode" }, // 3304135449
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_GetRootActor, "GetRootActor" }, // 3893325117
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsBackup, "IsBackup" }, // 1249068275
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsModuleInitialized, "IsModuleInitialized" }, // 315458139
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsPrimary, "IsPrimary" }, // 3284038183
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_IsSecondary, "IsSecondary" }, // 868764319
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_RemoveClusterEventListener, "RemoveClusterEventListener" }, // 3658465483
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventBinaryTo, "SendClusterEventBinaryTo" }, // 1354147179
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPI_SendClusterEventJsonTo, "SendClusterEventJsonTo" }, // 1175527202
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterBlueprintAPI_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Blueprints/IDisplayClusterBlueprintAPI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterBlueprintAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDisplayClusterBlueprintAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterBlueprintAPI_Statics::ClassParams = {
		&UDisplayClusterBlueprintAPI::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterBlueprintAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterBlueprintAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterBlueprintAPI()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterBlueprintAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterBlueprintAPI.OuterSingleton, Z_Construct_UClass_UDisplayClusterBlueprintAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterBlueprintAPI.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterBlueprintAPI>()
	{
		return UDisplayClusterBlueprintAPI::StaticClass();
	}
	UDisplayClusterBlueprintAPI::UDisplayClusterBlueprintAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterBlueprintAPI);
	UDisplayClusterBlueprintAPI::~UDisplayClusterBlueprintAPI() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterBlueprintAPI, UDisplayClusterBlueprintAPI::StaticClass, TEXT("UDisplayClusterBlueprintAPI"), &Z_Registration_Info_UClass_UDisplayClusterBlueprintAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterBlueprintAPI), 2735426146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_3268391936(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
