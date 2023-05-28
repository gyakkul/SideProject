// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConsoleVariablesEditorProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsoleVariablesEditorProjectSettings() {}
// Cross Module References
	CONSOLEVARIABLESEDITOR_API UClass* Z_Construct_UClass_UConsoleVariablesEditorProjectSettings();
	CONSOLEVARIABLESEDITOR_API UClass* Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_NoRegister();
	CONSOLEVARIABLESEDITOR_API UEnum* Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariablesEditorRowDisplayType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ConsoleVariablesEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConsoleVariablesEditorRowDisplayType;
	static UEnum* EConsoleVariablesEditorRowDisplayType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConsoleVariablesEditorRowDisplayType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConsoleVariablesEditorRowDisplayType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariablesEditorRowDisplayType, (UObject*)Z_Construct_UPackage__Script_ConsoleVariablesEditor(), TEXT("EConsoleVariablesEditorRowDisplayType"));
		}
		return Z_Registration_Info_UEnum_EConsoleVariablesEditorRowDisplayType.OuterSingleton;
	}
	template<> CONSOLEVARIABLESEDITOR_API UEnum* StaticEnum<EConsoleVariablesEditorRowDisplayType>()
	{
		return EConsoleVariablesEditorRowDisplayType_StaticEnum();
	}
	struct Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariablesEditorRowDisplayType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariablesEditorRowDisplayType_Statics::Enumerators[] = {
		{ "EConsoleVariablesEditorRowDisplayType::ShowCurrentValue", (int64)EConsoleVariablesEditorRowDisplayType::ShowCurrentValue },
		{ "EConsoleVariablesEditorRowDisplayType::ShowLastEnteredValue", (int64)EConsoleVariablesEditorRowDisplayType::ShowLastEnteredValue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariablesEditorRowDisplayType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesEditorProjectSettings.h" },
		{ "ShowCurrentValue.Name", "EConsoleVariablesEditorRowDisplayType::ShowCurrentValue" },
		{ "ShowLastEnteredValue.Name", "EConsoleVariablesEditorRowDisplayType::ShowLastEnteredValue" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariablesEditorRowDisplayType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConsoleVariablesEditor,
		nullptr,
		"EConsoleVariablesEditorRowDisplayType",
		"EConsoleVariablesEditorRowDisplayType",
		Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariablesEditorRowDisplayType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariablesEditorRowDisplayType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariablesEditorRowDisplayType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariablesEditorRowDisplayType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariablesEditorRowDisplayType()
	{
		if (!Z_Registration_Info_UEnum_EConsoleVariablesEditorRowDisplayType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConsoleVariablesEditorRowDisplayType.InnerSingleton, Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariablesEditorRowDisplayType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConsoleVariablesEditorRowDisplayType.InnerSingleton;
	}
	void UConsoleVariablesEditorProjectSettings::StaticRegisterNativesUConsoleVariablesEditorProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConsoleVariablesEditorProjectSettings);
	UClass* Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_NoRegister()
	{
		return UConsoleVariablesEditorProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_UncheckedRowDisplayType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UncheckedRowDisplayType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UncheckedRowDisplayType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddAllChangedConsoleVariablesToCurrentPreset_MetaData[];
#endif
		static void NewProp_bAddAllChangedConsoleVariablesToCurrentPreset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddAllChangedConsoleVariablesToCurrentPreset;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ChangedConsoleVariableSkipList_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangedConsoleVariableSkipList_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ChangedConsoleVariableSkipList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ConsoleVariablesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConsoleVariablesEditorProjectSettings.h" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesEditorProjectSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::NewProp_UncheckedRowDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::NewProp_UncheckedRowDisplayType_MetaData[] = {
		{ "Category", "Console Variables Editor" },
		{ "Comment", "/**\n\x09 *When a row is unchecked, its associated variable's value will be set to the value recorded when the plugin was loaded.\n\x09 *The value displayed to the user can be configured with this setting, but will not affect the actual applied value.\n\x09 *ShowCurrentValue displays the actual value currently applied to the variable.\n\x09 *ShowLastEnteredValue displays the value that will be applied when the row is checked.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesEditorProjectSettings.h" },
		{ "ToolTip", "When a row is unchecked, its associated variable's value will be set to the value recorded when the plugin was loaded.\nThe value displayed to the user can be configured with this setting, but will not affect the actual applied value.\nShowCurrentValue displays the actual value currently applied to the variable.\nShowLastEnteredValue displays the value that will be applied when the row is checked." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::NewProp_UncheckedRowDisplayType = { "UncheckedRowDisplayType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConsoleVariablesEditorProjectSettings, UncheckedRowDisplayType), Z_Construct_UEnum_ConsoleVariablesEditor_EConsoleVariablesEditorRowDisplayType, METADATA_PARAMS(Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::NewProp_UncheckedRowDisplayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::NewProp_UncheckedRowDisplayType_MetaData)) }; // 1769492326
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::NewProp_bAddAllChangedConsoleVariablesToCurrentPreset_MetaData[] = {
		{ "Category", "Console Variables Editor" },
		{ "Comment", "/**\n\x09 *When variables are changed outside the Console Variables Editor, this option will add the variables to the current preset.\n\x09 *Does not apply to console commands like 'r.SetNearClipPlane' or 'stat fps'\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesEditorProjectSettings.h" },
		{ "ToolTip", "When variables are changed outside the Console Variables Editor, this option will add the variables to the current preset.\nDoes not apply to console commands like 'r.SetNearClipPlane' or 'stat fps'" },
	};
#endif
	void Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::NewProp_bAddAllChangedConsoleVariablesToCurrentPreset_SetBit(void* Obj)
	{
		((UConsoleVariablesEditorProjectSettings*)Obj)->bAddAllChangedConsoleVariablesToCurrentPreset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::NewProp_bAddAllChangedConsoleVariablesToCurrentPreset = { "bAddAllChangedConsoleVariablesToCurrentPreset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConsoleVariablesEditorProjectSettings), &Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::NewProp_bAddAllChangedConsoleVariablesToCurrentPreset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::NewProp_bAddAllChangedConsoleVariablesToCurrentPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::NewProp_bAddAllChangedConsoleVariablesToCurrentPreset_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::NewProp_ChangedConsoleVariableSkipList_ElementProp = { "ChangedConsoleVariableSkipList", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::NewProp_ChangedConsoleVariableSkipList_MetaData[] = {
		{ "Category", "Console Variables Editor" },
		{ "Comment", "/**\n\x09 * If bAddAllChangedConsoleVariablesToCurrentPreset is true, this list will filter out any matching variables\n\x09 * changed outside of the Console Variables Editor so they won't be added to the current preset.\n\x09 * Matching variables explicitly added inside the Console Variables Editor will not be filtered.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConsoleVariablesEditorProjectSettings.h" },
		{ "ToolTip", "If bAddAllChangedConsoleVariablesToCurrentPreset is true, this list will filter out any matching variables\nchanged outside of the Console Variables Editor so they won't be added to the current preset.\nMatching variables explicitly added inside the Console Variables Editor will not be filtered." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::NewProp_ChangedConsoleVariableSkipList = { "ChangedConsoleVariableSkipList", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConsoleVariablesEditorProjectSettings, ChangedConsoleVariableSkipList), METADATA_PARAMS(Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::NewProp_ChangedConsoleVariableSkipList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::NewProp_ChangedConsoleVariableSkipList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::NewProp_UncheckedRowDisplayType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::NewProp_UncheckedRowDisplayType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::NewProp_bAddAllChangedConsoleVariablesToCurrentPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::NewProp_ChangedConsoleVariableSkipList_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::NewProp_ChangedConsoleVariableSkipList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConsoleVariablesEditorProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::ClassParams = {
		&UConsoleVariablesEditorProjectSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConsoleVariablesEditorProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UConsoleVariablesEditorProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConsoleVariablesEditorProjectSettings.OuterSingleton, Z_Construct_UClass_UConsoleVariablesEditorProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConsoleVariablesEditorProjectSettings.OuterSingleton;
	}
	template<> CONSOLEVARIABLESEDITOR_API UClass* StaticClass<UConsoleVariablesEditorProjectSettings>()
	{
		return UConsoleVariablesEditorProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConsoleVariablesEditorProjectSettings);
	UConsoleVariablesEditorProjectSettings::~UConsoleVariablesEditorProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorProjectSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorProjectSettings_h_Statics::EnumInfo[] = {
		{ EConsoleVariablesEditorRowDisplayType_StaticEnum, TEXT("EConsoleVariablesEditorRowDisplayType"), &Z_Registration_Info_UEnum_EConsoleVariablesEditorRowDisplayType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1769492326U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorProjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConsoleVariablesEditorProjectSettings, UConsoleVariablesEditorProjectSettings::StaticClass, TEXT("UConsoleVariablesEditorProjectSettings"), &Z_Registration_Info_UClass_UConsoleVariablesEditorProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConsoleVariablesEditorProjectSettings), 115859344U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorProjectSettings_h_2412980414(TEXT("/Script/ConsoleVariablesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorProjectSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorProjectSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorProjectSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
