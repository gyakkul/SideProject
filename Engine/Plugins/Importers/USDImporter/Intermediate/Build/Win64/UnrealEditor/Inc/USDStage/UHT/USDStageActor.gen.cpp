// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDStageActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDStageActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	UNREALUSDWRAPPER_API UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet();
	UNREALUSDWRAPPER_API UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType();
	UNREALUSDWRAPPER_API UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling();
	UPackage* Z_Construct_UPackage__Script_USDStage();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdAssetCache2_NoRegister();
	USDCLASSES_API UClass* Z_Construct_UClass_UUsdAssetCache_NoRegister();
	USDSTAGE_API UClass* Z_Construct_UClass_AUsdStageActor();
	USDSTAGE_API UClass* Z_Construct_UClass_AUsdStageActor_NoRegister();
	USDSTAGE_API UClass* Z_Construct_UClass_UUsdPrimTwin_NoRegister();
	USDSTAGE_API UClass* Z_Construct_UClass_UUsdTransactor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AUsdStageActor::execGetIsolatedRootLayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetIsolatedRootLayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUsdStageActor::execSetIsolatedRootLayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IsolatedStageRootLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsolatedRootLayer(Z_Param_IsolatedStageRootLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUsdStageActor::execNewStage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NewStage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUsdStageActor::execGetSourcePrimPath)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSourcePrimPath(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUsdStageActor::execGetGeneratedAssets)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PrimPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetGeneratedAssets(Z_Param_PrimPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUsdStageActor::execGetGeneratedComponent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PrimPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetGeneratedComponent(Z_Param_PrimPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUsdStageActor::execGetLevelSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequence**)Z_Param__Result=P_THIS->GetLevelSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUsdStageActor::execSetTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTime(Z_Param_InTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUsdStageActor::execGetTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUsdStageActor::execSetRootMotionHandling)
	{
		P_GET_ENUM(EUsdRootMotionHandling,Z_Param_NewHandlingStrategy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRootMotionHandling(EUsdRootMotionHandling(Z_Param_NewHandlingStrategy));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUsdStageActor::execSetMaterialPurpose)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NewMaterialPurpose);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterialPurpose(Z_Param_Out_NewMaterialPurpose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUsdStageActor::execSetRenderContext)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NewRenderContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRenderContext(Z_Param_Out_NewRenderContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUsdStageActor::execSetNaniteTriangleThreshold)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewNaniteTriangleThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNaniteTriangleThreshold(Z_Param_NewNaniteTriangleThreshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUsdStageActor::execSetPurposesToLoad)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewPurposesToLoad);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPurposesToLoad(Z_Param_NewPurposesToLoad);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUsdStageActor::execSetCollapseTopLevelPointInstancers)
	{
		P_GET_UBOOL(Z_Param_bCollapse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollapseTopLevelPointInstancers(Z_Param_bCollapse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUsdStageActor::execSetMergeIdenticalMaterialSlots)
	{
		P_GET_UBOOL(Z_Param_bMerge);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMergeIdenticalMaterialSlots(Z_Param_bMerge);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUsdStageActor::execSetKindsToCollapse)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewKindsToCollapse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetKindsToCollapse(Z_Param_NewKindsToCollapse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUsdStageActor::execSetInterpolationType)
	{
		P_GET_ENUM(EUsdInterpolationType,Z_Param_NewType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInterpolationType(EUsdInterpolationType(Z_Param_NewType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUsdStageActor::execSetInitialLoadSet)
	{
		P_GET_ENUM(EUsdInitialLoadSet,Z_Param_NewLoadSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInitialLoadSet(EUsdInitialLoadSet(Z_Param_NewLoadSet));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUsdStageActor::execSetAssetCache)
	{
		P_GET_OBJECT(UUsdAssetCache2,Z_Param_NewCache);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAssetCache(Z_Param_NewCache);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUsdStageActor::execSetRootLayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RootFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRootLayer(Z_Param_RootFilePath);
		P_NATIVE_END;
	}
	void AUsdStageActor::StaticRegisterNativesAUsdStageActor()
	{
		UClass* Class = AUsdStageActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGeneratedAssets", &AUsdStageActor::execGetGeneratedAssets },
			{ "GetGeneratedComponent", &AUsdStageActor::execGetGeneratedComponent },
			{ "GetIsolatedRootLayer", &AUsdStageActor::execGetIsolatedRootLayer },
			{ "GetLevelSequence", &AUsdStageActor::execGetLevelSequence },
			{ "GetSourcePrimPath", &AUsdStageActor::execGetSourcePrimPath },
			{ "GetTime", &AUsdStageActor::execGetTime },
			{ "NewStage", &AUsdStageActor::execNewStage },
			{ "SetAssetCache", &AUsdStageActor::execSetAssetCache },
			{ "SetCollapseTopLevelPointInstancers", &AUsdStageActor::execSetCollapseTopLevelPointInstancers },
			{ "SetInitialLoadSet", &AUsdStageActor::execSetInitialLoadSet },
			{ "SetInterpolationType", &AUsdStageActor::execSetInterpolationType },
			{ "SetIsolatedRootLayer", &AUsdStageActor::execSetIsolatedRootLayer },
			{ "SetKindsToCollapse", &AUsdStageActor::execSetKindsToCollapse },
			{ "SetMaterialPurpose", &AUsdStageActor::execSetMaterialPurpose },
			{ "SetMergeIdenticalMaterialSlots", &AUsdStageActor::execSetMergeIdenticalMaterialSlots },
			{ "SetNaniteTriangleThreshold", &AUsdStageActor::execSetNaniteTriangleThreshold },
			{ "SetPurposesToLoad", &AUsdStageActor::execSetPurposesToLoad },
			{ "SetRenderContext", &AUsdStageActor::execSetRenderContext },
			{ "SetRootLayer", &AUsdStageActor::execSetRootLayer },
			{ "SetRootMotionHandling", &AUsdStageActor::execSetRootMotionHandling },
			{ "SetTime", &AUsdStageActor::execSetTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUsdStageActor_GetGeneratedAssets_Statics
	{
		struct UsdStageActor_eventGetGeneratedAssets_Parms
		{
			FString PrimPath;
			TArray<UObject*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_GetGeneratedAssets_Statics::NewProp_PrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUsdStageActor_GetGeneratedAssets_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageActor_eventGetGeneratedAssets_Parms, PrimPath), METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_GetGeneratedAssets_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_GetGeneratedAssets_Statics::NewProp_PrimPath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUsdStageActor_GetGeneratedAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUsdStageActor_GetGeneratedAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageActor_eventGetGeneratedAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUsdStageActor_GetGeneratedAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_GetGeneratedAssets_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_GetGeneratedAssets_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_GetGeneratedAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_GetGeneratedAssets_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Gets the transient assets that were generated for a prim with a given prim path. Likely one asset (e.g. UStaticMesh), but can be multiple (USkeletalMesh, USkeleton, etc.)\n\x09 * @param PrimPath - Full path to the source prim, e.g. \"/root_prim/my_mesh\"\n\x09 * @return The corresponding generated assets. May be empty if path is invalid or if that prim led to no generated assets.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
		{ "ToolTip", "Gets the transient assets that were generated for a prim with a given prim path. Likely one asset (e.g. UStaticMesh), but can be multiple (USkeletalMesh, USkeleton, etc.)\n@param PrimPath - Full path to the source prim, e.g. \"/root_prim/my_mesh\"\n@return The corresponding generated assets. May be empty if path is invalid or if that prim led to no generated assets." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUsdStageActor_GetGeneratedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUsdStageActor, nullptr, "GetGeneratedAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUsdStageActor_GetGeneratedAssets_Statics::UsdStageActor_eventGetGeneratedAssets_Parms), Z_Construct_UFunction_AUsdStageActor_GetGeneratedAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_GetGeneratedAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_GetGeneratedAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_GetGeneratedAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUsdStageActor_GetGeneratedAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUsdStageActor_GetGeneratedAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUsdStageActor_GetGeneratedComponent_Statics
	{
		struct UsdStageActor_eventGetGeneratedComponent_Parms
		{
			FString PrimPath;
			USceneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_GetGeneratedComponent_Statics::NewProp_PrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUsdStageActor_GetGeneratedComponent_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageActor_eventGetGeneratedComponent_Parms, PrimPath), METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_GetGeneratedComponent_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_GetGeneratedComponent_Statics::NewProp_PrimPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_GetGeneratedComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUsdStageActor_GetGeneratedComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageActor_eventGetGeneratedComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_GetGeneratedComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_GetGeneratedComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUsdStageActor_GetGeneratedComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_GetGeneratedComponent_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_GetGeneratedComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_GetGeneratedComponent_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Gets the transient component that was generated for a prim with a given prim path.\n\x09 * Warning: The lifetime of the component is managed by the AUsdStageActor, and it may be force-destroyed at any time (e.g. when closing the stage)\n\x09 * @param PrimPath - Full path to the source prim, e.g. \"/root_prim/my_prim\"\n\x09 * @return The corresponding spawned component. It may correspond to a parent prim, if the prim at PrimPath was collapsed. Nullptr if path is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
		{ "ToolTip", "Gets the transient component that was generated for a prim with a given prim path.\nWarning: The lifetime of the component is managed by the AUsdStageActor, and it may be force-destroyed at any time (e.g. when closing the stage)\n@param PrimPath - Full path to the source prim, e.g. \"/root_prim/my_prim\"\n@return The corresponding spawned component. It may correspond to a parent prim, if the prim at PrimPath was collapsed. Nullptr if path is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUsdStageActor_GetGeneratedComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUsdStageActor, nullptr, "GetGeneratedComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUsdStageActor_GetGeneratedComponent_Statics::UsdStageActor_eventGetGeneratedComponent_Parms), Z_Construct_UFunction_AUsdStageActor_GetGeneratedComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_GetGeneratedComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_GetGeneratedComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_GetGeneratedComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUsdStageActor_GetGeneratedComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUsdStageActor_GetGeneratedComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUsdStageActor_GetIsolatedRootLayer_Statics
	{
		struct UsdStageActor_eventGetIsolatedRootLayer_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUsdStageActor_GetIsolatedRootLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageActor_eventGetIsolatedRootLayer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUsdStageActor_GetIsolatedRootLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_GetIsolatedRootLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_GetIsolatedRootLayer_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Returns the root layer identifier of the currently isolated stage if we're in isolated mode, and the empty\n\x09 * string otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
		{ "ToolTip", "Returns the root layer identifier of the currently isolated stage if we're in isolated mode, and the empty\nstring otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUsdStageActor_GetIsolatedRootLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUsdStageActor, nullptr, "GetIsolatedRootLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUsdStageActor_GetIsolatedRootLayer_Statics::UsdStageActor_eventGetIsolatedRootLayer_Parms), Z_Construct_UFunction_AUsdStageActor_GetIsolatedRootLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_GetIsolatedRootLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_GetIsolatedRootLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_GetIsolatedRootLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUsdStageActor_GetIsolatedRootLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUsdStageActor_GetIsolatedRootLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUsdStageActor_GetLevelSequence_Statics
	{
		struct UsdStageActor_eventGetLevelSequence_Parms
		{
			ULevelSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUsdStageActor_GetLevelSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageActor_eventGetLevelSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUsdStageActor_GetLevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_GetLevelSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_GetLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUsdStageActor_GetLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUsdStageActor, nullptr, "GetLevelSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUsdStageActor_GetLevelSequence_Statics::UsdStageActor_eventGetLevelSequence_Parms), Z_Construct_UFunction_AUsdStageActor_GetLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_GetLevelSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_GetLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_GetLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUsdStageActor_GetLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUsdStageActor_GetLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUsdStageActor_GetSourcePrimPath_Statics
	{
		struct UsdStageActor_eventGetSourcePrimPath_Parms
		{
			UObject* Object;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUsdStageActor_GetSourcePrimPath_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageActor_eventGetSourcePrimPath_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUsdStageActor_GetSourcePrimPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageActor_eventGetSourcePrimPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUsdStageActor_GetSourcePrimPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_GetSourcePrimPath_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_GetSourcePrimPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_GetSourcePrimPath_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Gets the path to the prim that was parsed to generate the given `Object`.\n\x09 * @param Object - UObject to query with. Can be one of the transient components generated when a stage was opened, or something like a UStaticMesh.\n\x09 * @return The path to the source prim, e.g. \"/root_prim/some_prim\". May be empty in case we couldn't find the source prim.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
		{ "ToolTip", "Gets the path to the prim that was parsed to generate the given `Object`.\n@param Object - UObject to query with. Can be one of the transient components generated when a stage was opened, or something like a UStaticMesh.\n@return The path to the source prim, e.g. \"/root_prim/some_prim\". May be empty in case we couldn't find the source prim." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUsdStageActor_GetSourcePrimPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUsdStageActor, nullptr, "GetSourcePrimPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUsdStageActor_GetSourcePrimPath_Statics::UsdStageActor_eventGetSourcePrimPath_Parms), Z_Construct_UFunction_AUsdStageActor_GetSourcePrimPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_GetSourcePrimPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_GetSourcePrimPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_GetSourcePrimPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUsdStageActor_GetSourcePrimPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUsdStageActor_GetSourcePrimPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUsdStageActor_GetTime_Statics
	{
		struct UsdStageActor_eventGetTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUsdStageActor_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageActor_eventGetTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUsdStageActor_GetTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_GetTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_GetTime_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUsdStageActor_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUsdStageActor, nullptr, "GetTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUsdStageActor_GetTime_Statics::UsdStageActor_eventGetTime_Parms), Z_Construct_UFunction_AUsdStageActor_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_GetTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_GetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_GetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUsdStageActor_GetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUsdStageActor_GetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUsdStageActor_NewStage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_NewStage_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "// Creates a brand new, memory-only USD stage and opens it\n" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
		{ "ToolTip", "Creates a brand new, memory-only USD stage and opens it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUsdStageActor_NewStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUsdStageActor, nullptr, "NewStage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_NewStage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_NewStage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUsdStageActor_NewStage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUsdStageActor_NewStage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUsdStageActor_SetAssetCache_Statics
	{
		struct UsdStageActor_eventSetAssetCache_Parms
		{
			UUsdAssetCache2* NewCache;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUsdStageActor_SetAssetCache_Statics::NewProp_NewCache = { "NewCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageActor_eventSetAssetCache_Parms, NewCache), Z_Construct_UClass_UUsdAssetCache2_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUsdStageActor_SetAssetCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_SetAssetCache_Statics::NewProp_NewCache,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_SetAssetCache_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUsdStageActor_SetAssetCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUsdStageActor, nullptr, "SetAssetCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUsdStageActor_SetAssetCache_Statics::UsdStageActor_eventSetAssetCache_Parms), Z_Construct_UFunction_AUsdStageActor_SetAssetCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetAssetCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_SetAssetCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetAssetCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUsdStageActor_SetAssetCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUsdStageActor_SetAssetCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUsdStageActor_SetCollapseTopLevelPointInstancers_Statics
	{
		struct UsdStageActor_eventSetCollapseTopLevelPointInstancers_Parms
		{
			bool bCollapse;
		};
		static void NewProp_bCollapse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollapse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUsdStageActor_SetCollapseTopLevelPointInstancers_Statics::NewProp_bCollapse_SetBit(void* Obj)
	{
		((UsdStageActor_eventSetCollapseTopLevelPointInstancers_Parms*)Obj)->bCollapse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUsdStageActor_SetCollapseTopLevelPointInstancers_Statics::NewProp_bCollapse = { "bCollapse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdStageActor_eventSetCollapseTopLevelPointInstancers_Parms), &Z_Construct_UFunction_AUsdStageActor_SetCollapseTopLevelPointInstancers_Statics::NewProp_bCollapse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUsdStageActor_SetCollapseTopLevelPointInstancers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_SetCollapseTopLevelPointInstancers_Statics::NewProp_bCollapse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_SetCollapseTopLevelPointInstancers_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUsdStageActor_SetCollapseTopLevelPointInstancers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUsdStageActor, nullptr, "SetCollapseTopLevelPointInstancers", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUsdStageActor_SetCollapseTopLevelPointInstancers_Statics::UsdStageActor_eventSetCollapseTopLevelPointInstancers_Parms), Z_Construct_UFunction_AUsdStageActor_SetCollapseTopLevelPointInstancers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetCollapseTopLevelPointInstancers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_SetCollapseTopLevelPointInstancers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetCollapseTopLevelPointInstancers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUsdStageActor_SetCollapseTopLevelPointInstancers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUsdStageActor_SetCollapseTopLevelPointInstancers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUsdStageActor_SetInitialLoadSet_Statics
	{
		struct UsdStageActor_eventSetInitialLoadSet_Parms
		{
			EUsdInitialLoadSet NewLoadSet;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewLoadSet_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewLoadSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUsdStageActor_SetInitialLoadSet_Statics::NewProp_NewLoadSet_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AUsdStageActor_SetInitialLoadSet_Statics::NewProp_NewLoadSet = { "NewLoadSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageActor_eventSetInitialLoadSet_Parms, NewLoadSet), Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet, METADATA_PARAMS(nullptr, 0) }; // 3459217511
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUsdStageActor_SetInitialLoadSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_SetInitialLoadSet_Statics::NewProp_NewLoadSet_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_SetInitialLoadSet_Statics::NewProp_NewLoadSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_SetInitialLoadSet_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUsdStageActor_SetInitialLoadSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUsdStageActor, nullptr, "SetInitialLoadSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUsdStageActor_SetInitialLoadSet_Statics::UsdStageActor_eventSetInitialLoadSet_Parms), Z_Construct_UFunction_AUsdStageActor_SetInitialLoadSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetInitialLoadSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_SetInitialLoadSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetInitialLoadSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUsdStageActor_SetInitialLoadSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUsdStageActor_SetInitialLoadSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUsdStageActor_SetInterpolationType_Statics
	{
		struct UsdStageActor_eventSetInterpolationType_Parms
		{
			EUsdInterpolationType NewType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUsdStageActor_SetInterpolationType_Statics::NewProp_NewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AUsdStageActor_SetInterpolationType_Statics::NewProp_NewType = { "NewType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageActor_eventSetInterpolationType_Parms, NewType), Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType, METADATA_PARAMS(nullptr, 0) }; // 3559205169
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUsdStageActor_SetInterpolationType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_SetInterpolationType_Statics::NewProp_NewType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_SetInterpolationType_Statics::NewProp_NewType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_SetInterpolationType_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUsdStageActor_SetInterpolationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUsdStageActor, nullptr, "SetInterpolationType", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUsdStageActor_SetInterpolationType_Statics::UsdStageActor_eventSetInterpolationType_Parms), Z_Construct_UFunction_AUsdStageActor_SetInterpolationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetInterpolationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_SetInterpolationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetInterpolationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUsdStageActor_SetInterpolationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUsdStageActor_SetInterpolationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUsdStageActor_SetIsolatedRootLayer_Statics
	{
		struct UsdStageActor_eventSetIsolatedRootLayer_Parms
		{
			FString IsolatedStageRootLayer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsolatedStageRootLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IsolatedStageRootLayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_SetIsolatedRootLayer_Statics::NewProp_IsolatedStageRootLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUsdStageActor_SetIsolatedRootLayer_Statics::NewProp_IsolatedStageRootLayer = { "IsolatedStageRootLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageActor_eventSetIsolatedRootLayer_Parms, IsolatedStageRootLayer), METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_SetIsolatedRootLayer_Statics::NewProp_IsolatedStageRootLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetIsolatedRootLayer_Statics::NewProp_IsolatedStageRootLayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUsdStageActor_SetIsolatedRootLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_SetIsolatedRootLayer_Statics::NewProp_IsolatedStageRootLayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_SetIsolatedRootLayer_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * If IsolatedStageRootLayer is the identifier of one of the sublayers of the currently opened stage, this will\n\x09 * enter isolated mode by creating a new stage with IsolatedStageRootLayer as its root, and displaying that.\n\x09 * Provide an empty string to leave isolated mode.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
		{ "ToolTip", "If IsolatedStageRootLayer is the identifier of one of the sublayers of the currently opened stage, this will\nenter isolated mode by creating a new stage with IsolatedStageRootLayer as its root, and displaying that.\nProvide an empty string to leave isolated mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUsdStageActor_SetIsolatedRootLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUsdStageActor, nullptr, "SetIsolatedRootLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUsdStageActor_SetIsolatedRootLayer_Statics::UsdStageActor_eventSetIsolatedRootLayer_Parms), Z_Construct_UFunction_AUsdStageActor_SetIsolatedRootLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetIsolatedRootLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_SetIsolatedRootLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetIsolatedRootLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUsdStageActor_SetIsolatedRootLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUsdStageActor_SetIsolatedRootLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUsdStageActor_SetKindsToCollapse_Statics
	{
		struct UsdStageActor_eventSetKindsToCollapse_Parms
		{
			int32 NewKindsToCollapse;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewKindsToCollapse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUsdStageActor_SetKindsToCollapse_Statics::NewProp_NewKindsToCollapse = { "NewKindsToCollapse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageActor_eventSetKindsToCollapse_Parms, NewKindsToCollapse), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUsdStageActor_SetKindsToCollapse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_SetKindsToCollapse_Statics::NewProp_NewKindsToCollapse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_SetKindsToCollapse_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUsdStageActor_SetKindsToCollapse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUsdStageActor, nullptr, "SetKindsToCollapse", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUsdStageActor_SetKindsToCollapse_Statics::UsdStageActor_eventSetKindsToCollapse_Parms), Z_Construct_UFunction_AUsdStageActor_SetKindsToCollapse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetKindsToCollapse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_SetKindsToCollapse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetKindsToCollapse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUsdStageActor_SetKindsToCollapse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUsdStageActor_SetKindsToCollapse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUsdStageActor_SetMaterialPurpose_Statics
	{
		struct UsdStageActor_eventSetMaterialPurpose_Parms
		{
			FName NewMaterialPurpose;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewMaterialPurpose_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewMaterialPurpose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_SetMaterialPurpose_Statics::NewProp_NewMaterialPurpose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AUsdStageActor_SetMaterialPurpose_Statics::NewProp_NewMaterialPurpose = { "NewMaterialPurpose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageActor_eventSetMaterialPurpose_Parms, NewMaterialPurpose), METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_SetMaterialPurpose_Statics::NewProp_NewMaterialPurpose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetMaterialPurpose_Statics::NewProp_NewMaterialPurpose_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUsdStageActor_SetMaterialPurpose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_SetMaterialPurpose_Statics::NewProp_NewMaterialPurpose,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_SetMaterialPurpose_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUsdStageActor_SetMaterialPurpose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUsdStageActor, nullptr, "SetMaterialPurpose", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUsdStageActor_SetMaterialPurpose_Statics::UsdStageActor_eventSetMaterialPurpose_Parms), Z_Construct_UFunction_AUsdStageActor_SetMaterialPurpose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetMaterialPurpose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_SetMaterialPurpose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetMaterialPurpose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUsdStageActor_SetMaterialPurpose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUsdStageActor_SetMaterialPurpose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUsdStageActor_SetMergeIdenticalMaterialSlots_Statics
	{
		struct UsdStageActor_eventSetMergeIdenticalMaterialSlots_Parms
		{
			bool bMerge;
		};
		static void NewProp_bMerge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMerge;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUsdStageActor_SetMergeIdenticalMaterialSlots_Statics::NewProp_bMerge_SetBit(void* Obj)
	{
		((UsdStageActor_eventSetMergeIdenticalMaterialSlots_Parms*)Obj)->bMerge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUsdStageActor_SetMergeIdenticalMaterialSlots_Statics::NewProp_bMerge = { "bMerge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdStageActor_eventSetMergeIdenticalMaterialSlots_Parms), &Z_Construct_UFunction_AUsdStageActor_SetMergeIdenticalMaterialSlots_Statics::NewProp_bMerge_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUsdStageActor_SetMergeIdenticalMaterialSlots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_SetMergeIdenticalMaterialSlots_Statics::NewProp_bMerge,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_SetMergeIdenticalMaterialSlots_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUsdStageActor_SetMergeIdenticalMaterialSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUsdStageActor, nullptr, "SetMergeIdenticalMaterialSlots", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUsdStageActor_SetMergeIdenticalMaterialSlots_Statics::UsdStageActor_eventSetMergeIdenticalMaterialSlots_Parms), Z_Construct_UFunction_AUsdStageActor_SetMergeIdenticalMaterialSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetMergeIdenticalMaterialSlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_SetMergeIdenticalMaterialSlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetMergeIdenticalMaterialSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUsdStageActor_SetMergeIdenticalMaterialSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUsdStageActor_SetMergeIdenticalMaterialSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUsdStageActor_SetNaniteTriangleThreshold_Statics
	{
		struct UsdStageActor_eventSetNaniteTriangleThreshold_Parms
		{
			int32 NewNaniteTriangleThreshold;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewNaniteTriangleThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUsdStageActor_SetNaniteTriangleThreshold_Statics::NewProp_NewNaniteTriangleThreshold = { "NewNaniteTriangleThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageActor_eventSetNaniteTriangleThreshold_Parms, NewNaniteTriangleThreshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUsdStageActor_SetNaniteTriangleThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_SetNaniteTriangleThreshold_Statics::NewProp_NewNaniteTriangleThreshold,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_SetNaniteTriangleThreshold_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUsdStageActor_SetNaniteTriangleThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUsdStageActor, nullptr, "SetNaniteTriangleThreshold", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUsdStageActor_SetNaniteTriangleThreshold_Statics::UsdStageActor_eventSetNaniteTriangleThreshold_Parms), Z_Construct_UFunction_AUsdStageActor_SetNaniteTriangleThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetNaniteTriangleThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_SetNaniteTriangleThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetNaniteTriangleThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUsdStageActor_SetNaniteTriangleThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUsdStageActor_SetNaniteTriangleThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUsdStageActor_SetPurposesToLoad_Statics
	{
		struct UsdStageActor_eventSetPurposesToLoad_Parms
		{
			int32 NewPurposesToLoad;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewPurposesToLoad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUsdStageActor_SetPurposesToLoad_Statics::NewProp_NewPurposesToLoad = { "NewPurposesToLoad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageActor_eventSetPurposesToLoad_Parms, NewPurposesToLoad), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUsdStageActor_SetPurposesToLoad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_SetPurposesToLoad_Statics::NewProp_NewPurposesToLoad,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_SetPurposesToLoad_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUsdStageActor_SetPurposesToLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUsdStageActor, nullptr, "SetPurposesToLoad", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUsdStageActor_SetPurposesToLoad_Statics::UsdStageActor_eventSetPurposesToLoad_Parms), Z_Construct_UFunction_AUsdStageActor_SetPurposesToLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetPurposesToLoad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_SetPurposesToLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetPurposesToLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUsdStageActor_SetPurposesToLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUsdStageActor_SetPurposesToLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUsdStageActor_SetRenderContext_Statics
	{
		struct UsdStageActor_eventSetRenderContext_Parms
		{
			FName NewRenderContext;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRenderContext_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewRenderContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_SetRenderContext_Statics::NewProp_NewRenderContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AUsdStageActor_SetRenderContext_Statics::NewProp_NewRenderContext = { "NewRenderContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageActor_eventSetRenderContext_Parms, NewRenderContext), METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_SetRenderContext_Statics::NewProp_NewRenderContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetRenderContext_Statics::NewProp_NewRenderContext_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUsdStageActor_SetRenderContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_SetRenderContext_Statics::NewProp_NewRenderContext,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_SetRenderContext_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUsdStageActor_SetRenderContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUsdStageActor, nullptr, "SetRenderContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUsdStageActor_SetRenderContext_Statics::UsdStageActor_eventSetRenderContext_Parms), Z_Construct_UFunction_AUsdStageActor_SetRenderContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetRenderContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_SetRenderContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetRenderContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUsdStageActor_SetRenderContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUsdStageActor_SetRenderContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUsdStageActor_SetRootLayer_Statics
	{
		struct UsdStageActor_eventSetRootLayer_Parms
		{
			FString RootFilePath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RootFilePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_SetRootLayer_Statics::NewProp_RootFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUsdStageActor_SetRootLayer_Statics::NewProp_RootFilePath = { "RootFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageActor_eventSetRootLayer_Parms, RootFilePath), METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_SetRootLayer_Statics::NewProp_RootFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetRootLayer_Statics::NewProp_RootFilePath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUsdStageActor_SetRootLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_SetRootLayer_Statics::NewProp_RootFilePath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_SetRootLayer_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUsdStageActor_SetRootLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUsdStageActor, nullptr, "SetRootLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUsdStageActor_SetRootLayer_Statics::UsdStageActor_eventSetRootLayer_Parms), Z_Construct_UFunction_AUsdStageActor_SetRootLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetRootLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_SetRootLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetRootLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUsdStageActor_SetRootLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUsdStageActor_SetRootLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUsdStageActor_SetRootMotionHandling_Statics
	{
		struct UsdStageActor_eventSetRootMotionHandling_Parms
		{
			EUsdRootMotionHandling NewHandlingStrategy;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewHandlingStrategy_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewHandlingStrategy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AUsdStageActor_SetRootMotionHandling_Statics::NewProp_NewHandlingStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AUsdStageActor_SetRootMotionHandling_Statics::NewProp_NewHandlingStrategy = { "NewHandlingStrategy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageActor_eventSetRootMotionHandling_Parms, NewHandlingStrategy), Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling, METADATA_PARAMS(nullptr, 0) }; // 2259965650
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUsdStageActor_SetRootMotionHandling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_SetRootMotionHandling_Statics::NewProp_NewHandlingStrategy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_SetRootMotionHandling_Statics::NewProp_NewHandlingStrategy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_SetRootMotionHandling_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUsdStageActor_SetRootMotionHandling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUsdStageActor, nullptr, "SetRootMotionHandling", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUsdStageActor_SetRootMotionHandling_Statics::UsdStageActor_eventSetRootMotionHandling_Parms), Z_Construct_UFunction_AUsdStageActor_SetRootMotionHandling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetRootMotionHandling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_SetRootMotionHandling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetRootMotionHandling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUsdStageActor_SetRootMotionHandling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUsdStageActor_SetRootMotionHandling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUsdStageActor_SetTime_Statics
	{
		struct UsdStageActor_eventSetTime_Parms
		{
			float InTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUsdStageActor_SetTime_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdStageActor_eventSetTime_Parms, InTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUsdStageActor_SetTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUsdStageActor_SetTime_Statics::NewProp_InTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUsdStageActor_SetTime_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUsdStageActor_SetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUsdStageActor, nullptr, "SetTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUsdStageActor_SetTime_Statics::UsdStageActor_eventSetTime_Parms), Z_Construct_UFunction_AUsdStageActor_SetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUsdStageActor_SetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUsdStageActor_SetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUsdStageActor_SetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUsdStageActor_SetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUsdStageActor);
	UClass* Z_Construct_UClass_AUsdStageActor_NoRegister()
	{
		return AUsdStageActor::StaticClass();
	}
	struct Z_Construct_UClass_AUsdStageActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsdAssetCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UsdAssetCache;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InitialLoadSet_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialLoadSet_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InitialLoadSet;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KindsToCollapse_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KindsToCollapse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergeIdenticalMaterialSlots_MetaData[];
#endif
		static void NewProp_bMergeIdenticalMaterialSlots_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeIdenticalMaterialSlots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCollapseTopLevelPointInstancers_MetaData[];
#endif
		static void NewProp_bCollapseTopLevelPointInstancers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollapseTopLevelPointInstancers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PurposesToLoad_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PurposesToLoad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NaniteTriangleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NaniteTriangleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderContext_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RenderContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPurpose_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialPurpose;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RootMotionHandling_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionHandling_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RootMotionHandling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LevelSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootUsdTwin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootUsdTwin;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimsToAnimate_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimsToAnimate_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_PrimsToAnimate;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectsToWatch_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectsToWatch_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectsToWatch_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectsToWatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transactor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Transactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUsdStageActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_USDStage,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUsdStageActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUsdStageActor_GetGeneratedAssets, "GetGeneratedAssets" }, // 4133493791
		{ &Z_Construct_UFunction_AUsdStageActor_GetGeneratedComponent, "GetGeneratedComponent" }, // 2052761754
		{ &Z_Construct_UFunction_AUsdStageActor_GetIsolatedRootLayer, "GetIsolatedRootLayer" }, // 2619958821
		{ &Z_Construct_UFunction_AUsdStageActor_GetLevelSequence, "GetLevelSequence" }, // 3093286020
		{ &Z_Construct_UFunction_AUsdStageActor_GetSourcePrimPath, "GetSourcePrimPath" }, // 1291086356
		{ &Z_Construct_UFunction_AUsdStageActor_GetTime, "GetTime" }, // 2663517804
		{ &Z_Construct_UFunction_AUsdStageActor_NewStage, "NewStage" }, // 1788924130
		{ &Z_Construct_UFunction_AUsdStageActor_SetAssetCache, "SetAssetCache" }, // 1164337286
		{ &Z_Construct_UFunction_AUsdStageActor_SetCollapseTopLevelPointInstancers, "SetCollapseTopLevelPointInstancers" }, // 4264184137
		{ &Z_Construct_UFunction_AUsdStageActor_SetInitialLoadSet, "SetInitialLoadSet" }, // 3832320287
		{ &Z_Construct_UFunction_AUsdStageActor_SetInterpolationType, "SetInterpolationType" }, // 2391514300
		{ &Z_Construct_UFunction_AUsdStageActor_SetIsolatedRootLayer, "SetIsolatedRootLayer" }, // 677843080
		{ &Z_Construct_UFunction_AUsdStageActor_SetKindsToCollapse, "SetKindsToCollapse" }, // 526147419
		{ &Z_Construct_UFunction_AUsdStageActor_SetMaterialPurpose, "SetMaterialPurpose" }, // 1793506832
		{ &Z_Construct_UFunction_AUsdStageActor_SetMergeIdenticalMaterialSlots, "SetMergeIdenticalMaterialSlots" }, // 3662512295
		{ &Z_Construct_UFunction_AUsdStageActor_SetNaniteTriangleThreshold, "SetNaniteTriangleThreshold" }, // 2132667967
		{ &Z_Construct_UFunction_AUsdStageActor_SetPurposesToLoad, "SetPurposesToLoad" }, // 1720908248
		{ &Z_Construct_UFunction_AUsdStageActor_SetRenderContext, "SetRenderContext" }, // 672600901
		{ &Z_Construct_UFunction_AUsdStageActor_SetRootLayer, "SetRootLayer" }, // 1562565044
		{ &Z_Construct_UFunction_AUsdStageActor_SetRootMotionHandling, "SetRootMotionHandling" }, // 741908471
		{ &Z_Construct_UFunction_AUsdStageActor_SetTime, "SetTime" }, // 3034291010
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUsdStageActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "USDStageActor.h" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUsdStageActor_Statics::NewProp_RootLayer_MetaData[] = {
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
		{ "RelativeToGameDir", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_RootLayer = { "RootLayer", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUsdStageActor, RootLayer), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_RootLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_RootLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUsdStageActor_Statics::NewProp_UsdAssetCache_MetaData[] = {
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_UsdAssetCache = { "UsdAssetCache", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUsdStageActor, UsdAssetCache), Z_Construct_UClass_UUsdAssetCache2_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_UsdAssetCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_UsdAssetCache_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_InitialLoadSet_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUsdStageActor_Statics::NewProp_InitialLoadSet_MetaData[] = {
		{ "Category", "USD" },
		{ "Comment", "// These properties are configs so that spawned actors read them from the CDO when spawned.\n// This allows the defaults for them to be configured on EditorPerProjectUserSettings.ini, and allows us to write\n// to that config from the USD Stage Editor, specifying our options before the editor is attached to any stage actor.\n" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
		{ "ToolTip", "These properties are configs so that spawned actors read them from the CDO when spawned.\nThis allows the defaults for them to be configured on EditorPerProjectUserSettings.ini, and allows us to write\nto that config from the USD Stage Editor, specifying our options before the editor is attached to any stage actor." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_InitialLoadSet = { "InitialLoadSet", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUsdStageActor, InitialLoadSet), Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet, METADATA_PARAMS(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_InitialLoadSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_InitialLoadSet_MetaData)) }; // 3459217511
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_InterpolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUsdStageActor_Statics::NewProp_InterpolationType_MetaData[] = {
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_InterpolationType = { "InterpolationType", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUsdStageActor, InterpolationType), Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType, METADATA_PARAMS(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_InterpolationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_InterpolationType_MetaData)) }; // 3559205169
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUsdStageActor_Statics::NewProp_KindsToCollapse_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/UnrealUSDWrapper.EUsdDefaultKind" },
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * Whether to try to combine individual assets and components of the same type on a kind-per-kind basis,\n\x09 * like multiple Mesh prims into a single Static Mesh\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
		{ "ToolTip", "Whether to try to combine individual assets and components of the same type on a kind-per-kind basis,\nlike multiple Mesh prims into a single Static Mesh" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_KindsToCollapse = { "KindsToCollapse", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUsdStageActor, KindsToCollapse), METADATA_PARAMS(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_KindsToCollapse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_KindsToCollapse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUsdStageActor_Statics::NewProp_bMergeIdenticalMaterialSlots_MetaData[] = {
		{ "Category", "USD" },
		{ "Comment", "/**\n\x09 * If enabled, when multiple mesh prims are collapsed into a single static mesh, identical material slots are merged into one slot.\n\x09 * Otherwise, materials slots are simply appended to the list.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
		{ "ToolTip", "If enabled, when multiple mesh prims are collapsed into a single static mesh, identical material slots are merged into one slot.\nOtherwise, materials slots are simply appended to the list." },
	};
#endif
	void Z_Construct_UClass_AUsdStageActor_Statics::NewProp_bMergeIdenticalMaterialSlots_SetBit(void* Obj)
	{
		((AUsdStageActor*)Obj)->bMergeIdenticalMaterialSlots = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_bMergeIdenticalMaterialSlots = { "bMergeIdenticalMaterialSlots", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUsdStageActor), &Z_Construct_UClass_AUsdStageActor_Statics::NewProp_bMergeIdenticalMaterialSlots_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_bMergeIdenticalMaterialSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_bMergeIdenticalMaterialSlots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUsdStageActor_Statics::NewProp_bCollapseTopLevelPointInstancers_MetaData[] = {
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	void Z_Construct_UClass_AUsdStageActor_Statics::NewProp_bCollapseTopLevelPointInstancers_SetBit(void* Obj)
	{
		((AUsdStageActor*)Obj)->bCollapseTopLevelPointInstancers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_bCollapseTopLevelPointInstancers = { "bCollapseTopLevelPointInstancers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUsdStageActor), &Z_Construct_UClass_AUsdStageActor_Statics::NewProp_bCollapseTopLevelPointInstancers_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_bCollapseTopLevelPointInstancers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_bCollapseTopLevelPointInstancers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUsdStageActor_Statics::NewProp_PurposesToLoad_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/UnrealUSDWrapper.EUsdPurpose" },
		{ "Category", "USD" },
		{ "Comment", "/* Only load prims with these specific purposes from the USD file */" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
		{ "ToolTip", "Only load prims with these specific purposes from the USD file" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_PurposesToLoad = { "PurposesToLoad", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUsdStageActor, PurposesToLoad), METADATA_PARAMS(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_PurposesToLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_PurposesToLoad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUsdStageActor_Statics::NewProp_NaniteTriangleThreshold_MetaData[] = {
		{ "Category", "USD" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Try enabling Nanite for static meshes that are generated with at least this many triangles */" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
		{ "NoSpinbox", "true" },
		{ "ToolTip", "Try enabling Nanite for static meshes that are generated with at least this many triangles" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_NaniteTriangleThreshold = { "NaniteTriangleThreshold", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUsdStageActor, NaniteTriangleThreshold), METADATA_PARAMS(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_NaniteTriangleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_NaniteTriangleThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUsdStageActor_Statics::NewProp_RenderContext_MetaData[] = {
		{ "Category", "USD" },
		{ "Comment", "/** Specifies which set of shaders to use when parsing USD materials, in addition to the universal render context. */" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
		{ "ToolTip", "Specifies which set of shaders to use when parsing USD materials, in addition to the universal render context." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_RenderContext = { "RenderContext", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUsdStageActor, RenderContext), METADATA_PARAMS(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_RenderContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_RenderContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUsdStageActor_Statics::NewProp_MaterialPurpose_MetaData[] = {
		{ "Category", "USD" },
		{ "Comment", "/** Specifies which material purbose to use when parsing USD material bindings, in addition to the \"allPurpose\" fallback. */" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
		{ "ToolTip", "Specifies which material purbose to use when parsing USD material bindings, in addition to the \"allPurpose\" fallback." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_MaterialPurpose = { "MaterialPurpose", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUsdStageActor, MaterialPurpose), METADATA_PARAMS(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_MaterialPurpose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_MaterialPurpose_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_RootMotionHandling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUsdStageActor_Statics::NewProp_RootMotionHandling_MetaData[] = {
		{ "Category", "USD" },
		{ "Comment", "// Describes what to add to the root bone animation within generated AnimSequences, if anything\n" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
		{ "ToolTip", "Describes what to add to the root bone animation within generated AnimSequences, if anything" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_RootMotionHandling = { "RootMotionHandling", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUsdStageActor, RootMotionHandling), Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling, METADATA_PARAMS(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_RootMotionHandling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_RootMotionHandling_MetaData)) }; // 2259965650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUsdStageActor_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UsdStageActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|StaticMesh" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUsdStageActor, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUsdStageActor_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "USD" },
		{ "Comment", "/* TimeCode to evaluate the USD stage at */" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
		{ "ToolTip", "TimeCode to evaluate the USD stage at" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUsdStageActor, Time), METADATA_PARAMS(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUsdStageActor_Statics::NewProp_LevelSequence_MetaData[] = {
		{ "Category", "USD" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0024080000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUsdStageActor, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_LevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_LevelSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUsdStageActor_Statics::NewProp_RootUsdTwin_MetaData[] = {
		{ "Comment", "// Note: This cannot be instanced: Read the comment in the constructor\n" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
		{ "ToolTip", "Note: This cannot be instanced: Read the comment in the constructor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_RootUsdTwin = { "RootUsdTwin", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUsdStageActor, RootUsdTwin), Z_Construct_UClass_UUsdPrimTwin_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_RootUsdTwin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_RootUsdTwin_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_PrimsToAnimate_ElementProp = { "PrimsToAnimate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUsdStageActor_Statics::NewProp_PrimsToAnimate_MetaData[] = {
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_PrimsToAnimate = { "PrimsToAnimate", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUsdStageActor, PrimsToAnimate), METADATA_PARAMS(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_PrimsToAnimate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_PrimsToAnimate_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_ObjectsToWatch_ValueProp = { "ObjectsToWatch", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_ObjectsToWatch_Key_KeyProp = { "ObjectsToWatch_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUsdStageActor_Statics::NewProp_ObjectsToWatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_ObjectsToWatch = { "ObjectsToWatch", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUsdStageActor, ObjectsToWatch), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_ObjectsToWatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_ObjectsToWatch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUsdStageActor_Statics::NewProp_AssetCache_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use the new AssetCache property instead, that uses UUsdAssetCache2 objects" },
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_AssetCache = { "AssetCache", nullptr, (EPropertyFlags)0x00240c0000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUsdStageActor, AssetCache), Z_Construct_UClass_UUsdAssetCache_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_AssetCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_AssetCache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUsdStageActor_Statics::NewProp_Transactor_MetaData[] = {
		{ "ModuleRelativePath", "Public/USDStageActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AUsdStageActor_Statics::NewProp_Transactor = { "Transactor", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUsdStageActor, Transactor), Z_Construct_UClass_UUsdTransactor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_Transactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUsdStageActor_Statics::NewProp_Transactor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUsdStageActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_RootLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_UsdAssetCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_InitialLoadSet_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_InitialLoadSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_InterpolationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_InterpolationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_KindsToCollapse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_bMergeIdenticalMaterialSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_bCollapseTopLevelPointInstancers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_PurposesToLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_NaniteTriangleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_RenderContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_MaterialPurpose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_RootMotionHandling_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_RootMotionHandling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_RootUsdTwin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_PrimsToAnimate_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_PrimsToAnimate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_ObjectsToWatch_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_ObjectsToWatch_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_ObjectsToWatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_AssetCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUsdStageActor_Statics::NewProp_Transactor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUsdStageActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUsdStageActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUsdStageActor_Statics::ClassParams = {
		&AUsdStageActor::StaticClass,
		"USDImporter",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUsdStageActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUsdStageActor_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUsdStageActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUsdStageActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUsdStageActor()
	{
		if (!Z_Registration_Info_UClass_AUsdStageActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUsdStageActor.OuterSingleton, Z_Construct_UClass_AUsdStageActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUsdStageActor.OuterSingleton;
	}
	template<> USDSTAGE_API UClass* StaticClass<AUsdStageActor>()
	{
		return AUsdStageActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUsdStageActor);
	AUsdStageActor::~AUsdStageActor() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AUsdStageActor)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUsdStageActor, AUsdStageActor::StaticClass, TEXT("AUsdStageActor"), &Z_Registration_Info_UClass_AUsdStageActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUsdStageActor), 2676055857U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_2451094042(TEXT("/Script/USDStage"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
