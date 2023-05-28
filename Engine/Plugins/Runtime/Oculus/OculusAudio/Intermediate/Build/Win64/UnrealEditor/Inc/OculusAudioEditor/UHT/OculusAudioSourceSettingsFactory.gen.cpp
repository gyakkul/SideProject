// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/OculusAudioSourceSettingsFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusAudioSourceSettingsFactory() {}
// Cross Module References
	OCULUSAUDIOEDITOR_API UClass* Z_Construct_UClass_UOculusAudioSourceSettingsFactory();
	OCULUSAUDIOEDITOR_API UClass* Z_Construct_UClass_UOculusAudioSourceSettingsFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_OculusAudioEditor();
// End Cross Module References
	void UOculusAudioSourceSettingsFactory::StaticRegisterNativesUOculusAudioSourceSettingsFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusAudioSourceSettingsFactory);
	UClass* Z_Construct_UClass_UOculusAudioSourceSettingsFactory_NoRegister()
	{
		return UOculusAudioSourceSettingsFactory::StaticClass();
	}
	struct Z_Construct_UClass_UOculusAudioSourceSettingsFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusAudioSourceSettingsFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusAudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSourceSettingsFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "OculusAudioSourceSettingsFactory.h" },
		{ "ModuleRelativePath", "Private/OculusAudioSourceSettingsFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusAudioSourceSettingsFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusAudioSourceSettingsFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusAudioSourceSettingsFactory_Statics::ClassParams = {
		&UOculusAudioSourceSettingsFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSourceSettingsFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSourceSettingsFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusAudioSourceSettingsFactory()
	{
		if (!Z_Registration_Info_UClass_UOculusAudioSourceSettingsFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusAudioSourceSettingsFactory.OuterSingleton, Z_Construct_UClass_UOculusAudioSourceSettingsFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusAudioSourceSettingsFactory.OuterSingleton;
	}
	template<> OCULUSAUDIOEDITOR_API UClass* StaticClass<UOculusAudioSourceSettingsFactory>()
	{
		return UOculusAudioSourceSettingsFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusAudioSourceSettingsFactory);
	UOculusAudioSourceSettingsFactory::~UOculusAudioSourceSettingsFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudioEditor_Private_OculusAudioSourceSettingsFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudioEditor_Private_OculusAudioSourceSettingsFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusAudioSourceSettingsFactory, UOculusAudioSourceSettingsFactory::StaticClass, TEXT("UOculusAudioSourceSettingsFactory"), &Z_Registration_Info_UClass_UOculusAudioSourceSettingsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusAudioSourceSettingsFactory), 763276588U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudioEditor_Private_OculusAudioSourceSettingsFactory_h_2592936118(TEXT("/Script/OculusAudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudioEditor_Private_OculusAudioSourceSettingsFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudioEditor_Private_OculusAudioSourceSettingsFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
