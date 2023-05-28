// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Layers/LayersSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLayersSubsystem() {}
// Cross Module References
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_ULayersSubsystem();
	UNREALED_API UClass* Z_Construct_UClass_ULayersSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	DEFINE_FUNCTION(ULayersSubsystem::execEditorRefreshLayerBrowser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EditorRefreshLayerBrowser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execEditorMapChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EditorMapChange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execGetWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=P_THIS->GetWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execRenameLayer)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OriginalLayerName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NewLayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RenameLayer(Z_Param_Out_OriginalLayerName,Z_Param_Out_NewLayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execDeleteLayer)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LayerToDelete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteLayer(Z_Param_Out_LayerToDelete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execDeleteLayers)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_LayersToDelete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteLayers(Z_Param_Out_LayersToDelete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execCreateLayer)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULayer**)Z_Param__Result=P_THIS->CreateLayer(Z_Param_Out_LayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execAddAllLayersTo)
	{
		P_GET_TARRAY_REF(ULayer*,Z_Param_Out_OutLayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAllLayersTo(Z_Param_Out_OutLayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execAddAllLayerNamesTo)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutLayerNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAllLayerNamesTo(Z_Param_Out_OutLayerNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execTryGetLayer)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LayerName);
		P_GET_OBJECT_REF(ULayer,Z_Param_Out_OutLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetLayer(Z_Param_Out_LayerName,Z_Param_Out_OutLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execIsLayer)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLayer(Z_Param_Out_LayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execGetLayer)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULayer**)Z_Param__Result=P_THIS->GetLayer(Z_Param_Out_LayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execMakeAllLayersVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakeAllLayersVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execToggleLayersVisibility)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_LayerNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleLayersVisibility(Z_Param_Out_LayerNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execToggleLayerVisibility)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleLayerVisibility(Z_Param_Out_LayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execSetLayersVisibility)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_LayerNames);
		P_GET_UBOOL(Z_Param_bIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLayersVisibility(Z_Param_Out_LayerNames,Z_Param_bIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execSetLayerVisibility)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LayerName);
		P_GET_UBOOL(Z_Param_bIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLayerVisibility(Z_Param_Out_LayerName,Z_Param_bIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execGetActorsFromLayers)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_LayerNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetActorsFromLayers(Z_Param_Out_LayerNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execGetActorsFromLayer)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetActorsFromLayer(Z_Param_Out_LayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execAppendActorsFromLayers)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_LayerNames);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_InOutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AppendActorsFromLayers(Z_Param_Out_LayerNames,Z_Param_Out_InOutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execAppendActorsFromLayer)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LayerName);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_InOutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AppendActorsFromLayer(Z_Param_Out_LayerName,Z_Param_Out_InOutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execUpdateAllActorsVisibility)
	{
		P_GET_UBOOL(Z_Param_bNotifySelectionChange);
		P_GET_UBOOL(Z_Param_bRedrawViewports);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateAllActorsVisibility(Z_Param_bNotifySelectionChange,Z_Param_bRedrawViewports);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execUpdateActorVisibility)
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
	DEFINE_FUNCTION(ULayersSubsystem::execUpdateActorAllViewsVisibility)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateActorAllViewsVisibility(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execUpdateAllViewVisibility)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LayerThatChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAllViewVisibility(Z_Param_Out_LayerThatChanged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execSelectActorsInLayers)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_LayerNames);
		P_GET_UBOOL(Z_Param_bSelect);
		P_GET_UBOOL(Z_Param_bNotify);
		P_GET_UBOOL(Z_Param_bSelectEvenIfHidden);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SelectActorsInLayers(Z_Param_Out_LayerNames,Z_Param_bSelect,Z_Param_bNotify,Z_Param_bSelectEvenIfHidden);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execSelectActorsInLayer)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LayerName);
		P_GET_UBOOL(Z_Param_bSelect);
		P_GET_UBOOL(Z_Param_bNotify);
		P_GET_UBOOL(Z_Param_bSelectEvenIfHidden);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SelectActorsInLayer(Z_Param_Out_LayerName,Z_Param_bSelect,Z_Param_bNotify,Z_Param_bSelectEvenIfHidden);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execRemoveSelectedActorsFromLayers)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_LayerNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSelectedActorsFromLayers(Z_Param_Out_LayerNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execRemoveSelectedActorsFromLayer)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSelectedActorsFromLayer(Z_Param_Out_LayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execAddSelectedActorsToLayers)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_LayerNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddSelectedActorsToLayers(Z_Param_Out_LayerNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execAddSelectedActorsToLayer)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddSelectedActorsToLayer(Z_Param_Out_LayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execGetSelectedActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetSelectedActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execRemoveActorsFromLayers)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_TARRAY_REF(FName,Z_Param_Out_LayerNames);
		P_GET_UBOOL(Z_Param_bUpdateStats);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveActorsFromLayers(Z_Param_Out_Actors,Z_Param_Out_LayerNames,Z_Param_bUpdateStats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execRemoveActorsFromLayer)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LayerName);
		P_GET_UBOOL(Z_Param_bUpdateStats);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveActorsFromLayer(Z_Param_Out_Actors,Z_Param_Out_LayerName,Z_Param_bUpdateStats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execDisassociateActorsFromLayers)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisassociateActorsFromLayers(Z_Param_Out_Actors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execAddActorsToLayers)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_TARRAY_REF(FName,Z_Param_Out_LayerNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddActorsToLayers(Z_Param_Out_Actors,Z_Param_Out_LayerNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execAddActorsToLayer)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddActorsToLayer(Z_Param_Out_Actors,Z_Param_Out_LayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execRemoveActorFromLayers)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_TARRAY_REF(FName,Z_Param_Out_LayerNames);
		P_GET_UBOOL(Z_Param_bUpdateStats);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveActorFromLayers(Z_Param_Actor,Z_Param_Out_LayerNames,Z_Param_bUpdateStats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execRemoveActorFromLayer)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LayerToRemove);
		P_GET_UBOOL(Z_Param_bUpdateStats);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveActorFromLayer(Z_Param_Actor,Z_Param_Out_LayerToRemove,Z_Param_bUpdateStats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execAddActorToLayers)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_TARRAY_REF(FName,Z_Param_Out_LayerNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddActorToLayers(Z_Param_Actor,Z_Param_Out_LayerNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execAddActorToLayer)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddActorToLayer(Z_Param_Actor,Z_Param_Out_LayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execDisassociateActorFromLayers)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisassociateActorFromLayers(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execInitializeNewActorLayers)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitializeNewActorLayers(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execIsActorValidForLayer)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActorValidForLayer(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execRemoveLevelLayerInformation)
	{
		P_GET_OBJECT(ULevel,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveLevelLayerInformation(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULayersSubsystem::execAddLevelLayerInformation)
	{
		P_GET_OBJECT(ULevel,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddLevelLayerInformation(Z_Param_Level);
		P_NATIVE_END;
	}
	void ULayersSubsystem::StaticRegisterNativesULayersSubsystem()
	{
		UClass* Class = ULayersSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActorsToLayer", &ULayersSubsystem::execAddActorsToLayer },
			{ "AddActorsToLayers", &ULayersSubsystem::execAddActorsToLayers },
			{ "AddActorToLayer", &ULayersSubsystem::execAddActorToLayer },
			{ "AddActorToLayers", &ULayersSubsystem::execAddActorToLayers },
			{ "AddAllLayerNamesTo", &ULayersSubsystem::execAddAllLayerNamesTo },
			{ "AddAllLayersTo", &ULayersSubsystem::execAddAllLayersTo },
			{ "AddLevelLayerInformation", &ULayersSubsystem::execAddLevelLayerInformation },
			{ "AddSelectedActorsToLayer", &ULayersSubsystem::execAddSelectedActorsToLayer },
			{ "AddSelectedActorsToLayers", &ULayersSubsystem::execAddSelectedActorsToLayers },
			{ "AppendActorsFromLayer", &ULayersSubsystem::execAppendActorsFromLayer },
			{ "AppendActorsFromLayers", &ULayersSubsystem::execAppendActorsFromLayers },
			{ "CreateLayer", &ULayersSubsystem::execCreateLayer },
			{ "DeleteLayer", &ULayersSubsystem::execDeleteLayer },
			{ "DeleteLayers", &ULayersSubsystem::execDeleteLayers },
			{ "DisassociateActorFromLayers", &ULayersSubsystem::execDisassociateActorFromLayers },
			{ "DisassociateActorsFromLayers", &ULayersSubsystem::execDisassociateActorsFromLayers },
			{ "EditorMapChange", &ULayersSubsystem::execEditorMapChange },
			{ "EditorRefreshLayerBrowser", &ULayersSubsystem::execEditorRefreshLayerBrowser },
			{ "GetActorsFromLayer", &ULayersSubsystem::execGetActorsFromLayer },
			{ "GetActorsFromLayers", &ULayersSubsystem::execGetActorsFromLayers },
			{ "GetLayer", &ULayersSubsystem::execGetLayer },
			{ "GetSelectedActors", &ULayersSubsystem::execGetSelectedActors },
			{ "GetWorld", &ULayersSubsystem::execGetWorld },
			{ "InitializeNewActorLayers", &ULayersSubsystem::execInitializeNewActorLayers },
			{ "IsActorValidForLayer", &ULayersSubsystem::execIsActorValidForLayer },
			{ "IsLayer", &ULayersSubsystem::execIsLayer },
			{ "MakeAllLayersVisible", &ULayersSubsystem::execMakeAllLayersVisible },
			{ "RemoveActorFromLayer", &ULayersSubsystem::execRemoveActorFromLayer },
			{ "RemoveActorFromLayers", &ULayersSubsystem::execRemoveActorFromLayers },
			{ "RemoveActorsFromLayer", &ULayersSubsystem::execRemoveActorsFromLayer },
			{ "RemoveActorsFromLayers", &ULayersSubsystem::execRemoveActorsFromLayers },
			{ "RemoveLevelLayerInformation", &ULayersSubsystem::execRemoveLevelLayerInformation },
			{ "RemoveSelectedActorsFromLayer", &ULayersSubsystem::execRemoveSelectedActorsFromLayer },
			{ "RemoveSelectedActorsFromLayers", &ULayersSubsystem::execRemoveSelectedActorsFromLayers },
			{ "RenameLayer", &ULayersSubsystem::execRenameLayer },
			{ "SelectActorsInLayer", &ULayersSubsystem::execSelectActorsInLayer },
			{ "SelectActorsInLayers", &ULayersSubsystem::execSelectActorsInLayers },
			{ "SetLayersVisibility", &ULayersSubsystem::execSetLayersVisibility },
			{ "SetLayerVisibility", &ULayersSubsystem::execSetLayerVisibility },
			{ "ToggleLayersVisibility", &ULayersSubsystem::execToggleLayersVisibility },
			{ "ToggleLayerVisibility", &ULayersSubsystem::execToggleLayerVisibility },
			{ "TryGetLayer", &ULayersSubsystem::execTryGetLayer },
			{ "UpdateActorAllViewsVisibility", &ULayersSubsystem::execUpdateActorAllViewsVisibility },
			{ "UpdateActorVisibility", &ULayersSubsystem::execUpdateActorVisibility },
			{ "UpdateAllActorsVisibility", &ULayersSubsystem::execUpdateAllActorsVisibility },
			{ "UpdateAllViewVisibility", &ULayersSubsystem::execUpdateAllViewVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics
	{
		struct LayersSubsystem_eventAddActorsToLayer_Parms
		{
			TArray<AActor*> Actors;
			FName LayerName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventAddActorsToLayer_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::NewProp_Actors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::NewProp_LayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventAddActorsToLayer_Parms, LayerName), METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::NewProp_LayerName_MetaData)) };
	void Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventAddActorsToLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventAddActorsToLayer_Parms), &Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Add the actors to the named layer\n\x09 *\n\x09 * @param\x09""Actors\x09\x09The actors to add to the named layer\n\x09 * @param\x09LayerName\x09The name of the layer to add to\n\x09 * @return\x09\x09\x09\x09true if at least one actor was added to the layer.  false is returned if all the actors already belonged to the layer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Add the actors to the named layer\n\n@param       Actors          The actors to add to the named layer\n@param       LayerName       The name of the layer to add to\n@return                              true if at least one actor was added to the layer.  false is returned if all the actors already belonged to the layer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "AddActorsToLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::LayersSubsystem_eventAddActorsToLayer_Parms), Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics
	{
		struct LayersSubsystem_eventAddActorsToLayers_Parms
		{
			TArray<AActor*> Actors;
			TArray<FName> LayerNames;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerNames;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventAddActorsToLayers_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::NewProp_LayerNames_Inner = { "LayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::NewProp_LayerNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::NewProp_LayerNames = { "LayerNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventAddActorsToLayers_Parms, LayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::NewProp_LayerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::NewProp_LayerNames_MetaData)) };
	void Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventAddActorsToLayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventAddActorsToLayers_Parms), &Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::NewProp_LayerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::NewProp_LayerNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Add the actors to the named layers\n\x09 *\n\x09 * @param\x09""Actors\x09\x09The actors to add to the named layers\n\x09 * @param\x09LayerNames\x09""A valid list of layer names.\n\x09 * @return\x09\x09\x09\x09true if at least one actor was added to at least one layer.  false is returned if all the actors already belonged to all specified layers.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Add the actors to the named layers\n\n@param       Actors          The actors to add to the named layers\n@param       LayerNames      A valid list of layer names.\n@return                              true if at least one actor was added to at least one layer.  false is returned if all the actors already belonged to all specified layers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "AddActorsToLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::LayersSubsystem_eventAddActorsToLayers_Parms), Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer_Statics
	{
		struct LayersSubsystem_eventAddActorToLayer_Parms
		{
			AActor* Actor;
			FName LayerName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventAddActorToLayer_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer_Statics::NewProp_LayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventAddActorToLayer_Parms, LayerName), METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer_Statics::NewProp_LayerName_MetaData)) };
	void Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventAddActorToLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventAddActorToLayer_Parms), &Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Adds the actor to the named layer.\n\x09 *\n\x09 * @param\x09""Actor\x09\x09The actor to add to the named layer\n\x09 * @param\x09LayerName\x09The name of the layer to add the actor to\n\x09 * @return\x09\x09\x09\x09true if the actor was added.  false is returned if the actor already belongs to the layer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Adds the actor to the named layer.\n\n@param       Actor           The actor to add to the named layer\n@param       LayerName       The name of the layer to add the actor to\n@return                              true if the actor was added.  false is returned if the actor already belongs to the layer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "AddActorToLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer_Statics::LayersSubsystem_eventAddActorToLayer_Parms), Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics
	{
		struct LayersSubsystem_eventAddActorToLayers_Parms
		{
			AActor* Actor;
			TArray<FName> LayerNames;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerNames;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventAddActorToLayers_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics::NewProp_LayerNames_Inner = { "LayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics::NewProp_LayerNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics::NewProp_LayerNames = { "LayerNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventAddActorToLayers_Parms, LayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics::NewProp_LayerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics::NewProp_LayerNames_MetaData)) };
	void Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventAddActorToLayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventAddActorToLayers_Parms), &Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics::NewProp_LayerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics::NewProp_LayerNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Adds the provided actor to the named layers.\n\x09 *\n\x09 * @param\x09""Actor\x09\x09The actor to add to the provided layers\n\x09 * @param\x09LayerNames\x09""A valid list of layer names.\n\x09 * @return\x09\x09\x09\x09true if the actor was added to at least one of the provided layers.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Adds the provided actor to the named layers.\n\n@param       Actor           The actor to add to the provided layers\n@param       LayerNames      A valid list of layer names.\n@return                              true if the actor was added to at least one of the provided layers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "AddActorToLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics::LayersSubsystem_eventAddActorToLayers_Parms), Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_AddAllLayerNamesTo_Statics
	{
		struct LayersSubsystem_eventAddAllLayerNamesTo_Parms
		{
			TArray<FName> OutLayerNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutLayerNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutLayerNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_AddAllLayerNamesTo_Statics::NewProp_OutLayerNames_Inner = { "OutLayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_AddAllLayerNamesTo_Statics::NewProp_OutLayerNames = { "OutLayerNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventAddAllLayerNamesTo_Parms, OutLayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_AddAllLayerNamesTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddAllLayerNamesTo_Statics::NewProp_OutLayerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddAllLayerNamesTo_Statics::NewProp_OutLayerNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_AddAllLayerNamesTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Gets all known layers and appends their names to the provide array\n\x09 *\n\x09 * @param OutLayers[OUT] Output array to store all known layers\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Gets all known layers and appends their names to the provide array\n\n@param OutLayers[OUT] Output array to store all known layers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_AddAllLayerNamesTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "AddAllLayerNamesTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_AddAllLayerNamesTo_Statics::LayersSubsystem_eventAddAllLayerNamesTo_Parms), Z_Construct_UFunction_ULayersSubsystem_AddAllLayerNamesTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddAllLayerNamesTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_AddAllLayerNamesTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddAllLayerNamesTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_AddAllLayerNamesTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_AddAllLayerNamesTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_AddAllLayersTo_Statics
	{
		struct LayersSubsystem_eventAddAllLayersTo_Parms
		{
			TArray<ULayer*> OutLayers;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutLayers_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutLayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_AddAllLayersTo_Statics::NewProp_OutLayers_Inner = { "OutLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_AddAllLayersTo_Statics::NewProp_OutLayers = { "OutLayers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventAddAllLayersTo_Parms, OutLayers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_AddAllLayersTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddAllLayersTo_Statics::NewProp_OutLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddAllLayersTo_Statics::NewProp_OutLayers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_AddAllLayersTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Gets all known layers and appends them to the provided array\n\x09 *\n\x09 * @param OutLayers[OUT] Output array to store all known layers\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Gets all known layers and appends them to the provided array\n\n@param OutLayers[OUT] Output array to store all known layers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_AddAllLayersTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "AddAllLayersTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_AddAllLayersTo_Statics::LayersSubsystem_eventAddAllLayersTo_Parms), Z_Construct_UFunction_ULayersSubsystem_AddAllLayersTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddAllLayersTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_AddAllLayersTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddAllLayersTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_AddAllLayersTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_AddAllLayersTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_AddLevelLayerInformation_Statics
	{
		struct LayersSubsystem_eventAddLevelLayerInformation_Parms
		{
			ULevel* Level;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_AddLevelLayerInformation_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventAddLevelLayerInformation_Parms, Level), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_AddLevelLayerInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddLevelLayerInformation_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_AddLevelLayerInformation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 *\x09""Aggregates any information regarding layers associated with the level and it contents\n\x09 *\n\x09 *\x09@param\x09Level\x09The process\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Aggregates any information regarding layers associated with the level and it contents\n\n@param  Level   The process" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_AddLevelLayerInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "AddLevelLayerInformation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_AddLevelLayerInformation_Statics::LayersSubsystem_eventAddLevelLayerInformation_Parms), Z_Construct_UFunction_ULayersSubsystem_AddLevelLayerInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddLevelLayerInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_AddLevelLayerInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddLevelLayerInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_AddLevelLayerInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_AddLevelLayerInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayer_Statics
	{
		struct LayersSubsystem_eventAddSelectedActorsToLayer_Parms
		{
			FName LayerName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayer_Statics::NewProp_LayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventAddSelectedActorsToLayer_Parms, LayerName), METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayer_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayer_Statics::NewProp_LayerName_MetaData)) };
	void Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventAddSelectedActorsToLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventAddSelectedActorsToLayer_Parms), &Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayer_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Adds selected actors to the named layer.\n\x09 *\n\x09 * @param\x09LayerName\x09""A layer name.\n\x09 * @return\x09\x09\x09\x09true if at least one actor was added.  false is returned if all selected actors already belong to the named layer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Adds selected actors to the named layer.\n\n@param       LayerName       A layer name.\n@return                              true if at least one actor was added.  false is returned if all selected actors already belong to the named layer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "AddSelectedActorsToLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayer_Statics::LayersSubsystem_eventAddSelectedActorsToLayer_Parms), Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers_Statics
	{
		struct LayersSubsystem_eventAddSelectedActorsToLayers_Parms
		{
			TArray<FName> LayerNames;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerNames;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers_Statics::NewProp_LayerNames_Inner = { "LayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers_Statics::NewProp_LayerNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers_Statics::NewProp_LayerNames = { "LayerNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventAddSelectedActorsToLayers_Parms, LayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers_Statics::NewProp_LayerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers_Statics::NewProp_LayerNames_MetaData)) };
	void Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventAddSelectedActorsToLayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventAddSelectedActorsToLayers_Parms), &Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers_Statics::NewProp_LayerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers_Statics::NewProp_LayerNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Adds selected actors to the named layers.\n\x09 *\n\x09 * @param\x09LayerNames\x09""A valid list of layer names.\n\x09 * @return\x09\x09\x09\x09true if at least one actor was added.  false is returned if all selected actors already belong to the named layers.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Adds selected actors to the named layers.\n\n@param       LayerNames      A valid list of layer names.\n@return                              true if at least one actor was added.  false is returned if all selected actors already belong to the named layers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "AddSelectedActorsToLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers_Statics::LayersSubsystem_eventAddSelectedActorsToLayers_Parms), Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayer_Statics
	{
		struct LayersSubsystem_eventAppendActorsFromLayer_Parms
		{
			FName LayerName;
			TArray<AActor*> InOutActors;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOutActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InOutActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayer_Statics::NewProp_LayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventAppendActorsFromLayer_Parms, LayerName), METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayer_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayer_Statics::NewProp_LayerName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayer_Statics::NewProp_InOutActors_Inner = { "InOutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayer_Statics::NewProp_InOutActors = { "InOutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventAppendActorsFromLayer_Parms, InOutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayer_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayer_Statics::NewProp_InOutActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayer_Statics::NewProp_InOutActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 *\x09""Appends all the actors associated with the specified layer.\n\x09 *\n\x09 *\x09@param\x09LayerName\x09\x09\x09The layer to find actors for.\n\x09 *\x09@param\x09InOutActors\x09\x09\x09The list to append the found actors to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Appends all the actors associated with the specified layer.\n\n@param  LayerName                       The layer to find actors for.\n@param  InOutActors                     The list to append the found actors to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "AppendActorsFromLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayer_Statics::LayersSubsystem_eventAppendActorsFromLayer_Parms), Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers_Statics
	{
		struct LayersSubsystem_eventAppendActorsFromLayers_Parms
		{
			TArray<FName> LayerNames;
			TArray<AActor*> InOutActors;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerNames;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOutActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InOutActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers_Statics::NewProp_LayerNames_Inner = { "LayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers_Statics::NewProp_LayerNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers_Statics::NewProp_LayerNames = { "LayerNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventAppendActorsFromLayers_Parms, LayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers_Statics::NewProp_LayerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers_Statics::NewProp_LayerNames_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers_Statics::NewProp_InOutActors_Inner = { "InOutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers_Statics::NewProp_InOutActors = { "InOutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventAppendActorsFromLayers_Parms, InOutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers_Statics::NewProp_LayerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers_Statics::NewProp_LayerNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers_Statics::NewProp_InOutActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers_Statics::NewProp_InOutActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 *\x09""Appends all the actors associated with ANY of the specified layers.\n\x09 *\n\x09 *\x09@param\x09LayerNames\x09\x09\x09The layers to find actors for.\n\x09 *\x09@param\x09InOutActors\x09\x09\x09The list to append the found actors to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Appends all the actors associated with ANY of the specified layers.\n\n@param  LayerNames                      The layers to find actors for.\n@param  InOutActors                     The list to append the found actors to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "AppendActorsFromLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers_Statics::LayersSubsystem_eventAppendActorsFromLayers_Parms), Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_CreateLayer_Statics
	{
		struct LayersSubsystem_eventCreateLayer_Parms
		{
			FName LayerName;
			ULayer* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_CreateLayer_Statics::NewProp_LayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_CreateLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventCreateLayer_Parms, LayerName), METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_CreateLayer_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_CreateLayer_Statics::NewProp_LayerName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_CreateLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventCreateLayer_Parms, ReturnValue), Z_Construct_UClass_ULayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_CreateLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_CreateLayer_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_CreateLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_CreateLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Creates a ULayer Object for the named layer\n\x09 *\n\x09 * @param\x09LayerName\x09The name of the layer to create\n\x09 * @return\x09\x09\x09\x09The newly created ULayer Object for the named layer\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Creates a ULayer Object for the named layer\n\n@param       LayerName       The name of the layer to create\n@return                              The newly created ULayer Object for the named layer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_CreateLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "CreateLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_CreateLayer_Statics::LayersSubsystem_eventCreateLayer_Parms), Z_Construct_UFunction_ULayersSubsystem_CreateLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_CreateLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_CreateLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_CreateLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_CreateLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_CreateLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_DeleteLayer_Statics
	{
		struct LayersSubsystem_eventDeleteLayer_Parms
		{
			FName LayerToDelete;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerToDelete_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerToDelete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_DeleteLayer_Statics::NewProp_LayerToDelete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_DeleteLayer_Statics::NewProp_LayerToDelete = { "LayerToDelete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventDeleteLayer_Parms, LayerToDelete), METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_DeleteLayer_Statics::NewProp_LayerToDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_DeleteLayer_Statics::NewProp_LayerToDelete_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_DeleteLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_DeleteLayer_Statics::NewProp_LayerToDelete,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_DeleteLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Deletes the provided layer, disassociating all actors from them\n\x09 *\n\x09 * @param LayerToDelete\x09\x09""A valid layer name\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Deletes the provided layer, disassociating all actors from them\n\n@param LayerToDelete         A valid layer name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_DeleteLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "DeleteLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_DeleteLayer_Statics::LayersSubsystem_eventDeleteLayer_Parms), Z_Construct_UFunction_ULayersSubsystem_DeleteLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_DeleteLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_DeleteLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_DeleteLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_DeleteLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_DeleteLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_DeleteLayers_Statics
	{
		struct LayersSubsystem_eventDeleteLayers_Parms
		{
			TArray<FName> LayersToDelete;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayersToDelete_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayersToDelete_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayersToDelete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_DeleteLayers_Statics::NewProp_LayersToDelete_Inner = { "LayersToDelete", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_DeleteLayers_Statics::NewProp_LayersToDelete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_DeleteLayers_Statics::NewProp_LayersToDelete = { "LayersToDelete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventDeleteLayers_Parms, LayersToDelete), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_DeleteLayers_Statics::NewProp_LayersToDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_DeleteLayers_Statics::NewProp_LayersToDelete_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_DeleteLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_DeleteLayers_Statics::NewProp_LayersToDelete_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_DeleteLayers_Statics::NewProp_LayersToDelete,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_DeleteLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Deletes all of the provided layers, disassociating all actors from them\n\x09 *\n\x09 * @param LayersToDelete\x09""A valid list of layer names.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Deletes all of the provided layers, disassociating all actors from them\n\n@param LayersToDelete        A valid list of layer names." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_DeleteLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "DeleteLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_DeleteLayers_Statics::LayersSubsystem_eventDeleteLayers_Parms), Z_Construct_UFunction_ULayersSubsystem_DeleteLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_DeleteLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_DeleteLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_DeleteLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_DeleteLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_DeleteLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_DisassociateActorFromLayers_Statics
	{
		struct LayersSubsystem_eventDisassociateActorFromLayers_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_DisassociateActorFromLayers_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventDisassociateActorFromLayers_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULayersSubsystem_DisassociateActorFromLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventDisassociateActorFromLayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_DisassociateActorFromLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventDisassociateActorFromLayers_Parms), &Z_Construct_UFunction_ULayersSubsystem_DisassociateActorFromLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_DisassociateActorFromLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_DisassociateActorFromLayers_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_DisassociateActorFromLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_DisassociateActorFromLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 *\x09""Disassociates an Actor's layers from the layer system, general used before deleting the Actor\n\x09 *\n\x09 *\x09@param\x09""Actor\x09The actor to disassociate from the layer system\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Disassociates an Actor's layers from the layer system, general used before deleting the Actor\n\n@param  Actor   The actor to disassociate from the layer system" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_DisassociateActorFromLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "DisassociateActorFromLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_DisassociateActorFromLayers_Statics::LayersSubsystem_eventDisassociateActorFromLayers_Parms), Z_Construct_UFunction_ULayersSubsystem_DisassociateActorFromLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_DisassociateActorFromLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_DisassociateActorFromLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_DisassociateActorFromLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_DisassociateActorFromLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_DisassociateActorFromLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers_Statics
	{
		struct LayersSubsystem_eventDisassociateActorsFromLayers_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventDisassociateActorsFromLayers_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers_Statics::NewProp_Actors_MetaData)) };
	void Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventDisassociateActorsFromLayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventDisassociateActorsFromLayers_Parms), &Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09*\x09""Disassociates actors from the layer system, generally used before deleting the Actors\n\x09*\n\x09*\x09@param\x09""Actors\x09The actors to disassociate from the layer system\n\x09*/" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Disassociates actors from the layer system, generally used before deleting the Actors\n\n@param  Actors  The actors to disassociate from the layer system" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "DisassociateActorsFromLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers_Statics::LayersSubsystem_eventDisassociateActorsFromLayers_Parms), Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_EditorMapChange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_EditorMapChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Delegate handler for FEditorDelegates::MapChange. It internally calls LayersChanged.Broadcast.\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Delegate handler for FEditorDelegates::MapChange. It internally calls LayersChanged.Broadcast." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_EditorMapChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "EditorMapChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_EditorMapChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_EditorMapChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_EditorMapChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_EditorMapChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_EditorRefreshLayerBrowser_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_EditorRefreshLayerBrowser_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Delegate handler for FEditorDelegates::RefreshLayerBrowser. It internally calls UpdateAllActorsVisibility to refresh the actors of each layer.\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Delegate handler for FEditorDelegates::RefreshLayerBrowser. It internally calls UpdateAllActorsVisibility to refresh the actors of each layer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_EditorRefreshLayerBrowser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "EditorRefreshLayerBrowser", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_EditorRefreshLayerBrowser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_EditorRefreshLayerBrowser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_EditorRefreshLayerBrowser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_EditorRefreshLayerBrowser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayer_Statics
	{
		struct LayersSubsystem_eventGetActorsFromLayer_Parms
		{
			FName LayerName;
			TArray<AActor*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayer_Statics::NewProp_LayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventGetActorsFromLayer_Parms, LayerName), METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayer_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayer_Statics::NewProp_LayerName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayer_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventGetActorsFromLayer_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayer_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayer_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 *\x09Gets all the actors associated with the specified layer. Analog to AppendActorsFromLayer but it returns rather than appends the actors.\n\x09 *\n\x09 *\x09@param\x09LayerName\x09\x09\x09The layer to find actors for.\n\x09 *\x09@return\x09\x09\x09\x09\x09\x09The list to assign the found actors to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Gets all the actors associated with the specified layer. Analog to AppendActorsFromLayer but it returns rather than appends the actors.\n\n@param  LayerName                       The layer to find actors for.\n@return                                         The list to assign the found actors to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "GetActorsFromLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayer_Statics::LayersSubsystem_eventGetActorsFromLayer_Parms), Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers_Statics
	{
		struct LayersSubsystem_eventGetActorsFromLayers_Parms
		{
			TArray<FName> LayerNames;
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerNames;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers_Statics::NewProp_LayerNames_Inner = { "LayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers_Statics::NewProp_LayerNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers_Statics::NewProp_LayerNames = { "LayerNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventGetActorsFromLayers_Parms, LayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers_Statics::NewProp_LayerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers_Statics::NewProp_LayerNames_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventGetActorsFromLayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers_Statics::NewProp_LayerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers_Statics::NewProp_LayerNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 *\x09Gets all the actors associated with ANY of the specified layers. Analog to AppendActorsFromLayers but it returns rather than appends the actors.\n\x09 *\n\x09 *\x09@param\x09LayerNames\x09\x09\x09The layers to find actors for.\n\x09 *\x09@return\x09\x09\x09\x09\x09\x09The list to assign the found actors to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Gets all the actors associated with ANY of the specified layers. Analog to AppendActorsFromLayers but it returns rather than appends the actors.\n\n@param  LayerNames                      The layers to find actors for.\n@return                                         The list to assign the found actors to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "GetActorsFromLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers_Statics::LayersSubsystem_eventGetActorsFromLayers_Parms), Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_GetLayer_Statics
	{
		struct LayersSubsystem_eventGetLayer_Parms
		{
			FName LayerName;
			ULayer* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_GetLayer_Statics::NewProp_LayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_GetLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventGetLayer_Parms, LayerName), METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_GetLayer_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_GetLayer_Statics::NewProp_LayerName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_GetLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventGetLayer_Parms, ReturnValue), Z_Construct_UClass_ULayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_GetLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_GetLayer_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_GetLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_GetLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Gets the ULayer Object of the named layer\n\x09 *\n\x09 * @param\x09LayerName\x09The name of the layer whose ULayer Object is returned\n\x09 * @return\x09\x09\x09\x09The ULayer Object of the provided layer name\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Gets the ULayer Object of the named layer\n\n@param       LayerName       The name of the layer whose ULayer Object is returned\n@return                              The ULayer Object of the provided layer name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_GetLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "GetLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_GetLayer_Statics::LayersSubsystem_eventGetLayer_Parms), Z_Construct_UFunction_ULayersSubsystem_GetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_GetLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_GetLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_GetLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_GetLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_GetLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_GetSelectedActors_Statics
	{
		struct LayersSubsystem_eventGetSelectedActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_GetSelectedActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_GetSelectedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventGetSelectedActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_GetSelectedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_GetSelectedActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_GetSelectedActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_GetSelectedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Find and return the selected actors.\n\x09 *\n\x09 * @return\x09\x09\x09\x09The selected AActor's as a TArray.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Find and return the selected actors.\n\n@return                              The selected AActor's as a TArray." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_GetSelectedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "GetSelectedActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_GetSelectedActors_Statics::LayersSubsystem_eventGetSelectedActors_Parms), Z_Construct_UFunction_ULayersSubsystem_GetSelectedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_GetSelectedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_GetSelectedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_GetSelectedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_GetSelectedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_GetSelectedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_GetWorld_Statics
	{
		struct LayersSubsystem_eventGetWorld_Parms
		{
			UWorld* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_GetWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventGetWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_GetWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_GetWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_GetWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Get the current UWorld object.\n\x09 *\n\x09 * @return\x09\x09\x09\x09\x09\x09The UWorld* object\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Get the current UWorld object.\n\n@return                                              The UWorld* object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_GetWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "GetWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_GetWorld_Statics::LayersSubsystem_eventGetWorld_Parms), Z_Construct_UFunction_ULayersSubsystem_GetWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_GetWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_GetWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_GetWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_GetWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_GetWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_InitializeNewActorLayers_Statics
	{
		struct LayersSubsystem_eventInitializeNewActorLayers_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_InitializeNewActorLayers_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventInitializeNewActorLayers_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULayersSubsystem_InitializeNewActorLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventInitializeNewActorLayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_InitializeNewActorLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventInitializeNewActorLayers_Parms), &Z_Construct_UFunction_ULayersSubsystem_InitializeNewActorLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_InitializeNewActorLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_InitializeNewActorLayers_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_InitializeNewActorLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_InitializeNewActorLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 *\x09Synchronizes an newly created Actor's layers with the layer system\n\x09 *\n\x09 *\x09@param\x09""Actor\x09The actor to initialize\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Synchronizes an newly created Actor's layers with the layer system\n\n@param  Actor   The actor to initialize" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_InitializeNewActorLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "InitializeNewActorLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_InitializeNewActorLayers_Statics::LayersSubsystem_eventInitializeNewActorLayers_Parms), Z_Construct_UFunction_ULayersSubsystem_InitializeNewActorLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_InitializeNewActorLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_InitializeNewActorLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_InitializeNewActorLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_InitializeNewActorLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_InitializeNewActorLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_IsActorValidForLayer_Statics
	{
		struct LayersSubsystem_eventIsActorValidForLayer_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_IsActorValidForLayer_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventIsActorValidForLayer_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULayersSubsystem_IsActorValidForLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventIsActorValidForLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_IsActorValidForLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventIsActorValidForLayer_Parms), &Z_Construct_UFunction_ULayersSubsystem_IsActorValidForLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_IsActorValidForLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_IsActorValidForLayer_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_IsActorValidForLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_IsActorValidForLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 *\x09""Checks to see if the specified actor is in an appropriate state to interact with layers\n\x09 *\n\x09 *\x09@param\x09""Actor\x09The actor to validate\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Checks to see if the specified actor is in an appropriate state to interact with layers\n\n@param  Actor   The actor to validate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_IsActorValidForLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "IsActorValidForLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_IsActorValidForLayer_Statics::LayersSubsystem_eventIsActorValidForLayer_Parms), Z_Construct_UFunction_ULayersSubsystem_IsActorValidForLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_IsActorValidForLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_IsActorValidForLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_IsActorValidForLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_IsActorValidForLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_IsActorValidForLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_IsLayer_Statics
	{
		struct LayersSubsystem_eventIsLayer_Parms
		{
			FName LayerName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_IsLayer_Statics::NewProp_LayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_IsLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventIsLayer_Parms, LayerName), METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_IsLayer_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_IsLayer_Statics::NewProp_LayerName_MetaData)) };
	void Z_Construct_UFunction_ULayersSubsystem_IsLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventIsLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_IsLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventIsLayer_Parms), &Z_Construct_UFunction_ULayersSubsystem_IsLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_IsLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_IsLayer_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_IsLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_IsLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Checks whether the ULayer Object of the provided layer name exists.\n\x09 *\n\x09 * @param\x09LayerName\x09\x09The name of the layer whose ULayer Object to retrieve\n\x09 * @return\x09\x09\x09\x09\x09If true a valid ULayer Object was found; if false, a valid ULayer object was not found\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Checks whether the ULayer Object of the provided layer name exists.\n\n@param       LayerName               The name of the layer whose ULayer Object to retrieve\n@return                                      If true a valid ULayer Object was found; if false, a valid ULayer object was not found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_IsLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "IsLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_IsLayer_Statics::LayersSubsystem_eventIsLayer_Parms), Z_Construct_UFunction_ULayersSubsystem_IsLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_IsLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_IsLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_IsLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_IsLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_IsLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_MakeAllLayersVisible_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_MakeAllLayersVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Set the visibility of all layers to true\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Set the visibility of all layers to true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_MakeAllLayersVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "MakeAllLayersVisible", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_MakeAllLayersVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_MakeAllLayersVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_MakeAllLayersVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_MakeAllLayersVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics
	{
		struct LayersSubsystem_eventRemoveActorFromLayer_Parms
		{
			AActor* Actor;
			FName LayerToRemove;
			bool bUpdateStats;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerToRemove_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerToRemove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateStats_MetaData[];
#endif
		static void NewProp_bUpdateStats_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateStats;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventRemoveActorFromLayer_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::NewProp_LayerToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::NewProp_LayerToRemove = { "LayerToRemove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventRemoveActorFromLayer_Parms, LayerToRemove), METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::NewProp_LayerToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::NewProp_LayerToRemove_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::NewProp_bUpdateStats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::NewProp_bUpdateStats_SetBit(void* Obj)
	{
		((LayersSubsystem_eventRemoveActorFromLayer_Parms*)Obj)->bUpdateStats = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::NewProp_bUpdateStats = { "bUpdateStats", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventRemoveActorFromLayer_Parms), &Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::NewProp_bUpdateStats_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::NewProp_bUpdateStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::NewProp_bUpdateStats_MetaData)) };
	void Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventRemoveActorFromLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventRemoveActorFromLayer_Parms), &Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::NewProp_LayerToRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::NewProp_bUpdateStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Removes an actor from the specified layer.\n\x09 *\n\x09 * @param\x09""Actor\x09\x09\x09The actor to remove from the provided layer\n\x09 * @param\x09LayerToRemove\x09The name of the layer to remove the actor from\n\x09 * @return\x09\x09\x09\x09\x09true if the actor was removed from the layer.  false is returned if the actor already belonged to the layer.\n\x09 */" },
		{ "CPP_Default_bUpdateStats", "true" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Removes an actor from the specified layer.\n\n@param       Actor                   The actor to remove from the provided layer\n@param       LayerToRemove   The name of the layer to remove the actor from\n@return                                      true if the actor was removed from the layer.  false is returned if the actor already belonged to the layer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "RemoveActorFromLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::LayersSubsystem_eventRemoveActorFromLayer_Parms), Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics
	{
		struct LayersSubsystem_eventRemoveActorFromLayers_Parms
		{
			AActor* Actor;
			TArray<FName> LayerNames;
			bool bUpdateStats;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateStats_MetaData[];
#endif
		static void NewProp_bUpdateStats_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateStats;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventRemoveActorFromLayers_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::NewProp_LayerNames_Inner = { "LayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::NewProp_LayerNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::NewProp_LayerNames = { "LayerNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventRemoveActorFromLayers_Parms, LayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::NewProp_LayerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::NewProp_LayerNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::NewProp_bUpdateStats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::NewProp_bUpdateStats_SetBit(void* Obj)
	{
		((LayersSubsystem_eventRemoveActorFromLayers_Parms*)Obj)->bUpdateStats = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::NewProp_bUpdateStats = { "bUpdateStats", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventRemoveActorFromLayers_Parms), &Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::NewProp_bUpdateStats_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::NewProp_bUpdateStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::NewProp_bUpdateStats_MetaData)) };
	void Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventRemoveActorFromLayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventRemoveActorFromLayers_Parms), &Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::NewProp_LayerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::NewProp_LayerNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::NewProp_bUpdateStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Removes the provided actor from the named layers.\n\x09 *\n\x09 * @param\x09""Actor\x09\x09The actor to remove from the provided layers\n\x09 * @param\x09LayerNames\x09""A valid list of layer names.\n\x09 * @return\x09\x09\x09\x09true if the actor was removed from at least one of the provided layers.\n\x09 */" },
		{ "CPP_Default_bUpdateStats", "true" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Removes the provided actor from the named layers.\n\n@param       Actor           The actor to remove from the provided layers\n@param       LayerNames      A valid list of layer names.\n@return                              true if the actor was removed from at least one of the provided layers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "RemoveActorFromLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::LayersSubsystem_eventRemoveActorFromLayers_Parms), Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics
	{
		struct LayersSubsystem_eventRemoveActorsFromLayer_Parms
		{
			TArray<AActor*> Actors;
			FName LayerName;
			bool bUpdateStats;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateStats_MetaData[];
#endif
		static void NewProp_bUpdateStats_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateStats;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventRemoveActorsFromLayer_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_Actors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_LayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventRemoveActorsFromLayer_Parms, LayerName), METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_LayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_bUpdateStats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_bUpdateStats_SetBit(void* Obj)
	{
		((LayersSubsystem_eventRemoveActorsFromLayer_Parms*)Obj)->bUpdateStats = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_bUpdateStats = { "bUpdateStats", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventRemoveActorsFromLayer_Parms), &Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_bUpdateStats_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_bUpdateStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_bUpdateStats_MetaData)) };
	void Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventRemoveActorsFromLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventRemoveActorsFromLayer_Parms), &Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_bUpdateStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Removes the actors from the specified layer.\n\x09 *\n\x09 * @param\x09""Actors\x09\x09\x09The actors to remove from the provided layer\n\x09 * @param\x09LayerToRemove\x09The name of the layer to remove the actors from\n\x09 * @return\x09\x09\x09\x09\x09true if at least one actor was removed from the layer.  false is returned if all the actors already belonged to the layer.\n\x09 */" },
		{ "CPP_Default_bUpdateStats", "true" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Removes the actors from the specified layer.\n\n@param       Actors                  The actors to remove from the provided layer\n@param       LayerToRemove   The name of the layer to remove the actors from\n@return                                      true if at least one actor was removed from the layer.  false is returned if all the actors already belonged to the layer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "RemoveActorsFromLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::LayersSubsystem_eventRemoveActorsFromLayer_Parms), Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics
	{
		struct LayersSubsystem_eventRemoveActorsFromLayers_Parms
		{
			TArray<AActor*> Actors;
			TArray<FName> LayerNames;
			bool bUpdateStats;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateStats_MetaData[];
#endif
		static void NewProp_bUpdateStats_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateStats;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventRemoveActorsFromLayers_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_LayerNames_Inner = { "LayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_LayerNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_LayerNames = { "LayerNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventRemoveActorsFromLayers_Parms, LayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_LayerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_LayerNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_bUpdateStats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_bUpdateStats_SetBit(void* Obj)
	{
		((LayersSubsystem_eventRemoveActorsFromLayers_Parms*)Obj)->bUpdateStats = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_bUpdateStats = { "bUpdateStats", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventRemoveActorsFromLayers_Parms), &Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_bUpdateStats_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_bUpdateStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_bUpdateStats_MetaData)) };
	void Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventRemoveActorsFromLayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventRemoveActorsFromLayers_Parms), &Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_LayerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_LayerNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_bUpdateStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Remove the actors to the named layers\n\x09 *\n\x09 * @param\x09""Actors\x09\x09The actors to remove to the named layers\n\x09 * @param\x09LayerNames\x09""A valid list of layer names.\n\x09 * @return\x09\x09\x09\x09true if at least one actor was removed from at least one layer.  false is returned if none of the actors belonged to any of the specified layers.\n\x09 */" },
		{ "CPP_Default_bUpdateStats", "true" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Remove the actors to the named layers\n\n@param       Actors          The actors to remove to the named layers\n@param       LayerNames      A valid list of layer names.\n@return                              true if at least one actor was removed from at least one layer.  false is returned if none of the actors belonged to any of the specified layers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "RemoveActorsFromLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::LayersSubsystem_eventRemoveActorsFromLayers_Parms), Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_RemoveLevelLayerInformation_Statics
	{
		struct LayersSubsystem_eventRemoveLevelLayerInformation_Parms
		{
			ULevel* Level;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveLevelLayerInformation_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventRemoveLevelLayerInformation_Parms, Level), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_RemoveLevelLayerInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveLevelLayerInformation_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_RemoveLevelLayerInformation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 *\x09Purges any information regarding layers associated with the level and it contents\n\x09 *\n\x09 *\x09@param\x09Level\x09The process\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Purges any information regarding layers associated with the level and it contents\n\n@param  Level   The process" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_RemoveLevelLayerInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "RemoveLevelLayerInformation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_RemoveLevelLayerInformation_Statics::LayersSubsystem_eventRemoveLevelLayerInformation_Parms), Z_Construct_UFunction_ULayersSubsystem_RemoveLevelLayerInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveLevelLayerInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_RemoveLevelLayerInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveLevelLayerInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_RemoveLevelLayerInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_RemoveLevelLayerInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayer_Statics
	{
		struct LayersSubsystem_eventRemoveSelectedActorsFromLayer_Parms
		{
			FName LayerName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayer_Statics::NewProp_LayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventRemoveSelectedActorsFromLayer_Parms, LayerName), METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayer_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayer_Statics::NewProp_LayerName_MetaData)) };
	void Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventRemoveSelectedActorsFromLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventRemoveSelectedActorsFromLayer_Parms), &Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayer_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Removes the selected actors from the named layer.\n\x09 *\n\x09 * @param\x09LayerName\x09""A layer name.\n\x09 * @return\x09\x09\x09\x09true if at least one actor was added.  false is returned if all selected actors already belong to the named layer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Removes the selected actors from the named layer.\n\n@param       LayerName       A layer name.\n@return                              true if at least one actor was added.  false is returned if all selected actors already belong to the named layer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "RemoveSelectedActorsFromLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayer_Statics::LayersSubsystem_eventRemoveSelectedActorsFromLayer_Parms), Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers_Statics
	{
		struct LayersSubsystem_eventRemoveSelectedActorsFromLayers_Parms
		{
			TArray<FName> LayerNames;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerNames;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers_Statics::NewProp_LayerNames_Inner = { "LayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers_Statics::NewProp_LayerNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers_Statics::NewProp_LayerNames = { "LayerNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventRemoveSelectedActorsFromLayers_Parms, LayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers_Statics::NewProp_LayerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers_Statics::NewProp_LayerNames_MetaData)) };
	void Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventRemoveSelectedActorsFromLayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventRemoveSelectedActorsFromLayers_Parms), &Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers_Statics::NewProp_LayerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers_Statics::NewProp_LayerNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Removes selected actors from the named layers.\n\x09 *\n\x09 * @param\x09LayerNames\x09""A valid list of layer names.\n\x09 * @return\x09\x09\x09\x09true if at least one actor was removed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Removes selected actors from the named layers.\n\n@param       LayerNames      A valid list of layer names.\n@return                              true if at least one actor was removed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "RemoveSelectedActorsFromLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers_Statics::LayersSubsystem_eventRemoveSelectedActorsFromLayers_Parms), Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics
	{
		struct LayersSubsystem_eventRenameLayer_Parms
		{
			FName OriginalLayerName;
			FName NewLayerName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OriginalLayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewLayerName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::NewProp_OriginalLayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::NewProp_OriginalLayerName = { "OriginalLayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventRenameLayer_Parms, OriginalLayerName), METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::NewProp_OriginalLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::NewProp_OriginalLayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::NewProp_NewLayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::NewProp_NewLayerName = { "NewLayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventRenameLayer_Parms, NewLayerName), METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::NewProp_NewLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::NewProp_NewLayerName_MetaData)) };
	void Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventRenameLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventRenameLayer_Parms), &Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::NewProp_OriginalLayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::NewProp_NewLayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Renames the provided originally named layer to the provided new name\n\x09 *\n\x09 * @param\x09OriginalLayerName\x09The name of the layer to be renamed\n\x09 * @param\x09NewLayerName\x09\x09The new name for the layer to be renamed\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Renames the provided originally named layer to the provided new name\n\n@param       OriginalLayerName       The name of the layer to be renamed\n@param       NewLayerName            The new name for the layer to be renamed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "RenameLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::LayersSubsystem_eventRenameLayer_Parms), Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_RenameLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_RenameLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics
	{
		struct LayersSubsystem_eventSelectActorsInLayer_Parms
		{
			FName LayerName;
			bool bSelect;
			bool bNotify;
			bool bSelectEvenIfHidden;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_LayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventSelectActorsInLayer_Parms, LayerName), METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_LayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_bSelect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_bSelect_SetBit(void* Obj)
	{
		((LayersSubsystem_eventSelectActorsInLayer_Parms*)Obj)->bSelect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_bSelect = { "bSelect", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventSelectActorsInLayer_Parms), &Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_bSelect_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_bSelect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_bSelect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_bNotify_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_bNotify_SetBit(void* Obj)
	{
		((LayersSubsystem_eventSelectActorsInLayer_Parms*)Obj)->bNotify = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_bNotify = { "bNotify", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventSelectActorsInLayer_Parms), &Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_bNotify_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_bNotify_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_bNotify_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_bSelectEvenIfHidden_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_bSelectEvenIfHidden_SetBit(void* Obj)
	{
		((LayersSubsystem_eventSelectActorsInLayer_Parms*)Obj)->bSelectEvenIfHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_bSelectEvenIfHidden = { "bSelectEvenIfHidden", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventSelectActorsInLayer_Parms), &Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_bSelectEvenIfHidden_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_bSelectEvenIfHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_bSelectEvenIfHidden_MetaData)) };
	void Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventSelectActorsInLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventSelectActorsInLayer_Parms), &Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_bSelect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_bNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_bSelectEvenIfHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Selects/de-selects actors belonging to the named layer.\n\x09 *\n\x09 * @param\x09LayerName\x09\x09\x09\x09\x09\x09""A valid layer name.\n\x09 * @param\x09""bSelect\x09\x09\x09\x09\x09\x09\x09If true actors are selected; if false, actors are deselected.\n\x09 * @param\x09""bNotify\x09\x09\x09\x09\x09\x09\x09If true the Editor is notified of the selection change; if false, the Editor will not be notified.\n\x09 * @param\x09""bSelectEvenIfHidden\x09[optional]\x09If true even hidden actors will be selected; if false, hidden actors won't be selected.\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09\x09\x09true if at least one actor was selected/deselected.\n\x09 */" },
		{ "CPP_Default_bSelectEvenIfHidden", "false" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Selects/de-selects actors belonging to the named layer.\n\n@param       LayerName                                               A valid layer name.\n@param       bSelect                                                 If true actors are selected; if false, actors are deselected.\n@param       bNotify                                                 If true the Editor is notified of the selection change; if false, the Editor will not be notified.\n@param       bSelectEvenIfHidden     [optional]      If true even hidden actors will be selected; if false, hidden actors won't be selected.\n@return                                                                      true if at least one actor was selected/deselected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "SelectActorsInLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::LayersSubsystem_eventSelectActorsInLayer_Parms), Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics
	{
		struct LayersSubsystem_eventSelectActorsInLayers_Parms
		{
			TArray<FName> LayerNames;
			bool bSelect;
			bool bNotify;
			bool bSelectEvenIfHidden;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerNames;
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_LayerNames_Inner = { "LayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_LayerNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_LayerNames = { "LayerNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventSelectActorsInLayers_Parms, LayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_LayerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_LayerNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_bSelect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_bSelect_SetBit(void* Obj)
	{
		((LayersSubsystem_eventSelectActorsInLayers_Parms*)Obj)->bSelect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_bSelect = { "bSelect", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventSelectActorsInLayers_Parms), &Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_bSelect_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_bSelect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_bSelect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_bNotify_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_bNotify_SetBit(void* Obj)
	{
		((LayersSubsystem_eventSelectActorsInLayers_Parms*)Obj)->bNotify = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_bNotify = { "bNotify", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventSelectActorsInLayers_Parms), &Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_bNotify_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_bNotify_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_bNotify_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_bSelectEvenIfHidden_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_bSelectEvenIfHidden_SetBit(void* Obj)
	{
		((LayersSubsystem_eventSelectActorsInLayers_Parms*)Obj)->bSelectEvenIfHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_bSelectEvenIfHidden = { "bSelectEvenIfHidden", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventSelectActorsInLayers_Parms), &Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_bSelectEvenIfHidden_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_bSelectEvenIfHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_bSelectEvenIfHidden_MetaData)) };
	void Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventSelectActorsInLayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventSelectActorsInLayers_Parms), &Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_LayerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_LayerNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_bSelect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_bNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_bSelectEvenIfHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Selects/de-selects actors belonging to the named layers.\n\x09 *\n\x09 * @param\x09LayerNames\x09\x09\x09\x09\x09\x09""A valid list of layer names.\n\x09 * @param\x09""bSelect\x09\x09\x09\x09\x09\x09\x09If true actors are selected; if false, actors are deselected.\n\x09 * @param\x09""bNotify\x09\x09\x09\x09\x09\x09\x09If true the Editor is notified of the selection change; if false, the Editor will not be notified\n\x09 * @param\x09""bSelectEvenIfHidden\x09[optional]\x09If true even hidden actors will be selected; if false, hidden actors won't be selected.\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09\x09\x09true if at least one actor was selected/deselected.\n\x09 */" },
		{ "CPP_Default_bSelectEvenIfHidden", "false" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Selects/de-selects actors belonging to the named layers.\n\n@param       LayerNames                                              A valid list of layer names.\n@param       bSelect                                                 If true actors are selected; if false, actors are deselected.\n@param       bNotify                                                 If true the Editor is notified of the selection change; if false, the Editor will not be notified\n@param       bSelectEvenIfHidden     [optional]      If true even hidden actors will be selected; if false, hidden actors won't be selected.\n@return                                                                      true if at least one actor was selected/deselected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "SelectActorsInLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::LayersSubsystem_eventSelectActorsInLayers_Parms), Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics
	{
		struct LayersSubsystem_eventSetLayersVisibility_Parms
		{
			TArray<FName> LayerNames;
			bool bIsVisible;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerNames;
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::NewProp_LayerNames_Inner = { "LayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::NewProp_LayerNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::NewProp_LayerNames = { "LayerNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventSetLayersVisibility_Parms, LayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::NewProp_LayerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::NewProp_LayerNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((LayersSubsystem_eventSetLayersVisibility_Parms*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventSetLayersVisibility_Parms), &Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::NewProp_bIsVisible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::NewProp_LayerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::NewProp_LayerNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::NewProp_bIsVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Changes visibility of the named layers to the provided state\n\x09 *\n\x09 * @param\x09LayerNames\x09The names of the layers to affect\n\x09 * @param\x09""bIsVisible\x09If true the layers will be visible; if false, the layers will not be visible\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Changes visibility of the named layers to the provided state\n\n@param       LayerNames      The names of the layers to affect\n@param       bIsVisible      If true the layers will be visible; if false, the layers will not be visible" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "SetLayersVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::LayersSubsystem_eventSetLayersVisibility_Parms), Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility_Statics
	{
		struct LayersSubsystem_eventSetLayerVisibility_Parms
		{
			FName LayerName;
			bool bIsVisible;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility_Statics::NewProp_LayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventSetLayerVisibility_Parms, LayerName), METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility_Statics::NewProp_LayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((LayersSubsystem_eventSetLayerVisibility_Parms*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventSetLayerVisibility_Parms), &Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility_Statics::NewProp_bIsVisible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility_Statics::NewProp_bIsVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Changes the named layer's visibility to the provided state\n\x09 *\n\x09 * @param\x09LayerName\x09The name of the layer to affect.\n\x09 * @param\x09""bIsVisible\x09If true the layer will be visible; if false, the layer will not be visible.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Changes the named layer's visibility to the provided state\n\n@param       LayerName       The name of the layer to affect.\n@param       bIsVisible      If true the layer will be visible; if false, the layer will not be visible." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "SetLayerVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility_Statics::LayersSubsystem_eventSetLayerVisibility_Parms), Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_ToggleLayersVisibility_Statics
	{
		struct LayersSubsystem_eventToggleLayersVisibility_Parms
		{
			TArray<FName> LayerNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_ToggleLayersVisibility_Statics::NewProp_LayerNames_Inner = { "LayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_ToggleLayersVisibility_Statics::NewProp_LayerNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULayersSubsystem_ToggleLayersVisibility_Statics::NewProp_LayerNames = { "LayerNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventToggleLayersVisibility_Parms, LayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_ToggleLayersVisibility_Statics::NewProp_LayerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_ToggleLayersVisibility_Statics::NewProp_LayerNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_ToggleLayersVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_ToggleLayersVisibility_Statics::NewProp_LayerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_ToggleLayersVisibility_Statics::NewProp_LayerNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_ToggleLayersVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Toggles the visibility of all of the named layers\n\x09 *\n\x09 * @param\x09LayerNames\x09The names of the layers to affect\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Toggles the visibility of all of the named layers\n\n@param       LayerNames      The names of the layers to affect" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_ToggleLayersVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "ToggleLayersVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_ToggleLayersVisibility_Statics::LayersSubsystem_eventToggleLayersVisibility_Parms), Z_Construct_UFunction_ULayersSubsystem_ToggleLayersVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_ToggleLayersVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_ToggleLayersVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_ToggleLayersVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_ToggleLayersVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_ToggleLayersVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_ToggleLayerVisibility_Statics
	{
		struct LayersSubsystem_eventToggleLayerVisibility_Parms
		{
			FName LayerName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_ToggleLayerVisibility_Statics::NewProp_LayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_ToggleLayerVisibility_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventToggleLayerVisibility_Parms, LayerName), METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_ToggleLayerVisibility_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_ToggleLayerVisibility_Statics::NewProp_LayerName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_ToggleLayerVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_ToggleLayerVisibility_Statics::NewProp_LayerName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_ToggleLayerVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Toggles the named layer's visibility\n\x09 *\n\x09 * @param LayerName\x09The name of the layer to affect\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Toggles the named layer's visibility\n\n@param LayerName     The name of the layer to affect" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_ToggleLayerVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "ToggleLayerVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_ToggleLayerVisibility_Statics::LayersSubsystem_eventToggleLayerVisibility_Parms), Z_Construct_UFunction_ULayersSubsystem_ToggleLayerVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_ToggleLayerVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_ToggleLayerVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_ToggleLayerVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_ToggleLayerVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_ToggleLayerVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_TryGetLayer_Statics
	{
		struct LayersSubsystem_eventTryGetLayer_Parms
		{
			FName LayerName;
			ULayer* OutLayer;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutLayer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_TryGetLayer_Statics::NewProp_LayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_TryGetLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventTryGetLayer_Parms, LayerName), METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_TryGetLayer_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_TryGetLayer_Statics::NewProp_LayerName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_TryGetLayer_Statics::NewProp_OutLayer = { "OutLayer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventTryGetLayer_Parms, OutLayer), Z_Construct_UClass_ULayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULayersSubsystem_TryGetLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventTryGetLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_TryGetLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventTryGetLayer_Parms), &Z_Construct_UFunction_ULayersSubsystem_TryGetLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_TryGetLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_TryGetLayer_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_TryGetLayer_Statics::NewProp_OutLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_TryGetLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_TryGetLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Attempts to get the ULayer Object of the provided layer name.\n\x09 *\n\x09 * @param\x09LayerName\x09\x09The name of the layer whose ULayer Object to retrieve\n\x09 * @param\x09OutLayer[OUT] \x09Set to the ULayer Object of the named layer. Set to Invalid if no ULayer Object exists.\n\x09 * @return\x09\x09\x09\x09\x09If true a valid ULayer Object was found and set to OutLayer; if false, a valid ULayer object was not found and invalid set to OutLayer\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Attempts to get the ULayer Object of the provided layer name.\n\n@param       LayerName               The name of the layer whose ULayer Object to retrieve\n@param       OutLayer[OUT]   Set to the ULayer Object of the named layer. Set to Invalid if no ULayer Object exists.\n@return                                      If true a valid ULayer Object was found and set to OutLayer; if false, a valid ULayer object was not found and invalid set to OutLayer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_TryGetLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "TryGetLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_TryGetLayer_Statics::LayersSubsystem_eventTryGetLayer_Parms), Z_Construct_UFunction_ULayersSubsystem_TryGetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_TryGetLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_TryGetLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_TryGetLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_TryGetLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_TryGetLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_UpdateActorAllViewsVisibility_Statics
	{
		struct LayersSubsystem_eventUpdateActorAllViewsVisibility_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_UpdateActorAllViewsVisibility_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventUpdateActorAllViewsVisibility_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_UpdateActorAllViewsVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_UpdateActorAllViewsVisibility_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_UpdateActorAllViewsVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Updates per-view visibility for the given actor for all views\n\x09 *\n\x09 * @param Actor\x09\x09""Actor to update\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Updates per-view visibility for the given actor for all views\n\n@param Actor         Actor to update" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_UpdateActorAllViewsVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "UpdateActorAllViewsVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_UpdateActorAllViewsVisibility_Statics::LayersSubsystem_eventUpdateActorAllViewsVisibility_Parms), Z_Construct_UFunction_ULayersSubsystem_UpdateActorAllViewsVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_UpdateActorAllViewsVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_UpdateActorAllViewsVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_UpdateActorAllViewsVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_UpdateActorAllViewsVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_UpdateActorAllViewsVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics
	{
		struct LayersSubsystem_eventUpdateActorVisibility_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventUpdateActorVisibility_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_bOutSelectionChanged_SetBit(void* Obj)
	{
		((LayersSubsystem_eventUpdateActorVisibility_Parms*)Obj)->bOutSelectionChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_bOutSelectionChanged = { "bOutSelectionChanged", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventUpdateActorVisibility_Parms), &Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_bOutSelectionChanged_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_bOutActorModified_SetBit(void* Obj)
	{
		((LayersSubsystem_eventUpdateActorVisibility_Parms*)Obj)->bOutActorModified = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_bOutActorModified = { "bOutActorModified", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventUpdateActorVisibility_Parms), &Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_bOutActorModified_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_bNotifySelectionChange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_bNotifySelectionChange_SetBit(void* Obj)
	{
		((LayersSubsystem_eventUpdateActorVisibility_Parms*)Obj)->bNotifySelectionChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_bNotifySelectionChange = { "bNotifySelectionChange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventUpdateActorVisibility_Parms), &Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_bNotifySelectionChange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_bNotifySelectionChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_bNotifySelectionChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_bRedrawViewports_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_bRedrawViewports_SetBit(void* Obj)
	{
		((LayersSubsystem_eventUpdateActorVisibility_Parms*)Obj)->bRedrawViewports = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_bRedrawViewports = { "bRedrawViewports", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventUpdateActorVisibility_Parms), &Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_bRedrawViewports_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_bRedrawViewports_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_bRedrawViewports_MetaData)) };
	void Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventUpdateActorVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventUpdateActorVisibility_Parms), &Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_bOutSelectionChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_bOutActorModified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_bNotifySelectionChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_bRedrawViewports,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Updates the provided actors visibility in the viewports\n\x09 *\n\x09 * @param\x09""Actor\x09\x09\x09\x09\x09\x09""Actor to update\n\x09 * @param\x09""bOutSelectionChanged [OUT]\x09Whether the Editors selection changed\n\x09 * @param\x09""bOutActorModified [OUT]\x09\x09Whether the actor was modified\n\x09 * @param\x09""bNotifySelectionChange\x09\x09If true the Editor is notified of the selection change; if false, the Editor will not be notified\n\x09 * @param\x09""bRedrawViewports\x09\x09\x09If true the viewports will be redrawn; if false, they will not\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Updates the provided actors visibility in the viewports\n\n@param       Actor                                           Actor to update\n@param       bOutSelectionChanged [OUT]      Whether the Editors selection changed\n@param       bOutActorModified [OUT]         Whether the actor was modified\n@param       bNotifySelectionChange          If true the Editor is notified of the selection change; if false, the Editor will not be notified\n@param       bRedrawViewports                        If true the viewports will be redrawn; if false, they will not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "UpdateActorVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::LayersSubsystem_eventUpdateActorVisibility_Parms), Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics
	{
		struct LayersSubsystem_eventUpdateAllActorsVisibility_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bNotifySelectionChange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bNotifySelectionChange_SetBit(void* Obj)
	{
		((LayersSubsystem_eventUpdateAllActorsVisibility_Parms*)Obj)->bNotifySelectionChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bNotifySelectionChange = { "bNotifySelectionChange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventUpdateAllActorsVisibility_Parms), &Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bNotifySelectionChange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bNotifySelectionChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bNotifySelectionChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bRedrawViewports_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bRedrawViewports_SetBit(void* Obj)
	{
		((LayersSubsystem_eventUpdateAllActorsVisibility_Parms*)Obj)->bRedrawViewports = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bRedrawViewports = { "bRedrawViewports", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventUpdateAllActorsVisibility_Parms), &Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bRedrawViewports_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bRedrawViewports_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bRedrawViewports_MetaData)) };
	void Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LayersSubsystem_eventUpdateAllActorsVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LayersSubsystem_eventUpdateAllActorsVisibility_Parms), &Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bNotifySelectionChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::NewProp_bRedrawViewports,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Updates the visibility of all actors in the viewports\n\x09 *\n\x09 * @param\x09""bNotifySelectionChange\x09\x09If true the Editor is notified of the selection change; if false, the Editor will not be notified\n\x09 * @param\x09""bRedrawViewports\x09\x09\x09If true the viewports will be redrawn; if false, they will not\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Updates the visibility of all actors in the viewports\n\n@param       bNotifySelectionChange          If true the Editor is notified of the selection change; if false, the Editor will not be notified\n@param       bRedrawViewports                        If true the viewports will be redrawn; if false, they will not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "UpdateAllActorsVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::LayersSubsystem_eventUpdateAllActorsVisibility_Parms), Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULayersSubsystem_UpdateAllViewVisibility_Statics
	{
		struct LayersSubsystem_eventUpdateAllViewVisibility_Parms
		{
			FName LayerThatChanged;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerThatChanged_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerThatChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_UpdateAllViewVisibility_Statics::NewProp_LayerThatChanged_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULayersSubsystem_UpdateAllViewVisibility_Statics::NewProp_LayerThatChanged = { "LayerThatChanged", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LayersSubsystem_eventUpdateAllViewVisibility_Parms, LayerThatChanged), METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_UpdateAllViewVisibility_Statics::NewProp_LayerThatChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_UpdateAllViewVisibility_Statics::NewProp_LayerThatChanged_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULayersSubsystem_UpdateAllViewVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULayersSubsystem_UpdateAllViewVisibility_Statics::NewProp_LayerThatChanged,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULayersSubsystem_UpdateAllViewVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layers" },
		{ "Comment", "/**\n\x09 * Updates the visibility for all actors for all views.\n\x09 *\n\x09 * @param LayerThatChanged  If one layer was changed (toggled in view pop-up, etc), then we only need to modify actors that use that layer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
		{ "ToolTip", "Updates the visibility for all actors for all views.\n\n@param LayerThatChanged  If one layer was changed (toggled in view pop-up, etc), then we only need to modify actors that use that layer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULayersSubsystem_UpdateAllViewVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULayersSubsystem, nullptr, "UpdateAllViewVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULayersSubsystem_UpdateAllViewVisibility_Statics::LayersSubsystem_eventUpdateAllViewVisibility_Parms), Z_Construct_UFunction_ULayersSubsystem_UpdateAllViewVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_UpdateAllViewVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULayersSubsystem_UpdateAllViewVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULayersSubsystem_UpdateAllViewVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULayersSubsystem_UpdateAllViewVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULayersSubsystem_UpdateAllViewVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULayersSubsystem);
	UClass* Z_Construct_UClass_ULayersSubsystem_NoRegister()
	{
		return ULayersSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULayersSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULayersSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULayersSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayer, "AddActorsToLayer" }, // 2834746154
		{ &Z_Construct_UFunction_ULayersSubsystem_AddActorsToLayers, "AddActorsToLayers" }, // 4131144139
		{ &Z_Construct_UFunction_ULayersSubsystem_AddActorToLayer, "AddActorToLayer" }, // 1899896236
		{ &Z_Construct_UFunction_ULayersSubsystem_AddActorToLayers, "AddActorToLayers" }, // 93441337
		{ &Z_Construct_UFunction_ULayersSubsystem_AddAllLayerNamesTo, "AddAllLayerNamesTo" }, // 4026193469
		{ &Z_Construct_UFunction_ULayersSubsystem_AddAllLayersTo, "AddAllLayersTo" }, // 3696212695
		{ &Z_Construct_UFunction_ULayersSubsystem_AddLevelLayerInformation, "AddLevelLayerInformation" }, // 4261555083
		{ &Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayer, "AddSelectedActorsToLayer" }, // 3513379291
		{ &Z_Construct_UFunction_ULayersSubsystem_AddSelectedActorsToLayers, "AddSelectedActorsToLayers" }, // 893596595
		{ &Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayer, "AppendActorsFromLayer" }, // 413991172
		{ &Z_Construct_UFunction_ULayersSubsystem_AppendActorsFromLayers, "AppendActorsFromLayers" }, // 2867631321
		{ &Z_Construct_UFunction_ULayersSubsystem_CreateLayer, "CreateLayer" }, // 849218113
		{ &Z_Construct_UFunction_ULayersSubsystem_DeleteLayer, "DeleteLayer" }, // 878320318
		{ &Z_Construct_UFunction_ULayersSubsystem_DeleteLayers, "DeleteLayers" }, // 2817676222
		{ &Z_Construct_UFunction_ULayersSubsystem_DisassociateActorFromLayers, "DisassociateActorFromLayers" }, // 3014230657
		{ &Z_Construct_UFunction_ULayersSubsystem_DisassociateActorsFromLayers, "DisassociateActorsFromLayers" }, // 1746294784
		{ &Z_Construct_UFunction_ULayersSubsystem_EditorMapChange, "EditorMapChange" }, // 3410210946
		{ &Z_Construct_UFunction_ULayersSubsystem_EditorRefreshLayerBrowser, "EditorRefreshLayerBrowser" }, // 1955295362
		{ &Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayer, "GetActorsFromLayer" }, // 2753919844
		{ &Z_Construct_UFunction_ULayersSubsystem_GetActorsFromLayers, "GetActorsFromLayers" }, // 3496642901
		{ &Z_Construct_UFunction_ULayersSubsystem_GetLayer, "GetLayer" }, // 3782275876
		{ &Z_Construct_UFunction_ULayersSubsystem_GetSelectedActors, "GetSelectedActors" }, // 4223693500
		{ &Z_Construct_UFunction_ULayersSubsystem_GetWorld, "GetWorld" }, // 2249261729
		{ &Z_Construct_UFunction_ULayersSubsystem_InitializeNewActorLayers, "InitializeNewActorLayers" }, // 1194617446
		{ &Z_Construct_UFunction_ULayersSubsystem_IsActorValidForLayer, "IsActorValidForLayer" }, // 1869503112
		{ &Z_Construct_UFunction_ULayersSubsystem_IsLayer, "IsLayer" }, // 175188848
		{ &Z_Construct_UFunction_ULayersSubsystem_MakeAllLayersVisible, "MakeAllLayersVisible" }, // 2758471763
		{ &Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayer, "RemoveActorFromLayer" }, // 1741679415
		{ &Z_Construct_UFunction_ULayersSubsystem_RemoveActorFromLayers, "RemoveActorFromLayers" }, // 4102409625
		{ &Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayer, "RemoveActorsFromLayer" }, // 1723461114
		{ &Z_Construct_UFunction_ULayersSubsystem_RemoveActorsFromLayers, "RemoveActorsFromLayers" }, // 3706044647
		{ &Z_Construct_UFunction_ULayersSubsystem_RemoveLevelLayerInformation, "RemoveLevelLayerInformation" }, // 642301981
		{ &Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayer, "RemoveSelectedActorsFromLayer" }, // 2647859217
		{ &Z_Construct_UFunction_ULayersSubsystem_RemoveSelectedActorsFromLayers, "RemoveSelectedActorsFromLayers" }, // 3663322052
		{ &Z_Construct_UFunction_ULayersSubsystem_RenameLayer, "RenameLayer" }, // 3223759659
		{ &Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayer, "SelectActorsInLayer" }, // 1281283396
		{ &Z_Construct_UFunction_ULayersSubsystem_SelectActorsInLayers, "SelectActorsInLayers" }, // 1406536324
		{ &Z_Construct_UFunction_ULayersSubsystem_SetLayersVisibility, "SetLayersVisibility" }, // 3860247345
		{ &Z_Construct_UFunction_ULayersSubsystem_SetLayerVisibility, "SetLayerVisibility" }, // 4107762053
		{ &Z_Construct_UFunction_ULayersSubsystem_ToggleLayersVisibility, "ToggleLayersVisibility" }, // 4116365632
		{ &Z_Construct_UFunction_ULayersSubsystem_ToggleLayerVisibility, "ToggleLayerVisibility" }, // 3552929415
		{ &Z_Construct_UFunction_ULayersSubsystem_TryGetLayer, "TryGetLayer" }, // 1704724618
		{ &Z_Construct_UFunction_ULayersSubsystem_UpdateActorAllViewsVisibility, "UpdateActorAllViewsVisibility" }, // 1334752667
		{ &Z_Construct_UFunction_ULayersSubsystem_UpdateActorVisibility, "UpdateActorVisibility" }, // 1989518270
		{ &Z_Construct_UFunction_ULayersSubsystem_UpdateAllActorsVisibility, "UpdateAllActorsVisibility" }, // 1859998315
		{ &Z_Construct_UFunction_ULayersSubsystem_UpdateAllViewVisibility, "UpdateAllViewVisibility" }, // 1169579371
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULayersSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Layers/LayersSubsystem.h" },
		{ "ModuleRelativePath", "Public/Layers/LayersSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULayersSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULayersSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULayersSubsystem_Statics::ClassParams = {
		&ULayersSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULayersSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULayersSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULayersSubsystem()
	{
		if (!Z_Registration_Info_UClass_ULayersSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULayersSubsystem.OuterSingleton, Z_Construct_UClass_ULayersSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULayersSubsystem.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<ULayersSubsystem>()
	{
		return ULayersSubsystem::StaticClass();
	}
	ULayersSubsystem::ULayersSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULayersSubsystem);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULayersSubsystem, ULayersSubsystem::StaticClass, TEXT("ULayersSubsystem"), &Z_Registration_Info_UClass_ULayersSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULayersSubsystem), 3342421016U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_585551927(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Layers_LayersSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
