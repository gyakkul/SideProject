// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInputDeveloperSettings.h"
#include "Engine/PlatformSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedInputDeveloperSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
	DEVELOPERSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformSettings();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputDeveloperSettings();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputDeveloperSettings_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerInput_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FDefaultContextSetting();
	UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DefaultContextSetting;
class UScriptStruct* FDefaultContextSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DefaultContextSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DefaultContextSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDefaultContextSetting, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("DefaultContextSetting"));
	}
	return Z_Registration_Info_UScriptStruct_DefaultContextSetting.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FDefaultContextSetting>()
{
	return FDefaultContextSetting::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDefaultContextSetting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a single input mapping context and the priority that it should be applied with */" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "Represents a single input mapping context and the priority that it should be applied with" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDefaultContextSetting>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Input Mapping Context that should be Added to the EnhancedInputEditorSubsystem when it starts listening for input */" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Input Mapping Context that should be Added to the EnhancedInputEditorSubsystem when it starts listening for input" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDefaultContextSetting, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewProp_InputMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewProp_InputMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The prioirty that should be given to this mapping context when it is added */" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "The prioirty that should be given to this mapping context when it is added" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDefaultContextSetting, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewProp_Priority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewProp_Priority,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		&NewStructOps,
		"DefaultContextSetting",
		sizeof(FDefaultContextSetting),
		alignof(FDefaultContextSetting),
		Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDefaultContextSetting()
	{
		if (!Z_Registration_Info_UScriptStruct_DefaultContextSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DefaultContextSetting.InnerSingleton, Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DefaultContextSetting.InnerSingleton;
	}
	void UEnhancedInputDeveloperSettings::StaticRegisterNativesUEnhancedInputDeveloperSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputDeveloperSettings);
	UClass* Z_Construct_UClass_UEnhancedInputDeveloperSettings_NoRegister()
	{
		return UEnhancedInputDeveloperSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultMappingContexts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultWorldSubsystemMappingContexts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWorldSubsystemMappingContexts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultWorldSubsystemMappingContexts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWorldInputClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultWorldInputClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDefaultMappingContexts_MetaData[];
#endif
		static void NewProp_bEnableDefaultMappingContexts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDefaultMappingContexts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldOnlyTriggerLastActionInChord_MetaData[];
#endif
		static void NewProp_bShouldOnlyTriggerLastActionInChord_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldOnlyTriggerLastActionInChord;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWorldSubsystem_MetaData[];
#endif
		static void NewProp_bEnableWorldSubsystem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWorldSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldLogAllWorldSubsystemInputs_MetaData[];
#endif
		static void NewProp_bShouldLogAllWorldSubsystemInputs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldLogAllWorldSubsystemInputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Developer settings for Enhanced Input */" },
		{ "DisplayName", "Enhanced Input" },
		{ "IncludePath", "EnhancedInputDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Developer settings for Enhanced Input" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDefaultContextSetting, METADATA_PARAMS(nullptr, 0) }; // 371528204
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultMappingContexts_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "Comment", "/**\n\x09 * Array of any input mapping contexts that you want to be applied by default to the Enhanced Input local player subsystem.\n\x09 * NOTE: These mapping context's can only be from your game's root content directory, not plugins.\n\x09 */" },
		{ "editCondition", "bEnableDefaultMappingContexts" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "Array of any input mapping contexts that you want to be applied by default to the Enhanced Input local player subsystem.\nNOTE: These mapping context's can only be from your game's root content directory, not plugins." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnhancedInputDeveloperSettings, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultMappingContexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultMappingContexts_MetaData)) }; // 371528204
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultWorldSubsystemMappingContexts_Inner = { "DefaultWorldSubsystemMappingContexts", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDefaultContextSetting, METADATA_PARAMS(nullptr, 0) }; // 371528204
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultWorldSubsystemMappingContexts_MetaData[] = {
		{ "Category", "Enhanced Input|World Subsystem" },
		{ "Comment", "/**\n\x09 * Array of any input mapping contexts that you want to be applied by default to the Enhanced Input world subsystem.\n\x09 * NOTE: These mapping context's can only be from your game's root content directory, not plugins.\n\x09 */" },
		{ "editCondition", "bEnableDefaultMappingContexts && bEnableWorldSubsystem" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "Array of any input mapping contexts that you want to be applied by default to the Enhanced Input world subsystem.\nNOTE: These mapping context's can only be from your game's root content directory, not plugins." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultWorldSubsystemMappingContexts = { "DefaultWorldSubsystemMappingContexts", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnhancedInputDeveloperSettings, DefaultWorldSubsystemMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultWorldSubsystemMappingContexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultWorldSubsystemMappingContexts_MetaData)) }; // 371528204
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultWorldInputClass_MetaData[] = {
		{ "Category", "Enhanced Input|World Subsystem" },
		{ "Comment", "/** The default player input class that the Enhanced Input world subsystem will use. */" },
		{ "editCondition", "bEnableWorldSubsystem" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "The default player input class that the Enhanced Input world subsystem will use." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultWorldInputClass = { "DefaultWorldInputClass", nullptr, (EPropertyFlags)0x0014000002004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnhancedInputDeveloperSettings, DefaultWorldInputClass), Z_Construct_UClass_UEnhancedPlayerInput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultWorldInputClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultWorldInputClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_PlatformSettings_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "Comment", "/**\n\x09 * Platform specific settings for Enhanced Input.\n\x09 * @see UEnhancedInputPlatformSettings\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "Platform specific settings for Enhanced Input.\n@see UEnhancedInputPlatformSettings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_PlatformSettings = { "PlatformSettings", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnhancedInputDeveloperSettings, PlatformSettings), Z_Construct_UScriptStruct_FPerPlatformSettings, METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_PlatformSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_PlatformSettings_MetaData)) }; // 145519765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableDefaultMappingContexts_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "Comment", "/** If true, then the DefaultMappingContexts will be applied to all Enhanced Input Subsystems. */" },
		{ "ConsoleVariable", "EnhancedInput.EnableDefaultMappingContexts" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "If true, then the DefaultMappingContexts will be applied to all Enhanced Input Subsystems." },
	};
