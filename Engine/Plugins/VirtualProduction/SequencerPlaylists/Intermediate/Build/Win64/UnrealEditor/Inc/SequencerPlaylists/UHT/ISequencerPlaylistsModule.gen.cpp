// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ISequencerPlaylistsModule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISequencerPlaylistsModule() {}
// Cross Module References
	SEQUENCERPLAYLISTS_API UEnum* Z_Construct_UEnum_SequencerPlaylists_ESequencerPlaylistPlaybackDirection();
	SEQUENCERPLAYLISTS_API UScriptStruct* Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState();
	UPackage* Z_Construct_UPackage__Script_SequencerPlaylists();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESequencerPlaylistPlaybackDirection;
	static UEnum* ESequencerPlaylistPlaybackDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESequencerPlaylistPlaybackDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESequencerPlaylistPlaybackDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SequencerPlaylists_ESequencerPlaylistPlaybackDirection, (UObject*)Z_Construct_UPackage__Script_SequencerPlaylists(), TEXT("ESequencerPlaylistPlaybackDirection"));
		}
		return Z_Registration_Info_UEnum_ESequencerPlaylistPlaybackDirection.OuterSingleton;
	}
	template<> SEQUENCERPLAYLISTS_API UEnum* StaticEnum<ESequencerPlaylistPlaybackDirection>()
	{
		return ESequencerPlaylistPlaybackDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_SequencerPlaylists_ESequencerPlaylistPlaybackDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SequencerPlaylists_ESequencerPlaylistPlaybackDirection_Statics::Enumerators[] = {
		{ "ESequencerPlaylistPlaybackDirection::Forward", (int64)ESequencerPlaylistPlaybackDirection::Forward },
		{ "ESequencerPlaylistPlaybackDirection::Reverse", (int64)ESequencerPlaylistPlaybackDirection::Reverse },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SequencerPlaylists_ESequencerPlaylistPlaybackDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Forward.Name", "ESequencerPlaylistPlaybackDirection::Forward" },
		{ "ModuleRelativePath", "Public/ISequencerPlaylistsModule.h" },
		{ "Reverse.Name", "ESequencerPlaylistPlaybackDirection::Reverse" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SequencerPlaylists_ESequencerPlaylistPlaybackDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SequencerPlaylists,
		nullptr,
		"ESequencerPlaylistPlaybackDirection",
		"ESequencerPlaylistPlaybackDirection",
		Z_Construct_UEnum_SequencerPlaylists_ESequencerPlaylistPlaybackDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SequencerPlaylists_ESequencerPlaylistPlaybackDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SequencerPlaylists_ESequencerPlaylistPlaybackDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SequencerPlaylists_ESequencerPlaylistPlaybackDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SequencerPlaylists_ESequencerPlaylistPlaybackDirection()
	{
		if (!Z_Registration_Info_UEnum_ESequencerPlaylistPlaybackDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESequencerPlaylistPlaybackDirection.InnerSingleton, Z_Construct_UEnum_SequencerPlaylists_ESequencerPlaylistPlaybackDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESequencerPlaylistPlaybackDirection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SequencerPlaylistPlaybackState;
class UScriptStruct* FSequencerPlaylistPlaybackState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SequencerPlaylistPlaybackState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SequencerPlaylistPlaybackState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState, (UObject*)Z_Construct_UPackage__Script_SequencerPlaylists(), TEXT("SequencerPlaylistPlaybackState"));
	}
	return Z_Registration_Info_UScriptStruct_SequencerPlaylistPlaybackState.OuterSingleton;
}
template<> SEQUENCERPLAYLISTS_API UScriptStruct* StaticStruct<FSequencerPlaylistPlaybackState>()
{
	return FSequencerPlaylistPlaybackState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlaying_MetaData[];
#endif
		static void NewProp_bIsPlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPaused_MetaData[];
#endif
		static void NewProp_bIsPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPaused;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlaybackDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaybackDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ISequencerPlaylistsModule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequencerPlaylistPlaybackState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewProp_bIsPlaying_MetaData[] = {
		{ "Category", "Sequencer Playlists" },
		{ "ModuleRelativePath", "Public/ISequencerPlaylistsModule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewProp_bIsPlaying_SetBit(void* Obj)
	{
		((FSequencerPlaylistPlaybackState*)Obj)->bIsPlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewProp_bIsPlaying = { "bIsPlaying", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSequencerPlaylistPlaybackState), &Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewProp_bIsPlaying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewProp_bIsPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewProp_bIsPlaying_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewProp_bIsPaused_MetaData[] = {
		{ "Category", "Sequencer Playlists" },
		{ "ModuleRelativePath", "Public/ISequencerPlaylistsModule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewProp_bIsPaused_SetBit(void* Obj)
	{
		((FSequencerPlaylistPlaybackState*)Obj)->bIsPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewProp_bIsPaused = { "bIsPaused", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSequencerPlaylistPlaybackState), &Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewProp_bIsPaused_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewProp_bIsPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewProp_bIsPaused_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewProp_PlaybackDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewProp_PlaybackDirection_MetaData[] = {
		{ "Category", "Sequencer Playlists" },
		{ "ModuleRelativePath", "Public/ISequencerPlaylistsModule.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewProp_PlaybackDirection = { "PlaybackDirection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequencerPlaylistPlaybackState, PlaybackDirection), Z_Construct_UEnum_SequencerPlaylists_ESequencerPlaylistPlaybackDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewProp_PlaybackDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewProp_PlaybackDirection_MetaData)) }; // 3919789568
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewProp_bIsPlaying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewProp_bIsPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewProp_PlaybackDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewProp_PlaybackDirection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerPlaylists,
		nullptr,
		&NewStructOps,
		"SequencerPlaylistPlaybackState",
		sizeof(FSequencerPlaylistPlaybackState),
		alignof(FSequencerPlaylistPlaybackState),
		Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState()
	{
		if (!Z_Registration_Info_UScriptStruct_SequencerPlaylistPlaybackState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SequencerPlaylistPlaybackState.InnerSingleton, Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SequencerPlaylistPlaybackState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_ISequencerPlaylistsModule_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_ISequencerPlaylistsModule_h_Statics::EnumInfo[] = {
		{ ESequencerPlaylistPlaybackDirection_StaticEnum, TEXT("ESequencerPlaylistPlaybackDirection"), &Z_Registration_Info_UEnum_ESequencerPlaylistPlaybackDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3919789568U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_ISequencerPlaylistsModule_h_Statics::ScriptStructInfo[] = {
		{ FSequencerPlaylistPlaybackState::StaticStruct, Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState_Statics::NewStructOps, TEXT("SequencerPlaylistPlaybackState"), &Z_Registration_Info_UScriptStruct_SequencerPlaylistPlaybackState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSequencerPlaylistPlaybackState), 2691307049U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_ISequencerPlaylistsModule_h_900615657(TEXT("/Script/SequencerPlaylists"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_ISequencerPlaylistsModule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_ISequencerPlaylistsModule_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_ISequencerPlaylistsModule_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_ISequencerPlaylistsModule_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
