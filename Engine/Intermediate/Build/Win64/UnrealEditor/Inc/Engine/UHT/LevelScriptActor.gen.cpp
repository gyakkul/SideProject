// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LevelScriptActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelScriptActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(ALevelScriptActor::execSetCinematicMode)
	{
		P_GET_UBOOL(Z_Param_bCinematicMode);
		P_GET_UBOOL(Z_Param_bHidePlayer);
		P_GET_UBOOL(Z_Param_bAffectsHUD);
		P_GET_UBOOL(Z_Param_bAffectsMovement);
		P_GET_UBOOL(Z_Param_bAffectsTurning);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCinematicMode(Z_Param_bCinematicMode,Z_Param_bHidePlayer,Z_Param_bAffectsHUD,Z_Param_bAffectsMovement,Z_Param_bAffectsTurning);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelScriptActor::execRemoteEvent)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoteEvent(Z_Param_EventName);
		P_NATIVE_END;
	}
	struct LevelScriptActor_eventWorldOriginLocationChanged_Parms
	{
		FIntVector OldOriginLocation;
		FIntVector NewOriginLocation;
	};
	static FName NAME_ALevelScriptActor_LevelReset = FName(TEXT("LevelReset"));
	void ALevelScriptActor::LevelReset()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALevelScriptActor_LevelReset),NULL);
	}
	static FName NAME_ALevelScriptActor_WorldOriginLocationChanged = FName(TEXT("WorldOriginLocationChanged"));
	void ALevelScriptActor::WorldOriginLocationChanged(FIntVector OldOriginLocation, FIntVector NewOriginLocation)
	{
		LevelScriptActor_eventWorldOriginLocationChanged_Parms Parms;
		Parms.OldOriginLocation=OldOriginLocation;
		Parms.NewOriginLocation=NewOriginLocation;
		ProcessEvent(FindFunctionChecked(NAME_ALevelScriptActor_WorldOriginLocationChanged),&Parms);
	}
	void ALevelScriptActor::StaticRegisterNativesALevelScriptActor()
	{
		UClass* Class = ALevelScriptActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoteEvent", &ALevelScriptActor::execRemoteEvent },
			{ "SetCinematicMode", &ALevelScriptActor::execSetCinematicMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALevelScriptActor_LevelReset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelScriptActor_LevelReset_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelScriptActor.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelScriptActor_LevelReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelScriptActor, nullptr, "LevelReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020804, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelScriptActor_LevelReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelScriptActor_LevelReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelScriptActor_LevelReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelScriptActor_LevelReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics
	{
		struct LevelScriptActor_eventRemoteEvent_Parms
		{
			FName EventName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelScriptActor_eventRemoteEvent_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelScriptActor_eventRemoteEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelScriptActor_eventRemoteEvent_Parms), &Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Miscellaneous" },
		{ "Comment", "/** Tries to find an event named \"EventName\" on all other levels, and calls it */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelScriptActor.h" },
		{ "ToolTip", "Tries to find an event named \"EventName\" on all other levels, and calls it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelScriptActor, nullptr, "RemoteEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::LevelScriptActor_eventRemoteEvent_Parms), Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelScriptActor_RemoteEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics
	{
		struct LevelScriptActor_eventSetCinematicMode_Parms
		{
			bool bCinematicMode;
			bool bHidePlayer;
			bool bAffectsHUD;
			bool bAffectsMovement;
			bool bAffectsTurning;
		};
		static void NewProp_bCinematicMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCinematicMode;
		static void NewProp_bHidePlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidePlayer;
		static void NewProp_bAffectsHUD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsHUD;
		static void NewProp_bAffectsMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsMovement;
		static void NewProp_bAffectsTurning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsTurning;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bCinematicMode_SetBit(void* Obj)
	{
		((LevelScriptActor_eventSetCinematicMode_Parms*)Obj)->bCinematicMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bCinematicMode = { "bCinematicMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelScriptActor_eventSetCinematicMode_Parms), &Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bCinematicMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bHidePlayer_SetBit(void* Obj)
	{
		((LevelScriptActor_eventSetCinematicMode_Parms*)Obj)->bHidePlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bHidePlayer = { "bHidePlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelScriptActor_eventSetCinematicMode_Parms), &Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bHidePlayer_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsHUD_SetBit(void* Obj)
	{
		((LevelScriptActor_eventSetCinematicMode_Parms*)Obj)->bAffectsHUD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsHUD = { "bAffectsHUD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelScriptActor_eventSetCinematicMode_Parms), &Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsHUD_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsMovement_SetBit(void* Obj)
	{
		((LevelScriptActor_eventSetCinematicMode_Parms*)Obj)->bAffectsMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsMovement = { "bAffectsMovement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelScriptActor_eventSetCinematicMode_Parms), &Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsMovement_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsTurning_SetBit(void* Obj)
	{
		((LevelScriptActor_eventSetCinematicMode_Parms*)Obj)->bAffectsTurning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsTurning = { "bAffectsTurning", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelScriptActor_eventSetCinematicMode_Parms), &Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsTurning_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bCinematicMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bHidePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsHUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsTurning,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Game|Cinematic" },
		{ "Comment", "/**\n\x09 * Sets the cinematic mode on all PlayerControllers\n\x09 *\n\x09 * @param\x09""bInCinematicMode\x09specify true if the player is entering cinematic mode; false if the player is leaving cinematic mode.\n\x09 * @param\x09""bHidePlayer\x09\x09\x09specify true to hide the player's pawn (only relevant if bInCinematicMode is true)\n\x09 * @param\x09""bAffectsHUD\x09\x09\x09specify true if we should show/hide the HUD to match the value of bCinematicMode\n\x09 * @param\x09""bAffectsMovement\x09specify true to disable movement in cinematic mode, enable it when leaving\n\x09 * @param\x09""bAffectsTurning\x09\x09specify true to disable turning in cinematic mode or enable it when leaving\n\x09 */" },
		{ "CPP_Default_bAffectsHUD", "true" },
		{ "CPP_Default_bAffectsMovement", "false" },
		{ "CPP_Default_bAffectsTurning", "false" },
		{ "CPP_Default_bHidePlayer", "true" },
		{ "ModuleRelativePath", "Classes/Engine/LevelScriptActor.h" },
		{ "ToolTip", "Sets the cinematic mode on all PlayerControllers\n\n@param       bInCinematicMode        specify true if the player is entering cinematic mode; false if the player is leaving cinematic mode.\n@param       bHidePlayer                     specify true to hide the player's pawn (only relevant if bInCinematicMode is true)\n@param       bAffectsHUD                     specify true if we should show/hide the HUD to match the value of bCinematicMode\n@param       bAffectsMovement        specify true to disable movement in cinematic mode, enable it when leaving\n@param       bAffectsTurning         specify true to disable turning in cinematic mode or enable it when leaving" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelScriptActor, nullptr, "SetCinematicMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::LevelScriptActor_eventSetCinematicMode_Parms), Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldOriginLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewOriginLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::NewProp_OldOriginLocation = { "OldOriginLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelScriptActor_eventWorldOriginLocationChanged_Parms, OldOriginLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::NewProp_NewOriginLocation = { "NewOriginLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelScriptActor_eventWorldOriginLocationChanged_Parms, NewOriginLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::NewProp_OldOriginLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::NewProp_NewOriginLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Event called on world origin location changes\n\x09 *\n\x09 * @param\x09OldOriginLocation\x09Previous world origin location\n\x09 * @param\x09NewOriginLocation\x09New world origin location\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelScriptActor.h" },
		{ "ToolTip", "Event called on world origin location changes\n\n@param       OldOriginLocation       Previous world origin location\n@param       NewOriginLocation       New world origin location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelScriptActor, nullptr, "WorldOriginLocationChanged", nullptr, nullptr, sizeof(LevelScriptActor_eventWorldOriginLocationChanged_Parms), Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelScriptActor);
	UClass* Z_Construct_UClass_ALevelScriptActor_NoRegister()
	{
		return ALevelScriptActor::StaticClass();
	}
	struct Z_Construct_UClass_ALevelScriptActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInputEnabled_MetaData[];
#endif
		static void NewProp_bInputEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInputEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelScriptActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALevelScriptActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelScriptActor_LevelReset, "LevelReset" }, // 2765880020
		{ &Z_Construct_UFunction_ALevelScriptActor_RemoteEvent, "RemoteEvent" }, // 245002979
		{ &Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode, "SetCinematicMode" }, // 3981430418
		{ &Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged, "WorldOriginLocationChanged" }, // 859936923
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelScriptActor_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "Comment", "/**\n * ALevelScriptActor is the base class for classes generated by \n * ULevelScriptBlueprints. ALevelScriptActor instances are hidden actors that \n * exist within a level, and can execute level-wide logic (operating on specific\n * actor instances within the level). The level-script's functionality is defined\n * inside the ULevelScriptBlueprint itself (using the blueprint's node-based \n * interface).\n *\n * @see AActor\n * @see https://docs.unrealengine.com/latest/INT/Engine/Blueprints/UserGuide/Types/LevelBlueprint/index.html\n * @see ULevelScriptBlueprint\n * @see https://docs.unrealengine.com/latest/INT/Engine/Blueprints/index.html\n * @see UBlueprint\n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Engine/LevelScriptActor.h" },
		{ "KismetHideOverrides", "ReceiveAnyDamage,ReceivePointDamage,ReceiveRadialDamage,ReceiveActorBeginOverlap,ReceiveActorEndOverlap,ReceiveHit,ReceiveDestroyed,ReceiveActorBeginCursorOver,ReceiveActorEndCursorOver,ReceiveActorOnClicked,ReceiveActorOnReleased,ReceiveActorOnInputTouchBegin,ReceiveActorOnInputTouchEnd,ReceiveActorOnInputTouchEnter,ReceiveActorOnInputTouchLeave" },
		{ "ModuleRelativePath", "Classes/Engine/LevelScriptActor.h" },
		{ "ToolTip", "ALevelScriptActor is the base class for classes generated by\nULevelScriptBlueprints. ALevelScriptActor instances are hidden actors that\nexist within a level, and can execute level-wide logic (operating on specific\nactor instances within the level). The level-script's functionality is defined\ninside the ULevelScriptBlueprint itself (using the blueprint's node-based\ninterface).\n\n@see AActor\n@see https://docs.unrealengine.com/latest/INT/Engine/Blueprints/UserGuide/Types/LevelBlueprint/index.html\n@see ULevelScriptBlueprint\n@see https://docs.unrealengine.com/latest/INT/Engine/Blueprints/index.html\n@see UBlueprint" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelScriptActor_Statics::NewProp_bInputEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelScriptActor.h" },
	};
#endif
	void Z_Construct_UClass_ALevelScriptActor_Statics::NewProp_bInputEnabled_SetBit(void* Obj)
	{
		((ALevelScriptActor*)Obj)->bInputEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelScriptActor_Statics::NewProp_bInputEnabled = { "bInputEnabled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ALevelScriptActor), &Z_Construct_UClass_ALevelScriptActor_Statics::NewProp_bInputEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelScriptActor_Statics::NewProp_bInputEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelScriptActor_Statics::NewProp_bInputEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelScriptActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelScriptActor_Statics::NewProp_bInputEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelScriptActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelScriptActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelScriptActor_Statics::ClassParams = {
		&ALevelScriptActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALevelScriptActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelScriptActor_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelScriptActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelScriptActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelScriptActor()
	{
		if (!Z_Registration_Info_UClass_ALevelScriptActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelScriptActor.OuterSingleton, Z_Construct_UClass_ALevelScriptActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALevelScriptActor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ALevelScriptActor>()
	{
		return ALevelScriptActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelScriptActor);
	ALevelScriptActor::~ALevelScriptActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALevelScriptActor, ALevelScriptActor::StaticClass, TEXT("ALevelScriptActor"), &Z_Registration_Info_UClass_ALevelScriptActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelScriptActor), 3527625531U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_2081073017(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
