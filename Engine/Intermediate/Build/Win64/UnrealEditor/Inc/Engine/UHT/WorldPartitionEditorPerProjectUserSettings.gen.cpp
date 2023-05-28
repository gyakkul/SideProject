// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionEditorPerProjectUserSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldPartitionPerWorldSettings;
class UScriptStruct* FWorldPartitionPerWorldSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionPerWorldSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldPartitionPerWorldSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WorldPartitionPerWorldSettings"));
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionPerWorldSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWorldPartitionPerWorldSettings>()
{
	return FWorldPartitionPerWorldSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedEditorRegions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedEditorRegions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedEditorRegions;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LoadedEditorLocationVolumes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedEditorLocationVolumes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedEditorLocationVolumes;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotLoadedDataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotLoadedDataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NotLoadedDataLayers;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LoadedDataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedDataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedDataLayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldPartitionPerWorldSettings>();
	}
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedEditorRegions_Inner = { "LoadedEditorRegions", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedEditorRegions_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedEditorRegions = { "LoadedEditorRegions", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldPartitionPerWorldSettings, LoadedEditorRegions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedEditorRegions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedEditorRegions_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedEditorLocationVolumes_Inner = { "LoadedEditorLocationVolumes", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedEditorLocationVolumes_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedEditorLocationVolumes = { "LoadedEditorLocationVolumes", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldPartitionPerWorldSettings, LoadedEditorLocationVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedEditorLocationVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedEditorLocationVolumes_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_NotLoadedDataLayers_Inner = { "NotLoadedDataLayers", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_NotLoadedDataLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_NotLoadedDataLayers = { "NotLoadedDataLayers", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldPartitionPerWorldSettings, NotLoadedDataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_NotLoadedDataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_NotLoadedDataLayers_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedDataLayers_Inner = { "LoadedDataLayers", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedDataLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedDataLayers = { "LoadedDataLayers", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldPartitionPerWorldSettings, LoadedDataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedDataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedDataLayers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedEditorRegions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedEditorRegions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedEditorLocationVolumes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedEditorLocationVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_NotLoadedDataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_NotLoadedDataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedDataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewProp_LoadedDataLayers,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"WorldPartitionPerWorldSettings",
		sizeof(FWorldPartitionPerWorldSettings),
		alignof(FWorldPartitionPerWorldSettings),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldPartitionPerWorldSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldPartitionPerWorldSettings.InnerSingleton, Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldPartitionPerWorldSettings.InnerSingleton;
	}
	void UWorldPartitionEditorPerProjectUserSettings::StaticRegisterNativesUWorldPartitionEditorPerProjectUserSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionEditorPerProjectUserSettings);
	UClass* Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_NoRegister()
	{
		return UWorldPartitionEditorPerProjectUserSettings::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideEditorDataLayers_MetaData[];
#endif
		static void NewProp_bHideEditorDataLayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideEditorDataLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideRuntimeDataLayers_MetaData[];
#endif
		static void NewProp_bHideRuntimeDataLayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideRuntimeDataLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideDataLayerActors_MetaData[];
#endif
		static void NewProp_bHideDataLayerActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideDataLayerActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideUnloadedActors_MetaData[];
#endif
		static void NewProp_bHideUnloadedActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideUnloadedActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOnlySelectedActors_MetaData[];
#endif
		static void NewProp_bShowOnlySelectedActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOnlySelectedActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHighlightSelectedDataLayers_MetaData[];
#endif
		static void NewProp_bHighlightSelectedDataLayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighlightSelectedDataLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideLevelInstanceContent_MetaData[];
#endif
		static void NewProp_bHideLevelInstanceContent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLevelInstanceContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableLoadingOfLastLoadedRegions_MetaData[];
#endif
		static void NewProp_bDisableLoadingOfLastLoadedRegions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableLoadingOfLastLoadedRegions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBugItGoLoadRegion_MetaData[];
#endif
		static void NewProp_bBugItGoLoadRegion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBugItGoLoadRegion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowCellCoords_MetaData[];
#endif
		static void NewProp_bShowCellCoords_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCellCoords;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerWorldEditorSettings_ValueProp;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PerWorldEditorSettings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerWorldEditorSettings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerWorldEditorSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideEditorDataLayers_MetaData[] = {
		{ "Comment", "/** True when the Data Layer Outliner is displaying Editor Data Layers */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
		{ "ToolTip", "True when the Data Layer Outliner is displaying Editor Data Layers" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideEditorDataLayers_SetBit(void* Obj)
	{
		((UWorldPartitionEditorPerProjectUserSettings*)Obj)->bHideEditorDataLayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideEditorDataLayers = { "bHideEditorDataLayers", nullptr, (EPropertyFlags)0x0010000800004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UWorldPartitionEditorPerProjectUserSettings), &Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideEditorDataLayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideEditorDataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideEditorDataLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideRuntimeDataLayers_MetaData[] = {
		{ "Comment", "/** True when the Data Layer Outliner is displaying Runtime Data Layers */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
		{ "ToolTip", "True when the Data Layer Outliner is displaying Runtime Data Layers" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideRuntimeDataLayers_SetBit(void* Obj)
	{
		((UWorldPartitionEditorPerProjectUserSettings*)Obj)->bHideRuntimeDataLayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideRuntimeDataLayers = { "bHideRuntimeDataLayers", nullptr, (EPropertyFlags)0x0010000800004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UWorldPartitionEditorPerProjectUserSettings), &Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideRuntimeDataLayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideRuntimeDataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideRuntimeDataLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideDataLayerActors_MetaData[] = {
		{ "Comment", "/** True when the Data Layer Outliner is not displaying actors */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
		{ "ToolTip", "True when the Data Layer Outliner is not displaying actors" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideDataLayerActors_SetBit(void* Obj)
	{
		((UWorldPartitionEditorPerProjectUserSettings*)Obj)->bHideDataLayerActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideDataLayerActors = { "bHideDataLayerActors", nullptr, (EPropertyFlags)0x0010000800004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UWorldPartitionEditorPerProjectUserSettings), &Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideDataLayerActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideDataLayerActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideDataLayerActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideUnloadedActors_MetaData[] = {
		{ "Comment", "/** True when the Data Layer Outliner is not displaying unloaded actors */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
		{ "ToolTip", "True when the Data Layer Outliner is not displaying unloaded actors" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideUnloadedActors_SetBit(void* Obj)
	{
		((UWorldPartitionEditorPerProjectUserSettings*)Obj)->bHideUnloadedActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideUnloadedActors = { "bHideUnloadedActors", nullptr, (EPropertyFlags)0x0010000800004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UWorldPartitionEditorPerProjectUserSettings), &Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideUnloadedActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideUnloadedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideUnloadedActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bShowOnlySelectedActors_MetaData[] = {
		{ "Comment", "/** True when the Data Layer Outliner is only displaying actors and datalayers for selected actors */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
		{ "ToolTip", "True when the Data Layer Outliner is only displaying actors and datalayers for selected actors" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bShowOnlySelectedActors_SetBit(void* Obj)
	{
		((UWorldPartitionEditorPerProjectUserSettings*)Obj)->bShowOnlySelectedActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bShowOnlySelectedActors = { "bShowOnlySelectedActors", nullptr, (EPropertyFlags)0x0010000800004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UWorldPartitionEditorPerProjectUserSettings), &Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bShowOnlySelectedActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bShowOnlySelectedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bShowOnlySelectedActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHighlightSelectedDataLayers_MetaData[] = {
		{ "Comment", "/** True when the Data Layer Outliner highlights Data Layers containing actors that are currently selected */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
		{ "ToolTip", "True when the Data Layer Outliner highlights Data Layers containing actors that are currently selected" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHighlightSelectedDataLayers_SetBit(void* Obj)
	{
		((UWorldPartitionEditorPerProjectUserSettings*)Obj)->bHighlightSelectedDataLayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHighlightSelectedDataLayers = { "bHighlightSelectedDataLayers", nullptr, (EPropertyFlags)0x0010000800004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UWorldPartitionEditorPerProjectUserSettings), &Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHighlightSelectedDataLayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHighlightSelectedDataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHighlightSelectedDataLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideLevelInstanceContent_MetaData[] = {
		{ "Comment", "/** True when the Data Layer Outliner is not displaying Level Instance content */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
		{ "ToolTip", "True when the Data Layer Outliner is not displaying Level Instance content" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideLevelInstanceContent_SetBit(void* Obj)
	{
		((UWorldPartitionEditorPerProjectUserSettings*)Obj)->bHideLevelInstanceContent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideLevelInstanceContent = { "bHideLevelInstanceContent", nullptr, (EPropertyFlags)0x0010000800004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UWorldPartitionEditorPerProjectUserSettings), &Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideLevelInstanceContent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideLevelInstanceContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideLevelInstanceContent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bDisableLoadingOfLastLoadedRegions_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bDisableLoadingOfLastLoadedRegions_SetBit(void* Obj)
	{
		((UWorldPartitionEditorPerProjectUserSettings*)Obj)->bDisableLoadingOfLastLoadedRegions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bDisableLoadingOfLastLoadedRegions = { "bDisableLoadingOfLastLoadedRegions", nullptr, (EPropertyFlags)0x0040000800004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UWorldPartitionEditorPerProjectUserSettings), &Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bDisableLoadingOfLastLoadedRegions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bDisableLoadingOfLastLoadedRegions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bDisableLoadingOfLastLoadedRegions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bBugItGoLoadRegion_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bBugItGoLoadRegion_SetBit(void* Obj)
	{
		((UWorldPartitionEditorPerProjectUserSettings*)Obj)->bBugItGoLoadRegion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bBugItGoLoadRegion = { "bBugItGoLoadRegion", nullptr, (EPropertyFlags)0x0040000800004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UWorldPartitionEditorPerProjectUserSettings), &Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bBugItGoLoadRegion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bBugItGoLoadRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bBugItGoLoadRegion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bShowCellCoords_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bShowCellCoords_SetBit(void* Obj)
	{
		((UWorldPartitionEditorPerProjectUserSettings*)Obj)->bShowCellCoords = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bShowCellCoords = { "bShowCellCoords", nullptr, (EPropertyFlags)0x0040000800004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UWorldPartitionEditorPerProjectUserSettings), &Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bShowCellCoords_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bShowCellCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bShowCellCoords_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_PerWorldEditorSettings_ValueProp = { "PerWorldEditorSettings", nullptr, (EPropertyFlags)0x0000000800004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings, METADATA_PARAMS(nullptr, 0) }; // 3921819268
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_PerWorldEditorSettings_Key_KeyProp = { "PerWorldEditorSettings_Key", nullptr, (EPropertyFlags)0x0004000800004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_PerWorldEditorSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_PerWorldEditorSettings = { "PerWorldEditorSettings", nullptr, (EPropertyFlags)0x0040000800004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionEditorPerProjectUserSettings, PerWorldEditorSettings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_PerWorldEditorSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_PerWorldEditorSettings_MetaData)) }; // 3921819268
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideEditorDataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideRuntimeDataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideDataLayerActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideUnloadedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bShowOnlySelectedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHighlightSelectedDataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bHideLevelInstanceContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bDisableLoadingOfLastLoadedRegions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bBugItGoLoadRegion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_bShowCellCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_PerWorldEditorSettings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_PerWorldEditorSettings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::NewProp_PerWorldEditorSettings,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionEditorPerProjectUserSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::ClassParams = {
		&UWorldPartitionEditorPerProjectUserSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::PropPointers), 0),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionEditorPerProjectUserSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionEditorPerProjectUserSettings.OuterSingleton, Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionEditorPerProjectUserSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionEditorPerProjectUserSettings>()
	{
		return UWorldPartitionEditorPerProjectUserSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionEditorPerProjectUserSettings);
	UWorldPartitionEditorPerProjectUserSettings::~UWorldPartitionEditorPerProjectUserSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_Statics::ScriptStructInfo[] = {
		{ FWorldPartitionPerWorldSettings::StaticStruct, Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics::NewStructOps, TEXT("WorldPartitionPerWorldSettings"), &Z_Registration_Info_UScriptStruct_WorldPartitionPerWorldSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldPartitionPerWorldSettings), 3921819268U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings, UWorldPartitionEditorPerProjectUserSettings::StaticClass, TEXT("UWorldPartitionEditorPerProjectUserSettings"), &Z_Registration_Info_UClass_UWorldPartitionEditorPerProjectUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionEditorPerProjectUserSettings), 3278328755U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_3722266707(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
