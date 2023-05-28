// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhononOcclusionSourceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhononOcclusionSourceSettings() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UOcclusionPluginSourceSettingsBase();
	STEAMAUDIO_API UClass* Z_Construct_UClass_UPhononOcclusionSourceSettings();
	STEAMAUDIO_API UClass* Z_Construct_UClass_UPhononOcclusionSourceSettings_NoRegister();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMethod();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMode();
	UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References
	void UPhononOcclusionSourceSettings::StaticRegisterNativesUPhononOcclusionSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhononOcclusionSourceSettings);
	UClass* Z_Construct_UClass_UPhononOcclusionSourceSettings_NoRegister()
	{
		return UPhononOcclusionSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DirectOcclusionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectOcclusionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectOcclusionMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DirectOcclusionMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectOcclusionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectOcclusionMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectOcclusionSourceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectOcclusionSourceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectAttenuation_MetaData[];
#endif
		static void NewProp_DirectAttenuation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DirectAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AirAbsorption_MetaData[];
#endif
		static void NewProp_AirAbsorption_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AirAbsorption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOcclusionPluginSourceSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhononOcclusionSourceSettings.h" },
		{ "ModuleRelativePath", "Public/PhononOcclusionSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectOcclusionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectOcclusionMode_MetaData[] = {
		{ "Category", "OcclusionSettings" },
		{ "ModuleRelativePath", "Public/PhononOcclusionSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectOcclusionMode = { "DirectOcclusionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhononOcclusionSourceSettings, DirectOcclusionMode), Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMode, METADATA_PARAMS(Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectOcclusionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectOcclusionMode_MetaData)) }; // 775141122
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectOcclusionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectOcclusionMethod_MetaData[] = {
		{ "Category", "OcclusionSettings" },
		{ "ModuleRelativePath", "Public/PhononOcclusionSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectOcclusionMethod = { "DirectOcclusionMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhononOcclusionSourceSettings, DirectOcclusionMethod), Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMethod, METADATA_PARAMS(Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectOcclusionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectOcclusionMethod_MetaData)) }; // 3810288125
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectOcclusionSourceRadius_MetaData[] = {
		{ "Category", "OcclusionSettings" },
		{ "ModuleRelativePath", "Public/PhononOcclusionSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectOcclusionSourceRadius = { "DirectOcclusionSourceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhononOcclusionSourceSettings, DirectOcclusionSourceRadius), METADATA_PARAMS(Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectOcclusionSourceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectOcclusionSourceRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectAttenuation_MetaData[] = {
		{ "Category", "OcclusionSettings" },
		{ "DisplayName", "Physics-based Attenuation" },
		{ "ModuleRelativePath", "Public/PhononOcclusionSourceSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectAttenuation_SetBit(void* Obj)
	{
		((UPhononOcclusionSourceSettings*)Obj)->DirectAttenuation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectAttenuation = { "DirectAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPhononOcclusionSourceSettings), &Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_AirAbsorption_MetaData[] = {
		{ "Category", "OcclusionSettings" },
		{ "ModuleRelativePath", "Public/PhononOcclusionSourceSettings.h" },
	};
#endif
	void Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_AirAbsorption_SetBit(void* Obj)
	{
		((UPhononOcclusionSourceSettings*)Obj)->AirAbsorption = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_AirAbsorption = { "AirAbsorption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPhononOcclusionSourceSettings), &Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_AirAbsorption_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_AirAbsorption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_AirAbsorption_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectOcclusionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectOcclusionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectOcclusionMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectOcclusionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectOcclusionSourceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_DirectAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::NewProp_AirAbsorption,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhononOcclusionSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::ClassParams = {
		&UPhononOcclusionSourceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhononOcclusionSourceSettings()
	{
		if (!Z_Registration_Info_UClass_UPhononOcclusionSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhononOcclusionSourceSettings.OuterSingleton, Z_Construct_UClass_UPhononOcclusionSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhononOcclusionSourceSettings.OuterSingleton;
	}
	template<> STEAMAUDIO_API UClass* StaticClass<UPhononOcclusionSourceSettings>()
	{
		return UPhononOcclusionSourceSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhononOcclusionSourceSettings);
	UPhononOcclusionSourceSettings::~UPhononOcclusionSourceSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Public_PhononOcclusionSourceSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Public_PhononOcclusionSourceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhononOcclusionSourceSettings, UPhononOcclusionSourceSettings::StaticClass, TEXT("UPhononOcclusionSourceSettings"), &Z_Registration_Info_UClass_UPhononOcclusionSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhononOcclusionSourceSettings), 2474301962U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Public_PhononOcclusionSourceSettings_h_1826505868(TEXT("/Script/SteamAudio"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Public_PhononOcclusionSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Public_PhononOcclusionSourceSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
