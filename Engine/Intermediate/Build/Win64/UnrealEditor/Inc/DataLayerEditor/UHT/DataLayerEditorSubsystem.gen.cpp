// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataLayer/DataLayerEditorSubsystem.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/DataLayer/ActorDataLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataLayerEditorSubsystem() {}
// Cross Module References
	DATALAYEREDITOR_API UClass* Z_Construct_UClass_UDataLayerEditorSubsystem();
	DATALAYEREDITOR_API UClass* Z_Construct_UClass_UDataLayerEditorSubsystem_NoRegister();
	DATALAYEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDataLayerCreationParameters();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AWorldDataLayers_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayerAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_DataLayer_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorDataLayer();
	UPackage* Z_Construct_UPackage__Script_DataLayerEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataLayerCreationParameters;
class UScriptStruct* FDataLayerCreationParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataLayerCreationParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataLayerCreationParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataLayerCreationParameters, (UObject*)Z_Construct_UPackage__Script_DataLayerEditor(), TEXT("DataLayerCreationParameters"));
	}
	return Z_Registration_Info_UScriptStruct_DataLayerCreationParameters.OuterSingleton;
}
template<> DATALAYEREDITOR_API UScriptStruct* StaticStruct<FDataLayerCreationParameters>()
{
	return FDataLayerCreationParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataLayerAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldDataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorldDataLayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataLayerCreationParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics::NewProp_DataLayerAsset_MetaData[] = {
		{ "Category", "Data Layer" },
		{ "Comment", "// Required. Will assign the asset to the created instance.\n" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Required. Will assign the asset to the created instance." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics::NewProp_DataLayerAsset = { "DataLayerAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataLayerCreationParameters, DataLayerAsset), Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics::NewProp_DataLayerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics::NewProp_DataLayerAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics::NewProp_WorldDataLayers_MetaData[] = {
		{ "Category", "Data Layer" },
		{ "Comment", "// Optional. Will default at the level WorldDataLayers if unset.\n" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Optional. Will default at the level WorldDataLayers if unset." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics::NewProp_WorldDataLayers = { "WorldDataLayers", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataLayerCreationParameters, WorldDataLayers), Z_Construct_UClass_AWorldDataLayers_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics::NewProp_WorldDataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics::NewProp_WorldDataLayers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics::NewProp_DataLayerAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics::NewProp_WorldDataLayers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataLayerEditor,
		nullptr,
		&NewStructOps,
		"DataLayerCreationParameters",
		sizeof(FDataLayerCreationParameters),
		alignof(FDataLayerCreationParameters),
		Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataLayerCreationParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_DataLayerCreationParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataLayerCreationParameters.InnerSingleton, Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataLayerCreationParameters.InnerSingleton;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execCreateDataLayer)
	{
		P_GET_OBJECT(UDataLayerInstance,Z_Param_ParentDataLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataLayerInstance**)Z_Param__Result=P_THIS->CreateDataLayer(Z_Param_ParentDataLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execRenameDataLayer)
	{
		P_GET_OBJECT(UDataLayerInstance,Z_Param_DataLayer);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NewDataLayerLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RenameDataLayer(Z_Param_DataLayer,Z_Param_Out_NewDataLayerLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execGetDataLayerFromLabel)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DataLayerLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataLayerInstance**)Z_Param__Result=P_THIS->GetDataLayerFromLabel(Z_Param_Out_DataLayerLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execGetDataLayer)
	{
		P_GET_STRUCT_REF(FActorDataLayer,Z_Param_Out_ActorDataLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataLayerInstance**)Z_Param__Result=P_THIS->GetDataLayer(Z_Param_Out_ActorDataLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execToggleDataLayersIsDynamicallyLoadedInEditor)
	{
		P_GET_TARRAY_REF(UDEPRECATED_DataLayer*,Z_Param_Out_DataLayers);
		P_GET_UBOOL(Z_Param_bIsFromUserChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ToggleDataLayersIsDynamicallyLoadedInEditor(Z_Param_Out_DataLayers,Z_Param_bIsFromUserChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execToggleDataLayerIsDynamicallyLoadedInEditor)
	{
		P_GET_OBJECT(UDEPRECATED_DataLayer,Z_Param_DataLayer);
		P_GET_UBOOL(Z_Param_bIsFromUserChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ToggleDataLayerIsDynamicallyLoadedInEditor(Z_Param_DataLayer,Z_Param_bIsFromUserChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execSetDataLayersIsDynamicallyLoadedInEditor)
	{
		P_GET_TARRAY_REF(UDEPRECATED_DataLayer*,Z_Param_Out_DataLayers);
		P_GET_UBOOL(Z_Param_bIsLoadedInEditor);
		P_GET_UBOOL(Z_Param_bIsFromUserChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetDataLayersIsDynamicallyLoadedInEditor(Z_Param_Out_DataLayers,Z_Param_bIsLoadedInEditor,Z_Param_bIsFromUserChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execSetDataLayerIsDynamicallyLoadedInEditor)
	{
		P_GET_OBJECT(UDEPRECATED_DataLayer,Z_Param_DataLayer);
		P_GET_UBOOL(Z_Param_bIsLoadedInEditor);
		P_GET_UBOOL(Z_Param_bIsFromUserChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetDataLayerIsDynamicallyLoadedInEditor(Z_Param_DataLayer,Z_Param_bIsLoadedInEditor,Z_Param_bIsFromUserChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execUpdateActorAllViewsVisibility)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateActorAllViewsVisibility(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execUpdateAllViewVisibility)
	{
		P_GET_OBJECT(UDEPRECATED_DataLayer,Z_Param_DataLayerThatChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAllViewVisibility(Z_Param_DataLayerThatChanged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execGetAllDataLayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDataLayerInstance*>*)Z_Param__Result=P_THIS->GetAllDataLayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execDeleteDataLayer)
	{
		P_GET_OBJECT(UDataLayerInstance,Z_Param_DataLayerToDelete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteDataLayer(Z_Param_DataLayerToDelete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execDeleteDataLayers)
	{
		P_GET_TARRAY_REF(UDataLayerInstance*,Z_Param_Out_DataLayersToDelete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteDataLayers(Z_Param_Out_DataLayersToDelete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execSetParentDataLayer)
	{
		P_GET_OBJECT(UDataLayerInstance,Z_Param_DataLayer);
		P_GET_OBJECT(UDataLayerInstance,Z_Param_ParentDataLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetParentDataLayer(Z_Param_DataLayer,Z_Param_ParentDataLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execCreateDataLayerInstance)
	{
		P_GET_STRUCT_REF(FDataLayerCreationParameters,Z_Param_Out_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataLayerInstance**)Z_Param__Result=P_THIS->CreateDataLayerInstance(Z_Param_Out_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execGetDataLayerInstances)
	{
		P_GET_TARRAY(UDataLayerAsset*,Z_Param_DataLayerAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDataLayerInstance*>*)Z_Param__Result=P_THIS->GetDataLayerInstances(Z_Param_DataLayerAssets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execGetDataLayerInstance)
	{
		P_GET_OBJECT(UDataLayerAsset,Z_Param_DataLayerAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataLayerInstance**)Z_Param__Result=P_THIS->GetDataLayerInstance(Z_Param_DataLayerAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execMakeAllDataLayersVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakeAllDataLayersVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execToggleDataLayersIsLoadedInEditor)
	{
		P_GET_TARRAY_REF(UDataLayerInstance*,Z_Param_Out_DataLayers);
		P_GET_UBOOL(Z_Param_bIsFromUserChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ToggleDataLayersIsLoadedInEditor(Z_Param_Out_DataLayers,Z_Param_bIsFromUserChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execToggleDataLayerIsLoadedInEditor)
	{
		P_GET_OBJECT(UDataLayerInstance,Z_Param_DataLayer);
		P_GET_UBOOL(Z_Param_bIsFromUserChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ToggleDataLayerIsLoadedInEditor(Z_Param_DataLayer,Z_Param_bIsFromUserChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execSetDataLayersIsLoadedInEditor)
	{
		P_GET_TARRAY_REF(UDataLayerInstance*,Z_Param_Out_DataLayers);
		P_GET_UBOOL(Z_Param_bIsLoadedInEditor);
		P_GET_UBOOL(Z_Param_bIsFromUserChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetDataLayersIsLoadedInEditor(Z_Param_Out_DataLayers,Z_Param_bIsLoadedInEditor,Z_Param_bIsFromUserChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execSetDataLayerIsLoadedInEditor)
	{
		P_GET_OBJECT(UDataLayerInstance,Z_Param_DataLayer);
		P_GET_UBOOL(Z_Param_bIsLoadedInEditor);
		P_GET_UBOOL(Z_Param_bIsFromUserChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetDataLayerIsLoadedInEditor(Z_Param_DataLayer,Z_Param_bIsLoadedInEditor,Z_Param_bIsFromUserChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execToggleDataLayersVisibility)
	{
		P_GET_TARRAY_REF(UDataLayerInstance*,Z_Param_Out_DataLayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDataLayersVisibility(Z_Param_Out_DataLayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execToggleDataLayerVisibility)
	{
		P_GET_OBJECT(UDataLayerInstance,Z_Param_DataLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDataLayerVisibility(Z_Param_DataLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execSetDataLayersVisibility)
	{
		P_GET_TARRAY_REF(UDataLayerInstance*,Z_Param_Out_DataLayers);
		P_GET_UBOOL(Z_Param_bIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataLayersVisibility(Z_Param_Out_DataLayers,Z_Param_bIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execSetDataLayerVisibility)
	{
		P_GET_OBJECT(UDataLayerInstance,Z_Param_DataLayer);
		P_GET_UBOOL(Z_Param_bIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataLayerVisibility(Z_Param_DataLayer,Z_Param_bIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execGetActorsFromDataLayers)
	{
		P_GET_TARRAY_REF(UDataLayerInstance*,Z_Param_Out_DataLayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetActorsFromDataLayers(Z_Param_Out_DataLayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execGetActorsFromDataLayer)
	{
		P_GET_OBJECT(UDataLayerInstance,Z_Param_DataLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetActorsFromDataLayer(Z_Param_DataLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execAppendActorsFromDataLayers)
	{
		P_GET_TARRAY_REF(UDataLayerInstance*,Z_Param_Out_DataLayers);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_InOutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AppendActorsFromDataLayers(Z_Param_Out_DataLayers,Z_Param_Out_InOutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execAppendActorsFromDataLayer)
	{
		P_GET_OBJECT(UDataLayerInstance,Z_Param_DataLayer);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_InOutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AppendActorsFromDataLayer(Z_Param_DataLayer,Z_Param_Out_InOutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execUpdateAllActorsVisibility)
	{
		P_GET_UBOOL(Z_Param_bNotifySelectionChange);
		P_GET_UBOOL(Z_Param_bRedrawViewports);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateAllActorsVisibility(Z_Param_bNotifySelectionChange,Z_Param_bRedrawViewports);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execUpdateActorVisibility)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL_REF(Z_Param_Out_bOutSelectionChanged);
		P_GET_UBOOL_REF(Z_Param_Out_bOutActorModified);
		P_GET_UBOOL(Z_Param_bNotifySelectionChange);
		P_GET_UBOOL(Z_Param_bRedrawViewports);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateActorVisibility(Z_Param_Actor,Z_Param_Out_bOutSelectionChanged,Z_Param_Out_bOutActorModified,Z_Param_bNotifySelectionChange,Z_Param_bRedrawViewports);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execSelectActorsInDataLayers)
	{
		P_GET_TARRAY_REF(UDataLayerInstance*,Z_Param_Out_DataLayers);
		P_GET_UBOOL(Z_Param_bSelect);
		P_GET_UBOOL(Z_Param_bNotify);
		P_GET_UBOOL(Z_Param_bSelectEvenIfHidden);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SelectActorsInDataLayers(Z_Param_Out_DataLayers,Z_Param_bSelect,Z_Param_bNotify,Z_Param_bSelectEvenIfHidden);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execSelectActorsInDataLayer)
	{
		P_GET_OBJECT(UDataLayerInstance,Z_Param_DataLayer);
		P_GET_UBOOL(Z_Param_bSelect);
		P_GET_UBOOL(Z_Param_bNotify);
		P_GET_UBOOL(Z_Param_bSelectEvenIfHidden);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SelectActorsInDataLayer(Z_Param_DataLayer,Z_Param_bSelect,Z_Param_bNotify,Z_Param_bSelectEvenIfHidden);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execRemoveSelectedActorsFromDataLayers)
	{
		P_GET_TARRAY_REF(UDataLayerInstance*,Z_Param_Out_DataLayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSelectedActorsFromDataLayers(Z_Param_Out_DataLayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execRemoveSelectedActorsFromDataLayer)
	{
		P_GET_OBJECT(UDataLayerInstance,Z_Param_DataLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSelectedActorsFromDataLayer(Z_Param_DataLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execAddSelectedActorsToDataLayers)
	{
		P_GET_TARRAY_REF(UDataLayerInstance*,Z_Param_Out_DataLayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddSelectedActorsToDataLayers(Z_Param_Out_DataLayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execAddSelectedActorsToDataLayer)
	{
		P_GET_OBJECT(UDataLayerInstance,Z_Param_DataLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddSelectedActorsToDataLayer(Z_Param_DataLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execRemoveActorsFromDataLayers)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_TARRAY_REF(UDataLayerInstance*,Z_Param_Out_DataLayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveActorsFromDataLayers(Z_Param_Out_Actors,Z_Param_Out_DataLayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execRemoveActorsFromDataLayer)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_OBJECT(UDataLayerInstance,Z_Param_DataLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveActorsFromDataLayer(Z_Param_Out_Actors,Z_Param_DataLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execAddActorsToDataLayers)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_TARRAY_REF(UDataLayerInstance*,Z_Param_Out_DataLayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddActorsToDataLayers(Z_Param_Out_Actors,Z_Param_Out_DataLayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execAddActorsToDataLayer)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_OBJECT(UDataLayerInstance,Z_Param_DataLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddActorsToDataLayer(Z_Param_Out_Actors,Z_Param_DataLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execRemoveActorsFromAllDataLayers)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveActorsFromAllDataLayers(Z_Param_Out_Actors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execRemoveActorFromAllDataLayers)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveActorFromAllDataLayers(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execRemoveActorFromDataLayers)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_TARRAY_REF(UDataLayerInstance*,Z_Param_Out_DataLayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveActorFromDataLayers(Z_Param_Actor,Z_Param_Out_DataLayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execRemoveActorFromDataLayer)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(UDataLayerInstance,Z_Param_DataLayerToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveActorFromDataLayer(Z_Param_Actor,Z_Param_DataLayerToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execAddActorToDataLayers)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_TARRAY_REF(UDataLayerInstance*,Z_Param_Out_DataLayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddActorToDataLayers(Z_Param_Actor,Z_Param_Out_DataLayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execAddActorToDataLayer)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(UDataLayerInstance,Z_Param_DataLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddActorToDataLayer(Z_Param_Actor,Z_Param_DataLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerEditorSubsystem::execIsActorValidForDataLayer)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActorValidForDataLayer(Z_Param_Actor);
		P_NATIVE_END;
	}
	void UDataLayerEditorSubsystem::StaticRegisterNativesUDataLayerEditorSubsystem()
	{
		UClass* Class = UDataLayerEditorSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActorsToDataLayer", &UDataLayerEditorSubsystem::execAddActorsToDataLayer },
			{ "AddActorsToDataLayers", &UDataLayerEditorSubsystem::execAddActorsToDataLayers },
			{ "AddActorToDataLayer", &UDataLayerEditorSubsystem::execAddActorToDataLayer },
			{ "AddActorToDataLayers", &UDataLayerEditorSubsystem::execAddActorToDataLayers },
			{ "AddSelectedActorsToDataLayer", &UDataLayerEditorSubsystem::execAddSelectedActorsToDataLayer },
			{ "AddSelectedActorsToDataLayers", &UDataLayerEditorSubsystem::execAddSelectedActorsToDataLayers },
			{ "AppendActorsFromDataLayer", &UDataLayerEditorSubsystem::execAppendActorsFromDataLayer },
			{ "AppendActorsFromDataLayers", &UDataLayerEditorSubsystem::execAppendActorsFromDataLayers },
			{ "CreateDataLayer", &UDataLayerEditorSubsystem::execCreateDataLayer },
			{ "CreateDataLayerInstance", &UDataLayerEditorSubsystem::execCreateDataLayerInstance },
			{ "DeleteDataLayer", &UDataLayerEditorSubsystem::execDeleteDataLayer },
			{ "DeleteDataLayers", &UDataLayerEditorSubsystem::execDeleteDataLayers },
			{ "GetActorsFromDataLayer", &UDataLayerEditorSubsystem::execGetActorsFromDataLayer },
			{ "GetActorsFromDataLayers", &UDataLayerEditorSubsystem::execGetActorsFromDataLayers },
			{ "GetAllDataLayers", &UDataLayerEditorSubsystem::execGetAllDataLayers },
			{ "GetDataLayer", &UDataLayerEditorSubsystem::execGetDataLayer },
			{ "GetDataLayerFromLabel", &UDataLayerEditorSubsystem::execGetDataLayerFromLabel },
			{ "GetDataLayerInstance", &UDataLayerEditorSubsystem::execGetDataLayerInstance },
			{ "GetDataLayerInstances", &UDataLayerEditorSubsystem::execGetDataLayerInstances },
			{ "IsActorValidForDataLayer", &UDataLayerEditorSubsystem::execIsActorValidForDataLayer },
			{ "MakeAllDataLayersVisible", &UDataLayerEditorSubsystem::execMakeAllDataLayersVisible },
			{ "RemoveActorFromAllDataLayers", &UDataLayerEditorSubsystem::execRemoveActorFromAllDataLayers },
			{ "RemoveActorFromDataLayer", &UDataLayerEditorSubsystem::execRemoveActorFromDataLayer },
			{ "RemoveActorFromDataLayers", &UDataLayerEditorSubsystem::execRemoveActorFromDataLayers },
			{ "RemoveActorsFromAllDataLayers", &UDataLayerEditorSubsystem::execRemoveActorsFromAllDataLayers },
			{ "RemoveActorsFromDataLayer", &UDataLayerEditorSubsystem::execRemoveActorsFromDataLayer },
			{ "RemoveActorsFromDataLayers", &UDataLayerEditorSubsystem::execRemoveActorsFromDataLayers },
			{ "RemoveSelectedActorsFromDataLayer", &UDataLayerEditorSubsystem::execRemoveSelectedActorsFromDataLayer },
			{ "RemoveSelectedActorsFromDataLayers", &UDataLayerEditorSubsystem::execRemoveSelectedActorsFromDataLayers },
			{ "RenameDataLayer", &UDataLayerEditorSubsystem::execRenameDataLayer },
			{ "SelectActorsInDataLayer", &UDataLayerEditorSubsystem::execSelectActorsInDataLayer },
			{ "SelectActorsInDataLayers", &UDataLayerEditorSubsystem::execSelectActorsInDataLayers },
			{ "SetDataLayerIsDynamicallyLoadedInEditor", &UDataLayerEditorSubsystem::execSetDataLayerIsDynamicallyLoadedInEditor },
			{ "SetDataLayerIsLoadedInEditor", &UDataLayerEditorSubsystem::execSetDataLayerIsLoadedInEditor },
			{ "SetDataLayersIsDynamicallyLoadedInEditor", &UDataLayerEditorSubsystem::execSetDataLayersIsDynamicallyLoadedInEditor },
			{ "SetDataLayersIsLoadedInEditor", &UDataLayerEditorSubsystem::execSetDataLayersIsLoadedInEditor },
			{ "SetDataLayersVisibility", &UDataLayerEditorSubsystem::execSetDataLayersVisibility },
			{ "SetDataLayerVisibility", &UDataLayerEditorSubsystem::execSetDataLayerVisibility },
			{ "SetParentDataLayer", &UDataLayerEditorSubsystem::execSetParentDataLayer },
			{ "ToggleDataLayerIsDynamicallyLoadedInEditor", &UDataLayerEditorSubsystem::execToggleDataLayerIsDynamicallyLoadedInEditor },
			{ "ToggleDataLayerIsLoadedInEditor", &UDataLayerEditorSubsystem::execToggleDataLayerIsLoadedInEditor },
			{ "ToggleDataLayersIsDynamicallyLoadedInEditor", &UDataLayerEditorSubsystem::execToggleDataLayersIsDynamicallyLoadedInEditor },
			{ "ToggleDataLayersIsLoadedInEditor", &UDataLayerEditorSubsystem::execToggleDataLayersIsLoadedInEditor },
			{ "ToggleDataLayersVisibility", &UDataLayerEditorSubsystem::execToggleDataLayersVisibility },
			{ "ToggleDataLayerVisibility", &UDataLayerEditorSubsystem::execToggleDataLayerVisibility },
			{ "UpdateActorAllViewsVisibility", &UDataLayerEditorSubsystem::execUpdateActorAllViewsVisibility },
			{ "UpdateActorVisibility", &UDataLayerEditorSubsystem::execUpdateActorVisibility },
			{ "UpdateAllActorsVisibility", &UDataLayerEditorSubsystem::execUpdateAllActorsVisibility },
			{ "UpdateAllViewVisibility", &UDataLayerEditorSubsystem::execUpdateAllViewVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics
	{
		struct DataLayerEditorSubsystem_eventAddActorsToDataLayer_Parms
		{
			TArray<AActor*> Actors;
			UDataLayerInstance* DataLayer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventAddActorsToDataLayer_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics::NewProp_DataLayer = { "DataLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventAddActorsToDataLayer_Parms, DataLayer), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventAddActorsToDataLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventAddActorsToDataLayer_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics::NewProp_DataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Add the actors to the DataLayer\n\x09 *\n\x09 * @param\x09""Actors\x09\x09The actors to add to the DataLayer\n\x09 * @param\x09""DataLayer\x09The DataLayer to add to\n\x09 * @return\x09\x09\x09\x09true if at least one actor was added to the DataLayer.  false is returned if all the actors already belonged to the DataLayer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Add the actors to the DataLayer\n\n@param       Actors          The actors to add to the DataLayer\n@param       DataLayer       The DataLayer to add to\n@return                              true if at least one actor was added to the DataLayer.  false is returned if all the actors already belonged to the DataLayer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "AddActorsToDataLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics::DataLayerEditorSubsystem_eventAddActorsToDataLayer_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics
	{
		struct DataLayerEditorSubsystem_eventAddActorsToDataLayers_Parms
		{
			TArray<AActor*> Actors;
			TArray<UDataLayerInstance*> DataLayers;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventAddActorsToDataLayers_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::NewProp_DataLayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventAddActorsToDataLayers_Parms, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::NewProp_DataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::NewProp_DataLayers_MetaData)) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventAddActorsToDataLayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventAddActorsToDataLayers_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::NewProp_DataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Add the actors to the DataLayers\n\x09 *\n\x09 * @param\x09""Actors\x09\x09The actors to add to the DataLayers\n\x09 * @param\x09""DataLayers\x09""A valid list of DataLayers.\n\x09 * @return\x09\x09\x09\x09true if at least one actor was added to at least one DataLayer.  false is returned if all the actors already belonged to all specified DataLayers.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Add the actors to the DataLayers\n\n@param       Actors          The actors to add to the DataLayers\n@param       DataLayers      A valid list of DataLayers.\n@return                              true if at least one actor was added to at least one DataLayer.  false is returned if all the actors already belonged to all specified DataLayers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "AddActorsToDataLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::DataLayerEditorSubsystem_eventAddActorsToDataLayers_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayer_Statics
	{
		struct DataLayerEditorSubsystem_eventAddActorToDataLayer_Parms
		{
			AActor* Actor;
			UDataLayerInstance* DataLayer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayer_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventAddActorToDataLayer_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayer_Statics::NewProp_DataLayer = { "DataLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventAddActorToDataLayer_Parms, DataLayer), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventAddActorToDataLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventAddActorToDataLayer_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayer_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayer_Statics::NewProp_DataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Adds the actor to the DataLayer.\n\x09 *\n\x09 * @param\x09""Actor\x09\x09The actor to add to the DataLayer\n\x09 * @param\x09""DataLayer\x09The DataLayer to add the actor to\n\x09 * @return\x09\x09\x09\x09true if the actor was added.  false is returned if the actor already belongs to the DataLayer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Adds the actor to the DataLayer.\n\n@param       Actor           The actor to add to the DataLayer\n@param       DataLayer       The DataLayer to add the actor to\n@return                              true if the actor was added.  false is returned if the actor already belongs to the DataLayer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "AddActorToDataLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayer_Statics::DataLayerEditorSubsystem_eventAddActorToDataLayer_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics
	{
		struct DataLayerEditorSubsystem_eventAddActorToDataLayers_Parms
		{
			AActor* Actor;
			TArray<UDataLayerInstance*> DataLayers;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventAddActorToDataLayers_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics::NewProp_DataLayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventAddActorToDataLayers_Parms, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics::NewProp_DataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics::NewProp_DataLayers_MetaData)) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventAddActorToDataLayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventAddActorToDataLayers_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics::NewProp_DataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Adds the provided actor to the DataLayers.\n\x09 *\n\x09 * @param\x09""Actor\x09\x09The actor to add to the provided DataLayers\n\x09 * @param\x09""DataLayers\x09""A valid list of DataLayers.\n\x09 * @return\x09\x09\x09\x09true if the actor was added to at least one of the provided DataLayers.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Adds the provided actor to the DataLayers.\n\n@param       Actor           The actor to add to the provided DataLayers\n@param       DataLayers      A valid list of DataLayers.\n@return                              true if the actor was added to at least one of the provided DataLayers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "AddActorToDataLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics::DataLayerEditorSubsystem_eventAddActorToDataLayers_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayer_Statics
	{
		struct DataLayerEditorSubsystem_eventAddSelectedActorsToDataLayer_Parms
		{
			UDataLayerInstance* DataLayer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayer_Statics::NewProp_DataLayer = { "DataLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventAddSelectedActorsToDataLayer_Parms, DataLayer), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventAddSelectedActorsToDataLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventAddSelectedActorsToDataLayer_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayer_Statics::NewProp_DataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Adds selected actors to the DataLayer.\n\x09 *\n\x09 * @param\x09""DataLayer\x09""A DataLayer.\n\x09 * @return\x09\x09\x09\x09true if at least one actor was added.  false is returned if all selected actors already belong to the DataLayer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Adds selected actors to the DataLayer.\n\n@param       DataLayer       A DataLayer.\n@return                              true if at least one actor was added.  false is returned if all selected actors already belong to the DataLayer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "AddSelectedActorsToDataLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayer_Statics::DataLayerEditorSubsystem_eventAddSelectedActorsToDataLayer_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers_Statics
	{
		struct DataLayerEditorSubsystem_eventAddSelectedActorsToDataLayers_Parms
		{
			TArray<UDataLayerInstance*> DataLayers;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers_Statics::NewProp_DataLayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventAddSelectedActorsToDataLayers_Parms, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers_Statics::NewProp_DataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers_Statics::NewProp_DataLayers_MetaData)) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventAddSelectedActorsToDataLayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventAddSelectedActorsToDataLayers_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers_Statics::NewProp_DataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Adds selected actors to the DataLayers.\n\x09 *\n\x09 * @param\x09""DataLayers\x09""A valid list of DataLayers.\n\x09 * @return\x09\x09\x09\x09true if at least one actor was added.  false is returned if all selected actors already belong to the DataLayers.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Adds selected actors to the DataLayers.\n\n@param       DataLayers      A valid list of DataLayers.\n@return                              true if at least one actor was added.  false is returned if all selected actors already belong to the DataLayers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "AddSelectedActorsToDataLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers_Statics::DataLayerEditorSubsystem_eventAddSelectedActorsToDataLayers_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayer_Statics
	{
		struct DataLayerEditorSubsystem_eventAppendActorsFromDataLayer_Parms
		{
			UDataLayerInstance* DataLayer;
			TArray<AActor*> InOutActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOutActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InOutActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayer_Statics::NewProp_DataLayer = { "DataLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventAppendActorsFromDataLayer_Parms, DataLayer), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayer_Statics::NewProp_InOutActors_Inner = { "InOutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayer_Statics::NewProp_InOutActors = { "InOutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventAppendActorsFromDataLayer_Parms, InOutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayer_Statics::NewProp_DataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayer_Statics::NewProp_InOutActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayer_Statics::NewProp_InOutActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 *\x09""Appends all the actors associated with the specified DataLayer.\n\x09 *\n\x09 *\x09@param\x09""DataLayer\x09\x09\x09The DataLayer to find actors for.\n\x09 *\x09@param\x09InOutActors\x09\x09\x09The list to append the found actors to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Appends all the actors associated with the specified DataLayer.\n\n@param  DataLayer                       The DataLayer to find actors for.\n@param  InOutActors                     The list to append the found actors to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "AppendActorsFromDataLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayer_Statics::DataLayerEditorSubsystem_eventAppendActorsFromDataLayer_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers_Statics
	{
		struct DataLayerEditorSubsystem_eventAppendActorsFromDataLayers_Parms
		{
			TArray<UDataLayerInstance*> DataLayers;
			TArray<AActor*> InOutActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOutActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InOutActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers_Statics::NewProp_DataLayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventAppendActorsFromDataLayers_Parms, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers_Statics::NewProp_DataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers_Statics::NewProp_DataLayers_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers_Statics::NewProp_InOutActors_Inner = { "InOutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers_Statics::NewProp_InOutActors = { "InOutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventAppendActorsFromDataLayers_Parms, InOutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers_Statics::NewProp_DataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers_Statics::NewProp_InOutActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers_Statics::NewProp_InOutActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 *\x09""Appends all the actors associated with ANY of the specified DataLayers.\n\x09 *\n\x09 *\x09@param\x09""DataLayers\x09\x09\x09The DataLayers to find actors for.\n\x09 *\x09@param\x09InOutActors\x09\x09\x09The list to append the found actors to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Appends all the actors associated with ANY of the specified DataLayers.\n\n@param  DataLayers                      The DataLayers to find actors for.\n@param  InOutActors                     The list to append the found actors to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "AppendActorsFromDataLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers_Statics::DataLayerEditorSubsystem_eventAppendActorsFromDataLayers_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayer_Statics
	{
		struct DataLayerEditorSubsystem_eventCreateDataLayer_Parms
		{
			UDataLayerInstance* ParentDataLayer;
			UDataLayerInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentDataLayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayer_Statics::NewProp_ParentDataLayer = { "ParentDataLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventCreateDataLayer_Parms, ParentDataLayer), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventCreateDataLayer_Parms, ReturnValue), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayer_Statics::NewProp_ParentDataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "CPP_Default_ParentDataLayer", "None" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "CreateDataLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayer_Statics::DataLayerEditorSubsystem_eventCreateDataLayer_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayerInstance_Statics
	{
		struct DataLayerEditorSubsystem_eventCreateDataLayerInstance_Parms
		{
			FDataLayerCreationParameters Parameters;
			UDataLayerInstance* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayerInstance_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayerInstance_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventCreateDataLayerInstance_Parms, Parameters), Z_Construct_UScriptStruct_FDataLayerCreationParameters, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayerInstance_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayerInstance_Statics::NewProp_Parameters_MetaData)) }; // 4019086629
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayerInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventCreateDataLayerInstance_Parms, ReturnValue), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayerInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayerInstance_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayerInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayerInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Creates a UDataLayerInstance Object\n\x09 *\n\x09 * @param\x09Parameters The Data Layer Instance creation parameters\n\x09 * @return\x09The newly created UDataLayerInstance Object\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Creates a UDataLayerInstance Object\n\n@param       Parameters The Data Layer Instance creation parameters\n@return      The newly created UDataLayerInstance Object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayerInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "CreateDataLayerInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayerInstance_Statics::DataLayerEditorSubsystem_eventCreateDataLayerInstance_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayerInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayerInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayerInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayerInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayerInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayerInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayer_Statics
	{
		struct DataLayerEditorSubsystem_eventDeleteDataLayer_Parms
		{
			UDataLayerInstance* DataLayerToDelete;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayerToDelete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayer_Statics::NewProp_DataLayerToDelete = { "DataLayerToDelete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventDeleteDataLayer_Parms, DataLayerToDelete), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayer_Statics::NewProp_DataLayerToDelete,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Deletes the provided DataLayer\n\x09 *\n\x09 * @param DataLayerToDelete\x09\x09""A valid DataLayer\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Deletes the provided DataLayer\n\n@param DataLayerToDelete             A valid DataLayer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "DeleteDataLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayer_Statics::DataLayerEditorSubsystem_eventDeleteDataLayer_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayers_Statics
	{
		struct DataLayerEditorSubsystem_eventDeleteDataLayers_Parms
		{
			TArray<UDataLayerInstance*> DataLayersToDelete;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayersToDelete_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayersToDelete_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayersToDelete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayers_Statics::NewProp_DataLayersToDelete_Inner = { "DataLayersToDelete", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayers_Statics::NewProp_DataLayersToDelete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayers_Statics::NewProp_DataLayersToDelete = { "DataLayersToDelete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventDeleteDataLayers_Parms, DataLayersToDelete), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayers_Statics::NewProp_DataLayersToDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayers_Statics::NewProp_DataLayersToDelete_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayers_Statics::NewProp_DataLayersToDelete_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayers_Statics::NewProp_DataLayersToDelete,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Deletes all of the provided DataLayers\n\x09 *\n\x09 * @param DataLayersToDelete\x09""A valid list of DataLayer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Deletes all of the provided DataLayers\n\n@param DataLayersToDelete    A valid list of DataLayer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "DeleteDataLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayers_Statics::DataLayerEditorSubsystem_eventDeleteDataLayers_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayer_Statics
	{
		struct DataLayerEditorSubsystem_eventGetActorsFromDataLayer_Parms
		{
			UDataLayerInstance* DataLayer;
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayer_Statics::NewProp_DataLayer = { "DataLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventGetActorsFromDataLayer_Parms, DataLayer), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayer_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventGetActorsFromDataLayer_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayer_Statics::NewProp_DataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayer_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 *\x09Gets all the actors associated with the specified DataLayer. Analog to AppendActorsFromDataLayer but it returns rather than appends the actors.\n\x09 *\n\x09 *\x09@param\x09""DataLayer\x09\x09\x09The DataLayer to find actors for.\n\x09 *\x09@return\x09\x09\x09\x09\x09\x09The list to assign the found actors to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Gets all the actors associated with the specified DataLayer. Analog to AppendActorsFromDataLayer but it returns rather than appends the actors.\n\n@param  DataLayer                       The DataLayer to find actors for.\n@return                                         The list to assign the found actors to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "GetActorsFromDataLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayer_Statics::DataLayerEditorSubsystem_eventGetActorsFromDataLayer_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers_Statics
	{
		struct DataLayerEditorSubsystem_eventGetActorsFromDataLayers_Parms
		{
			TArray<UDataLayerInstance*> DataLayers;
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers_Statics::NewProp_DataLayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventGetActorsFromDataLayers_Parms, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers_Statics::NewProp_DataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers_Statics::NewProp_DataLayers_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventGetActorsFromDataLayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers_Statics::NewProp_DataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 *\x09Gets all the actors associated with ANY of the specified DataLayers. Analog to AppendActorsFromDataLayers but it returns rather than appends the actors.\n\x09 *\n\x09 *\x09@param\x09""DataLayers\x09\x09\x09The DataLayers to find actors for.\n\x09 *\x09@return\x09\x09\x09\x09\x09\x09The list to assign the found actors to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Gets all the actors associated with ANY of the specified DataLayers. Analog to AppendActorsFromDataLayers but it returns rather than appends the actors.\n\n@param  DataLayers                      The DataLayers to find actors for.\n@return                                         The list to assign the found actors to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "GetActorsFromDataLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers_Statics::DataLayerEditorSubsystem_eventGetActorsFromDataLayers_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_GetAllDataLayers_Statics
	{
		struct DataLayerEditorSubsystem_eventGetAllDataLayers_Parms
		{
			TArray<UDataLayerInstance*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetAllDataLayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetAllDataLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventGetAllDataLayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_GetAllDataLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_GetAllDataLayers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_GetAllDataLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_GetAllDataLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Returns all Data Layers\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Returns all Data Layers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetAllDataLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "GetAllDataLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetAllDataLayers_Statics::DataLayerEditorSubsystem_eventGetAllDataLayers_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_GetAllDataLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetAllDataLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetAllDataLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetAllDataLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_GetAllDataLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_GetAllDataLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayer_Statics
	{
		struct DataLayerEditorSubsystem_eventGetDataLayer_Parms
		{
			FActorDataLayer ActorDataLayer;
			UDataLayerInstance* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorDataLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorDataLayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayer_Statics::NewProp_ActorDataLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayer_Statics::NewProp_ActorDataLayer = { "ActorDataLayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventGetDataLayer_Parms, ActorDataLayer), Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayer_Statics::NewProp_ActorDataLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayer_Statics::NewProp_ActorDataLayer_MetaData)) }; // 1259195716
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventGetDataLayer_Parms, ReturnValue), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayer_Statics::NewProp_ActorDataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "GetDataLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayer_Statics::DataLayerEditorSubsystem_eventGetDataLayer_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerFromLabel_Statics
	{
		struct DataLayerEditorSubsystem_eventGetDataLayerFromLabel_Parms
		{
			FName DataLayerLabel;
			UDataLayerInstance* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerLabel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DataLayerLabel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerFromLabel_Statics::NewProp_DataLayerLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerFromLabel_Statics::NewProp_DataLayerLabel = { "DataLayerLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventGetDataLayerFromLabel_Parms, DataLayerLabel), METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerFromLabel_Statics::NewProp_DataLayerLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerFromLabel_Statics::NewProp_DataLayerLabel_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerFromLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventGetDataLayerFromLabel_Parms, ReturnValue), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerFromLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerFromLabel_Statics::NewProp_DataLayerLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerFromLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerFromLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerFromLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "GetDataLayerFromLabel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerFromLabel_Statics::DataLayerEditorSubsystem_eventGetDataLayerFromLabel_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerFromLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerFromLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerFromLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerFromLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerFromLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerFromLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstance_Statics
	{
		struct DataLayerEditorSubsystem_eventGetDataLayerInstance_Parms
		{
			const UDataLayerAsset* DataLayerAsset;
			UDataLayerInstance* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayerAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstance_Statics::NewProp_DataLayerAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstance_Statics::NewProp_DataLayerAsset = { "DataLayerAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventGetDataLayerInstance_Parms, DataLayerAsset), Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstance_Statics::NewProp_DataLayerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstance_Statics::NewProp_DataLayerAsset_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventGetDataLayerInstance_Parms, ReturnValue), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstance_Statics::NewProp_DataLayerAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Gets the UDataLayerInstance associated to the DataLayerAsset\n\x09 *\n\x09 * @param\x09""DataLayerAsset\x09The DataLayerAsset associated to the UDataLayerInstance\n\x09 * @return\x09\x09\x09\x09\x09The UDataLayerInstance of the provided DataLayerAsset\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Gets the UDataLayerInstance associated to the DataLayerAsset\n\n@param       DataLayerAsset  The DataLayerAsset associated to the UDataLayerInstance\n@return                                      The UDataLayerInstance of the provided DataLayerAsset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "GetDataLayerInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstance_Statics::DataLayerEditorSubsystem_eventGetDataLayerInstance_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances_Statics
	{
		struct DataLayerEditorSubsystem_eventGetDataLayerInstances_Parms
		{
			TArray<UDataLayerAsset*> DataLayerAssets;
			TArray<UDataLayerInstance*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayerAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayerAssets;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances_Statics::NewProp_DataLayerAssets_Inner = { "DataLayerAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances_Statics::NewProp_DataLayerAssets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances_Statics::NewProp_DataLayerAssets = { "DataLayerAssets", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventGetDataLayerInstances_Parms, DataLayerAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances_Statics::NewProp_DataLayerAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances_Statics::NewProp_DataLayerAssets_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventGetDataLayerInstances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances_Statics::NewProp_DataLayerAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances_Statics::NewProp_DataLayerAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Gets the UDataLayerInstances associated to the each DataLayerAssets\n\x09 *\n\x09 * @param\x09""DataLayerAssets\x09The array of DataLayerAssets associated to UDataLayerInstances\n\x09 * @return\x09\x09\x09\x09\x09The array of UDataLayerInstances corresponding to a DataLayerAsset in the DataLayerAssets array\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Gets the UDataLayerInstances associated to the each DataLayerAssets\n\n@param       DataLayerAssets The array of DataLayerAssets associated to UDataLayerInstances\n@return                                      The array of UDataLayerInstances corresponding to a DataLayerAsset in the DataLayerAssets array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "GetDataLayerInstances", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances_Statics::DataLayerEditorSubsystem_eventGetDataLayerInstances_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_IsActorValidForDataLayer_Statics
	{
		struct DataLayerEditorSubsystem_eventIsActorValidForDataLayer_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_IsActorValidForDataLayer_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventIsActorValidForDataLayer_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_IsActorValidForDataLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventIsActorValidForDataLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_IsActorValidForDataLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventIsActorValidForDataLayer_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_IsActorValidForDataLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_IsActorValidForDataLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_IsActorValidForDataLayer_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_IsActorValidForDataLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_IsActorValidForDataLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 *\x09""Checks to see if the specified actor is in an appropriate state to interact with DataLayers\n\x09 *\n\x09 *\x09@param\x09""Actor\x09The actor to validate\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Checks to see if the specified actor is in an appropriate state to interact with DataLayers\n\n@param  Actor   The actor to validate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_IsActorValidForDataLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "IsActorValidForDataLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_IsActorValidForDataLayer_Statics::DataLayerEditorSubsystem_eventIsActorValidForDataLayer_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_IsActorValidForDataLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_IsActorValidForDataLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_IsActorValidForDataLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_IsActorValidForDataLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_IsActorValidForDataLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_IsActorValidForDataLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_MakeAllDataLayersVisible_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_MakeAllDataLayersVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Set the visibility of all DataLayers to true\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Set the visibility of all DataLayers to true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_MakeAllDataLayersVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "MakeAllDataLayersVisible", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_MakeAllDataLayersVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_MakeAllDataLayersVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_MakeAllDataLayersVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_MakeAllDataLayersVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromAllDataLayers_Statics
	{
		struct DataLayerEditorSubsystem_eventRemoveActorFromAllDataLayers_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromAllDataLayers_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventRemoveActorFromAllDataLayers_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromAllDataLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventRemoveActorFromAllDataLayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromAllDataLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventRemoveActorFromAllDataLayers_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromAllDataLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromAllDataLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromAllDataLayers_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromAllDataLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromAllDataLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Removes an actor from all DataLayers.\n\x09 *\n\x09 * @param\x09""Actor\x09\x09\x09The actor to modify\n\x09 * @return\x09\x09\x09\x09\x09true if the actor was changed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Removes an actor from all DataLayers.\n\n@param       Actor                   The actor to modify\n@return                                      true if the actor was changed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromAllDataLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "RemoveActorFromAllDataLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromAllDataLayers_Statics::DataLayerEditorSubsystem_eventRemoveActorFromAllDataLayers_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromAllDataLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromAllDataLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromAllDataLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromAllDataLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromAllDataLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromAllDataLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayer_Statics
	{
		struct DataLayerEditorSubsystem_eventRemoveActorFromDataLayer_Parms
		{
			AActor* Actor;
			UDataLayerInstance* DataLayerToRemove;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayerToRemove;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayer_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventRemoveActorFromDataLayer_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayer_Statics::NewProp_DataLayerToRemove = { "DataLayerToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventRemoveActorFromDataLayer_Parms, DataLayerToRemove), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventRemoveActorFromDataLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventRemoveActorFromDataLayer_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayer_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayer_Statics::NewProp_DataLayerToRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Removes an actor from the specified DataLayer.\n\x09 *\n\x09 * @param\x09""Actor\x09\x09\x09The actor to remove from the provided DataLayer\n\x09 * @param\x09""DataLayerToRemove\x09The DataLayer to remove the actor from\n\x09 * @return\x09\x09\x09\x09\x09true if the actor was removed from the DataLayer.  false is returned if the actor already belonged to the DataLayer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Removes an actor from the specified DataLayer.\n\n@param       Actor                   The actor to remove from the provided DataLayer\n@param       DataLayerToRemove       The DataLayer to remove the actor from\n@return                                      true if the actor was removed from the DataLayer.  false is returned if the actor already belonged to the DataLayer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "RemoveActorFromDataLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayer_Statics::DataLayerEditorSubsystem_eventRemoveActorFromDataLayer_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics
	{
		struct DataLayerEditorSubsystem_eventRemoveActorFromDataLayers_Parms
		{
			AActor* Actor;
			TArray<UDataLayerInstance*> DataLayers;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventRemoveActorFromDataLayers_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics::NewProp_DataLayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventRemoveActorFromDataLayers_Parms, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics::NewProp_DataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics::NewProp_DataLayers_MetaData)) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventRemoveActorFromDataLayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventRemoveActorFromDataLayers_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics::NewProp_DataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Removes the provided actor from the DataLayers.\n\x09 *\n\x09 * @param\x09""Actor\x09\x09The actor to remove from the provided DataLayers\n\x09 * @param\x09""DataLayers\x09""A valid list of DataLayers.\n\x09 * @return\x09\x09\x09\x09true if the actor was removed from at least one of the provided DataLayers.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Removes the provided actor from the DataLayers.\n\n@param       Actor           The actor to remove from the provided DataLayers\n@param       DataLayers      A valid list of DataLayers.\n@return                              true if the actor was removed from at least one of the provided DataLayers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "RemoveActorFromDataLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics::DataLayerEditorSubsystem_eventRemoveActorFromDataLayers_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers_Statics
	{
		struct DataLayerEditorSubsystem_eventRemoveActorsFromAllDataLayers_Parms
		{
			TArray<AActor*> Actors;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventRemoveActorsFromAllDataLayers_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers_Statics::NewProp_Actors_MetaData)) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventRemoveActorsFromAllDataLayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventRemoveActorsFromAllDataLayers_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Removes an actor from all DataLayers.\n\x09 *\n\x09 * @param\x09""Actor\x09\x09\x09The actors to modify\n\x09 * @return\x09\x09\x09\x09\x09true if any actor was changed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Removes an actor from all DataLayers.\n\n@param       Actor                   The actors to modify\n@return                                      true if any actor was changed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "RemoveActorsFromAllDataLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers_Statics::DataLayerEditorSubsystem_eventRemoveActorsFromAllDataLayers_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics
	{
		struct DataLayerEditorSubsystem_eventRemoveActorsFromDataLayer_Parms
		{
			TArray<AActor*> Actors;
			UDataLayerInstance* DataLayer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventRemoveActorsFromDataLayer_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics::NewProp_DataLayer = { "DataLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventRemoveActorsFromDataLayer_Parms, DataLayer), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventRemoveActorsFromDataLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventRemoveActorsFromDataLayer_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics::NewProp_DataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Removes the actors from the specified DataLayer.\n\x09 *\n\x09 * @param\x09""Actors\x09\x09\x09The actors to remove from the provided DataLayer\n\x09 * @param\x09""DataLayerToRemove\x09The DataLayer to remove the actors from\n\x09 * @return\x09\x09\x09\x09\x09true if at least one actor was removed from the DataLayer.  false is returned if all the actors already belonged to the DataLayer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Removes the actors from the specified DataLayer.\n\n@param       Actors                  The actors to remove from the provided DataLayer\n@param       DataLayerToRemove       The DataLayer to remove the actors from\n@return                                      true if at least one actor was removed from the DataLayer.  false is returned if all the actors already belonged to the DataLayer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "RemoveActorsFromDataLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics::DataLayerEditorSubsystem_eventRemoveActorsFromDataLayer_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics
	{
		struct DataLayerEditorSubsystem_eventRemoveActorsFromDataLayers_Parms
		{
			TArray<AActor*> Actors;
			TArray<UDataLayerInstance*> DataLayers;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventRemoveActorsFromDataLayers_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::NewProp_DataLayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventRemoveActorsFromDataLayers_Parms, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::NewProp_DataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::NewProp_DataLayers_MetaData)) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventRemoveActorsFromDataLayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventRemoveActorsFromDataLayers_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::NewProp_DataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Remove the actors from the DataLayers\n\x09 *\n\x09 * @param\x09""Actors\x09\x09The actors to remove to the DataLayers\n\x09 * @param\x09""DataLayers\x09""A valid list of DataLayers.\n\x09 * @return\x09\x09\x09\x09true if at least one actor was removed from at least one DataLayer.  false is returned if none of the actors belonged to any of the specified DataLayers.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Remove the actors from the DataLayers\n\n@param       Actors          The actors to remove to the DataLayers\n@param       DataLayers      A valid list of DataLayers.\n@return                              true if at least one actor was removed from at least one DataLayer.  false is returned if none of the actors belonged to any of the specified DataLayers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "RemoveActorsFromDataLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::DataLayerEditorSubsystem_eventRemoveActorsFromDataLayers_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayer_Statics
	{
		struct DataLayerEditorSubsystem_eventRemoveSelectedActorsFromDataLayer_Parms
		{
			UDataLayerInstance* DataLayer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayer_Statics::NewProp_DataLayer = { "DataLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventRemoveSelectedActorsFromDataLayer_Parms, DataLayer), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventRemoveSelectedActorsFromDataLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventRemoveSelectedActorsFromDataLayer_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayer_Statics::NewProp_DataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Removes the selected actors from the DataLayer.\n\x09 *\n\x09 * @param\x09""DataLayer\x09""A DataLayer.\n\x09 * @return\x09\x09\x09\x09true if at least one actor was added.  false is returned if all selected actors already belong to the DataLayer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Removes the selected actors from the DataLayer.\n\n@param       DataLayer       A DataLayer.\n@return                              true if at least one actor was added.  false is returned if all selected actors already belong to the DataLayer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "RemoveSelectedActorsFromDataLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayer_Statics::DataLayerEditorSubsystem_eventRemoveSelectedActorsFromDataLayer_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers_Statics
	{
		struct DataLayerEditorSubsystem_eventRemoveSelectedActorsFromDataLayers_Parms
		{
			TArray<UDataLayerInstance*> DataLayers;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers_Statics::NewProp_DataLayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventRemoveSelectedActorsFromDataLayers_Parms, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers_Statics::NewProp_DataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers_Statics::NewProp_DataLayers_MetaData)) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventRemoveSelectedActorsFromDataLayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventRemoveSelectedActorsFromDataLayers_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers_Statics::NewProp_DataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Removes selected actors from the DataLayers.\n\x09 *\n\x09 * @param\x09""DataLayers\x09""A valid list of DataLayers.\n\x09 * @return\x09\x09\x09\x09true if at least one actor was removed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Removes selected actors from the DataLayers.\n\n@param       DataLayers      A valid list of DataLayers.\n@return                              true if at least one actor was removed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "RemoveSelectedActorsFromDataLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers_Statics::DataLayerEditorSubsystem_eventRemoveSelectedActorsFromDataLayers_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer_Statics
	{
		struct DataLayerEditorSubsystem_eventRenameDataLayer_Parms
		{
			UDataLayerInstance* DataLayer;
			FName NewDataLayerLabel;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewDataLayerLabel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewDataLayerLabel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer_Statics::NewProp_DataLayer = { "DataLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventRenameDataLayer_Parms, DataLayer), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer_Statics::NewProp_NewDataLayerLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer_Statics::NewProp_NewDataLayerLabel = { "NewDataLayerLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventRenameDataLayer_Parms, NewDataLayerLabel), METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer_Statics::NewProp_NewDataLayerLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer_Statics::NewProp_NewDataLayerLabel_MetaData)) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventRenameDataLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventRenameDataLayer_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer_Statics::NewProp_DataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer_Statics::NewProp_NewDataLayerLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "RenameDataLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer_Statics::DataLayerEditorSubsystem_eventRenameDataLayer_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics
	{
		struct DataLayerEditorSubsystem_eventSelectActorsInDataLayer_Parms
		{
			UDataLayerInstance* DataLayer;
			bool bSelect;
			bool bNotify;
			bool bSelectEvenIfHidden;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelect_MetaData[];
#endif
		static void NewProp_bSelect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNotify_MetaData[];
#endif
		static void NewProp_bNotify_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectEvenIfHidden_MetaData[];
#endif
		static void NewProp_bSelectEvenIfHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectEvenIfHidden;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_DataLayer = { "DataLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventSelectActorsInDataLayer_Parms, DataLayer), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_bSelect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_bSelect_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSelectActorsInDataLayer_Parms*)Obj)->bSelect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_bSelect = { "bSelect", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSelectActorsInDataLayer_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_bSelect_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_bSelect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_bSelect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_bNotify_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_bNotify_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSelectActorsInDataLayer_Parms*)Obj)->bNotify = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_bNotify = { "bNotify", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSelectActorsInDataLayer_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_bNotify_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_bNotify_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_bNotify_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_bSelectEvenIfHidden_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_bSelectEvenIfHidden_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSelectActorsInDataLayer_Parms*)Obj)->bSelectEvenIfHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_bSelectEvenIfHidden = { "bSelectEvenIfHidden", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSelectActorsInDataLayer_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_bSelectEvenIfHidden_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_bSelectEvenIfHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_bSelectEvenIfHidden_MetaData)) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSelectActorsInDataLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSelectActorsInDataLayer_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_DataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_bSelect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_bNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_bSelectEvenIfHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Selects/de-selects actors belonging to the DataLayer.\n\x09 *\n\x09 * @param\x09""DataLayer\x09\x09\x09\x09\x09\x09""A valid DataLayer.\n\x09 * @param\x09""bSelect\x09\x09\x09\x09\x09\x09\x09If true actors are selected; if false, actors are deselected.\n\x09 * @param\x09""bNotify\x09\x09\x09\x09\x09\x09\x09If true the Editor is notified of the selection change; if false, the Editor will not be notified.\n\x09 * @param\x09""bSelectEvenIfHidden\x09[optional]\x09If true even hidden actors will be selected; if false, hidden actors won't be selected.\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09\x09\x09true if at least one actor was selected/deselected.\n\x09 */" },
		{ "CPP_Default_bSelectEvenIfHidden", "false" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Selects/de-selects actors belonging to the DataLayer.\n\n@param       DataLayer                                               A valid DataLayer.\n@param       bSelect                                                 If true actors are selected; if false, actors are deselected.\n@param       bNotify                                                 If true the Editor is notified of the selection change; if false, the Editor will not be notified.\n@param       bSelectEvenIfHidden     [optional]      If true even hidden actors will be selected; if false, hidden actors won't be selected.\n@return                                                                      true if at least one actor was selected/deselected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "SelectActorsInDataLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::DataLayerEditorSubsystem_eventSelectActorsInDataLayer_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics
	{
		struct DataLayerEditorSubsystem_eventSelectActorsInDataLayers_Parms
		{
			TArray<UDataLayerInstance*> DataLayers;
			bool bSelect;
			bool bNotify;
			bool bSelectEvenIfHidden;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelect_MetaData[];
#endif
		static void NewProp_bSelect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNotify_MetaData[];
#endif
		static void NewProp_bNotify_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectEvenIfHidden_MetaData[];
#endif
		static void NewProp_bSelectEvenIfHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectEvenIfHidden;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_DataLayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventSelectActorsInDataLayers_Parms, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_DataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_DataLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_bSelect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_bSelect_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSelectActorsInDataLayers_Parms*)Obj)->bSelect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_bSelect = { "bSelect", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSelectActorsInDataLayers_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_bSelect_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_bSelect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_bSelect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_bNotify_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_bNotify_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSelectActorsInDataLayers_Parms*)Obj)->bNotify = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_bNotify = { "bNotify", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSelectActorsInDataLayers_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_bNotify_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_bNotify_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_bNotify_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_bSelectEvenIfHidden_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_bSelectEvenIfHidden_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSelectActorsInDataLayers_Parms*)Obj)->bSelectEvenIfHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_bSelectEvenIfHidden = { "bSelectEvenIfHidden", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSelectActorsInDataLayers_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_bSelectEvenIfHidden_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_bSelectEvenIfHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_bSelectEvenIfHidden_MetaData)) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSelectActorsInDataLayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSelectActorsInDataLayers_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_DataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_bSelect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_bNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_bSelectEvenIfHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Selects/de-selects actors belonging to the DataLayers.\n\x09 *\n\x09 * @param\x09""DataLayers\x09\x09\x09\x09\x09\x09""A valid list of DataLayers.\n\x09 * @param\x09""bSelect\x09\x09\x09\x09\x09\x09\x09If true actors are selected; if false, actors are deselected.\n\x09 * @param\x09""bNotify\x09\x09\x09\x09\x09\x09\x09If true the Editor is notified of the selection change; if false, the Editor will not be notified\n\x09 * @param\x09""bSelectEvenIfHidden\x09[optional]\x09If true even hidden actors will be selected; if false, hidden actors won't be selected.\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09\x09\x09true if at least one actor was selected/deselected.\n\x09 */" },
		{ "CPP_Default_bSelectEvenIfHidden", "false" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Selects/de-selects actors belonging to the DataLayers.\n\n@param       DataLayers                                              A valid list of DataLayers.\n@param       bSelect                                                 If true actors are selected; if false, actors are deselected.\n@param       bNotify                                                 If true the Editor is notified of the selection change; if false, the Editor will not be notified\n@param       bSelectEvenIfHidden     [optional]      If true even hidden actors will be selected; if false, hidden actors won't be selected.\n@return                                                                      true if at least one actor was selected/deselected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "SelectActorsInDataLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::DataLayerEditorSubsystem_eventSelectActorsInDataLayers_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics
	{
		struct DataLayerEditorSubsystem_eventSetDataLayerIsDynamicallyLoadedInEditor_Parms
		{
			UDEPRECATED_DataLayer* DataLayer;
			bool bIsLoadedInEditor;
			bool bIsFromUserChange;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadedInEditor_MetaData[];
#endif
		static void NewProp_bIsLoadedInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadedInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFromUserChange_MetaData[];
#endif
		static void NewProp_bIsFromUserChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFromUserChange;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_DataLayer = { "DataLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventSetDataLayerIsDynamicallyLoadedInEditor_Parms, DataLayer), Z_Construct_UClass_UDEPRECATED_DataLayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_bIsLoadedInEditor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_bIsLoadedInEditor_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSetDataLayerIsDynamicallyLoadedInEditor_Parms*)Obj)->bIsLoadedInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_bIsLoadedInEditor = { "bIsLoadedInEditor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSetDataLayerIsDynamicallyLoadedInEditor_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_bIsLoadedInEditor_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_bIsLoadedInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_bIsLoadedInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSetDataLayerIsDynamicallyLoadedInEditor_Parms*)Obj)->bIsFromUserChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange = { "bIsFromUserChange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSetDataLayerIsDynamicallyLoadedInEditor_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData)) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSetDataLayerIsDynamicallyLoadedInEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSetDataLayerIsDynamicallyLoadedInEditor_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_DataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_bIsLoadedInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetDataLayerIsLoadedInEditor instead" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "SetDataLayerIsDynamicallyLoadedInEditor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::DataLayerEditorSubsystem_eventSetDataLayerIsDynamicallyLoadedInEditor_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics
	{
		struct DataLayerEditorSubsystem_eventSetDataLayerIsLoadedInEditor_Parms
		{
			UDataLayerInstance* DataLayer;
			bool bIsLoadedInEditor;
			bool bIsFromUserChange;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadedInEditor_MetaData[];
#endif
		static void NewProp_bIsLoadedInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadedInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFromUserChange_MetaData[];
#endif
		static void NewProp_bIsFromUserChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFromUserChange;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::NewProp_DataLayer = { "DataLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventSetDataLayerIsLoadedInEditor_Parms, DataLayer), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::NewProp_bIsLoadedInEditor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::NewProp_bIsLoadedInEditor_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSetDataLayerIsLoadedInEditor_Parms*)Obj)->bIsLoadedInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::NewProp_bIsLoadedInEditor = { "bIsLoadedInEditor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSetDataLayerIsLoadedInEditor_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::NewProp_bIsLoadedInEditor_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::NewProp_bIsLoadedInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::NewProp_bIsLoadedInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::NewProp_bIsFromUserChange_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSetDataLayerIsLoadedInEditor_Parms*)Obj)->bIsFromUserChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::NewProp_bIsFromUserChange = { "bIsFromUserChange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSetDataLayerIsLoadedInEditor_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::NewProp_bIsFromUserChange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData)) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSetDataLayerIsLoadedInEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSetDataLayerIsLoadedInEditor_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::NewProp_DataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::NewProp_bIsLoadedInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::NewProp_bIsFromUserChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Changes the DataLayer's IsLoadedInEditor flag to the provided state\n\x09 *\n\x09 * @param\x09""DataLayer\x09\x09\x09\x09\x09\x09The DataLayer to affect.\n\x09 * @param\x09""bIsLoadedInEditor\x09\x09\x09\x09The new value of the flag IsLoadedInEditor.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09If True, the Editor loading will consider this DataLayer to load or not an Actor part of this DataLayer.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09""An Actor will not be loaded in the Editor if all its DataLayers are not LoadedInEditor.\n\x09 * @param\x09""bIsFromUserChange\x09\x09\x09\x09If this change originates from a user change or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Changes the DataLayer's IsLoadedInEditor flag to the provided state\n\n@param       DataLayer                                               The DataLayer to affect.\n@param       bIsLoadedInEditor                               The new value of the flag IsLoadedInEditor.\n                                                                                     If True, the Editor loading will consider this DataLayer to load or not an Actor part of this DataLayer.\n                                                                                     An Actor will not be loaded in the Editor if all its DataLayers are not LoadedInEditor.\n@param       bIsFromUserChange                               If this change originates from a user change or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "SetDataLayerIsLoadedInEditor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::DataLayerEditorSubsystem_eventSetDataLayerIsLoadedInEditor_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics
	{
		struct DataLayerEditorSubsystem_eventSetDataLayersIsDynamicallyLoadedInEditor_Parms
		{
			TArray<UDEPRECATED_DataLayer*> DataLayers;
			bool bIsLoadedInEditor;
			bool bIsFromUserChange;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadedInEditor_MetaData[];
#endif
		static void NewProp_bIsLoadedInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadedInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFromUserChange_MetaData[];
#endif
		static void NewProp_bIsFromUserChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFromUserChange;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDEPRECATED_DataLayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_DataLayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventSetDataLayersIsDynamicallyLoadedInEditor_Parms, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_DataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_DataLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_bIsLoadedInEditor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_bIsLoadedInEditor_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSetDataLayersIsDynamicallyLoadedInEditor_Parms*)Obj)->bIsLoadedInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_bIsLoadedInEditor = { "bIsLoadedInEditor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSetDataLayersIsDynamicallyLoadedInEditor_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_bIsLoadedInEditor_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_bIsLoadedInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_bIsLoadedInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSetDataLayersIsDynamicallyLoadedInEditor_Parms*)Obj)->bIsFromUserChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange = { "bIsFromUserChange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSetDataLayersIsDynamicallyLoadedInEditor_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData)) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSetDataLayersIsDynamicallyLoadedInEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSetDataLayersIsDynamicallyLoadedInEditor_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_DataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_bIsLoadedInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetDataLayersIsLoadedInEditor instead" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "SetDataLayersIsDynamicallyLoadedInEditor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::DataLayerEditorSubsystem_eventSetDataLayersIsDynamicallyLoadedInEditor_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics
	{
		struct DataLayerEditorSubsystem_eventSetDataLayersIsLoadedInEditor_Parms
		{
			TArray<UDataLayerInstance*> DataLayers;
			bool bIsLoadedInEditor;
			bool bIsFromUserChange;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadedInEditor_MetaData[];
#endif
		static void NewProp_bIsLoadedInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadedInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFromUserChange_MetaData[];
#endif
		static void NewProp_bIsFromUserChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFromUserChange;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_DataLayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventSetDataLayersIsLoadedInEditor_Parms, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_DataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_DataLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_bIsLoadedInEditor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_bIsLoadedInEditor_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSetDataLayersIsLoadedInEditor_Parms*)Obj)->bIsLoadedInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_bIsLoadedInEditor = { "bIsLoadedInEditor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSetDataLayersIsLoadedInEditor_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_bIsLoadedInEditor_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_bIsLoadedInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_bIsLoadedInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_bIsFromUserChange_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSetDataLayersIsLoadedInEditor_Parms*)Obj)->bIsFromUserChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_bIsFromUserChange = { "bIsFromUserChange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSetDataLayersIsLoadedInEditor_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_bIsFromUserChange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData)) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSetDataLayersIsLoadedInEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSetDataLayersIsLoadedInEditor_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_DataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_bIsLoadedInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_bIsFromUserChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Changes the IsLoadedInEditor flag of the DataLayers to the provided state\n\x09 *\n\x09 * @param\x09""DataLayers\x09\x09\x09\x09\x09\x09The DataLayers to affect\n\x09 * @param\x09""bIsLoadedInEditor\x09\x09\x09\x09The new value of the flag IsLoadedInEditor.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09If True, the Editor loading will consider this DataLayer to load or not an Actor part of this DataLayer.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09""An Actor will not be loaded in the Editor if all its DataLayers are not LoadedInEditor.\n\x09 * @param\x09""bIsFromUserChange\x09\x09\x09\x09If this change originates from a user change or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Changes the IsLoadedInEditor flag of the DataLayers to the provided state\n\n@param       DataLayers                                              The DataLayers to affect\n@param       bIsLoadedInEditor                               The new value of the flag IsLoadedInEditor.\n                                                                                     If True, the Editor loading will consider this DataLayer to load or not an Actor part of this DataLayer.\n                                                                                     An Actor will not be loaded in the Editor if all its DataLayers are not LoadedInEditor.\n@param       bIsFromUserChange                               If this change originates from a user change or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "SetDataLayersIsLoadedInEditor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::DataLayerEditorSubsystem_eventSetDataLayersIsLoadedInEditor_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics
	{
		struct DataLayerEditorSubsystem_eventSetDataLayersVisibility_Parms
		{
			TArray<UDataLayerInstance*> DataLayers;
			bool bIsVisible;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::NewProp_DataLayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventSetDataLayersVisibility_Parms, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::NewProp_DataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::NewProp_DataLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSetDataLayersVisibility_Parms*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSetDataLayersVisibility_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::NewProp_bIsVisible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::NewProp_DataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::NewProp_bIsVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Changes visibility of the DataLayers to the provided state\n\x09 *\n\x09 * @param\x09""DataLayers\x09The DataLayers to affect\n\x09 * @param\x09""bIsVisible\x09If true the DataLayers will be visible; if false, the DataLayers will not be visible\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Changes visibility of the DataLayers to the provided state\n\n@param       DataLayers      The DataLayers to affect\n@param       bIsVisible      If true the DataLayers will be visible; if false, the DataLayers will not be visible" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "SetDataLayersVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::DataLayerEditorSubsystem_eventSetDataLayersVisibility_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerVisibility_Statics
	{
		struct DataLayerEditorSubsystem_eventSetDataLayerVisibility_Parms
		{
			UDataLayerInstance* DataLayer;
			bool bIsVisible;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerVisibility_Statics::NewProp_DataLayer = { "DataLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventSetDataLayerVisibility_Parms, DataLayer), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerVisibility_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerVisibility_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSetDataLayerVisibility_Parms*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerVisibility_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSetDataLayerVisibility_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerVisibility_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerVisibility_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerVisibility_Statics::NewProp_bIsVisible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerVisibility_Statics::NewProp_DataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerVisibility_Statics::NewProp_bIsVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Changes the DataLayer's visibility to the provided state\n\x09 *\n\x09 * @param\x09""DataLayer\x09The DataLayer to affect.\n\x09 * @param\x09""bIsVisible\x09If true the DataLayer will be visible; if false, the DataLayer will not be visible.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Changes the DataLayer's visibility to the provided state\n\n@param       DataLayer       The DataLayer to affect.\n@param       bIsVisible      If true the DataLayer will be visible; if false, the DataLayer will not be visible." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "SetDataLayerVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerVisibility_Statics::DataLayerEditorSubsystem_eventSetDataLayerVisibility_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_SetParentDataLayer_Statics
	{
		struct DataLayerEditorSubsystem_eventSetParentDataLayer_Parms
		{
			UDataLayerInstance* DataLayer;
			UDataLayerInstance* ParentDataLayer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentDataLayer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetParentDataLayer_Statics::NewProp_DataLayer = { "DataLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventSetParentDataLayer_Parms, DataLayer), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetParentDataLayer_Statics::NewProp_ParentDataLayer = { "ParentDataLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventSetParentDataLayer_Parms, ParentDataLayer), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_SetParentDataLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventSetParentDataLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetParentDataLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventSetParentDataLayer_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_SetParentDataLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_SetParentDataLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetParentDataLayer_Statics::NewProp_DataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetParentDataLayer_Statics::NewProp_ParentDataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_SetParentDataLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_SetParentDataLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Sets a Parent DataLayer for a specified DataLayer\n\x09 * \n\x09 *  @param DataLayer\x09\x09The child DataLayer.\n\x09 *  @param ParentDataLayer\x09The parent DataLayer.\n\x09 * \n\x09 *  @return\x09true if succeeded, false if failed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Sets a Parent DataLayer for a specified DataLayer\n\n @param DataLayer            The child DataLayer.\n @param ParentDataLayer      The parent DataLayer.\n\n @return     true if succeeded, false if failed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_SetParentDataLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "SetParentDataLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetParentDataLayer_Statics::DataLayerEditorSubsystem_eventSetParentDataLayer_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_SetParentDataLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetParentDataLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetParentDataLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_SetParentDataLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_SetParentDataLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_SetParentDataLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics
	{
		struct DataLayerEditorSubsystem_eventToggleDataLayerIsDynamicallyLoadedInEditor_Parms
		{
			UDEPRECATED_DataLayer* DataLayer;
			bool bIsFromUserChange;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFromUserChange_MetaData[];
#endif
		static void NewProp_bIsFromUserChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFromUserChange;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_DataLayer = { "DataLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventToggleDataLayerIsDynamicallyLoadedInEditor_Parms, DataLayer), Z_Construct_UClass_UDEPRECATED_DataLayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventToggleDataLayerIsDynamicallyLoadedInEditor_Parms*)Obj)->bIsFromUserChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange = { "bIsFromUserChange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventToggleDataLayerIsDynamicallyLoadedInEditor_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData)) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventToggleDataLayerIsDynamicallyLoadedInEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventToggleDataLayerIsDynamicallyLoadedInEditor_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_DataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use ToggleDataLayerIsLoadedInEditor instead" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "ToggleDataLayerIsDynamicallyLoadedInEditor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics::DataLayerEditorSubsystem_eventToggleDataLayerIsDynamicallyLoadedInEditor_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics
	{
		struct DataLayerEditorSubsystem_eventToggleDataLayerIsLoadedInEditor_Parms
		{
			UDataLayerInstance* DataLayer;
			bool bIsFromUserChange;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFromUserChange_MetaData[];
#endif
		static void NewProp_bIsFromUserChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFromUserChange;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics::NewProp_DataLayer = { "DataLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventToggleDataLayerIsLoadedInEditor_Parms, DataLayer), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics::NewProp_bIsFromUserChange_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventToggleDataLayerIsLoadedInEditor_Parms*)Obj)->bIsFromUserChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics::NewProp_bIsFromUserChange = { "bIsFromUserChange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventToggleDataLayerIsLoadedInEditor_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics::NewProp_bIsFromUserChange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData)) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventToggleDataLayerIsLoadedInEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventToggleDataLayerIsLoadedInEditor_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics::NewProp_DataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics::NewProp_bIsFromUserChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Toggles the DataLayer's IsLoadedInEditor flag\n\x09 *\n\x09 * @param\x09""DataLayer\x09\x09\x09\x09\x09\x09The DataLayer to affect\n\x09 * @param\x09""bIsFromUserChange\x09\x09\x09\x09If this change originates from a user change or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Toggles the DataLayer's IsLoadedInEditor flag\n\n@param       DataLayer                                               The DataLayer to affect\n@param       bIsFromUserChange                               If this change originates from a user change or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "ToggleDataLayerIsLoadedInEditor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics::DataLayerEditorSubsystem_eventToggleDataLayerIsLoadedInEditor_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics
	{
		struct DataLayerEditorSubsystem_eventToggleDataLayersIsDynamicallyLoadedInEditor_Parms
		{
			TArray<UDEPRECATED_DataLayer*> DataLayers;
			bool bIsFromUserChange;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFromUserChange_MetaData[];
#endif
		static void NewProp_bIsFromUserChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFromUserChange;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDEPRECATED_DataLayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_DataLayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventToggleDataLayersIsDynamicallyLoadedInEditor_Parms, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_DataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_DataLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventToggleDataLayersIsDynamicallyLoadedInEditor_Parms*)Obj)->bIsFromUserChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange = { "bIsFromUserChange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventToggleDataLayersIsDynamicallyLoadedInEditor_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData)) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventToggleDataLayersIsDynamicallyLoadedInEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventToggleDataLayersIsDynamicallyLoadedInEditor_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_DataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_bIsFromUserChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use ToggleDataLayersIsLoadedInEditor instead" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "ToggleDataLayersIsDynamicallyLoadedInEditor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::DataLayerEditorSubsystem_eventToggleDataLayersIsDynamicallyLoadedInEditor_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics
	{
		struct DataLayerEditorSubsystem_eventToggleDataLayersIsLoadedInEditor_Parms
		{
			TArray<UDataLayerInstance*> DataLayers;
			bool bIsFromUserChange;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFromUserChange_MetaData[];
#endif
		static void NewProp_bIsFromUserChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFromUserChange;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::NewProp_DataLayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventToggleDataLayersIsLoadedInEditor_Parms, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::NewProp_DataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::NewProp_DataLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::NewProp_bIsFromUserChange_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventToggleDataLayersIsLoadedInEditor_Parms*)Obj)->bIsFromUserChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::NewProp_bIsFromUserChange = { "bIsFromUserChange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventToggleDataLayersIsLoadedInEditor_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::NewProp_bIsFromUserChange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::NewProp_bIsFromUserChange_MetaData)) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventToggleDataLayersIsLoadedInEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventToggleDataLayersIsLoadedInEditor_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::NewProp_DataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::NewProp_bIsFromUserChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Toggles the IsLoadedInEditor flag of all of the DataLayers\n\x09 *\n\x09 * @param\x09""DataLayers\x09\x09\x09\x09\x09\x09The DataLayers to affect\n\x09 * @param\x09""bIsFromUserChange\x09\x09\x09\x09If this change originates from a user change or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Toggles the IsLoadedInEditor flag of all of the DataLayers\n\n@param       DataLayers                                              The DataLayers to affect\n@param       bIsFromUserChange                               If this change originates from a user change or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "ToggleDataLayersIsLoadedInEditor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::DataLayerEditorSubsystem_eventToggleDataLayersIsLoadedInEditor_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersVisibility_Statics
	{
		struct DataLayerEditorSubsystem_eventToggleDataLayersVisibility_Parms
		{
			TArray<UDataLayerInstance*> DataLayers;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersVisibility_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersVisibility_Statics::NewProp_DataLayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersVisibility_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventToggleDataLayersVisibility_Parms, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersVisibility_Statics::NewProp_DataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersVisibility_Statics::NewProp_DataLayers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersVisibility_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersVisibility_Statics::NewProp_DataLayers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Toggles the visibility of all of the DataLayers\n\x09 *\n\x09 * @param\x09""DataLayers\x09The DataLayers to affect\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Toggles the visibility of all of the DataLayers\n\n@param       DataLayers      The DataLayers to affect" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "ToggleDataLayersVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersVisibility_Statics::DataLayerEditorSubsystem_eventToggleDataLayersVisibility_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerVisibility_Statics
	{
		struct DataLayerEditorSubsystem_eventToggleDataLayerVisibility_Parms
		{
			UDataLayerInstance* DataLayer;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerVisibility_Statics::NewProp_DataLayer = { "DataLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventToggleDataLayerVisibility_Parms, DataLayer), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerVisibility_Statics::NewProp_DataLayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Toggles the DataLayer's visibility\n\x09 *\n\x09 * @param DataLayer\x09The DataLayer to affect\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Toggles the DataLayer's visibility\n\n@param DataLayer     The DataLayer to affect" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "ToggleDataLayerVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerVisibility_Statics::DataLayerEditorSubsystem_eventToggleDataLayerVisibility_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorAllViewsVisibility_Statics
	{
		struct DataLayerEditorSubsystem_eventUpdateActorAllViewsVisibility_Parms
		{
			AActor* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorAllViewsVisibility_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventUpdateActorAllViewsVisibility_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorAllViewsVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorAllViewsVisibility_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorAllViewsVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Per-view Data Layer visibility was removed." },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorAllViewsVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "UpdateActorAllViewsVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorAllViewsVisibility_Statics::DataLayerEditorSubsystem_eventUpdateActorAllViewsVisibility_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorAllViewsVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorAllViewsVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorAllViewsVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorAllViewsVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorAllViewsVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorAllViewsVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics
	{
		struct DataLayerEditorSubsystem_eventUpdateActorVisibility_Parms
		{
			AActor* Actor;
			bool bOutSelectionChanged;
			bool bOutActorModified;
			bool bNotifySelectionChange;
			bool bRedrawViewports;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_bOutSelectionChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutSelectionChanged;
		static void NewProp_bOutActorModified_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutActorModified;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNotifySelectionChange_MetaData[];
#endif
		static void NewProp_bNotifySelectionChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifySelectionChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRedrawViewports_MetaData[];
#endif
		static void NewProp_bRedrawViewports_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRedrawViewports;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventUpdateActorVisibility_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_bOutSelectionChanged_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventUpdateActorVisibility_Parms*)Obj)->bOutSelectionChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_bOutSelectionChanged = { "bOutSelectionChanged", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventUpdateActorVisibility_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_bOutSelectionChanged_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_bOutActorModified_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventUpdateActorVisibility_Parms*)Obj)->bOutActorModified = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_bOutActorModified = { "bOutActorModified", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventUpdateActorVisibility_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_bOutActorModified_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_bNotifySelectionChange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_bNotifySelectionChange_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventUpdateActorVisibility_Parms*)Obj)->bNotifySelectionChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_bNotifySelectionChange = { "bNotifySelectionChange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventUpdateActorVisibility_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_bNotifySelectionChange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_bNotifySelectionChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_bNotifySelectionChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_bRedrawViewports_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_bRedrawViewports_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventUpdateActorVisibility_Parms*)Obj)->bRedrawViewports = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_bRedrawViewports = { "bRedrawViewports", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventUpdateActorVisibility_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_bRedrawViewports_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_bRedrawViewports_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_bRedrawViewports_MetaData)) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventUpdateActorVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventUpdateActorVisibility_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_bOutSelectionChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_bOutActorModified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_bNotifySelectionChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_bRedrawViewports,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Updates the provided actors visibility in the viewports\n\x09 *\n\x09 * @param\x09""Actor\x09\x09\x09\x09\x09\x09""Actor to update\n\x09 * @param\x09""bOutSelectionChanged [OUT]\x09Whether the Editors selection changed\n\x09 * @param\x09""bOutActorModified [OUT]\x09\x09Whether the actor was modified\n\x09 * @param\x09""bNotifySelectionChange\x09\x09If true the Editor is notified of the selection change; if false, the Editor will not be notified\n\x09 * @param\x09""bRedrawViewports\x09\x09\x09If true the viewports will be redrawn; if false, they will not\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Updates the provided actors visibility in the viewports\n\n@param       Actor                                           Actor to update\n@param       bOutSelectionChanged [OUT]      Whether the Editors selection changed\n@param       bOutActorModified [OUT]         Whether the actor was modified\n@param       bNotifySelectionChange          If true the Editor is notified of the selection change; if false, the Editor will not be notified\n@param       bRedrawViewports                        If true the viewports will be redrawn; if false, they will not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "UpdateActorVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::DataLayerEditorSubsystem_eventUpdateActorVisibility_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics
	{
		struct DataLayerEditorSubsystem_eventUpdateAllActorsVisibility_Parms
		{
			bool bNotifySelectionChange;
			bool bRedrawViewports;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNotifySelectionChange_MetaData[];
#endif
		static void NewProp_bNotifySelectionChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifySelectionChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRedrawViewports_MetaData[];
#endif
		static void NewProp_bRedrawViewports_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRedrawViewports;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bNotifySelectionChange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bNotifySelectionChange_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventUpdateAllActorsVisibility_Parms*)Obj)->bNotifySelectionChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bNotifySelectionChange = { "bNotifySelectionChange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventUpdateAllActorsVisibility_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bNotifySelectionChange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bNotifySelectionChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bNotifySelectionChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bRedrawViewports_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bRedrawViewports_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventUpdateAllActorsVisibility_Parms*)Obj)->bRedrawViewports = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bRedrawViewports = { "bRedrawViewports", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventUpdateAllActorsVisibility_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bRedrawViewports_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bRedrawViewports_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bRedrawViewports_MetaData)) };
	void Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayerEditorSubsystem_eventUpdateAllActorsVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataLayerEditorSubsystem_eventUpdateAllActorsVisibility_Parms), &Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bNotifySelectionChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bRedrawViewports,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/**\n\x09 * Updates the visibility of all actors in the viewports\n\x09 *\n\x09 * @param\x09""bNotifySelectionChange\x09\x09If true the Editor is notified of the selection change; if false, the Editor will not be notified\n\x09 * @param\x09""bRedrawViewports\x09\x09\x09If true the viewports will be redrawn; if false, they will not\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
		{ "ToolTip", "Updates the visibility of all actors in the viewports\n\n@param       bNotifySelectionChange          If true the Editor is notified of the selection change; if false, the Editor will not be notified\n@param       bRedrawViewports                        If true the viewports will be redrawn; if false, they will not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "UpdateAllActorsVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::DataLayerEditorSubsystem_eventUpdateAllActorsVisibility_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllViewVisibility_Statics
	{
		struct DataLayerEditorSubsystem_eventUpdateAllViewVisibility_Parms
		{
			UDEPRECATED_DataLayer* DataLayerThatChanged;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayerThatChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllViewVisibility_Statics::NewProp_DataLayerThatChanged = { "DataLayerThatChanged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataLayerEditorSubsystem_eventUpdateAllViewVisibility_Parms, DataLayerThatChanged), Z_Construct_UClass_UDEPRECATED_DataLayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllViewVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllViewVisibility_Statics::NewProp_DataLayerThatChanged,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllViewVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Per-view Data Layer visibility was removed." },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllViewVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerEditorSubsystem, nullptr, "UpdateAllViewVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllViewVisibility_Statics::DataLayerEditorSubsystem_eventUpdateAllViewVisibility_Parms), Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllViewVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllViewVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllViewVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllViewVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllViewVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllViewVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataLayerEditorSubsystem);
	UClass* Z_Construct_UClass_UDataLayerEditorSubsystem_NoRegister()
	{
		return UDataLayerEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UDataLayerEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataLayerEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DataLayerEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataLayerEditorSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayer, "AddActorsToDataLayer" }, // 2740800069
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorsToDataLayers, "AddActorsToDataLayers" }, // 2300247476
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayer, "AddActorToDataLayer" }, // 652587672
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_AddActorToDataLayers, "AddActorToDataLayers" }, // 647553711
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayer, "AddSelectedActorsToDataLayer" }, // 1995518507
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_AddSelectedActorsToDataLayers, "AddSelectedActorsToDataLayers" }, // 3027304011
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayer, "AppendActorsFromDataLayer" }, // 741091342
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_AppendActorsFromDataLayers, "AppendActorsFromDataLayers" }, // 1667159386
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayer, "CreateDataLayer" }, // 1928419322
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_CreateDataLayerInstance, "CreateDataLayerInstance" }, // 1596610102
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayer, "DeleteDataLayer" }, // 3880269124
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_DeleteDataLayers, "DeleteDataLayers" }, // 1100461771
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayer, "GetActorsFromDataLayer" }, // 1911203029
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_GetActorsFromDataLayers, "GetActorsFromDataLayers" }, // 980793610
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_GetAllDataLayers, "GetAllDataLayers" }, // 2005518811
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayer, "GetDataLayer" }, // 772244870
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerFromLabel, "GetDataLayerFromLabel" }, // 2698822367
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstance, "GetDataLayerInstance" }, // 3432751729
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_GetDataLayerInstances, "GetDataLayerInstances" }, // 3994004234
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_IsActorValidForDataLayer, "IsActorValidForDataLayer" }, // 3132894760
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_MakeAllDataLayersVisible, "MakeAllDataLayersVisible" }, // 2856811029
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromAllDataLayers, "RemoveActorFromAllDataLayers" }, // 1440102783
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayer, "RemoveActorFromDataLayer" }, // 3574938257
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorFromDataLayers, "RemoveActorFromDataLayers" }, // 574661389
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromAllDataLayers, "RemoveActorsFromAllDataLayers" }, // 806742451
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayer, "RemoveActorsFromDataLayer" }, // 952503902
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveActorsFromDataLayers, "RemoveActorsFromDataLayers" }, // 2626359972
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayer, "RemoveSelectedActorsFromDataLayer" }, // 4123181272
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_RemoveSelectedActorsFromDataLayers, "RemoveSelectedActorsFromDataLayers" }, // 2646833752
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_RenameDataLayer, "RenameDataLayer" }, // 2335095761
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayer, "SelectActorsInDataLayer" }, // 620697211
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_SelectActorsInDataLayers, "SelectActorsInDataLayers" }, // 1125545701
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsDynamicallyLoadedInEditor, "SetDataLayerIsDynamicallyLoadedInEditor" }, // 845402955
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerIsLoadedInEditor, "SetDataLayerIsLoadedInEditor" }, // 2218419449
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsDynamicallyLoadedInEditor, "SetDataLayersIsDynamicallyLoadedInEditor" }, // 3060172936
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersIsLoadedInEditor, "SetDataLayersIsLoadedInEditor" }, // 4227331014
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayersVisibility, "SetDataLayersVisibility" }, // 2933980663
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_SetDataLayerVisibility, "SetDataLayerVisibility" }, // 3740548752
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_SetParentDataLayer, "SetParentDataLayer" }, // 1038183561
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsDynamicallyLoadedInEditor, "ToggleDataLayerIsDynamicallyLoadedInEditor" }, // 918460867
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerIsLoadedInEditor, "ToggleDataLayerIsLoadedInEditor" }, // 1769981562
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsDynamicallyLoadedInEditor, "ToggleDataLayersIsDynamicallyLoadedInEditor" }, // 3977860475
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersIsLoadedInEditor, "ToggleDataLayersIsLoadedInEditor" }, // 1589838624
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayersVisibility, "ToggleDataLayersVisibility" }, // 2580484234
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_ToggleDataLayerVisibility, "ToggleDataLayerVisibility" }, // 1696690008
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorAllViewsVisibility, "UpdateActorAllViewsVisibility" }, // 1251069994
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateActorVisibility, "UpdateActorVisibility" }, // 2618661966
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllActorsVisibility, "UpdateAllActorsVisibility" }, // 1315536478
		{ &Z_Construct_UFunction_UDataLayerEditorSubsystem_UpdateAllViewVisibility, "UpdateAllViewVisibility" }, // 2160715248
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataLayer/DataLayerEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/DataLayer/DataLayerEditorSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataLayerEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataLayerEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataLayerEditorSubsystem_Statics::ClassParams = {
		&UDataLayerEditorSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataLayerEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataLayerEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UDataLayerEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataLayerEditorSubsystem.OuterSingleton, Z_Construct_UClass_UDataLayerEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataLayerEditorSubsystem.OuterSingleton;
	}
	template<> DATALAYEREDITOR_API UClass* StaticClass<UDataLayerEditorSubsystem>()
	{
		return UDataLayerEditorSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataLayerEditorSubsystem);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FDataLayerCreationParameters::StaticStruct, Z_Construct_UScriptStruct_FDataLayerCreationParameters_Statics::NewStructOps, TEXT("DataLayerCreationParameters"), &Z_Registration_Info_UScriptStruct_DataLayerCreationParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataLayerCreationParameters), 4019086629U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataLayerEditorSubsystem, UDataLayerEditorSubsystem::StaticClass, TEXT("UDataLayerEditorSubsystem"), &Z_Registration_Info_UClass_UDataLayerEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataLayerEditorSubsystem), 3240468057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_3506258541(TEXT("/Script/DataLayerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_DataLayerEditor_Public_DataLayer_DataLayerEditorSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
