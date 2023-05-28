// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PixelStreamingDelegates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePixelStreamingDelegates() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PIXELSTREAMING_API UClass* Z_Construct_UClass_UPixelStreamingDelegates();
	PIXELSTREAMING_API UClass* Z_Construct_UClass_UPixelStreamingDelegates_NoRegister();
	PIXELSTREAMING_API UFunction* Z_Construct_UDelegateFunction_UPixelStreamingDelegates_AllConnectionsClosed__DelegateSignature();
	PIXELSTREAMING_API UFunction* Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature();
	PIXELSTREAMING_API UFunction* Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ConnectedToSignallingServer__DelegateSignature();
	PIXELSTREAMING_API UFunction* Z_Construct_UDelegateFunction_UPixelStreamingDelegates_DisconnectedFromSignallingServer__DelegateSignature();
	PIXELSTREAMING_API UFunction* Z_Construct_UDelegateFunction_UPixelStreamingDelegates_FallbackToSoftwareEncodering__DelegateSignature();
	PIXELSTREAMING_API UFunction* Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature();
	PIXELSTREAMING_API UFunction* Z_Construct_UDelegateFunction_UPixelStreamingDelegates_StatsChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PixelStreaming();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ConnectedToSignallingServer__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ConnectedToSignallingServer__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * A connection to the signalling server was made.\n\x09 */// BP Delegate\n" },
		{ "ModuleRelativePath", "Public/PixelStreamingDelegates.h" },
		{ "ToolTip", "A connection to the signalling server was made.\n        // BP Delegate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ConnectedToSignallingServer__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingDelegates, nullptr, "ConnectedToSignallingServer__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ConnectedToSignallingServer__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ConnectedToSignallingServer__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ConnectedToSignallingServer__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ConnectedToSignallingServer__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPixelStreamingDelegates::FConnectedToSignallingServer_DelegateWrapper(const FMulticastScriptDelegate& ConnectedToSignallingServer)
{
	ConnectedToSignallingServer.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UPixelStreamingDelegates_DisconnectedFromSignallingServer__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPixelStreamingDelegates_DisconnectedFromSignallingServer__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * A connection to the signalling server was lost.\n\x09 */// BP Delegate\n" },
		{ "ModuleRelativePath", "Public/PixelStreamingDelegates.h" },
		{ "ToolTip", "A connection to the signalling server was lost.\n        // BP Delegate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPixelStreamingDelegates_DisconnectedFromSignallingServer__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingDelegates, nullptr, "DisconnectedFromSignallingServer__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPixelStreamingDelegates_DisconnectedFromSignallingServer__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPixelStreamingDelegates_DisconnectedFromSignallingServer__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPixelStreamingDelegates_DisconnectedFromSignallingServer__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPixelStreamingDelegates_DisconnectedFromSignallingServer__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPixelStreamingDelegates::FDisconnectedFromSignallingServer_DelegateWrapper(const FMulticastScriptDelegate& DisconnectedFromSignallingServer)
{
	DisconnectedFromSignallingServer.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature_Statics
	{
		struct PixelStreamingDelegates_eventNewConnection_Parms
		{
			FString StreamerId;
			FString PlayerId;
			bool QualityController;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamerId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerId;
		static void NewProp_QualityController_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_QualityController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature_Statics::NewProp_StreamerId = { "StreamerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingDelegates_eventNewConnection_Parms, StreamerId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingDelegates_eventNewConnection_Parms, PlayerId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature_Statics::NewProp_QualityController_SetBit(void* Obj)
	{
		((PixelStreamingDelegates_eventNewConnection_Parms*)Obj)->QualityController = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature_Statics::NewProp_QualityController = { "QualityController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PixelStreamingDelegates_eventNewConnection_Parms), &Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature_Statics::NewProp_QualityController_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature_Statics::NewProp_StreamerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature_Statics::NewProp_QualityController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * A new connection has been made to the session.\n\x09 */// BP Delegate\n" },
		{ "ModuleRelativePath", "Public/PixelStreamingDelegates.h" },
		{ "ToolTip", "A new connection has been made to the session.\n        // BP Delegate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingDelegates, nullptr, "NewConnection__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature_Statics::PixelStreamingDelegates_eventNewConnection_Parms), Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPixelStreamingDelegates::FNewConnection_DelegateWrapper(const FMulticastScriptDelegate& NewConnection, const FString& StreamerId, const FString& PlayerId, bool QualityController)
{
	struct PixelStreamingDelegates_eventNewConnection_Parms
	{
		FString StreamerId;
		FString PlayerId;
		bool QualityController;
	};
	PixelStreamingDelegates_eventNewConnection_Parms Parms;
	Parms.StreamerId=StreamerId;
	Parms.PlayerId=PlayerId;
	Parms.QualityController=QualityController ? true : false;
	NewConnection.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature_Statics
	{
		struct PixelStreamingDelegates_eventClosedConnection_Parms
		{
			FString StreamerId;
			FString PlayerId;
			bool WasQualityController;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamerId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerId;
		static void NewProp_WasQualityController_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WasQualityController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature_Statics::NewProp_StreamerId = { "StreamerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingDelegates_eventClosedConnection_Parms, StreamerId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingDelegates_eventClosedConnection_Parms, PlayerId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature_Statics::NewProp_WasQualityController_SetBit(void* Obj)
	{
		((PixelStreamingDelegates_eventClosedConnection_Parms*)Obj)->WasQualityController = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature_Statics::NewProp_WasQualityController = { "WasQualityController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PixelStreamingDelegates_eventClosedConnection_Parms), &Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature_Statics::NewProp_WasQualityController_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature_Statics::NewProp_StreamerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature_Statics::NewProp_WasQualityController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * A connection to a player was lost.\n\x09 */// BP Delegate\n" },
		{ "ModuleRelativePath", "Public/PixelStreamingDelegates.h" },
		{ "ToolTip", "A connection to a player was lost.\n        // BP Delegate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingDelegates, nullptr, "ClosedConnection__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature_Statics::PixelStreamingDelegates_eventClosedConnection_Parms), Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPixelStreamingDelegates::FClosedConnection_DelegateWrapper(const FMulticastScriptDelegate& ClosedConnection, const FString& StreamerId, const FString& PlayerId, bool WasQualityController)
{
	struct PixelStreamingDelegates_eventClosedConnection_Parms
	{
		FString StreamerId;
		FString PlayerId;
		bool WasQualityController;
	};
	PixelStreamingDelegates_eventClosedConnection_Parms Parms;
	Parms.StreamerId=StreamerId;
	Parms.PlayerId=PlayerId;
	Parms.WasQualityController=WasQualityController ? true : false;
	ClosedConnection.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPixelStreamingDelegates_AllConnectionsClosed__DelegateSignature_Statics
	{
		struct PixelStreamingDelegates_eventAllConnectionsClosed_Parms
		{
			FString StreamerId;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamerId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UPixelStreamingDelegates_AllConnectionsClosed__DelegateSignature_Statics::NewProp_StreamerId = { "StreamerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingDelegates_eventAllConnectionsClosed_Parms, StreamerId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPixelStreamingDelegates_AllConnectionsClosed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPixelStreamingDelegates_AllConnectionsClosed__DelegateSignature_Statics::NewProp_StreamerId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPixelStreamingDelegates_AllConnectionsClosed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * All connections have closed and nobody is viewing or interacting with\n\x09 * the app. This is an opportunity to reset the app.\n\x09 */// BP Delegate\n" },
		{ "ModuleRelativePath", "Public/PixelStreamingDelegates.h" },
		{ "ToolTip", "All connections have closed and nobody is viewing or interacting with\nthe app. This is an opportunity to reset the app.\n        // BP Delegate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPixelStreamingDelegates_AllConnectionsClosed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingDelegates, nullptr, "AllConnectionsClosed__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPixelStreamingDelegates_AllConnectionsClosed__DelegateSignature_Statics::PixelStreamingDelegates_eventAllConnectionsClosed_Parms), Z_Construct_UDelegateFunction_UPixelStreamingDelegates_AllConnectionsClosed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPixelStreamingDelegates_AllConnectionsClosed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPixelStreamingDelegates_AllConnectionsClosed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPixelStreamingDelegates_AllConnectionsClosed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPixelStreamingDelegates_AllConnectionsClosed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPixelStreamingDelegates_AllConnectionsClosed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPixelStreamingDelegates::FAllConnectionsClosed_DelegateWrapper(const FMulticastScriptDelegate& AllConnectionsClosed, const FString& StreamerId)
{
	struct PixelStreamingDelegates_eventAllConnectionsClosed_Parms
	{
		FString StreamerId;
	};
	PixelStreamingDelegates_eventAllConnectionsClosed_Parms Parms;
	Parms.StreamerId=StreamerId;
	AllConnectionsClosed.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPixelStreamingDelegates_StatsChanged__DelegateSignature_Statics
	{
		struct PixelStreamingDelegates_eventStatsChanged_Parms
		{
			FString PlayerId;
			FName StatName;
			float StatValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerId;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StatName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StatValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UPixelStreamingDelegates_StatsChanged__DelegateSignature_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingDelegates_eventStatsChanged_Parms, PlayerId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UPixelStreamingDelegates_StatsChanged__DelegateSignature_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingDelegates_eventStatsChanged_Parms, StatName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UPixelStreamingDelegates_StatsChanged__DelegateSignature_Statics::NewProp_StatValue = { "StatValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingDelegates_eventStatsChanged_Parms, StatValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPixelStreamingDelegates_StatsChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPixelStreamingDelegates_StatsChanged__DelegateSignature_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPixelStreamingDelegates_StatsChanged__DelegateSignature_Statics::NewProp_StatName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPixelStreamingDelegates_StatsChanged__DelegateSignature_Statics::NewProp_StatValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPixelStreamingDelegates_StatsChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * A pixel streaming stat has changed\n\x09 */// BP Delegate\n" },
		{ "ModuleRelativePath", "Public/PixelStreamingDelegates.h" },
		{ "ToolTip", "A pixel streaming stat has changed\n        // BP Delegate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPixelStreamingDelegates_StatsChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingDelegates, nullptr, "StatsChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPixelStreamingDelegates_StatsChanged__DelegateSignature_Statics::PixelStreamingDelegates_eventStatsChanged_Parms), Z_Construct_UDelegateFunction_UPixelStreamingDelegates_StatsChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPixelStreamingDelegates_StatsChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPixelStreamingDelegates_StatsChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPixelStreamingDelegates_StatsChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPixelStreamingDelegates_StatsChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPixelStreamingDelegates_StatsChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPixelStreamingDelegates::FStatsChanged_DelegateWrapper(const FMulticastScriptDelegate& StatsChanged, const FString& PlayerId, FName StatName, float StatValue)
{
	struct PixelStreamingDelegates_eventStatsChanged_Parms
	{
		FString PlayerId;
		FName StatName;
		float StatValue;
	};
	PixelStreamingDelegates_eventStatsChanged_Parms Parms;
	Parms.PlayerId=PlayerId;
	Parms.StatName=StatName;
	Parms.StatValue=StatValue;
	StatsChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UPixelStreamingDelegates_FallbackToSoftwareEncodering__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPixelStreamingDelegates_FallbackToSoftwareEncodering__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * The GPU ran out of available HW encoders and fell back to software encoders\n\x09 */// BP Delegate\n" },
		{ "ModuleRelativePath", "Public/PixelStreamingDelegates.h" },
		{ "ToolTip", "The GPU ran out of available HW encoders and fell back to software encoders\n        // BP Delegate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPixelStreamingDelegates_FallbackToSoftwareEncodering__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingDelegates, nullptr, "FallbackToSoftwareEncodering__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPixelStreamingDelegates_FallbackToSoftwareEncodering__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPixelStreamingDelegates_FallbackToSoftwareEncodering__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPixelStreamingDelegates_FallbackToSoftwareEncodering__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPixelStreamingDelegates_FallbackToSoftwareEncodering__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPixelStreamingDelegates::FFallbackToSoftwareEncodering_DelegateWrapper(const FMulticastScriptDelegate& FallbackToSoftwareEncodering)
{
	FallbackToSoftwareEncodering.ProcessMulticastDelegate<UObject>(NULL);
}
	void UPixelStreamingDelegates::StaticRegisterNativesUPixelStreamingDelegates()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPixelStreamingDelegates);
	UClass* Z_Construct_UClass_UPixelStreamingDelegates_NoRegister()
	{
		return UPixelStreamingDelegates::StaticClass();
	}
	struct Z_Construct_UClass_UPixelStreamingDelegates_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConnectedToSignallingServer_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnectedToSignallingServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDisconnectedFromSignallingServer_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDisconnectedFromSignallingServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNewConnection_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewConnection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnClosedConnection_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClosedConnection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAllConnectionsClosed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAllConnectionsClosed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStatChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStatChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFallbackToSoftwareEncodering_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFallbackToSoftwareEncodering;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPixelStreamingDelegates_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PixelStreaming,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UPixelStreamingDelegates_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UPixelStreamingDelegates_AllConnectionsClosed__DelegateSignature, "AllConnectionsClosed__DelegateSignature" }, // 361928363
		{ &Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature, "ClosedConnection__DelegateSignature" }, // 3736500303
		{ &Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ConnectedToSignallingServer__DelegateSignature, "ConnectedToSignallingServer__DelegateSignature" }, // 1313120689
		{ &Z_Construct_UDelegateFunction_UPixelStreamingDelegates_DisconnectedFromSignallingServer__DelegateSignature, "DisconnectedFromSignallingServer__DelegateSignature" }, // 2853529040
		{ &Z_Construct_UDelegateFunction_UPixelStreamingDelegates_FallbackToSoftwareEncodering__DelegateSignature, "FallbackToSoftwareEncodering__DelegateSignature" }, // 568909992
		{ &Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature, "NewConnection__DelegateSignature" }, // 103812468
		{ &Z_Construct_UDelegateFunction_UPixelStreamingDelegates_StatsChanged__DelegateSignature, "StatsChanged__DelegateSignature" }, // 4191161142
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingDelegates_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PixelStreamingDelegates.h" },
		{ "ModuleRelativePath", "Public/PixelStreamingDelegates.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnConnectedToSignallingServer_MetaData[] = {
		{ "Category", "Pixel Streaming Delegates" },
		{ "ModuleRelativePath", "Public/PixelStreamingDelegates.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnConnectedToSignallingServer = { "OnConnectedToSignallingServer", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelStreamingDelegates, OnConnectedToSignallingServer), Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ConnectedToSignallingServer__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnConnectedToSignallingServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnConnectedToSignallingServer_MetaData)) }; // 1313120689
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnDisconnectedFromSignallingServer_MetaData[] = {
		{ "Category", "Pixel Streaming Delegates" },
		{ "ModuleRelativePath", "Public/PixelStreamingDelegates.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnDisconnectedFromSignallingServer = { "OnDisconnectedFromSignallingServer", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelStreamingDelegates, OnDisconnectedFromSignallingServer), Z_Construct_UDelegateFunction_UPixelStreamingDelegates_DisconnectedFromSignallingServer__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnDisconnectedFromSignallingServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnDisconnectedFromSignallingServer_MetaData)) }; // 2853529040
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnNewConnection_MetaData[] = {
		{ "Category", "Pixel Streaming Delegates" },
		{ "ModuleRelativePath", "Public/PixelStreamingDelegates.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnNewConnection = { "OnNewConnection", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelStreamingDelegates, OnNewConnection), Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnNewConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnNewConnection_MetaData)) }; // 103812468
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnClosedConnection_MetaData[] = {
		{ "Category", "Pixel Streaming Delegates" },
		{ "ModuleRelativePath", "Public/PixelStreamingDelegates.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnClosedConnection = { "OnClosedConnection", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelStreamingDelegates, OnClosedConnection), Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnClosedConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnClosedConnection_MetaData)) }; // 3736500303
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnAllConnectionsClosed_MetaData[] = {
		{ "Category", "Pixel Streaming Delegates" },
		{ "ModuleRelativePath", "Public/PixelStreamingDelegates.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnAllConnectionsClosed = { "OnAllConnectionsClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelStreamingDelegates, OnAllConnectionsClosed), Z_Construct_UDelegateFunction_UPixelStreamingDelegates_AllConnectionsClosed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnAllConnectionsClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnAllConnectionsClosed_MetaData)) }; // 361928363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnStatChanged_MetaData[] = {
		{ "Category", "Pixel Streaming Delegates" },
		{ "ModuleRelativePath", "Public/PixelStreamingDelegates.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnStatChanged = { "OnStatChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelStreamingDelegates, OnStatChanged), Z_Construct_UDelegateFunction_UPixelStreamingDelegates_StatsChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnStatChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnStatChanged_MetaData)) }; // 4191161142
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnFallbackToSoftwareEncodering_MetaData[] = {
		{ "Category", "Pixel Streaming Delegates" },
		{ "ModuleRelativePath", "Public/PixelStreamingDelegates.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnFallbackToSoftwareEncodering = { "OnFallbackToSoftwareEncodering", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelStreamingDelegates, OnFallbackToSoftwareEncodering), Z_Construct_UDelegateFunction_UPixelStreamingDelegates_FallbackToSoftwareEncodering__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnFallbackToSoftwareEncodering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnFallbackToSoftwareEncodering_MetaData)) }; // 568909992
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPixelStreamingDelegates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnConnectedToSignallingServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnDisconnectedFromSignallingServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnNewConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnClosedConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnAllConnectionsClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnStatChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingDelegates_Statics::NewProp_OnFallbackToSoftwareEncodering,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPixelStreamingDelegates_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPixelStreamingDelegates>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPixelStreamingDelegates_Statics::ClassParams = {
		&UPixelStreamingDelegates::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UPixelStreamingDelegates_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingDelegates_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingDelegates_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingDelegates_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPixelStreamingDelegates()
	{
		if (!Z_Registration_Info_UClass_UPixelStreamingDelegates.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPixelStreamingDelegates.OuterSingleton, Z_Construct_UClass_UPixelStreamingDelegates_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPixelStreamingDelegates.OuterSingleton;
	}
	template<> PIXELSTREAMING_API UClass* StaticClass<UPixelStreamingDelegates>()
	{
		return UPixelStreamingDelegates::StaticClass();
	}
	UPixelStreamingDelegates::UPixelStreamingDelegates(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPixelStreamingDelegates);
	UPixelStreamingDelegates::~UPixelStreamingDelegates() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPixelStreamingDelegates, UPixelStreamingDelegates::StaticClass, TEXT("UPixelStreamingDelegates"), &Z_Registration_Info_UClass_UPixelStreamingDelegates, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPixelStreamingDelegates), 1884818254U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_1918896081(TEXT("/Script/PixelStreaming"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
