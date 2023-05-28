// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDConversionBlueprintLibrary.h"
#include "AnalyticsBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDConversionBlueprintLibrary() {}
// Cross Module References
	ANALYTICSBLUEPRINTLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAnalyticsEventAttr();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_AInstancedFoliageActor_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_NoRegister();
	UPackage* Z_Construct_UPackage__Script_USDExporter();
	USDCLASSES_API UEnum* Z_Construct_UEnum_USDClasses_EUsdDuplicateType();
	USDEXPORTER_API UClass* Z_Construct_UClass_ULevelExporterUSDOptions_NoRegister();
	USDEXPORTER_API UClass* Z_Construct_UClass_UUsdConversionBlueprintLibrary();
	USDEXPORTER_API UClass* Z_Construct_UClass_UUsdConversionBlueprintLibrary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execDuplicatePrims)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StageRootLayer);
		P_GET_TARRAY_REF(FString,Z_Param_Out_PrimPaths);
		P_GET_ENUM(EUsdDuplicateType,Z_Param_DuplicateType);
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UUsdConversionBlueprintLibrary::DuplicatePrims(Z_Param_StageRootLayer,Z_Param_Out_PrimPaths,EUsdDuplicateType(Z_Param_DuplicateType),Z_Param_TargetLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execClearPrimClipboard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdConversionBlueprintLibrary::ClearPrimClipboard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execCanPastePrims)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUsdConversionBlueprintLibrary::CanPastePrims();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execPastePrims)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StageRootLayer);
		P_GET_PROPERTY(FStrProperty,Z_Param_ParentPrimPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UUsdConversionBlueprintLibrary::PastePrims(Z_Param_StageRootLayer,Z_Param_ParentPrimPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execCopyPrims)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StageRootLayer);
		P_GET_TARRAY_REF(FString,Z_Param_Out_PrimPaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUsdConversionBlueprintLibrary::CopyPrims(Z_Param_StageRootLayer,Z_Param_Out_PrimPaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execCutPrims)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StageRootLayer);
		P_GET_TARRAY_REF(FString,Z_Param_Out_PrimPaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUsdConversionBlueprintLibrary::CutPrims(Z_Param_StageRootLayer,Z_Param_Out_PrimPaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execRemoveAllPrimSpecs)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StageRootLayer);
		P_GET_PROPERTY(FStrProperty,Z_Param_PrimPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdConversionBlueprintLibrary::RemoveAllPrimSpecs(Z_Param_StageRootLayer,Z_Param_PrimPath,Z_Param_TargetLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execSendAnalytics)
	{
		P_GET_TARRAY_REF(FAnalyticsEventAttr,Z_Param_Out_Attrs);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_UBOOL(Z_Param_bAutomated);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ElapsedSeconds);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_NumberOfFrames);
		P_GET_PROPERTY(FStrProperty,Z_Param_Extension);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdConversionBlueprintLibrary::SendAnalytics(Z_Param_Out_Attrs,Z_Param_EventName,Z_Param_bAutomated,Z_Param_ElapsedSeconds,Z_Param_NumberOfFrames,Z_Param_Extension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execGetAnalyticsAttributes)
	{
		P_GET_OBJECT(ULevelExporterUSDOptions,Z_Param_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAnalyticsEventAttr>*)Z_Param__Result=UUsdConversionBlueprintLibrary::GetAnalyticsAttributes(Z_Param_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execGetInstanceTransforms)
	{
		P_GET_OBJECT(AInstancedFoliageActor,Z_Param_Actor);
		P_GET_OBJECT(UFoliageType,Z_Param_FoliageType);
		P_GET_OBJECT(ULevel,Z_Param_InstancesLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTransform>*)Z_Param__Result=UUsdConversionBlueprintLibrary::GetInstanceTransforms(Z_Param_Actor,Z_Param_FoliageType,Z_Param_InstancesLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execGetSource)
	{
		P_GET_OBJECT(UFoliageType,Z_Param_FoliageType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UUsdConversionBlueprintLibrary::GetSource(Z_Param_FoliageType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execGetUsedFoliageTypes)
	{
		P_GET_OBJECT(AInstancedFoliageActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UFoliageType*>*)Z_Param__Result=UUsdConversionBlueprintLibrary::GetUsedFoliageTypes(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execGetInstancedFoliageActorForLevel)
	{
		P_GET_UBOOL(Z_Param_bCreateIfNone);
		P_GET_OBJECT(ULevel,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AInstancedFoliageActor**)Z_Param__Result=UUsdConversionBlueprintLibrary::GetInstancedFoliageActorForLevel(Z_Param_bCreateIfNone,Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execGetSchemaNameForComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUsdConversionBlueprintLibrary::GetSchemaNameForComponent(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execGetPrimPathForObject)
	{
		P_GET_OBJECT(UObject,Z_Param_ActorOrComponent);
		P_GET_PROPERTY(FStrProperty,Z_Param_ParentPrimPath);
		P_GET_UBOOL(Z_Param_bUseActorFolders);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUsdConversionBlueprintLibrary::GetPrimPathForObject(Z_Param_ActorOrComponent,Z_Param_ParentPrimPath,Z_Param_bUseActorFolders);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execAddPayload)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ReferencingStagePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_ReferencingPrimPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetStagePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdConversionBlueprintLibrary::AddPayload(Z_Param_ReferencingStagePath,Z_Param_ReferencingPrimPath,Z_Param_TargetStagePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execInsertSubLayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParentLayerPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_SubLayerPath);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdConversionBlueprintLibrary::InsertSubLayer(Z_Param_ParentLayerPath,Z_Param_SubLayerPath,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execMakePathRelativeToLayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AnchorLayerPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToMakeRelative);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUsdConversionBlueprintLibrary::MakePathRelativeToLayer(Z_Param_AnchorLayerPath,Z_Param_PathToMakeRelative);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execCanExportToLayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUsdConversionBlueprintLibrary::CanExportToLayer(Z_Param_TargetFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execGenerateObjectVersionString)
	{
		P_GET_OBJECT(UObject,Z_Param_ObjectToExport);
		P_GET_OBJECT(UObject,Z_Param_ExportOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUsdConversionBlueprintLibrary::GenerateObjectVersionString(Z_Param_ObjectToExport,Z_Param_ExportOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execGetActorsToConvert)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<AActor*>*)Z_Param__Result=UUsdConversionBlueprintLibrary::GetActorsToConvert(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execStreamOutLevels)
	{
		P_GET_OBJECT(UWorld,Z_Param_OwningWorld);
		P_GET_TARRAY_REF(FString,Z_Param_Out_LevelNamesToStreamOut);
		P_GET_TARRAY_REF(FString,Z_Param_Out_LevelNamesToHide);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdConversionBlueprintLibrary::StreamOutLevels(Z_Param_OwningWorld,Z_Param_Out_LevelNamesToStreamOut,Z_Param_Out_LevelNamesToHide);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execGetVisibleInEditorLevelNames)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UUsdConversionBlueprintLibrary::GetVisibleInEditorLevelNames(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execGetLoadedLevelNames)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UUsdConversionBlueprintLibrary::GetLoadedLevelNames(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execReapplySequencerAnimations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdConversionBlueprintLibrary::ReapplySequencerAnimations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execRevertSequencerAnimations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdConversionBlueprintLibrary::RevertSequencerAnimations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintLibrary::execStreamInRequiredLevels)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_TSET_REF(FString,Z_Param_Out_LevelsToIgnore);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdConversionBlueprintLibrary::StreamInRequiredLevels(Z_Param_World,Z_Param_Out_LevelsToIgnore);
		P_NATIVE_END;
	}
	void UUsdConversionBlueprintLibrary::StaticRegisterNativesUUsdConversionBlueprintLibrary()
	{
		UClass* Class = UUsdConversionBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPayload", &UUsdConversionBlueprintLibrary::execAddPayload },
			{ "CanExportToLayer", &UUsdConversionBlueprintLibrary::execCanExportToLayer },
			{ "CanPastePrims", &UUsdConversionBlueprintLibrary::execCanPastePrims },
			{ "ClearPrimClipboard", &UUsdConversionBlueprintLibrary::execClearPrimClipboard },
			{ "CopyPrims", &UUsdConversionBlueprintLibrary::execCopyPrims },
			{ "CutPrims", &UUsdConversionBlueprintLibrary::execCutPrims },
			{ "DuplicatePrims", &UUsdConversionBlueprintLibrary::execDuplicatePrims },
			{ "GenerateObjectVersionString", &UUsdConversionBlueprintLibrary::execGenerateObjectVersionString },
			{ "GetActorsToConvert", &UUsdConversionBlueprintLibrary::execGetActorsToConvert },
			{ "GetAnalyticsAttributes", &UUsdConversionBlueprintLibrary::execGetAnalyticsAttributes },
			{ "GetInstancedFoliageActorForLevel", &UUsdConversionBlueprintLibrary::execGetInstancedFoliageActorForLevel },
			{ "GetInstanceTransforms", &UUsdConversionBlueprintLibrary::execGetInstanceTransforms },
			{ "GetLoadedLevelNames", &UUsdConversionBlueprintLibrary::execGetLoadedLevelNames },
			{ "GetPrimPathForObject", &UUsdConversionBlueprintLibrary::execGetPrimPathForObject },
			{ "GetSchemaNameForComponent", &UUsdConversionBlueprintLibrary::execGetSchemaNameForComponent },
			{ "GetSource", &UUsdConversionBlueprintLibrary::execGetSource },
			{ "GetUsedFoliageTypes", &UUsdConversionBlueprintLibrary::execGetUsedFoliageTypes },
			{ "GetVisibleInEditorLevelNames", &UUsdConversionBlueprintLibrary::execGetVisibleInEditorLevelNames },
			{ "InsertSubLayer", &UUsdConversionBlueprintLibrary::execInsertSubLayer },
			{ "MakePathRelativeToLayer", &UUsdConversionBlueprintLibrary::execMakePathRelativeToLayer },
			{ "PastePrims", &UUsdConversionBlueprintLibrary::execPastePrims },
			{ "ReapplySequencerAnimations", &UUsdConversionBlueprintLibrary::execReapplySequencerAnimations },
			{ "RemoveAllPrimSpecs", &UUsdConversionBlueprintLibrary::execRemoveAllPrimSpecs },
			{ "RevertSequencerAnimations", &UUsdConversionBlueprintLibrary::execRevertSequencerAnimations },
			{ "SendAnalytics", &UUsdConversionBlueprintLibrary::execSendAnalytics },
			{ "StreamInRequiredLevels", &UUsdConversionBlueprintLibrary::execStreamInRequiredLevels },
			{ "StreamOutLevels", &UUsdConversionBlueprintLibrary::execStreamOutLevels },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics
	{
		struct UsdConversionBlueprintLibrary_eventAddPayload_Parms
		{
			FString ReferencingStagePath;
			FString ReferencingPrimPath;
			FString TargetStagePath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencingStagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReferencingStagePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencingPrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReferencingPrimPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetStagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetStagePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::NewProp_ReferencingStagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::NewProp_ReferencingStagePath = { "ReferencingStagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventAddPayload_Parms, ReferencingStagePath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::NewProp_ReferencingStagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::NewProp_ReferencingStagePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::NewProp_ReferencingPrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::NewProp_ReferencingPrimPath = { "ReferencingPrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventAddPayload_Parms, ReferencingPrimPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::NewProp_ReferencingPrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::NewProp_ReferencingPrimPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::NewProp_TargetStagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::NewProp_TargetStagePath = { "TargetStagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventAddPayload_Parms, TargetStagePath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::NewProp_TargetStagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::NewProp_TargetStagePath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::NewProp_ReferencingStagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::NewProp_ReferencingPrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::NewProp_TargetStagePath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer utils" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "AddPayload", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::UsdConversionBlueprintLibrary_eventAddPayload_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanExportToLayer_Statics
	{
		struct UsdConversionBlueprintLibrary_eventCanExportToLayer_Parms
		{
			FString TargetFilePath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetFilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanExportToLayer_Statics::NewProp_TargetFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanExportToLayer_Statics::NewProp_TargetFilePath = { "TargetFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventCanExportToLayer_Parms, TargetFilePath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanExportToLayer_Statics::NewProp_TargetFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanExportToLayer_Statics::NewProp_TargetFilePath_MetaData)) };
	void Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanExportToLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UsdConversionBlueprintLibrary_eventCanExportToLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanExportToLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintLibrary_eventCanExportToLayer_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanExportToLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanExportToLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanExportToLayer_Statics::NewProp_TargetFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanExportToLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanExportToLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "World utils" },
		{ "Comment", "/** Checks whether we can create a USD Layer with \"TargetFilePath\" as identifier and export to it */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
		{ "ToolTip", "Checks whether we can create a USD Layer with \"TargetFilePath\" as identifier and export to it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanExportToLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "CanExportToLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanExportToLayer_Statics::UsdConversionBlueprintLibrary_eventCanExportToLayer_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanExportToLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanExportToLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanExportToLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanExportToLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanExportToLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanExportToLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanPastePrims_Statics
	{
		struct UsdConversionBlueprintLibrary_eventCanPastePrims_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanPastePrims_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UsdConversionBlueprintLibrary_eventCanPastePrims_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanPastePrims_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintLibrary_eventCanPastePrims_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanPastePrims_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanPastePrims_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanPastePrims_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanPastePrims_Statics::Function_MetaDataParams[] = {
		{ "Category", "Prim utils" },
		{ "Comment", "/** Returns true if we have prims that we can paste within our clipboard stage */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
		{ "ToolTip", "Returns true if we have prims that we can paste within our clipboard stage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanPastePrims_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "CanPastePrims", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanPastePrims_Statics::UsdConversionBlueprintLibrary_eventCanPastePrims_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanPastePrims_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanPastePrims_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanPastePrims_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanPastePrims_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanPastePrims()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanPastePrims_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_ClearPrimClipboard_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_ClearPrimClipboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "Prim utils" },
		{ "Comment", "/** Clears all prims from our clipboard stage */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
		{ "ToolTip", "Clears all prims from our clipboard stage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_ClearPrimClipboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "ClearPrimClipboard", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_ClearPrimClipboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_ClearPrimClipboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_ClearPrimClipboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_ClearPrimClipboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics
	{
		struct UsdConversionBlueprintLibrary_eventCopyPrims_Parms
		{
			FString StageRootLayer;
			TArray<FString> PrimPaths;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageRootLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StageRootLayer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimPaths;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::NewProp_StageRootLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::NewProp_StageRootLayer = { "StageRootLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventCopyPrims_Parms, StageRootLayer), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::NewProp_StageRootLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::NewProp_StageRootLayer_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::NewProp_PrimPaths_Inner = { "PrimPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::NewProp_PrimPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::NewProp_PrimPaths = { "PrimPaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventCopyPrims_Parms, PrimPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::NewProp_PrimPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::NewProp_PrimPaths_MetaData)) };
	void Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UsdConversionBlueprintLibrary_eventCopyPrims_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintLibrary_eventCopyPrims_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::NewProp_StageRootLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::NewProp_PrimPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::NewProp_PrimPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::Function_MetaDataParams[] = {
		{ "Category", "Prim utils" },
		{ "Comment", "/**\n\x09 * Copies flattened versions of the input prims onto the clipboard stage.\n\x09 * These copied prims can then be pasted with PastePrims.\n\x09 *\n\x09 * @param StageRootLayer - Path to the root layer of the stage from which we should fetch the Prims\n\x09 * @param PrimPaths - Prims to copy\n\x09 * @return True if we managed to copy\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
		{ "ToolTip", "Copies flattened versions of the input prims onto the clipboard stage.\nThese copied prims can then be pasted with PastePrims.\n\n@param StageRootLayer - Path to the root layer of the stage from which we should fetch the Prims\n@param PrimPaths - Prims to copy\n@return True if we managed to copy" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "CopyPrims", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::UsdConversionBlueprintLibrary_eventCopyPrims_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics
	{
		struct UsdConversionBlueprintLibrary_eventCutPrims_Parms
		{
			FString StageRootLayer;
			TArray<FString> PrimPaths;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageRootLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StageRootLayer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimPaths;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::NewProp_StageRootLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::NewProp_StageRootLayer = { "StageRootLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventCutPrims_Parms, StageRootLayer), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::NewProp_StageRootLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::NewProp_StageRootLayer_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::NewProp_PrimPaths_Inner = { "PrimPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::NewProp_PrimPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::NewProp_PrimPaths = { "PrimPaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventCutPrims_Parms, PrimPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::NewProp_PrimPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::NewProp_PrimPaths_MetaData)) };
	void Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UsdConversionBlueprintLibrary_eventCutPrims_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintLibrary_eventCutPrims_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::NewProp_StageRootLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::NewProp_PrimPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::NewProp_PrimPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::Function_MetaDataParams[] = {
		{ "Category", "Prim utils" },
		{ "Comment", "/**\n\x09 * Copies flattened versions of the input prims onto the clipboard stage and removes all the prim specs for Prims from their stages.\n\x09 * These cut prims can then be pasted with PastePrims.\n\x09 *\n\x09 * @param StageRootLayer - Path to the root layer of the stage from which we should fetch the Prims\n\x09 * @param PrimPaths - Prims to cut\n\x09 * @return True if we managed to cut\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
		{ "ToolTip", "Copies flattened versions of the input prims onto the clipboard stage and removes all the prim specs for Prims from their stages.\nThese cut prims can then be pasted with PastePrims.\n\n@param StageRootLayer - Path to the root layer of the stage from which we should fetch the Prims\n@param PrimPaths - Prims to cut\n@return True if we managed to cut" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "CutPrims", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::UsdConversionBlueprintLibrary_eventCutPrims_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics
	{
		struct UsdConversionBlueprintLibrary_eventDuplicatePrims_Parms
		{
			FString StageRootLayer;
			TArray<FString> PrimPaths;
			EUsdDuplicateType DuplicateType;
			FString TargetLayer;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageRootLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StageRootLayer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimPaths;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DuplicateType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DuplicateType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetLayer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_StageRootLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_StageRootLayer = { "StageRootLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventDuplicatePrims_Parms, StageRootLayer), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_StageRootLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_StageRootLayer_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_PrimPaths_Inner = { "PrimPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_PrimPaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_PrimPaths = { "PrimPaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventDuplicatePrims_Parms, PrimPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_PrimPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_PrimPaths_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_DuplicateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_DuplicateType = { "DuplicateType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventDuplicatePrims_Parms, DuplicateType), Z_Construct_UEnum_USDClasses_EUsdDuplicateType, METADATA_PARAMS(nullptr, 0) }; // 718176014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_TargetLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_TargetLayer = { "TargetLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventDuplicatePrims_Parms, TargetLayer), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_TargetLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_TargetLayer_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventDuplicatePrims_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_StageRootLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_PrimPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_PrimPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_DuplicateType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_DuplicateType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_TargetLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::Function_MetaDataParams[] = {
		{ "Category", "Prim utils" },
		{ "Comment", "/**\n\x09 * Duplicates all provided Prims one-by-one, performing the requested DuplicateType.\n\x09 * See the documentation on EUsdDuplicateType for the different operation types.\n\x09 *\n\x09 * The duplicated prims may be renamed in order to have valid names for the target location, which is why this\n\x09 * function returns the pasted prim paths.\n\x09 * This function returns just paths instead of actual prims because USD needs to respond to the notices about\n\x09 * the created prim specs before the prims are fully created, which means we wouldn't be able to return the\n\x09 * created prims yet, in case this function was called from within an SdfChangeBlock.\n\x09 *\n\x09 * @param StageRootLayer - Path to the root layer of the stage from which we should fetch the Prims\n\x09 * @param PrimPaths - Prims to duplicate\n\x09 * @param DuplicateType - Type of prim duplication to perform\n\x09 * @param TargetLayer - Target layer to use when duplicating, if relevant for that duplication type\n\x09 * @return Paths to the duplicated prim specs, after they were added as children of ParentPrim.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
		{ "ToolTip", "Duplicates all provided Prims one-by-one, performing the requested DuplicateType.\nSee the documentation on EUsdDuplicateType for the different operation types.\n\nThe duplicated prims may be renamed in order to have valid names for the target location, which is why this\nfunction returns the pasted prim paths.\nThis function returns just paths instead of actual prims because USD needs to respond to the notices about\nthe created prim specs before the prims are fully created, which means we wouldn't be able to return the\ncreated prims yet, in case this function was called from within an SdfChangeBlock.\n\n@param StageRootLayer - Path to the root layer of the stage from which we should fetch the Prims\n@param PrimPaths - Prims to duplicate\n@param DuplicateType - Type of prim duplication to perform\n@param TargetLayer - Target layer to use when duplicating, if relevant for that duplication type\n@return Paths to the duplicated prim specs, after they were added as children of ParentPrim." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "DuplicatePrims", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::UsdConversionBlueprintLibrary_eventDuplicatePrims_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GenerateObjectVersionString_Statics
	{
		struct UsdConversionBlueprintLibrary_eventGenerateObjectVersionString_Parms
		{
			const UObject* ObjectToExport;
			UObject* ExportOptions;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectToExport_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectToExport;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExportOptions;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GenerateObjectVersionString_Statics::NewProp_ObjectToExport_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GenerateObjectVersionString_Statics::NewProp_ObjectToExport = { "ObjectToExport", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGenerateObjectVersionString_Parms, ObjectToExport), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GenerateObjectVersionString_Statics::NewProp_ObjectToExport_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GenerateObjectVersionString_Statics::NewProp_ObjectToExport_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GenerateObjectVersionString_Statics::NewProp_ExportOptions = { "ExportOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGenerateObjectVersionString_Parms, ExportOptions), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GenerateObjectVersionString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGenerateObjectVersionString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GenerateObjectVersionString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GenerateObjectVersionString_Statics::NewProp_ObjectToExport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GenerateObjectVersionString_Statics::NewProp_ExportOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GenerateObjectVersionString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GenerateObjectVersionString_Statics::Function_MetaDataParams[] = {
		{ "Category", "World utils" },
		{ "Comment", "/**\n\x09 * Generates a unique identifier string that involves ObjectToExport's package's persistent guid, the\n\x09 * corresponding file save date and time, and the number of times the package has been dirtied since last being\n\x09 * saved.\n\x09 * Optionally it can also combine that hash with a hash of the export options being used for the export, if\n\x09 * available.\n\x09 * This can be used to track the version of exported assets and levels, to prevent reexporting of actors and\n\x09 * components.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
		{ "ToolTip", "Generates a unique identifier string that involves ObjectToExport's package's persistent guid, the\ncorresponding file save date and time, and the number of times the package has been dirtied since last being\nsaved.\nOptionally it can also combine that hash with a hash of the export options being used for the export, if\navailable.\nThis can be used to track the version of exported assets and levels, to prevent reexporting of actors and\ncomponents." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GenerateObjectVersionString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "GenerateObjectVersionString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GenerateObjectVersionString_Statics::UsdConversionBlueprintLibrary_eventGenerateObjectVersionString_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GenerateObjectVersionString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GenerateObjectVersionString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GenerateObjectVersionString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GenerateObjectVersionString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GenerateObjectVersionString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GenerateObjectVersionString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetActorsToConvert_Statics
	{
		struct UsdConversionBlueprintLibrary_eventGetActorsToConvert_Parms
		{
			UWorld* World;
			TSet<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetActorsToConvert_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetActorsToConvert_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetActorsToConvert_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetActorsToConvert_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetActorsToConvert_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetActorsToConvert_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetActorsToConvert_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetActorsToConvert_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetActorsToConvert_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetActorsToConvert_Statics::Function_MetaDataParams[] = {
		{ "Category", "World utils" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetActorsToConvert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "GetActorsToConvert", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetActorsToConvert_Statics::UsdConversionBlueprintLibrary_eventGetActorsToConvert_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetActorsToConvert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetActorsToConvert_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetActorsToConvert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetActorsToConvert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetActorsToConvert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetActorsToConvert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetAnalyticsAttributes_Statics
	{
		struct UsdConversionBlueprintLibrary_eventGetAnalyticsAttributes_Parms
		{
			const ULevelExporterUSDOptions* Options;
			TArray<FAnalyticsEventAttr> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Options;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetAnalyticsAttributes_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetAnalyticsAttributes_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetAnalyticsAttributes_Parms, Options), Z_Construct_UClass_ULevelExporterUSDOptions_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetAnalyticsAttributes_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetAnalyticsAttributes_Statics::NewProp_Options_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetAnalyticsAttributes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnalyticsEventAttr, METADATA_PARAMS(nullptr, 0) }; // 4211131233
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetAnalyticsAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetAnalyticsAttributes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4211131233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetAnalyticsAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetAnalyticsAttributes_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetAnalyticsAttributes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetAnalyticsAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetAnalyticsAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Retrieves the analytics attributes to send for the provided options object */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves the analytics attributes to send for the provided options object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetAnalyticsAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "GetAnalyticsAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetAnalyticsAttributes_Statics::UsdConversionBlueprintLibrary_eventGetAnalyticsAttributes_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetAnalyticsAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetAnalyticsAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetAnalyticsAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetAnalyticsAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetAnalyticsAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetAnalyticsAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics
	{
		struct UsdConversionBlueprintLibrary_eventGetInstancedFoliageActorForLevel_Parms
		{
			bool bCreateIfNone;
			ULevel* Level;
			AInstancedFoliageActor* ReturnValue;
		};
		static void NewProp_bCreateIfNone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateIfNone;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Level;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::NewProp_bCreateIfNone_SetBit(void* Obj)
	{
		((UsdConversionBlueprintLibrary_eventGetInstancedFoliageActorForLevel_Parms*)Obj)->bCreateIfNone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::NewProp_bCreateIfNone = { "bCreateIfNone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintLibrary_eventGetInstancedFoliageActorForLevel_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::NewProp_bCreateIfNone_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetInstancedFoliageActorForLevel_Parms, Level), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetInstancedFoliageActorForLevel_Parms, ReturnValue), Z_Construct_UClass_AInstancedFoliageActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::NewProp_bCreateIfNone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD Foliage Exporter" },
		{ "Comment", "/**\n\x09 * Wraps AInstancedFoliageActor::GetInstancedFoliageActorForLevel, and allows retrieving the current AInstancedFoliageActor\n\x09 * for a level. Will default to the current editor level if Level is left nullptr.\n\x09 * This function is useful because it's difficult to retrieve this actor otherwise, as it will be filtered from\n\x09 * the results of functions like EditorLevelLibrary.get_all_level_actors()\n\x09 */" },
		{ "CPP_Default_bCreateIfNone", "false" },
		{ "CPP_Default_Level", "None" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
		{ "ToolTip", "Wraps AInstancedFoliageActor::GetInstancedFoliageActorForLevel, and allows retrieving the current AInstancedFoliageActor\nfor a level. Will default to the current editor level if Level is left nullptr.\nThis function is useful because it's difficult to retrieve this actor otherwise, as it will be filtered from\nthe results of functions like EditorLevelLibrary.get_all_level_actors()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "GetInstancedFoliageActorForLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::UsdConversionBlueprintLibrary_eventGetInstancedFoliageActorForLevel_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstancedFoliageActorForLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstanceTransforms_Statics
	{
		struct UsdConversionBlueprintLibrary_eventGetInstanceTransforms_Parms
		{
			AInstancedFoliageActor* Actor;
			UFoliageType* FoliageType;
			ULevel* InstancesLevel;
			TArray<FTransform> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoliageType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancesLevel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstanceTransforms_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetInstanceTransforms_Parms, Actor), Z_Construct_UClass_AInstancedFoliageActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstanceTransforms_Statics::NewProp_FoliageType = { "FoliageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetInstanceTransforms_Parms, FoliageType), Z_Construct_UClass_UFoliageType_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstanceTransforms_Statics::NewProp_InstancesLevel = { "InstancesLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetInstanceTransforms_Parms, InstancesLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstanceTransforms_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstanceTransforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetInstanceTransforms_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstanceTransforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstanceTransforms_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstanceTransforms_Statics::NewProp_FoliageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstanceTransforms_Statics::NewProp_InstancesLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstanceTransforms_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstanceTransforms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstanceTransforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD Foliage Exporter" },
		{ "Comment", "/**\n\x09 * Returns the transforms of all instances of a particular UFoliageType on a given level. If no level is provided all instances will be returned.\n\x09 * Use GetUsedFoliageTypes() to retrieve all foliage types managed by a particular actor.\n\x09 */" },
		{ "CPP_Default_InstancesLevel", "None" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the transforms of all instances of a particular UFoliageType on a given level. If no level is provided all instances will be returned.\nUse GetUsedFoliageTypes() to retrieve all foliage types managed by a particular actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstanceTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "GetInstanceTransforms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstanceTransforms_Statics::UsdConversionBlueprintLibrary_eventGetInstanceTransforms_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstanceTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstanceTransforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstanceTransforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstanceTransforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstanceTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstanceTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetLoadedLevelNames_Statics
	{
		struct UsdConversionBlueprintLibrary_eventGetLoadedLevelNames_Parms
		{
			UWorld* World;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetLoadedLevelNames_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetLoadedLevelNames_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetLoadedLevelNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetLoadedLevelNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetLoadedLevelNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetLoadedLevelNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetLoadedLevelNames_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetLoadedLevelNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetLoadedLevelNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetLoadedLevelNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "World utils" },
		{ "Comment", "/**\n\x09 * Returns the path name (e.g. \"/Game/Maps/MyLevel\") of levels that are loaded on `World`.\n\x09 * We use these to revert the `World` to its initial state after we force-stream levels in for exporting\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
		{ "ToolTip", "Returns the path name (e.g. \"/Game/Maps/MyLevel\") of levels that are loaded on `World`.\nWe use these to revert the `World` to its initial state after we force-stream levels in for exporting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetLoadedLevelNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "GetLoadedLevelNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetLoadedLevelNames_Statics::UsdConversionBlueprintLibrary_eventGetLoadedLevelNames_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetLoadedLevelNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetLoadedLevelNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetLoadedLevelNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetLoadedLevelNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetLoadedLevelNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetLoadedLevelNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics
	{
		struct UsdConversionBlueprintLibrary_eventGetPrimPathForObject_Parms
		{
			const UObject* ActorOrComponent;
			FString ParentPrimPath;
			bool bUseActorFolders;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorOrComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorOrComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentPrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParentPrimPath;
		static void NewProp_bUseActorFolders_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseActorFolders;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::NewProp_ActorOrComponent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::NewProp_ActorOrComponent = { "ActorOrComponent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetPrimPathForObject_Parms, ActorOrComponent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::NewProp_ActorOrComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::NewProp_ActorOrComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::NewProp_ParentPrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::NewProp_ParentPrimPath = { "ParentPrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetPrimPathForObject_Parms, ParentPrimPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::NewProp_ParentPrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::NewProp_ParentPrimPath_MetaData)) };
	void Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::NewProp_bUseActorFolders_SetBit(void* Obj)
	{
		((UsdConversionBlueprintLibrary_eventGetPrimPathForObject_Parms*)Obj)->bUseActorFolders = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::NewProp_bUseActorFolders = { "bUseActorFolders", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintLibrary_eventGetPrimPathForObject_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::NewProp_bUseActorFolders_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetPrimPathForObject_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::NewProp_ActorOrComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::NewProp_ParentPrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::NewProp_bUseActorFolders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Prim utils" },
		{ "CPP_Default_bUseActorFolders", "false" },
		{ "CPP_Default_ParentPrimPath", "" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "GetPrimPathForObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::UsdConversionBlueprintLibrary_eventGetPrimPathForObject_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSchemaNameForComponent_Statics
	{
		struct UsdConversionBlueprintLibrary_eventGetSchemaNameForComponent_Parms
		{
			const USceneComponent* Component;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSchemaNameForComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSchemaNameForComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetSchemaNameForComponent_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSchemaNameForComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSchemaNameForComponent_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSchemaNameForComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetSchemaNameForComponent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSchemaNameForComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSchemaNameForComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSchemaNameForComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSchemaNameForComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Prim utils" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSchemaNameForComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "GetSchemaNameForComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSchemaNameForComponent_Statics::UsdConversionBlueprintLibrary_eventGetSchemaNameForComponent_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSchemaNameForComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSchemaNameForComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSchemaNameForComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSchemaNameForComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSchemaNameForComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSchemaNameForComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSource_Statics
	{
		struct UsdConversionBlueprintLibrary_eventGetSource_Parms
		{
			UFoliageType* FoliageType;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoliageType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSource_Statics::NewProp_FoliageType = { "FoliageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetSource_Parms, FoliageType), Z_Construct_UClass_UFoliageType_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetSource_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSource_Statics::NewProp_FoliageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD Foliage Exporter" },
		{ "Comment", "/**\n\x09 * Returns the source asset for a UFoliageType.\n\x09 * It can be a UStaticMesh in case we're dealing with a UFoliageType_InstancedStaticMesh, but it can be other types of objects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the source asset for a UFoliageType.\nIt can be a UStaticMesh in case we're dealing with a UFoliageType_InstancedStaticMesh, but it can be other types of objects." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "GetSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSource_Statics::UsdConversionBlueprintLibrary_eventGetSource_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetUsedFoliageTypes_Statics
	{
		struct UsdConversionBlueprintLibrary_eventGetUsedFoliageTypes_Parms
		{
			AInstancedFoliageActor* Actor;
			TArray<UFoliageType*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetUsedFoliageTypes_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetUsedFoliageTypes_Parms, Actor), Z_Construct_UClass_AInstancedFoliageActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetUsedFoliageTypes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UFoliageType_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetUsedFoliageTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetUsedFoliageTypes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetUsedFoliageTypes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetUsedFoliageTypes_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetUsedFoliageTypes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetUsedFoliageTypes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetUsedFoliageTypes_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD Foliage Exporter" },
		{ "Comment", "/**\n\x09 * Returns all the different types of UFoliageType assets that a particular AInstancedFoliageActor uses.\n\x09 * This function exists because we want to retrieve all instances of all foliage types on an actor, but we\n\x09 * can't return nested containers from UFUNCTIONs, so users of this API should call this, and then GetInstanceTransforms.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns all the different types of UFoliageType assets that a particular AInstancedFoliageActor uses.\nThis function exists because we want to retrieve all instances of all foliage types on an actor, but we\ncan't return nested containers from UFUNCTIONs, so users of this API should call this, and then GetInstanceTransforms." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetUsedFoliageTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "GetUsedFoliageTypes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetUsedFoliageTypes_Statics::UsdConversionBlueprintLibrary_eventGetUsedFoliageTypes_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetUsedFoliageTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetUsedFoliageTypes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetUsedFoliageTypes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetUsedFoliageTypes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetUsedFoliageTypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetUsedFoliageTypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetVisibleInEditorLevelNames_Statics
	{
		struct UsdConversionBlueprintLibrary_eventGetVisibleInEditorLevelNames_Parms
		{
			UWorld* World;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetVisibleInEditorLevelNames_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetVisibleInEditorLevelNames_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetVisibleInEditorLevelNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetVisibleInEditorLevelNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventGetVisibleInEditorLevelNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetVisibleInEditorLevelNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetVisibleInEditorLevelNames_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetVisibleInEditorLevelNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetVisibleInEditorLevelNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetVisibleInEditorLevelNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "World utils" },
		{ "Comment", "/**\n\x09 * Returns the path name (e.g. \"/Game/Maps/MyLevel\") of levels that checked to be visible in the editor within `World`.\n\x09 * We use these to revert the `World` to its initial state after we force-stream levels in for exporting\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
		{ "ToolTip", "Returns the path name (e.g. \"/Game/Maps/MyLevel\") of levels that checked to be visible in the editor within `World`.\nWe use these to revert the `World` to its initial state after we force-stream levels in for exporting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetVisibleInEditorLevelNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "GetVisibleInEditorLevelNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetVisibleInEditorLevelNames_Statics::UsdConversionBlueprintLibrary_eventGetVisibleInEditorLevelNames_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetVisibleInEditorLevelNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetVisibleInEditorLevelNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetVisibleInEditorLevelNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetVisibleInEditorLevelNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetVisibleInEditorLevelNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetVisibleInEditorLevelNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer_Statics
	{
		struct UsdConversionBlueprintLibrary_eventInsertSubLayer_Parms
		{
			FString ParentLayerPath;
			FString SubLayerPath;
			int32 Index;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentLayerPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParentLayerPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubLayerPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SubLayerPath;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer_Statics::NewProp_ParentLayerPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer_Statics::NewProp_ParentLayerPath = { "ParentLayerPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventInsertSubLayer_Parms, ParentLayerPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer_Statics::NewProp_ParentLayerPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer_Statics::NewProp_ParentLayerPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer_Statics::NewProp_SubLayerPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer_Statics::NewProp_SubLayerPath = { "SubLayerPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventInsertSubLayer_Parms, SubLayerPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer_Statics::NewProp_SubLayerPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer_Statics::NewProp_SubLayerPath_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventInsertSubLayer_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer_Statics::NewProp_ParentLayerPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer_Statics::NewProp_SubLayerPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer utils" },
		{ "CPP_Default_Index", "-1" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "InsertSubLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer_Statics::UsdConversionBlueprintLibrary_eventInsertSubLayer_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer_Statics
	{
		struct UsdConversionBlueprintLibrary_eventMakePathRelativeToLayer_Parms
		{
			FString AnchorLayerPath;
			FString PathToMakeRelative;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnchorLayerPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnchorLayerPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathToMakeRelative_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToMakeRelative;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer_Statics::NewProp_AnchorLayerPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer_Statics::NewProp_AnchorLayerPath = { "AnchorLayerPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventMakePathRelativeToLayer_Parms, AnchorLayerPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer_Statics::NewProp_AnchorLayerPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer_Statics::NewProp_AnchorLayerPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer_Statics::NewProp_PathToMakeRelative_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer_Statics::NewProp_PathToMakeRelative = { "PathToMakeRelative", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventMakePathRelativeToLayer_Parms, PathToMakeRelative), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer_Statics::NewProp_PathToMakeRelative_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer_Statics::NewProp_PathToMakeRelative_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventMakePathRelativeToLayer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer_Statics::NewProp_AnchorLayerPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer_Statics::NewProp_PathToMakeRelative,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layer utils" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "MakePathRelativeToLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer_Statics::UsdConversionBlueprintLibrary_eventMakePathRelativeToLayer_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics
	{
		struct UsdConversionBlueprintLibrary_eventPastePrims_Parms
		{
			FString StageRootLayer;
			FString ParentPrimPath;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageRootLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StageRootLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentPrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParentPrimPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::NewProp_StageRootLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::NewProp_StageRootLayer = { "StageRootLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventPastePrims_Parms, StageRootLayer), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::NewProp_StageRootLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::NewProp_StageRootLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::NewProp_ParentPrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::NewProp_ParentPrimPath = { "ParentPrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventPastePrims_Parms, ParentPrimPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::NewProp_ParentPrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::NewProp_ParentPrimPath_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventPastePrims_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::NewProp_StageRootLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::NewProp_ParentPrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::Function_MetaDataParams[] = {
		{ "Category", "Prim utils" },
		{ "Comment", "/**\n\x09 * Pastes the prims from the clipboard stage as children of ParentPrim.\n\x09 *\n\x09 * The pasted prims may be renamed in order to have valid names for the target location, which is why this function\n\x09 * returns the pasted prim paths.\n\x09 * This function returns just paths instead of actual prims because USD needs to respond to the notices about\n\x09 * the created prim specs before the prims are fully created, which means we wouldn't be able to return the\n\x09 * created prims yet, in case this function was called from within an SdfChangeBlock.\n\x09 *\n\x09 * @param StageRootLayer - Path to the root layer of the stage from which we should fetch the Prims\n\x09 * @param ParentPrimPath - Prim that will become parent to the pasted prims\n\x09 * @return Paths to the pasted prim specs, after they were added as children of ParentPrim\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
		{ "ToolTip", "Pastes the prims from the clipboard stage as children of ParentPrim.\n\nThe pasted prims may be renamed in order to have valid names for the target location, which is why this function\nreturns the pasted prim paths.\nThis function returns just paths instead of actual prims because USD needs to respond to the notices about\nthe created prim specs before the prims are fully created, which means we wouldn't be able to return the\ncreated prims yet, in case this function was called from within an SdfChangeBlock.\n\n@param StageRootLayer - Path to the root layer of the stage from which we should fetch the Prims\n@param ParentPrimPath - Prim that will become parent to the pasted prims\n@return Paths to the pasted prim specs, after they were added as children of ParentPrim" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "PastePrims", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::UsdConversionBlueprintLibrary_eventPastePrims_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_ReapplySequencerAnimations_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_ReapplySequencerAnimations_Statics::Function_MetaDataParams[] = {
		{ "Category", "World utils" },
		{ "Comment", "/**\n\x09 * If we used `ReverseSequencerAnimations` to undo the effect of an opened sequencer before export, this function\n\x09 * can be used to re-apply the sequencer state back to the level after the export is complete\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
		{ "ToolTip", "If we used `ReverseSequencerAnimations` to undo the effect of an opened sequencer before export, this function\ncan be used to re-apply the sequencer state back to the level after the export is complete" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_ReapplySequencerAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "ReapplySequencerAnimations", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_ReapplySequencerAnimations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_ReapplySequencerAnimations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_ReapplySequencerAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_ReapplySequencerAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics
	{
		struct UsdConversionBlueprintLibrary_eventRemoveAllPrimSpecs_Parms
		{
			FString StageRootLayer;
			FString PrimPath;
			FString TargetLayer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageRootLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StageRootLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetLayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::NewProp_StageRootLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::NewProp_StageRootLayer = { "StageRootLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventRemoveAllPrimSpecs_Parms, StageRootLayer), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::NewProp_StageRootLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::NewProp_StageRootLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::NewProp_PrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventRemoveAllPrimSpecs_Parms, PrimPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::NewProp_PrimPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::NewProp_TargetLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::NewProp_TargetLayer = { "TargetLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventRemoveAllPrimSpecs_Parms, TargetLayer), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::NewProp_TargetLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::NewProp_TargetLayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::NewProp_StageRootLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::NewProp_TargetLayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Prim utils" },
		{ "Comment", "/**\n\x09 * Removes all the prim specs for Prim on the given Layer.\n\x09 *\n\x09 * This function is useful in case the prim is inside a variant set: In that case, just calling FUsdStage::RemovePrim()\n\x09 * will attempt to remove the \"/Root/Example/Child\", which wouldn't remove the \"/Root{Varset=Var}Example/Child\" spec,\n\x09 * meaning the prim may still be left on the stage. Note that it's even possible to have both of those specs at the same time:\n\x09 * for example when we have a prim inside a variant set, but outside of it we have overrides to the same prim. This function\n\x09 * will remove both.\n\x09 *\n\x09 * @param StageRootLayer - Path to the root layer of the stage from which we should fetch the Prims\n\x09 * @param PrimPath - Prim to remove\n\x09 * @param Layer - Layer to remove prim specs from. This can be left with the invalid layer (default) in order to remove all\n\x09 *\x09\x09\x09\x09  specs from the entire stage's local layer stack.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
		{ "ToolTip", "Removes all the prim specs for Prim on the given Layer.\n\nThis function is useful in case the prim is inside a variant set: In that case, just calling FUsdStage::RemovePrim()\nwill attempt to remove the \"/Root/Example/Child\", which wouldn't remove the \"/Root{Varset=Var}Example/Child\" spec,\nmeaning the prim may still be left on the stage. Note that it's even possible to have both of those specs at the same time:\nfor example when we have a prim inside a variant set, but outside of it we have overrides to the same prim. This function\nwill remove both.\n\n@param StageRootLayer - Path to the root layer of the stage from which we should fetch the Prims\n@param PrimPath - Prim to remove\n@param Layer - Layer to remove prim specs from. This can be left with the invalid layer (default) in order to remove all\n                               specs from the entire stage's local layer stack." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "RemoveAllPrimSpecs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::UsdConversionBlueprintLibrary_eventRemoveAllPrimSpecs_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RevertSequencerAnimations_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RevertSequencerAnimations_Statics::Function_MetaDataParams[] = {
		{ "Category", "World utils" },
		{ "Comment", "/**\n\x09 * If we have the Sequencer open with a level sequence animating the level before export, this function can revert\n\x09 * any actor or component to its unanimated state\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
		{ "ToolTip", "If we have the Sequencer open with a level sequence animating the level before export, this function can revert\nany actor or component to its unanimated state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RevertSequencerAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "RevertSequencerAnimations", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RevertSequencerAnimations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RevertSequencerAnimations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RevertSequencerAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RevertSequencerAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics
	{
		struct UsdConversionBlueprintLibrary_eventSendAnalytics_Parms
		{
			TArray<FAnalyticsEventAttr> Attrs;
			FString EventName;
			bool bAutomated;
			double ElapsedSeconds;
			double NumberOfFrames;
			FString Extension;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attrs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attrs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attrs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
		static void NewProp_bAutomated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomated;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ElapsedSeconds;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_NumberOfFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extension_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Extension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_Attrs_Inner = { "Attrs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnalyticsEventAttr, METADATA_PARAMS(nullptr, 0) }; // 4211131233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_Attrs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_Attrs = { "Attrs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventSendAnalytics_Parms, Attrs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_Attrs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_Attrs_MetaData)) }; // 4211131233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventSendAnalytics_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_EventName_MetaData)) };
	void Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_bAutomated_SetBit(void* Obj)
	{
		((UsdConversionBlueprintLibrary_eventSendAnalytics_Parms*)Obj)->bAutomated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_bAutomated = { "bAutomated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintLibrary_eventSendAnalytics_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_bAutomated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_ElapsedSeconds = { "ElapsedSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventSendAnalytics_Parms, ElapsedSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_NumberOfFrames = { "NumberOfFrames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventSendAnalytics_Parms, NumberOfFrames), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_Extension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventSendAnalytics_Parms, Extension), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_Extension_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_Extension_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_Attrs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_Attrs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_bAutomated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_ElapsedSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_NumberOfFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::NewProp_Extension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Defer to the USDClasses module to actually send analytics information */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
		{ "ToolTip", "Defer to the USDClasses module to actually send analytics information" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "SendAnalytics", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::UsdConversionBlueprintLibrary_eventSendAnalytics_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamInRequiredLevels_Statics
	{
		struct UsdConversionBlueprintLibrary_eventStreamInRequiredLevels_Parms
		{
			UWorld* World;
			TSet<FString> LevelsToIgnore;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelsToIgnore_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_LevelsToIgnore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamInRequiredLevels_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventStreamInRequiredLevels_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamInRequiredLevels_Statics::NewProp_LevelsToIgnore_ElementProp = { "LevelsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamInRequiredLevels_Statics::NewProp_LevelsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamInRequiredLevels_Statics::NewProp_LevelsToIgnore = { "LevelsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventStreamInRequiredLevels_Parms, LevelsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamInRequiredLevels_Statics::NewProp_LevelsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamInRequiredLevels_Statics::NewProp_LevelsToIgnore_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamInRequiredLevels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamInRequiredLevels_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamInRequiredLevels_Statics::NewProp_LevelsToIgnore_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamInRequiredLevels_Statics::NewProp_LevelsToIgnore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamInRequiredLevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "World utils" },
		{ "Comment", "/** Fully streams in and displays all levels whose names are not in LevelsToIgnore */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
		{ "ToolTip", "Fully streams in and displays all levels whose names are not in LevelsToIgnore" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamInRequiredLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "StreamInRequiredLevels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamInRequiredLevels_Statics::UsdConversionBlueprintLibrary_eventStreamInRequiredLevels_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamInRequiredLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamInRequiredLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamInRequiredLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamInRequiredLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamInRequiredLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamInRequiredLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics
	{
		struct UsdConversionBlueprintLibrary_eventStreamOutLevels_Parms
		{
			UWorld* OwningWorld;
			TArray<FString> LevelNamesToStreamOut;
			TArray<FString> LevelNamesToHide;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningWorld;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelNamesToStreamOut_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelNamesToStreamOut_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelNamesToStreamOut;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelNamesToHide_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelNamesToHide_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelNamesToHide;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::NewProp_OwningWorld = { "OwningWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventStreamOutLevels_Parms, OwningWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::NewProp_LevelNamesToStreamOut_Inner = { "LevelNamesToStreamOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::NewProp_LevelNamesToStreamOut_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::NewProp_LevelNamesToStreamOut = { "LevelNamesToStreamOut", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventStreamOutLevels_Parms, LevelNamesToStreamOut), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::NewProp_LevelNamesToStreamOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::NewProp_LevelNamesToStreamOut_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::NewProp_LevelNamesToHide_Inner = { "LevelNamesToHide", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::NewProp_LevelNamesToHide_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::NewProp_LevelNamesToHide = { "LevelNamesToHide", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintLibrary_eventStreamOutLevels_Parms, LevelNamesToHide), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::NewProp_LevelNamesToHide_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::NewProp_LevelNamesToHide_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::NewProp_OwningWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::NewProp_LevelNamesToStreamOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::NewProp_LevelNamesToStreamOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::NewProp_LevelNamesToHide_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::NewProp_LevelNamesToHide,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "World utils" },
		{ "Comment", "/** Streams out/hides sublevels that were streamed in before export */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
		{ "ToolTip", "Streams out/hides sublevels that were streamed in before export" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintLibrary, nullptr, "StreamOutLevels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::UsdConversionBlueprintLibrary_eventStreamOutLevels_Parms), Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdConversionBlueprintLibrary);
	UClass* Z_Construct_UClass_UUsdConversionBlueprintLibrary_NoRegister()
	{
		return UUsdConversionBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUsdConversionBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdConversionBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_USDExporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUsdConversionBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_AddPayload, "AddPayload" }, // 3245365152
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanExportToLayer, "CanExportToLayer" }, // 2711418885
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CanPastePrims, "CanPastePrims" }, // 2921730494
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_ClearPrimClipboard, "ClearPrimClipboard" }, // 4133484826
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CopyPrims, "CopyPrims" }, // 2199235597
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_CutPrims, "CutPrims" }, // 2042877750
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_DuplicatePrims, "DuplicatePrims" }, // 3880866874
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GenerateObjectVersionString, "GenerateObjectVersionString" }, // 2793294930
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetActorsToConvert, "GetActorsToConvert" }, // 1987754622
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetAnalyticsAttributes, "GetAnalyticsAttributes" }, // 1000392650
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstancedFoliageActorForLevel, "GetInstancedFoliageActorForLevel" }, // 4288721588
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetInstanceTransforms, "GetInstanceTransforms" }, // 2677067971
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetLoadedLevelNames, "GetLoadedLevelNames" }, // 2456433381
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetPrimPathForObject, "GetPrimPathForObject" }, // 943999814
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSchemaNameForComponent, "GetSchemaNameForComponent" }, // 1433591702
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetSource, "GetSource" }, // 4272177206
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetUsedFoliageTypes, "GetUsedFoliageTypes" }, // 913731248
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_GetVisibleInEditorLevelNames, "GetVisibleInEditorLevelNames" }, // 3236293354
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_InsertSubLayer, "InsertSubLayer" }, // 1186689695
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_MakePathRelativeToLayer, "MakePathRelativeToLayer" }, // 2112772110
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_PastePrims, "PastePrims" }, // 253766768
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_ReapplySequencerAnimations, "ReapplySequencerAnimations" }, // 725272921
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RemoveAllPrimSpecs, "RemoveAllPrimSpecs" }, // 2055201991
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_RevertSequencerAnimations, "RevertSequencerAnimations" }, // 2633387140
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_SendAnalytics, "SendAnalytics" }, // 1165520550
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamInRequiredLevels, "StreamInRequiredLevels" }, // 3875191593
		{ &Z_Construct_UFunction_UUsdConversionBlueprintLibrary_StreamOutLevels, "StreamOutLevels" }, // 3002251640
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdConversionBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Wrapped static conversion functions from the UsdUtilities module, so that they can be used via scripting */" },
		{ "IncludePath", "USDConversionBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintLibrary.h" },
		{ "ScriptName", "UsdConversionLibrary" },
		{ "ToolTip", "Wrapped static conversion functions from the UsdUtilities module, so that they can be used via scripting" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdConversionBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdConversionBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdConversionBlueprintLibrary_Statics::ClassParams = {
		&UUsdConversionBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUsdConversionBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdConversionBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUsdConversionBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UUsdConversionBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdConversionBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UUsdConversionBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdConversionBlueprintLibrary.OuterSingleton;
	}
	template<> USDEXPORTER_API UClass* StaticClass<UUsdConversionBlueprintLibrary>()
	{
		return UUsdConversionBlueprintLibrary::StaticClass();
	}
	UUsdConversionBlueprintLibrary::UUsdConversionBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdConversionBlueprintLibrary);
	UUsdConversionBlueprintLibrary::~UUsdConversionBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUsdConversionBlueprintLibrary, UUsdConversionBlueprintLibrary::StaticClass, TEXT("UUsdConversionBlueprintLibrary"), &Z_Registration_Info_UClass_UUsdConversionBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdConversionBlueprintLibrary), 1791944169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_3081098117(TEXT("/Script/USDExporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
