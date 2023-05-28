// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameModeBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameSession_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AHUD_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AServerStatReplicator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASpectatorPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(AGameModeBase::execInitializeHUDForPlayer)
	{
		P_GET_OBJECT(APlayerController,Z_Param_NewPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeHUDForPlayer_Implementation(Z_Param_NewPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execInitStartSpot)
	{
		P_GET_OBJECT(AActor,Z_Param_StartSpot);
		P_GET_OBJECT(AController,Z_Param_NewPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitStartSpot_Implementation(Z_Param_StartSpot,Z_Param_NewPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execSpawnDefaultPawnAtTransform)
	{
		P_GET_OBJECT(AController,Z_Param_NewPlayer);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->SpawnDefaultPawnAtTransform_Implementation(Z_Param_NewPlayer,Z_Param_Out_SpawnTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execSpawnDefaultPawnFor)
	{
		P_GET_OBJECT(AController,Z_Param_NewPlayer);
		P_GET_OBJECT(AActor,Z_Param_StartSpot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->SpawnDefaultPawnFor_Implementation(Z_Param_NewPlayer,Z_Param_StartSpot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execRestartPlayerAtTransform)
	{
		P_GET_OBJECT(AController,Z_Param_NewPlayer);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestartPlayerAtTransform(Z_Param_NewPlayer,Z_Param_Out_SpawnTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execRestartPlayerAtPlayerStart)
	{
		P_GET_OBJECT(AController,Z_Param_NewPlayer);
		P_GET_OBJECT(AActor,Z_Param_StartSpot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestartPlayerAtPlayerStart(Z_Param_NewPlayer,Z_Param_StartSpot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execRestartPlayer)
	{
		P_GET_OBJECT(AController,Z_Param_NewPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestartPlayer(Z_Param_NewPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execPlayerCanRestart)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PlayerCanRestart_Implementation(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execK2_FindPlayerStart)
	{
		P_GET_OBJECT(AController,Z_Param_Player);
		P_GET_PROPERTY(FStrProperty,Z_Param_IncomingName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->K2_FindPlayerStart(Z_Param_Player,Z_Param_IncomingName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execFindPlayerStart)
	{
		P_GET_OBJECT(AController,Z_Param_Player);
		P_GET_PROPERTY(FStrProperty,Z_Param_IncomingName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->FindPlayerStart_Implementation(Z_Param_Player,Z_Param_IncomingName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execChoosePlayerStart)
	{
		P_GET_OBJECT(AController,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->ChoosePlayerStart_Implementation(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execChangeName)
	{
		P_GET_OBJECT(AController,Z_Param_Controller);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewName);
		P_GET_UBOOL(Z_Param_bNameChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeName(Z_Param_Controller,Z_Param_NewName,Z_Param_bNameChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execCanSpectate)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Viewer);
		P_GET_OBJECT(APlayerState,Z_Param_ViewTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanSpectate_Implementation(Z_Param_Viewer,Z_Param_ViewTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execMustSpectate)
	{
		P_GET_OBJECT(APlayerController,Z_Param_NewPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MustSpectate_Implementation(Z_Param_NewPlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execHandleStartingNewPlayer)
	{
		P_GET_OBJECT(APlayerController,Z_Param_NewPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleStartingNewPlayer_Implementation(Z_Param_NewPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execReturnToMainMenuHost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnToMainMenuHost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execResetLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execShouldReset)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorToReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldReset_Implementation(Z_Param_ActorToReset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execHasMatchEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMatchEnded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execHasMatchStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMatchStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execStartPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execGetNumSpectators)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumSpectators();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execGetNumPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeBase::execGetDefaultPawnClassForController)
	{
		P_GET_OBJECT(AController,Z_Param_InController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetDefaultPawnClassForController_Implementation(Z_Param_InController);
		P_NATIVE_END;
	}
	struct GameModeBase_eventCanSpectate_Parms
	{
		APlayerController* Viewer;
		APlayerState* ViewTarget;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GameModeBase_eventCanSpectate_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct GameModeBase_eventChoosePlayerStart_Parms
	{
		AController* Player;
		AActor* ReturnValue;

		/** Constructor, initializes return property only **/
		GameModeBase_eventChoosePlayerStart_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct GameModeBase_eventFindPlayerStart_Parms
	{
		AController* Player;
		FString IncomingName;
		AActor* ReturnValue;

		/** Constructor, initializes return property only **/
		GameModeBase_eventFindPlayerStart_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct GameModeBase_eventGetDefaultPawnClassForController_Parms
	{
		AController* InController;
		UClass* ReturnValue;

		/** Constructor, initializes return property only **/
		GameModeBase_eventGetDefaultPawnClassForController_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct GameModeBase_eventHandleStartingNewPlayer_Parms
	{
		APlayerController* NewPlayer;
	};
	struct GameModeBase_eventInitializeHUDForPlayer_Parms
	{
		APlayerController* NewPlayer;
	};
	struct GameModeBase_eventInitStartSpot_Parms
	{
		AActor* StartSpot;
		AController* NewPlayer;
	};
	struct GameModeBase_eventK2_OnChangeName_Parms
	{
		AController* Other;
		FString NewName;
		bool bNameChange;
	};
	struct GameModeBase_eventK2_OnLogout_Parms
	{
		AController* ExitingController;
	};
	struct GameModeBase_eventK2_OnRestartPlayer_Parms
	{
		AController* NewPlayer;
	};
	struct GameModeBase_eventK2_OnSwapPlayerControllers_Parms
	{
		APlayerController* OldPC;
		APlayerController* NewPC;
	};
	struct GameModeBase_eventK2_PostLogin_Parms
	{
		APlayerController* NewPlayer;
	};
	struct GameModeBase_eventMustSpectate_Parms
	{
		APlayerController* NewPlayerController;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GameModeBase_eventMustSpectate_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct GameModeBase_eventPlayerCanRestart_Parms
	{
		APlayerController* Player;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GameModeBase_eventPlayerCanRestart_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct GameModeBase_eventShouldReset_Parms
	{
		AActor* ActorToReset;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GameModeBase_eventShouldReset_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct GameModeBase_eventSpawnDefaultPawnAtTransform_Parms
	{
		AController* NewPlayer;
		FTransform SpawnTransform;
		APawn* ReturnValue;

		/** Constructor, initializes return property only **/
		GameModeBase_eventSpawnDefaultPawnAtTransform_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct GameModeBase_eventSpawnDefaultPawnFor_Parms
	{
		AController* NewPlayer;
		AActor* StartSpot;
		APawn* ReturnValue;

		/** Constructor, initializes return property only **/
		GameModeBase_eventSpawnDefaultPawnFor_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	static FName NAME_AGameModeBase_CanSpectate = FName(TEXT("CanSpectate"));
	bool AGameModeBase::CanSpectate(APlayerController* Viewer, APlayerState* ViewTarget)
	{
		GameModeBase_eventCanSpectate_Parms Parms;
		Parms.Viewer=Viewer;
		Parms.ViewTarget=ViewTarget;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_CanSpectate),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_ChoosePlayerStart = FName(TEXT("ChoosePlayerStart"));
	AActor* AGameModeBase::ChoosePlayerStart(AController* Player)
	{
		GameModeBase_eventChoosePlayerStart_Parms Parms;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_ChoosePlayerStart),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_FindPlayerStart = FName(TEXT("FindPlayerStart"));
	AActor* AGameModeBase::FindPlayerStart(AController* Player, const FString& IncomingName)
	{
		GameModeBase_eventFindPlayerStart_Parms Parms;
		Parms.Player=Player;
		Parms.IncomingName=IncomingName;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_FindPlayerStart),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_GetDefaultPawnClassForController = FName(TEXT("GetDefaultPawnClassForController"));
	UClass* AGameModeBase::GetDefaultPawnClassForController(AController* InController)
	{
		GameModeBase_eventGetDefaultPawnClassForController_Parms Parms;
		Parms.InController=InController;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_GetDefaultPawnClassForController),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_HandleStartingNewPlayer = FName(TEXT("HandleStartingNewPlayer"));
	void AGameModeBase::HandleStartingNewPlayer(APlayerController* NewPlayer)
	{
		GameModeBase_eventHandleStartingNewPlayer_Parms Parms;
		Parms.NewPlayer=NewPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_HandleStartingNewPlayer),&Parms);
	}
	static FName NAME_AGameModeBase_InitializeHUDForPlayer = FName(TEXT("InitializeHUDForPlayer"));
	void AGameModeBase::InitializeHUDForPlayer(APlayerController* NewPlayer)
	{
		GameModeBase_eventInitializeHUDForPlayer_Parms Parms;
		Parms.NewPlayer=NewPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_InitializeHUDForPlayer),&Parms);
	}
	static FName NAME_AGameModeBase_InitStartSpot = FName(TEXT("InitStartSpot"));
	void AGameModeBase::InitStartSpot(AActor* StartSpot, AController* NewPlayer)
	{
		GameModeBase_eventInitStartSpot_Parms Parms;
		Parms.StartSpot=StartSpot;
		Parms.NewPlayer=NewPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_InitStartSpot),&Parms);
	}
	static FName NAME_AGameModeBase_K2_OnChangeName = FName(TEXT("K2_OnChangeName"));
	void AGameModeBase::K2_OnChangeName(AController* Other, const FString& NewName, bool bNameChange)
	{
		GameModeBase_eventK2_OnChangeName_Parms Parms;
		Parms.Other=Other;
		Parms.NewName=NewName;
		Parms.bNameChange=bNameChange ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_K2_OnChangeName),&Parms);
	}
	static FName NAME_AGameModeBase_K2_OnLogout = FName(TEXT("K2_OnLogout"));
	void AGameModeBase::K2_OnLogout(AController* ExitingController)
	{
		GameModeBase_eventK2_OnLogout_Parms Parms;
		Parms.ExitingController=ExitingController;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_K2_OnLogout),&Parms);
	}
	static FName NAME_AGameModeBase_K2_OnRestartPlayer = FName(TEXT("K2_OnRestartPlayer"));
	void AGameModeBase::K2_OnRestartPlayer(AController* NewPlayer)
	{
		GameModeBase_eventK2_OnRestartPlayer_Parms Parms;
		Parms.NewPlayer=NewPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_K2_OnRestartPlayer),&Parms);
	}
	static FName NAME_AGameModeBase_K2_OnSwapPlayerControllers = FName(TEXT("K2_OnSwapPlayerControllers"));
	void AGameModeBase::K2_OnSwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC)
	{
		GameModeBase_eventK2_OnSwapPlayerControllers_Parms Parms;
		Parms.OldPC=OldPC;
		Parms.NewPC=NewPC;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_K2_OnSwapPlayerControllers),&Parms);
	}
	static FName NAME_AGameModeBase_K2_PostLogin = FName(TEXT("K2_PostLogin"));
	void AGameModeBase::K2_PostLogin(APlayerController* NewPlayer)
	{
		GameModeBase_eventK2_PostLogin_Parms Parms;
		Parms.NewPlayer=NewPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_K2_PostLogin),&Parms);
	}
	static FName NAME_AGameModeBase_MustSpectate = FName(TEXT("MustSpectate"));
	bool AGameModeBase::MustSpectate(APlayerController* NewPlayerController) const
	{
		GameModeBase_eventMustSpectate_Parms Parms;
		Parms.NewPlayerController=NewPlayerController;
		const_cast<AGameModeBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_MustSpectate),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_PlayerCanRestart = FName(TEXT("PlayerCanRestart"));
	bool AGameModeBase::PlayerCanRestart(APlayerController* Player)
	{
		GameModeBase_eventPlayerCanRestart_Parms Parms;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_PlayerCanRestart),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_ShouldReset = FName(TEXT("ShouldReset"));
	bool AGameModeBase::ShouldReset(AActor* ActorToReset)
	{
		GameModeBase_eventShouldReset_Parms Parms;
		Parms.ActorToReset=ActorToReset;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_ShouldReset),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_SpawnDefaultPawnAtTransform = FName(TEXT("SpawnDefaultPawnAtTransform"));
	APawn* AGameModeBase::SpawnDefaultPawnAtTransform(AController* NewPlayer, FTransform const& SpawnTransform)
	{
		GameModeBase_eventSpawnDefaultPawnAtTransform_Parms Parms;
		Parms.NewPlayer=NewPlayer;
		Parms.SpawnTransform=SpawnTransform;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_SpawnDefaultPawnAtTransform),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_SpawnDefaultPawnFor = FName(TEXT("SpawnDefaultPawnFor"));
	APawn* AGameModeBase::SpawnDefaultPawnFor(AController* NewPlayer, AActor* StartSpot)
	{
		GameModeBase_eventSpawnDefaultPawnFor_Parms Parms;
		Parms.NewPlayer=NewPlayer;
		Parms.StartSpot=StartSpot;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_SpawnDefaultPawnFor),&Parms);
		return Parms.ReturnValue;
	}
	void AGameModeBase::StaticRegisterNativesAGameModeBase()
	{
		UClass* Class = AGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanSpectate", &AGameModeBase::execCanSpectate },
			{ "ChangeName", &AGameModeBase::execChangeName },
			{ "ChoosePlayerStart", &AGameModeBase::execChoosePlayerStart },
			{ "FindPlayerStart", &AGameModeBase::execFindPlayerStart },
			{ "GetDefaultPawnClassForController", &AGameModeBase::execGetDefaultPawnClassForController },
			{ "GetNumPlayers", &AGameModeBase::execGetNumPlayers },
			{ "GetNumSpectators", &AGameModeBase::execGetNumSpectators },
			{ "HandleStartingNewPlayer", &AGameModeBase::execHandleStartingNewPlayer },
			{ "HasMatchEnded", &AGameModeBase::execHasMatchEnded },
			{ "HasMatchStarted", &AGameModeBase::execHasMatchStarted },
			{ "InitializeHUDForPlayer", &AGameModeBase::execInitializeHUDForPlayer },
			{ "InitStartSpot", &AGameModeBase::execInitStartSpot },
			{ "K2_FindPlayerStart", &AGameModeBase::execK2_FindPlayerStart },
			{ "MustSpectate", &AGameModeBase::execMustSpectate },
			{ "PlayerCanRestart", &AGameModeBase::execPlayerCanRestart },
			{ "ResetLevel", &AGameModeBase::execResetLevel },
			{ "RestartPlayer", &AGameModeBase::execRestartPlayer },
			{ "RestartPlayerAtPlayerStart", &AGameModeBase::execRestartPlayerAtPlayerStart },
			{ "RestartPlayerAtTransform", &AGameModeBase::execRestartPlayerAtTransform },
			{ "ReturnToMainMenuHost", &AGameModeBase::execReturnToMainMenuHost },
			{ "ShouldReset", &AGameModeBase::execShouldReset },
			{ "SpawnDefaultPawnAtTransform", &AGameModeBase::execSpawnDefaultPawnAtTransform },
			{ "SpawnDefaultPawnFor", &AGameModeBase::execSpawnDefaultPawnFor },
			{ "StartPlay", &AGameModeBase::execStartPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Viewer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewTarget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::NewProp_Viewer = { "Viewer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventCanSpectate_Parms, Viewer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::NewProp_ViewTarget = { "ViewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventCanSpectate_Parms, ViewTarget), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameModeBase_eventCanSpectate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameModeBase_eventCanSpectate_Parms), &Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::NewProp_Viewer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::NewProp_ViewTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Return whether Viewer is allowed to spectate from the point of view of ViewTarget. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Return whether Viewer is allowed to spectate from the point of view of ViewTarget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "CanSpectate", nullptr, nullptr, sizeof(GameModeBase_eventCanSpectate_Parms), Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_CanSpectate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_ChangeName_Statics
	{
		struct GameModeBase_eventChangeName_Parms
		{
			AController* Controller;
			FString NewName;
			bool bNameChange;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewName;
		static void NewProp_bNameChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNameChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventChangeName_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventChangeName_Parms, NewName), METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_NewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_NewName_MetaData)) };
	void Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_bNameChange_SetBit(void* Obj)
	{
		((GameModeBase_eventChangeName_Parms*)Obj)->bNameChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_bNameChange = { "bNameChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameModeBase_eventChangeName_Parms), &Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_bNameChange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_NewName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_bNameChange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** \n\x09 * Sets the name for a controller \n\x09 * @param Controller\x09The controller of the player to change the name of\n\x09 * @param NewName\x09\x09The name to set the player to\n\x09 * @param bNameChange\x09Whether the name is changing or if this is the first time it has been set\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Sets the name for a controller\n@param Controller    The controller of the player to change the name of\n@param NewName               The name to set the player to\n@param bNameChange   Whether the name is changing or if this is the first time it has been set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "ChangeName", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::GameModeBase_eventChangeName_Parms), Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_ChangeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventChoosePlayerStart_Parms, Player), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventChoosePlayerStart_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/**\n\x09 * Return the 'best' player start for this player to spawn from\n\x09 * Default implementation looks for a random unoccupied spot\n\x09 * \n\x09 * @param Player is the controller for whom we are choosing a playerstart\n\x09 * @returns AActor chosen as player start (usually a PlayerStart)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Return the 'best' player start for this player to spawn from\nDefault implementation looks for a random unoccupied spot\n\n@param Player is the controller for whom we are choosing a playerstart\n@returns AActor chosen as player start (usually a PlayerStart)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "ChoosePlayerStart", nullptr, nullptr, sizeof(GameModeBase_eventChoosePlayerStart_Parms), Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncomingName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IncomingName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventFindPlayerStart_Parms, Player), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::NewProp_IncomingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::NewProp_IncomingName = { "IncomingName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventFindPlayerStart_Parms, IncomingName), METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::NewProp_IncomingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::NewProp_IncomingName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventFindPlayerStart_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::NewProp_IncomingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/**\n\x09 * Return the specific player start actor that should be used for the next spawn\n\x09 * This will either use a previously saved startactor, or calls ChoosePlayerStart\n\x09 * \n\x09 * @param Player The AController for whom we are choosing a Player Start\n\x09 * @param IncomingName Specifies the tag of a Player Start to use\n\x09 * @returns Actor chosen as player start (usually a PlayerStart)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Return the specific player start actor that should be used for the next spawn\nThis will either use a previously saved startactor, or calls ChoosePlayerStart\n\n@param Player The AController for whom we are choosing a Player Start\n@param IncomingName Specifies the tag of a Player Start to use\n@returns Actor chosen as player start (usually a PlayerStart)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "FindPlayerStart", nullptr, nullptr, sizeof(GameModeBase_eventFindPlayerStart_Parms), Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_FindPlayerStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InController;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::NewProp_InController = { "InController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventGetDefaultPawnClassForController_Parms, InController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventGetDefaultPawnClassForController_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::NewProp_InController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Classes" },
		{ "Comment", "/** Returns default pawn class for given controller */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Returns default pawn class for given controller" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "GetDefaultPawnClassForController", nullptr, nullptr, sizeof(GameModeBase_eventGetDefaultPawnClassForController_Parms), Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics
	{
		struct GameModeBase_eventGetNumPlayers_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventGetNumPlayers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns number of active human players, excluding spectators */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Returns number of active human players, excluding spectators" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "GetNumPlayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics::GameModeBase_eventGetNumPlayers_Parms), Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_GetNumPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics
	{
		struct GameModeBase_eventGetNumSpectators_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventGetNumSpectators_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns number of human players currently spectating */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Returns number of human players currently spectating" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "GetNumSpectators", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics::GameModeBase_eventGetNumSpectators_Parms), Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_GetNumSpectators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventHandleStartingNewPlayer_Parms, NewPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics::NewProp_NewPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Signals that a player is ready to enter the game, which may start it up */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Signals that a player is ready to enter the game, which may start it up" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "HandleStartingNewPlayer", nullptr, nullptr, sizeof(GameModeBase_eventHandleStartingNewPlayer_Parms), Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_HasMatchEnded_Statics
	{
		struct GameModeBase_eventHasMatchEnded_Parms
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
	void Z_Construct_UFunction_AGameModeBase_HasMatchEnded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameModeBase_eventHasMatchEnded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameModeBase_HasMatchEnded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameModeBase_eventHasMatchEnded_Parms), &Z_Construct_UFunction_AGameModeBase_HasMatchEnded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_HasMatchEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_HasMatchEnded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_HasMatchEnded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns true if the match can be considered ended */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Returns true if the match can be considered ended" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_HasMatchEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "HasMatchEnded", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameModeBase_HasMatchEnded_Statics::GameModeBase_eventHasMatchEnded_Parms), Z_Construct_UFunction_AGameModeBase_HasMatchEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_HasMatchEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_HasMatchEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_HasMatchEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_HasMatchEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_HasMatchEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics
	{
		struct GameModeBase_eventHasMatchStarted_Parms
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
	void Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameModeBase_eventHasMatchStarted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameModeBase_eventHasMatchStarted_Parms), &Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns true if the match start callbacks have been called */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Returns true if the match start callbacks have been called" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "HasMatchStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::GameModeBase_eventHasMatchStarted_Parms), Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_HasMatchStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventInitializeHUDForPlayer_Parms, NewPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics::NewProp_NewPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Initialize the AHUD object for a player. Games can override this to do something different */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Initialize the AHUD object for a player. Games can override this to do something different" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "InitializeHUDForPlayer", nullptr, nullptr, sizeof(GameModeBase_eventInitializeHUDForPlayer_Parms), Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartSpot;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::NewProp_StartSpot = { "StartSpot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventInitStartSpot_Parms, StartSpot), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventInitStartSpot_Parms, NewPlayer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::NewProp_StartSpot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::NewProp_NewPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Called from RestartPlayerAtPlayerStart, can be used to initialize the start spawn actor */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Called from RestartPlayerAtPlayerStart, can be used to initialize the start spawn actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "InitStartSpot", nullptr, nullptr, sizeof(GameModeBase_eventInitStartSpot_Parms), Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_InitStartSpot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics
	{
		struct GameModeBase_eventK2_FindPlayerStart_Parms
		{
			AController* Player;
			FString IncomingName;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncomingName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IncomingName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventK2_FindPlayerStart_Parms, Player), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::NewProp_IncomingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::NewProp_IncomingName = { "IncomingName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventK2_FindPlayerStart_Parms, IncomingName), METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::NewProp_IncomingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::NewProp_IncomingName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventK2_FindPlayerStart_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::NewProp_IncomingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/**\n\x09 * Return the specific player start actor that should be used for the next spawn\n\x09 * This will either use a previously saved startactor, or calls ChoosePlayerStart\n\x09 *\n\x09 * @param Player The AController for whom we are choosing a Player Start\n\x09 * @param IncomingName Specifies the tag of a Player Start to use\n\x09 * @returns Actor chosen as player start (usually a PlayerStart)\n\x09 */" },
		{ "CPP_Default_IncomingName", "" },
		{ "DisplayName", "FindPlayerStart" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Return the specific player start actor that should be used for the next spawn\nThis will either use a previously saved startactor, or calls ChoosePlayerStart\n\n@param Player The AController for whom we are choosing a Player Start\n@param IncomingName Specifies the tag of a Player Start to use\n@returns Actor chosen as player start (usually a PlayerStart)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "K2_FindPlayerStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::GameModeBase_eventK2_FindPlayerStart_Parms), Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewName;
		static void NewProp_bNameChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNameChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventK2_OnChangeName_Parms, Other), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventK2_OnChangeName_Parms, NewName), METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_NewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_NewName_MetaData)) };
	void Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_bNameChange_SetBit(void* Obj)
	{
		((GameModeBase_eventK2_OnChangeName_Parms*)Obj)->bNameChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_bNameChange = { "bNameChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameModeBase_eventK2_OnChangeName_Parms), &Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_bNameChange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_Other,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_NewName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_bNameChange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** \n\x09 * Overridable event for GameMode blueprint to respond to a change name call\n\x09 * @param Controller\x09The controller of the player to change the name of\n\x09 * @param NewName\x09\x09The name to set the player to\n\x09 * @param bNameChange\x09Whether the name is changing or if this is the first time it has been set\n\x09 */" },
		{ "DisplayName", "OnChangeName" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ScriptName", "OnChangeName" },
		{ "ToolTip", "Overridable event for GameMode blueprint to respond to a change name call\n@param Controller    The controller of the player to change the name of\n@param NewName               The name to set the player to\n@param bNameChange   Whether the name is changing or if this is the first time it has been set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "K2_OnChangeName", nullptr, nullptr, sizeof(GameModeBase_eventK2_OnChangeName_Parms), Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_K2_OnChangeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitingController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics::NewProp_ExitingController = { "ExitingController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventK2_OnLogout_Parms, ExitingController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics::NewProp_ExitingController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Implementable event when a Controller with a PlayerState leaves the game. */" },
		{ "DisplayName", "OnLogout" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ScriptName", "OnLogout" },
		{ "ToolTip", "Implementable event when a Controller with a PlayerState leaves the game." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "K2_OnLogout", nullptr, nullptr, sizeof(GameModeBase_eventK2_OnLogout_Parms), Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_K2_OnLogout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventK2_OnRestartPlayer_Parms, NewPlayer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics::NewProp_NewPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Implementable event called at the end of RestartPlayer */" },
		{ "DisplayName", "OnRestartPlayer" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ScriptName", "OnRestartPlayer" },
		{ "ToolTip", "Implementable event called at the end of RestartPlayer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "K2_OnRestartPlayer", nullptr, nullptr, sizeof(GameModeBase_eventK2_OnRestartPlayer_Parms), Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldPC;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::NewProp_OldPC = { "OldPC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventK2_OnSwapPlayerControllers_Parms, OldPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::NewProp_NewPC = { "NewPC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventK2_OnSwapPlayerControllers_Parms, NewPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::NewProp_OldPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::NewProp_NewPC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Called when a PlayerController is swapped to a new one during seamless travel */" },
		{ "DisplayName", "OnSwapPlayerControllers" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ScriptName", "OnSwapPlayerControllers" },
		{ "ToolTip", "Called when a PlayerController is swapped to a new one during seamless travel" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "K2_OnSwapPlayerControllers", nullptr, nullptr, sizeof(GameModeBase_eventK2_OnSwapPlayerControllers_Parms), Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventK2_PostLogin_Parms, NewPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics::NewProp_NewPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Notification that a player has successfully logged in, and has been given a player controller */" },
		{ "DisplayName", "OnPostLogin" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ScriptName", "OnPostLogin" },
		{ "ToolTip", "Notification that a player has successfully logged in, and has been given a player controller" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "K2_PostLogin", nullptr, nullptr, sizeof(GameModeBase_eventK2_PostLogin_Parms), Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_K2_PostLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlayerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::NewProp_NewPlayerController = { "NewPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventMustSpectate_Parms, NewPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameModeBase_eventMustSpectate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameModeBase_eventMustSpectate_Parms), &Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::NewProp_NewPlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns true if NewPlayerController may only join the server as a spectator. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Returns true if NewPlayerController may only join the server as a spectator." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "MustSpectate", nullptr, nullptr, sizeof(GameModeBase_eventMustSpectate_Parms), Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_MustSpectate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventPlayerCanRestart_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameModeBase_eventPlayerCanRestart_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameModeBase_eventPlayerCanRestart_Parms), &Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns true if it's valid to call RestartPlayer. By default will call Player->CanRestartPlayer */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Returns true if it's valid to call RestartPlayer. By default will call Player->CanRestartPlayer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "PlayerCanRestart", nullptr, nullptr, sizeof(GameModeBase_eventPlayerCanRestart_Parms), Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_PlayerCanRestart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_ResetLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_ResetLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/**\n\x09 * Overridable function called when resetting level. This is used to reset the game state while staying in the same map\n\x09 * Default implementation calls Reset() on all actors except GameMode and Controllers\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Overridable function called when resetting level. This is used to reset the game state while staying in the same map\nDefault implementation calls Reset() on all actors except GameMode and Controllers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_ResetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "ResetLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_ResetLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_ResetLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_ResetLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_ResetLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics
	{
		struct GameModeBase_eventRestartPlayer_Parms
		{
			AController* NewPlayer;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventRestartPlayer_Parms, NewPlayer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics::NewProp_NewPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Tries to spawn the player's pawn, at the location returned by FindPlayerStart */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Tries to spawn the player's pawn, at the location returned by FindPlayerStart" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "RestartPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics::GameModeBase_eventRestartPlayer_Parms), Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_RestartPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics
	{
		struct GameModeBase_eventRestartPlayerAtPlayerStart_Parms
		{
			AController* NewPlayer;
			AActor* StartSpot;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartSpot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventRestartPlayerAtPlayerStart_Parms, NewPlayer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::NewProp_StartSpot = { "StartSpot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventRestartPlayerAtPlayerStart_Parms, StartSpot), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::NewProp_NewPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::NewProp_StartSpot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Tries to spawn the player's pawn at the specified actor's location */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Tries to spawn the player's pawn at the specified actor's location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "RestartPlayerAtPlayerStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::GameModeBase_eventRestartPlayerAtPlayerStart_Parms), Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics
	{
		struct GameModeBase_eventRestartPlayerAtTransform_Parms
		{
			AController* NewPlayer;
			FTransform SpawnTransform;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventRestartPlayerAtTransform_Parms, NewPlayer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventRestartPlayerAtTransform_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::NewProp_SpawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::NewProp_SpawnTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::NewProp_NewPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::NewProp_SpawnTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Tries to spawn the player's pawn at a specific location */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Tries to spawn the player's pawn at a specific location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "RestartPlayerAtTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::GameModeBase_eventRestartPlayerAtTransform_Parms), Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Return to main menu, and disconnect any players */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Return to main menu, and disconnect any players" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "ReturnToMainMenuHost", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToReset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::NewProp_ActorToReset = { "ActorToReset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventShouldReset_Parms, ActorToReset), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameModeBase_eventShouldReset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameModeBase_eventShouldReset_Parms), &Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::NewProp_ActorToReset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/**\n\x09 * Overridable function to determine whether an Actor should have Reset called when the game has Reset called on it.\n\x09 * Default implementation returns true\n\x09 * @param ActorToReset The actor to make a determination for\n\x09 * @return true if ActorToReset should have Reset() called on it while restarting the game,\n\x09 *\x09\x09   false if the GameMode will manually reset it or if the actor does not need to be reset\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Overridable function to determine whether an Actor should have Reset called when the game has Reset called on it.\nDefault implementation returns true\n@param ActorToReset The actor to make a determination for\n@return true if ActorToReset should have Reset() called on it while restarting the game,\n                false if the GameMode will manually reset it or if the actor does not need to be reset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "ShouldReset", nullptr, nullptr, sizeof(GameModeBase_eventShouldReset_Parms), Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_ShouldReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventSpawnDefaultPawnAtTransform_Parms, NewPlayer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventSpawnDefaultPawnAtTransform_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::NewProp_SpawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::NewProp_SpawnTransform_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventSpawnDefaultPawnAtTransform_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::NewProp_NewPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::NewProp_SpawnTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/**\n\x09 * Called during RestartPlayer to actually spawn the player's pawn, when using a transform\n\x09 * @param\x09NewPlayer - Controller for whom this pawn is spawned\n\x09 * @param\x09SpawnTransform - Transform at which to spawn pawn\n\x09 * @return\x09""a pawn of the default pawn class\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Called during RestartPlayer to actually spawn the player's pawn, when using a transform\n@param       NewPlayer - Controller for whom this pawn is spawned\n@param       SpawnTransform - Transform at which to spawn pawn\n@return      a pawn of the default pawn class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "SpawnDefaultPawnAtTransform", nullptr, nullptr, sizeof(GameModeBase_eventSpawnDefaultPawnAtTransform_Parms), Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartSpot;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventSpawnDefaultPawnFor_Parms, NewPlayer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::NewProp_StartSpot = { "StartSpot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventSpawnDefaultPawnFor_Parms, StartSpot), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameModeBase_eventSpawnDefaultPawnFor_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::NewProp_NewPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::NewProp_StartSpot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/**\n\x09 * Called during RestartPlayer to actually spawn the player's pawn, when using a start spot\n\x09 * @param\x09NewPlayer - Controller for whom this pawn is spawned\n\x09 * @param\x09StartSpot - Actor at which to spawn pawn\n\x09 * @return\x09""a pawn of the default pawn class\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Called during RestartPlayer to actually spawn the player's pawn, when using a start spot\n@param       NewPlayer - Controller for whom this pawn is spawned\n@param       StartSpot - Actor at which to spawn pawn\n@return      a pawn of the default pawn class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "SpawnDefaultPawnFor", nullptr, nullptr, sizeof(GameModeBase_eventSpawnDefaultPawnFor_Parms), Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_StartPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_StartPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Transitions to calls BeginPlay on actors. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Transitions to calls BeginPlay on actors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_StartPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "StartPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_StartPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_StartPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_StartPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameModeBase_StartPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameModeBase);
	UClass* Z_Construct_UClass_AGameModeBase_NoRegister()
	{
		return AGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionsString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OptionsString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameSessionClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameSessionClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameStateClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameStateClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerControllerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerControllerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStateClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerStateClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HUDClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPawnClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultPawnClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpectatorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpectatorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplaySpectatorPlayerControllerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReplaySpectatorPlayerControllerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerStatReplicatorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ServerStatReplicatorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameSession_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GameSession;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GameState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerStatReplicator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ServerStatReplicator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultPlayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSeamlessTravel_MetaData[];
#endif
		static void NewProp_bUseSeamlessTravel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSeamlessTravel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartPlayersAsSpectators_MetaData[];
#endif
		static void NewProp_bStartPlayersAsSpectators_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartPlayersAsSpectators;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPauseable_MetaData[];
#endif
		static void NewProp_bPauseable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPauseable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameModeBase_CanSpectate, "CanSpectate" }, // 2026386620
		{ &Z_Construct_UFunction_AGameModeBase_ChangeName, "ChangeName" }, // 2738253142
		{ &Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart, "ChoosePlayerStart" }, // 2999735478
		{ &Z_Construct_UFunction_AGameModeBase_FindPlayerStart, "FindPlayerStart" }, // 2880652644
		{ &Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController, "GetDefaultPawnClassForController" }, // 1229603785
		{ &Z_Construct_UFunction_AGameModeBase_GetNumPlayers, "GetNumPlayers" }, // 1431984506
		{ &Z_Construct_UFunction_AGameModeBase_GetNumSpectators, "GetNumSpectators" }, // 3333388752
		{ &Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer, "HandleStartingNewPlayer" }, // 4010446762
		{ &Z_Construct_UFunction_AGameModeBase_HasMatchEnded, "HasMatchEnded" }, // 8564414
		{ &Z_Construct_UFunction_AGameModeBase_HasMatchStarted, "HasMatchStarted" }, // 1946699133
		{ &Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer, "InitializeHUDForPlayer" }, // 2693995911
		{ &Z_Construct_UFunction_AGameModeBase_InitStartSpot, "InitStartSpot" }, // 1247128138
		{ &Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart, "K2_FindPlayerStart" }, // 2861668570
		{ &Z_Construct_UFunction_AGameModeBase_K2_OnChangeName, "K2_OnChangeName" }, // 2268062914
		{ &Z_Construct_UFunction_AGameModeBase_K2_OnLogout, "K2_OnLogout" }, // 477455917
		{ &Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer, "K2_OnRestartPlayer" }, // 3305852850
		{ &Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers, "K2_OnSwapPlayerControllers" }, // 2237669177
		{ &Z_Construct_UFunction_AGameModeBase_K2_PostLogin, "K2_PostLogin" }, // 3494737036
		{ &Z_Construct_UFunction_AGameModeBase_MustSpectate, "MustSpectate" }, // 2983220819
		{ &Z_Construct_UFunction_AGameModeBase_PlayerCanRestart, "PlayerCanRestart" }, // 2978882238
		{ &Z_Construct_UFunction_AGameModeBase_ResetLevel, "ResetLevel" }, // 3048132064
		{ &Z_Construct_UFunction_AGameModeBase_RestartPlayer, "RestartPlayer" }, // 1693347732
		{ &Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart, "RestartPlayerAtPlayerStart" }, // 2229358149
		{ &Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform, "RestartPlayerAtTransform" }, // 1837981732
		{ &Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost, "ReturnToMainMenuHost" }, // 3717423772
		{ &Z_Construct_UFunction_AGameModeBase_ShouldReset, "ShouldReset" }, // 3786959434
		{ &Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform, "SpawnDefaultPawnAtTransform" }, // 2715685444
		{ &Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor, "SpawnDefaultPawnFor" }, // 1453181452
		{ &Z_Construct_UFunction_AGameModeBase_StartPlay, "StartPlay" }, // 2073554621
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The GameModeBase defines the game being played. It governs the game rules, scoring, what actors\n * are allowed to exist in this game type, and who may enter the game.\n *\n * It is only instanced on the server and will never exist on the client. \n *\n * A GameModeBase actor is instantiated when the level is initialized for gameplay in\n * C++ UGameEngine::LoadMap().  \n * \n * The class of this GameMode actor is determined by (in order) either the URL ?game=xxx, \n * the GameMode Override value set in the World Settings, or the DefaultGameMode entry set \n * in the game's Project Settings.\n *\n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/GameMode/index.html\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameFramework/GameModeBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ShortTooltip", "Game Mode Base defines the game being played, its rules, scoring, and other facets of the game type." },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "The GameModeBase defines the game being played. It governs the game rules, scoring, what actors\nare allowed to exist in this game type, and who may enter the game.\n\nIt is only instanced on the server and will never exist on the client.\n\nA GameModeBase actor is instantiated when the level is initialized for gameplay in\nC++ UGameEngine::LoadMap().\n\nThe class of this GameMode actor is determined by (in order) either the URL ?game=xxx,\nthe GameMode Override value set in the World Settings, or the DefaultGameMode entry set\nin the game's Project Settings.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/GameMode/index.html" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_OptionsString_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/** Save options string and parse it when needed */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Save options string and parse it when needed" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_OptionsString = { "OptionsString", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameModeBase, OptionsString), METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_OptionsString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_OptionsString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameSessionClass_MetaData[] = {
		{ "Category", "Classes" },
		{ "Comment", "/** Class of GameSession, which handles login approval and online game interface */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Class of GameSession, which handles login approval and online game interface" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameSessionClass = { "GameSessionClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameModeBase, GameSessionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameSession_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameSessionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameSessionClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameStateClass_MetaData[] = {
		{ "Category", "Classes" },
		{ "Comment", "/** Class of GameState associated with this GameMode. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Class of GameState associated with this GameMode." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameStateClass = { "GameStateClass", nullptr, (EPropertyFlags)0x0014000002000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameModeBase, GameStateClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameStateBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameStateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameStateClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_PlayerControllerClass_MetaData[] = {
		{ "Category", "Classes" },
		{ "Comment", "/** The class of PlayerController to spawn for players logging in. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "The class of PlayerController to spawn for players logging in." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_PlayerControllerClass = { "PlayerControllerClass", nullptr, (EPropertyFlags)0x0014000002000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameModeBase, PlayerControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_PlayerControllerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_PlayerControllerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_PlayerStateClass_MetaData[] = {
		{ "Category", "Classes" },
		{ "Comment", "/** A PlayerState of this class will be associated with every player to replicate relevant player information to all clients. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "A PlayerState of this class will be associated with every player to replicate relevant player information to all clients." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_PlayerStateClass = { "PlayerStateClass", nullptr, (EPropertyFlags)0x0014000002000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameModeBase, PlayerStateClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_PlayerStateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_PlayerStateClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_HUDClass_MetaData[] = {
		{ "Category", "Classes" },
		{ "Comment", "/** HUD class this game uses. */" },
		{ "DisplayName", "HUD Class" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "HUD class this game uses." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_HUDClass = { "HUDClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameModeBase, HUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_HUDClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_HUDClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_DefaultPawnClass_MetaData[] = {
		{ "Category", "Classes" },
		{ "Comment", "/** The default pawn class used by players. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "The default pawn class used by players." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_DefaultPawnClass = { "DefaultPawnClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameModeBase, DefaultPawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_DefaultPawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_DefaultPawnClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_SpectatorClass_MetaData[] = {
		{ "Category", "Classes" },
		{ "Comment", "/** The pawn class used by the PlayerController for players when spectating. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "The pawn class used by the PlayerController for players when spectating." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_SpectatorClass = { "SpectatorClass", nullptr, (EPropertyFlags)0x0014000002000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameModeBase, SpectatorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASpectatorPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_SpectatorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_SpectatorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_ReplaySpectatorPlayerControllerClass_MetaData[] = {
		{ "Category", "Classes" },
		{ "Comment", "/** The PlayerController class used when spectating a network replay. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "The PlayerController class used when spectating a network replay." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_ReplaySpectatorPlayerControllerClass = { "ReplaySpectatorPlayerControllerClass", nullptr, (EPropertyFlags)0x0014000002000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameModeBase, ReplaySpectatorPlayerControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_ReplaySpectatorPlayerControllerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_ReplaySpectatorPlayerControllerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_ServerStatReplicatorClass_MetaData[] = {
		{ "Category", "Classes" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_ServerStatReplicatorClass = { "ServerStatReplicatorClass", nullptr, (EPropertyFlags)0x0014000002000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameModeBase, ServerStatReplicatorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AServerStatReplicator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_ServerStatReplicatorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_ServerStatReplicatorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameSession_MetaData[] = {
		{ "Comment", "/** Game Session handles login approval, arbitration, online game interface */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Game Session handles login approval, arbitration, online game interface" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameSession = { "GameSession", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameModeBase, GameSession), Z_Construct_UClass_AGameSession_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameSession_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameState_MetaData[] = {
		{ "Comment", "/** GameState is used to replicate game state relevant properties to all clients. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "GameState is used to replicate game state relevant properties to all clients." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameState = { "GameState", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameModeBase, GameState), Z_Construct_UClass_AGameStateBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_ServerStatReplicator_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_ServerStatReplicator = { "ServerStatReplicator", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameModeBase, ServerStatReplicator), Z_Construct_UClass_AServerStatReplicator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_ServerStatReplicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_ServerStatReplicator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_DefaultPlayerName_MetaData[] = {
		{ "Category", "Game" },
		{ "Comment", "/** The default player name assigned to players that join with no name specified. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "The default player name assigned to players that join with no name specified." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_DefaultPlayerName = { "DefaultPlayerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameModeBase, DefaultPlayerName), METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_DefaultPlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_DefaultPlayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_bUseSeamlessTravel_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/** Whether the game perform map travels using SeamlessTravel() which loads in the background and doesn't disconnect clients */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Whether the game perform map travels using SeamlessTravel() which loads in the background and doesn't disconnect clients" },
	};
#endif
	void Z_Construct_UClass_AGameModeBase_Statics::NewProp_bUseSeamlessTravel_SetBit(void* Obj)
	{
		((AGameModeBase*)Obj)->bUseSeamlessTravel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_bUseSeamlessTravel = { "bUseSeamlessTravel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AGameModeBase), &Z_Construct_UClass_AGameModeBase_Statics::NewProp_bUseSeamlessTravel_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_bUseSeamlessTravel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_bUseSeamlessTravel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_bStartPlayersAsSpectators_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/** Whether players should immediately spawn when logging in, or stay as spectators until they manually spawn */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Whether players should immediately spawn when logging in, or stay as spectators until they manually spawn" },
	};
#endif
	void Z_Construct_UClass_AGameModeBase_Statics::NewProp_bStartPlayersAsSpectators_SetBit(void* Obj)
	{
		((AGameModeBase*)Obj)->bStartPlayersAsSpectators = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_bStartPlayersAsSpectators = { "bStartPlayersAsSpectators", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AGameModeBase), &Z_Construct_UClass_AGameModeBase_Statics::NewProp_bStartPlayersAsSpectators_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_bStartPlayersAsSpectators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_bStartPlayersAsSpectators_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_bPauseable_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/** Whether the game is pauseable. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Whether the game is pauseable." },
	};
#endif
	void Z_Construct_UClass_AGameModeBase_Statics::NewProp_bPauseable_SetBit(void* Obj)
	{
		((AGameModeBase*)Obj)->bPauseable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_bPauseable = { "bPauseable", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AGameModeBase), &Z_Construct_UClass_AGameModeBase_Statics::NewProp_bPauseable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_bPauseable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_bPauseable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_OptionsString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameSessionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameStateClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_PlayerControllerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_PlayerStateClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_HUDClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_DefaultPawnClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_SpectatorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_ReplaySpectatorPlayerControllerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_ServerStatReplicatorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_ServerStatReplicator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_DefaultPlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_bUseSeamlessTravel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_bStartPlayersAsSpectators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_bPauseable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameModeBase_Statics::ClassParams = {
		&AGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameModeBase.OuterSingleton, Z_Construct_UClass_AGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameModeBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AGameModeBase>()
	{
		return AGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameModeBase);
	AGameModeBase::~AGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameModeBase, AGameModeBase::StaticClass, TEXT("AGameModeBase"), &Z_Registration_Info_UClass_AGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameModeBase), 4184228375U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_2259293250(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
