// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/DialogueWaveFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueWaveFactory() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UDialogueWaveFactory();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UDialogueWaveFactory_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueVoice_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void UDialogueWaveFactory::StaticRegisterNativesUDialogueWaveFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueWaveFactory);
	UClass* Z_Construct_UClass_UDialogueWaveFactory_NoRegister()
	{
		return UDialogueWaveFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueWaveFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialSoundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InitialSoundWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialSpeakerVoice_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InitialSpeakerVoice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasSetInitialTargetVoice_MetaData[];
#endif
		static void NewProp_HasSetInitialTargetVoice_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasSetInitialTargetVoice;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InitialTargetVoices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialTargetVoices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InitialTargetVoices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueWaveFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWaveFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/DialogueWaveFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/DialogueWaveFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialSoundWave_MetaData[] = {
		{ "Comment", "/** An initial sound wave to place in the newly created dialogue wave */" },
		{ "ModuleRelativePath", "Classes/Factories/DialogueWaveFactory.h" },
		{ "ToolTip", "An initial sound wave to place in the newly created dialogue wave" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialSoundWave = { "InitialSoundWave", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWaveFactory, InitialSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialSoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialSoundWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialSpeakerVoice_MetaData[] = {
		{ "Comment", "/** An initial speaking dialogue voice to place in the newly created dialogue wave */" },
		{ "ModuleRelativePath", "Classes/Factories/DialogueWaveFactory.h" },
		{ "ToolTip", "An initial speaking dialogue voice to place in the newly created dialogue wave" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialSpeakerVoice = { "InitialSpeakerVoice", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWaveFactory, InitialSpeakerVoice), Z_Construct_UClass_UDialogueVoice_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialSpeakerVoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialSpeakerVoice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_HasSetInitialTargetVoice_MetaData[] = {
		{ "Comment", "/** Whether an initial target dialogue voice should be set */" },
		{ "ModuleRelativePath", "Classes/Factories/DialogueWaveFactory.h" },
		{ "ToolTip", "Whether an initial target dialogue voice should be set" },
	};
#endif
	void Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_HasSetInitialTargetVoice_SetBit(void* Obj)
	{
		((UDialogueWaveFactory*)Obj)->HasSetInitialTargetVoice = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_HasSetInitialTargetVoice = { "HasSetInitialTargetVoice", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDialogueWaveFactory), &Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_HasSetInitialTargetVoice_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_HasSetInitialTargetVoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_HasSetInitialTargetVoice_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialTargetVoices_Inner = { "InitialTargetVoices", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDialogueVoice_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialTargetVoices_MetaData[] = {
		{ "Comment", "/** An initial target dialogue voices to place in the newly created dialogue wave */" },
		{ "ModuleRelativePath", "Classes/Factories/DialogueWaveFactory.h" },
		{ "ToolTip", "An initial target dialogue voices to place in the newly created dialogue wave" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialTargetVoices = { "InitialTargetVoices", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWaveFactory, InitialTargetVoices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialTargetVoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialTargetVoices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueWaveFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialSoundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialSpeakerVoice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_HasSetInitialTargetVoice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialTargetVoices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialTargetVoices,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueWaveFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueWaveFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueWaveFactory_Statics::ClassParams = {
		&UDialogueWaveFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueWaveFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWaveFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueWaveFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWaveFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueWaveFactory()
	{
		if (!Z_Registration_Info_UClass_UDialogueWaveFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueWaveFactory.OuterSingleton, Z_Construct_UClass_UDialogueWaveFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueWaveFactory.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<UDialogueWaveFactory>()
	{
		return UDialogueWaveFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueWaveFactory);
	UDialogueWaveFactory::~UDialogueWaveFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueWaveFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueWaveFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueWaveFactory, UDialogueWaveFactory::StaticClass, TEXT("UDialogueWaveFactory"), &Z_Registration_Info_UClass_UDialogueWaveFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueWaveFactory), 4071953730U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueWaveFactory_h_2974966845(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueWaveFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueWaveFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
