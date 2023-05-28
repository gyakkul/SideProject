// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ResonanceAudioReverb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResonanceAudioReverb() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
	RESONANCEAUDIO_API UClass* Z_Construct_UClass_UResonanceAudioReverbPluginPreset();
	RESONANCEAUDIO_API UClass* Z_Construct_UClass_UResonanceAudioReverbPluginPreset_NoRegister();
	RESONANCEAUDIO_API UEnum* Z_Construct_UEnum_ResonanceAudio_ERaMaterialName();
	RESONANCEAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings();
	UPackage* Z_Construct_UPackage__Script_ResonanceAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ResonanceAudioReverbPluginSettings;
class UScriptStruct* FResonanceAudioReverbPluginSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ResonanceAudioReverbPluginSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ResonanceAudioReverbPluginSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings, (UObject*)Z_Construct_UPackage__Script_ResonanceAudio(), TEXT("ResonanceAudioReverbPluginSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ResonanceAudioReverbPluginSettings.OuterSingleton;
}
template<> RESONANCEAUDIO_API UScriptStruct* StaticStruct<FResonanceAudioReverbPluginSettings>()
{
	return FResonanceAudioReverbPluginSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRoomEffects_MetaData[];
#endif
		static void NewProp_bEnableRoomEffects_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRoomEffects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGetTransformFromAudioVolume_MetaData[];
#endif
		static void NewProp_bGetTransformFromAudioVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetTransformFromAudioVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoomPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoomRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomDimensions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoomDimensions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LeftWallMaterial_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftWallMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LeftWallMaterial;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RightWallMaterial_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightWallMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RightWallMaterial;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FloorMaterial_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FloorMaterial;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CeilingMaterial_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CeilingMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CeilingMaterial;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FrontWallMaterial_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontWallMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FrontWallMaterial;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BackWallMaterial_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackWallMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BackWallMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionScalar_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionScalar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverbGain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbTimeModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverbTimeModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverbBrightness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResonanceAudioReverbPluginSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_bEnableRoomEffects_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Whether Resonance Audio room effects are enabled\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Whether Resonance Audio room effects are enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_bEnableRoomEffects_SetBit(void* Obj)
	{
		((FResonanceAudioReverbPluginSettings*)Obj)->bEnableRoomEffects = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_bEnableRoomEffects = { "bEnableRoomEffects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FResonanceAudioReverbPluginSettings), &Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_bEnableRoomEffects_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_bEnableRoomEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_bEnableRoomEffects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_bGetTransformFromAudioVolume_MetaData[] = {
		{ "Category", "Room Transform" },
		{ "Comment", "// Whether the room transform should be taken from the Audio Volume this preset is attached to.\n// If not used with the Audio Volume, last saved values will be used.\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Whether the room transform should be taken from the Audio Volume this preset is attached to.\nIf not used with the Audio Volume, last saved values will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_bGetTransformFromAudioVolume_SetBit(void* Obj)
	{
		((FResonanceAudioReverbPluginSettings*)Obj)->bGetTransformFromAudioVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_bGetTransformFromAudioVolume = { "bGetTransformFromAudioVolume", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FResonanceAudioReverbPluginSettings), &Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_bGetTransformFromAudioVolume_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_bGetTransformFromAudioVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_bGetTransformFromAudioVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_RoomPosition_MetaData[] = {
		{ "Category", "Room Transform" },
		{ "Comment", "// Room position in 3D space\n" },
		{ "EditCondition", "!bGetTransformFromAudioVolume" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Room position in 3D space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_RoomPosition = { "RoomPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FResonanceAudioReverbPluginSettings, RoomPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_RoomPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_RoomPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_RoomRotation_MetaData[] = {
		{ "Category", "Room Transform" },
		{ "Comment", "// Room rotation in 3D space\n" },
		{ "EditCondition", "!bGetTransformFromAudioVolume" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Room rotation in 3D space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_RoomRotation = { "RoomRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FResonanceAudioReverbPluginSettings, RoomRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_RoomRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_RoomRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_RoomDimensions_MetaData[] = {
		{ "Category", "Room Transform" },
		{ "Comment", "// Room dimensions in 3D space\n" },
		{ "EditCondition", "!bGetTransformFromAudioVolume" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Room dimensions in 3D space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_RoomDimensions = { "RoomDimensions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FResonanceAudioReverbPluginSettings, RoomDimensions), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_RoomDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_RoomDimensions_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_LeftWallMaterial_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_LeftWallMaterial_MetaData[] = {
		{ "Category", "Acoustic Materials" },
		{ "Comment", "// Left wall acoustic material\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Left wall acoustic material" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_LeftWallMaterial = { "LeftWallMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FResonanceAudioReverbPluginSettings, LeftWallMaterial), Z_Construct_UEnum_ResonanceAudio_ERaMaterialName, METADATA_PARAMS(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_LeftWallMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_LeftWallMaterial_MetaData)) }; // 3493280694
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_RightWallMaterial_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_RightWallMaterial_MetaData[] = {
		{ "Category", "Acoustic Materials" },
		{ "Comment", "// Right wall acoustic material\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Right wall acoustic material" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_RightWallMaterial = { "RightWallMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FResonanceAudioReverbPluginSettings, RightWallMaterial), Z_Construct_UEnum_ResonanceAudio_ERaMaterialName, METADATA_PARAMS(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_RightWallMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_RightWallMaterial_MetaData)) }; // 3493280694
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_FloorMaterial_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_FloorMaterial_MetaData[] = {
		{ "Category", "Acoustic Materials" },
		{ "Comment", "// Floor acoustic material\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Floor acoustic material" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_FloorMaterial = { "FloorMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FResonanceAudioReverbPluginSettings, FloorMaterial), Z_Construct_UEnum_ResonanceAudio_ERaMaterialName, METADATA_PARAMS(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_FloorMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_FloorMaterial_MetaData)) }; // 3493280694
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_CeilingMaterial_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_CeilingMaterial_MetaData[] = {
		{ "Category", "Acoustic Materials" },
		{ "Comment", "// Ceiling acoustic material\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Ceiling acoustic material" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_CeilingMaterial = { "CeilingMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FResonanceAudioReverbPluginSettings, CeilingMaterial), Z_Construct_UEnum_ResonanceAudio_ERaMaterialName, METADATA_PARAMS(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_CeilingMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_CeilingMaterial_MetaData)) }; // 3493280694
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_FrontWallMaterial_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_FrontWallMaterial_MetaData[] = {
		{ "Category", "Acoustic Materials" },
		{ "Comment", "// Front wall acoustic material\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Front wall acoustic material" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_FrontWallMaterial = { "FrontWallMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FResonanceAudioReverbPluginSettings, FrontWallMaterial), Z_Construct_UEnum_ResonanceAudio_ERaMaterialName, METADATA_PARAMS(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_FrontWallMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_FrontWallMaterial_MetaData)) }; // 3493280694
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_BackWallMaterial_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_BackWallMaterial_MetaData[] = {
		{ "Category", "Acoustic Materials" },
		{ "Comment", "// Back wall acoustic material\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Back wall acoustic material" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_BackWallMaterial = { "BackWallMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FResonanceAudioReverbPluginSettings, BackWallMaterial), Z_Construct_UEnum_ResonanceAudio_ERaMaterialName, METADATA_PARAMS(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_BackWallMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_BackWallMaterial_MetaData)) }; // 3493280694
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_ReflectionScalar_MetaData[] = {
		{ "Category", "Early Reflections" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Early reflections gain multiplier. Default: 1.0\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Early reflections gain multiplier. Default: 1.0" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_ReflectionScalar = { "ReflectionScalar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FResonanceAudioReverbPluginSettings, ReflectionScalar), METADATA_PARAMS(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_ReflectionScalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_ReflectionScalar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_ReverbGain_MetaData[] = {
		{ "Category", "Reverb" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Reverb gain multiplier. Default: 1.0\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Reverb gain multiplier. Default: 1.0" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_ReverbGain = { "ReverbGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FResonanceAudioReverbPluginSettings, ReverbGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_ReverbGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_ReverbGain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_ReverbTimeModifier_MetaData[] = {
		{ "Category", "Reverb" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Reverb time modifier. Default: 1.0\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Reverb time modifier. Default: 1.0" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_ReverbTimeModifier = { "ReverbTimeModifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FResonanceAudioReverbPluginSettings, ReverbTimeModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_ReverbTimeModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_ReverbTimeModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_ReverbBrightness_MetaData[] = {
		{ "Category", "Reverb" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "// Reverb brightness modifier. Default: 0.0\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Reverb brightness modifier. Default: 0.0" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_ReverbBrightness = { "ReverbBrightness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FResonanceAudioReverbPluginSettings, ReverbBrightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_ReverbBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_ReverbBrightness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_bEnableRoomEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_bGetTransformFromAudioVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_RoomPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_RoomRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_RoomDimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_LeftWallMaterial_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_LeftWallMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_RightWallMaterial_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_RightWallMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_FloorMaterial_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_FloorMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_CeilingMaterial_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_CeilingMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_FrontWallMaterial_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_FrontWallMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_BackWallMaterial_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_BackWallMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_ReflectionScalar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_ReverbGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_ReverbTimeModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewProp_ReverbBrightness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ResonanceAudio,
		nullptr,
		&NewStructOps,
		"ResonanceAudioReverbPluginSettings",
		sizeof(FResonanceAudioReverbPluginSettings),
		alignof(FResonanceAudioReverbPluginSettings),
		Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ResonanceAudioReverbPluginSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ResonanceAudioReverbPluginSettings.InnerSingleton, Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ResonanceAudioReverbPluginSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UResonanceAudioReverbPluginPreset::execSetReverbBrightness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InReverbBrightness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReverbBrightness(Z_Param_InReverbBrightness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResonanceAudioReverbPluginPreset::execSetReverbTimeModifier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InReverbTimeModifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReverbTimeModifier(Z_Param_InReverbTimeModifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResonanceAudioReverbPluginPreset::execSetReverbGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InReverbGain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReverbGain(Z_Param_InReverbGain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResonanceAudioReverbPluginPreset::execSetReflectionScalar)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InReflectionScalar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReflectionScalar(Z_Param_InReflectionScalar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResonanceAudioReverbPluginPreset::execSetRoomMaterials)
	{
		P_GET_TARRAY_REF(ERaMaterialName,Z_Param_Out_InMaterials);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRoomMaterials(Z_Param_Out_InMaterials);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResonanceAudioReverbPluginPreset::execSetRoomDimensions)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InDimensions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRoomDimensions(Z_Param_Out_InDimensions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResonanceAudioReverbPluginPreset::execSetRoomRotation)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRoomRotation(Z_Param_Out_InRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResonanceAudioReverbPluginPreset::execSetRoomPosition)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRoomPosition(Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UResonanceAudioReverbPluginPreset::execSetEnableRoomEffects)
	{
		P_GET_UBOOL(Z_Param_bInEnableRoomEffects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableRoomEffects(Z_Param_bInEnableRoomEffects);
		P_NATIVE_END;
	}
	void UResonanceAudioReverbPluginPreset::StaticRegisterNativesUResonanceAudioReverbPluginPreset()
	{
		UClass* Class = UResonanceAudioReverbPluginPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetEnableRoomEffects", &UResonanceAudioReverbPluginPreset::execSetEnableRoomEffects },
			{ "SetReflectionScalar", &UResonanceAudioReverbPluginPreset::execSetReflectionScalar },
			{ "SetReverbBrightness", &UResonanceAudioReverbPluginPreset::execSetReverbBrightness },
			{ "SetReverbGain", &UResonanceAudioReverbPluginPreset::execSetReverbGain },
			{ "SetReverbTimeModifier", &UResonanceAudioReverbPluginPreset::execSetReverbTimeModifier },
			{ "SetRoomDimensions", &UResonanceAudioReverbPluginPreset::execSetRoomDimensions },
			{ "SetRoomMaterials", &UResonanceAudioReverbPluginPreset::execSetRoomMaterials },
			{ "SetRoomPosition", &UResonanceAudioReverbPluginPreset::execSetRoomPosition },
			{ "SetRoomRotation", &UResonanceAudioReverbPluginPreset::execSetRoomRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Statics
	{
		struct ResonanceAudioReverbPluginPreset_eventSetEnableRoomEffects_Parms
		{
			bool bInEnableRoomEffects;
		};
		static void NewProp_bInEnableRoomEffects_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableRoomEffects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Statics::NewProp_bInEnableRoomEffects_SetBit(void* Obj)
	{
		((ResonanceAudioReverbPluginPreset_eventSetEnableRoomEffects_Parms*)Obj)->bInEnableRoomEffects = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Statics::NewProp_bInEnableRoomEffects = { "bInEnableRoomEffects", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ResonanceAudioReverbPluginPreset_eventSetEnableRoomEffects_Parms), &Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Statics::NewProp_bInEnableRoomEffects_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Statics::NewProp_bInEnableRoomEffects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resonance Audio Room Effect Settings" },
		{ "Comment", "// Enables/disables Resonance Audio room effects\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Enables/disables Resonance Audio room effects" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResonanceAudioReverbPluginPreset, nullptr, "SetEnableRoomEffects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Statics::ResonanceAudioReverbPluginPreset_eventSetEnableRoomEffects_Parms), Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetEnableRoomEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReflectionScalar_Statics
	{
		struct ResonanceAudioReverbPluginPreset_eventSetReflectionScalar_Parms
		{
			float InReflectionScalar;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InReflectionScalar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReflectionScalar_Statics::NewProp_InReflectionScalar = { "InReflectionScalar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ResonanceAudioReverbPluginPreset_eventSetReflectionScalar_Parms, InReflectionScalar), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReflectionScalar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReflectionScalar_Statics::NewProp_InReflectionScalar,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReflectionScalar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resonance Audio Room Effect Settings" },
		{ "Comment", "// Sets early reflections gain multiplier\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Sets early reflections gain multiplier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReflectionScalar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResonanceAudioReverbPluginPreset, nullptr, "SetReflectionScalar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReflectionScalar_Statics::ResonanceAudioReverbPluginPreset_eventSetReflectionScalar_Parms), Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReflectionScalar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReflectionScalar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReflectionScalar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReflectionScalar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReflectionScalar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReflectionScalar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbBrightness_Statics
	{
		struct ResonanceAudioReverbPluginPreset_eventSetReverbBrightness_Parms
		{
			float InReverbBrightness;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InReverbBrightness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbBrightness_Statics::NewProp_InReverbBrightness = { "InReverbBrightness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ResonanceAudioReverbPluginPreset_eventSetReverbBrightness_Parms, InReverbBrightness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbBrightness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbBrightness_Statics::NewProp_InReverbBrightness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbBrightness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resonance Audio Room Effect Settings" },
		{ "Comment", "// Increases high frequency reverberation times when positive, decreases when negative.\n// Has no effect when set to 0.0\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Increases high frequency reverberation times when positive, decreases when negative.\nHas no effect when set to 0.0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResonanceAudioReverbPluginPreset, nullptr, "SetReverbBrightness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbBrightness_Statics::ResonanceAudioReverbPluginPreset_eventSetReverbBrightness_Parms), Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbBrightness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbBrightness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbBrightness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbBrightness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbBrightness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbGain_Statics
	{
		struct ResonanceAudioReverbPluginPreset_eventSetReverbGain_Parms
		{
			float InReverbGain;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InReverbGain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbGain_Statics::NewProp_InReverbGain = { "InReverbGain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ResonanceAudioReverbPluginPreset_eventSetReverbGain_Parms, InReverbGain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbGain_Statics::NewProp_InReverbGain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resonance Audio Room Effect Settings" },
		{ "Comment", "// Sets reverb gain multiplier\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Sets reverb gain multiplier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResonanceAudioReverbPluginPreset, nullptr, "SetReverbGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbGain_Statics::ResonanceAudioReverbPluginPreset_eventSetReverbGain_Parms), Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Statics
	{
		struct ResonanceAudioReverbPluginPreset_eventSetReverbTimeModifier_Parms
		{
			float InReverbTimeModifier;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InReverbTimeModifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Statics::NewProp_InReverbTimeModifier = { "InReverbTimeModifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ResonanceAudioReverbPluginPreset_eventSetReverbTimeModifier_Parms, InReverbTimeModifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Statics::NewProp_InReverbTimeModifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resonance Audio Room Effect Settings" },
		{ "Comment", "// Adjusts the reverberation time across all frequency bands by multiplying the computed values by this factor.\n// Has no effect when set to 1.0\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Adjusts the reverberation time across all frequency bands by multiplying the computed values by this factor.\nHas no effect when set to 1.0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResonanceAudioReverbPluginPreset, nullptr, "SetReverbTimeModifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Statics::ResonanceAudioReverbPluginPreset_eventSetReverbTimeModifier_Parms), Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbTimeModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomDimensions_Statics
	{
		struct ResonanceAudioReverbPluginPreset_eventSetRoomDimensions_Parms
		{
			FVector InDimensions;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDimensions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDimensions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomDimensions_Statics::NewProp_InDimensions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomDimensions_Statics::NewProp_InDimensions = { "InDimensions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ResonanceAudioReverbPluginPreset_eventSetRoomDimensions_Parms, InDimensions), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomDimensions_Statics::NewProp_InDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomDimensions_Statics::NewProp_InDimensions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomDimensions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomDimensions_Statics::NewProp_InDimensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomDimensions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resonance Audio Room Effect Settings" },
		{ "Comment", "// Sets room dimensions in 3D space\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Sets room dimensions in 3D space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomDimensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResonanceAudioReverbPluginPreset, nullptr, "SetRoomDimensions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomDimensions_Statics::ResonanceAudioReverbPluginPreset_eventSetRoomDimensions_Parms), Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomDimensions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomDimensions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomDimensions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomDimensions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomDimensions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials_Statics
	{
		struct ResonanceAudioReverbPluginPreset_eventSetRoomMaterials_Parms
		{
			TArray<ERaMaterialName> InMaterials;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InMaterials_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials_Statics::NewProp_InMaterials_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials_Statics::NewProp_InMaterials_Inner = { "InMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_ResonanceAudio_ERaMaterialName, METADATA_PARAMS(nullptr, 0) }; // 3493280694
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials_Statics::NewProp_InMaterials_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials_Statics::NewProp_InMaterials = { "InMaterials", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ResonanceAudioReverbPluginPreset_eventSetRoomMaterials_Parms, InMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials_Statics::NewProp_InMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials_Statics::NewProp_InMaterials_MetaData)) }; // 3493280694
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials_Statics::NewProp_InMaterials_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials_Statics::NewProp_InMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials_Statics::NewProp_InMaterials,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resonance Audio Room Effect Settings" },
		{ "Comment", "// Sets Resonance Audio room's acoustic materials\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Sets Resonance Audio room's acoustic materials" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResonanceAudioReverbPluginPreset, nullptr, "SetRoomMaterials", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials_Statics::ResonanceAudioReverbPluginPreset_eventSetRoomMaterials_Parms), Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomPosition_Statics
	{
		struct ResonanceAudioReverbPluginPreset_eventSetRoomPosition_Parms
		{
			FVector InPosition;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomPosition_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomPosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ResonanceAudioReverbPluginPreset_eventSetRoomPosition_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomPosition_Statics::NewProp_InPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomPosition_Statics::NewProp_InPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomPosition_Statics::NewProp_InPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resonance Audio Room Effect Settings" },
		{ "Comment", "// Sets room position in 3D space\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Sets room position in 3D space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResonanceAudioReverbPluginPreset, nullptr, "SetRoomPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomPosition_Statics::ResonanceAudioReverbPluginPreset_eventSetRoomPosition_Parms), Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomRotation_Statics
	{
		struct ResonanceAudioReverbPluginPreset_eventSetRoomRotation_Parms
		{
			FQuat InRotation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomRotation_Statics::NewProp_InRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomRotation_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ResonanceAudioReverbPluginPreset_eventSetRoomRotation_Parms, InRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomRotation_Statics::NewProp_InRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomRotation_Statics::NewProp_InRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomRotation_Statics::NewProp_InRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Resonance Audio Room Effect Settings" },
		{ "Comment", "// Sets room rotation in 3D space\n" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ToolTip", "Sets room rotation in 3D space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResonanceAudioReverbPluginPreset, nullptr, "SetRoomRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomRotation_Statics::ResonanceAudioReverbPluginPreset_eventSetRoomRotation_Parms), Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UResonanceAudioReverbPluginPreset);
	UClass* Z_Construct_UClass_UResonanceAudioReverbPluginPreset_NoRegister()
	{
		return UResonanceAudioReverbPluginPreset::StaticClass();
	}
	struct Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_ResonanceAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetEnableRoomEffects, "SetEnableRoomEffects" }, // 2235208305
		{ &Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReflectionScalar, "SetReflectionScalar" }, // 2344556177
		{ &Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbBrightness, "SetReverbBrightness" }, // 182536149
		{ &Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbGain, "SetReverbGain" }, // 1899516527
		{ &Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetReverbTimeModifier, "SetReverbTimeModifier" }, // 2043568469
		{ &Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomDimensions, "SetRoomDimensions" }, // 3184557354
		{ &Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomMaterials, "SetRoomMaterials" }, // 4078544859
		{ &Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomPosition, "SetRoomPosition" }, // 1266274164
		{ &Z_Construct_UFunction_UResonanceAudioReverbPluginPreset_SetRoomRotation, "SetRoomRotation" }, // 4233415206
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ResonanceAudioReverb.h" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Resonance Audio Room Effect Settings" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverb.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UResonanceAudioReverbPluginPreset, Settings), Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings, METADATA_PARAMS(Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics::NewProp_Settings_MetaData)) }; // 2895175008
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResonanceAudioReverbPluginPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics::ClassParams = {
		&UResonanceAudioReverbPluginPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResonanceAudioReverbPluginPreset()
	{
		if (!Z_Registration_Info_UClass_UResonanceAudioReverbPluginPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResonanceAudioReverbPluginPreset.OuterSingleton, Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UResonanceAudioReverbPluginPreset.OuterSingleton;
	}
	template<> RESONANCEAUDIO_API UClass* StaticClass<UResonanceAudioReverbPluginPreset>()
	{
		return UResonanceAudioReverbPluginPreset::StaticClass();
	}
	UResonanceAudioReverbPluginPreset::UResonanceAudioReverbPluginPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResonanceAudioReverbPluginPreset);
	UResonanceAudioReverbPluginPreset::~UResonanceAudioReverbPluginPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_Statics::ScriptStructInfo[] = {
		{ FResonanceAudioReverbPluginSettings::StaticStruct, Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics::NewStructOps, TEXT("ResonanceAudioReverbPluginSettings"), &Z_Registration_Info_UScriptStruct_ResonanceAudioReverbPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FResonanceAudioReverbPluginSettings), 2895175008U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UResonanceAudioReverbPluginPreset, UResonanceAudioReverbPluginPreset::StaticClass, TEXT("UResonanceAudioReverbPluginPreset"), &Z_Registration_Info_UClass_UResonanceAudioReverbPluginPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResonanceAudioReverbPluginPreset), 1421827893U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_1299849369(TEXT("/Script/ResonanceAudio"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
