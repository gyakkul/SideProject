// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundNodeDialoguePlayer.h"
#include "../../Source/Runtime/Engine/Classes/Sound/DialogueTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeDialoguePlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDialoguePlayer();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDialoguePlayer_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueWaveParameter();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeDialoguePlayer::StaticRegisterNativesUSoundNodeDialoguePlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeDialoguePlayer);
	UClass* Z_Construct_UClass_USoundNodeDialoguePlayer_NoRegister()
	{
		return USoundNodeDialoguePlayer::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeDialoguePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWaveParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueWaveParameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n Sound node that contains a reference to the dialogue table to pull from and be played\n*/" },
		{ "DisplayName", "Dialogue Player" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeDialoguePlayer.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDialoguePlayer.h" },
		{ "ToolTip", "Sound node that contains a reference to the dialogue table to pull from and be played" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_DialogueWaveParameter_MetaData[] = {
		{ "Category", "DialoguePlayer" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDialoguePlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_DialogueWaveParameter = { "DialogueWaveParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeDialoguePlayer, DialogueWaveParameter), Z_Construct_UScriptStruct_FDialogueWaveParameter, METADATA_PARAMS(Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_DialogueWaveParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_DialogueWaveParameter_MetaData)) }; // 2549395889
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "DialoguePlayer" },
		{ "Comment", "/* Whether the dialogue line should be played looping */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDialoguePlayer.h" },
		{ "ToolTip", "Whether the dialogue line should be played looping" },
	};
#endif
	void Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((USoundNodeDialoguePlayer*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundNodeDialoguePlayer), &Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_bLooping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_DialogueWaveParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_bLooping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeDialoguePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::ClassParams = {
		&USoundNodeDialoguePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeDialoguePlayer()
	{
		if (!Z_Registration_Info_UClass_USoundNodeDialoguePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeDialoguePlayer.OuterSingleton, Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundNodeDialoguePlayer.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundNodeDialoguePlayer>()
	{
		return USoundNodeDialoguePlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeDialoguePlayer);
	USoundNodeDialoguePlayer::~USoundNodeDialoguePlayer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDialoguePlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDialoguePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeDialoguePlayer, USoundNodeDialoguePlayer::StaticClass, TEXT("USoundNodeDialoguePlayer"), &Z_Registration_Info_UClass_USoundNodeDialoguePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeDialoguePlayer), 2920581797U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDialoguePlayer_h_558719939(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDialoguePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDialoguePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
