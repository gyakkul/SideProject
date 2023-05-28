// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/MovieSceneGameplayCueSections.h"
#include "GameplayCueInterface.h"
#include "MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneGameplayCueSections() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UMovieSceneGameplayCueSection();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UMovieSceneGameplayCueSection_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTag();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneHookSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueKey;
class UScriptStruct* FMovieSceneGameplayCueKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("MovieSceneGameplayCueKey"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueKey.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FMovieSceneGameplayCueKey>()
{
	return FMovieSceneGameplayCueKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectCauser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectCauser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicalMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameplayEffectLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttachToBinding_MetaData[];
#endif
		static void NewProp_bAttachToBinding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachToBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneGameplayCueKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Cue_MetaData[] = {
		{ "Category", "Gameplay Cue" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Cue = { "Cue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGameplayCueKey, Cue), Z_Construct_UScriptStruct_FGameplayCueTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Cue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Cue_MetaData)) }; // 1360574655
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Position" },
		{ "Comment", "/** Location cue took place at - relative to the attached component if applicable */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
		{ "ToolTip", "Location cue took place at - relative to the attached component if applicable" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGameplayCueKey, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Position" },
		{ "Comment", "/** Normal of impact that caused cue */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
		{ "ToolTip", "Normal of impact that caused cue" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGameplayCueKey, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_AttachSocketName_MetaData[] = {
		{ "Category", "Position" },
		{ "Comment", "/** When attached to a skeletal mesh component, specifies a socket to trigger the cue at */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
		{ "ToolTip", "When attached to a skeletal mesh component, specifies a socket to trigger the cue at" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_AttachSocketName = { "AttachSocketName", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGameplayCueKey, AttachSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_AttachSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_AttachSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_NormalizedMagnitude_MetaData[] = {
		{ "Category", "Gameplay Cue" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Magnitude of source gameplay effect, normalzed from 0-1. Use this for \"how strong is the gameplay effect\" (0=min, 1=,max) */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
		{ "ToolTip", "Magnitude of source gameplay effect, normalzed from 0-1. Use this for \"how strong is the gameplay effect\" (0=min, 1=,max)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_NormalizedMagnitude = { "NormalizedMagnitude", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGameplayCueKey, NormalizedMagnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_NormalizedMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_NormalizedMagnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Instigator_MetaData[] = {
		{ "Category", "Gameplay Cue" },
		{ "Comment", "/** Instigator actor, the actor that owns the ability system component. */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
		{ "ToolTip", "Instigator actor, the actor that owns the ability system component." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGameplayCueKey, Instigator), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Instigator_MetaData)) }; // 1341447431
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_EffectCauser_MetaData[] = {
		{ "Category", "Gameplay Cue" },
		{ "Comment", "/** The physical actor that actually did the damage, can be a weapon or projectile */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
		{ "ToolTip", "The physical actor that actually did the damage, can be a weapon or projectile" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_EffectCauser = { "EffectCauser", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGameplayCueKey, EffectCauser), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_EffectCauser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_EffectCauser_MetaData)) }; // 1341447431
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_PhysicalMaterial_MetaData[] = {
		{ "Category", "Gameplay Cue" },
		{ "Comment", "/** PhysMat of the hit, if there was a hit. */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "PhysMat of the hit, if there was a hit." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_PhysicalMaterial = { "PhysicalMaterial", nullptr, (EPropertyFlags)0x0014040000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGameplayCueKey, PhysicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_PhysicalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_PhysicalMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_GameplayEffectLevel_MetaData[] = {
		{ "Category", "Gameplay Cue" },
		{ "Comment", "/** The level of that GameplayEffect */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
		{ "ToolTip", "The level of that GameplayEffect" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_GameplayEffectLevel = { "GameplayEffectLevel", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGameplayCueKey, GameplayEffectLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_GameplayEffectLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_GameplayEffectLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "Gameplay Cue" },
		{ "Comment", "/** If originating from an ability, this will be the level of that ability */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
		{ "ToolTip", "If originating from an ability, this will be the level of that ability" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGameplayCueKey, AbilityLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_AbilityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_AbilityLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_bAttachToBinding_MetaData[] = {
		{ "Category", "Position" },
		{ "Comment", "/** Attach the gameplay cue to the track's bound object in sequencer */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
		{ "ToolTip", "Attach the gameplay cue to the track's bound object in sequencer" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_bAttachToBinding_SetBit(void* Obj)
	{
		((FMovieSceneGameplayCueKey*)Obj)->bAttachToBinding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_bAttachToBinding = { "bAttachToBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneGameplayCueKey), &Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_bAttachToBinding_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_bAttachToBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_bAttachToBinding_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Cue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_AttachSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_NormalizedMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_EffectCauser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_PhysicalMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_GameplayEffectLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_AbilityLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewProp_bAttachToBinding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"MovieSceneGameplayCueKey",
		sizeof(FMovieSceneGameplayCueKey),
		alignof(FMovieSceneGameplayCueKey),
		Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueKey.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueKey.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieSceneGameplayCueChannel>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneGameplayCueChannel cannot be polymorphic unless super FMovieSceneChannel is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueChannel;
class UScriptStruct* FMovieSceneGameplayCueChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("MovieSceneGameplayCueChannel"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueChannel.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FMovieSceneGameplayCueChannel>()
{
	return FMovieSceneGameplayCueChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyTimes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyTimes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyTimes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneGameplayCueChannel>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewProp_KeyTimes_Inner = { "KeyTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewProp_KeyTimes_MetaData[] = {
		{ "Comment", "/** Array of times for each key */" },
		{ "KeyTimes", "" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
		{ "ToolTip", "Array of times for each key" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewProp_KeyTimes = { "KeyTimes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGameplayCueChannel, KeyTimes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewProp_KeyTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewProp_KeyTimes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewProp_KeyValues_Inner = { "KeyValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey, METADATA_PARAMS(nullptr, 0) }; // 1621875658
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewProp_KeyValues_MetaData[] = {
		{ "Comment", "/** Array of values that correspond to each key time */" },
		{ "KeyValues", "" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
		{ "ToolTip", "Array of values that correspond to each key time" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewProp_KeyValues = { "KeyValues", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGameplayCueChannel, KeyValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewProp_KeyValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewProp_KeyValues_MetaData)) }; // 1621875658
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewProp_KeyTimes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewProp_KeyTimes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewProp_KeyValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewProp_KeyValues,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		Z_Construct_UScriptStruct_FMovieSceneChannel,
		&NewStructOps,
		"MovieSceneGameplayCueChannel",
		sizeof(FMovieSceneGameplayCueChannel),
		alignof(FMovieSceneGameplayCueChannel),
		Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueChannel.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueChannel.InnerSingleton;
	}
	void UMovieSceneGameplayCueTriggerSection::StaticRegisterNativesUMovieSceneGameplayCueTriggerSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneGameplayCueTriggerSection);
	UClass* Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_NoRegister()
	{
		return UMovieSceneGameplayCueTriggerSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneHookSection,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a movie scene section that triggers gameplay cues\n */" },
		{ "IncludePath", "Sequencer/MovieSceneGameplayCueSections.h" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements a movie scene section that triggers gameplay cues" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::NewProp_Channel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneGameplayCueTriggerSection, Channel), Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::NewProp_Channel_MetaData)) }; // 4057048964
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::NewProp_Channel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneGameplayCueTriggerSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::ClassParams = {
		&UMovieSceneGameplayCueTriggerSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneGameplayCueTriggerSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneGameplayCueTriggerSection.OuterSingleton, Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneGameplayCueTriggerSection.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UMovieSceneGameplayCueTriggerSection>()
	{
		return UMovieSceneGameplayCueTriggerSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneGameplayCueTriggerSection);
	UMovieSceneGameplayCueTriggerSection::~UMovieSceneGameplayCueTriggerSection() {}
	void UMovieSceneGameplayCueSection::StaticRegisterNativesUMovieSceneGameplayCueSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneGameplayCueSection);
	UClass* Z_Construct_UClass_UMovieSceneGameplayCueSection_NoRegister()
	{
		return UMovieSceneGameplayCueSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneHookSection,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a movie scene section that triggers gameplay cues\n */" },
		{ "IncludePath", "Sequencer/MovieSceneGameplayCueSections.h" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements a movie scene section that triggers gameplay cues" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::NewProp_Cue_MetaData[] = {
		{ "Category", "Cue" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneGameplayCueSections.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::NewProp_Cue = { "Cue", nullptr, (EPropertyFlags)0x0040010000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneGameplayCueSection, Cue), Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::NewProp_Cue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::NewProp_Cue_MetaData)) }; // 1621875658
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::NewProp_Cue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneGameplayCueSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::ClassParams = {
		&UMovieSceneGameplayCueSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneGameplayCueSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneGameplayCueSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneGameplayCueSection.OuterSingleton, Z_Construct_UClass_UMovieSceneGameplayCueSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneGameplayCueSection.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UMovieSceneGameplayCueSection>()
	{
		return UMovieSceneGameplayCueSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneGameplayCueSection);
	UMovieSceneGameplayCueSection::~UMovieSceneGameplayCueSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneGameplayCueKey::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneGameplayCueKey_Statics::NewStructOps, TEXT("MovieSceneGameplayCueKey"), &Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneGameplayCueKey), 1621875658U) },
		{ FMovieSceneGameplayCueChannel::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneGameplayCueChannel_Statics::NewStructOps, TEXT("MovieSceneGameplayCueChannel"), &Z_Registration_Info_UScriptStruct_MovieSceneGameplayCueChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneGameplayCueChannel), 4057048964U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneGameplayCueTriggerSection, UMovieSceneGameplayCueTriggerSection::StaticClass, TEXT("UMovieSceneGameplayCueTriggerSection"), &Z_Registration_Info_UClass_UMovieSceneGameplayCueTriggerSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneGameplayCueTriggerSection), 2874076938U) },
		{ Z_Construct_UClass_UMovieSceneGameplayCueSection, UMovieSceneGameplayCueSection::StaticClass, TEXT("UMovieSceneGameplayCueSection"), &Z_Registration_Info_UClass_UMovieSceneGameplayCueSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneGameplayCueSection), 1524257661U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_1963448188(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Sequencer_MovieSceneGameplayCueSections_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
