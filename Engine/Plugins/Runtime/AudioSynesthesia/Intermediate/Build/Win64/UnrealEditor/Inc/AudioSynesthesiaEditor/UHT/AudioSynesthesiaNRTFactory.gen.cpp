// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioSynesthesiaNRTFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioSynesthesiaNRTFactory() {}
// Cross Module References
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRT_NoRegister();
	AUDIOSYNESTHESIAEDITOR_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRTFactory();
	AUDIOSYNESTHESIAEDITOR_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRTFactory_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioSynesthesiaEditor();
// End Cross Module References
	void UAudioSynesthesiaNRTFactory::StaticRegisterNativesUAudioSynesthesiaNRTFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioSynesthesiaNRTFactory);
	UClass* Z_Construct_UClass_UAudioSynesthesiaNRTFactory_NoRegister()
	{
		return UAudioSynesthesiaNRTFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAudioSynesthesiaNRTFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioSynesthesiaNRTClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AudioSynesthesiaNRTClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioSynesthesiaNRTFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesiaEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSynesthesiaNRTFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** UAudioSynesthesiaNRTFactory\n *\n * UAudioSynesthesiaNRTFactory implements the factory for UAudioSynesthesiaNRT assets.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AudioSynesthesiaNRTFactory.h" },
		{ "ModuleRelativePath", "Classes/AudioSynesthesiaNRTFactory.h" },
		{ "ToolTip", "UAudioSynesthesiaNRTFactory\n\nUAudioSynesthesiaNRTFactory implements the factory for UAudioSynesthesiaNRT assets." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSynesthesiaNRTFactory_Statics::NewProp_AudioSynesthesiaNRTClass_MetaData[] = {
		{ "Category", "AudioSynesthesiaFactory" },
		{ "Comment", "/** The type of audio analyzer settings that will be created */" },
		{ "ModuleRelativePath", "Classes/AudioSynesthesiaNRTFactory.h" },
		{ "ToolTip", "The type of audio analyzer settings that will be created" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAudioSynesthesiaNRTFactory_Statics::NewProp_AudioSynesthesiaNRTClass = { "AudioSynesthesiaNRTClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSynesthesiaNRTFactory, AudioSynesthesiaNRTClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAudioSynesthesiaNRT_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioSynesthesiaNRTFactory_Statics::NewProp_AudioSynesthesiaNRTClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSynesthesiaNRTFactory_Statics::NewProp_AudioSynesthesiaNRTClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioSynesthesiaNRTFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSynesthesiaNRTFactory_Statics::NewProp_AudioSynesthesiaNRTClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioSynesthesiaNRTFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioSynesthesiaNRTFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioSynesthesiaNRTFactory_Statics::ClassParams = {
		&UAudioSynesthesiaNRTFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAudioSynesthesiaNRTFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSynesthesiaNRTFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioSynesthesiaNRTFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSynesthesiaNRTFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioSynesthesiaNRTFactory()
	{
		if (!Z_Registration_Info_UClass_UAudioSynesthesiaNRTFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioSynesthesiaNRTFactory.OuterSingleton, Z_Construct_UClass_UAudioSynesthesiaNRTFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioSynesthesiaNRTFactory.OuterSingleton;
	}
	template<> AUDIOSYNESTHESIAEDITOR_API UClass* StaticClass<UAudioSynesthesiaNRTFactory>()
	{
		return UAudioSynesthesiaNRTFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioSynesthesiaNRTFactory);
	UAudioSynesthesiaNRTFactory::~UAudioSynesthesiaNRTFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaNRTFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaNRTFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioSynesthesiaNRTFactory, UAudioSynesthesiaNRTFactory::StaticClass, TEXT("UAudioSynesthesiaNRTFactory"), &Z_Registration_Info_UClass_UAudioSynesthesiaNRTFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioSynesthesiaNRTFactory), 3191060213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaNRTFactory_h_337053657(TEXT("/Script/AudioSynesthesiaEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaNRTFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesiaEditor_Classes_AudioSynesthesiaNRTFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
