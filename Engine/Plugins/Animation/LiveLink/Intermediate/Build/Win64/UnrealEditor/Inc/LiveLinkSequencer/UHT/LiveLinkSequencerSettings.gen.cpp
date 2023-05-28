// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkSequencerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkSequencerSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkControllerBase_NoRegister();
	LIVELINKSEQUENCER_API UClass* Z_Construct_UClass_ULiveLinkSequencerSettings();
	LIVELINKSEQUENCER_API UClass* Z_Construct_UClass_ULiveLinkSequencerSettings_NoRegister();
	LIVELINKSEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkSequencer();
// End Cross Module References
	void ULiveLinkSequencerSettings::StaticRegisterNativesULiveLinkSequencerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkSequencerSettings);
	UClass* Z_Construct_UClass_ULiveLinkSequencerSettings_NoRegister()
	{
		return ULiveLinkSequencerSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkSequencerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultTrackRecordersForController_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultTrackRecordersForController_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTrackRecordersForController_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultTrackRecordersForController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkSequencerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkSequencer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSequencerSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for LiveLink Sequencer\n */" },
		{ "IncludePath", "LiveLinkSequencerSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkSequencerSettings.h" },
		{ "ToolTip", "Settings for LiveLink Sequencer" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkSequencerSettings_Statics::NewProp_DefaultTrackRecordersForController_ValueProp = { "DefaultTrackRecordersForController", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneLiveLinkControllerTrackRecorder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkSequencerSettings_Statics::NewProp_DefaultTrackRecordersForController_Key_KeyProp = { "DefaultTrackRecordersForController_Key", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSequencerSettings_Statics::NewProp_DefaultTrackRecordersForController_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "LiveLink" },
		{ "Comment", "/** Default Track Recorder class to use for the specified LiveLink controller */" },
		{ "ModuleRelativePath", "Public/LiveLinkSequencerSettings.h" },
		{ "ToolTip", "Default Track Recorder class to use for the specified LiveLink controller" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULiveLinkSequencerSettings_Statics::NewProp_DefaultTrackRecordersForController = { "DefaultTrackRecordersForController", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSequencerSettings, DefaultTrackRecordersForController), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSequencerSettings_Statics::NewProp_DefaultTrackRecordersForController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSequencerSettings_Statics::NewProp_DefaultTrackRecordersForController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkSequencerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSequencerSettings_Statics::NewProp_DefaultTrackRecordersForController_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSequencerSettings_Statics::NewProp_DefaultTrackRecordersForController_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSequencerSettings_Statics::NewProp_DefaultTrackRecordersForController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkSequencerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkSequencerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkSequencerSettings_Statics::ClassParams = {
		&ULiveLinkSequencerSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkSequencerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSequencerSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSequencerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSequencerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkSequencerSettings()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkSequencerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkSequencerSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkSequencerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkSequencerSettings.OuterSingleton;
	}
	template<> LIVELINKSEQUENCER_API UClass* StaticClass<ULiveLinkSequencerSettings>()
	{
		return ULiveLinkSequencerSettings::StaticClass();
	}
	ULiveLinkSequencerSettings::ULiveLinkSequencerSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkSequencerSettings);
	ULiveLinkSequencerSettings::~ULiveLinkSequencerSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_LiveLinkSequencerSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_LiveLinkSequencerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkSequencerSettings, ULiveLinkSequencerSettings::StaticClass, TEXT("ULiveLinkSequencerSettings"), &Z_Registration_Info_UClass_ULiveLinkSequencerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkSequencerSettings), 2992721950U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_LiveLinkSequencerSettings_h_4029244133(TEXT("/Script/LiveLinkSequencer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_LiveLinkSequencerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Public_LiveLinkSequencerSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
