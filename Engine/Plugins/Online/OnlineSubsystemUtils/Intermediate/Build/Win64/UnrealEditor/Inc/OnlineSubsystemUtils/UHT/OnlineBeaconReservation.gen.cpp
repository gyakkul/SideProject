// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/OnlineBeaconReservation.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeaconReservation() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerReservation();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerReservation;
class UScriptStruct* FPlayerReservation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerReservation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerReservation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerReservation, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("PlayerReservation"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerReservation.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FPlayerReservation>()
{
	return FPlayerReservation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerReservation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidationStr_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ValidationStr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCrossplay_MetaData[];
#endif
		static void NewProp_bAllowCrossplay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCrossplay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerReservation_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A single player reservation */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconReservation.h" },
		{ "ToolTip", "A single player reservation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerReservation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_UniqueId_MetaData[] = {
		{ "Comment", "/** Unique id for this reservation */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconReservation.h" },
		{ "ToolTip", "Unique id for this reservation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerReservation, UniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_UniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_UniqueId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_ValidationStr_MetaData[] = {
		{ "Comment", "/** Info needed to validate user credentials when joining a server */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconReservation.h" },
		{ "ToolTip", "Info needed to validate user credentials when joining a server" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_ValidationStr = { "ValidationStr", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerReservation, ValidationStr), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_ValidationStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_ValidationStr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_Platform_MetaData[] = {
		{ "Comment", "/** Platform this user is on */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconReservation.h" },
		{ "ToolTip", "Platform this user is on" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerReservation, Platform), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_Platform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_bAllowCrossplay_MetaData[] = {
		{ "Comment", "/** Does this player opt in to crossplay */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconReservation.h" },
		{ "ToolTip", "Does this player opt in to crossplay" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_bAllowCrossplay_SetBit(void* Obj)
	{
		((FPlayerReservation*)Obj)->bAllowCrossplay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_bAllowCrossplay = { "bAllowCrossplay", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPlayerReservation), &Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_bAllowCrossplay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_bAllowCrossplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_bAllowCrossplay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_ElapsedTime_MetaData[] = {
		{ "Comment", "/** Elapsed time since player made reservation and was last seen */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconReservation.h" },
		{ "ToolTip", "Elapsed time since player made reservation and was last seen" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerReservation, ElapsedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_ElapsedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_ElapsedTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerReservation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_UniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_ValidationStr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_Platform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_bAllowCrossplay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_ElapsedTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerReservation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
		nullptr,
		&NewStructOps,
		"PlayerReservation",
		sizeof(FPlayerReservation),
		alignof(FPlayerReservation),
		Z_Construct_UScriptStruct_FPlayerReservation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerReservation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerReservation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerReservation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerReservation()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerReservation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerReservation.InnerSingleton, Z_Construct_UScriptStruct_FPlayerReservation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerReservation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconReservation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconReservation_h_Statics::ScriptStructInfo[] = {
		{ FPlayerReservation::StaticStruct, Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewStructOps, TEXT("PlayerReservation"), &Z_Registration_Info_UScriptStruct_PlayerReservation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerReservation), 3296138963U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconReservation_h_314530580(TEXT("/Script/OnlineSubsystemUtils"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconReservation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconReservation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
