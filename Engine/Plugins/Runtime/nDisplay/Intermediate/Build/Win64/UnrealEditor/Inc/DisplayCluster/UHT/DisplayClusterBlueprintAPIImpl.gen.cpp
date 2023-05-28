// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Blueprints/DisplayClusterBlueprintAPIImpl.h"
#include "Cluster/DisplayClusterClusterEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterBlueprintAPIImpl() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_ADisplayClusterRootActor_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterBlueprintAPI_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterClusterEventListener_NoRegister();
	DISPLAYCLUSTER_API UEnum* Z_Construct_UEnum_DisplayCluster_EDisplayClusterNodeRole();
	DISPLAYCLUSTER_API UEnum* Z_Construct_UEnum_DisplayCluster_EDisplayClusterOperationMode();
	DISPLAYCLUSTER_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary();
	DISPLAYCLUSTER_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	DEFINE_FUNCTION(UDisplayClusterBlueprintAPIImpl::execSendClusterEventBinaryTo)
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
	DEFINE_FUNCTION(UDisplayClusterBlueprintAPIImpl::execSendClusterEventJsonTo)
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
	DEFINE_FUNCTION(UDisplayClusterBlueprintAPIImpl::execEmitClusterEventBinary)
	{
		P_GET_STRUCT_REF(FDisplayClusterClusterEventBinary,Z_Param_Out_Event);
		P_GET_UBOOL(Z_Param_bPrimaryOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EmitClusterEventBinary(Z_Param_Out_Event,Z_Param_bPrimaryOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterBlueprintAPIImpl::execEmitClusterEventJson)
	{
		P_GET_STRUCT_REF(FDisplayClusterClusterEventJson,Z_Param_Out_Event);
		P_GET_UBOOL(Z_Param_bPrimaryOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EmitClusterEventJson(Z_Param_Out_Event,Z_Param_bPrimaryOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterBlueprintAPIImpl::execRemoveClusterEventListener)
	{
		P_GET_TINTERFACE(IDisplayClusterClusterEventListener,Z_Param_Listener);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveClusterEventListener(Z_Param_Listener);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterBlueprintAPIImpl::execAddClusterEventListener)
	{
		P_GET_TINTERFACE(IDisplayClusterClusterEventListener,Z_Param_Listener);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddClusterEventListener(Z_Param_Listener);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterBlueprintAPIImpl::execIsBackup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBackup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterBlueprintAPIImpl::execIsSecondary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSecondary();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterBlueprintAPIImpl::execIsPrimary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPrimary();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterBlueprintAPIImpl::execGetClusterRole)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDisplayClusterNodeRole*)Z_Param__Result=P_THIS->GetClusterRole();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterBlueprintAPIImpl::execGetActiveNodesAmount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActiveNodesAmount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterBlueprintAPIImpl::execGetActiveNodeIds)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutNodeIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActiveNodeIds(Z_Param_Out_OutNodeIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterBlueprintAPIImpl::execGetNodeId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNodeId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterBlueprintAPIImpl::execGetRootActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADisplayClusterRootActor**)Z_Param__Result=P_THIS->GetRootActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterBlueprintAPIImpl::execGetOperationMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDisplayClusterOperationMode*)Z_Param__Result=P_THIS->GetOperationMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterBlueprintAPIImpl::execIsModuleInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsModuleInitialized();
		P_NATIVE_END;
	}
	void UDisplayClusterBlueprintAPIImpl::StaticRegisterNativesUDisplayClusterBlueprintAPIImpl()
	{
		UClass* Class = UDisplayClusterBlueprintAPIImpl::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddClusterEventListener", &UDisplayClusterBlueprintAPIImpl::execAddClusterEventListener },
			{ "EmitClusterEventBinary", &UDisplayClusterBlueprintAPIImpl::execEmitClusterEventBinary },
			{ "EmitClusterEventJson", &UDisplayClusterBlueprintAPIImpl::execEmitClusterEventJson },
			{ "GetActiveNodeIds", &UDisplayClusterBlueprintAPIImpl::execGetActiveNodeIds },
			{ "GetActiveNodesAmount", &UDisplayClusterBlueprintAPIImpl::execGetActiveNodesAmount },
			{ "GetClusterRole", &UDisplayClusterBlueprintAPIImpl::execGetClusterRole },
			{ "GetNodeId", &UDisplayClusterBlueprintAPIImpl::execGetNodeId },
			{ "GetOperationMode", &UDisplayClusterBlueprintAPIImpl::execGetOperationMode },
			{ "GetRootActor", &UDisplayClusterBlueprintAPIImpl::execGetRootActor },
			{ "IsBackup", &UDisplayClusterBlueprintAPIImpl::execIsBackup },
			{ "IsModuleInitialized", &UDisplayClusterBlueprintAPIImpl::execIsModuleInitialized },
			{ "IsPrimary", &UDisplayClusterBlueprintAPIImpl::execIsPrimary },
			{ "IsSecondary", &UDisplayClusterBlueprintAPIImpl::execIsSecondary },
			{ "RemoveClusterEventListener", &UDisplayClusterBlueprintAPIImpl::execRemoveClusterEventListener },
			{ "SendClusterEventBinaryTo", &UDisplayClusterBlueprintAPIImpl::execSendClusterEventBinaryTo },
			{ "SendClusterEventJsonTo", &UDisplayClusterBlueprintAPIImpl::execSendClusterEventJsonTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_AddClusterEventListener_Statics
	{
		struct DisplayClusterBlueprintAPIImpl_eventAddClusterEventListener_Parms
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
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_AddClusterEventListener_Statics::NewProp_Listener = { "Listener", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPIImpl_eventAddClusterEventListener_Parms, Listener), Z_Construct_UClass_UDisplayClusterClusterEventListener_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_AddClusterEventListener_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_AddClusterEventListener_Statics::NewProp_Listener,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_AddClusterEventListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "Comment", "// Cluster events API\n" },
		{ "DisplayName", "Add cluster event listener" },
		{ "ModuleRelativePath", "Private/Blueprints/DisplayClusterBlueprintAPIImpl.h" },
		{ "ToolTip", "Cluster events API" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_AddClusterEventListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl, nullptr, "AddClusterEventListener", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_AddClusterEventListener_Statics::DisplayClusterBlueprintAPIImpl_eventAddClusterEventListener_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_AddClusterEventListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_AddClusterEventListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_AddClusterEventListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_AddClusterEventListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_AddClusterEventListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_AddClusterEventListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventBinary_Statics
	{
		struct DisplayClusterBlueprintAPIImpl_eventEmitClusterEventBinary_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventBinary_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventBinary_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPIImpl_eventEmitClusterEventBinary_Parms, Event), Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventBinary_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventBinary_Statics::NewProp_Event_MetaData)) }; // 1904386298
	void Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventBinary_Statics::NewProp_bPrimaryOnly_SetBit(void* Obj)
	{
		((DisplayClusterBlueprintAPIImpl_eventEmitClusterEventBinary_Parms*)Obj)->bPrimaryOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventBinary_Statics::NewProp_bPrimaryOnly = { "bPrimaryOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterBlueprintAPIImpl_eventEmitClusterEventBinary_Parms), &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventBinary_Statics::NewProp_bPrimaryOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventBinary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventBinary_Statics::NewProp_Event,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventBinary_Statics::NewProp_bPrimaryOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventBinary_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "DisplayName", "Emit binary cluster event" },
		{ "ModuleRelativePath", "Private/Blueprints/DisplayClusterBlueprintAPIImpl.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventBinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl, nullptr, "EmitClusterEventBinary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventBinary_Statics::DisplayClusterBlueprintAPIImpl_eventEmitClusterEventBinary_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventBinary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventBinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventBinary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventBinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventBinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventBinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventJson_Statics
	{
		struct DisplayClusterBlueprintAPIImpl_eventEmitClusterEventJson_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventJson_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventJson_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPIImpl_eventEmitClusterEventJson_Parms, Event), Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventJson_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventJson_Statics::NewProp_Event_MetaData)) }; // 62572603
	void Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventJson_Statics::NewProp_bPrimaryOnly_SetBit(void* Obj)
	{
		((DisplayClusterBlueprintAPIImpl_eventEmitClusterEventJson_Parms*)Obj)->bPrimaryOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventJson_Statics::NewProp_bPrimaryOnly = { "bPrimaryOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterBlueprintAPIImpl_eventEmitClusterEventJson_Parms), &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventJson_Statics::NewProp_bPrimaryOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventJson_Statics::NewProp_Event,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventJson_Statics::NewProp_bPrimaryOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "DisplayName", "Emit JSON cluster event" },
		{ "ModuleRelativePath", "Private/Blueprints/DisplayClusterBlueprintAPIImpl.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl, nullptr, "EmitClusterEventJson", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventJson_Statics::DisplayClusterBlueprintAPIImpl_eventEmitClusterEventJson_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodeIds_Statics
	{
		struct DisplayClusterBlueprintAPIImpl_eventGetActiveNodeIds_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodeIds_Statics::NewProp_OutNodeIds_Inner = { "OutNodeIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodeIds_Statics::NewProp_OutNodeIds = { "OutNodeIds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPIImpl_eventGetActiveNodeIds_Parms, OutNodeIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodeIds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodeIds_Statics::NewProp_OutNodeIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodeIds_Statics::NewProp_OutNodeIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodeIds_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "Comment", "/** Returns List of the active nodes in the runtime cluster node in a cluster. */" },
		{ "DisplayName", "Get cluster node IDs" },
		{ "ModuleRelativePath", "Private/Blueprints/DisplayClusterBlueprintAPIImpl.h" },
		{ "ToolTip", "Returns List of the active nodes in the runtime cluster node in a cluster." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodeIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl, nullptr, "GetActiveNodeIds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodeIds_Statics::DisplayClusterBlueprintAPIImpl_eventGetActiveNodeIds_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodeIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodeIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodeIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodeIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodeIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodeIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodesAmount_Statics
	{
		struct DisplayClusterBlueprintAPIImpl_eventGetActiveNodesAmount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodesAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPIImpl_eventGetActiveNodesAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodesAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodesAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodesAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "Comment", "/** Returns amount of active nodes in a cluster. */" },
		{ "DisplayName", "Get nodes amount" },
		{ "ModuleRelativePath", "Private/Blueprints/DisplayClusterBlueprintAPIImpl.h" },
		{ "ToolTip", "Returns amount of active nodes in a cluster." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodesAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl, nullptr, "GetActiveNodesAmount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodesAmount_Statics::DisplayClusterBlueprintAPIImpl_eventGetActiveNodesAmount_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodesAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodesAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodesAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodesAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodesAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodesAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetClusterRole_Statics
	{
		struct DisplayClusterBlueprintAPIImpl_eventGetClusterRole_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetClusterRole_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetClusterRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPIImpl_eventGetClusterRole_Parms, ReturnValue), Z_Construct_UEnum_DisplayCluster_EDisplayClusterNodeRole, METADATA_PARAMS(nullptr, 0) }; // 1884238287
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetClusterRole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetClusterRole_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetClusterRole_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetClusterRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "DisplayName", "Get cluster role" },
		{ "ModuleRelativePath", "Private/Blueprints/DisplayClusterBlueprintAPIImpl.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetClusterRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl, nullptr, "GetClusterRole", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetClusterRole_Statics::DisplayClusterBlueprintAPIImpl_eventGetClusterRole_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetClusterRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetClusterRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetClusterRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetClusterRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetClusterRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetClusterRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetNodeId_Statics
	{
		struct DisplayClusterBlueprintAPIImpl_eventGetNodeId_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetNodeId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPIImpl_eventGetNodeId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetNodeId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetNodeId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetNodeId_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "Comment", "// Runtime local node API\n" },
		{ "DisplayName", "Get node ID" },
		{ "ModuleRelativePath", "Private/Blueprints/DisplayClusterBlueprintAPIImpl.h" },
		{ "ToolTip", "Runtime local node API" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetNodeId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl, nullptr, "GetNodeId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetNodeId_Statics::DisplayClusterBlueprintAPIImpl_eventGetNodeId_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetNodeId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetNodeId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetNodeId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetNodeId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetNodeId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetNodeId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetOperationMode_Statics
	{
		struct DisplayClusterBlueprintAPIImpl_eventGetOperationMode_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetOperationMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetOperationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPIImpl_eventGetOperationMode_Parms, ReturnValue), Z_Construct_UEnum_DisplayCluster_EDisplayClusterOperationMode, METADATA_PARAMS(nullptr, 0) }; // 506207516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetOperationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetOperationMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetOperationMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetOperationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Runtime Cluster API\n" },
		{ "DisplayName", "Get operation mode" },
		{ "ModuleRelativePath", "Private/Blueprints/DisplayClusterBlueprintAPIImpl.h" },
		{ "ToolTip", "Runtime Cluster API" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetOperationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl, nullptr, "GetOperationMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetOperationMode_Statics::DisplayClusterBlueprintAPIImpl_eventGetOperationMode_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetOperationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetOperationMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetOperationMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetOperationMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetOperationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetOperationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetRootActor_Statics
	{
		struct DisplayClusterBlueprintAPIImpl_eventGetRootActor_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetRootActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPIImpl_eventGetRootActor_Parms, ReturnValue), Z_Construct_UClass_ADisplayClusterRootActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetRootActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetRootActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetRootActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Game" },
		{ "DisplayName", "Get root actor" },
		{ "ModuleRelativePath", "Private/Blueprints/DisplayClusterBlueprintAPIImpl.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetRootActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl, nullptr, "GetRootActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetRootActor_Statics::DisplayClusterBlueprintAPIImpl_eventGetRootActor_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetRootActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetRootActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetRootActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetRootActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetRootActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetRootActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsBackup_Statics
	{
		struct DisplayClusterBlueprintAPIImpl_eventIsBackup_Parms
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
	void Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsBackup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DisplayClusterBlueprintAPIImpl_eventIsBackup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsBackup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterBlueprintAPIImpl_eventIsBackup_Parms), &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsBackup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsBackup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsBackup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsBackup_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "Comment", "/** Returns true if current node is a backup node in a cluster. */" },
		{ "DisplayName", "Is backup node" },
		{ "ModuleRelativePath", "Private/Blueprints/DisplayClusterBlueprintAPIImpl.h" },
		{ "ToolTip", "Returns true if current node is a backup node in a cluster." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsBackup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl, nullptr, "IsBackup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsBackup_Statics::DisplayClusterBlueprintAPIImpl_eventIsBackup_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsBackup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsBackup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsBackup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsBackup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsBackup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsBackup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsModuleInitialized_Statics
	{
		struct DisplayClusterBlueprintAPIImpl_eventIsModuleInitialized_Parms
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
	void Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsModuleInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DisplayClusterBlueprintAPIImpl_eventIsModuleInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsModuleInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterBlueprintAPIImpl_eventIsModuleInitialized_Parms), &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsModuleInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsModuleInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsModuleInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsModuleInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// DisplayCluster module API\n" },
		{ "DisplayName", "Is module initialized" },
		{ "ModuleRelativePath", "Private/Blueprints/DisplayClusterBlueprintAPIImpl.h" },
		{ "ToolTip", "DisplayCluster module API" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsModuleInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl, nullptr, "IsModuleInitialized", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsModuleInitialized_Statics::DisplayClusterBlueprintAPIImpl_eventIsModuleInitialized_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsModuleInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsModuleInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsModuleInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsModuleInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsModuleInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsModuleInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsPrimary_Statics
	{
		struct DisplayClusterBlueprintAPIImpl_eventIsPrimary_Parms
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
	void Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsPrimary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DisplayClusterBlueprintAPIImpl_eventIsPrimary_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsPrimary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterBlueprintAPIImpl_eventIsPrimary_Parms), &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsPrimary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsPrimary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsPrimary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsPrimary_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "DisplayName", "Is a primary node" },
		{ "ModuleRelativePath", "Private/Blueprints/DisplayClusterBlueprintAPIImpl.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsPrimary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl, nullptr, "IsPrimary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsPrimary_Statics::DisplayClusterBlueprintAPIImpl_eventIsPrimary_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsPrimary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsPrimary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsPrimary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsPrimary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsPrimary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsPrimary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsSecondary_Statics
	{
		struct DisplayClusterBlueprintAPIImpl_eventIsSecondary_Parms
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
	void Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsSecondary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DisplayClusterBlueprintAPIImpl_eventIsSecondary_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsSecondary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterBlueprintAPIImpl_eventIsSecondary_Parms), &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsSecondary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsSecondary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsSecondary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsSecondary_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "DisplayName", "Is a secondary node" },
		{ "ModuleRelativePath", "Private/Blueprints/DisplayClusterBlueprintAPIImpl.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsSecondary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl, nullptr, "IsSecondary", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsSecondary_Statics::DisplayClusterBlueprintAPIImpl_eventIsSecondary_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsSecondary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsSecondary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsSecondary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsSecondary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsSecondary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsSecondary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_RemoveClusterEventListener_Statics
	{
		struct DisplayClusterBlueprintAPIImpl_eventRemoveClusterEventListener_Parms
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
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_RemoveClusterEventListener_Statics::NewProp_Listener = { "Listener", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPIImpl_eventRemoveClusterEventListener_Parms, Listener), Z_Construct_UClass_UDisplayClusterClusterEventListener_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_RemoveClusterEventListener_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_RemoveClusterEventListener_Statics::NewProp_Listener,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_RemoveClusterEventListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "DisplayName", "Remove cluster event listener" },
		{ "ModuleRelativePath", "Private/Blueprints/DisplayClusterBlueprintAPIImpl.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_RemoveClusterEventListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl, nullptr, "RemoveClusterEventListener", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_RemoveClusterEventListener_Statics::DisplayClusterBlueprintAPIImpl_eventRemoveClusterEventListener_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_RemoveClusterEventListener_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_RemoveClusterEventListener_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_RemoveClusterEventListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_RemoveClusterEventListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_RemoveClusterEventListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_RemoveClusterEventListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics
	{
		struct DisplayClusterBlueprintAPIImpl_eventSendClusterEventBinaryTo_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPIImpl_eventSendClusterEventBinaryTo_Parms, Address), METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::NewProp_Address_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::NewProp_Port_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPIImpl_eventSendClusterEventBinaryTo_Parms, Port), METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPIImpl_eventSendClusterEventBinaryTo_Parms, Event), Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::NewProp_Event_MetaData)) }; // 1904386298
	void Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::NewProp_bPrimaryOnly_SetBit(void* Obj)
	{
		((DisplayClusterBlueprintAPIImpl_eventSendClusterEventBinaryTo_Parms*)Obj)->bPrimaryOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::NewProp_bPrimaryOnly = { "bPrimaryOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterBlueprintAPIImpl_eventSendClusterEventBinaryTo_Parms), &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::NewProp_bPrimaryOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::NewProp_Event,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::NewProp_bPrimaryOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "DisplayName", "Emit binary cluster event" },
		{ "ModuleRelativePath", "Private/Blueprints/DisplayClusterBlueprintAPIImpl.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl, nullptr, "SendClusterEventBinaryTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::DisplayClusterBlueprintAPIImpl_eventSendClusterEventBinaryTo_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics
	{
		struct DisplayClusterBlueprintAPIImpl_eventSendClusterEventJsonTo_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPIImpl_eventSendClusterEventJsonTo_Parms, Address), METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::NewProp_Address_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::NewProp_Port_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPIImpl_eventSendClusterEventJsonTo_Parms, Port), METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintAPIImpl_eventSendClusterEventJsonTo_Parms, Event), Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::NewProp_Event_MetaData)) }; // 62572603
	void Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::NewProp_bPrimaryOnly_SetBit(void* Obj)
	{
		((DisplayClusterBlueprintAPIImpl_eventSendClusterEventJsonTo_Parms*)Obj)->bPrimaryOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::NewProp_bPrimaryOnly = { "bPrimaryOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterBlueprintAPIImpl_eventSendClusterEventJsonTo_Parms), &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::NewProp_bPrimaryOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::NewProp_Event,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::NewProp_bPrimaryOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Cluster" },
		{ "DisplayName", "Emit JSON cluster event" },
		{ "ModuleRelativePath", "Private/Blueprints/DisplayClusterBlueprintAPIImpl.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl, nullptr, "SendClusterEventJsonTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::DisplayClusterBlueprintAPIImpl_eventSendClusterEventJsonTo_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterBlueprintAPIImpl);
	UClass* Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl_NoRegister()
	{
		return UDisplayClusterBlueprintAPIImpl::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_AddClusterEventListener, "AddClusterEventListener" }, // 3252686547
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventBinary, "EmitClusterEventBinary" }, // 1848016653
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_EmitClusterEventJson, "EmitClusterEventJson" }, // 4165506939
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodeIds, "GetActiveNodeIds" }, // 3843004351
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetActiveNodesAmount, "GetActiveNodesAmount" }, // 2843707532
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetClusterRole, "GetClusterRole" }, // 2817485849
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetNodeId, "GetNodeId" }, // 962727542
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetOperationMode, "GetOperationMode" }, // 1470171295
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_GetRootActor, "GetRootActor" }, // 422632076
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsBackup, "IsBackup" }, // 3799093716
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsModuleInitialized, "IsModuleInitialized" }, // 122387013
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsPrimary, "IsPrimary" }, // 4048013380
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_IsSecondary, "IsSecondary" }, // 4194667281
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_RemoveClusterEventListener, "RemoveClusterEventListener" }, // 4201378076
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventBinaryTo, "SendClusterEventBinaryTo" }, // 1758194202
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintAPIImpl_SendClusterEventJsonTo, "SendClusterEventJsonTo" }, // 3365815297
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint API interface implementation\n */" },
		{ "IncludePath", "Blueprints/DisplayClusterBlueprintAPIImpl.h" },
		{ "ModuleRelativePath", "Private/Blueprints/DisplayClusterBlueprintAPIImpl.h" },
		{ "ToolTip", "Blueprint API interface implementation" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDisplayClusterBlueprintAPI_NoRegister, (int32)VTABLE_OFFSET(UDisplayClusterBlueprintAPIImpl, IDisplayClusterBlueprintAPI), false },  // 2735426146
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterBlueprintAPIImpl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl_Statics::ClassParams = {
		&UDisplayClusterBlueprintAPIImpl::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterBlueprintAPIImpl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterBlueprintAPIImpl.OuterSingleton, Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterBlueprintAPIImpl.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterBlueprintAPIImpl>()
	{
		return UDisplayClusterBlueprintAPIImpl::StaticClass();
	}
	UDisplayClusterBlueprintAPIImpl::UDisplayClusterBlueprintAPIImpl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterBlueprintAPIImpl);
	UDisplayClusterBlueprintAPIImpl::~UDisplayClusterBlueprintAPIImpl() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl, UDisplayClusterBlueprintAPIImpl::StaticClass, TEXT("UDisplayClusterBlueprintAPIImpl"), &Z_Registration_Info_UClass_UDisplayClusterBlueprintAPIImpl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterBlueprintAPIImpl), 3713659556U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_604726836(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
