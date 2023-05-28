// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioGameplayRequirements.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioGameplayRequirements() {}
// Cross Module References
	AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioRequirementPreset();
	AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioRequirementPreset_NoRegister();
	AUDIOGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FAudioGameplayRequirements();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	UPackage* Z_Construct_UPackage__Script_AudioGameplay();
// End Cross Module References
	void UAudioRequirementPreset::StaticRegisterNativesUAudioRequirementPreset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioRequirementPreset);
	UClass* Z_Construct_UClass_UAudioRequirementPreset_NoRegister()
	{
		return UAudioRequirementPreset::StaticClass();
	}
	struct Z_Construct_UClass_UAudioRequirementPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Query;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioRequirementPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioGameplay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioRequirementPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UAudioRequirementPreset - A reusable GameplayTagQuery for audio\n */" },
		{ "IncludePath", "AudioGameplayRequirements.h" },
		{ "ModuleRelativePath", "Public/AudioGameplayRequirements.h" },
		{ "ToolTip", "UAudioRequirementPreset - A reusable GameplayTagQuery for audio" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioRequirementPreset_Statics::NewProp_Query_MetaData[] = {
		{ "Category", "Gameplay Tag Query" },
		{ "ModuleRelativePath", "Public/AudioGameplayRequirements.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioRequirementPreset_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioRequirementPreset, Query), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UClass_UAudioRequirementPreset_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioRequirementPreset_Statics::NewProp_Query_MetaData)) }; // 689482789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioRequirementPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioRequirementPreset_Statics::NewProp_Query,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioRequirementPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioRequirementPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioRequirementPreset_Statics::ClassParams = {
		&UAudioRequirementPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAudioRequirementPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioRequirementPreset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioRequirementPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioRequirementPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioRequirementPreset()
	{
		if (!Z_Registration_Info_UClass_UAudioRequirementPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioRequirementPreset.OuterSingleton, Z_Construct_UClass_UAudioRequirementPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioRequirementPreset.OuterSingleton;
	}
	template<> AUDIOGAMEPLAY_API UClass* StaticClass<UAudioRequirementPreset>()
	{
		return UAudioRequirementPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioRequirementPreset);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioGameplayRequirements;
class UScriptStruct* FAudioGameplayRequirements::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioGameplayRequirements.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioGameplayRequirements.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioGameplayRequirements, (UObject*)Z_Construct_UPackage__Script_AudioGameplay(), TEXT("AudioGameplayRequirements"));
	}
	return Z_Registration_Info_UScriptStruct_AudioGameplayRequirements.OuterSingleton;
}
template<> AUDIOGAMEPLAY_API UScriptStruct* StaticStruct<FAudioGameplayRequirements>()
{
	return FAudioGameplayRequirements::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Preset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Custom_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Custom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * AudioGameplayRequirements - A set of requirements for audio gameplay features.\n */" },
		{ "ModuleRelativePath", "Public/AudioGameplayRequirements.h" },
		{ "ToolTip", "AudioGameplayRequirements - A set of requirements for audio gameplay features." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioGameplayRequirements>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics::NewProp_Preset_MetaData[] = {
		{ "Category", "Requirements" },
		{ "Comment", "/** An optional requirement preset tested against a collection of tags to determine a match.  Ignored if null. */" },
		{ "ModuleRelativePath", "Public/AudioGameplayRequirements.h" },
		{ "ToolTip", "An optional requirement preset tested against a collection of tags to determine a match.  Ignored if null." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioGameplayRequirements, Preset), Z_Construct_UClass_UAudioRequirementPreset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics::NewProp_Preset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics::NewProp_Preset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics::NewProp_Custom_MetaData[] = {
		{ "Category", "Requirements" },
		{ "Comment", "/** An optional custom query tested against a collection of tags to determine a match.  Ignored if empty. */" },
		{ "ModuleRelativePath", "Public/AudioGameplayRequirements.h" },
		{ "ToolTip", "An optional custom query tested against a collection of tags to determine a match.  Ignored if empty." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics::NewProp_Custom = { "Custom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioGameplayRequirements, Custom), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics::NewProp_Custom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics::NewProp_Custom_MetaData)) }; // 689482789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics::NewProp_Preset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics::NewProp_Custom,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioGameplay,
		nullptr,
		&NewStructOps,
		"AudioGameplayRequirements",
		sizeof(FAudioGameplayRequirements),
		alignof(FAudioGameplayRequirements),
		Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioGameplayRequirements()
	{
		if (!Z_Registration_Info_UScriptStruct_AudioGameplayRequirements.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioGameplayRequirements.InnerSingleton, Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudioGameplayRequirements.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h_Statics::ScriptStructInfo[] = {
		{ FAudioGameplayRequirements::StaticStruct, Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics::NewStructOps, TEXT("AudioGameplayRequirements"), &Z_Registration_Info_UScriptStruct_AudioGameplayRequirements, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioGameplayRequirements), 1846141945U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioRequirementPreset, UAudioRequirementPreset::StaticClass, TEXT("UAudioRequirementPreset"), &Z_Registration_Info_UClass_UAudioRequirementPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioRequirementPreset), 721652402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h_3914200907(TEXT("/Script/AudioGameplay"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
