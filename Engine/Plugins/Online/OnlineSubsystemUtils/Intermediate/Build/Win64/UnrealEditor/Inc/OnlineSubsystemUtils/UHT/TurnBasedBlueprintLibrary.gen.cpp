// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnBasedBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UTurnBasedBlueprintLibrary();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UTurnBasedBlueprintLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	DEFINE_FUNCTION(UTurnBasedBlueprintLibrary::execGetPlayerDisplayName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchID);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PlayerDisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTurnBasedBlueprintLibrary::GetPlayerDisplayName(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MatchID,Z_Param_PlayerIndex,Z_Param_Out_PlayerDisplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTurnBasedBlueprintLibrary::execRegisterTurnBasedMatchInterfaceObject)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTurnBasedBlueprintLibrary::RegisterTurnBasedMatchInterfaceObject(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTurnBasedBlueprintLibrary::execGetMyPlayerIndex)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTurnBasedBlueprintLibrary::GetMyPlayerIndex(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MatchID,Z_Param_Out_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTurnBasedBlueprintLibrary::execGetIsMyTurn)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchID);
		P_GET_UBOOL_REF(Z_Param_Out_bIsMyTurn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTurnBasedBlueprintLibrary::GetIsMyTurn(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MatchID,Z_Param_Out_bIsMyTurn);
		P_NATIVE_END;
	}
	void UTurnBasedBlueprintLibrary::StaticRegisterNativesUTurnBasedBlueprintLibrary()
	{
		UClass* Class = UTurnBasedBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsMyTurn", &UTurnBasedBlueprintLibrary::execGetIsMyTurn },
			{ "GetMyPlayerIndex", &UTurnBasedBlueprintLibrary::execGetMyPlayerIndex },
			{ "GetPlayerDisplayName", &UTurnBasedBlueprintLibrary::execGetPlayerDisplayName },
			{ "RegisterTurnBasedMatchInterfaceObject", &UTurnBasedBlueprintLibrary::execRegisterTurnBasedMatchInterfaceObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn_Statics
	{
		struct TurnBasedBlueprintLibrary_eventGetIsMyTurn_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			FString MatchID;
			bool bIsMyTurn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MatchID;
		static void NewProp_bIsMyTurn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMyTurn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TurnBasedBlueprintLibrary_eventGetIsMyTurn_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TurnBasedBlueprintLibrary_eventGetIsMyTurn_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn_Statics::NewProp_MatchID = { "MatchID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TurnBasedBlueprintLibrary_eventGetIsMyTurn_Parms, MatchID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn_Statics::NewProp_bIsMyTurn_SetBit(void* Obj)
	{
		((TurnBasedBlueprintLibrary_eventGetIsMyTurn_Parms*)Obj)->bIsMyTurn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn_Statics::NewProp_bIsMyTurn = { "bIsMyTurn", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TurnBasedBlueprintLibrary_eventGetIsMyTurn_Parms), &Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn_Statics::NewProp_bIsMyTurn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn_Statics::NewProp_MatchID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn_Statics::NewProp_bIsMyTurn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|TurnBased" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Classes/TurnBasedBlueprintLibrary.h" },
		{ "ToolTip", "out" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTurnBasedBlueprintLibrary, nullptr, "GetIsMyTurn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn_Statics::TurnBasedBlueprintLibrary_eventGetIsMyTurn_Parms), Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Statics
	{
		struct TurnBasedBlueprintLibrary_eventGetMyPlayerIndex_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			FString MatchID;
			int32 PlayerIndex;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MatchID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TurnBasedBlueprintLibrary_eventGetMyPlayerIndex_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TurnBasedBlueprintLibrary_eventGetMyPlayerIndex_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Statics::NewProp_MatchID = { "MatchID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TurnBasedBlueprintLibrary_eventGetMyPlayerIndex_Parms, MatchID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TurnBasedBlueprintLibrary_eventGetMyPlayerIndex_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Statics::NewProp_MatchID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|TurnBased" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Classes/TurnBasedBlueprintLibrary.h" },
		{ "ToolTip", "out" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTurnBasedBlueprintLibrary, nullptr, "GetMyPlayerIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Statics::TurnBasedBlueprintLibrary_eventGetMyPlayerIndex_Parms), Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Statics
	{
		struct TurnBasedBlueprintLibrary_eventGetPlayerDisplayName_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			FString MatchID;
			int32 PlayerIndex;
			FString PlayerDisplayName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MatchID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerDisplayName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TurnBasedBlueprintLibrary_eventGetPlayerDisplayName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TurnBasedBlueprintLibrary_eventGetPlayerDisplayName_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Statics::NewProp_MatchID = { "MatchID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TurnBasedBlueprintLibrary_eventGetPlayerDisplayName_Parms, MatchID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TurnBasedBlueprintLibrary_eventGetPlayerDisplayName_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Statics::NewProp_PlayerDisplayName = { "PlayerDisplayName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TurnBasedBlueprintLibrary_eventGetPlayerDisplayName_Parms, PlayerDisplayName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Statics::NewProp_MatchID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Statics::NewProp_PlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Statics::NewProp_PlayerDisplayName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|TurnBased" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Classes/TurnBasedBlueprintLibrary.h" },
		{ "ToolTip", "out" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTurnBasedBlueprintLibrary, nullptr, "GetPlayerDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Statics::TurnBasedBlueprintLibrary_eventGetPlayerDisplayName_Parms), Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Statics
	{
		struct TurnBasedBlueprintLibrary_eventRegisterTurnBasedMatchInterfaceObject_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			UObject* Object;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TurnBasedBlueprintLibrary_eventRegisterTurnBasedMatchInterfaceObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TurnBasedBlueprintLibrary_eventRegisterTurnBasedMatchInterfaceObject_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TurnBasedBlueprintLibrary_eventRegisterTurnBasedMatchInterfaceObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|TurnBased" },
		{ "ModuleRelativePath", "Classes/TurnBasedBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTurnBasedBlueprintLibrary, nullptr, "RegisterTurnBasedMatchInterfaceObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Statics::TurnBasedBlueprintLibrary_eventRegisterTurnBasedMatchInterfaceObject_Parms), Z_Construct_UFunction_UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTurnBasedBlueprintLibrary);
	UClass* Z_Construct_UClass_UTurnBasedBlueprintLibrary_NoRegister()
	{
		return UTurnBasedBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTurnBasedBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTurnBasedBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTurnBasedBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn, "GetIsMyTurn" }, // 3353174819
		{ &Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex, "GetMyPlayerIndex" }, // 2854918379
		{ &Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName, "GetPlayerDisplayName" }, // 1462110746
		{ &Z_Construct_UFunction_UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject, "RegisterTurnBasedMatchInterfaceObject" }, // 2523279131
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurnBasedBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Library of synchronous achievement calls\n" },
		{ "IncludePath", "TurnBasedBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Classes/TurnBasedBlueprintLibrary.h" },
		{ "ScriptName", "TurnBasedLibrary" },
		{ "ToolTip", "Library of synchronous achievement calls" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTurnBasedBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurnBasedBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurnBasedBlueprintLibrary_Statics::ClassParams = {
		&UTurnBasedBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTurnBasedBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTurnBasedBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTurnBasedBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UTurnBasedBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTurnBasedBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UTurnBasedBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTurnBasedBlueprintLibrary.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UTurnBasedBlueprintLibrary>()
	{
		return UTurnBasedBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTurnBasedBlueprintLibrary);
	UTurnBasedBlueprintLibrary::~UTurnBasedBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTurnBasedBlueprintLibrary, UTurnBasedBlueprintLibrary::StaticClass, TEXT("UTurnBasedBlueprintLibrary"), &Z_Registration_Info_UClass_UTurnBasedBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurnBasedBlueprintLibrary), 2172509544U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_160367288(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
