// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LobbyBeaconState.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyBeaconState() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	LOBBY_API UClass* Z_Construct_UClass_ALobbyBeaconPlayerState_NoRegister();
	LOBBY_API UClass* Z_Construct_UClass_ALobbyBeaconState();
	LOBBY_API UClass* Z_Construct_UClass_ALobbyBeaconState_NoRegister();
	LOBBY_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo();
	LOBBY_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	UPackage* Z_Construct_UPackage__Script_Lobby();
// End Cross Module References

static_assert(std::is_polymorphic<FLobbyPlayerStateActorInfo>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FLobbyPlayerStateActorInfo cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LobbyPlayerStateActorInfo;
class UScriptStruct* FLobbyPlayerStateActorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyPlayerStateActorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LobbyPlayerStateActorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo, (UObject*)Z_Construct_UPackage__Script_Lobby(), TEXT("LobbyPlayerStateActorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LobbyPlayerStateActorInfo.OuterSingleton;
}
template<> LOBBY_API UScriptStruct* StaticStruct<FLobbyPlayerStateActorInfo>()
{
	return FLobbyPlayerStateActorInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyPlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LobbyPlayerState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Replication structure for a single beacon player state\n */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
		{ "ToolTip", "Replication structure for a single beacon player state" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyPlayerStateActorInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::NewProp_LobbyPlayerState_MetaData[] = {
		{ "Comment", "/** Actual player state actor */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
		{ "ToolTip", "Actual player state actor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::NewProp_LobbyPlayerState = { "LobbyPlayerState", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyPlayerStateActorInfo, LobbyPlayerState), Z_Construct_UClass_ALobbyBeaconPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::NewProp_LobbyPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::NewProp_LobbyPlayerState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::NewProp_LobbyPlayerState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Lobby,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"LobbyPlayerStateActorInfo",
		sizeof(FLobbyPlayerStateActorInfo),
		alignof(FLobbyPlayerStateActorInfo),
		Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_LobbyPlayerStateActorInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LobbyPlayerStateActorInfo.InnerSingleton, Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LobbyPlayerStateActorInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLobbyPlayerStateInfoArray>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FLobbyPlayerStateInfoArray cannot be polymorphic unless super FFastArraySerializer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LobbyPlayerStateInfoArray;
class UScriptStruct* FLobbyPlayerStateInfoArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LobbyPlayerStateInfoArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LobbyPlayerStateInfoArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray, (UObject*)Z_Construct_UPackage__Script_Lobby(), TEXT("LobbyPlayerStateInfoArray"));
	}
	return Z_Registration_Info_UScriptStruct_LobbyPlayerStateInfoArray.OuterSingleton;
}
template<> LOBBY_API UScriptStruct* StaticStruct<FLobbyPlayerStateInfoArray>()
{
	return FLobbyPlayerStateInfoArray::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
	UE_NET_IMPLEMENT_FASTARRAY(FLobbyPlayerStateInfoArray);
#else
	UE_NET_IMPLEMENT_FASTARRAY_STUB(FLobbyPlayerStateInfoArray);
#endif
	struct Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Players_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Players;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct for fast TArray replication of lobby player state */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
		{ "ToolTip", "Struct for fast TArray replication of lobby player state" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyPlayerStateInfoArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo, METADATA_PARAMS(nullptr, 0) }; // 2919685654
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::NewProp_Players_MetaData[] = {
		{ "Comment", "/** All of the players in the lobby */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
		{ "ToolTip", "All of the players in the lobby" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyPlayerStateInfoArray, Players), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::NewProp_Players_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::NewProp_Players_MetaData)) }; // 2919685654
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::NewProp_ParentState_MetaData[] = {
		{ "Comment", "/** Owning lobby beacon for this array of players */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
		{ "ToolTip", "Owning lobby beacon for this array of players" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::NewProp_ParentState = { "ParentState", nullptr, (EPropertyFlags)0x0044000080000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLobbyPlayerStateInfoArray, ParentState), Z_Construct_UClass_ALobbyBeaconState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::NewProp_ParentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::NewProp_ParentState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::NewProp_Players_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::NewProp_Players,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::NewProp_ParentState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Lobby,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"LobbyPlayerStateInfoArray",
		sizeof(FLobbyPlayerStateInfoArray),
		alignof(FLobbyPlayerStateInfoArray),
		Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray()
	{
		if (!Z_Registration_Info_UScriptStruct_LobbyPlayerStateInfoArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LobbyPlayerStateInfoArray.InnerSingleton, Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LobbyPlayerStateInfoArray.InnerSingleton;
	}
	DEFINE_FUNCTION(ALobbyBeaconState::execOnRep_WaitForPlayersTimeRemaining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_WaitForPlayersTimeRemaining();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALobbyBeaconState::execOnRep_LobbyStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LobbyStarted();
		P_NATIVE_END;
	}
	void ALobbyBeaconState::StaticRegisterNativesALobbyBeaconState()
	{
		UClass* Class = ALobbyBeaconState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_LobbyStarted", &ALobbyBeaconState::execOnRep_LobbyStarted },
			{ "OnRep_WaitForPlayersTimeRemaining", &ALobbyBeaconState::execOnRep_WaitForPlayersTimeRemaining },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALobbyBeaconState_OnRep_LobbyStarted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconState_OnRep_LobbyStarted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Handle the lobby starting */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
		{ "ToolTip", "Handle the lobby starting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyBeaconState_OnRep_LobbyStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyBeaconState, nullptr, "OnRep_LobbyStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconState_OnRep_LobbyStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconState_OnRep_LobbyStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyBeaconState_OnRep_LobbyStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyBeaconState_OnRep_LobbyStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Handle notification of time left to wait for lobby to start */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
		{ "ToolTip", "Handle notification of time left to wait for lobby to start" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyBeaconState, nullptr, "OnRep_WaitForPlayersTimeRemaining", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALobbyBeaconState);
	UClass* Z_Construct_UClass_ALobbyBeaconState_NoRegister()
	{
		return ALobbyBeaconState::StaticClass();
	}
	struct Z_Construct_UClass_ALobbyBeaconState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyBeaconPlayerStateClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LobbyBeaconPlayerStateClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLobbyStarted_MetaData[];
#endif
		static void NewProp_bLobbyStarted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLobbyStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaitForPlayersTimeRemaining_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaitForPlayersTimeRemaining;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Players;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALobbyBeaconState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Lobby,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALobbyBeaconState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALobbyBeaconState_OnRep_LobbyStarted, "OnRep_LobbyStarted" }, // 3251884476
		{ &Z_Construct_UFunction_ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining, "OnRep_WaitForPlayersTimeRemaining" }, // 2299384663
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyBeaconState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Shared state of the game from the lobby perspective\n * Duplicates much of the data in the traditional AGameState object for sharing with players\n * connected via beacon only\n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "LobbyBeaconState.h" },
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Shared state of the game from the lobby perspective\nDuplicates much of the data in the traditional AGameState object for sharing with players\nconnected via beacon only" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_MaxPlayers_MetaData[] = {
		{ "Comment", "/** Total number of players allowed in the lobby */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
		{ "ToolTip", "Total number of players allowed in the lobby" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALobbyBeaconState, MaxPlayers), METADATA_PARAMS(Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_MaxPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_MaxPlayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_LobbyBeaconPlayerStateClass_MetaData[] = {
		{ "Comment", "/** Class to use for lobby beacon player states */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
		{ "ToolTip", "Class to use for lobby beacon player states" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_LobbyBeaconPlayerStateClass = { "LobbyBeaconPlayerStateClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALobbyBeaconState, LobbyBeaconPlayerStateClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ALobbyBeaconPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_LobbyBeaconPlayerStateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_LobbyBeaconPlayerStateClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_bLobbyStarted_MetaData[] = {
		{ "Comment", "/** Has the lobby already been started */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
		{ "ToolTip", "Has the lobby already been started" },
	};
#endif
	void Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_bLobbyStarted_SetBit(void* Obj)
	{
		((ALobbyBeaconState*)Obj)->bLobbyStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_bLobbyStarted = { "bLobbyStarted", "OnRep_LobbyStarted", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALobbyBeaconState), &Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_bLobbyStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_bLobbyStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_bLobbyStarted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_WaitForPlayersTimeRemaining_MetaData[] = {
		{ "Comment", "/** Amount of time waiting for other players before starting the lobby */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
		{ "ToolTip", "Amount of time waiting for other players before starting the lobby" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_WaitForPlayersTimeRemaining = { "WaitForPlayersTimeRemaining", "OnRep_WaitForPlayersTimeRemaining", (EPropertyFlags)0x0020080100004020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALobbyBeaconState, WaitForPlayersTimeRemaining), METADATA_PARAMS(Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_WaitForPlayersTimeRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_WaitForPlayersTimeRemaining_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_Players_MetaData[] = {
		{ "Comment", "/** Array of players currently in the game, lobby or otherwise */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconState.h" },
		{ "ToolTip", "Array of players currently in the game, lobby or otherwise" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALobbyBeaconState, Players), Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray, METADATA_PARAMS(Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_Players_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_Players_MetaData)) }; // 3601202353
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALobbyBeaconState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_MaxPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_LobbyBeaconPlayerStateClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_bLobbyStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_WaitForPlayersTimeRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconState_Statics::NewProp_Players,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALobbyBeaconState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyBeaconState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALobbyBeaconState_Statics::ClassParams = {
		&ALobbyBeaconState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALobbyBeaconState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconState_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALobbyBeaconState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALobbyBeaconState()
	{
		if (!Z_Registration_Info_UClass_ALobbyBeaconState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALobbyBeaconState.OuterSingleton, Z_Construct_UClass_ALobbyBeaconState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALobbyBeaconState.OuterSingleton;
	}
	template<> LOBBY_API UClass* StaticClass<ALobbyBeaconState>()
	{
		return ALobbyBeaconState::StaticClass();
	}

	void ALobbyBeaconState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bLobbyStarted(TEXT("bLobbyStarted"));
		static const FName Name_WaitForPlayersTimeRemaining(TEXT("WaitForPlayersTimeRemaining"));
		static const FName Name_Players(TEXT("Players"));

		const bool bIsValid = true
			&& Name_bLobbyStarted == ClassReps[(int32)ENetFields_Private::bLobbyStarted].Property->GetFName()
			&& Name_WaitForPlayersTimeRemaining == ClassReps[(int32)ENetFields_Private::WaitForPlayersTimeRemaining].Property->GetFName()
			&& Name_Players == ClassReps[(int32)ENetFields_Private::Players].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALobbyBeaconState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyBeaconState);
	ALobbyBeaconState::~ALobbyBeaconState() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_Statics::ScriptStructInfo[] = {
		{ FLobbyPlayerStateActorInfo::StaticStruct, Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics::NewStructOps, TEXT("LobbyPlayerStateActorInfo"), &Z_Registration_Info_UScriptStruct_LobbyPlayerStateActorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyPlayerStateActorInfo), 2919685654U) },
		{ FLobbyPlayerStateInfoArray::StaticStruct, Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics::NewStructOps, TEXT("LobbyPlayerStateInfoArray"), &Z_Registration_Info_UScriptStruct_LobbyPlayerStateInfoArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLobbyPlayerStateInfoArray), 3601202353U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALobbyBeaconState, ALobbyBeaconState::StaticClass, TEXT("ALobbyBeaconState"), &Z_Registration_Info_UClass_ALobbyBeaconState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyBeaconState), 3004028063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_2046704721(TEXT("/Script/Lobby"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
