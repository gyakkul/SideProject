// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Settings/BlueprintEditorProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintEditorProjectSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EChildActorComponentTreeViewVisualizationMode();
	UNREALED_API UClass* Z_Construct_UClass_UBlueprintEditorProjectSettings();
	UNREALED_API UClass* Z_Construct_UClass_UBlueprintEditorProjectSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UBlueprintEditorProjectSettings::StaticRegisterNativesUBlueprintEditorProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintEditorProjectSettings);
	UClass* Z_Construct_UClass_UBlueprintEditorProjectSettings_NoRegister()
	{
		return UBlueprintEditorProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceAllDependenciesToRecompile_MetaData[];
#endif
		static void NewProp_bForceAllDependenciesToRecompile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceAllDependenciesToRecompile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValidateUnloadedSoftActorReferences_MetaData[];
#endif
		static void NewProp_bValidateUnloadedSoftActorReferences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidateUnloadedSoftActorReferences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableChildActorExpansionInTreeView_MetaData[];
#endif
		static void NewProp_bEnableChildActorExpansionInTreeView_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableChildActorExpansionInTreeView;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultChildActorTreeViewMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultChildActorTreeViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultChildActorTreeViewMode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NamespacesToAlwaysInclude_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamespacesToAlwaysInclude_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NamespacesToAlwaysInclude;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisabledCompilerMessagesExceptEditor_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledCompilerMessagesExceptEditor_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DisabledCompilerMessagesExceptEditor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisabledCompilerMessages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledCompilerMessages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DisabledCompilerMessages;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SuppressedDeprecationMessages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuppressedDeprecationMessages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SuppressedDeprecationMessages;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_BaseClassesToAllowRecompilingDuringPlayInEditor_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseClassesToAllowRecompilingDuringPlayInEditor_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BaseClassesToAllowRecompilingDuringPlayInEditor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Blueprint Project Settings" },
		{ "IncludePath", "Settings/BlueprintEditorProjectSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/BlueprintEditorProjectSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bForceAllDependenciesToRecompile_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/BlueprintEditorProjectSettings.h" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bForceAllDependenciesToRecompile_SetBit(void* Obj)
	{
		((UBlueprintEditorProjectSettings*)Obj)->bForceAllDependenciesToRecompile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bForceAllDependenciesToRecompile = { "bForceAllDependenciesToRecompile", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBlueprintEditorProjectSettings), &Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bForceAllDependenciesToRecompile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bForceAllDependenciesToRecompile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bForceAllDependenciesToRecompile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bValidateUnloadedSoftActorReferences_MetaData[] = {
		{ "Category", "Actors" },
		{ "Comment", "/** If enabled, the editor will load packages to look for soft references to actors when deleting/renaming them. This can be slow in large projects so disable this to improve performance but increase the chance of breaking blueprints/sequences that use soft actor references */" },
		{ "ModuleRelativePath", "Public/Settings/BlueprintEditorProjectSettings.h" },
		{ "ToolTip", "If enabled, the editor will load packages to look for soft references to actors when deleting/renaming them. This can be slow in large projects so disable this to improve performance but increase the chance of breaking blueprints/sequences that use soft actor references" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bValidateUnloadedSoftActorReferences_SetBit(void* Obj)
	{
		((UBlueprintEditorProjectSettings*)Obj)->bValidateUnloadedSoftActorReferences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bValidateUnloadedSoftActorReferences = { "bValidateUnloadedSoftActorReferences", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBlueprintEditorProjectSettings), &Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bValidateUnloadedSoftActorReferences_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bValidateUnloadedSoftActorReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bValidateUnloadedSoftActorReferences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bEnableChildActorExpansionInTreeView_MetaData[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/**\n\x09 * Enable the option to expand child actor components within component tree views (experimental).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/BlueprintEditorProjectSettings.h" },
		{ "ToolTip", "Enable the option to expand child actor components within component tree views (experimental)." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bEnableChildActorExpansionInTreeView_SetBit(void* Obj)
	{
		((UBlueprintEditorProjectSettings*)Obj)->bEnableChildActorExpansionInTreeView = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bEnableChildActorExpansionInTreeView = { "bEnableChildActorExpansionInTreeView", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBlueprintEditorProjectSettings), &Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bEnableChildActorExpansionInTreeView_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bEnableChildActorExpansionInTreeView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bEnableChildActorExpansionInTreeView_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DefaultChildActorTreeViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DefaultChildActorTreeViewMode_MetaData[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/**\n\x09 * Default view mode to use for child actor components in a Blueprint actor's component tree hierarchy (experimental).\n\x09 */" },
		{ "EditCondition", "bEnableChildActorExpansionInTreeView" },
		{ "ModuleRelativePath", "Public/Settings/BlueprintEditorProjectSettings.h" },
		{ "ToolTip", "Default view mode to use for child actor components in a Blueprint actor's component tree hierarchy (experimental)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DefaultChildActorTreeViewMode = { "DefaultChildActorTreeViewMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintEditorProjectSettings, DefaultChildActorTreeViewMode), Z_Construct_UEnum_Engine_EChildActorComponentTreeViewVisualizationMode, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DefaultChildActorTreeViewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DefaultChildActorTreeViewMode_MetaData)) }; // 2630047071
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_NamespacesToAlwaysInclude_Inner = { "NamespacesToAlwaysInclude", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_NamespacesToAlwaysInclude_MetaData[] = {
		{ "Category", "Blueprints" },
		{ "Comment", "// A list of namespace identifiers that all Blueprint assets in the project should import by default. Requires Blueprint namespace features to be enabled in editor preferences. Editing this list will also cause any visible Blueprint editor windows to be closed.\n" },
		{ "DisplayName", "Global Namespace Imports (Shared)" },
		{ "ModuleRelativePath", "Public/Settings/BlueprintEditorProjectSettings.h" },
		{ "ToolTip", "A list of namespace identifiers that all Blueprint assets in the project should import by default. Requires Blueprint namespace features to be enabled in editor preferences. Editing this list will also cause any visible Blueprint editor windows to be closed." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_NamespacesToAlwaysInclude = { "NamespacesToAlwaysInclude", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintEditorProjectSettings, NamespacesToAlwaysInclude), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_NamespacesToAlwaysInclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_NamespacesToAlwaysInclude_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessagesExceptEditor_Inner = { "DisabledCompilerMessagesExceptEditor", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessagesExceptEditor_MetaData[] = {
		{ "Category", "Blueprints" },
		{ "Comment", "/** \n\x09 * List of compiler messages that have been suppressed outside of full, interactive editor sessions for \n\x09 * the current project - useful for silencing warnings that were added to the engine after \n\x09 * project inception and are going to be addressed as they are found by content authors\n\x09 */" },
		{ "DisplayName", "Compiler Messages Disabled Except in Editor" },
		{ "ModuleRelativePath", "Public/Settings/BlueprintEditorProjectSettings.h" },
		{ "ToolTip", "List of compiler messages that have been suppressed outside of full, interactive editor sessions for\nthe current project - useful for silencing warnings that were added to the engine after\nproject inception and are going to be addressed as they are found by content authors" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessagesExceptEditor = { "DisabledCompilerMessagesExceptEditor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintEditorProjectSettings, DisabledCompilerMessagesExceptEditor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessagesExceptEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessagesExceptEditor_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessages_Inner = { "DisabledCompilerMessages", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessages_MetaData[] = {
		{ "Category", "Blueprints" },
		{ "Comment", "/** \n\x09 * List of compiler messages that have been suppressed completely - message suppression is only \n\x09 * advisable when using blueprints that you cannot update and are raising innocuous warnings. \n\x09 * If useless messages are being raised prefer to contact support rather than disabling messages\n\x09 */" },
		{ "DisplayName", "Compiler Messages Disabled Entirely" },
		{ "ModuleRelativePath", "Public/Settings/BlueprintEditorProjectSettings.h" },
		{ "ToolTip", "List of compiler messages that have been suppressed completely - message suppression is only\nadvisable when using blueprints that you cannot update and are raising innocuous warnings.\nIf useless messages are being raised prefer to contact support rather than disabling messages" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessages = { "DisabledCompilerMessages", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintEditorProjectSettings, DisabledCompilerMessages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessages_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_SuppressedDeprecationMessages_Inner = { "SuppressedDeprecationMessages", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_SuppressedDeprecationMessages_MetaData[] = {
		{ "Category", "Blueprints" },
		{ "Comment", "/**\n\x09 * List of deprecated UProperties/UFunctions to supress warning messages for - useful for source changes\n\x09 * that would otherwise cause content warnings\n\x09 * The easiest way to populate this list is using the context menu on nodes with deprecated references\n\x09 */" },
		{ "DisplayName", "Deprecated Symbols to Supress" },
		{ "ModuleRelativePath", "Public/Settings/BlueprintEditorProjectSettings.h" },
		{ "ToolTip", "List of deprecated UProperties/UFunctions to supress warning messages for - useful for source changes\nthat would otherwise cause content warnings\nThe easiest way to populate this list is using the context menu on nodes with deprecated references" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_SuppressedDeprecationMessages = { "SuppressedDeprecationMessages", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintEditorProjectSettings, SuppressedDeprecationMessages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_SuppressedDeprecationMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_SuppressedDeprecationMessages_MetaData)) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_BaseClassesToAllowRecompilingDuringPlayInEditor_Inner = { "BaseClassesToAllowRecompilingDuringPlayInEditor", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_BaseClassesToAllowRecompilingDuringPlayInEditor_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "Play" },
		{ "Comment", "/**\n\x09 * Any blueprint deriving from one of these base classes will be allowed to recompile during Play-in-Editor\n\x09 * (This setting exists both as an editor preference and project setting, and will be allowed if listed in either place) \n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/BlueprintEditorProjectSettings.h" },
		{ "ToolTip", "Any blueprint deriving from one of these base classes will be allowed to recompile during Play-in-Editor\n(This setting exists both as an editor preference and project setting, and will be allowed if listed in either place)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_BaseClassesToAllowRecompilingDuringPlayInEditor = { "BaseClassesToAllowRecompilingDuringPlayInEditor", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintEditorProjectSettings, BaseClassesToAllowRecompilingDuringPlayInEditor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_BaseClassesToAllowRecompilingDuringPlayInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_BaseClassesToAllowRecompilingDuringPlayInEditor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bForceAllDependenciesToRecompile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bValidateUnloadedSoftActorReferences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_bEnableChildActorExpansionInTreeView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DefaultChildActorTreeViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DefaultChildActorTreeViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_NamespacesToAlwaysInclude_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_NamespacesToAlwaysInclude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessagesExceptEditor_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessagesExceptEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_DisabledCompilerMessages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_SuppressedDeprecationMessages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_SuppressedDeprecationMessages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_BaseClassesToAllowRecompilingDuringPlayInEditor_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::NewProp_BaseClassesToAllowRecompilingDuringPlayInEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintEditorProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::ClassParams = {
		&UBlueprintEditorProjectSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintEditorProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UBlueprintEditorProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintEditorProjectSettings.OuterSingleton, Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintEditorProjectSettings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UBlueprintEditorProjectSettings>()
	{
		return UBlueprintEditorProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintEditorProjectSettings);
	UBlueprintEditorProjectSettings::~UBlueprintEditorProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintEditorProjectSettings, UBlueprintEditorProjectSettings::StaticClass, TEXT("UBlueprintEditorProjectSettings"), &Z_Registration_Info_UClass_UBlueprintEditorProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintEditorProjectSettings), 246591195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_3255436691(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
