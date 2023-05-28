// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "../../Source/Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueWave() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueSoundWaveProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueWave();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueContext();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueContextMapping();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueContextMapping;
class UScriptStruct* FDialogueContextMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueContextMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueContextMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueContextMapping, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DialogueContextMapping"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueContextMapping.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDialogueContextMapping>()
{
	return FDialogueContextMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDialogueContextMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalizationKeyFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocalizationKeyFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Proxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Proxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueContextMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "DialogueContextMapping" },
		{ "Comment", "/** The context of the dialogue. */" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "The context of the dialogue." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueContextMapping, Context), Z_Construct_UScriptStruct_FDialogueContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Context_MetaData)) }; // 190242271
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_SoundWave_MetaData[] = {
		{ "Category", "DialogueContextMapping" },
		{ "Comment", "/** The soundwave to play for this dialogue. */" },
		{ "DisallowedClasses", "/Script/MetasoundEngine.MetaSoundSource, /Script/Engine.SoundSourceBus" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "The soundwave to play for this dialogue." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueContextMapping, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_SoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_SoundWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_LocalizationKeyFormat_MetaData[] = {
		{ "Category", "DialogueContextMapping" },
		{ "Comment", "/**\n\x09 * The format string to use when generating the localization key for this context. This must be unique within the owner dialogue wave.\n\x09 * Available format markers:\n\x09 *   * {ContextHash} - A hash generated from the speaker and target voices.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "The format string to use when generating the localization key for this context. This must be unique within the owner dialogue wave.\nAvailable format markers:\n  * {ContextHash} - A hash generated from the speaker and target voices." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_LocalizationKeyFormat = { "LocalizationKeyFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueContextMapping, LocalizationKeyFormat), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_LocalizationKeyFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_LocalizationKeyFormat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Proxy_MetaData[] = {
		{ "Comment", "/** Cached object for playing the soundwave with subtitle information included. */" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "Cached object for playing the soundwave with subtitle information included." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueContextMapping, Proxy), Z_Construct_UClass_UDialogueSoundWaveProxy_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Proxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Proxy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_SoundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_LocalizationKeyFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Proxy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DialogueContextMapping",
		sizeof(FDialogueContextMapping),
		alignof(FDialogueContextMapping),
		Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueContextMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_DialogueContextMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueContextMapping.InnerSingleton, Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DialogueContextMapping.InnerSingleton;
	}
	void UDialogueWave::StaticRegisterNativesUDialogueWave()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueWave);
	UClass* Z_Construct_UClass_UDialogueWave_NoRegister()
	{
		return UDialogueWave::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueWave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMature_MetaData[];
#endif
		static void NewProp_bMature_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_SubtitleOverride_MetaData[];
#endif
		static void NewProp_bOverride_SubtitleOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_SubtitleOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpokenText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SpokenText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubtitleOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SubtitleOverride;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiceActorDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VoiceActorDirection;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContextMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ContextMappings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalizationGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalizationGUID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueWave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWave_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/DialogueWave.h" },
		{ "LoadBehavior", "LazyOnDemand" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWave_Statics::NewProp_bMature_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** true if this dialogue is considered to contain mature/adult content. */" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "true if this dialogue is considered to contain mature/adult content." },
	};
#endif
	void Z_Construct_UClass_UDialogueWave_Statics::NewProp_bMature_SetBit(void* Obj)
	{
		((UDialogueWave*)Obj)->bMature = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_bMature = { "bMature", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDialogueWave), &Z_Construct_UClass_UDialogueWave_Statics::NewProp_bMature_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDialogueWave_Statics::NewProp_bMature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWave_Statics::NewProp_bMature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWave_Statics::NewProp_bOverride_SubtitleOverride_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
	};
#endif
	void Z_Construct_UClass_UDialogueWave_Statics::NewProp_bOverride_SubtitleOverride_SetBit(void* Obj)
	{
		((UDialogueWave*)Obj)->bOverride_SubtitleOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_bOverride_SubtitleOverride = { "bOverride_SubtitleOverride", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDialogueWave), &Z_Construct_UClass_UDialogueWave_Statics::NewProp_bOverride_SubtitleOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDialogueWave_Statics::NewProp_bOverride_SubtitleOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWave_Statics::NewProp_bOverride_SubtitleOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWave_Statics::NewProp_SpokenText_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** A localized version of the text that is actually spoken phonetically in the audio. */" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "A localized version of the text that is actually spoken phonetically in the audio." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_SpokenText = { "SpokenText", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWave, SpokenText), METADATA_PARAMS(Z_Construct_UClass_UDialogueWave_Statics::NewProp_SpokenText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWave_Statics::NewProp_SpokenText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWave_Statics::NewProp_SubtitleOverride_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** A localized version of the subtitle text that should be displayed for this audio. By default this will be the same as the Spoken Text. */" },
		{ "EditCondition", "bOverride_SubtitleOverride" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "A localized version of the subtitle text that should be displayed for this audio. By default this will be the same as the Spoken Text." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_SubtitleOverride = { "SubtitleOverride", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWave, SubtitleOverride), METADATA_PARAMS(Z_Construct_UClass_UDialogueWave_Statics::NewProp_SubtitleOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWave_Statics::NewProp_SubtitleOverride_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWave_Statics::NewProp_VoiceActorDirection_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Provides general notes to the voice actor intended to direct their performance, as well as contextual information to the translator. */" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "Provides general notes to the voice actor intended to direct their performance, as well as contextual information to the translator." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_VoiceActorDirection = { "VoiceActorDirection", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWave, VoiceActorDirection), METADATA_PARAMS(Z_Construct_UClass_UDialogueWave_Statics::NewProp_VoiceActorDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWave_Statics::NewProp_VoiceActorDirection_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_ContextMappings_Inner = { "ContextMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDialogueContextMapping, METADATA_PARAMS(nullptr, 0) }; // 3046395958
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWave_Statics::NewProp_ContextMappings_MetaData[] = {
		{ "Category", "DialogueContexts" },
		{ "Comment", "/* Mappings between dialogue contexts and associated soundwaves. */" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "Mappings between dialogue contexts and associated soundwaves." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_ContextMappings = { "ContextMappings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWave, ContextMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogueWave_Statics::NewProp_ContextMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWave_Statics::NewProp_ContextMappings_MetaData)) }; // 3046395958
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWave_Statics::NewProp_LocalizationGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_LocalizationGUID = { "LocalizationGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWave, LocalizationGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UDialogueWave_Statics::NewProp_LocalizationGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWave_Statics::NewProp_LocalizationGUID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_bMature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_bOverride_SubtitleOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_SpokenText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_SubtitleOverride,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_VoiceActorDirection,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_ContextMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_ContextMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_LocalizationGUID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueWave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueWave>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueWave_Statics::ClassParams = {
		&UDialogueWave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueWave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWave_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueWave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueWave()
	{
		if (!Z_Registration_Info_UClass_UDialogueWave.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueWave.OuterSingleton, Z_Construct_UClass_UDialogueWave_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueWave.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDialogueWave>()
	{
		return UDialogueWave::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueWave);
	UDialogueWave::~UDialogueWave() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDialogueWave)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_Statics::ScriptStructInfo[] = {
		{ FDialogueContextMapping::StaticStruct, Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewStructOps, TEXT("DialogueContextMapping"), &Z_Registration_Info_UScriptStruct_DialogueContextMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueContextMapping), 3046395958U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueWave, UDialogueWave::StaticClass, TEXT("UDialogueWave"), &Z_Registration_Info_UClass_UDialogueWave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueWave), 2290990610U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_238387567(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueWave_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
