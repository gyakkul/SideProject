// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/SoundCueFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundCueFactoryNew() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueFactoryNew();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueFactoryNew_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void USoundCueFactoryNew::StaticRegisterNativesUSoundCueFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundCueFactoryNew);
	UClass* Z_Construct_UClass_USoundCueFactoryNew_NoRegister()
	{
		return USoundCueFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_USoundCueFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialSoundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InitialSoundWave;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_InitialSoundWaves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialSoundWaves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InitialSoundWaves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialDialogueWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InitialDialogueWave;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_InitialDialogueWaves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialDialogueWaves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InitialDialogueWaves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundCueFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundCueFactoryNew.h" },
		{ "ModuleRelativePath", "Classes/Factories/SoundCueFactoryNew.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialSoundWave_MetaData[] = {
		{ "Comment", "/** Initial sound wave to place in the newly created cue */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Array InitialSoundWaves instead." },
		{ "ModuleRelativePath", "Classes/Factories/SoundCueFactoryNew.h" },
		{ "ToolTip", "Initial sound wave to place in the newly created cue" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialSoundWave = { "InitialSoundWave", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundCueFactoryNew, InitialSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialSoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialSoundWave_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialSoundWaves_Inner = { "InitialSoundWaves", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialSoundWaves_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Initial sound wave(s) to place in the newly created cue(s) */" },
		{ "ModuleRelativePath", "Classes/Factories/SoundCueFactoryNew.h" },
		{ "ToolTip", "Initial sound wave(s) to place in the newly created cue(s)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialSoundWaves = { "InitialSoundWaves", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundCueFactoryNew, InitialSoundWaves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialSoundWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialSoundWaves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialDialogueWave_MetaData[] = {
		{ "Comment", "/** An initial dialogue wave to place in the newly created cue */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Array InitialDialogueWaves instead." },
		{ "ModuleRelativePath", "Classes/Factories/SoundCueFactoryNew.h" },
		{ "ToolTip", "An initial dialogue wave to place in the newly created cue" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialDialogueWave = { "InitialDialogueWave", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundCueFactoryNew, InitialDialogueWave), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialDialogueWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialDialogueWave_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialDialogueWaves_Inner = { "InitialDialogueWaves", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialDialogueWaves_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Initial dialogue wave(s) to place in the newly created cue(s) */" },
		{ "ModuleRelativePath", "Classes/Factories/SoundCueFactoryNew.h" },
		{ "ToolTip", "Initial dialogue wave(s) to place in the newly created cue(s)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialDialogueWaves = { "InitialDialogueWaves", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundCueFactoryNew, InitialDialogueWaves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialDialogueWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialDialogueWaves_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundCueFactoryNew_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialSoundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialSoundWaves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialSoundWaves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialDialogueWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialDialogueWaves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialDialogueWaves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundCueFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundCueFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundCueFactoryNew_Statics::ClassParams = {
		&USoundCueFactoryNew::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundCueFactoryNew_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueFactoryNew_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundCueFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundCueFactoryNew()
	{
		if (!Z_Registration_Info_UClass_USoundCueFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundCueFactoryNew.OuterSingleton, Z_Construct_UClass_USoundCueFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundCueFactoryNew.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundCueFactoryNew>()
	{
		return USoundCueFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundCueFactoryNew);
	USoundCueFactoryNew::~USoundCueFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundCueFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundCueFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundCueFactoryNew, USoundCueFactoryNew::StaticClass, TEXT("USoundCueFactoryNew"), &Z_Registration_Info_UClass_USoundCueFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundCueFactoryNew), 1482408941U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundCueFactoryNew_h_3426437244(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundCueFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundCueFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
