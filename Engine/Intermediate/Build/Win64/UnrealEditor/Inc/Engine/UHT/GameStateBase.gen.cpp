// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/GameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameStateBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASpectatorPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(AGameStateBase::execOnRep_ReplicatedWorldTimeSecondsDouble)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedWorldTimeSecondsDouble();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameStateBase::execOnRep_ReplicatedWorldTimeSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedWorldTimeSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameStateBase::execOnRep_ReplicatedHasBegunPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedHasBegunPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameStateBase::execOnRep_SpectatorClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SpectatorClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameStateBase::execOnRep_GameModeClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_GameModeClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameStateBase::execGetPlayerRespawnDelay)
	{
		P_GET_OBJECT(AController,Z_Param_Controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlayerRespawnDelay(Z_Param_Controller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameStateBase::execGetPlayerStartTime)
	{
		P_GET_OBJECT(AController,Z_Param_Controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlayerStartTime(Z_Param_Controller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameStateBase::execHasMatchEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMatchEnded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameStateBase::execHasMatchStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMatchStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameStateBase::execHasBegunPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasBegunPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameStateBase::execGetServerWorldTimeSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetServerWorldTimeSeconds();
		P_NATIVE_END;
	}
	void AGameStateBase::StaticRegisterNativesAGameStateBase()
	{
		UClass* Class = AGameStateBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerRespawnDelay", &AGameStateBase::execGetPlayerRespawnDelay },
			{ "GetPlayerStartTime", &AGameStateBase::execGetPlayerStartTime },
			{ "GetServerWorldTimeSeconds", &AGameStateBase::execGetServerWorldTimeSeconds },
			{ "HasBegunPlay", &AGameStateBase::execHasBegunPlay },
			{ "HasMatchEnded", &AGameStateBase::execHasMatchEnded },
			{ "HasMatchStarted", &AGameStateBase::execHasMatchStarted },
			{ "OnRep_GameModeClass", &AGameStateBase::execOnRep_GameModeClass },
			{ "OnRep_ReplicatedHasBegunPlay", &AGameStateBase::execOnRep_ReplicatedHasBegunPlay },
			{ "OnRep_ReplicatedWorldTimeSeconds", &AGameStateBase::execOnRep_ReplicatedWorldTimeSeconds },
			{ "OnRep_ReplicatedWorldTimeSecondsDouble", &AGameStateBase::execOnRep_ReplicatedWorldTimeSecondsDouble },
			{ "OnRep_SpectatorClass", &AGameStateBase::execOnRep_SpectatorClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics
	{
		struct GameStateBase_eventGetPlayerRespawnDelay_Parms
		{
			AController* Controller;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameStateBase_eventGetPlayerRespawnDelay_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameStateBase_eventGetPlayerRespawnDelay_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameState" },
		{ "Comment", "/** Returns how much time needs to be spent before a player can respawn */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Returns how much time needs to be spent before a player can respawn" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, nullptr, "GetPlayerRespawnDelay", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::GameStateBase_eventGetPlayerRespawnDelay_Parms), Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics
	{
		struct GameStateBase_eventGetPlayerStartTime_Parms
		{
			AController* Controller;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameStateBase_eventGetPlayerStartTime_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameStateBase_eventGetPlayerStartTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameState" },
		{ "Comment", "/** Returns the time that should be used as when a player started */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Returns the time that should be used as when a player started" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, nullptr, "GetPlayerStartTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::GameStateBase_eventGetPlayerStartTime_Parms), Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics
	{
		struct GameStateBase_eventGetServerWorldTimeSeconds_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameStateBase_eventGetServerWorldTimeSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameState" },
		{ "Comment", "/** Returns the simulated TimeSeconds on the server, will be synchronized on client and server */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Returns the simulated TimeSeconds on the server, will be synchronized on client and server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, nullptr, "GetServerWorldTimeSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics::GameStateBase_eventGetServerWorldTimeSeconds_Parms), Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics
	{
		struct GameStateBase_eventHasBegunPlay_Parms
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
	void Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameStateBase_eventHasBegunPlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameStateBase_eventHasBegunPlay_Parms), &Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameState" },
		{ "Comment", "/** Returns true if the world has started play (called BeginPlay on actors) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Returns true if the world has started play (called BeginPlay on actors)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, nullptr, "HasBegunPlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::GameStateBase_eventHasBegunPlay_Parms), Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameStateBase_HasBegunPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameStateBase_HasMatchEnded_Statics
	{
		struct GameStateBase_eventHasMatchEnded_Parms
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
	void Z_Construct_UFunction_AGameStateBase_HasMatchEnded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameStateBase_eventHasMatchEnded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameStateBase_HasMatchEnded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameStateBase_eventHasMatchEnded_Parms), &Z_Construct_UFunction_AGameStateBase_HasMatchEnded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameStateBase_HasMatchEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateBase_HasMatchEnded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameStateBase_HasMatchEnded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns true if the match can be considered ended. Defaults to false. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Returns true if the match can be considered ended. Defaults to false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateBase_HasMatchEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, nullptr, "HasMatchEnded", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameStateBase_HasMatchEnded_Statics::GameStateBase_eventHasMatchEnded_Parms), Z_Construct_UFunction_AGameStateBase_HasMatchEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_HasMatchEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameStateBase_HasMatchEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_HasMatchEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameStateBase_HasMatchEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateBase_HasMatchEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics
	{
		struct GameStateBase_eventHasMatchStarted_Parms
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
	void Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameStateBase_eventHasMatchStarted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameStateBase_eventHasMatchStarted_Parms), &Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameState" },
		{ "Comment", "/** Returns true if the world has started match (called MatchStarted callbacks) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Returns true if the world has started match (called MatchStarted callbacks)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, nullptr, "HasMatchStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::GameStateBase_eventHasMatchStarted_Parms), Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameStateBase_HasMatchStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** GameModeBase class notification callback. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "GameModeBase class notification callback." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, nullptr, "OnRep_GameModeClass", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** By default calls BeginPlay and StartMatch */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "By default calls BeginPlay and StartMatch" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, nullptr, "OnRep_ReplicatedHasBegunPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSeconds_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSeconds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, nullptr, "OnRep_ReplicatedWorldTimeSeconds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSecondsDouble_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSecondsDouble_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Allows clients to calculate ServerWorldTimeSecondsDelta */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Allows clients to calculate ServerWorldTimeSecondsDelta" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSecondsDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, nullptr, "OnRep_ReplicatedWorldTimeSecondsDouble", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSecondsDouble_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSecondsDouble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSecondsDouble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSecondsDouble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Callback when we receive the spectator class */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Callback when we receive the spectator class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, nullptr, "OnRep_SpectatorClass", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameStateBase);
	UClass* Z_Construct_UClass_AGameStateBase_NoRegister()
	{
		return AGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameModeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameModeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuthorityGameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AuthorityGameMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpectatorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpectatorClass;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicatedHasBegunPlay_MetaData[];
#endif
		static void NewProp_bReplicatedHasBegunPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicatedHasBegunPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedWorldTimeSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReplicatedWorldTimeSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedWorldTimeSecondsDouble_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReplicatedWorldTimeSecondsDouble;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerWorldTimeSecondsDelta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerWorldTimeSecondsDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerWorldTimeSecondsUpdateFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerWorldTimeSecondsUpdateFrequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameStateBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay, "GetPlayerRespawnDelay" }, // 325234569
		{ &Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime, "GetPlayerStartTime" }, // 3785420349
		{ &Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds, "GetServerWorldTimeSeconds" }, // 3593057138
		{ &Z_Construct_UFunction_AGameStateBase_HasBegunPlay, "HasBegunPlay" }, // 1173704925
		{ &Z_Construct_UFunction_AGameStateBase_HasMatchEnded, "HasMatchEnded" }, // 1960911704
		{ &Z_Construct_UFunction_AGameStateBase_HasMatchStarted, "HasMatchStarted" }, // 2468387905
		{ &Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass, "OnRep_GameModeClass" }, // 319252906
		{ &Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay, "OnRep_ReplicatedHasBegunPlay" }, // 3182157365
		{ &Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSeconds, "OnRep_ReplicatedWorldTimeSeconds" }, // 397832756
		{ &Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSecondsDouble, "OnRep_ReplicatedWorldTimeSecondsDouble" }, // 720941673
		{ &Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass, "OnRep_SpectatorClass" }, // 848945314
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * GameStateBase is a class that manages the game's global state, and is spawned by GameModeBase.\n * It exists on both the client and the server and is fully replicated.\n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameFramework/GameStateBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "GameStateBase is a class that manages the game's global state, and is spawned by GameModeBase.\nIt exists on both the client and the server and is fully replicated." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameStateBase_Statics::NewProp_GameModeClass_MetaData[] = {
		{ "Category", "GameState" },
		{ "Comment", "/** Class of the server's game mode, assigned by GameModeBase. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Class of the server's game mode, assigned by GameModeBase." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameStateBase_Statics::NewProp_GameModeClass = { "GameModeClass", "OnRep_GameModeClass", (EPropertyFlags)0x0014000100002034, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameStateBase, GameModeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameStateBase_Statics::NewProp_GameModeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_Statics::NewProp_GameModeClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameStateBase_Statics::NewProp_AuthorityGameMode_MetaData[] = {
		{ "Category", "GameState" },
		{ "Comment", "/** Instance of the current game mode, exists only on the server. For non-authority clients, this will be NULL. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Instance of the current game mode, exists only on the server. For non-authority clients, this will be NULL." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGameStateBase_Statics::NewProp_AuthorityGameMode = { "AuthorityGameMode", nullptr, (EPropertyFlags)0x0014000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameStateBase, AuthorityGameMode), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameStateBase_Statics::NewProp_AuthorityGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_Statics::NewProp_AuthorityGameMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameStateBase_Statics::NewProp_SpectatorClass_MetaData[] = {
		{ "Category", "GameState" },
		{ "Comment", "/** Class used by spectators, assigned by GameModeBase. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Class used by spectators, assigned by GameModeBase." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameStateBase_Statics::NewProp_SpectatorClass = { "SpectatorClass", "OnRep_SpectatorClass", (EPropertyFlags)0x0014000100002034, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameStateBase, SpectatorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASpectatorPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameStateBase_Statics::NewProp_SpectatorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_Statics::NewProp_SpectatorClass_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGameStateBase_Statics::NewProp_PlayerArray_Inner = { "PlayerArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameStateBase_Statics::NewProp_PlayerArray_MetaData[] = {
		{ "Category", "GameState" },
		{ "Comment", "/** Array of all PlayerStates, maintained on both server and clients (PlayerStates are always relevant) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Array of all PlayerStates, maintained on both server and clients (PlayerStates are always relevant)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameStateBase_Statics::NewProp_PlayerArray = { "PlayerArray", nullptr, (EPropertyFlags)0x0014000000002014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameStateBase, PlayerArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGameStateBase_Statics::NewProp_PlayerArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_Statics::NewProp_PlayerArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameStateBase_Statics::NewProp_bReplicatedHasBegunPlay_MetaData[] = {
		{ "Comment", "/** Replicated when GameModeBase->StartPlay has been called so the client will also start play */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Replicated when GameModeBase->StartPlay has been called so the client will also start play" },
	};
#endif
	void Z_Construct_UClass_AGameStateBase_Statics::NewProp_bReplicatedHasBegunPlay_SetBit(void* Obj)
	{
		((AGameStateBase*)Obj)->bReplicatedHasBegunPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameStateBase_Statics::NewProp_bReplicatedHasBegunPlay = { "bReplicatedHasBegunPlay", "OnRep_ReplicatedHasBegunPlay", (EPropertyFlags)0x0020080100002020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGameStateBase), &Z_Construct_UClass_AGameStateBase_Statics::NewProp_bReplicatedHasBegunPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameStateBase_Statics::NewProp_bReplicatedHasBegunPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_Statics::NewProp_bReplicatedHasBegunPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameStateBase_Statics::NewProp_ReplicatedWorldTimeSeconds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameStateBase_Statics::NewProp_ReplicatedWorldTimeSeconds = { "ReplicatedWorldTimeSeconds", "OnRep_ReplicatedWorldTimeSeconds", (EPropertyFlags)0x0020080100002020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameStateBase, ReplicatedWorldTimeSeconds), METADATA_PARAMS(Z_Construct_UClass_AGameStateBase_Statics::NewProp_ReplicatedWorldTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_Statics::NewProp_ReplicatedWorldTimeSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameStateBase_Statics::NewProp_ReplicatedWorldTimeSecondsDouble_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AGameStateBase_Statics::NewProp_ReplicatedWorldTimeSecondsDouble = { "ReplicatedWorldTimeSecondsDouble", "OnRep_ReplicatedWorldTimeSecondsDouble", (EPropertyFlags)0x0020080100002020, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameStateBase, ReplicatedWorldTimeSecondsDouble), METADATA_PARAMS(Z_Construct_UClass_AGameStateBase_Statics::NewProp_ReplicatedWorldTimeSecondsDouble_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_Statics::NewProp_ReplicatedWorldTimeSecondsDouble_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameStateBase_Statics::NewProp_ServerWorldTimeSecondsDelta_MetaData[] = {
		{ "Comment", "/** The difference from the local world's TimeSeconds and the server world's TimeSeconds. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "The difference from the local world's TimeSeconds and the server world's TimeSeconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameStateBase_Statics::NewProp_ServerWorldTimeSecondsDelta = { "ServerWorldTimeSecondsDelta", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameStateBase, ServerWorldTimeSecondsDelta), METADATA_PARAMS(Z_Construct_UClass_AGameStateBase_Statics::NewProp_ServerWorldTimeSecondsDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_Statics::NewProp_ServerWorldTimeSecondsDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameStateBase_Statics::NewProp_ServerWorldTimeSecondsUpdateFrequency_MetaData[] = {
		{ "Category", "GameState" },
		{ "Comment", "/** Frequency that the server updates the replicated TimeSeconds from the world. Set to zero to disable periodic updates. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Frequency that the server updates the replicated TimeSeconds from the world. Set to zero to disable periodic updates." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameStateBase_Statics::NewProp_ServerWorldTimeSecondsUpdateFrequency = { "ServerWorldTimeSecondsUpdateFrequency", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameStateBase, ServerWorldTimeSecondsUpdateFrequency), METADATA_PARAMS(Z_Construct_UClass_AGameStateBase_Statics::NewProp_ServerWorldTimeSecondsUpdateFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_Statics::NewProp_ServerWorldTimeSecondsUpdateFrequency_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameStateBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateBase_Statics::NewProp_GameModeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateBase_Statics::NewProp_AuthorityGameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateBase_Statics::NewProp_SpectatorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateBase_Statics::NewProp_PlayerArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateBase_Statics::NewProp_PlayerArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateBase_Statics::NewProp_bReplicatedHasBegunPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateBase_Statics::NewProp_ReplicatedWorldTimeSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateBase_Statics::NewProp_ReplicatedWorldTimeSecondsDouble,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateBase_Statics::NewProp_ServerWorldTimeSecondsDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateBase_Statics::NewProp_ServerWorldTimeSecondsUpdateFrequency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameStateBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameStateBase_Statics::ClassParams = {
		&AGameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameStateBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameStateBase()
	{
		if (!Z_Registration_Info_UClass_AGameStateBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameStateBase.OuterSingleton, Z_Construct_UClass_AGameStateBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameStateBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AGameStateBase>()
	{
		return AGameStateBase::StaticClass();
	}

	void AGameStateBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_GameModeClass(TEXT("GameModeClass"));
		static const FName Name_SpectatorClass(TEXT("SpectatorClass"));
		static const FName Name_bReplicatedHasBegunPlay(TEXT("bReplicatedHasBegunPlay"));
		static const FName Name_ReplicatedWorldTimeSeconds(TEXT("ReplicatedWorldTimeSeconds"));
		static const FName Name_ReplicatedWorldTimeSecondsDouble(TEXT("ReplicatedWorldTimeSecondsDouble"));

		const bool bIsValid = true
			&& Name_GameModeClass == ClassReps[(int32)ENetFields_Private::GameModeClass].Property->GetFName()
			&& Name_SpectatorClass == ClassReps[(int32)ENetFields_Private::SpectatorClass].Property->GetFName()
			&& Name_bReplicatedHasBegunPlay == ClassReps[(int32)ENetFields_Private::bReplicatedHasBegunPlay].Property->GetFName()
			&& Name_ReplicatedWorldTimeSeconds == ClassReps[(int32)ENetFields_Private::ReplicatedWorldTimeSeconds].Property->GetFName()
			&& Name_ReplicatedWorldTimeSecondsDouble == ClassReps[(int32)ENetFields_Private::ReplicatedWorldTimeSecondsDouble].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGameStateBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameStateBase);
	AGameStateBase::~AGameStateBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameStateBase, AGameStateBase::StaticClass, TEXT("AGameStateBase"), &Z_Registration_Info_UClass_AGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameStateBase), 1384326848U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_2155180625(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameStateBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
