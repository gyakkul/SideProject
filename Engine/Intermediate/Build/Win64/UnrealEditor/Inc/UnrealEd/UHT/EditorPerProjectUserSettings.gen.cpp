// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Editor/EditorPerProjectUserSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorPerProjectUserSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	KISMET_API UClass* Z_Construct_UClass_UBlueprintPaletteFavorites_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorPerProjectUserSettings();
	UNREALED_API UClass* Z_Construct_UClass_UEditorPerProjectUserSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UEditorPerProjectUserSettings::StaticRegisterNativesUEditorPerProjectUserSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorPerProjectUserSettings);
	UClass* Z_Construct_UClass_UEditorPerProjectUserSettings_NoRegister()
	{
		return UEditorPerProjectUserSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEditorPerProjectUserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayUIExtensionPoints_MetaData[];
#endif
		static void NewProp_bDisplayUIExtensionPoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayUIExtensionPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayDocumentationLink_MetaData[];
#endif
		static void NewProp_bDisplayDocumentationLink_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayDocumentationLink;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayActionListItemRefIds_MetaData[];
#endif
		static void NewProp_bDisplayActionListItemRefIds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayActionListItemRefIds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysGatherBehaviorTreeDebuggerData_MetaData[];
#endif
		static void NewProp_bAlwaysGatherBehaviorTreeDebuggerData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysGatherBehaviorTreeDebuggerData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayBlackboardKeysInAlphabeticalOrder_MetaData[];
#endif
		static void NewProp_bDisplayBlackboardKeysInAlphabeticalOrder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayBlackboardKeysInAlphabeticalOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayEngineVersionInBadge_MetaData[];
#endif
		static void NewProp_bDisplayEngineVersionInBadge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayEngineVersionInBadge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSimplygonSwarm_MetaData[];
#endif
		static void NewProp_bUseSimplygonSwarm_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSimplygonSwarm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplygonServerIP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SimplygonServerIP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSwarmDebugging_MetaData[];
#endif
		static void NewProp_bEnableSwarmDebugging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSwarmDebugging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplygonSwarmDelay_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SimplygonSwarmDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwarmNumOfConcurrentJobs_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SwarmNumOfConcurrentJobs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwarmMaxUploadChunkSizeInMB_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SwarmMaxUploadChunkSizeInMB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwarmIntermediateFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SwarmIntermediateFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallyHotReloadNewClasses_MetaData[];
#endif
		static void NewProp_bAutomaticallyHotReloadNewClasses_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallyHotReloadNewClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowCompilerLogOnCompileError_MetaData[];
#endif
		static void NewProp_bShowCompilerLogOnCompileError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCompilerLogOnCompileError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepFbxNamespace_MetaData[];
#endif
		static void NewProp_bKeepFbxNamespace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepFbxNamespace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowImportDialogAtReimport_MetaData[];
#endif
		static void NewProp_bShowImportDialogAtReimport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowImportDialogAtReimport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSourceFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataSourceFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepAttachHierarchy_MetaData[];
#endif
		static void NewProp_bKeepAttachHierarchy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepAttachHierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAnimationReimportWarnings_MetaData[];
#endif
		static void NewProp_bAnimationReimportWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimationReimportWarnings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCurvesForDistributions_MetaData[];
#endif
		static void NewProp_bUseCurvesForDistributions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCurvesForDistributions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyMatrix_NumberOfPasteOperationsBeforeWarning_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyMatrix_NumberOfPasteOperationsBeforeWarning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSCSEditorShowGrid_MetaData[];
#endif
		static void NewProp_bSCSEditorShowGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSCSEditorShowGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSCSEditorShowFloor_MetaData[];
#endif
		static void NewProp_bSCSEditorShowFloor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSCSEditorShowFloor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGetAttentionOnUATCompletion_MetaData[];
#endif
		static void NewProp_bGetAttentionOnUATCompletion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetAttentionOnUATCompletion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysBuildUAT_MetaData[];
#endif
		static void NewProp_bAlwaysBuildUAT_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysBuildUAT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SCSViewportCameraSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SCSViewportCameraSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoloadCheckedOutPackages_MetaData[];
#endif
		static void NewProp_bAutoloadCheckedOutPackages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoloadCheckedOutPackages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressFullyLoadPrompt_MetaData[];
#endif
		static void NewProp_bSuppressFullyLoadPrompt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressFullyLoadPrompt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSelectTranslucent_MetaData[];
#endif
		static void NewProp_bAllowSelectTranslucent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSelectTranslucent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowSelectionSubcomponents_MetaData[];
#endif
		static void NewProp_bShowSelectionSubcomponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSelectionSubcomponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintFavorites_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlueprintFavorites;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetViewerProfileIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AssetViewerProfileIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetViewerProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetViewerProfileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewFeatureLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreviewFeatureLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewPlatformName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PreviewPlatformName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewShaderFormatName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PreviewShaderFormatName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewShaderPlatformName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PreviewShaderPlatformName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewFeatureLevelActive_MetaData[];
#endif
		static void NewProp_bPreviewFeatureLevelActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewFeatureLevelActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewFeatureLevelWasDefault_MetaData[];
#endif
		static void NewProp_bPreviewFeatureLevelWasDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewFeatureLevelWasDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewDeviceProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PreviewDeviceProfileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "ViewportControls ViewportLookAndFeel LevelEditing SourceControl Content Startup" },
		{ "HideCategories", "Object Options Grid RotationGrid" },
		{ "IncludePath", "Editor/EditorPerProjectUserSettings.h" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayUIExtensionPoints_MetaData[] = {
		{ "Category", "DeveloperTools" },
		{ "Comment", "/** If enabled, any newly opened UI menus, menu bars, and toolbars will show the developer hooks that would accept extensions */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Display UI Extension Points" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "If enabled, any newly opened UI menus, menu bars, and toolbars will show the developer hooks that would accept extensions" },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayUIExtensionPoints_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bDisplayUIExtensionPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayUIExtensionPoints = { "bDisplayUIExtensionPoints", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayUIExtensionPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayUIExtensionPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayUIExtensionPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayDocumentationLink_MetaData[] = {
		{ "Category", "DeveloperTools" },
		{ "Comment", "/** If enabled, tooltips linked to documentation will show the developer the link bound to that UI item */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "If enabled, tooltips linked to documentation will show the developer the link bound to that UI item" },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayDocumentationLink_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bDisplayDocumentationLink = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayDocumentationLink = { "bDisplayDocumentationLink", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayDocumentationLink_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayDocumentationLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayDocumentationLink_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayActionListItemRefIds_MetaData[] = {
		{ "Comment", "/*, Category=DeveloperTools*/" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", ", Category=DeveloperTools" },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayActionListItemRefIds_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bDisplayActionListItemRefIds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayActionListItemRefIds = { "bDisplayActionListItemRefIds", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayActionListItemRefIds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayActionListItemRefIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayActionListItemRefIds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAlwaysGatherBehaviorTreeDebuggerData_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** If enabled, behavior tree debugger will collect its data even when all behavior tree editor windows are closed */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "If enabled, behavior tree debugger will collect its data even when all behavior tree editor windows are closed" },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAlwaysGatherBehaviorTreeDebuggerData_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bAlwaysGatherBehaviorTreeDebuggerData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAlwaysGatherBehaviorTreeDebuggerData = { "bAlwaysGatherBehaviorTreeDebuggerData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAlwaysGatherBehaviorTreeDebuggerData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAlwaysGatherBehaviorTreeDebuggerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAlwaysGatherBehaviorTreeDebuggerData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayBlackboardKeysInAlphabeticalOrder_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** If enabled, blackboard keys displayed in blackboard editor and key selector will be sorted in alphabetical order . */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "If enabled, blackboard keys displayed in blackboard editor and key selector will be sorted in alphabetical order ." },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayBlackboardKeysInAlphabeticalOrder_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bDisplayBlackboardKeysInAlphabeticalOrder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayBlackboardKeysInAlphabeticalOrder = { "bDisplayBlackboardKeysInAlphabeticalOrder", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayBlackboardKeysInAlphabeticalOrder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayBlackboardKeysInAlphabeticalOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayBlackboardKeysInAlphabeticalOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayEngineVersionInBadge_MetaData[] = {
		{ "Category", "DeveloperTools" },
		{ "Comment", "/** When enabled, Engine Version Number is displayed in the ProjectBadge */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Display Engine Version Number in Project Badge" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "When enabled, Engine Version Number is displayed in the ProjectBadge" },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayEngineVersionInBadge_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bDisplayEngineVersionInBadge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayEngineVersionInBadge = { "bDisplayEngineVersionInBadge", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayEngineVersionInBadge_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayEngineVersionInBadge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayEngineVersionInBadge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bUseSimplygonSwarm_MetaData[] = {
		{ "Category", "SimplygonSwarm" },
		{ "Comment", "/** When enabled, use SimplygonSwarm Module / server to create proxies */" },
		{ "DisplayName", "Use Simplygon distributed proxy server" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "When enabled, use SimplygonSwarm Module / server to create proxies" },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bUseSimplygonSwarm_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bUseSimplygonSwarm = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bUseSimplygonSwarm = { "bUseSimplygonSwarm", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bUseSimplygonSwarm_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bUseSimplygonSwarm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bUseSimplygonSwarm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SimplygonServerIP_MetaData[] = {
		{ "Category", "SimplygonSwarm" },
		{ "Comment", "/** Server IP for the distributed Simplygon server */" },
		{ "DisplayName", "Simplygon distributed proxy server IP" },
		{ "editcondition", "bUseSimplygonSwarm" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "Server IP for the distributed Simplygon server" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SimplygonServerIP = { "SimplygonServerIP", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerProjectUserSettings, SimplygonServerIP), METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SimplygonServerIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SimplygonServerIP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bEnableSwarmDebugging_MetaData[] = {
		{ "Category", "SimplygonSwarm" },
		{ "Comment", "/** Enable swarm debugging features. Temp ssf files are not removed. Detailed message printing */" },
		{ "DisplayName", "Enable Swarm Debugging" },
		{ "editcondition", "bUseSimplygonSwarm" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "Enable swarm debugging features. Temp ssf files are not removed. Detailed message printing" },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bEnableSwarmDebugging_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bEnableSwarmDebugging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bEnableSwarmDebugging = { "bEnableSwarmDebugging", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bEnableSwarmDebugging_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bEnableSwarmDebugging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bEnableSwarmDebugging_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SimplygonSwarmDelay_MetaData[] = {
		{ "Category", "SimplygonSwarm" },
		{ "ClampMax", "30000" },
		{ "ClampMin", "5000" },
		{ "Comment", "/** Time between JSON net requests for Simplygon Swarm */" },
		{ "DisplayName", "Time in (MS). Delay between json request (Default 5000ms)" },
		{ "editcondition", "bUseSimplygonSwarm" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "Time between JSON net requests for Simplygon Swarm" },
		{ "UIMax", "30000" },
		{ "UIMin", "5000" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SimplygonSwarmDelay = { "SimplygonSwarmDelay", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerProjectUserSettings, SimplygonSwarmDelay), METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SimplygonSwarmDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SimplygonSwarmDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SwarmNumOfConcurrentJobs_MetaData[] = {
		{ "Category", "SimplygonSwarm" },
		{ "ClampMax", "512" },
		{ "ClampMin", "4" },
		{ "Comment", "/** Number of concurrent swarm jobs to execute. This is independent of the main job queue. */" },
		{ "DisplayName", "Number of concurrent jobs to submit on simplygon grid server" },
		{ "editcondition", "bUseSimplygonSwarm" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "Number of concurrent swarm jobs to execute. This is independent of the main job queue." },
		{ "UIMax", "512" },
		{ "UIMin", "4" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SwarmNumOfConcurrentJobs = { "SwarmNumOfConcurrentJobs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerProjectUserSettings, SwarmNumOfConcurrentJobs), METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SwarmNumOfConcurrentJobs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SwarmNumOfConcurrentJobs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SwarmMaxUploadChunkSizeInMB_MetaData[] = {
		{ "Category", "SimplygonSwarm" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "10" },
		{ "DisplayName", "Max upload size of simplygon swarm zip (MB). File larger than max size will be split into chunks." },
		{ "editcondition", "bUseSimplygonSwarm" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "UIMax", "2000" },
		{ "UIMin", "10" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SwarmMaxUploadChunkSizeInMB = { "SwarmMaxUploadChunkSizeInMB", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerProjectUserSettings, SwarmMaxUploadChunkSizeInMB), METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SwarmMaxUploadChunkSizeInMB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SwarmMaxUploadChunkSizeInMB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SwarmIntermediateFolder_MetaData[] = {
		{ "Category", "SimplygonSwarm" },
		{ "Comment", "/** Folder in which Simplygon Swarm will store intermediate texture and mesh data that is uploaded to the Swarm */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Simplygon Swarm Intermediate Folder" },
		{ "editcondition", "bUseSimplygonSwarm" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "Folder in which Simplygon Swarm will store intermediate texture and mesh data that is uploaded to the Swarm" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SwarmIntermediateFolder = { "SwarmIntermediateFolder", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerProjectUserSettings, SwarmIntermediateFolder), METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SwarmIntermediateFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SwarmIntermediateFolder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAutomaticallyHotReloadNewClasses_MetaData[] = {
		{ "Category", "HotReload" },
		{ "Comment", "/** If enabled, any newly added classes will be automatically compiled and trigger a hot-reload of the module they were added to */" },
		{ "DisplayName", "Automatically Compile Newly Added C++ Classes" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "If enabled, any newly added classes will be automatically compiled and trigger a hot-reload of the module they were added to" },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAutomaticallyHotReloadNewClasses_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bAutomaticallyHotReloadNewClasses = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAutomaticallyHotReloadNewClasses = { "bAutomaticallyHotReloadNewClasses", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAutomaticallyHotReloadNewClasses_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAutomaticallyHotReloadNewClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAutomaticallyHotReloadNewClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bShowCompilerLogOnCompileError_MetaData[] = {
		{ "Category", "HotReload" },
		{ "Comment", "/** If enabled, the compile message log window will open if there is a compiler error on Hot Reload */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "If enabled, the compile message log window will open if there is a compiler error on Hot Reload" },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bShowCompilerLogOnCompileError_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bShowCompilerLogOnCompileError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bShowCompilerLogOnCompileError = { "bShowCompilerLogOnCompileError", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bShowCompilerLogOnCompileError_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bShowCompilerLogOnCompileError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bShowCompilerLogOnCompileError_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bKeepFbxNamespace_MetaData[] = {
		{ "Category", "Import" },
		{ "Comment", "/** If enabled, the fbx parser will keep the fbx namespaces, otherwise the namespace will be append to fbx node. */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "If enabled, the fbx parser will keep the fbx namespaces, otherwise the namespace will be append to fbx node." },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bKeepFbxNamespace_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bKeepFbxNamespace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bKeepFbxNamespace = { "bKeepFbxNamespace", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bKeepFbxNamespace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bKeepFbxNamespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bKeepFbxNamespace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bShowImportDialogAtReimport_MetaData[] = {
		{ "Category", "Import" },
		{ "Comment", "/** If enabled, the fbx option dialog will show when user re-import a fbx */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "If enabled, the fbx option dialog will show when user re-import a fbx" },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bShowImportDialogAtReimport_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bShowImportDialogAtReimport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bShowImportDialogAtReimport = { "bShowImportDialogAtReimport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bShowImportDialogAtReimport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bShowImportDialogAtReimport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bShowImportDialogAtReimport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_DataSourceFolder_MetaData[] = {
		{ "Category", "Import" },
		{ "Comment", "/** Specify a project data source folder to store relative source file path to ease the re-import process*/" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "Specify a project data source folder to store relative source file path to ease the re-import process" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_DataSourceFolder = { "DataSourceFolder", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerProjectUserSettings, DataSourceFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_DataSourceFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_DataSourceFolder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bKeepAttachHierarchy_MetaData[] = {
		{ "Category", "Export" },
		{ "Comment", "/** If enabled, export level with attachment hierarchy set */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "If enabled, export level with attachment hierarchy set" },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bKeepAttachHierarchy_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bKeepAttachHierarchy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bKeepAttachHierarchy = { "bKeepAttachHierarchy", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bKeepAttachHierarchy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bKeepAttachHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bKeepAttachHierarchy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAnimationReimportWarnings_MetaData[] = {
		{ "Category", "Import" },
		{ "Comment", "/** If enabled, will compare an animation's sequence length and curves against the old data and inform the user if something changed */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "If enabled, will compare an animation's sequence length and curves against the old data and inform the user if something changed" },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAnimationReimportWarnings_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bAnimationReimportWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAnimationReimportWarnings = { "bAnimationReimportWarnings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAnimationReimportWarnings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAnimationReimportWarnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAnimationReimportWarnings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bUseCurvesForDistributions_MetaData[] = {
		{ "Comment", "/** Select to make Distributions use the curves, not the baked lookup tables. */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "Select to make Distributions use the curves, not the baked lookup tables." },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bUseCurvesForDistributions_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bUseCurvesForDistributions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bUseCurvesForDistributions = { "bUseCurvesForDistributions", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bUseCurvesForDistributions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bUseCurvesForDistributions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bUseCurvesForDistributions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PropertyMatrix_NumberOfPasteOperationsBeforeWarning_MetaData[] = {
		{ "Comment", "/** Controls the minimum value at which the property matrix editor will display a loading bar when pasting values */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "Controls the minimum value at which the property matrix editor will display a loading bar when pasting values" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PropertyMatrix_NumberOfPasteOperationsBeforeWarning = { "PropertyMatrix_NumberOfPasteOperationsBeforeWarning", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerProjectUserSettings, PropertyMatrix_NumberOfPasteOperationsBeforeWarning), METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PropertyMatrix_NumberOfPasteOperationsBeforeWarning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PropertyMatrix_NumberOfPasteOperationsBeforeWarning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bSCSEditorShowGrid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bSCSEditorShowGrid_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bSCSEditorShowGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bSCSEditorShowGrid = { "bSCSEditorShowGrid", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bSCSEditorShowGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bSCSEditorShowGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bSCSEditorShowGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bSCSEditorShowFloor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bSCSEditorShowFloor_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bSCSEditorShowFloor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bSCSEditorShowFloor = { "bSCSEditorShowFloor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bSCSEditorShowFloor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bSCSEditorShowFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bSCSEditorShowFloor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bGetAttentionOnUATCompletion_MetaData[] = {
		{ "Category", "UnrealAutomationTool" },
		{ "Comment", "/** If enabled, the Editor will attempt to get the users attention whenever a UAT task (such as cooking or packaging) is completed */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "If enabled, the Editor will attempt to get the users attention whenever a UAT task (such as cooking or packaging) is completed" },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bGetAttentionOnUATCompletion_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bGetAttentionOnUATCompletion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bGetAttentionOnUATCompletion = { "bGetAttentionOnUATCompletion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bGetAttentionOnUATCompletion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bGetAttentionOnUATCompletion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bGetAttentionOnUATCompletion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAlwaysBuildUAT_MetaData[] = {
		{ "Category", "UnrealAutomationTool" },
		{ "Comment", "/** Always build UAT\\UBT before launching the game. It will decrease iteration times if disabled */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "Always build UAT\\UBT before launching the game. It will decrease iteration times if disabled" },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAlwaysBuildUAT_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bAlwaysBuildUAT = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAlwaysBuildUAT = { "bAlwaysBuildUAT", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAlwaysBuildUAT_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAlwaysBuildUAT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAlwaysBuildUAT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SCSViewportCameraSpeed_MetaData[] = {
		{ "ClampMax", "8" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How fast the SCS viewport camera moves */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "How fast the SCS viewport camera moves" },
		{ "UIMax", "8" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SCSViewportCameraSpeed = { "SCSViewportCameraSpeed", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerProjectUserSettings, SCSViewportCameraSpeed), METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SCSViewportCameraSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SCSViewportCameraSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAutoloadCheckedOutPackages_MetaData[] = {
		{ "Comment", "/** Controls whether packages which are checked-out are automatically fully loaded at startup */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "Controls whether packages which are checked-out are automatically fully loaded at startup" },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAutoloadCheckedOutPackages_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bAutoloadCheckedOutPackages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAutoloadCheckedOutPackages = { "bAutoloadCheckedOutPackages", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAutoloadCheckedOutPackages_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAutoloadCheckedOutPackages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAutoloadCheckedOutPackages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bSuppressFullyLoadPrompt_MetaData[] = {
		{ "Comment", "/** If this is true, the user will not be asked to fully load a package before saving or before creating a new object */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "If this is true, the user will not be asked to fully load a package before saving or before creating a new object" },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bSuppressFullyLoadPrompt_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bSuppressFullyLoadPrompt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bSuppressFullyLoadPrompt = { "bSuppressFullyLoadPrompt", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bSuppressFullyLoadPrompt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bSuppressFullyLoadPrompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bSuppressFullyLoadPrompt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAllowSelectTranslucent_MetaData[] = {
		{ "Comment", "/** True if user should be allowed to select translucent objects in perspective viewports */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "True if user should be allowed to select translucent objects in perspective viewports" },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAllowSelectTranslucent_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bAllowSelectTranslucent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAllowSelectTranslucent = { "bAllowSelectTranslucent", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAllowSelectTranslucent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAllowSelectTranslucent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAllowSelectTranslucent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bShowSelectionSubcomponents_MetaData[] = {
		{ "Comment", "/** If this is true, all of an actors' components will be drawn when the actor or one of its component is selected */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "If this is true, all of an actors' components will be drawn when the actor or one of its component is selected" },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bShowSelectionSubcomponents_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bShowSelectionSubcomponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bShowSelectionSubcomponents = { "bShowSelectionSubcomponents", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bShowSelectionSubcomponents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bShowSelectionSubcomponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bShowSelectionSubcomponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_BlueprintFavorites_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_BlueprintFavorites = { "BlueprintFavorites", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerProjectUserSettings, BlueprintFavorites), Z_Construct_UClass_UBlueprintPaletteFavorites_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_BlueprintFavorites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_BlueprintFavorites_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_AssetViewerProfileIndex_MetaData[] = {
		{ "Comment", "// Per project user settings for which asset viewer profile should be used\n" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "Per project user settings for which asset viewer profile should be used" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_AssetViewerProfileIndex = { "AssetViewerProfileIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerProjectUserSettings, AssetViewerProfileIndex), METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_AssetViewerProfileIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_AssetViewerProfileIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_AssetViewerProfileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_AssetViewerProfileName = { "AssetViewerProfileName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerProjectUserSettings, AssetViewerProfileName), METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_AssetViewerProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_AssetViewerProfileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewFeatureLevel_MetaData[] = {
		{ "Comment", "/** The feature level we should use when loading or creating a new world */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "The feature level we should use when loading or creating a new world" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewFeatureLevel = { "PreviewFeatureLevel", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerProjectUserSettings, PreviewFeatureLevel), METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewFeatureLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewFeatureLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewPlatformName_MetaData[] = {
		{ "Comment", "/** The platform name to preview, or NAME_None if there is no preview platform */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "The platform name to preview, or NAME_None if there is no preview platform" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewPlatformName = { "PreviewPlatformName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerProjectUserSettings, PreviewPlatformName), METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewPlatformName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewPlatformName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewShaderFormatName_MetaData[] = {
		{ "Comment", "/** The shader format to preview, or NAME_None if there is no preview platform */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "The shader format to preview, or NAME_None if there is no preview platform" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewShaderFormatName = { "PreviewShaderFormatName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerProjectUserSettings, PreviewShaderFormatName), METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewShaderFormatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewShaderFormatName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewShaderPlatformName_MetaData[] = {
		{ "Comment", "/** The shader platform to preview, or NAME_None if there is no preview platform */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "The shader platform to preview, or NAME_None if there is no preview platform" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewShaderPlatformName = { "PreviewShaderPlatformName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerProjectUserSettings, PreviewShaderPlatformName), METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewShaderPlatformName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewShaderPlatformName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bPreviewFeatureLevelActive_MetaData[] = {
		{ "Comment", "/** Is feature level preview currently active */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
		{ "ToolTip", "Is feature level preview currently active" },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bPreviewFeatureLevelActive_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bPreviewFeatureLevelActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bPreviewFeatureLevelActive = { "bPreviewFeatureLevelActive", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bPreviewFeatureLevelActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bPreviewFeatureLevelActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bPreviewFeatureLevelActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bPreviewFeatureLevelWasDefault_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bPreviewFeatureLevelWasDefault_SetBit(void* Obj)
	{
		((UEditorPerProjectUserSettings*)Obj)->bPreviewFeatureLevelWasDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bPreviewFeatureLevelWasDefault = { "bPreviewFeatureLevelWasDefault", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorPerProjectUserSettings), &Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bPreviewFeatureLevelWasDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bPreviewFeatureLevelWasDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bPreviewFeatureLevelWasDefault_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewDeviceProfileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorPerProjectUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewDeviceProfileName = { "PreviewDeviceProfileName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorPerProjectUserSettings, PreviewDeviceProfileName), METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewDeviceProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewDeviceProfileName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayUIExtensionPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayDocumentationLink,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayActionListItemRefIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAlwaysGatherBehaviorTreeDebuggerData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayBlackboardKeysInAlphabeticalOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bDisplayEngineVersionInBadge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bUseSimplygonSwarm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SimplygonServerIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bEnableSwarmDebugging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SimplygonSwarmDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SwarmNumOfConcurrentJobs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SwarmMaxUploadChunkSizeInMB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SwarmIntermediateFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAutomaticallyHotReloadNewClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bShowCompilerLogOnCompileError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bKeepFbxNamespace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bShowImportDialogAtReimport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_DataSourceFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bKeepAttachHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAnimationReimportWarnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bUseCurvesForDistributions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PropertyMatrix_NumberOfPasteOperationsBeforeWarning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bSCSEditorShowGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bSCSEditorShowFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bGetAttentionOnUATCompletion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAlwaysBuildUAT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_SCSViewportCameraSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAutoloadCheckedOutPackages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bSuppressFullyLoadPrompt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bAllowSelectTranslucent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bShowSelectionSubcomponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_BlueprintFavorites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_AssetViewerProfileIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_AssetViewerProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewFeatureLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewPlatformName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewShaderFormatName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewShaderPlatformName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bPreviewFeatureLevelActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_bPreviewFeatureLevelWasDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::NewProp_PreviewDeviceProfileName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorPerProjectUserSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::ClassParams = {
		&UEditorPerProjectUserSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorPerProjectUserSettings()
	{
		if (!Z_Registration_Info_UClass_UEditorPerProjectUserSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorPerProjectUserSettings.OuterSingleton, Z_Construct_UClass_UEditorPerProjectUserSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorPerProjectUserSettings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorPerProjectUserSettings>()
	{
		return UEditorPerProjectUserSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorPerProjectUserSettings);
	UEditorPerProjectUserSettings::~UEditorPerProjectUserSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerProjectUserSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerProjectUserSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorPerProjectUserSettings, UEditorPerProjectUserSettings::StaticClass, TEXT("UEditorPerProjectUserSettings"), &Z_Registration_Info_UClass_UEditorPerProjectUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorPerProjectUserSettings), 326325687U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerProjectUserSettings_h_3182540067(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerProjectUserSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerProjectUserSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
