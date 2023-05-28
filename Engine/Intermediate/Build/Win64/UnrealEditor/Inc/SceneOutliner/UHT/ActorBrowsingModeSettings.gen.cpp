// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ActorBrowsingModeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorBrowsingModeSettings() {}
// Cross Module References
	EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorConfigBase();
	SCENEOUTLINER_API UClass* Z_Construct_UClass_UActorBrowserConfig();
	SCENEOUTLINER_API UClass* Z_Construct_UClass_UActorBrowserConfig_NoRegister();
	SCENEOUTLINER_API UScriptStruct* Z_Construct_UScriptStruct_FActorBrowsingModeConfig();
	UPackage* Z_Construct_UPackage__Script_SceneOutliner();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorBrowsingModeConfig;
class UScriptStruct* FActorBrowsingModeConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorBrowsingModeConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorBrowsingModeConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorBrowsingModeConfig, (UObject*)Z_Construct_UPackage__Script_SceneOutliner(), TEXT("ActorBrowsingModeConfig"));
	}
	return Z_Registration_Info_UScriptStruct_ActorBrowsingModeConfig.OuterSingleton;
}
template<> SCENEOUTLINER_API UScriptStruct* StaticStruct<FActorBrowsingModeConfig>()
{
	return FActorBrowsingModeConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideTemporaryActors_MetaData[];
#endif
		static void NewProp_bHideTemporaryActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideTemporaryActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOnlyActorsInCurrentLevel_MetaData[];
#endif
		static void NewProp_bShowOnlyActorsInCurrentLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOnlyActorsInCurrentLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOnlyActorsInCurrentDataLayers_MetaData[];
#endif
		static void NewProp_bShowOnlyActorsInCurrentDataLayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOnlyActorsInCurrentDataLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOnlyActorsInCurrentContentBundle_MetaData[];
#endif
		static void NewProp_bShowOnlyActorsInCurrentContentBundle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOnlyActorsInCurrentContentBundle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOnlySelectedActors_MetaData[];
#endif
		static void NewProp_bShowOnlySelectedActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOnlySelectedActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideActorComponents_MetaData[];
#endif
		static void NewProp_bHideActorComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideActorComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideLevelInstanceHierarchy_MetaData[];
#endif
		static void NewProp_bHideLevelInstanceHierarchy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLevelInstanceHierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideUnloadedActors_MetaData[];
#endif
		static void NewProp_bHideUnloadedActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideUnloadedActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideEmptyFolders_MetaData[];
#endif
		static void NewProp_bHideEmptyFolders_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideEmptyFolders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysFrameSelection_MetaData[];
#endif
		static void NewProp_bAlwaysFrameSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysFrameSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ActorBrowsingModeSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorBrowsingModeConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideTemporaryActors_MetaData[] = {
		{ "Comment", "/** True when the Scene Outliner is hiding temporary/run-time Actors */" },
		{ "ModuleRelativePath", "Private/ActorBrowsingModeSettings.h" },
		{ "ToolTip", "True when the Scene Outliner is hiding temporary/run-time Actors" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideTemporaryActors_SetBit(void* Obj)
	{
		((FActorBrowsingModeConfig*)Obj)->bHideTemporaryActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideTemporaryActors = { "bHideTemporaryActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FActorBrowsingModeConfig), &Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideTemporaryActors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideTemporaryActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideTemporaryActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlyActorsInCurrentLevel_MetaData[] = {
		{ "Comment", "/** True when the Scene Outliner is showing only Actors that exist in the current level */" },
		{ "ModuleRelativePath", "Private/ActorBrowsingModeSettings.h" },
		{ "ToolTip", "True when the Scene Outliner is showing only Actors that exist in the current level" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlyActorsInCurrentLevel_SetBit(void* Obj)
	{
		((FActorBrowsingModeConfig*)Obj)->bShowOnlyActorsInCurrentLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlyActorsInCurrentLevel = { "bShowOnlyActorsInCurrentLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FActorBrowsingModeConfig), &Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlyActorsInCurrentLevel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlyActorsInCurrentLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlyActorsInCurrentLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlyActorsInCurrentDataLayers_MetaData[] = {
		{ "Comment", "/** True when the Scene Outliner is showing only Actors that exist in the current data layers */" },
		{ "ModuleRelativePath", "Private/ActorBrowsingModeSettings.h" },
		{ "ToolTip", "True when the Scene Outliner is showing only Actors that exist in the current data layers" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlyActorsInCurrentDataLayers_SetBit(void* Obj)
	{
		((FActorBrowsingModeConfig*)Obj)->bShowOnlyActorsInCurrentDataLayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlyActorsInCurrentDataLayers = { "bShowOnlyActorsInCurrentDataLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FActorBrowsingModeConfig), &Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlyActorsInCurrentDataLayers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlyActorsInCurrentDataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlyActorsInCurrentDataLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlyActorsInCurrentContentBundle_MetaData[] = {
		{ "Comment", "/** True when the Scene Outliner is showing only Actors that exist in the current content bundle */" },
		{ "ModuleRelativePath", "Private/ActorBrowsingModeSettings.h" },
		{ "ToolTip", "True when the Scene Outliner is showing only Actors that exist in the current content bundle" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlyActorsInCurrentContentBundle_SetBit(void* Obj)
	{
		((FActorBrowsingModeConfig*)Obj)->bShowOnlyActorsInCurrentContentBundle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlyActorsInCurrentContentBundle = { "bShowOnlyActorsInCurrentContentBundle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FActorBrowsingModeConfig), &Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlyActorsInCurrentContentBundle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlyActorsInCurrentContentBundle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlyActorsInCurrentContentBundle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlySelectedActors_MetaData[] = {
		{ "Comment", "/** True when the Scene Outliner is only displaying selected Actors */" },
		{ "ModuleRelativePath", "Private/ActorBrowsingModeSettings.h" },
		{ "ToolTip", "True when the Scene Outliner is only displaying selected Actors" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlySelectedActors_SetBit(void* Obj)
	{
		((FActorBrowsingModeConfig*)Obj)->bShowOnlySelectedActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlySelectedActors = { "bShowOnlySelectedActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FActorBrowsingModeConfig), &Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlySelectedActors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlySelectedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlySelectedActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideActorComponents_MetaData[] = {
		{ "Comment", "/** True when the Scene Outliner is not displaying Actor Components*/" },
		{ "ModuleRelativePath", "Private/ActorBrowsingModeSettings.h" },
		{ "ToolTip", "True when the Scene Outliner is not displaying Actor Components" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideActorComponents_SetBit(void* Obj)
	{
		((FActorBrowsingModeConfig*)Obj)->bHideActorComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideActorComponents = { "bHideActorComponents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FActorBrowsingModeConfig), &Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideActorComponents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideActorComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideActorComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideLevelInstanceHierarchy_MetaData[] = {
		{ "Comment", "/** True when the Scene Outliner is not displaying LevelInstances */" },
		{ "ModuleRelativePath", "Private/ActorBrowsingModeSettings.h" },
		{ "ToolTip", "True when the Scene Outliner is not displaying LevelInstances" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideLevelInstanceHierarchy_SetBit(void* Obj)
	{
		((FActorBrowsingModeConfig*)Obj)->bHideLevelInstanceHierarchy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideLevelInstanceHierarchy = { "bHideLevelInstanceHierarchy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FActorBrowsingModeConfig), &Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideLevelInstanceHierarchy_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideLevelInstanceHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideLevelInstanceHierarchy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideUnloadedActors_MetaData[] = {
		{ "Comment", "/** True when the Scene Outliner is not displaying unloaded actors */" },
		{ "ModuleRelativePath", "Private/ActorBrowsingModeSettings.h" },
		{ "ToolTip", "True when the Scene Outliner is not displaying unloaded actors" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideUnloadedActors_SetBit(void* Obj)
	{
		((FActorBrowsingModeConfig*)Obj)->bHideUnloadedActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideUnloadedActors = { "bHideUnloadedActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FActorBrowsingModeConfig), &Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideUnloadedActors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideUnloadedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideUnloadedActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideEmptyFolders_MetaData[] = {
		{ "Comment", "/** True when the Scene Outliner is not displaying empty folders */" },
		{ "ModuleRelativePath", "Private/ActorBrowsingModeSettings.h" },
		{ "ToolTip", "True when the Scene Outliner is not displaying empty folders" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideEmptyFolders_SetBit(void* Obj)
	{
		((FActorBrowsingModeConfig*)Obj)->bHideEmptyFolders = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideEmptyFolders = { "bHideEmptyFolders", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FActorBrowsingModeConfig), &Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideEmptyFolders_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideEmptyFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideEmptyFolders_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bAlwaysFrameSelection_MetaData[] = {
		{ "Comment", "/** True when the Scene Outliner updates when an actor is selected in the viewport */" },
		{ "ModuleRelativePath", "Private/ActorBrowsingModeSettings.h" },
		{ "ToolTip", "True when the Scene Outliner updates when an actor is selected in the viewport" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bAlwaysFrameSelection_SetBit(void* Obj)
	{
		((FActorBrowsingModeConfig*)Obj)->bAlwaysFrameSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bAlwaysFrameSelection = { "bAlwaysFrameSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FActorBrowsingModeConfig), &Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bAlwaysFrameSelection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bAlwaysFrameSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bAlwaysFrameSelection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideTemporaryActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlyActorsInCurrentLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlyActorsInCurrentDataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlyActorsInCurrentContentBundle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bShowOnlySelectedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideActorComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideLevelInstanceHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideUnloadedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bHideEmptyFolders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewProp_bAlwaysFrameSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SceneOutliner,
		nullptr,
		&NewStructOps,
		"ActorBrowsingModeConfig",
		sizeof(FActorBrowsingModeConfig),
		alignof(FActorBrowsingModeConfig),
		Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorBrowsingModeConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorBrowsingModeConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorBrowsingModeConfig.InnerSingleton, Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorBrowsingModeConfig.InnerSingleton;
	}
	void UActorBrowserConfig::StaticRegisterNativesUActorBrowserConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorBrowserConfig);
	UClass* Z_Construct_UClass_UActorBrowserConfig_NoRegister()
	{
		return UActorBrowserConfig::StaticClass();
	}
	struct Z_Construct_UClass_UActorBrowserConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorBrowsers_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorBrowsers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorBrowsers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActorBrowsers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorBrowserConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorConfigBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SceneOutliner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorBrowserConfig_Statics::Class_MetaDataParams[] = {
		{ "EditorConfig", "ActorBrowsingMode" },
		{ "IncludePath", "ActorBrowsingModeSettings.h" },
		{ "ModuleRelativePath", "Private/ActorBrowsingModeSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorBrowserConfig_Statics::NewProp_ActorBrowsers_ValueProp = { "ActorBrowsers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FActorBrowsingModeConfig, METADATA_PARAMS(nullptr, 0) }; // 258692366
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UActorBrowserConfig_Statics::NewProp_ActorBrowsers_Key_KeyProp = { "ActorBrowsers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorBrowserConfig_Statics::NewProp_ActorBrowsers_MetaData[] = {
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Private/ActorBrowsingModeSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UActorBrowserConfig_Statics::NewProp_ActorBrowsers = { "ActorBrowsers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorBrowserConfig, ActorBrowsers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorBrowserConfig_Statics::NewProp_ActorBrowsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorBrowserConfig_Statics::NewProp_ActorBrowsers_MetaData)) }; // 258692366
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorBrowserConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorBrowserConfig_Statics::NewProp_ActorBrowsers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorBrowserConfig_Statics::NewProp_ActorBrowsers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorBrowserConfig_Statics::NewProp_ActorBrowsers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorBrowserConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorBrowserConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorBrowserConfig_Statics::ClassParams = {
		&UActorBrowserConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorBrowserConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorBrowserConfig_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorBrowserConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorBrowserConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorBrowserConfig()
	{
		if (!Z_Registration_Info_UClass_UActorBrowserConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorBrowserConfig.OuterSingleton, Z_Construct_UClass_UActorBrowserConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorBrowserConfig.OuterSingleton;
	}
	template<> SCENEOUTLINER_API UClass* StaticClass<UActorBrowserConfig>()
	{
		return UActorBrowserConfig::StaticClass();
	}
	UActorBrowserConfig::UActorBrowserConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorBrowserConfig);
	UActorBrowserConfig::~UActorBrowserConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SceneOutliner_Private_ActorBrowsingModeSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SceneOutliner_Private_ActorBrowsingModeSettings_h_Statics::ScriptStructInfo[] = {
		{ FActorBrowsingModeConfig::StaticStruct, Z_Construct_UScriptStruct_FActorBrowsingModeConfig_Statics::NewStructOps, TEXT("ActorBrowsingModeConfig"), &Z_Registration_Info_UScriptStruct_ActorBrowsingModeConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorBrowsingModeConfig), 258692366U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SceneOutliner_Private_ActorBrowsingModeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorBrowserConfig, UActorBrowserConfig::StaticClass, TEXT("UActorBrowserConfig"), &Z_Registration_Info_UClass_UActorBrowserConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorBrowserConfig), 1527976784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SceneOutliner_Private_ActorBrowsingModeSettings_h_3867154662(TEXT("/Script/SceneOutliner"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SceneOutliner_Private_ActorBrowsingModeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SceneOutliner_Private_ActorBrowsingModeSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SceneOutliner_Private_ActorBrowsingModeSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SceneOutliner_Private_ActorBrowsingModeSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
