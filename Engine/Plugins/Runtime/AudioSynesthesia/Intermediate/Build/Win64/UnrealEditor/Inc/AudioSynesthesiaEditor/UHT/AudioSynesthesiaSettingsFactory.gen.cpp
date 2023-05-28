// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioSynesthesiaSettingsFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioSynesthesiaSettingsFactory() {}
// Cross Module References
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaSettings_NoRegister();
	AUDIOSYNESTHESIAEDITOR_API UClass* Z_Construct_UClass_UAudioSynesthesiaSettingsFactory();
	AUDIOSYNESTHESIAEDITOR_API UClass* Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioSynesthesiaEditor();
// End Cross Module References
	void UAudioSynesthesiaSettingsFactory::StaticRegisterNativesUAudioSynesthesiaSettingsFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioSynesthesiaSettingsFactory);
	UClass* Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_NoRegister()
	{
		return UAudioSynesthesiaSettingsFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioSynesthesiaSettingsClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AudioSynesthesiaSettingsClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesiaEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** UAudioSynesthesiaSettingsFactory\n *\n * UAudioSynesthesiaSettingsFactory implements the factory for UAudioSynesthesiaSettings assets.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AudioSynesthesiaSettingsFactory.h" },
		{ "ModuleRelativePath", "Classes/AudioSynesthesiaSettingsFactory.h" },
		{ "ToolTip", "UAudioSynesthesiaSettingsFactory\n\nUAudioSynesthesiaSettingsFactory implements the factory for UAudioSynesthesiaSettings assets." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_Statics::NewProp_AudioSynesthesiaSettingsClass_MetaData[] = {
		{ "Category", "AudioSynesthesiaFactory" },
		{ "Comment", "/** The type of audio analyzer settings that will be created */" },
		{ "ModuleRelativePath", "Classes/AudioSynesthesiaSettingsFactory.h" },
		{ "ToolTip", "The type of audio analyzer settings that will be created" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_Statics::NewProp_AudioSynesthesiaSettingsClass = { "AudioSynesthesiaSettingsClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSynesthesiaSettingsFactory, AudioSynesthesiaSettingsClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAudioSynesthesiaSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_Statics::NewProp_AudioSynesthesiaSettingsClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_Statics::NewProp_AudioSynesthesiaSettingsClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_Statics::NewProp_AudioSynesthesiaSettingsClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioSynesthesiaSettingsFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_Statics::ClassParams = {
		&UAudioSynesthesiaSettingsFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioSynesthesiaSettingsFactory()
	{
		if (!Z_Registration_Info_UClass_UAudioSynesthesiaSettingsFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioSynesthesiaSettingsFactory.OuterSingleton, Z_Construct_UClass_UAudioSynesthesiaSettingsFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioSynesthesiaSettingsFactory.OuterSingleton;
	}
	template<> AUDIOSYNESTHESIAEDITOR_API UClass* StaticClass<UAudioSynesthesiaSettingsFactory>()
	{
		return UAudioSynesthesiaSettingsFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioSynesthesiaSettingsFactory);
	UAudioSynesthesiaSettingsFactory::~UAudioSynesthesiaSettingsFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaSettingsFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaSettingsFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioSynesthesiaSettingsFactory, UAudioSynesthesiaSettingsFactory::StaticClass, TEXT("UAudioSynesthesiaSettingsFactory"), &Z_Registration_Info_UClass_UAudioSynesthesiaSettingsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioSynesthesiaSettingsFactory), 162311355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaSettingsFactory_h_2521931177(TEXT("/Script/AudioSynesthesiaEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaSettingsFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaSettingsFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
