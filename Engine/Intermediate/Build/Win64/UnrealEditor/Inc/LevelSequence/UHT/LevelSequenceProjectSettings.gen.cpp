// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LevelSequenceProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceProjectSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceProjectSettings();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceProjectSettings_NoRegister();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EUpdateClockSource();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References
	void ULevelSequenceProjectSettings::StaticRegisterNativesULevelSequenceProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequenceProjectSettings);
	UClass* Z_Construct_UClass_ULevelSequenceProjectSettings_NoRegister()
	{
		return ULevelSequenceProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultLockEngineToDisplayRate_MetaData[];
#endif
		static void NewProp_bDefaultLockEngineToDisplayRate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultLockEngineToDisplayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDisplayRate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultDisplayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTickResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultTickResolution;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultClockSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultClockSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultClockSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Settings for level sequences\n" },
		{ "DisplayName", "Level Sequence" },
		{ "IncludePath", "LevelSequenceProjectSettings.h" },
		{ "ModuleRelativePath", "Private/LevelSequenceProjectSettings.h" },
		{ "ToolTip", "Settings for level sequences" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_bDefaultLockEngineToDisplayRate_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ConsoleVariable", "LevelSequence.DefaultLockEngineToDisplayRate" },
		{ "ModuleRelativePath", "Private/LevelSequenceProjectSettings.h" },
		{ "Tooltip", "0: Playback locked to playback frames\n1: Unlocked playback with sub frame interpolation" },
	};
#endif
	void Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_bDefaultLockEngineToDisplayRate_SetBit(void* Obj)
	{
		((ULevelSequenceProjectSettings*)Obj)->bDefaultLockEngineToDisplayRate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_bDefaultLockEngineToDisplayRate = { "bDefaultLockEngineToDisplayRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelSequenceProjectSettings), &Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_bDefaultLockEngineToDisplayRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_bDefaultLockEngineToDisplayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_bDefaultLockEngineToDisplayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultDisplayRate_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ConsoleVariable", "LevelSequence.DefaultDisplayRate" },
		{ "ModuleRelativePath", "Private/LevelSequenceProjectSettings.h" },
		{ "Tooltip", "Specifies default display frame rate for newly created level sequences; also defines frame locked frame rate where sequences are set to be frame locked. Examples: 30 fps, 120/1 (120 fps), 30000/1001 (29.97), 0.01s (10ms)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultDisplayRate = { "DefaultDisplayRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceProjectSettings, DefaultDisplayRate), METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultDisplayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultDisplayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultTickResolution_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ConsoleVariable", "LevelSequence.DefaultTickResolution" },
		{ "ModuleRelativePath", "Private/LevelSequenceProjectSettings.h" },
		{ "Tooltip", "Specifies default tick resolution for newly created level sequences. Examples: 30 fps, 120/1 (120 fps), 30000/1001 (29.97), 0.01s (10ms)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultTickResolution = { "DefaultTickResolution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceProjectSettings, DefaultTickResolution), METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultTickResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultTickResolution_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultClockSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultClockSource_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ConsoleVariable", "LevelSequence.DefaultClockSource" },
		{ "ModuleRelativePath", "Private/LevelSequenceProjectSettings.h" },
		{ "Tooltip", "Specifies default clock source for newly created level sequences. Examples: 0: Tick, 1: Platform, 2: Audio, 3: RelativeTimecode, 4: Timecode, 5: Custom" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultClockSource = { "DefaultClockSource", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceProjectSettings, DefaultClockSource), Z_Construct_UEnum_MovieScene_EUpdateClockSource, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultClockSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultClockSource_MetaData)) }; // 3237436252
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_bDefaultLockEngineToDisplayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultDisplayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultTickResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultClockSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultClockSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::ClassParams = {
		&ULevelSequenceProjectSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceProjectSettings()
	{
		if (!Z_Registration_Info_UClass_ULevelSequenceProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceProjectSettings.OuterSingleton, Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSequenceProjectSettings.OuterSingleton;
	}
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequenceProjectSettings>()
	{
		return ULevelSequenceProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceProjectSettings);
	ULevelSequenceProjectSettings::~ULevelSequenceProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Private_LevelSequenceProjectSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Private_LevelSequenceProjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequenceProjectSettings, ULevelSequenceProjectSettings::StaticClass, TEXT("ULevelSequenceProjectSettings"), &Z_Registration_Info_UClass_ULevelSequenceProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceProjectSettings), 2883229433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Private_LevelSequenceProjectSettings_h_94516292(TEXT("/Script/LevelSequence"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Private_LevelSequenceProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Private_LevelSequenceProjectSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
