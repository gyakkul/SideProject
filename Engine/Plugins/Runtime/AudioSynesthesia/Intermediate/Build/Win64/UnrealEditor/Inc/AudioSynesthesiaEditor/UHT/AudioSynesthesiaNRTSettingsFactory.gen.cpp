// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioSynesthesiaNRTSettingsFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioSynesthesiaNRTSettingsFactory() {}
// Cross Module References
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettings_NoRegister();
	AUDIOSYNESTHESIAEDITOR_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory();
	AUDIOSYNESTHESIAEDITOR_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioSynesthesiaEditor();
// End Cross Module References
	void UAudioSynesthesiaNRTSettingsFactory::StaticRegisterNativesUAudioSynesthesiaNRTSettingsFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioSynesthesiaNRTSettingsFactory);
	UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_NoRegister()
	{
		return UAudioSynesthesiaNRTSettingsFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioSynesthesiaNRTSettingsClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AudioSynesthesiaNRTSettingsClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesiaEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** UAudioSynesthesiaNRTSettingsFactory\n *\n * UAudioSynesthesiaNRTSettingsFactory implements the factory for UAudioSynesthesiaNRTSettings assets.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AudioSynesthesiaNRTSettingsFactory.h" },
		{ "ModuleRelativePath", "Classes/AudioSynesthesiaNRTSettingsFactory.h" },
		{ "ToolTip", "UAudioSynesthesiaNRTSettingsFactory\n\nUAudioSynesthesiaNRTSettingsFactory implements the factory for UAudioSynesthesiaNRTSettings assets." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_Statics::NewProp_AudioSynesthesiaNRTSettingsClass_MetaData[] = {
		{ "Category", "AudioSynesthesiaFactory" },
		{ "Comment", "/** The type of audio analyzer settings that will be created */" },
		{ "ModuleRelativePath", "Classes/AudioSynesthesiaNRTSettingsFactory.h" },
		{ "ToolTip", "The type of audio analyzer settings that will be created" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_Statics::NewProp_AudioSynesthesiaNRTSettingsClass = { "AudioSynesthesiaNRTSettingsClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSynesthesiaNRTSettingsFactory, AudioSynesthesiaNRTSettingsClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAudioSynesthesiaNRTSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_Statics::NewProp_AudioSynesthesiaNRTSettingsClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_Statics::NewProp_AudioSynesthesiaNRTSettingsClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_Statics::NewProp_AudioSynesthesiaNRTSettingsClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioSynesthesiaNRTSettingsFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_Statics::ClassParams = {
		&UAudioSynesthesiaNRTSettingsFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory()
	{
		if (!Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettingsFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettingsFactory.OuterSingleton, Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettingsFactory.OuterSingleton;
	}
	template<> AUDIOSYNESTHESIAEDITOR_API UClass* StaticClass<UAudioSynesthesiaNRTSettingsFactory>()
	{
		return UAudioSynesthesiaNRTSettingsFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioSynesthesiaNRTSettingsFactory);
	UAudioSynesthesiaNRTSettingsFactory::~UAudioSynesthesiaNRTSettingsFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaNRTSettingsFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaNRTSettingsFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioSynesthesiaNRTSettingsFactory, UAudioSynesthesiaNRTSettingsFactory::StaticClass, TEXT("UAudioSynesthesiaNRTSettingsFactory"), &Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettingsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioSynesthesiaNRTSettingsFactory), 26692194U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaNRTSettingsFactory_h_2500055056(TEXT("/Script/AudioSynesthesiaEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaNRTSettingsFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaNRTSettingsFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
