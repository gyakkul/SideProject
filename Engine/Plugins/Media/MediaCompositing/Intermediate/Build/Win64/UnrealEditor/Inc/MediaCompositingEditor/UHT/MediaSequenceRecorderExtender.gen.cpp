// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Sequencer/MediaSequenceRecorderExtender.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaSequenceRecorderExtender() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MEDIACOMPOSITINGEDITOR_API UClass* Z_Construct_UClass_UMediaSequenceRecorderSettings();
	MEDIACOMPOSITINGEDITOR_API UClass* Z_Construct_UClass_UMediaSequenceRecorderSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MediaCompositingEditor();
// End Cross Module References
	void UMediaSequenceRecorderSettings::StaticRegisterNativesUMediaSequenceRecorderSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaSequenceRecorderSettings);
	UClass* Z_Construct_UClass_UMediaSequenceRecorderSettings_NoRegister()
	{
		return UMediaSequenceRecorderSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordMediaPlayerEnabled_MetaData[];
#endif
		static void NewProp_bRecordMediaPlayerEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordMediaPlayerEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayerSubDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MediaPlayerSubDirectory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaCompositingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sequencer/MediaSequenceRecorderExtender.h" },
		{ "ModuleRelativePath", "Private/Sequencer/MediaSequenceRecorderExtender.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics::NewProp_bRecordMediaPlayerEnabled_MetaData[] = {
		{ "Category", "MediaPlayer Recording" },
		{ "Comment", "/** Whether to enabled MediaPlayer recording into this sequence. */" },
		{ "ModuleRelativePath", "Private/Sequencer/MediaSequenceRecorderExtender.h" },
		{ "ToolTip", "Whether to enabled MediaPlayer recording into this sequence." },
	};
#endif
	void Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics::NewProp_bRecordMediaPlayerEnabled_SetBit(void* Obj)
	{
		((UMediaSequenceRecorderSettings*)Obj)->bRecordMediaPlayerEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics::NewProp_bRecordMediaPlayerEnabled = { "bRecordMediaPlayerEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaSequenceRecorderSettings), &Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics::NewProp_bRecordMediaPlayerEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics::NewProp_bRecordMediaPlayerEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics::NewProp_bRecordMediaPlayerEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics::NewProp_MediaPlayerSubDirectory_MetaData[] = {
		{ "Category", "MediaPlayer Recording" },
		{ "Comment", "/** The name of the subdirectory MediaPlayer will be placed in. Leave this empty to place into the same directory as the sequence base path */" },
		{ "ModuleRelativePath", "Private/Sequencer/MediaSequenceRecorderExtender.h" },
		{ "ToolTip", "The name of the subdirectory MediaPlayer will be placed in. Leave this empty to place into the same directory as the sequence base path" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics::NewProp_MediaPlayerSubDirectory = { "MediaPlayerSubDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaSequenceRecorderSettings, MediaPlayerSubDirectory), METADATA_PARAMS(Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics::NewProp_MediaPlayerSubDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics::NewProp_MediaPlayerSubDirectory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics::NewProp_bRecordMediaPlayerEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics::NewProp_MediaPlayerSubDirectory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaSequenceRecorderSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics::ClassParams = {
		&UMediaSequenceRecorderSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaSequenceRecorderSettings()
	{
		if (!Z_Registration_Info_UClass_UMediaSequenceRecorderSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaSequenceRecorderSettings.OuterSingleton, Z_Construct_UClass_UMediaSequenceRecorderSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaSequenceRecorderSettings.OuterSingleton;
	}
	template<> MEDIACOMPOSITINGEDITOR_API UClass* StaticClass<UMediaSequenceRecorderSettings>()
	{
		return UMediaSequenceRecorderSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaSequenceRecorderSettings);
	UMediaSequenceRecorderSettings::~UMediaSequenceRecorderSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaSequenceRecorderExtender_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaSequenceRecorderExtender_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaSequenceRecorderSettings, UMediaSequenceRecorderSettings::StaticClass, TEXT("UMediaSequenceRecorderSettings"), &Z_Registration_Info_UClass_UMediaSequenceRecorderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaSequenceRecorderSettings), 2188101813U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaSequenceRecorderExtender_h_1093216706(TEXT("/Script/MediaCompositingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaSequenceRecorderExtender_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaSequenceRecorderExtender_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
