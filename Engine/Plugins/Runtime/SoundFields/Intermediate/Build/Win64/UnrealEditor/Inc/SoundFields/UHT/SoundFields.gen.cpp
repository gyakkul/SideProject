// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundFields.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundFields() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEncodingSettingsBase();
	SOUNDFIELDS_API UClass* Z_Construct_UClass_UAmbisonicsEncodingSettings();
	SOUNDFIELDS_API UClass* Z_Construct_UClass_UAmbisonicsEncodingSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SoundFields();
// End Cross Module References
	void UAmbisonicsEncodingSettings::StaticRegisterNativesUAmbisonicsEncodingSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAmbisonicsEncodingSettings);
	UClass* Z_Construct_UClass_UAmbisonicsEncodingSettings_NoRegister()
	{
		return UAmbisonicsEncodingSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbisonicsOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AmbisonicsOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundfieldEncodingSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SoundFields,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SoundFields.h" },
		{ "ModuleRelativePath", "Public/SoundFields.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::NewProp_AmbisonicsOrder_MetaData[] = {
		{ "Category", "EncodingSettings" },
		{ "ClampMax", "5" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/SoundFields.h" },
		{ "UIMax", "5" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::NewProp_AmbisonicsOrder = { "AmbisonicsOrder", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAmbisonicsEncodingSettings, AmbisonicsOrder), METADATA_PARAMS(Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::NewProp_AmbisonicsOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::NewProp_AmbisonicsOrder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::NewProp_AmbisonicsOrder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmbisonicsEncodingSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::ClassParams = {
		&UAmbisonicsEncodingSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAmbisonicsEncodingSettings()
	{
		if (!Z_Registration_Info_UClass_UAmbisonicsEncodingSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAmbisonicsEncodingSettings.OuterSingleton, Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAmbisonicsEncodingSettings.OuterSingleton;
	}
	template<> SOUNDFIELDS_API UClass* StaticClass<UAmbisonicsEncodingSettings>()
	{
		return UAmbisonicsEncodingSettings::StaticClass();
	}
	UAmbisonicsEncodingSettings::UAmbisonicsEncodingSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAmbisonicsEncodingSettings);
	UAmbisonicsEncodingSettings::~UAmbisonicsEncodingSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundFields_Source_SoundFields_Public_SoundFields_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundFields_Source_SoundFields_Public_SoundFields_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAmbisonicsEncodingSettings, UAmbisonicsEncodingSettings::StaticClass, TEXT("UAmbisonicsEncodingSettings"), &Z_Registration_Info_UClass_UAmbisonicsEncodingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAmbisonicsEncodingSettings), 3710212896U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundFields_Source_SoundFields_Public_SoundFields_h_1921732475(TEXT("/Script/SoundFields"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundFields_Source_SoundFields_Public_SoundFields_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundFields_Source_SoundFields_Public_SoundFields_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
