// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundBase.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundTimecodeOffset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmixBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVirtualizationMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundConcurrencySettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSourceBusSendInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundTimecodeOffset();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVirtualizationMode;
	static UEnum* EVirtualizationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVirtualizationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVirtualizationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVirtualizationMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVirtualizationMode"));
		}
		return Z_Registration_Info_UEnum_EVirtualizationMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVirtualizationMode>()
	{
		return EVirtualizationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EVirtualizationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EVirtualizationMode_Statics::Enumerators[] = {
		{ "EVirtualizationMode::Disabled", (int64)EVirtualizationMode::Disabled },
		{ "EVirtualizationMode::PlayWhenSilent", (int64)EVirtualizationMode::PlayWhenSilent },
		{ "EVirtualizationMode::Restart", (int64)EVirtualizationMode::Restart },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EVirtualizationMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Method of virtualization when a sound is stopped due to playback constraints\n * (i.e. by concurrency, priority, and/or MaxChannelCount)\n * for a given sound.\n */" },
		{ "Disabled.Comment", "/** Virtualization is disabled */" },
		{ "Disabled.Name", "EVirtualizationMode::Disabled" },
		{ "Disabled.ToolTip", "Virtualization is disabled" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "PlayWhenSilent.Comment", "/** Sound continues to play when silent and not virtualize, continuing to use a voice. If\n\x09 * sound is looping and stopped due to concurrency or channel limit/priority, sound will\n\x09 * restart on realization. If any SoundWave referenced in a SoundCue's waveplayer is set\n\x09 * to 'PlayWhenSilent', entire SoundCue will be overridden to 'PlayWhenSilent' (to maintain\n\x09 * timing over all wave players).\n\x09 */" },
		{ "PlayWhenSilent.Name", "EVirtualizationMode::PlayWhenSilent" },
		{ "PlayWhenSilent.ToolTip", "Sound continues to play when silent and not virtualize, continuing to use a voice. If\nsound is looping and stopped due to concurrency or channel limit/priority, sound will\nrestart on realization. If any SoundWave referenced in a SoundCue's waveplayer is set\nto 'PlayWhenSilent', entire SoundCue will be overridden to 'PlayWhenSilent' (to maintain\ntiming over all wave players)." },
		{ "Restart.Comment", "/** If sound is looping, sound restarts from beginning upon realization from being virtual */" },
		{ "Restart.Name", "EVirtualizationMode::Restart" },
		{ "Restart.ToolTip", "If sound is looping, sound restarts from beginning upon realization from being virtual" },
		{ "ToolTip", "Method of virtualization when a sound is stopped due to playback constraints\n(i.e. by concurrency, priority, and/or MaxChannelCount)\nfor a given sound." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVirtualizationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EVirtualizationMode",
		"EVirtualizationMode",
		Z_Construct_UEnum_Engine_EVirtualizationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVirtualizationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EVirtualizationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVirtualizationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EVirtualizationMode()
	{
		if (!Z_Registration_Info_UEnum_EVirtualizationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVirtualizationMode.InnerSingleton, Z_Construct_UEnum_Engine_EVirtualizationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVirtualizationMode.InnerSingleton;
	}
	void USoundBase::StaticRegisterNativesUSoundBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundBase);
	UClass* Z_Construct_UClass_USoundBase_NoRegister()
	{
		return USoundBase::StaticClass();
	}
	struct Z_Construct_UClass_USoundBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundClassObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundClassObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideConcurrency_MetaData[];
#endif
		static void NewProp_bOverrideConcurrency_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideConcurrency;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOutputToBusOnly_MetaData[];
#endif
		static void NewProp_bOutputToBusOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputToBusOnly;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBusSends_MetaData[];
#endif
		static void NewProp_bEnableBusSends_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBusSends;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBaseSubmix_MetaData[];
#endif
		static void NewProp_bEnableBaseSubmix_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBaseSubmix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSubmixSends_MetaData[];
#endif
		static void NewProp_bEnableSubmixSends_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSubmixSends;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasDelayNode_MetaData[];
#endif
		static void NewProp_bHasDelayNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDelayNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasConcatenatorNode_MetaData[];
#endif
		static void NewProp_bHasConcatenatorNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasConcatenatorNode;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasVirtualizeWhenSilent_MetaData[];
#endif
		static void NewProp_bHasVirtualizeWhenSilent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasVirtualizeWhenSilent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypassVolumeScaleForPriority_MetaData[];
#endif
		static void NewProp_bBypassVolumeScaleForPriority_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypassVolumeScaleForPriority;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VirtualizationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualizationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VirtualizationMode;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxConcurrentResolutionRule_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxConcurrentResolutionRule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundConcurrencySettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundConcurrencySettings;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConcurrencySet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConcurrencySet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ConcurrencySet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConcurrencyOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConcurrencyOverrides;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxConcurrentPlayCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxConcurrentPlayCount;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalSamples_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundSubmixObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundSubmixObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundSubmixSends_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundSubmixSends_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundSubmixSends;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceEffectChain_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceEffectChain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BusSends_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusSends_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BusSends;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreEffectBusSends_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreEffectBusSends_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreEffectBusSends;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimecodeOffset;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The base class for a playable sound object\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/SoundBase.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "The base class for a playable sound object" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_SoundClassObject_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Sound class this sound belongs to */" },
		{ "DisplayName", "Class" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Sound class this sound belongs to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_SoundClassObject = { "SoundClassObject", nullptr, (EPropertyFlags)0x0014010000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundBase, SoundClassObject), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_SoundClassObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_SoundClassObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Developer" },
		{ "Comment", "/** When \"au.3dVisualize.Attenuation\" has been specified, draw this sound's attenuation shape when the sound is audible. For debugging purposes only. */" },
		{ "DisplayName", "Enable Attenuation Debug" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "When \"au.3dVisualize.Attenuation\" has been specified, draw this sound's attenuation shape when the sound is audible. For debugging purposes only." },
	};
#endif
	void Z_Construct_UClass_USoundBase_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((USoundBase*)Obj)->bDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_bOverrideConcurrency_MetaData[] = {
		{ "Category", "Voice Management|Concurrency" },
		{ "Comment", "/** Whether or not to override the sound concurrency object with local concurrency settings. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Whether or not to override the sound concurrency object with local concurrency settings." },
	};
#endif
	void Z_Construct_UClass_USoundBase_Statics::NewProp_bOverrideConcurrency_SetBit(void* Obj)
	{
		((USoundBase*)Obj)->bOverrideConcurrency = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bOverrideConcurrency = { "bOverrideConcurrency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bOverrideConcurrency_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_bOverrideConcurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_bOverrideConcurrency_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_bOutputToBusOnly_MetaData[] = {
		{ "Comment", "/** Whether or not to only send this audio's output to a bus. If true, will not be this sound won't be audible except through bus sends. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Whether or not to only send this audio's output to a bus. If true, will not be this sound won't be audible except through bus sends." },
	};
#endif
	void Z_Construct_UClass_USoundBase_Statics::NewProp_bOutputToBusOnly_SetBit(void* Obj)
	{
		((USoundBase*)Obj)->bOutputToBusOnly_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bOutputToBusOnly = { "bOutputToBusOnly", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bOutputToBusOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_bOutputToBusOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_bOutputToBusOnly_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBusSends_MetaData[] = {
		{ "Category", "Effects|Source" },
		{ "Comment", "/** Whether or not to enable sending this audio's output to buses.  */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Whether or not to enable sending this audio's output to buses." },
	};
#endif
	void Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBusSends_SetBit(void* Obj)
	{
		((USoundBase*)Obj)->bEnableBusSends = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBusSends = { "bEnableBusSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBusSends_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBusSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBusSends_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBaseSubmix_MetaData[] = {
		{ "Category", "Effects|Submix" },
		{ "Comment", "/** If enabled, sound will route to the Master Submix by default or to the Base Submix if defined. If disabled, sound will route ONLY to the Submix Sends and/or Bus Sends */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "If enabled, sound will route to the Master Submix by default or to the Base Submix if defined. If disabled, sound will route ONLY to the Submix Sends and/or Bus Sends" },
	};
#endif
	void Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBaseSubmix_SetBit(void* Obj)
	{
		((USoundBase*)Obj)->bEnableBaseSubmix = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBaseSubmix = { "bEnableBaseSubmix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBaseSubmix_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBaseSubmix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBaseSubmix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableSubmixSends_MetaData[] = {
		{ "Category", "Effects|Submix" },
		{ "Comment", "/** Whether or not to enable Submix Sends other than the Base Submix. */" },
		{ "DisplayAfter", "SoundSubmixObject" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Whether or not to enable Submix Sends other than the Base Submix." },
	};
#endif
	void Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableSubmixSends_SetBit(void* Obj)
	{
		((USoundBase*)Obj)->bEnableSubmixSends = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableSubmixSends = { "bEnableSubmixSends", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableSubmixSends_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableSubmixSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableSubmixSends_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_bHasDelayNode_MetaData[] = {
		{ "Comment", "/** Whether or not this sound has a delay node */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Whether or not this sound has a delay node" },
	};
#endif
	void Z_Construct_UClass_USoundBase_Statics::NewProp_bHasDelayNode_SetBit(void* Obj)
	{
		((USoundBase*)Obj)->bHasDelayNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bHasDelayNode = { "bHasDelayNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bHasDelayNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_bHasDelayNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_bHasDelayNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_bHasConcatenatorNode_MetaData[] = {
		{ "Comment", "/** Whether or not this sound has a concatenator node. If it does, we have to allow the sound to persist even though it may not have generate audible audio in a given audio thread frame. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Whether or not this sound has a concatenator node. If it does, we have to allow the sound to persist even though it may not have generate audible audio in a given audio thread frame." },
	};
#endif
	void Z_Construct_UClass_USoundBase_Statics::NewProp_bHasConcatenatorNode_SetBit(void* Obj)
	{
		((USoundBase*)Obj)->bHasConcatenatorNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bHasConcatenatorNode = { "bHasConcatenatorNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bHasConcatenatorNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_bHasConcatenatorNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_bHasConcatenatorNode_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_bHasVirtualizeWhenSilent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
	};
#endif
	void Z_Construct_UClass_USoundBase_Statics::NewProp_bHasVirtualizeWhenSilent_SetBit(void* Obj)
	{
		((USoundBase*)Obj)->bHasVirtualizeWhenSilent_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bHasVirtualizeWhenSilent = { "bHasVirtualizeWhenSilent", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bHasVirtualizeWhenSilent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_bHasVirtualizeWhenSilent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_bHasVirtualizeWhenSilent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_bBypassVolumeScaleForPriority_MetaData[] = {
		{ "Category", "Voice Management|Priority" },
		{ "Comment", "/** Bypass volume weighting priority upon evaluating whether sound should remain active when max channel count is met (See platform Audio Settings). */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Bypass volume weighting priority upon evaluating whether sound should remain active when max channel count is met (See platform Audio Settings)." },
	};
#endif
	void Z_Construct_UClass_USoundBase_Statics::NewProp_bBypassVolumeScaleForPriority_SetBit(void* Obj)
	{
		((USoundBase*)Obj)->bBypassVolumeScaleForPriority = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bBypassVolumeScaleForPriority = { "bBypassVolumeScaleForPriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bBypassVolumeScaleForPriority_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_bBypassVolumeScaleForPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_bBypassVolumeScaleForPriority_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_VirtualizationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_VirtualizationMode_MetaData[] = {
		{ "Category", "Voice Management" },
		{ "Comment", "/** Virtualization behavior, determining if a sound may revive and how it continues playing when culled or evicted (limited to looping sounds). */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Virtualization behavior, determining if a sound may revive and how it continues playing when culled or evicted (limited to looping sounds)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_VirtualizationMode = { "VirtualizationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundBase, VirtualizationMode), Z_Construct_UEnum_Engine_EVirtualizationMode, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_VirtualizationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_VirtualizationMode_MetaData)) }; // 2880724818
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentResolutionRule_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentResolutionRule = { "MaxConcurrentResolutionRule", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundBase, MaxConcurrentResolutionRule_DEPRECATED), Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentResolutionRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentResolutionRule_MetaData)) }; // 1452126939
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_SoundConcurrencySettings_MetaData[] = {
		{ "Comment", "/** If Override Concurrency is false, the sound concurrency settings to use for this sound. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "If Override Concurrency is false, the sound concurrency settings to use for this sound." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_SoundConcurrencySettings = { "SoundConcurrencySettings", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundBase, SoundConcurrencySettings_DEPRECATED), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_SoundConcurrencySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_SoundConcurrencySettings_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencySet_ElementProp = { "ConcurrencySet", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencySet_MetaData[] = {
		{ "Category", "Voice Management|Concurrency" },
		{ "Comment", "/** Set of concurrency settings to observe (if override is set to false).  Sound must pass all concurrency settings to play. */" },
		{ "EditCondition", "!bOverrideConcurrency" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Set of concurrency settings to observe (if override is set to false).  Sound must pass all concurrency settings to play." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencySet = { "ConcurrencySet", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundBase, ConcurrencySet), METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencySet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencySet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencyOverrides_MetaData[] = {
		{ "Category", "Voice Management|Concurrency" },
		{ "Comment", "/** If Override Concurrency is true, concurrency settings to use. */" },
		{ "EditCondition", "bOverrideConcurrency" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "If Override Concurrency is true, concurrency settings to use." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencyOverrides = { "ConcurrencyOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundBase, ConcurrencyOverrides), Z_Construct_UScriptStruct_FSoundConcurrencySettings, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencyOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencyOverrides_MetaData)) }; // 2608487546
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentPlayCount_MetaData[] = {
		{ "Comment", "/** Maximum number of times this sound can be played concurrently. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Maximum number of times this sound can be played concurrently." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentPlayCount = { "MaxConcurrentPlayCount", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundBase, MaxConcurrentPlayCount_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentPlayCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentPlayCount_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Developer" },
		{ "Comment", "/** Duration of sound in seconds. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Duration of sound in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010010000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundBase, Duration), METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Developer" },
		{ "Comment", "/** The max distance of the asset, as determined by attenuation settings. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "The max distance of the asset, as determined by attenuation settings." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010010000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundBase, MaxDistance), METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_TotalSamples_MetaData[] = {
		{ "Category", "Developer" },
		{ "Comment", "/** Total number of samples (in the thousands). Useful as a metric to analyze the relative size of a given sound asset in content browser. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Total number of samples (in the thousands). Useful as a metric to analyze the relative size of a given sound asset in content browser." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_TotalSamples = { "TotalSamples", nullptr, (EPropertyFlags)0x0010010000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundBase, TotalSamples), METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_TotalSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_TotalSamples_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Voice Management|Priority" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Used to determine whether sound can play or remain active if channel limit is met, where higher value is higher priority\n\x09  * (see platform's Audio Settings 'Max Channels' property). Unless bypassed, value is weighted with the final volume of the\n\x09  * sound to produce final runtime priority value.\n\x09  */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Used to determine whether sound can play or remain active if channel limit is met, where higher value is higher priority\n(see platform's Audio Settings 'Max Channels' property). Unless bypassed, value is weighted with the final volume of the\nsound to produce final runtime priority value." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundBase, Priority), METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Attenuation settings package for the sound */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Attenuation settings package for the sound" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundBase, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_AttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixObject_MetaData[] = {
		{ "Category", "Effects|Submix" },
		{ "Comment", "/** Submix to route sound output to. If unset, falls back to referenced SoundClass submix.\n\x09  * If SoundClass submix is unset, sends to the 'Master Submix' as set in the 'Audio' category of Project Settings'. */" },
		{ "DisplayName", "Base Submix" },
		{ "EditCondition", "bEnableBaseSubmix" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Submix to route sound output to. If unset, falls back to referenced SoundClass submix.\nIf SoundClass submix is unset, sends to the 'Master Submix' as set in the 'Audio' category of Project Settings'." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixObject = { "SoundSubmixObject", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundBase, SoundSubmixObject), Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixObject_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixSends_Inner = { "SoundSubmixSends", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundSubmixSendInfo, METADATA_PARAMS(nullptr, 0) }; // 3442815224
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixSends_MetaData[] = {
		{ "Category", "Effects|Submix" },
		{ "Comment", "/** Array of submix sends to which a prescribed amount (see 'Send Level') of this sound is sent. */" },
		{ "DisplayName", "Submix Sends" },
		{ "EditCondition", "bEnableSubmixSends" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Array of submix sends to which a prescribed amount (see 'Send Level') of this sound is sent." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixSends = { "SoundSubmixSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundBase, SoundSubmixSends), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixSends_MetaData)) }; // 3442815224
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_SourceEffectChain_MetaData[] = {
		{ "Category", "Effects|Source" },
		{ "Comment", "/** The source effect chain to use for this sound. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "The source effect chain to use for this sound." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_SourceEffectChain = { "SourceEffectChain", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundBase, SourceEffectChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_SourceEffectChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_SourceEffectChain_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_BusSends_Inner = { "BusSends", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundSourceBusSendInfo, METADATA_PARAMS(nullptr, 0) }; // 1550761377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_BusSends_MetaData[] = {
		{ "Category", "Effects|Source" },
		{ "Comment", "/** This sound will send its audio output to this list of buses if there are bus instances playing after source effects are processed. */" },
		{ "DisplayName", "Post-Effect Bus Sends" },
		{ "EditCondition", "bEnableBusSends" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "This sound will send its audio output to this list of buses if there are bus instances playing after source effects are processed." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_BusSends = { "BusSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundBase, BusSends), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_BusSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_BusSends_MetaData)) }; // 1550761377
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_PreEffectBusSends_Inner = { "PreEffectBusSends", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundSourceBusSendInfo, METADATA_PARAMS(nullptr, 0) }; // 1550761377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_PreEffectBusSends_MetaData[] = {
		{ "Category", "Effects|Source" },
		{ "Comment", "/** This sound will send its audio output to this list of buses if there are bus instances playing before source effects are processed. */" },
		{ "DisplayName", "Pre-Effect Bus Sends" },
		{ "EditCondition", "bEnableBusSends" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "This sound will send its audio output to this list of buses if there are bus instances playing before source effects are processed." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_PreEffectBusSends = { "PreEffectBusSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundBase, PreEffectBusSends), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_PreEffectBusSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_PreEffectBusSends_MetaData)) }; // 1550761377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_AssetUserData_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x0014048000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundBase, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_AssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_AssetUserData_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_TimecodeOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_TimecodeOffset = { "TimecodeOffset", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundBase, TimecodeOffset), Z_Construct_UScriptStruct_FSoundTimecodeOffset, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_TimecodeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_TimecodeOffset_MetaData)) }; // 1848711064
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_SoundClassObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bOverrideConcurrency,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bOutputToBusOnly,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBusSends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableBaseSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bEnableSubmixSends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bHasDelayNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bHasConcatenatorNode,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bHasVirtualizeWhenSilent,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bBypassVolumeScaleForPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_VirtualizationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_VirtualizationMode,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentResolutionRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_SoundConcurrencySettings,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencySet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencyOverrides,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentPlayCount,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_MaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_TotalSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixSends_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixSends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_SourceEffectChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_BusSends_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_BusSends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_PreEffectBusSends_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_PreEffectBusSends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_AssetUserData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_AssetUserData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_TimecodeOffset,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USoundBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(USoundBase, IInterface_AssetUserData), false },  // 1283872964
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundBase_Statics::ClassParams = {
		&USoundBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundBase()
	{
		if (!Z_Registration_Info_UClass_USoundBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundBase.OuterSingleton, Z_Construct_UClass_USoundBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundBase>()
	{
		return USoundBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundBase);
	USoundBase::~USoundBase() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundBase)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_Statics::EnumInfo[] = {
		{ EVirtualizationMode_StaticEnum, TEXT("EVirtualizationMode"), &Z_Registration_Info_UEnum_EVirtualizationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2880724818U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundBase, USoundBase::StaticClass, TEXT("USoundBase"), &Z_Registration_Info_UClass_USoundBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundBase), 2877166866U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_1929328308(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
