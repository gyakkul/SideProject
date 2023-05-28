// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusAudioSourceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusAudioSourceSettings() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase();
	OCULUSAUDIO_API UClass* Z_Construct_UClass_UOculusAudioSourceSettings();
	OCULUSAUDIO_API UClass* Z_Construct_UClass_UOculusAudioSourceSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OculusAudio();
// End Cross Module References
	void UOculusAudioSourceSettings::StaticRegisterNativesUOculusAudioSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusAudioSourceSettings);
	UClass* Z_Construct_UClass_UOculusAudioSourceSettings_NoRegister()
	{
		return UOculusAudioSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOculusAudioSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionsEnabled_MetaData[];
#endif
		static void NewProp_EarlyReflectionsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EarlyReflectionsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationEnabled_MetaData[];
#endif
		static void NewProp_AttenuationEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttenuationEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationRangeMinimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationRangeMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationRangeMaximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationRangeMaximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbSendLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverbSendLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusAudioSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpatializationPluginSourceSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OculusAudioSourceSettings.h" },
		{ "ModuleRelativePath", "Public/OculusAudioSourceSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_EarlyReflectionsEnabled_MetaData[] = {
		{ "Category", "SpatializationSettings" },
		{ "ModuleRelativePath", "Public/OculusAudioSourceSettings.h" },
	};
#endif
	void Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_EarlyReflectionsEnabled_SetBit(void* Obj)
	{
		((UOculusAudioSourceSettings*)Obj)->EarlyReflectionsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_EarlyReflectionsEnabled = { "EarlyReflectionsEnabled", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusAudioSourceSettings), &Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_EarlyReflectionsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_EarlyReflectionsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_EarlyReflectionsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_AttenuationEnabled_MetaData[] = {
		{ "Category", "SpatializationSettings" },
		{ "ModuleRelativePath", "Public/OculusAudioSourceSettings.h" },
	};
#endif
	void Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_AttenuationEnabled_SetBit(void* Obj)
	{
		((UOculusAudioSourceSettings*)Obj)->AttenuationEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_AttenuationEnabled = { "AttenuationEnabled", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusAudioSourceSettings), &Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_AttenuationEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_AttenuationEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_AttenuationEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_AttenuationRangeMinimum_MetaData[] = {
		{ "Category", "SpatializationSettings" },
		{ "ModuleRelativePath", "Public/OculusAudioSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_AttenuationRangeMinimum = { "AttenuationRangeMinimum", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioSourceSettings, AttenuationRangeMinimum), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_AttenuationRangeMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_AttenuationRangeMinimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_AttenuationRangeMaximum_MetaData[] = {
		{ "Category", "SpatializationSettings" },
		{ "ModuleRelativePath", "Public/OculusAudioSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_AttenuationRangeMaximum = { "AttenuationRangeMaximum", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioSourceSettings, AttenuationRangeMaximum), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_AttenuationRangeMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_AttenuationRangeMaximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_VolumetricRadius_MetaData[] = {
		{ "Category", "SpatializationSettings" },
		{ "ModuleRelativePath", "Public/OculusAudioSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_VolumetricRadius = { "VolumetricRadius", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioSourceSettings, VolumetricRadius), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_VolumetricRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_VolumetricRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_ReverbSendLevel_MetaData[] = {
		{ "Category", "SpatializationSettings" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-60.0" },
		{ "ModuleRelativePath", "Public/OculusAudioSourceSettings.h" },
		{ "UIMax", "20.0" },
		{ "UIMin", "-60.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_ReverbSendLevel = { "ReverbSendLevel", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioSourceSettings, ReverbSendLevel), METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_ReverbSendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_ReverbSendLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusAudioSourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_EarlyReflectionsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_AttenuationEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_AttenuationRangeMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_AttenuationRangeMaximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_VolumetricRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioSourceSettings_Statics::NewProp_ReverbSendLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusAudioSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusAudioSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusAudioSourceSettings_Statics::ClassParams = {
		&UOculusAudioSourceSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusAudioSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSourceSettings_Statics::PropPointers),
		0,
		0x001010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusAudioSourceSettings()
	{
		if (!Z_Registration_Info_UClass_UOculusAudioSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusAudioSourceSettings.OuterSingleton, Z_Construct_UClass_UOculusAudioSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusAudioSourceSettings.OuterSingleton;
	}
	template<> OCULUSAUDIO_API UClass* StaticClass<UOculusAudioSourceSettings>()
	{
		return UOculusAudioSourceSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusAudioSourceSettings);
	UOculusAudioSourceSettings::~UOculusAudioSourceSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Public_OculusAudioSourceSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Public_OculusAudioSourceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusAudioSourceSettings, UOculusAudioSourceSettings::StaticClass, TEXT("UOculusAudioSourceSettings"), &Z_Registration_Info_UClass_UOculusAudioSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusAudioSourceSettings), 2124238940U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Public_OculusAudioSourceSettings_h_1822252264(TEXT("/Script/OculusAudio"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Public_OculusAudioSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Public_OculusAudioSourceSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
