// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/SpectatorBeaconState.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "../Public/OnlineBeaconReservation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpectatorBeaconState() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_USpectatorBeaconState();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_USpectatorBeaconState_NoRegister();
	ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerReservation();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FSpectatorReservation();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpectatorReservationResult;
	static UEnum* ESpectatorReservationResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpectatorReservationResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpectatorReservationResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("ESpectatorReservationResult"));
		}
		return Z_Registration_Info_UEnum_ESpectatorReservationResult.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<ESpectatorReservationResult::Type>()
	{
		return ESpectatorReservationResult_StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult_Statics::Enumerators[] = {
		{ "ESpectatorReservationResult::NoResult", (int64)ESpectatorReservationResult::NoResult },
		{ "ESpectatorReservationResult::RequestPending", (int64)ESpectatorReservationResult::RequestPending },
		{ "ESpectatorReservationResult::GeneralError", (int64)ESpectatorReservationResult::GeneralError },
		{ "ESpectatorReservationResult::SpectatorLimitReached", (int64)ESpectatorReservationResult::SpectatorLimitReached },
		{ "ESpectatorReservationResult::IncorrectPlayerCount", (int64)ESpectatorReservationResult::IncorrectPlayerCount },
		{ "ESpectatorReservationResult::RequestTimedOut", (int64)ESpectatorReservationResult::RequestTimedOut },
		{ "ESpectatorReservationResult::ReservationDuplicate", (int64)ESpectatorReservationResult::ReservationDuplicate },
		{ "ESpectatorReservationResult::ReservationNotFound", (int64)ESpectatorReservationResult::ReservationNotFound },
		{ "ESpectatorReservationResult::ReservationAccepted", (int64)ESpectatorReservationResult::ReservationAccepted },
		{ "ESpectatorReservationResult::ReservationDenied", (int64)ESpectatorReservationResult::ReservationDenied },
		{ "ESpectatorReservationResult::ReservationDenied_CrossPlayRestriction", (int64)ESpectatorReservationResult::ReservationDenied_CrossPlayRestriction },
		{ "ESpectatorReservationResult::ReservationDenied_Banned", (int64)ESpectatorReservationResult::ReservationDenied_Banned },
		{ "ESpectatorReservationResult::ReservationRequestCanceled", (int64)ESpectatorReservationResult::ReservationRequestCanceled },
		{ "ESpectatorReservationResult::ReservationInvalid", (int64)ESpectatorReservationResult::ReservationInvalid },
		{ "ESpectatorReservationResult::BadSessionId", (int64)ESpectatorReservationResult::BadSessionId },
		{ "ESpectatorReservationResult::ReservationDenied_ContainsExistingPlayers", (int64)ESpectatorReservationResult::ReservationDenied_ContainsExistingPlayers },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult_Statics::Enum_MetaDataParams[] = {
		{ "BadSessionId.Comment", "// The reservation was rejected because this was the wrong session\n" },
		{ "BadSessionId.Name", "ESpectatorReservationResult::BadSessionId" },
		{ "BadSessionId.ToolTip", "The reservation was rejected because this was the wrong session" },
		{ "Comment", "/** The result code that will be returned during spectator reservation */" },
		{ "GeneralError.Comment", "/** An unknown error happened. */" },
		{ "GeneralError.Name", "ESpectatorReservationResult::GeneralError" },
		{ "GeneralError.ToolTip", "An unknown error happened." },
		{ "IncorrectPlayerCount.Comment", "/** Wrong number of players to join the session. */" },
		{ "IncorrectPlayerCount.Name", "ESpectatorReservationResult::IncorrectPlayerCount" },
		{ "IncorrectPlayerCount.ToolTip", "Wrong number of players to join the session." },
		{ "ModuleRelativePath", "Public/SpectatorBeaconState.h" },
		{ "NoResult.Comment", "/** Empty state. */" },
		{ "NoResult.Name", "ESpectatorReservationResult::NoResult" },
		{ "NoResult.ToolTip", "Empty state." },
		{ "RequestPending.Comment", "/** Pending request due to async operation, server will contact client shortly. */" },
		{ "RequestPending.Name", "ESpectatorReservationResult::RequestPending" },
		{ "RequestPending.ToolTip", "Pending request due to async operation, server will contact client shortly." },
		{ "RequestTimedOut.Comment", "/** No response from the host. */" },
		{ "RequestTimedOut.Name", "ESpectatorReservationResult::RequestTimedOut" },
		{ "RequestTimedOut.ToolTip", "No response from the host." },
		{ "ReservationAccepted.Comment", "/** Space was available and it's time to join. */" },
		{ "ReservationAccepted.Name", "ESpectatorReservationResult::ReservationAccepted" },
		{ "ReservationAccepted.ToolTip", "Space was available and it's time to join." },
		{ "ReservationDenied.Comment", "/** The beacon is paused and not accepting new connections. */" },
		{ "ReservationDenied.Name", "ESpectatorReservationResult::ReservationDenied" },
		{ "ReservationDenied.ToolTip", "The beacon is paused and not accepting new connections." },
		{ "ReservationDenied_Banned.Comment", "/** This player is banned. */" },
		{ "ReservationDenied_Banned.Name", "ESpectatorReservationResult::ReservationDenied_Banned" },
		{ "ReservationDenied_Banned.ToolTip", "This player is banned." },
		{ "ReservationDenied_ContainsExistingPlayers.Comment", "/** The reservation contains players already in this game */" },
		{ "ReservationDenied_ContainsExistingPlayers.Name", "ESpectatorReservationResult::ReservationDenied_ContainsExistingPlayers" },
		{ "ReservationDenied_ContainsExistingPlayers.ToolTip", "The reservation contains players already in this game" },
		{ "ReservationDenied_CrossPlayRestriction.Comment", "/** Some kind of cross play restriction prevents this spectator from joining */" },
		{ "ReservationDenied_CrossPlayRestriction.Name", "ESpectatorReservationResult::ReservationDenied_CrossPlayRestriction" },
		{ "ReservationDenied_CrossPlayRestriction.ToolTip", "Some kind of cross play restriction prevents this spectator from joining" },
		{ "ReservationDuplicate.Comment", "/** Already have a reservation entry for the requesting spectator. */" },
		{ "ReservationDuplicate.Name", "ESpectatorReservationResult::ReservationDuplicate" },
		{ "ReservationDuplicate.ToolTip", "Already have a reservation entry for the requesting spectator." },
		{ "ReservationInvalid.Comment", "// The reservation was rejected because it was badly formed\n" },
		{ "ReservationInvalid.Name", "ESpectatorReservationResult::ReservationInvalid" },
		{ "ReservationInvalid.ToolTip", "The reservation was rejected because it was badly formed" },
		{ "ReservationNotFound.Comment", "/** Couldn't find the spectator specified for a reservation update request. */" },
		{ "ReservationNotFound.Name", "ESpectatorReservationResult::ReservationNotFound" },
		{ "ReservationNotFound.ToolTip", "Couldn't find the spectator specified for a reservation update request." },
		{ "ReservationRequestCanceled.Comment", "/** The reservation request was canceled before being sent. */" },
		{ "ReservationRequestCanceled.Name", "ESpectatorReservationResult::ReservationRequestCanceled" },
		{ "ReservationRequestCanceled.ToolTip", "The reservation request was canceled before being sent." },
		{ "SpectatorLimitReached.Comment", "/** All available reservations are booked. */" },
		{ "SpectatorLimitReached.Name", "ESpectatorReservationResult::SpectatorLimitReached" },
		{ "SpectatorLimitReached.ToolTip", "All available reservations are booked." },
		{ "ToolTip", "The result code that will be returned during spectator reservation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
		nullptr,
		"ESpectatorReservationResult",
		"ESpectatorReservationResult::Type",
		Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult()
	{
		if (!Z_Registration_Info_UEnum_ESpectatorReservationResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpectatorReservationResult.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpectatorReservationResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpectatorReservation;
class UScriptStruct* FSpectatorReservation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpectatorReservation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpectatorReservation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpectatorReservation, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("SpectatorReservation"));
	}
	return Z_Registration_Info_UScriptStruct_SpectatorReservation.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FSpectatorReservation>()
{
	return FSpectatorReservation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpectatorReservation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpectatorId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpectatorId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spectator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spectator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpectatorReservation_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A whole Spectator reservation */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconState.h" },
		{ "ToolTip", "A whole Spectator reservation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpectatorReservation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewProp_SpectatorId_MetaData[] = {
		{ "Comment", "/** Player initiating the request */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconState.h" },
		{ "ToolTip", "Player initiating the request" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewProp_SpectatorId = { "SpectatorId", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpectatorReservation, SpectatorId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewProp_SpectatorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewProp_SpectatorId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewProp_Spectator_MetaData[] = {
		{ "Comment", "/** Spectator reservation */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconState.h" },
		{ "ToolTip", "Spectator reservation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewProp_Spectator = { "Spectator", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpectatorReservation, Spectator), Z_Construct_UScriptStruct_FPlayerReservation, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewProp_Spectator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewProp_Spectator_MetaData)) }; // 3296138963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpectatorReservation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewProp_SpectatorId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewProp_Spectator,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpectatorReservation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
		nullptr,
		&NewStructOps,
		"SpectatorReservation",
		sizeof(FSpectatorReservation),
		alignof(FSpectatorReservation),
		Z_Construct_UScriptStruct_FSpectatorReservation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpectatorReservation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpectatorReservation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpectatorReservation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpectatorReservation()
	{
		if (!Z_Registration_Info_UScriptStruct_SpectatorReservation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpectatorReservation.InnerSingleton, Z_Construct_UScriptStruct_FSpectatorReservation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpectatorReservation.InnerSingleton;
	}
	void USpectatorBeaconState::StaticRegisterNativesUSpectatorBeaconState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpectatorBeaconState);
	UClass* Z_Construct_UClass_USpectatorBeaconState_NoRegister()
	{
		return USpectatorBeaconState::StaticClass();
	}
	struct Z_Construct_UClass_USpectatorBeaconState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumConsumedReservations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumConsumedReservations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxReservations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxReservations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRestrictCrossConsole_MetaData[];
#endif
		static void NewProp_bRestrictCrossConsole_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestrictCrossConsole;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Reservations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reservations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Reservations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpectatorBeaconState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectatorBeaconState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A beacon host used for taking reservations for an existing game session\n*/" },
		{ "IncludePath", "SpectatorBeaconState.h" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconState.h" },
		{ "ToolTip", "A beacon host used for taking reservations for an existing game session" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_SessionName_MetaData[] = {
		{ "Comment", "/** Session tied to the beacon */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconState.h" },
		{ "ToolTip", "Session tied to the beacon" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpectatorBeaconState, SessionName), METADATA_PARAMS(Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_SessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_SessionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_NumConsumedReservations_MetaData[] = {
		{ "Comment", "/** Number of currently consumed reservations */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconState.h" },
		{ "ToolTip", "Number of currently consumed reservations" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_NumConsumedReservations = { "NumConsumedReservations", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpectatorBeaconState, NumConsumedReservations), METADATA_PARAMS(Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_NumConsumedReservations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_NumConsumedReservations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_MaxReservations_MetaData[] = {
		{ "Comment", "/** Maximum allowed reservations */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconState.h" },
		{ "ToolTip", "Maximum allowed reservations" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_MaxReservations = { "MaxReservations", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpectatorBeaconState, MaxReservations), METADATA_PARAMS(Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_MaxReservations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_MaxReservations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_bRestrictCrossConsole_MetaData[] = {
		{ "Comment", "/** Are multiple consoles types allowed to play together */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconState.h" },
		{ "ToolTip", "Are multiple consoles types allowed to play together" },
	};
#endif
	void Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_bRestrictCrossConsole_SetBit(void* Obj)
	{
		((USpectatorBeaconState*)Obj)->bRestrictCrossConsole = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_bRestrictCrossConsole = { "bRestrictCrossConsole", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USpectatorBeaconState), &Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_bRestrictCrossConsole_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_bRestrictCrossConsole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_bRestrictCrossConsole_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_Reservations_Inner = { "Reservations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSpectatorReservation, METADATA_PARAMS(nullptr, 0) }; // 2059637467
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_Reservations_MetaData[] = {
		{ "Comment", "/** Current reservations in the system */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconState.h" },
		{ "ToolTip", "Current reservations in the system" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_Reservations = { "Reservations", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpectatorBeaconState, Reservations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_Reservations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_Reservations_MetaData)) }; // 2059637467
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpectatorBeaconState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_NumConsumedReservations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_MaxReservations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_bRestrictCrossConsole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_Reservations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_Reservations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpectatorBeaconState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpectatorBeaconState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpectatorBeaconState_Statics::ClassParams = {
		&USpectatorBeaconState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpectatorBeaconState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpectatorBeaconState_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_USpectatorBeaconState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpectatorBeaconState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpectatorBeaconState()
	{
		if (!Z_Registration_Info_UClass_USpectatorBeaconState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpectatorBeaconState.OuterSingleton, Z_Construct_UClass_USpectatorBeaconState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpectatorBeaconState.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<USpectatorBeaconState>()
	{
		return USpectatorBeaconState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpectatorBeaconState);
	USpectatorBeaconState::~USpectatorBeaconState() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h_Statics::EnumInfo[] = {
		{ ESpectatorReservationResult_StaticEnum, TEXT("ESpectatorReservationResult"), &Z_Registration_Info_UEnum_ESpectatorReservationResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3705599655U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h_Statics::ScriptStructInfo[] = {
		{ FSpectatorReservation::StaticStruct, Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewStructOps, TEXT("SpectatorReservation"), &Z_Registration_Info_UScriptStruct_SpectatorReservation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpectatorReservation), 2059637467U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpectatorBeaconState, USpectatorBeaconState::StaticClass, TEXT("USpectatorBeaconState"), &Z_Registration_Info_UClass_USpectatorBeaconState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpectatorBeaconState), 3289106727U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h_3063369464(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
