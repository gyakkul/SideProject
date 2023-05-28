// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassCommon/Public/MassGameplaySettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassGameplaySettings() {}
// Cross Module References
	MASSCOMMON_API UClass* Z_Construct_UClass_UMassGameplaySettings();
	MASSCOMMON_API UClass* Z_Construct_UClass_UMassGameplaySettings_NoRegister();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassModuleSettings();
	UPackage* Z_Construct_UPackage__Script_MassCommon();
// End Cross Module References
	void UMassGameplaySettings::StaticRegisterNativesUMassGameplaySettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassGameplaySettings);
	UClass* Z_Construct_UClass_UMassGameplaySettings_NoRegister()
	{
		return UMassGameplaySettings::StaticClass();
	}
	struct Z_Construct_UClass_UMassGameplaySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLogSpawnLocations_MetaData[];
#endif
		static void NewProp_bLogSpawnLocations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogSpawnLocations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassGameplaySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassModuleSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCommon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassGameplaySettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Mass Gameplay" },
		{ "IncludePath", "MassGameplaySettings.h" },
		{ "ModuleRelativePath", "Public/MassGameplaySettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassGameplaySettings_Statics::NewProp_bLogSpawnLocations_MetaData[] = {
		{ "Category", "Debug" },
		{ "ConsoleVariable", "mass.debug.VLogSpawnLocations" },
		{ "ModuleRelativePath", "Public/MassGameplaySettings.h" },
	};
#endif
	void Z_Construct_UClass_UMassGameplaySettings_Statics::NewProp_bLogSpawnLocations_SetBit(void* Obj)
	{
		((UMassGameplaySettings*)Obj)->bLogSpawnLocations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassGameplaySettings_Statics::NewProp_bLogSpawnLocations = { "bLogSpawnLocations", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMassGameplaySettings), &Z_Construct_UClass_UMassGameplaySettings_Statics::NewProp_bLogSpawnLocations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMassGameplaySettings_Statics::NewProp_bLogSpawnLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassGameplaySettings_Statics::NewProp_bLogSpawnLocations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassGameplaySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassGameplaySettings_Statics::NewProp_bLogSpawnLocations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassGameplaySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassGameplaySettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassGameplaySettings_Statics::ClassParams = {
		&UMassGameplaySettings::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassGameplaySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassGameplaySettings_Statics::PropPointers),
		0,
		0x001020A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassGameplaySettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassGameplaySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassGameplaySettings()
	{
		if (!Z_Registration_Info_UClass_UMassGameplaySettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassGameplaySettings.OuterSingleton, Z_Construct_UClass_UMassGameplaySettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassGameplaySettings.OuterSingleton;
	}
	template<> MASSCOMMON_API UClass* StaticClass<UMassGameplaySettings>()
	{
		return UMassGameplaySettings::StaticClass();
	}
	UMassGameplaySettings::UMassGameplaySettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassGameplaySettings);
	UMassGameplaySettings::~UMassGameplaySettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassCommon_Public_MassGameplaySettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassCommon_Public_MassGameplaySettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassGameplaySettings, UMassGameplaySettings::StaticClass, TEXT("UMassGameplaySettings"), &Z_Registration_Info_UClass_UMassGameplaySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassGameplaySettings), 478211171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassCommon_Public_MassGameplaySettings_h_3149316400(TEXT("/Script/MassCommon"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassCommon_Public_MassGameplaySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassCommon_Public_MassGameplaySettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
