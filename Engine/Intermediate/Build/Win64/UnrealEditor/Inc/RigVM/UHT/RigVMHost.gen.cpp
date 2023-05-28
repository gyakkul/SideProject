// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMHost.h"
#include "RigVMCore/RigVMDrawContainer.h"
#include "RigVMCore/RigVMExecuteContext.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMHost() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
	RIGVM_API UClass* Z_Construct_UClass_URigVM_NoRegister();
	RIGVM_API UClass* Z_Construct_UClass_URigVMHost();
	RIGVM_API UClass* Z_Construct_UClass_URigVMHost_NoRegister();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDrawContainer();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMRuntimeSettings();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	DEFINE_FUNCTION(URigVMHost::execGetVM)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVM**)Z_Param__Result=P_THIS->GetVM();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMHost::execRemoveRunOnceEvent)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InEventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveRunOnceEvent(Z_Param_Out_InEventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMHost::execRequestRunOnceEvent)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InEventName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InEventIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestRunOnceEvent(Z_Param_Out_InEventName,Z_Param_InEventIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMHost::execRequestInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestInit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMHost::execExecuteEvent)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InEventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExecuteEvent(Z_Param_Out_InEventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMHost::execGetSupportedEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetSupportedEvents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMHost::execSupportsEvent)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InEventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SupportsEvent(Z_Param_Out_InEventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMHost::execExecute)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InEventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Execute(Z_Param_Out_InEventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMHost::execSetVariableFromString)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InVariableName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetVariableFromString(Z_Param_Out_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMHost::execGetVariableAsString)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InVariableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetVariableAsString(Z_Param_Out_InVariableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMHost::execGetVariableType)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InVariableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetVariableType(Z_Param_Out_InVariableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMHost::execGetScriptAccessibleVariables)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetScriptAccessibleVariables();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMHost::execCanExecute)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanExecute();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMHost::execGetCurrentFramesPerSecond)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentFramesPerSecond();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMHost::execSetFramesPerSecond)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFramesPerSecond);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFramesPerSecond(Z_Param_InFramesPerSecond);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMHost::execSetAbsoluteAndDeltaTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InAbsoluteTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAbsoluteAndDeltaTime(Z_Param_InAbsoluteTime,Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMHost::execSetAbsoluteTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InAbsoluteTime);
		P_GET_UBOOL(Z_Param_InSetDeltaTimeZero);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAbsoluteTime(Z_Param_InAbsoluteTime,Z_Param_InSetDeltaTimeZero);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMHost::execSetDeltaTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDeltaTime(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMHost::execGetDeltaTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDeltaTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMHost::execGetAbsoluteTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAbsoluteTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMHost::execFindRigVMHosts)
	{
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_GET_OBJECT(UClass,Z_Param_OptionalClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URigVMHost*>*)Z_Param__Result=URigVMHost::FindRigVMHosts(Z_Param_Outer,Z_Param_OptionalClass);
		P_NATIVE_END;
	}
	void URigVMHost::StaticRegisterNativesURigVMHost()
	{
		UClass* Class = URigVMHost::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanExecute", &URigVMHost::execCanExecute },
			{ "Execute", &URigVMHost::execExecute },
			{ "ExecuteEvent", &URigVMHost::execExecuteEvent },
			{ "FindRigVMHosts", &URigVMHost::execFindRigVMHosts },
			{ "GetAbsoluteTime", &URigVMHost::execGetAbsoluteTime },
			{ "GetCurrentFramesPerSecond", &URigVMHost::execGetCurrentFramesPerSecond },
			{ "GetDeltaTime", &URigVMHost::execGetDeltaTime },
			{ "GetScriptAccessibleVariables", &URigVMHost::execGetScriptAccessibleVariables },
			{ "GetSupportedEvents", &URigVMHost::execGetSupportedEvents },
			{ "GetVariableAsString", &URigVMHost::execGetVariableAsString },
			{ "GetVariableType", &URigVMHost::execGetVariableType },
			{ "GetVM", &URigVMHost::execGetVM },
			{ "RemoveRunOnceEvent", &URigVMHost::execRemoveRunOnceEvent },
			{ "RequestInit", &URigVMHost::execRequestInit },
			{ "RequestRunOnceEvent", &URigVMHost::execRequestRunOnceEvent },
			{ "SetAbsoluteAndDeltaTime", &URigVMHost::execSetAbsoluteAndDeltaTime },
			{ "SetAbsoluteTime", &URigVMHost::execSetAbsoluteTime },
			{ "SetDeltaTime", &URigVMHost::execSetDeltaTime },
			{ "SetFramesPerSecond", &URigVMHost::execSetFramesPerSecond },
			{ "SetVariableFromString", &URigVMHost::execSetVariableFromString },
			{ "SupportsEvent", &URigVMHost::execSupportsEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URigVMHost_CanExecute_Statics
	{
		struct RigVMHost_eventCanExecute_Parms
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
	void Z_Construct_UFunction_URigVMHost_CanExecute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMHost_eventCanExecute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMHost_CanExecute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMHost_eventCanExecute_Parms), &Z_Construct_UFunction_URigVMHost_CanExecute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_CanExecute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_CanExecute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_CanExecute_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Is valid for execution */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Is valid for execution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_CanExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "CanExecute", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMHost_CanExecute_Statics::RigVMHost_eventCanExecute_Parms), Z_Construct_UFunction_URigVMHost_CanExecute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_CanExecute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_CanExecute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_CanExecute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMHost_CanExecute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_CanExecute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMHost_Execute_Statics
	{
		struct RigVMHost_eventExecute_Parms
		{
			FName InEventName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InEventName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_Execute_Statics::NewProp_InEventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMHost_Execute_Statics::NewProp_InEventName = { "InEventName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventExecute_Parms, InEventName), METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_Execute_Statics::NewProp_InEventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_Execute_Statics::NewProp_InEventName_MetaData)) };
	void Z_Construct_UFunction_URigVMHost_Execute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMHost_eventExecute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMHost_Execute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMHost_eventExecute_Parms), &Z_Construct_UFunction_URigVMHost_Execute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_Execute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_Execute_Statics::NewProp_InEventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_Execute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Execute */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Execute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "Execute", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMHost_Execute_Statics::RigVMHost_eventExecute_Parms), Z_Construct_UFunction_URigVMHost_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMHost_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics
	{
		struct RigVMHost_eventExecuteEvent_Parms
		{
			FName InEventName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InEventName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::NewProp_InEventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::NewProp_InEventName = { "InEventName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventExecuteEvent_Parms, InEventName), METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::NewProp_InEventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::NewProp_InEventName_MetaData)) };
	void Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMHost_eventExecuteEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMHost_eventExecuteEvent_Parms), &Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::NewProp_InEventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Execute a user defined event */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Execute a user defined event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "ExecuteEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::RigVMHost_eventExecuteEvent_Parms), Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMHost_ExecuteEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics
	{
		struct RigVMHost_eventFindRigVMHosts_Parms
		{
			UObject* Outer;
			TSubclassOf<URigVMHost>  OptionalClass;
			TArray<URigVMHost*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OptionalClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventFindRigVMHosts_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::NewProp_OptionalClass = { "OptionalClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventFindRigVMHosts_Parms, OptionalClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URigVMHost_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMHost_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventFindRigVMHosts_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::NewProp_Outer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::NewProp_OptionalClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "FindRigVMHosts", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::RigVMHost_eventFindRigVMHosts_Parms), Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMHost_FindRigVMHosts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics
	{
		struct RigVMHost_eventGetAbsoluteTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventGetAbsoluteTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Gets the current absolute time */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Gets the current absolute time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "GetAbsoluteTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::RigVMHost_eventGetAbsoluteTime_Parms), Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMHost_GetAbsoluteTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics
	{
		struct RigVMHost_eventGetCurrentFramesPerSecond_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventGetCurrentFramesPerSecond_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Returns the current frames per second (this may change over time) */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Returns the current frames per second (this may change over time)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "GetCurrentFramesPerSecond", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::RigVMHost_eventGetCurrentFramesPerSecond_Parms), Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics
	{
		struct RigVMHost_eventGetDeltaTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventGetDeltaTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Gets the current delta time */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Gets the current delta time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "GetDeltaTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::RigVMHost_eventGetDeltaTime_Parms), Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMHost_GetDeltaTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics
	{
		struct RigVMHost_eventGetScriptAccessibleVariables_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventGetScriptAccessibleVariables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Returns the names of variables accessible in scripting */" },
		{ "DisplayName", "Get Variables" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Returns the names of variables accessible in scripting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "GetScriptAccessibleVariables", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::RigVMHost_eventGetScriptAccessibleVariables_Parms), Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics
	{
		struct RigVMHost_eventGetSupportedEvents_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventGetSupportedEvents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "GetSupportedEvents", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::RigVMHost_eventGetSupportedEvents_Parms), Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMHost_GetSupportedEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics
	{
		struct RigVMHost_eventGetVariableAsString_Parms
		{
			FName InVariableName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventGetVariableAsString_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::NewProp_InVariableName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventGetVariableAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Returns the value of a given variable as a string */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Returns the value of a given variable as a string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "GetVariableAsString", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::RigVMHost_eventGetVariableAsString_Parms), Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMHost_GetVariableAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMHost_GetVariableType_Statics
	{
		struct RigVMHost_eventGetVariableType_Parms
		{
			FName InVariableName;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventGetVariableType_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::NewProp_InVariableName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventGetVariableType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Returns the type of a given variable */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Returns the type of a given variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "GetVariableType", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::RigVMHost_eventGetVariableType_Parms), Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMHost_GetVariableType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMHost_GetVM_Statics
	{
		struct RigVMHost_eventGetVM_Parms
		{
			URigVM* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMHost_GetVM_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventGetVM_Parms, ReturnValue), Z_Construct_UClass_URigVM_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_GetVM_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetVM_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_GetVM_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_GetVM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "GetVM", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMHost_GetVM_Statics::RigVMHost_eventGetVM_Parms), Z_Construct_UFunction_URigVMHost_GetVM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetVM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_GetVM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetVM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMHost_GetVM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_GetVM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics
	{
		struct RigVMHost_eventRemoveRunOnceEvent_Parms
		{
			FName InEventName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InEventName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::NewProp_InEventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::NewProp_InEventName = { "InEventName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventRemoveRunOnceEvent_Parms, InEventName), METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::NewProp_InEventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::NewProp_InEventName_MetaData)) };
	void Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMHost_eventRemoveRunOnceEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMHost_eventRemoveRunOnceEvent_Parms), &Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::NewProp_InEventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Removes an event running once */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Removes an event running once" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "RemoveRunOnceEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::RigVMHost_eventRemoveRunOnceEvent_Parms), Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMHost_RequestInit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_RequestInit_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Requests to perform an init during the next execution */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Requests to perform an init during the next execution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_RequestInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "RequestInit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_RequestInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_RequestInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMHost_RequestInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_RequestInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics
	{
		struct RigVMHost_eventRequestRunOnceEvent_Parms
		{
			FName InEventName;
			int32 InEventIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InEventName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InEventIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::NewProp_InEventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::NewProp_InEventName = { "InEventName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventRequestRunOnceEvent_Parms, InEventName), METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::NewProp_InEventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::NewProp_InEventName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::NewProp_InEventIndex = { "InEventIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventRequestRunOnceEvent_Parms, InEventIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::NewProp_InEventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::NewProp_InEventIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Requests to run an event once */" },
		{ "CPP_Default_InEventIndex", "-1" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Requests to run an event once" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "RequestRunOnceEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::RigVMHost_eventRequestRunOnceEvent_Parms), Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics
	{
		struct RigVMHost_eventSetAbsoluteAndDeltaTime_Parms
		{
			float InAbsoluteTime;
			float InDeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InAbsoluteTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::NewProp_InAbsoluteTime = { "InAbsoluteTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventSetAbsoluteAndDeltaTime_Parms, InAbsoluteTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventSetAbsoluteAndDeltaTime_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::NewProp_InAbsoluteTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Set the current absolute and delta times */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Set the current absolute and delta times" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "SetAbsoluteAndDeltaTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::RigVMHost_eventSetAbsoluteAndDeltaTime_Parms), Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics
	{
		struct RigVMHost_eventSetAbsoluteTime_Parms
		{
			float InAbsoluteTime;
			bool InSetDeltaTimeZero;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InAbsoluteTime;
		static void NewProp_InSetDeltaTimeZero_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InSetDeltaTimeZero;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::NewProp_InAbsoluteTime = { "InAbsoluteTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventSetAbsoluteTime_Parms, InAbsoluteTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::NewProp_InSetDeltaTimeZero_SetBit(void* Obj)
	{
		((RigVMHost_eventSetAbsoluteTime_Parms*)Obj)->InSetDeltaTimeZero = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::NewProp_InSetDeltaTimeZero = { "InSetDeltaTimeZero", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMHost_eventSetAbsoluteTime_Parms), &Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::NewProp_InSetDeltaTimeZero_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::NewProp_InAbsoluteTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::NewProp_InSetDeltaTimeZero,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Set the current absolute time */" },
		{ "CPP_Default_InSetDeltaTimeZero", "false" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Set the current absolute time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "SetAbsoluteTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::RigVMHost_eventSetAbsoluteTime_Parms), Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMHost_SetAbsoluteTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics
	{
		struct RigVMHost_eventSetDeltaTime_Parms
		{
			float InDeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventSetDeltaTime_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Set the current delta time */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Set the current delta time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "SetDeltaTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::RigVMHost_eventSetDeltaTime_Parms), Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMHost_SetDeltaTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics
	{
		struct RigVMHost_eventSetFramesPerSecond_Parms
		{
			float InFramesPerSecond;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFramesPerSecond;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::NewProp_InFramesPerSecond = { "InFramesPerSecond", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventSetFramesPerSecond_Parms, InFramesPerSecond), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::NewProp_InFramesPerSecond,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Set the current fps */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Set the current fps" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "SetFramesPerSecond", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::RigVMHost_eventSetFramesPerSecond_Parms), Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMHost_SetFramesPerSecond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics
	{
		struct RigVMHost_eventSetVariableFromString_Parms
		{
			FName InVariableName;
			FString InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventSetVariableFromString_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::NewProp_InVariableName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventSetVariableFromString_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::NewProp_InValue_MetaData)) };
	void Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMHost_eventSetVariableFromString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMHost_eventSetVariableFromString_Parms), &Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Returns the value of a given variable as a string */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Returns the value of a given variable as a string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "SetVariableFromString", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::RigVMHost_eventSetVariableFromString_Parms), Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMHost_SetVariableFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics
	{
		struct RigVMHost_eventSupportsEvent_Parms
		{
			FName InEventName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InEventName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::NewProp_InEventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::NewProp_InEventName = { "InEventName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMHost_eventSupportsEvent_Parms, InEventName), METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::NewProp_InEventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::NewProp_InEventName_MetaData)) };
	void Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMHost_eventSupportsEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMHost_eventSupportsEvent_Parms), &Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::NewProp_InEventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "SupportsEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::RigVMHost_eventSupportsEvent_Parms), Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMHost_SupportsEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMHost);
	UClass* Z_Construct_UClass_URigVMHost_NoRegister()
	{
		return URigVMHost::StaticClass();
	}
	struct Z_Construct_UClass_URigVMHost_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VMRuntimeSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VMRuntimeSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VM_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrawContainer;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventQueue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventQueue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EventQueue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VMSnapshotBeforeExecution_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VMSnapshotBeforeExecution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInDebugMode_MetaData[];
#endif
		static void NewProp_bIsInDebugMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInDebugMode;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMHost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URigVMHost_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVMHost_CanExecute, "CanExecute" }, // 869693234
		{ &Z_Construct_UFunction_URigVMHost_Execute, "Execute" }, // 1196595295
		{ &Z_Construct_UFunction_URigVMHost_ExecuteEvent, "ExecuteEvent" }, // 4022728782
		{ &Z_Construct_UFunction_URigVMHost_FindRigVMHosts, "FindRigVMHosts" }, // 1875585752
		{ &Z_Construct_UFunction_URigVMHost_GetAbsoluteTime, "GetAbsoluteTime" }, // 1383317865
		{ &Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond, "GetCurrentFramesPerSecond" }, // 1868137391
		{ &Z_Construct_UFunction_URigVMHost_GetDeltaTime, "GetDeltaTime" }, // 3770322930
		{ &Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables, "GetScriptAccessibleVariables" }, // 722687412
		{ &Z_Construct_UFunction_URigVMHost_GetSupportedEvents, "GetSupportedEvents" }, // 3645852195
		{ &Z_Construct_UFunction_URigVMHost_GetVariableAsString, "GetVariableAsString" }, // 2478585332
		{ &Z_Construct_UFunction_URigVMHost_GetVariableType, "GetVariableType" }, // 2762921734
		{ &Z_Construct_UFunction_URigVMHost_GetVM, "GetVM" }, // 2172266509
		{ &Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent, "RemoveRunOnceEvent" }, // 735184489
		{ &Z_Construct_UFunction_URigVMHost_RequestInit, "RequestInit" }, // 795728279
		{ &Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent, "RequestRunOnceEvent" }, // 309668661
		{ &Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime, "SetAbsoluteAndDeltaTime" }, // 3050921825
		{ &Z_Construct_UFunction_URigVMHost_SetAbsoluteTime, "SetAbsoluteTime" }, // 3802190818
		{ &Z_Construct_UFunction_URigVMHost_SetDeltaTime, "SetDeltaTime" }, // 782801158
		{ &Z_Construct_UFunction_URigVMHost_SetFramesPerSecond, "SetFramesPerSecond" }, // 492661305
		{ &Z_Construct_UFunction_URigVMHost_SetVariableFromString, "SetVariableFromString" }, // 1330728359
		{ &Z_Construct_UFunction_URigVMHost_SupportsEvent, "SupportsEvent" }, // 1208548200
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMHost_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// set this to something larger than 0 to profile N runs\n" },
		{ "IncludePath", "RigVMHost.h" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "set this to something larger than 0 to profile N runs" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMHost_Statics::NewProp_VMRuntimeSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_VMRuntimeSettings = { "VMRuntimeSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMHost, VMRuntimeSettings), Z_Construct_UScriptStruct_FRigVMRuntimeSettings, METADATA_PARAMS(Z_Construct_UClass_URigVMHost_Statics::NewProp_VMRuntimeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMHost_Statics::NewProp_VMRuntimeSettings_MetaData)) }; // 2495750411
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMHost_Statics::NewProp_VM_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_VM = { "VM", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMHost, VM), Z_Construct_UClass_URigVM_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URigVMHost_Statics::NewProp_VM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMHost_Statics::NewProp_VM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMHost_Statics::NewProp_DrawContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_DrawContainer = { "DrawContainer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMHost, DrawContainer), Z_Construct_UScriptStruct_FRigVMDrawContainer, METADATA_PARAMS(Z_Construct_UClass_URigVMHost_Statics::NewProp_DrawContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMHost_Statics::NewProp_DrawContainer_MetaData)) }; // 1476167880
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_EventQueue_Inner = { "EventQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMHost_Statics::NewProp_EventQueue_MetaData[] = {
		{ "Comment", "/** The event name used during an update */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "The event name used during an update" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_EventQueue = { "EventQueue", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMHost, EventQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URigVMHost_Statics::NewProp_EventQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMHost_Statics::NewProp_EventQueue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMHost_Statics::NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URigVMHost_Statics::NewProp_AssetUserData_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMHost_Statics::NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMHost_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x00240c8000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMHost, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URigVMHost_Statics::NewProp_AssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMHost_Statics::NewProp_AssetUserData_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMHost_Statics::NewProp_VMSnapshotBeforeExecution_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_VMSnapshotBeforeExecution = { "VMSnapshotBeforeExecution", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMHost, VMSnapshotBeforeExecution), Z_Construct_UClass_URigVM_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URigVMHost_Statics::NewProp_VMSnapshotBeforeExecution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMHost_Statics::NewProp_VMSnapshotBeforeExecution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMHost_Statics::NewProp_bIsInDebugMode_MetaData[] = {
		{ "Comment", "/** The current execution mode */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "The current execution mode" },
	};
#endif
	void Z_Construct_UClass_URigVMHost_Statics::NewProp_bIsInDebugMode_SetBit(void* Obj)
	{
		((URigVMHost*)Obj)->bIsInDebugMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_bIsInDebugMode = { "bIsInDebugMode", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URigVMHost), &Z_Construct_UClass_URigVMHost_Statics::NewProp_bIsInDebugMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_URigVMHost_Statics::NewProp_bIsInDebugMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMHost_Statics::NewProp_bIsInDebugMode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMHost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_VMRuntimeSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_VM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_DrawContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_EventQueue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_EventQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_AssetUserData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_AssetUserData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_VMSnapshotBeforeExecution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_bIsInDebugMode,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URigVMHost_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(URigVMHost, IInterface_AssetUserData), false },  // 1283872964
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMHost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMHost>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMHost_Statics::ClassParams = {
		&URigVMHost::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URigVMHost_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMHost_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMHost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMHost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMHost()
	{
		if (!Z_Registration_Info_UClass_URigVMHost.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMHost.OuterSingleton, Z_Construct_UClass_URigVMHost_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMHost.OuterSingleton;
	}
	template<> RIGVM_API UClass* StaticClass<URigVMHost>()
	{
		return URigVMHost::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMHost);
	URigVMHost::~URigVMHost() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URigVMHost)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMHost_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMHost_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMHost, URigVMHost::StaticClass, TEXT("URigVMHost"), &Z_Registration_Info_UClass_URigVMHost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMHost), 3437202040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMHost_h_1260125644(TEXT("/Script/RigVM"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMHost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMHost_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
