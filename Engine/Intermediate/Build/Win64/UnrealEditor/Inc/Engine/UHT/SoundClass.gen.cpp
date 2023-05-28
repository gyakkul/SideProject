// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundClass.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundClass() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundMix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioOutputTarget();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPassiveSoundMixModifier();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundClassEditorData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundClassProperties();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDefaultSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundClassEditorData;
class UScriptStruct* FSoundClassEditorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundClassEditorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundClassEditorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundClassEditorData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundClassEditorData"));
	}
	return Z_Registration_Info_UScriptStruct_SoundClassEditorData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundClassEditorData>()
{
	return FSoundClassEditorData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundClassEditorData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundClassEditorData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundClassEditorData",
		sizeof(FSoundClassEditorData),
		alignof(FSoundClassEditorData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundClassEditorData()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundClassEditorData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundClassEditorData.InnerSingleton, Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundClassEditorData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundClassProperties;
class UScriptStruct* FSoundClassProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundClassProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundClassProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundClassProperties, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundClassProperties"));
	}
	return Z_Registration_Info_UScriptStruct_SoundClassProperties.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundClassProperties>()
{
	return FSoundClassProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundClassProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowPassFilterFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowPassFilterFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationDistanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationDistanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LFEBleed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LFEBleed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiceCenterChannelVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VoiceCenterChannelVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadioFilterVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RadioFilterVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadioFilterVolumeThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RadioFilterVolumeThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyEffects_MetaData[];
#endif
		static void NewProp_bApplyEffects_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyEffects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysPlay_MetaData[];
#endif
		static void NewProp_bAlwaysPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[];
#endif
		static void NewProp_bIsUISound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUISound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMusic_MetaData[];
#endif
		static void NewProp_bIsMusic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMusic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCenterChannelOnly_MetaData[];
#endif
		static void NewProp_bCenterChannelOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterChannelOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyAmbientVolumes_MetaData[];
#endif
		static void NewProp_bApplyAmbientVolumes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyAmbientVolumes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverb_MetaData[];
#endif
		static void NewProp_bReverb_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default2DReverbSendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Default2DReverbSendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModulationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputTarget_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputTarget;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LoadingBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LoadingBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSubmix_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultSubmix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundClassProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Volume multiplier. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Volume multiplier." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundClassProperties, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Pitch multiplier. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Pitch multiplier." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundClassProperties, Pitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LowPassFilterFrequency_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Lowpass filter cutoff frequency */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Lowpass filter cutoff frequency" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LowPassFilterFrequency = { "LowPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundClassProperties, LowPassFilterFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LowPassFilterFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LowPassFilterFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_AttenuationDistanceScale_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Distance scale to apply to sounds that play with this sound class.\n\x09  * Sounds will have their attenuation distance scaled by this amount.\n\x09  * Allows adjusting attenuation settings dynamically. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Distance scale to apply to sounds that play with this sound class.\nSounds will have their attenuation distance scaled by this amount.\nAllows adjusting attenuation settings dynamically." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_AttenuationDistanceScale = { "AttenuationDistanceScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundClassProperties, AttenuationDistanceScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_AttenuationDistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_AttenuationDistanceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LFEBleed_MetaData[] = {
		{ "Category", "Routing" },
		{ "Comment", "/** The amount of a sound to bleed to the LFE channel */" },
		{ "DisplayName", "LFE Bleed" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "The amount of a sound to bleed to the LFE channel" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LFEBleed = { "LFEBleed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundClassProperties, LFEBleed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LFEBleed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LFEBleed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_VoiceCenterChannelVolume_MetaData[] = {
		{ "Category", "Routing" },
		{ "Comment", "/** The amount to send to center channel (does not propagate to child classes) */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "The amount to send to center channel (does not propagate to child classes)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_VoiceCenterChannelVolume = { "VoiceCenterChannelVolume", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundClassProperties, VoiceCenterChannelVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_VoiceCenterChannelVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_VoiceCenterChannelVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolume_MetaData[] = {
		{ "Category", "Legacy" },
		{ "Comment", "/** Volume of the radio filter effect. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Volume of the radio filter effect." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolume = { "RadioFilterVolume", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundClassProperties, RadioFilterVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolumeThreshold_MetaData[] = {
		{ "Category", "Legacy" },
		{ "Comment", "/** Volume at which the radio filter kicks in */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Volume at which the radio filter kicks in" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolumeThreshold = { "RadioFilterVolumeThreshold", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundClassProperties, RadioFilterVolumeThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolumeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolumeThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects_MetaData[] = {
		{ "Category", "Legacy" },
		{ "Comment", "/** Whether to use 'Master EQ Submix' as set in the 'Audio' category of Project Settings as the default submix for referencing sounds. */" },
		{ "DisplayName", "Output to Master EQ Submix" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether to use 'Master EQ Submix' as set in the 'Audio' category of Project Settings as the default submix for referencing sounds." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects_SetBit(void* Obj)
	{
		((FSoundClassProperties*)Obj)->bApplyEffects = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects = { "bApplyEffects", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether to inflate referencing sound's priority to always play. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether to inflate referencing sound's priority to always play." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay_SetBit(void* Obj)
	{
		((FSoundClassProperties*)Obj)->bAlwaysPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay = { "bAlwaysPlay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound_MetaData[] = {
		{ "Category", "Legacy" },
		{ "Comment", "/** Whether or not this sound plays when the game is paused in the UI */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether or not this sound plays when the game is paused in the UI" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound_SetBit(void* Obj)
	{
		((FSoundClassProperties*)Obj)->bIsUISound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound = { "bIsUISound", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic_MetaData[] = {
		{ "Category", "Legacy" },
		{ "Comment", "/** Whether or not this is music (propagates to child classes only if parent is true) */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether or not this is music (propagates to child classes only if parent is true)" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic_SetBit(void* Obj)
	{
		((FSoundClassProperties*)Obj)->bIsMusic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic = { "bIsMusic", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly_MetaData[] = {
		{ "Category", "Routing" },
		{ "Comment", "/** Whether or not this sound class forces sounds to the center channel */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether or not this sound class forces sounds to the center channel" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly_SetBit(void* Obj)
	{
		((FSoundClassProperties*)Obj)->bCenterChannelOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly = { "bCenterChannelOnly", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_MetaData[] = {
		{ "Category", "Routing" },
		{ "Comment", "/** Whether the Interior/Exterior volume and LPF modifiers should be applied */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether the Interior/Exterior volume and LPF modifiers should be applied" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_SetBit(void* Obj)
	{
		((FSoundClassProperties*)Obj)->bApplyAmbientVolumes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes = { "bApplyAmbientVolumes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb_MetaData[] = {
		{ "Category", "Submix" },
		{ "Comment", "/** Whether or not sounds referencing this class send to the reverb submix */" },
		{ "DisplayName", "Send to Master Reverb Submix" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Whether or not sounds referencing this class send to the reverb submix" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb_SetBit(void* Obj)
	{
		((FSoundClassProperties*)Obj)->bReverb = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb = { "bReverb", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSoundClassProperties), &Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Default2DReverbSendAmount_MetaData[] = {
		{ "Category", "Submix" },
		{ "Comment", "/** Send amount to master reverb effect for referencing unattenuated (2D) sounds. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Send amount to master reverb effect for referencing unattenuated (2D) sounds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Default2DReverbSendAmount = { "Default2DReverbSendAmount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundClassProperties, Default2DReverbSendAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Default2DReverbSendAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Default2DReverbSendAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_ModulationSettings_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** Default modulation settings for sounds directly referencing this class */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Default modulation settings for sounds directly referencing this class" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_ModulationSettings = { "ModulationSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundClassProperties, ModulationSettings), Z_Construct_UScriptStruct_FSoundModulationDefaultSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_ModulationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_ModulationSettings_MetaData)) }; // 3816155414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_OutputTarget_MetaData[] = {
		{ "Category", "Legacy" },
		{ "Comment", "/** Which output target the sound should be played through */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Which output target the sound should be played through" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_OutputTarget = { "OutputTarget", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundClassProperties, OutputTarget), Z_Construct_UEnum_Engine_EAudioOutputTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_OutputTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_OutputTarget_MetaData)) }; // 912603508
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LoadingBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LoadingBehavior_MetaData[] = {
		{ "Category", "Loading" },
		{ "Comment", "/** Specifies how and when compressed audio data is loaded for asset if stream caching is enabled. */" },
		{ "DisplayName", "Loading Behavior Override" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Specifies how and when compressed audio data is loaded for asset if stream caching is enabled." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LoadingBehavior = { "LoadingBehavior", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundClassProperties, LoadingBehavior), Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LoadingBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LoadingBehavior_MetaData)) }; // 2436623139
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_DefaultSubmix_MetaData[] = {
		{ "Category", "Submix" },
		{ "Comment", "/** Default output submix of referencing sounds. If unset, falls back to the 'Master Submix' as set in the 'Audio' category of Project Settings. \n\x09  * (Unavailable if legacy 'Output to Master EQ Submix' is set) */" },
		{ "EditCondition", "!bApplyEffects" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Default output submix of referencing sounds. If unset, falls back to the 'Master Submix' as set in the 'Audio' category of Project Settings.\n(Unavailable if legacy 'Output to Master EQ Submix' is set)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_DefaultSubmix = { "DefaultSubmix", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundClassProperties, DefaultSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_DefaultSubmix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_DefaultSubmix_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundClassProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LowPassFilterFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_AttenuationDistanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LFEBleed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_VoiceCenterChannelVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_RadioFilterVolumeThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bAlwaysPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsUISound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bIsMusic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bCenterChannelOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bApplyAmbientVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_bReverb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_Default2DReverbSendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_ModulationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_OutputTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LoadingBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_LoadingBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewProp_DefaultSubmix,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundClassProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundClassProperties",
		sizeof(FSoundClassProperties),
		alignof(FSoundClassProperties),
		Z_Construct_UScriptStruct_FSoundClassProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundClassProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundClassProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundClassProperties.InnerSingleton, Z_Construct_UScriptStruct_FSoundClassProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundClassProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PassiveSoundMixModifier;
class UScriptStruct* FPassiveSoundMixModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PassiveSoundMixModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PassiveSoundMixModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPassiveSoundMixModifier, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PassiveSoundMixModifier"));
	}
	return Z_Registration_Info_UScriptStruct_PassiveSoundMixModifier.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPassiveSoundMixModifier>()
{
	return FPassiveSoundMixModifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundMix_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundMix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinVolumeThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVolumeThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxVolumeThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxVolumeThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure containing information on a SoundMix to activate passively.\n */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Structure containing information on a SoundMix to activate passively." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPassiveSoundMixModifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_SoundMix_MetaData[] = {
		{ "Category", "PassiveSoundMixModifier" },
		{ "Comment", "/** The SoundMix to activate */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "The SoundMix to activate" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_SoundMix = { "SoundMix", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPassiveSoundMixModifier, SoundMix), Z_Construct_UClass_USoundMix_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_SoundMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_SoundMix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MinVolumeThreshold_MetaData[] = {
		{ "Category", "PassiveSoundMixModifier" },
		{ "Comment", "/** Minimum volume level required to activate SoundMix. Below this value the SoundMix will not be active. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Minimum volume level required to activate SoundMix. Below this value the SoundMix will not be active." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MinVolumeThreshold = { "MinVolumeThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPassiveSoundMixModifier, MinVolumeThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MinVolumeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MinVolumeThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MaxVolumeThreshold_MetaData[] = {
		{ "Category", "PassiveSoundMixModifier" },
		{ "Comment", "/** Maximum volume level required to activate SoundMix. Above this value the SoundMix will not be active. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "Maximum volume level required to activate SoundMix. Above this value the SoundMix will not be active." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MaxVolumeThreshold = { "MaxVolumeThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPassiveSoundMixModifier, MaxVolumeThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MaxVolumeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MaxVolumeThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_SoundMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MinVolumeThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewProp_MaxVolumeThreshold,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PassiveSoundMixModifier",
		sizeof(FPassiveSoundMixModifier),
		alignof(FPassiveSoundMixModifier),
		Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPassiveSoundMixModifier()
	{
		if (!Z_Registration_Info_UScriptStruct_PassiveSoundMixModifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PassiveSoundMixModifier.InnerSingleton, Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PassiveSoundMixModifier.InnerSingleton;
	}
	void USoundClass::StaticRegisterNativesUSoundClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundClass);
	UClass* Z_Construct_UClass_USoundClass_NoRegister()
	{
		return USoundClass::StaticClass();
	}
	struct Z_Construct_UClass_USoundClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildClasses;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PassiveSoundMixModifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PassiveSoundMixModifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PassiveSoundMixModifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/SoundClass.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClass_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Configurable properties like volume and priority. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Configurable properties like volume and priority." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundClass, Properties), Z_Construct_UScriptStruct_FSoundClassProperties, METADATA_PARAMS(Z_Construct_UClass_USoundClass_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::NewProp_Properties_MetaData)) }; // 3592310786
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses_Inner = { "ChildClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses = { "ChildClasses", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundClass, ChildClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers_Inner = { "PassiveSoundMixModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPassiveSoundMixModifier, METADATA_PARAMS(nullptr, 0) }; // 3251469110
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** SoundMix Modifiers to activate automatically when a sound of this class is playing. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
		{ "ToolTip", "SoundMix Modifiers to activate automatically when a sound of this class is playing." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers = { "PassiveSoundMixModifiers", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundClass, PassiveSoundMixModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers_MetaData)) }; // 3251469110
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClass_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Classes/Sound/SoundClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundClass_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundClass, ParentClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundClass_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::NewProp_ParentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_ChildClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_PassiveSoundMixModifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClass_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundClass_Statics::ClassParams = {
		&USoundClass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundClass()
	{
		if (!Z_Registration_Info_UClass_USoundClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundClass.OuterSingleton, Z_Construct_UClass_USoundClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundClass.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundClass>()
	{
		return USoundClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundClass);
	USoundClass::~USoundClass() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundClass)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_Statics::ScriptStructInfo[] = {
		{ FSoundClassEditorData::StaticStruct, Z_Construct_UScriptStruct_FSoundClassEditorData_Statics::NewStructOps, TEXT("SoundClassEditorData"), &Z_Registration_Info_UScriptStruct_SoundClassEditorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundClassEditorData), 3229924314U) },
		{ FSoundClassProperties::StaticStruct, Z_Construct_UScriptStruct_FSoundClassProperties_Statics::NewStructOps, TEXT("SoundClassProperties"), &Z_Registration_Info_UScriptStruct_SoundClassProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundClassProperties), 3592310786U) },
		{ FPassiveSoundMixModifier::StaticStruct, Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics::NewStructOps, TEXT("PassiveSoundMixModifier"), &Z_Registration_Info_UScriptStruct_PassiveSoundMixModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPassiveSoundMixModifier), 3251469110U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundClass, USoundClass::StaticClass, TEXT("USoundClass"), &Z_Registration_Info_UClass_USoundClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundClass), 631725503U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_1918599705(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
