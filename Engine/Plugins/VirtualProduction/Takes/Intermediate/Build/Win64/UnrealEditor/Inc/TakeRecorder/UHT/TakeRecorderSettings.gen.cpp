// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakeRecorderSettings.h"
#include "Recorder/TakeRecorderParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorderSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorderProjectSettings();
	TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorderProjectSettings_NoRegister();
	TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorderUserSettings();
	TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorderUserSettings_NoRegister();
	TAKERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FTakeRecorderProjectParameters();
	TAKERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FTakeRecorderUserParameters();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakePreset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TakeRecorder();
// End Cross Module References
	void UTakeRecorderUserSettings::StaticRegisterNativesUTakeRecorderUserSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderUserSettings);
	UClass* Z_Construct_UClass_UTakeRecorderUserSettings_NoRegister()
	{
		return UTakeRecorderUserSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderUserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetSaveDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PresetSaveDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastOpenedPreset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LastOpenedPreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSequenceOpen_MetaData[];
#endif
		static void NewProp_bIsSequenceOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSequenceOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowUserSettingsOnUI_MetaData[];
#endif
		static void NewProp_bShowUserSettingsOnUI_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowUserSettingsOnUI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderUserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderUserSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Universal take recorder settings that apply to a whole take\n */" },
		{ "IncludePath", "TakeRecorderSettings.h" },
		{ "ModuleRelativePath", "Public/TakeRecorderSettings.h" },
		{ "ToolTip", "Universal take recorder settings that apply to a whole take" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "User Settings" },
		{ "Comment", "/** User settings that should be passed to a recorder instance */" },
		{ "ModuleRelativePath", "Public/TakeRecorderSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "User settings that should be passed to a recorder instance" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderUserSettings, Settings), Z_Construct_UScriptStruct_FTakeRecorderUserParameters, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_Settings_MetaData)) }; // 3708244952
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_PresetSaveDir_MetaData[] = {
		{ "Category", "User Settings" },
		{ "Comment", "/** The default location in which to save take presets */" },
		{ "DisplayName", "Preset Save Location" },
		{ "ModuleRelativePath", "Public/TakeRecorderSettings.h" },
		{ "ToolTip", "The default location in which to save take presets" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_PresetSaveDir = { "PresetSaveDir", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderUserSettings, PresetSaveDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_PresetSaveDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_PresetSaveDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_LastOpenedPreset_MetaData[] = {
		{ "Comment", "/** Soft reference to the preset last opened on the take recording UI */" },
		{ "ModuleRelativePath", "Public/TakeRecorderSettings.h" },
		{ "ToolTip", "Soft reference to the preset last opened on the take recording UI" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_LastOpenedPreset = { "LastOpenedPreset", nullptr, (EPropertyFlags)0x0014000000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderUserSettings, LastOpenedPreset), Z_Construct_UClass_UTakePreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_LastOpenedPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_LastOpenedPreset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_bIsSequenceOpen_MetaData[] = {
		{ "Comment", "/** Whether the sequence editor is open for the take recorder */" },
		{ "ModuleRelativePath", "Public/TakeRecorderSettings.h" },
		{ "ToolTip", "Whether the sequence editor is open for the take recorder" },
	};
#endif
	void Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_bIsSequenceOpen_SetBit(void* Obj)
	{
		((UTakeRecorderUserSettings*)Obj)->bIsSequenceOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_bIsSequenceOpen = { "bIsSequenceOpen", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTakeRecorderUserSettings), &Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_bIsSequenceOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_bIsSequenceOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_bIsSequenceOpen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_bShowUserSettingsOnUI_MetaData[] = {
		{ "Comment", "/** Whether the sequence editor is open for the take recorder */" },
		{ "ModuleRelativePath", "Public/TakeRecorderSettings.h" },
		{ "ToolTip", "Whether the sequence editor is open for the take recorder" },
	};
#endif
	void Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_bShowUserSettingsOnUI_SetBit(void* Obj)
	{
		((UTakeRecorderUserSettings*)Obj)->bShowUserSettingsOnUI = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_bShowUserSettingsOnUI = { "bShowUserSettingsOnUI", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTakeRecorderUserSettings), &Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_bShowUserSettingsOnUI_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_bShowUserSettingsOnUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_bShowUserSettingsOnUI_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakeRecorderUserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_PresetSaveDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_LastOpenedPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_bIsSequenceOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderUserSettings_Statics::NewProp_bShowUserSettingsOnUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderUserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderUserSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderUserSettings_Statics::ClassParams = {
		&UTakeRecorderUserSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTakeRecorderUserSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderUserSettings_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderUserSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderUserSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeRecorderUserSettings()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderUserSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderUserSettings.OuterSingleton, Z_Construct_UClass_UTakeRecorderUserSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderUserSettings.OuterSingleton;
	}
	template<> TAKERECORDER_API UClass* StaticClass<UTakeRecorderUserSettings>()
	{
		return UTakeRecorderUserSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderUserSettings);
	UTakeRecorderUserSettings::~UTakeRecorderUserSettings() {}
	void UTakeRecorderProjectSettings::StaticRegisterNativesUTakeRecorderProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderProjectSettings);
	UClass* Z_Construct_UClass_UTakeRecorderProjectSettings_NoRegister()
	{
		return UTakeRecorderProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Universal take recorder settings that apply to a whole take\n */" },
		{ "IncludePath", "TakeRecorderSettings.h" },
		{ "ModuleRelativePath", "Public/TakeRecorderSettings.h" },
		{ "ToolTip", "Universal take recorder settings that apply to a whole take" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderProjectSettings_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "ModuleRelativePath", "Public/TakeRecorderSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTakeRecorderProjectSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderProjectSettings, Settings), Z_Construct_UScriptStruct_FTakeRecorderProjectParameters, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderProjectSettings_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderProjectSettings_Statics::NewProp_Settings_MetaData)) }; // 3064183064
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakeRecorderProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderProjectSettings_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderProjectSettings_Statics::ClassParams = {
		&UTakeRecorderProjectSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTakeRecorderProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderProjectSettings_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeRecorderProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderProjectSettings.OuterSingleton, Z_Construct_UClass_UTakeRecorderProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderProjectSettings.OuterSingleton;
	}
	template<> TAKERECORDER_API UClass* StaticClass<UTakeRecorderProjectSettings>()
	{
		return UTakeRecorderProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderProjectSettings);
	UTakeRecorderProjectSettings::~UTakeRecorderProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakeRecorderUserSettings, UTakeRecorderUserSettings::StaticClass, TEXT("UTakeRecorderUserSettings"), &Z_Registration_Info_UClass_UTakeRecorderUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderUserSettings), 2857454826U) },
		{ Z_Construct_UClass_UTakeRecorderProjectSettings, UTakeRecorderProjectSettings::StaticClass, TEXT("UTakeRecorderProjectSettings"), &Z_Registration_Info_UClass_UTakeRecorderProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderProjectSettings), 3771257068U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderSettings_h_431125782(TEXT("/Script/TakeRecorder"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
