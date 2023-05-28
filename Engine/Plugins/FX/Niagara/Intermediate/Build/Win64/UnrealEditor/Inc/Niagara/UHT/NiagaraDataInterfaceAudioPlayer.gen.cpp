// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceAudioPlayer.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "../Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceAudioPlayer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceAudioPlayerSettings::StaticRegisterNativesUNiagaraDataInterfaceAudioPlayerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceAudioPlayerSettings);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_NoRegister()
	{
		return UNiagaraDataInterfaceAudioPlayerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideConcurrency_MetaData[];
#endif
		static void NewProp_bOverrideConcurrency_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideConcurrency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Concurrency_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Concurrency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuationSettings_MetaData[];
#endif
		static void NewProp_bOverrideAttenuationSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttenuationSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Audio" },
		{ "DisplayName", "Niagara Audio Player Settings" },
		{ "IncludePath", "NiagaraDataInterfaceAudioPlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_bOverrideConcurrency_MetaData[] = {
		{ "Category", "Audio" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_bOverrideConcurrency_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceAudioPlayerSettings*)Obj)->bOverrideConcurrency = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_bOverrideConcurrency = { "bOverrideConcurrency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceAudioPlayerSettings), &Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_bOverrideConcurrency_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_bOverrideConcurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_bOverrideConcurrency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_Concurrency_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditCondition", "bOverrideConcurrency" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_Concurrency = { "Concurrency", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceAudioPlayerSettings, Concurrency), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_Concurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_Concurrency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_bOverrideAttenuationSettings_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_bOverrideAttenuationSettings_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceAudioPlayerSettings*)Obj)->bOverrideAttenuationSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_bOverrideAttenuationSettings = { "bOverrideAttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceAudioPlayerSettings), &Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_bOverrideAttenuationSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_bOverrideAttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_bOverrideAttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditCondition", "bOverrideAttenuationSettings" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceAudioPlayerSettings, AttenuationSettings), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_AttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_AttenuationSettings_MetaData)) }; // 895530132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_bOverrideConcurrency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_Concurrency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_bOverrideAttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::NewProp_AttenuationSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceAudioPlayerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::ClassParams = {
		&UNiagaraDataInterfaceAudioPlayerSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayerSettings.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayerSettings.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceAudioPlayerSettings>()
	{
		return UNiagaraDataInterfaceAudioPlayerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceAudioPlayerSettings);
	UNiagaraDataInterfaceAudioPlayerSettings::~UNiagaraDataInterfaceAudioPlayerSettings() {}
	void UNiagaraDataInterfaceAudioPlayer::StaticRegisterNativesUNiagaraDataInterfaceAudioPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceAudioPlayer);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_NoRegister()
	{
		return UNiagaraDataInterfaceAudioPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attenuation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Attenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Concurrency_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Concurrency;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigurationUserParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConfigurationUserParameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitPlaysPerTick_MetaData[];
#endif
		static void NewProp_bLimitPlaysPerTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitPlaysPerTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlaysPerTick_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlaysPerTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenComponentIsDestroyed_MetaData[];
#endif
		static void NewProp_bStopWhenComponentIsDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenComponentIsDestroyed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowLoopingOneShotSounds_MetaData[];
#endif
		static void NewProp_bAllowLoopingOneShotSounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowLoopingOneShotSounds;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyActiveDuringGameplay_MetaData[];
#endif
		static void NewProp_bOnlyActiveDuringGameplay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyActiveDuringGameplay;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::Class_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** This Data Interface can be used to play one-shot audio effects driven by particle data. */" },
		{ "DisplayName", "Audio Player" },
		{ "IncludePath", "NiagaraDataInterfaceAudioPlayer.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "This Data Interface can be used to play one-shot audio effects driven by particle data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_SoundToPlay_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Reference to the audio asset to play */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "Reference to the audio asset to play" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_SoundToPlay = { "SoundToPlay", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceAudioPlayer, SoundToPlay), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_SoundToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_SoundToPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Attenuation_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Optional sound attenuation setting to use */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "Optional sound attenuation setting to use" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceAudioPlayer, Attenuation), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Attenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Attenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Concurrency_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Optional sound concurrency setting to use */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "Optional sound concurrency setting to use" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Concurrency = { "Concurrency", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceAudioPlayer, Concurrency), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Concurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Concurrency_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ParameterNames_Inner = { "ParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ParameterNames_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** A set of parameter names that can be referenced via index when setting sound cue parameters on persistent audio */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "A set of parameter names that can be referenced via index when setting sound cue parameters on persistent audio" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ParameterNames = { "ParameterNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceAudioPlayer, ParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ParameterNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ConfigurationUserParameter_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** If bound to a valid user parameter object of type UNiagaraDataInterfaceAudioPlayerSettings, then configured settings like sound attenuation are set via the user parameter. This allows the sound settings to be dynamically changed via blueprint or C++.\n\x09 *  Only used by persistent audio, one-shot audio ignores this option. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "If bound to a valid user parameter object of type UNiagaraDataInterfaceAudioPlayerSettings, then configured settings like sound attenuation are set via the user parameter. This allows the sound settings to be dynamically changed via blueprint or C++.\nOnly used by persistent audio, one-shot audio ignores this option." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ConfigurationUserParameter = { "ConfigurationUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceAudioPlayer, ConfigurationUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ConfigurationUserParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ConfigurationUserParameter_MetaData)) }; // 1724214256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bLimitPlaysPerTick_MetaData[] = {
		{ "Category", "Audio" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bLimitPlaysPerTick_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceAudioPlayer*)Obj)->bLimitPlaysPerTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bLimitPlaysPerTick = { "bLimitPlaysPerTick", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceAudioPlayer), &Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bLimitPlaysPerTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bLimitPlaysPerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bLimitPlaysPerTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_MaxPlaysPerTick_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0" },
		{ "Comment", "/** This sets the max number of sounds played each tick.\n\x09 *  If more particles try to play a sound in a given tick, then it will play sounds until the limit is reached and discard the rest.\n\x09 *  The particles to discard when over the limit are *not* chosen in a deterministic way. */" },
		{ "EditCondition", "bLimitPlaysPerTick" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "This sets the max number of sounds played each tick.\nIf more particles try to play a sound in a given tick, then it will play sounds until the limit is reached and discard the rest.\nThe particles to discard when over the limit are *not* chosen in a deterministic way." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_MaxPlaysPerTick = { "MaxPlaysPerTick", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceAudioPlayer, MaxPlaysPerTick), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_MaxPlaysPerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_MaxPlaysPerTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** If false then it the audio component keeps playing after the niagara component was destroyed. Looping sounds are always stopped when the component is destroyed. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "If false then it the audio component keeps playing after the niagara component was destroyed. Looping sounds are always stopped when the component is destroyed." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceAudioPlayer*)Obj)->bStopWhenComponentIsDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed = { "bStopWhenComponentIsDestroyed", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceAudioPlayer), &Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bAllowLoopingOneShotSounds_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Playing looping sounds as persistent audio is not a problem, as the sound is stopped when a particle dies, but one-shot audio outlives the niagara system and can never be stopped. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "Playing looping sounds as persistent audio is not a problem, as the sound is stopped when a particle dies, but one-shot audio outlives the niagara system and can never be stopped." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bAllowLoopingOneShotSounds_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceAudioPlayer*)Obj)->bAllowLoopingOneShotSounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bAllowLoopingOneShotSounds = { "bAllowLoopingOneShotSounds", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceAudioPlayer), &Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bAllowLoopingOneShotSounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bAllowLoopingOneShotSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bAllowLoopingOneShotSounds_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bOnlyActiveDuringGameplay_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** If true then this data interface only processes sounds during active gameplay. This is useful when you are working in the preview window and the sounds annoy you. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioPlayer.h" },
		{ "ToolTip", "If true then this data interface only processes sounds during active gameplay. This is useful when you are working in the preview window and the sounds annoy you." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bOnlyActiveDuringGameplay_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceAudioPlayer*)Obj)->bOnlyActiveDuringGameplay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bOnlyActiveDuringGameplay = { "bOnlyActiveDuringGameplay", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceAudioPlayer), &Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bOnlyActiveDuringGameplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bOnlyActiveDuringGameplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bOnlyActiveDuringGameplay_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_SoundToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Attenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_Concurrency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ParameterNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ParameterNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_ConfigurationUserParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bLimitPlaysPerTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_MaxPlaysPerTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bAllowLoopingOneShotSounds,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::NewProp_bOnlyActiveDuringGameplay,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceAudioPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::ClassParams = {
		&UNiagaraDataInterfaceAudioPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayer.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayer.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceAudioPlayer>()
	{
		return UNiagaraDataInterfaceAudioPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceAudioPlayer);
	UNiagaraDataInterfaceAudioPlayer::~UNiagaraDataInterfaceAudioPlayer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudioPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudioPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayerSettings, UNiagaraDataInterfaceAudioPlayerSettings::StaticClass, TEXT("UNiagaraDataInterfaceAudioPlayerSettings"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceAudioPlayerSettings), 4004448811U) },
		{ Z_Construct_UClass_UNiagaraDataInterfaceAudioPlayer, UNiagaraDataInterfaceAudioPlayer::StaticClass, TEXT("UNiagaraDataInterfaceAudioPlayer"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceAudioPlayer), 290571804U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudioPlayer_h_1201970743(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudioPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudioPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
