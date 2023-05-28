// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInputEditorSettings.h"
#include "EnhancedInputDeveloperSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedInputEditorSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerInput_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FDefaultContextSetting();
	INPUTEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputEditorProjectSettings();
	INPUTEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputEditorProjectSettings_NoRegister();
	INPUTEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputEditorSettings();
	INPUTEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InputEditor();
// End Cross Module References
	void UEnhancedInputEditorProjectSettings::StaticRegisterNativesUEnhancedInputEditorProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputEditorProjectSettings);
	UClass* Z_Construct_UClass_UEnhancedInputEditorProjectSettings_NoRegister()
	{
		return UEnhancedInputEditorProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEditorInputClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultEditorInputClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultMappingContexts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_InputEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings for the Enhanced Input Editor Subsystem that are persistent between a project's users */" },
		{ "DisplayName", "Enhanced Input (Editor Only)" },
		{ "IncludePath", "EnhancedInputEditorSettings.h" },
		{ "ModuleRelativePath", "Public/EnhancedInputEditorSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Settings for the Enhanced Input Editor Subsystem that are persistent between a project's users" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics::NewProp_DefaultEditorInputClass_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** The default player input class that the Enhanced Input Editor subsystem will use. */" },
		{ "ModuleRelativePath", "Public/EnhancedInputEditorSettings.h" },
		{ "ToolTip", "The default player input class that the Enhanced Input Editor subsystem will use." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics::NewProp_DefaultEditorInputClass = { "DefaultEditorInputClass", nullptr, (EPropertyFlags)0x0014000002004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnhancedInputEditorProjectSettings, DefaultEditorInputClass), Z_Construct_UClass_UEnhancedPlayerInput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics::NewProp_DefaultEditorInputClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics::NewProp_DefaultEditorInputClass_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDefaultContextSetting, METADATA_PARAMS(nullptr, 0) }; // 371528204
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics::NewProp_DefaultMappingContexts_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Array of any input mapping contexts that you want to always be applied to the Enhanced Input Editor Subsystem. */" },
		{ "ModuleRelativePath", "Public/EnhancedInputEditorSettings.h" },
		{ "ToolTip", "Array of any input mapping contexts that you want to always be applied to the Enhanced Input Editor Subsystem." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnhancedInputEditorProjectSettings, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics::NewProp_DefaultMappingContexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics::NewProp_DefaultMappingContexts_MetaData)) }; // 371528204
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics::NewProp_DefaultEditorInputClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics::NewProp_DefaultMappingContexts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics::NewProp_DefaultMappingContexts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputEditorProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics::ClassParams = {
		&UEnhancedInputEditorProjectSettings::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnhancedInputEditorProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UEnhancedInputEditorProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputEditorProjectSettings.OuterSingleton, Z_Construct_UClass_UEnhancedInputEditorProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnhancedInputEditorProjectSettings.OuterSingleton;
	}
	template<> INPUTEDITOR_API UClass* StaticClass<UEnhancedInputEditorProjectSettings>()
	{
		return UEnhancedInputEditorProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputEditorProjectSettings);
	UEnhancedInputEditorProjectSettings::~UEnhancedInputEditorProjectSettings() {}
	void UEnhancedInputEditorSettings::StaticRegisterNativesUEnhancedInputEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputEditorSettings);
	UClass* Z_Construct_UClass_UEnhancedInputEditorSettings_NoRegister()
	{
		return UEnhancedInputEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEnhancedInputEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLogAllInput_MetaData[];
#endif
		static void NewProp_bLogAllInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogAllInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallyStartConsumingInput_MetaData[];
#endif
		static void NewProp_bAutomaticallyStartConsumingInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallyStartConsumingInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
		(UObject* (*)())Z_Construct_UPackage__Script_InputEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A collection of useful indivudal user settings when using the EnhancedInputEditorSubsystem.\n */" },
		{ "DisplayName", "Enhanced Input Editor Settings" },
		{ "IncludePath", "EnhancedInputEditorSettings.h" },
		{ "ModuleRelativePath", "Public/EnhancedInputEditorSettings.h" },
		{ "ToolTip", "A collection of useful indivudal user settings when using the EnhancedInputEditorSubsystem." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::NewProp_bLogAllInput_MetaData[] = {
		{ "Category", "Logging" },
		{ "Comment", "/**\n\x09 * If true then the Enhanced Input Editor subsystem will log all input that is being processed by it (keypresses, analog values, etc)\n\x09 * Note: This can produce A LOT of logs, so only use this if you are debugging something.\n\x09 */" },
		{ "ConsoleVariable", "EnhancedEditorInput.bShouldLogAllInputs" },
		{ "ModuleRelativePath", "Public/EnhancedInputEditorSettings.h" },
		{ "ToolTip", "If true then the Enhanced Input Editor subsystem will log all input that is being processed by it (keypresses, analog values, etc)\nNote: This can produce A LOT of logs, so only use this if you are debugging something." },
	};
#endif
	void Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::NewProp_bLogAllInput_SetBit(void* Obj)
	{
		((UEnhancedInputEditorSettings*)Obj)->bLogAllInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::NewProp_bLogAllInput = { "bLogAllInput", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEnhancedInputEditorSettings), &Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::NewProp_bLogAllInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::NewProp_bLogAllInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::NewProp_bLogAllInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::NewProp_bAutomaticallyStartConsumingInput_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "/** If true, then the UEnhancedInputEditorSubsystem will be started when it is initalized */" },
		{ "ConsoleVariable", "EnhancedEditorInput.bAutomaticallyStartConsumingInput" },
		{ "ModuleRelativePath", "Public/EnhancedInputEditorSettings.h" },
		{ "ToolTip", "If true, then the UEnhancedInputEditorSubsystem will be started when it is initalized" },
	};
#endif
	void Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::NewProp_bAutomaticallyStartConsumingInput_SetBit(void* Obj)
	{
		((UEnhancedInputEditorSettings*)Obj)->bAutomaticallyStartConsumingInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::NewProp_bAutomaticallyStartConsumingInput = { "bAutomaticallyStartConsumingInput", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEnhancedInputEditorSettings), &Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::NewProp_bAutomaticallyStartConsumingInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::NewProp_bAutomaticallyStartConsumingInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::NewProp_bAutomaticallyStartConsumingInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::NewProp_bLogAllInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::NewProp_bAutomaticallyStartConsumingInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::ClassParams = {
		&UEnhancedInputEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnhancedInputEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UEnhancedInputEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputEditorSettings.OuterSingleton, Z_Construct_UClass_UEnhancedInputEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnhancedInputEditorSettings.OuterSingleton;
	}
	template<> INPUTEDITOR_API UClass* StaticClass<UEnhancedInputEditorSettings>()
	{
		return UEnhancedInputEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputEditorSettings);
	UEnhancedInputEditorSettings::~UEnhancedInputEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedInputEditorProjectSettings, UEnhancedInputEditorProjectSettings::StaticClass, TEXT("UEnhancedInputEditorProjectSettings"), &Z_Registration_Info_UClass_UEnhancedInputEditorProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputEditorProjectSettings), 2770875711U) },
		{ Z_Construct_UClass_UEnhancedInputEditorSettings, UEnhancedInputEditorSettings::StaticClass, TEXT("UEnhancedInputEditorSettings"), &Z_Registration_Info_UClass_UEnhancedInputEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputEditorSettings), 3595196284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_1253623113(TEXT("/Script/InputEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
