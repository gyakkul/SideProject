// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LobbyBeaconPlayerState.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyBeaconPlayerState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	LOBBY_API UClass* Z_Construct_UClass_ALobbyBeaconPlayerState();
	LOBBY_API UClass* Z_Construct_UClass_ALobbyBeaconPlayerState_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Lobby();
// End Cross Module References
	DEFINE_FUNCTION(ALobbyBeaconPlayerState::execOnRep_InLobby)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_InLobby();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALobbyBeaconPlayerState::execOnRep_PartyOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PartyOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALobbyBeaconPlayerState::execOnRep_UniqueId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_UniqueId();
		P_NATIVE_END;
	}
	void ALobbyBeaconPlayerState::StaticRegisterNativesALobbyBeaconPlayerState()
	{
		UClass* Class = ALobbyBeaconPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_InLobby", &ALobbyBeaconPlayerState::execOnRep_InLobby },
			{ "OnRep_PartyOwner", &ALobbyBeaconPlayerState::execOnRep_PartyOwner },
			{ "OnRep_UniqueId", &ALobbyBeaconPlayerState::execOnRep_UniqueId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_InLobby_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_InLobby_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Player has joined or left the lobby */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconPlayerState.h" },
		{ "ToolTip", "Player has joined or left the lobby" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_InLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyBeaconPlayerState, nullptr, "OnRep_InLobby", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_InLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_InLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_InLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_InLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_PartyOwner_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_PartyOwner_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Party owner has changed */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconPlayerState.h" },
		{ "ToolTip", "Party owner has changed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_PartyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyBeaconPlayerState, nullptr, "OnRep_PartyOwner", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_PartyOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_PartyOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_PartyOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_PartyOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_UniqueId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_UniqueId_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Unique Id has replicated */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconPlayerState.h" },
		{ "ToolTip", "Unique Id has replicated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_UniqueId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyBeaconPlayerState, nullptr, "OnRep_UniqueId", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_UniqueId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_UniqueId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_UniqueId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_UniqueId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALobbyBeaconPlayerState);
	UClass* Z_Construct_UClass_ALobbyBeaconPlayerState_NoRegister()
	{
		return ALobbyBeaconPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ALobbyBeaconPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartyOwnerUniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PartyOwnerUniqueId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInLobby_MetaData[];
#endif
		static void NewProp_bInLobby_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInLobby;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClientActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Lobby,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_InLobby, "OnRep_InLobby" }, // 3435091872
		{ &Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_PartyOwner, "OnRep_PartyOwner" }, // 205647222
		{ &Z_Construct_UFunction_ALobbyBeaconPlayerState_OnRep_UniqueId, "OnRep_UniqueId" }, // 526411929
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Lightweight representation of a player while connected to the game through the lobby\n * exists for the lifetime of a player whether they are in the lobby or not\n * assumption that the data here doesn't change often and locks when they actually join the server\n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "LobbyBeaconPlayerState.h" },
		{ "ModuleRelativePath", "Public/LobbyBeaconPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Lightweight representation of a player while connected to the game through the lobby\nexists for the lifetime of a player whether they are in the lobby or not\nassumption that the data here doesn't change often and locks when they actually join the server" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Comment", "/** Visible friendly player name */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconPlayerState.h" },
		{ "ToolTip", "Visible friendly player name" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALobbyBeaconPlayerState, DisplayName), METADATA_PARAMS(Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_UniqueId_MetaData[] = {
		{ "Comment", "/** Player unique id */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconPlayerState.h" },
		{ "ToolTip", "Player unique id" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_UniqueId = { "UniqueId", "OnRep_UniqueId", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALobbyBeaconPlayerState, UniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_UniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_UniqueId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_PartyOwnerUniqueId_MetaData[] = {
		{ "Comment", "/** Party owner id */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconPlayerState.h" },
		{ "ToolTip", "Party owner id" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_PartyOwnerUniqueId = { "PartyOwnerUniqueId", "OnRep_PartyOwner", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALobbyBeaconPlayerState, PartyOwnerUniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_PartyOwnerUniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_PartyOwnerUniqueId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_bInLobby_MetaData[] = {
		{ "Comment", "/** Is the player in the lobby or game */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconPlayerState.h" },
		{ "ToolTip", "Is the player in the lobby or game" },
	};
#endif
	void Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_bInLobby_SetBit(void* Obj)
	{
		((ALobbyBeaconPlayerState*)Obj)->bInLobby = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_bInLobby = { "bInLobby", "OnRep_InLobby", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALobbyBeaconPlayerState), &Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_bInLobby_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_bInLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_bInLobby_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_ClientActor_MetaData[] = {
		{ "Comment", "/** Reference to the beacon actor related to this player */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconPlayerState.h" },
		{ "ToolTip", "Reference to the beacon actor related to this player" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_ClientActor = { "ClientActor", nullptr, (EPropertyFlags)0x0014000000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALobbyBeaconPlayerState, ClientActor), Z_Construct_UClass_AOnlineBeaconClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_ClientActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_ClientActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_UniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_PartyOwnerUniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_bInLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::NewProp_ClientActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyBeaconPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::ClassParams = {
		&ALobbyBeaconPlayerState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALobbyBeaconPlayerState()
	{
		if (!Z_Registration_Info_UClass_ALobbyBeaconPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALobbyBeaconPlayerState.OuterSingleton, Z_Construct_UClass_ALobbyBeaconPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALobbyBeaconPlayerState.OuterSingleton;
	}
	template<> LOBBY_API UClass* StaticClass<ALobbyBeaconPlayerState>()
	{
		return ALobbyBeaconPlayerState::StaticClass();
	}

	void ALobbyBeaconPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_DisplayName(TEXT("DisplayName"));
		static const FName Name_UniqueId(TEXT("UniqueId"));
		static const FName Name_PartyOwnerUniqueId(TEXT("PartyOwnerUniqueId"));
		static const FName Name_bInLobby(TEXT("bInLobby"));
		static const FName Name_ClientActor(TEXT("ClientActor"));

		const bool bIsValid = true
			&& Name_DisplayName == ClassReps[(int32)ENetFields_Private::DisplayName].Property->GetFName()
			&& Name_UniqueId == ClassReps[(int32)ENetFields_Private::UniqueId].Property->GetFName()
			&& Name_PartyOwnerUniqueId == ClassReps[(int32)ENetFields_Private::PartyOwnerUniqueId].Property->GetFName()
			&& Name_bInLobby == ClassReps[(int32)ENetFields_Private::bInLobby].Property->GetFName()
			&& Name_ClientActor == ClassReps[(int32)ENetFields_Private::ClientActor].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALobbyBeaconPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyBeaconPlayerState);
	ALobbyBeaconPlayerState::~ALobbyBeaconPlayerState() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALobbyBeaconPlayerState, ALobbyBeaconPlayerState::StaticClass, TEXT("ALobbyBeaconPlayerState"), &Z_Registration_Info_UClass_ALobbyBeaconPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyBeaconPlayerState), 2427397018U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_345032549(TEXT("/Script/Lobby"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
