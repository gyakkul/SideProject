// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Customizations/NiagaraScriptVariableCustomization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScriptVariableCustomization() {}
// Cross Module References
	NIAGARAEDITOR_API UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySourceDefaultMode();
	NIAGARAEDITOR_API UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySynchronizedDefaultMode();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraLibrarySynchronizedDefaultMode;
	static UEnum* ENiagaraLibrarySynchronizedDefaultMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraLibrarySynchronizedDefaultMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraLibrarySynchronizedDefaultMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySynchronizedDefaultMode, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("ENiagaraLibrarySynchronizedDefaultMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraLibrarySynchronizedDefaultMode.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraLibrarySynchronizedDefaultMode>()
	{
		return ENiagaraLibrarySynchronizedDefaultMode_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySynchronizedDefaultMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySynchronizedDefaultMode_Statics::Enumerators[] = {
		{ "ENiagaraLibrarySynchronizedDefaultMode::Definition", (int64)ENiagaraLibrarySynchronizedDefaultMode::Definition },
		{ "ENiagaraLibrarySynchronizedDefaultMode::Value", (int64)ENiagaraLibrarySynchronizedDefaultMode::Value },
		{ "ENiagaraLibrarySynchronizedDefaultMode::Binding", (int64)ENiagaraLibrarySynchronizedDefaultMode::Binding },
		{ "ENiagaraLibrarySynchronizedDefaultMode::Custom", (int64)ENiagaraLibrarySynchronizedDefaultMode::Custom },
		{ "ENiagaraLibrarySynchronizedDefaultMode::FailIfPreviouslyNotSet", (int64)ENiagaraLibrarySynchronizedDefaultMode::FailIfPreviouslyNotSet },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySynchronizedDefaultMode_Statics::Enum_MetaDataParams[] = {
		{ "Binding.Comment", "// Default initialize using a dropdown widget in the Selected Details panel. Overrides the parameter definition default value.\n" },
		{ "Binding.Name", "ENiagaraLibrarySynchronizedDefaultMode::Binding" },
		{ "Binding.ToolTip", "Default initialize using a dropdown widget in the Selected Details panel. Overrides the parameter definition default value." },
		{ "Comment", "/** Intermediate representations for default mode set on parameter definition script variables. Maps to ENiagaraDefaultMode and bOverrideParameterDefinitionsDefaultValue of UNiagaraScriptVariable. */" },
		{ "Custom.Comment", "// Default initialization is done using a sub-graph. Overrides the parameter definition default value.\n" },
		{ "Custom.Name", "ENiagaraLibrarySynchronizedDefaultMode::Custom" },
		{ "Custom.ToolTip", "Default initialization is done using a sub-graph. Overrides the parameter definition default value." },
		{ "Definition.Comment", "// Synchronize with the default value as defined in the synchronized parameter definitions.\n" },
		{ "Definition.Name", "ENiagaraLibrarySynchronizedDefaultMode::Definition" },
		{ "Definition.ToolTip", "Synchronize with the default value as defined in the synchronized parameter definitions." },
		{ "FailIfPreviouslyNotSet.Comment", "// Fail compilation if this value has not been set previously in the stack. Overrides the parameter definition default value.\n" },
		{ "FailIfPreviouslyNotSet.Name", "ENiagaraLibrarySynchronizedDefaultMode::FailIfPreviouslyNotSet" },
		{ "FailIfPreviouslyNotSet.ToolTip", "Fail compilation if this value has not been set previously in the stack. Overrides the parameter definition default value." },
		{ "ModuleRelativePath", "Private/Customizations/NiagaraScriptVariableCustomization.h" },
		{ "ToolTip", "Intermediate representations for default mode set on parameter definition script variables. Maps to ENiagaraDefaultMode and bOverrideParameterDefinitionsDefaultValue of UNiagaraScriptVariable." },
		{ "Value.Comment", "// Default initialize using a value widget in the Selected Details panel. Overrides the parameter definition default value.\n" },
		{ "Value.Name", "ENiagaraLibrarySynchronizedDefaultMode::Value" },
		{ "Value.ToolTip", "Default initialize using a value widget in the Selected Details panel. Overrides the parameter definition default value." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySynchronizedDefaultMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		"ENiagaraLibrarySynchronizedDefaultMode",
		"ENiagaraLibrarySynchronizedDefaultMode",
		Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySynchronizedDefaultMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySynchronizedDefaultMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySynchronizedDefaultMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySynchronizedDefaultMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySynchronizedDefaultMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraLibrarySynchronizedDefaultMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraLibrarySynchronizedDefaultMode.InnerSingleton, Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySynchronizedDefaultMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraLibrarySynchronizedDefaultMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraLibrarySourceDefaultMode;
	static UEnum* ENiagaraLibrarySourceDefaultMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraLibrarySourceDefaultMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraLibrarySourceDefaultMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySourceDefaultMode, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("ENiagaraLibrarySourceDefaultMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraLibrarySourceDefaultMode.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraLibrarySourceDefaultMode>()
	{
		return ENiagaraLibrarySourceDefaultMode_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySourceDefaultMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySourceDefaultMode_Statics::Enumerators[] = {
		{ "ENiagaraLibrarySourceDefaultMode::Value", (int64)ENiagaraLibrarySourceDefaultMode::Value },
		{ "ENiagaraLibrarySourceDefaultMode::Binding", (int64)ENiagaraLibrarySourceDefaultMode::Binding },
		{ "ENiagaraLibrarySourceDefaultMode::FailIfPreviouslyNotSet", (int64)ENiagaraLibrarySourceDefaultMode::FailIfPreviouslyNotSet },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySourceDefaultMode_Statics::Enum_MetaDataParams[] = {
		{ "Binding.Comment", "// Default initialize using a dropdown widget in the Selected Details panel.\n" },
		{ "Binding.Name", "ENiagaraLibrarySourceDefaultMode::Binding" },
		{ "Binding.ToolTip", "Default initialize using a dropdown widget in the Selected Details panel." },
		{ "FailIfPreviouslyNotSet.Comment", "// Fail compilation if this value has not been set previously in the stack.\n" },
		{ "FailIfPreviouslyNotSet.Name", "ENiagaraLibrarySourceDefaultMode::FailIfPreviouslyNotSet" },
		{ "FailIfPreviouslyNotSet.ToolTip", "Fail compilation if this value has not been set previously in the stack." },
		{ "ModuleRelativePath", "Private/Customizations/NiagaraScriptVariableCustomization.h" },
		{ "Value.Comment", "// Default initialize using a value widget in the Selected Details panel.\n" },
		{ "Value.Name", "ENiagaraLibrarySourceDefaultMode::Value" },
		{ "Value.ToolTip", "Default initialize using a value widget in the Selected Details panel." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySourceDefaultMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		"ENiagaraLibrarySourceDefaultMode",
		"ENiagaraLibrarySourceDefaultMode",
		Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySourceDefaultMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySourceDefaultMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySourceDefaultMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySourceDefaultMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySourceDefaultMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraLibrarySourceDefaultMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraLibrarySourceDefaultMode.InnerSingleton, Z_Construct_UEnum_NiagaraEditor_ENiagaraLibrarySourceDefaultMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraLibrarySourceDefaultMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraScriptVariableCustomization_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraScriptVariableCustomization_h_Statics::EnumInfo[] = {
		{ ENiagaraLibrarySynchronizedDefaultMode_StaticEnum, TEXT("ENiagaraLibrarySynchronizedDefaultMode"), &Z_Registration_Info_UEnum_ENiagaraLibrarySynchronizedDefaultMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1905213606U) },
		{ ENiagaraLibrarySourceDefaultMode_StaticEnum, TEXT("ENiagaraLibrarySourceDefaultMode"), &Z_Registration_Info_UEnum_ENiagaraLibrarySourceDefaultMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1130401203U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraScriptVariableCustomization_h_3033775991(TEXT("/Script/NiagaraEditor"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraScriptVariableCustomization_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraScriptVariableCustomization_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
