// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/ExportDialogueScriptCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExportDialogueScriptCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UExportDialogueScriptCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UExportDialogueScriptCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandletBase();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueScriptEntry();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueScriptEntry;
class UScriptStruct* FDialogueScriptEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueScriptEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueScriptEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueScriptEntry, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("DialogueScriptEntry"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueScriptEntry.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FDialogueScriptEntry>()
{
	return FDialogueScriptEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakingVoice_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SpeakingVoice;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetVoices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetVoices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetVoices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpokenDialogue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SpokenDialogue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiceActorDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VoiceActorDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioFileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsRecorded_MetaData[];
#endif
		static void NewProp_IsRecorded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRecorded;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocalizationKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalizationKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalizationKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakingVoiceGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SpeakingVoiceGUID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetVoiceGUIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetVoiceGUIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetVoiceGUIDs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueAssetGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueAssetGUID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueScriptEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpeakingVoice_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpeakingVoice = { "SpeakingVoice", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueScriptEntry, SpeakingVoice), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpeakingVoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpeakingVoice_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoices_Inner = { "TargetVoices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoices = { "TargetVoices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueScriptEntry, TargetVoices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpokenDialogue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpokenDialogue = { "SpokenDialogue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueScriptEntry, SpokenDialogue), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpokenDialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpokenDialogue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_VoiceActorDirection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_VoiceActorDirection = { "VoiceActorDirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueScriptEntry, VoiceActorDirection), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_VoiceActorDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_VoiceActorDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_AudioFileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_AudioFileName = { "AudioFileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueScriptEntry, AudioFileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_AudioFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_AudioFileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_DialogueAsset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_DialogueAsset = { "DialogueAsset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueScriptEntry, DialogueAsset), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_DialogueAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_DialogueAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_IsRecorded_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_IsRecorded_SetBit(void* Obj)
	{
		((FDialogueScriptEntry*)Obj)->IsRecorded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_IsRecorded = { "IsRecorded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDialogueScriptEntry), &Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_IsRecorded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_IsRecorded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_IsRecorded_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_LocalizationKeys_Inner = { "LocalizationKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_LocalizationKeys_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_LocalizationKeys = { "LocalizationKeys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueScriptEntry, LocalizationKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_LocalizationKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_LocalizationKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpeakingVoiceGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpeakingVoiceGUID = { "SpeakingVoiceGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueScriptEntry, SpeakingVoiceGUID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpeakingVoiceGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpeakingVoiceGUID_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoiceGUIDs_Inner = { "TargetVoiceGUIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoiceGUIDs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoiceGUIDs = { "TargetVoiceGUIDs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueScriptEntry, TargetVoiceGUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoiceGUIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoiceGUIDs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_DialogueAssetGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_DialogueAssetGUID = { "DialogueAssetGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueScriptEntry, DialogueAssetGUID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_DialogueAssetGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_DialogueAssetGUID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpeakingVoice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpokenDialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_VoiceActorDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_AudioFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_DialogueAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_IsRecorded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_LocalizationKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_LocalizationKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpeakingVoiceGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoiceGUIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoiceGUIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_DialogueAssetGUID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"DialogueScriptEntry",
		sizeof(FDialogueScriptEntry),
		alignof(FDialogueScriptEntry),
		Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueScriptEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_DialogueScriptEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueScriptEntry.InnerSingleton, Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DialogueScriptEntry.InnerSingleton;
	}
	void UExportDialogueScriptCommandlet::StaticRegisterNativesUExportDialogueScriptCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExportDialogueScriptCommandlet);
	UClass* Z_Construct_UClass_UExportDialogueScriptCommandlet_NoRegister()
	{
		return UExportDialogueScriptCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UExportDialogueScriptCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExportDialogueScriptCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGatherTextCommandletBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportDialogueScriptCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09UExportDialogueScriptCommandlet: Handles exporting localized script sheets for dialogue wave assets.\n */" },
		{ "IncludePath", "Commandlets/ExportDialogueScriptCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
		{ "ToolTip", "UExportDialogueScriptCommandlet: Handles exporting localized script sheets for dialogue wave assets." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExportDialogueScriptCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExportDialogueScriptCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExportDialogueScriptCommandlet_Statics::ClassParams = {
		&UExportDialogueScriptCommandlet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UExportDialogueScriptCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExportDialogueScriptCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExportDialogueScriptCommandlet()
	{
		if (!Z_Registration_Info_UClass_UExportDialogueScriptCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExportDialogueScriptCommandlet.OuterSingleton, Z_Construct_UClass_UExportDialogueScriptCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExportDialogueScriptCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UExportDialogueScriptCommandlet>()
	{
		return UExportDialogueScriptCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExportDialogueScriptCommandlet);
	UExportDialogueScriptCommandlet::~UExportDialogueScriptCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExportDialogueScriptCommandlet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExportDialogueScriptCommandlet_h_Statics::ScriptStructInfo[] = {
		{ FDialogueScriptEntry::StaticStruct, Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewStructOps, TEXT("DialogueScriptEntry"), &Z_Registration_Info_UScriptStruct_DialogueScriptEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueScriptEntry), 1643041923U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExportDialogueScriptCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExportDialogueScriptCommandlet, UExportDialogueScriptCommandlet::StaticClass, TEXT("UExportDialogueScriptCommandlet"), &Z_Registration_Info_UClass_UExportDialogueScriptCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExportDialogueScriptCommandlet), 3478158769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExportDialogueScriptCommandlet_h_133095322(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExportDialogueScriptCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExportDialogueScriptCommandlet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExportDialogueScriptCommandlet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ExportDialogueScriptCommandlet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
