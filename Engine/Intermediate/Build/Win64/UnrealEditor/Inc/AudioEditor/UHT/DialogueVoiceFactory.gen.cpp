// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/DialogueVoiceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueVoiceFactory() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UDialogueVoiceFactory();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UDialogueVoiceFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void UDialogueVoiceFactory::StaticRegisterNativesUDialogueVoiceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueVoiceFactory);
	UClass* Z_Construct_UClass_UDialogueVoiceFactory_NoRegister()
	{
		return UDialogueVoiceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueVoiceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueVoiceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueVoiceFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/DialogueVoiceFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/DialogueVoiceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueVoiceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueVoiceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueVoiceFactory_Statics::ClassParams = {
		&UDialogueVoiceFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueVoiceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueVoiceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueVoiceFactory()
	{
		if (!Z_Registration_Info_UClass_UDialogueVoiceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueVoiceFactory.OuterSingleton, Z_Construct_UClass_UDialogueVoiceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueVoiceFactory.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<UDialogueVoiceFactory>()
	{
		return UDialogueVoiceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueVoiceFactory);
	UDialogueVoiceFactory::~UDialogueVoiceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueVoiceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueVoiceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueVoiceFactory, UDialogueVoiceFactory::StaticClass, TEXT("UDialogueVoiceFactory"), &Z_Registration_Info_UClass_UDialogueVoiceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueVoiceFactory), 3894744804U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueVoiceFactory_h_327894917(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueVoiceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_DialogueVoiceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