#endif
	void Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableDefaultMappingContexts_SetBit(void* Obj)
	{
		((UEnhancedInputDeveloperSettings*)Obj)->bEnableDefaultMappingContexts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableDefaultMappingContexts = { "bEnableDefaultMappingContexts", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEnhancedInputDeveloperSettings), &Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableDefaultMappingContexts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableDefaultMappingContexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableDefaultMappingContexts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldOnlyTriggerLastActionInChord_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "Comment", "/**\n\x09 * If true, then only the last action in a ChordedAction trigger will be fired.\n\x09 * This means that only the action that has the ChordedTrigger on it will be fired, not the individual steps.\n\x09 * \n\x09 * Default value is true.\n\x09 */" },
		{ "ConsoleVariable", "EnhancedInput.OnlyTriggerLastActionInChord" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "If true, then only the last action in a ChordedAction trigger will be fired.\nThis means that only the action that has the ChordedTrigger on it will be fired, not the individual steps.\n\nDefault value is true." },
	};
#endif
	void Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldOnlyTriggerLastActionInChord_SetBit(void* Obj)
	{
		((UEnhancedInputDeveloperSettings*)Obj)->bShouldOnlyTriggerLastActionInChord = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldOnlyTriggerLastActionInChord = { "bShouldOnlyTriggerLastActionInChord", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEnhancedInputDeveloperSettings), &Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldOnlyTriggerLastActionInChord_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldOnlyTriggerLastActionInChord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldOnlyTriggerLastActionInChord_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableWorldSubsystem_MetaData[] = {
		{ "Category", "Enhanced Input|World Subsystem" },
		{ "Comment", "/** If true, then the world subsystem will be created. */" },
		{ "DisplayName", "Enable World Subsystem (Experimental)" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "If true, then the world subsystem will be created." },
	};
#endif
	void Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableWorldSubsystem_SetBit(void* Obj)
	{
		((UEnhancedInputDeveloperSettings*)Obj)->bEnableWorldSubsystem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableWorldSubsystem = { "bEnableWorldSubsystem", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEnhancedInputDeveloperSettings), &Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableWorldSubsystem_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableWorldSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableWorldSubsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldLogAllWorldSubsystemInputs_MetaData[] = {
		{ "Category", "Enhanced Input|World Subsystem" },
		{ "Comment", "/**\n \x09 * If true then the Enhanced Input world subsystem will log all input that is being processed by it (keypresses, analog values, etc)\n \x09 * Note: This can produce A LOT of logs, so only use this if you are debugging something. Does nothing in shipping builds\n \x09 */" },
		{ "ConsoleVariable", "EnhancedInput.bShouldLogAllWorldSubsystemInputs" },
		{ "editCondition", "bEnableWorldSubsystem" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "If true then the Enhanced Input world subsystem will log all input that is being processed by it (keypresses, analog values, etc)\nNote: This can produce A LOT of logs, so only use this if you are debugging something. Does nothing in shipping builds" },
	};
#endif
	void Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldLogAllWorldSubsystemInputs_SetBit(void* Obj)
	{
		((UEnhancedInputDeveloperSettings*)Obj)->bShouldLogAllWorldSubsystemInputs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldLogAllWorldSubsystemInputs = { "bShouldLogAllWorldSubsystemInputs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEnhancedInputDeveloperSettings), &Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldLogAllWorldSubsystemInputs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldLogAllWorldSubsystemInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldLogAllWorldSubsystemInputs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultMappingContexts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultMappingContexts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultWorldSubsystemMappingContexts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultWorldSubsystemMappingContexts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_DefaultWorldInputClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_PlatformSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableDefaultMappingContexts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldOnlyTriggerLastActionInChord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bEnableWorldSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldLogAllWorldSubsystemInputs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputDeveloperSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::ClassParams = {
		&UEnhancedInputDeveloperSettings::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::PropPointers),
		0,
		0x009000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnhancedInputDeveloperSettings()
	{
		if (!Z_Registration_Info_UClass_UEnhancedInputDeveloperSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputDeveloperSettings.OuterSingleton, Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnhancedInputDeveloperSettings.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedInputDeveloperSettings>()
	{
		return UEnhancedInputDeveloperSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputDeveloperSettings);
	UEnhancedInputDeveloperSettings::~UEnhancedInputDeveloperSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_Statics::ScriptStructInfo[] = {
		{ FDefaultContextSetting::StaticStruct, Z_Construct_UScriptStruct_FDefaultContextSetting_Statics::NewStructOps, TEXT("DefaultContextSetting"), &Z_Registration_Info_UScriptStruct_DefaultContextSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDefaultContextSetting), 371528204U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedInputDeveloperSettings, UEnhancedInputDeveloperSettings::StaticClass, TEXT("UEnhancedInputDeveloperSettings"), &Z_Registration_Info_UClass_UEnhancedInputDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputDeveloperSettings), 519120140U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_2361388123(TEXT("/Script/EnhancedInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
