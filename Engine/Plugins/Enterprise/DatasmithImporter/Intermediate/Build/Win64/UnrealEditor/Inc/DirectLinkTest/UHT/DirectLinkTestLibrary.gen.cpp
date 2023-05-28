// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DirectLinkTestLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectLinkTestLibrary() {}
// Cross Module References
	DIRECTLINKTEST_API UClass* Z_Construct_UClass_UDirectLinkTestLibrary();
	DIRECTLINKTEST_API UClass* Z_Construct_UClass_UDirectLinkTestLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DirectLinkTest();
// End Cross Module References
	DEFINE_FUNCTION(UDirectLinkTestLibrary::execDeleteAllEndpoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDirectLinkTestLibrary::DeleteAllEndpoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectLinkTestLibrary::execAddPublicDestination)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EndpointId);
		P_GET_PROPERTY(FStrProperty,Z_Param_DestName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDirectLinkTestLibrary::AddPublicDestination(Z_Param_EndpointId,Z_Param_DestName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectLinkTestLibrary::execAddPublicSource)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EndpointId);
		P_GET_PROPERTY(FStrProperty,Z_Param_SourceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDirectLinkTestLibrary::AddPublicSource(Z_Param_EndpointId,Z_Param_SourceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectLinkTestLibrary::execDeleteEndpoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EndpointId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDirectLinkTestLibrary::DeleteEndpoint(Z_Param_EndpointId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectLinkTestLibrary::execMakeEndpoint)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NiceName);
		P_GET_UBOOL(Z_Param_bVerbose);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UDirectLinkTestLibrary::MakeEndpoint(Z_Param_NiceName,Z_Param_bVerbose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectLinkTestLibrary::execDumpReceivedScene)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDirectLinkTestLibrary::DumpReceivedScene();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectLinkTestLibrary::execSendScene)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDirectLinkTestLibrary::SendScene(Z_Param_InFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectLinkTestLibrary::execStopSender)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDirectLinkTestLibrary::StopSender();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectLinkTestLibrary::execSetupSender)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDirectLinkTestLibrary::SetupSender();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectLinkTestLibrary::execStartSender)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDirectLinkTestLibrary::StartSender();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectLinkTestLibrary::execStopReceiver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDirectLinkTestLibrary::StopReceiver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectLinkTestLibrary::execSetupReceiver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDirectLinkTestLibrary::SetupReceiver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectLinkTestLibrary::execStartReceiver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDirectLinkTestLibrary::StartReceiver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectLinkTestLibrary::execTestParameters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDirectLinkTestLibrary::TestParameters();
		P_NATIVE_END;
	}
	void UDirectLinkTestLibrary::StaticRegisterNativesUDirectLinkTestLibrary()
	{
		UClass* Class = UDirectLinkTestLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPublicDestination", &UDirectLinkTestLibrary::execAddPublicDestination },
			{ "AddPublicSource", &UDirectLinkTestLibrary::execAddPublicSource },
			{ "DeleteAllEndpoint", &UDirectLinkTestLibrary::execDeleteAllEndpoint },
			{ "DeleteEndpoint", &UDirectLinkTestLibrary::execDeleteEndpoint },
			{ "DumpReceivedScene", &UDirectLinkTestLibrary::execDumpReceivedScene },
			{ "MakeEndpoint", &UDirectLinkTestLibrary::execMakeEndpoint },
			{ "SendScene", &UDirectLinkTestLibrary::execSendScene },
			{ "SetupReceiver", &UDirectLinkTestLibrary::execSetupReceiver },
			{ "SetupSender", &UDirectLinkTestLibrary::execSetupSender },
			{ "StartReceiver", &UDirectLinkTestLibrary::execStartReceiver },
			{ "StartSender", &UDirectLinkTestLibrary::execStartSender },
			{ "StopReceiver", &UDirectLinkTestLibrary::execStopReceiver },
			{ "StopSender", &UDirectLinkTestLibrary::execStopSender },
			{ "TestParameters", &UDirectLinkTestLibrary::execTestParameters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicDestination_Statics
	{
		struct DirectLinkTestLibrary_eventAddPublicDestination_Parms
		{
			int32 EndpointId;
			FString DestName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndpointId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicDestination_Statics::NewProp_EndpointId = { "EndpointId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectLinkTestLibrary_eventAddPublicDestination_Parms, EndpointId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicDestination_Statics::NewProp_DestName = { "DestName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectLinkTestLibrary_eventAddPublicDestination_Parms, DestName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicDestination_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DirectLinkTestLibrary_eventAddPublicDestination_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicDestination_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DirectLinkTestLibrary_eventAddPublicDestination_Parms), &Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicDestination_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicDestination_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicDestination_Statics::NewProp_EndpointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicDestination_Statics::NewProp_DestName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicDestination_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicDestination_Statics::Function_MetaDataParams[] = {
		{ "Category", "DirectLink" },
		{ "ModuleRelativePath", "Public/DirectLinkTestLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectLinkTestLibrary, nullptr, "AddPublicDestination", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicDestination_Statics::DirectLinkTestLibrary_eventAddPublicDestination_Parms), Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicDestination_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicDestination_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicDestination_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicDestination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicDestination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicDestination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicSource_Statics
	{
		struct DirectLinkTestLibrary_eventAddPublicSource_Parms
		{
			int32 EndpointId;
			FString SourceName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndpointId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicSource_Statics::NewProp_EndpointId = { "EndpointId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectLinkTestLibrary_eventAddPublicSource_Parms, EndpointId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicSource_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectLinkTestLibrary_eventAddPublicSource_Parms, SourceName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DirectLinkTestLibrary_eventAddPublicSource_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DirectLinkTestLibrary_eventAddPublicSource_Parms), &Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicSource_Statics::NewProp_EndpointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicSource_Statics::NewProp_SourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "DirectLink" },
		{ "ModuleRelativePath", "Public/DirectLinkTestLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectLinkTestLibrary, nullptr, "AddPublicSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicSource_Statics::DirectLinkTestLibrary_eventAddPublicSource_Parms), Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteAllEndpoint_Statics
	{
		struct DirectLinkTestLibrary_eventDeleteAllEndpoint_Parms
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
	void Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteAllEndpoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DirectLinkTestLibrary_eventDeleteAllEndpoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteAllEndpoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DirectLinkTestLibrary_eventDeleteAllEndpoint_Parms), &Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteAllEndpoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteAllEndpoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteAllEndpoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteAllEndpoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "DirectLink" },
		{ "ModuleRelativePath", "Public/DirectLinkTestLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteAllEndpoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectLinkTestLibrary, nullptr, "DeleteAllEndpoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteAllEndpoint_Statics::DirectLinkTestLibrary_eventDeleteAllEndpoint_Parms), Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteAllEndpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteAllEndpoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteAllEndpoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteAllEndpoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteAllEndpoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteAllEndpoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteEndpoint_Statics
	{
		struct DirectLinkTestLibrary_eventDeleteEndpoint_Parms
		{
			int32 EndpointId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndpointId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteEndpoint_Statics::NewProp_EndpointId = { "EndpointId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectLinkTestLibrary_eventDeleteEndpoint_Parms, EndpointId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteEndpoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DirectLinkTestLibrary_eventDeleteEndpoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteEndpoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DirectLinkTestLibrary_eventDeleteEndpoint_Parms), &Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteEndpoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteEndpoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteEndpoint_Statics::NewProp_EndpointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteEndpoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteEndpoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "DirectLink" },
		{ "ModuleRelativePath", "Public/DirectLinkTestLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteEndpoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectLinkTestLibrary, nullptr, "DeleteEndpoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteEndpoint_Statics::DirectLinkTestLibrary_eventDeleteEndpoint_Parms), Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteEndpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteEndpoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteEndpoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteEndpoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteEndpoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteEndpoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectLinkTestLibrary_DumpReceivedScene_Statics
	{
		struct DirectLinkTestLibrary_eventDumpReceivedScene_Parms
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
	void Z_Construct_UFunction_UDirectLinkTestLibrary_DumpReceivedScene_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DirectLinkTestLibrary_eventDumpReceivedScene_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDirectLinkTestLibrary_DumpReceivedScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DirectLinkTestLibrary_eventDumpReceivedScene_Parms), &Z_Construct_UFunction_UDirectLinkTestLibrary_DumpReceivedScene_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectLinkTestLibrary_DumpReceivedScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkTestLibrary_DumpReceivedScene_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectLinkTestLibrary_DumpReceivedScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "DirectLink" },
		{ "ModuleRelativePath", "Public/DirectLinkTestLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectLinkTestLibrary_DumpReceivedScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectLinkTestLibrary, nullptr, "DumpReceivedScene", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectLinkTestLibrary_DumpReceivedScene_Statics::DirectLinkTestLibrary_eventDumpReceivedScene_Parms), Z_Construct_UFunction_UDirectLinkTestLibrary_DumpReceivedScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_DumpReceivedScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectLinkTestLibrary_DumpReceivedScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_DumpReceivedScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectLinkTestLibrary_DumpReceivedScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectLinkTestLibrary_DumpReceivedScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint_Statics
	{
		struct DirectLinkTestLibrary_eventMakeEndpoint_Parms
		{
			FString NiceName;
			bool bVerbose;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NiceName;
		static void NewProp_bVerbose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerbose;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint_Statics::NewProp_NiceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint_Statics::NewProp_NiceName = { "NiceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectLinkTestLibrary_eventMakeEndpoint_Parms, NiceName), METADATA_PARAMS(Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint_Statics::NewProp_NiceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint_Statics::NewProp_NiceName_MetaData)) };
	void Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint_Statics::NewProp_bVerbose_SetBit(void* Obj)
	{
		((DirectLinkTestLibrary_eventMakeEndpoint_Parms*)Obj)->bVerbose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint_Statics::NewProp_bVerbose = { "bVerbose", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DirectLinkTestLibrary_eventMakeEndpoint_Parms), &Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint_Statics::NewProp_bVerbose_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectLinkTestLibrary_eventMakeEndpoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint_Statics::NewProp_NiceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint_Statics::NewProp_bVerbose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "DirectLink" },
		{ "CPP_Default_bVerbose", "true" },
		{ "ModuleRelativePath", "Public/DirectLinkTestLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectLinkTestLibrary, nullptr, "MakeEndpoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint_Statics::DirectLinkTestLibrary_eventMakeEndpoint_Parms), Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectLinkTestLibrary_SendScene_Statics
	{
		struct DirectLinkTestLibrary_eventSendScene_Parms
		{
			FString InFilePath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectLinkTestLibrary_SendScene_Statics::NewProp_InFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDirectLinkTestLibrary_SendScene_Statics::NewProp_InFilePath = { "InFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectLinkTestLibrary_eventSendScene_Parms, InFilePath), METADATA_PARAMS(Z_Construct_UFunction_UDirectLinkTestLibrary_SendScene_Statics::NewProp_InFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_SendScene_Statics::NewProp_InFilePath_MetaData)) };
	void Z_Construct_UFunction_UDirectLinkTestLibrary_SendScene_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DirectLinkTestLibrary_eventSendScene_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDirectLinkTestLibrary_SendScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DirectLinkTestLibrary_eventSendScene_Parms), &Z_Construct_UFunction_UDirectLinkTestLibrary_SendScene_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectLinkTestLibrary_SendScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkTestLibrary_SendScene_Statics::NewProp_InFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkTestLibrary_SendScene_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectLinkTestLibrary_SendScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "DirectLink" },
		{ "ModuleRelativePath", "Public/DirectLinkTestLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectLinkTestLibrary_SendScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectLinkTestLibrary, nullptr, "SendScene", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectLinkTestLibrary_SendScene_Statics::DirectLinkTestLibrary_eventSendScene_Parms), Z_Construct_UFunction_UDirectLinkTestLibrary_SendScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_SendScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectLinkTestLibrary_SendScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_SendScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectLinkTestLibrary_SendScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectLinkTestLibrary_SendScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectLinkTestLibrary_SetupReceiver_Statics
	{
		struct DirectLinkTestLibrary_eventSetupReceiver_Parms
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
	void Z_Construct_UFunction_UDirectLinkTestLibrary_SetupReceiver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DirectLinkTestLibrary_eventSetupReceiver_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDirectLinkTestLibrary_SetupReceiver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DirectLinkTestLibrary_eventSetupReceiver_Parms), &Z_Construct_UFunction_UDirectLinkTestLibrary_SetupReceiver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectLinkTestLibrary_SetupReceiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkTestLibrary_SetupReceiver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectLinkTestLibrary_SetupReceiver_Statics::Function_MetaDataParams[] = {
		{ "Category", "DirectLink" },
		{ "ModuleRelativePath", "Public/DirectLinkTestLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectLinkTestLibrary_SetupReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectLinkTestLibrary, nullptr, "SetupReceiver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectLinkTestLibrary_SetupReceiver_Statics::DirectLinkTestLibrary_eventSetupReceiver_Parms), Z_Construct_UFunction_UDirectLinkTestLibrary_SetupReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_SetupReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectLinkTestLibrary_SetupReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_SetupReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectLinkTestLibrary_SetupReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectLinkTestLibrary_SetupReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectLinkTestLibrary_SetupSender_Statics
	{
		struct DirectLinkTestLibrary_eventSetupSender_Parms
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
	void Z_Construct_UFunction_UDirectLinkTestLibrary_SetupSender_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DirectLinkTestLibrary_eventSetupSender_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDirectLinkTestLibrary_SetupSender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DirectLinkTestLibrary_eventSetupSender_Parms), &Z_Construct_UFunction_UDirectLinkTestLibrary_SetupSender_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectLinkTestLibrary_SetupSender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkTestLibrary_SetupSender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectLinkTestLibrary_SetupSender_Statics::Function_MetaDataParams[] = {
		{ "Category", "DirectLink" },
		{ "ModuleRelativePath", "Public/DirectLinkTestLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectLinkTestLibrary_SetupSender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectLinkTestLibrary, nullptr, "SetupSender", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectLinkTestLibrary_SetupSender_Statics::DirectLinkTestLibrary_eventSetupSender_Parms), Z_Construct_UFunction_UDirectLinkTestLibrary_SetupSender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_SetupSender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectLinkTestLibrary_SetupSender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_SetupSender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectLinkTestLibrary_SetupSender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectLinkTestLibrary_SetupSender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectLinkTestLibrary_StartReceiver_Statics
	{
		struct DirectLinkTestLibrary_eventStartReceiver_Parms
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
	void Z_Construct_UFunction_UDirectLinkTestLibrary_StartReceiver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DirectLinkTestLibrary_eventStartReceiver_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDirectLinkTestLibrary_StartReceiver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DirectLinkTestLibrary_eventStartReceiver_Parms), &Z_Construct_UFunction_UDirectLinkTestLibrary_StartReceiver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectLinkTestLibrary_StartReceiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkTestLibrary_StartReceiver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectLinkTestLibrary_StartReceiver_Statics::Function_MetaDataParams[] = {
		{ "Category", "DirectLink" },
		{ "ModuleRelativePath", "Public/DirectLinkTestLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectLinkTestLibrary_StartReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectLinkTestLibrary, nullptr, "StartReceiver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectLinkTestLibrary_StartReceiver_Statics::DirectLinkTestLibrary_eventStartReceiver_Parms), Z_Construct_UFunction_UDirectLinkTestLibrary_StartReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_StartReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectLinkTestLibrary_StartReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_StartReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectLinkTestLibrary_StartReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectLinkTestLibrary_StartReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectLinkTestLibrary_StartSender_Statics
	{
		struct DirectLinkTestLibrary_eventStartSender_Parms
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
	void Z_Construct_UFunction_UDirectLinkTestLibrary_StartSender_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DirectLinkTestLibrary_eventStartSender_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDirectLinkTestLibrary_StartSender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DirectLinkTestLibrary_eventStartSender_Parms), &Z_Construct_UFunction_UDirectLinkTestLibrary_StartSender_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectLinkTestLibrary_StartSender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkTestLibrary_StartSender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectLinkTestLibrary_StartSender_Statics::Function_MetaDataParams[] = {
		{ "Category", "DirectLink" },
		{ "ModuleRelativePath", "Public/DirectLinkTestLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectLinkTestLibrary_StartSender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectLinkTestLibrary, nullptr, "StartSender", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectLinkTestLibrary_StartSender_Statics::DirectLinkTestLibrary_eventStartSender_Parms), Z_Construct_UFunction_UDirectLinkTestLibrary_StartSender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_StartSender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectLinkTestLibrary_StartSender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_StartSender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectLinkTestLibrary_StartSender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectLinkTestLibrary_StartSender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectLinkTestLibrary_StopReceiver_Statics
	{
		struct DirectLinkTestLibrary_eventStopReceiver_Parms
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
	void Z_Construct_UFunction_UDirectLinkTestLibrary_StopReceiver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DirectLinkTestLibrary_eventStopReceiver_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDirectLinkTestLibrary_StopReceiver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DirectLinkTestLibrary_eventStopReceiver_Parms), &Z_Construct_UFunction_UDirectLinkTestLibrary_StopReceiver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectLinkTestLibrary_StopReceiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkTestLibrary_StopReceiver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectLinkTestLibrary_StopReceiver_Statics::Function_MetaDataParams[] = {
		{ "Category", "DirectLink" },
		{ "ModuleRelativePath", "Public/DirectLinkTestLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectLinkTestLibrary_StopReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectLinkTestLibrary, nullptr, "StopReceiver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectLinkTestLibrary_StopReceiver_Statics::DirectLinkTestLibrary_eventStopReceiver_Parms), Z_Construct_UFunction_UDirectLinkTestLibrary_StopReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_StopReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectLinkTestLibrary_StopReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_StopReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectLinkTestLibrary_StopReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectLinkTestLibrary_StopReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectLinkTestLibrary_StopSender_Statics
	{
		struct DirectLinkTestLibrary_eventStopSender_Parms
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
	void Z_Construct_UFunction_UDirectLinkTestLibrary_StopSender_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DirectLinkTestLibrary_eventStopSender_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDirectLinkTestLibrary_StopSender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DirectLinkTestLibrary_eventStopSender_Parms), &Z_Construct_UFunction_UDirectLinkTestLibrary_StopSender_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectLinkTestLibrary_StopSender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkTestLibrary_StopSender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectLinkTestLibrary_StopSender_Statics::Function_MetaDataParams[] = {
		{ "Category", "DirectLink" },
		{ "ModuleRelativePath", "Public/DirectLinkTestLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectLinkTestLibrary_StopSender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectLinkTestLibrary, nullptr, "StopSender", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectLinkTestLibrary_StopSender_Statics::DirectLinkTestLibrary_eventStopSender_Parms), Z_Construct_UFunction_UDirectLinkTestLibrary_StopSender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_StopSender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectLinkTestLibrary_StopSender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_StopSender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectLinkTestLibrary_StopSender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectLinkTestLibrary_StopSender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectLinkTestLibrary_TestParameters_Statics
	{
		struct DirectLinkTestLibrary_eventTestParameters_Parms
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
	void Z_Construct_UFunction_UDirectLinkTestLibrary_TestParameters_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DirectLinkTestLibrary_eventTestParameters_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDirectLinkTestLibrary_TestParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DirectLinkTestLibrary_eventTestParameters_Parms), &Z_Construct_UFunction_UDirectLinkTestLibrary_TestParameters_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectLinkTestLibrary_TestParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkTestLibrary_TestParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectLinkTestLibrary_TestParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "DirectLink" },
		{ "ModuleRelativePath", "Public/DirectLinkTestLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectLinkTestLibrary_TestParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectLinkTestLibrary, nullptr, "TestParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectLinkTestLibrary_TestParameters_Statics::DirectLinkTestLibrary_eventTestParameters_Parms), Z_Construct_UFunction_UDirectLinkTestLibrary_TestParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_TestParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectLinkTestLibrary_TestParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkTestLibrary_TestParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectLinkTestLibrary_TestParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectLinkTestLibrary_TestParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDirectLinkTestLibrary);
	UClass* Z_Construct_UClass_UDirectLinkTestLibrary_NoRegister()
	{
		return UDirectLinkTestLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDirectLinkTestLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDirectLinkTestLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DirectLinkTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDirectLinkTestLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicDestination, "AddPublicDestination" }, // 2736257116
		{ &Z_Construct_UFunction_UDirectLinkTestLibrary_AddPublicSource, "AddPublicSource" }, // 3928298406
		{ &Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteAllEndpoint, "DeleteAllEndpoint" }, // 2750429052
		{ &Z_Construct_UFunction_UDirectLinkTestLibrary_DeleteEndpoint, "DeleteEndpoint" }, // 1677625988
		{ &Z_Construct_UFunction_UDirectLinkTestLibrary_DumpReceivedScene, "DumpReceivedScene" }, // 3252038952
		{ &Z_Construct_UFunction_UDirectLinkTestLibrary_MakeEndpoint, "MakeEndpoint" }, // 2482683743
		{ &Z_Construct_UFunction_UDirectLinkTestLibrary_SendScene, "SendScene" }, // 2267802206
		{ &Z_Construct_UFunction_UDirectLinkTestLibrary_SetupReceiver, "SetupReceiver" }, // 3666040836
		{ &Z_Construct_UFunction_UDirectLinkTestLibrary_SetupSender, "SetupSender" }, // 1406484884
		{ &Z_Construct_UFunction_UDirectLinkTestLibrary_StartReceiver, "StartReceiver" }, // 4280191398
		{ &Z_Construct_UFunction_UDirectLinkTestLibrary_StartSender, "StartSender" }, // 2716965507
		{ &Z_Construct_UFunction_UDirectLinkTestLibrary_StopReceiver, "StopReceiver" }, // 560201574
		{ &Z_Construct_UFunction_UDirectLinkTestLibrary_StopSender, "StopSender" }, // 1230063201
		{ &Z_Construct_UFunction_UDirectLinkTestLibrary_TestParameters, "TestParameters" }, // 2340032748
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectLinkTestLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DirectLinkTestLibrary.h" },
		{ "ModuleRelativePath", "Public/DirectLinkTestLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDirectLinkTestLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDirectLinkTestLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDirectLinkTestLibrary_Statics::ClassParams = {
		&UDirectLinkTestLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDirectLinkTestLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectLinkTestLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDirectLinkTestLibrary()
	{
		if (!Z_Registration_Info_UClass_UDirectLinkTestLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDirectLinkTestLibrary.OuterSingleton, Z_Construct_UClass_UDirectLinkTestLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDirectLinkTestLibrary.OuterSingleton;
	}
	template<> DIRECTLINKTEST_API UClass* StaticClass<UDirectLinkTestLibrary>()
	{
		return UDirectLinkTestLibrary::StaticClass();
	}
	UDirectLinkTestLibrary::UDirectLinkTestLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDirectLinkTestLibrary);
	UDirectLinkTestLibrary::~UDirectLinkTestLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkTest_Public_DirectLinkTestLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkTest_Public_DirectLinkTestLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDirectLinkTestLibrary, UDirectLinkTestLibrary::StaticClass, TEXT("UDirectLinkTestLibrary"), &Z_Registration_Info_UClass_UDirectLinkTestLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDirectLinkTestLibrary), 1046064861U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkTest_Public_DirectLinkTestLibrary_h_4135669106(TEXT("/Script/DirectLinkTest"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkTest_Public_DirectLinkTestLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkTest_Public_DirectLinkTestLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
