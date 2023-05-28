// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveFunctionCollapseSubsystem.h"
#include "WaveFunctionCollapseModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveFunctionCollapseSubsystem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WaveFunctionCollapse();
	WAVEFUNCTIONCOLLAPSE_API UClass* Z_Construct_UClass_UWaveFunctionCollapseModel_NoRegister();
	WAVEFUNCTIONCOLLAPSE_API UClass* Z_Construct_UClass_UWaveFunctionCollapseSubsystem();
	WAVEFUNCTIONCOLLAPSE_API UClass* Z_Construct_UClass_UWaveFunctionCollapseSubsystem_NoRegister();
	WAVEFUNCTIONCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveFunctionCollapseOption();
	WAVEFUNCTIONCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement();
	WAVEFUNCTIONCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveFunctionCollapseTile();
// End Cross Module References
	DEFINE_FUNCTION(UWaveFunctionCollapseSubsystem::execDeriveGridFromTransforms)
	{
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Transforms);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeriveGridFromTransforms(Z_Param_Out_Transforms);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseSubsystem::execDeriveGridFromTransformBounds)
	{
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Transforms);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeriveGridFromTransformBounds(Z_Param_Out_Transforms);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseSubsystem::execObservationPropagation)
	{
		P_GET_TARRAY_REF(FWaveFunctionCollapseTile,Z_Param_Out_Tiles);
		P_GET_TARRAY_REF(int32,Z_Param_Out_RemainingTiles);
		P_GET_TMAP_REF(int32,FWaveFunctionCollapseQueueElement,Z_Param_Out_ObservationQueue);
		P_GET_PROPERTY(FIntProperty,Z_Param_RandomSeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ObservationPropagation(Z_Param_Out_Tiles,Z_Param_Out_RemainingTiles,Z_Param_Out_ObservationQueue,Z_Param_RandomSeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseSubsystem::execPropagate)
	{
		P_GET_TARRAY_REF(FWaveFunctionCollapseTile,Z_Param_Out_Tiles);
		P_GET_TARRAY_REF(int32,Z_Param_Out_RemainingTiles);
		P_GET_TMAP_REF(int32,FWaveFunctionCollapseQueueElement,Z_Param_Out_ObservationQueue);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PropagationCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Propagate(Z_Param_Out_Tiles,Z_Param_Out_RemainingTiles,Z_Param_Out_ObservationQueue,Z_Param_Out_PropagationCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseSubsystem::execObserve)
	{
		P_GET_TARRAY_REF(FWaveFunctionCollapseTile,Z_Param_Out_Tiles);
		P_GET_TARRAY_REF(int32,Z_Param_Out_RemainingTiles);
		P_GET_TMAP_REF(int32,FWaveFunctionCollapseQueueElement,Z_Param_Out_ObservationQueue);
		P_GET_PROPERTY(FIntProperty,Z_Param_RandomSeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Observe(Z_Param_Out_Tiles,Z_Param_Out_RemainingTiles,Z_Param_Out_ObservationQueue,Z_Param_RandomSeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseSubsystem::execInitializeWFC)
	{
		P_GET_TARRAY_REF(FWaveFunctionCollapseTile,Z_Param_Out_Tiles);
		P_GET_TARRAY_REF(int32,Z_Param_Out_RemainingTiles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeWFC(Z_Param_Out_Tiles,Z_Param_Out_RemainingTiles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseSubsystem::execCollapse)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TryCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_RandomSeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->Collapse(Z_Param_TryCount,Z_Param_RandomSeed);
		P_NATIVE_END;
	}
	void UWaveFunctionCollapseSubsystem::StaticRegisterNativesUWaveFunctionCollapseSubsystem()
	{
		UClass* Class = UWaveFunctionCollapseSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Collapse", &UWaveFunctionCollapseSubsystem::execCollapse },
			{ "DeriveGridFromTransformBounds", &UWaveFunctionCollapseSubsystem::execDeriveGridFromTransformBounds },
			{ "DeriveGridFromTransforms", &UWaveFunctionCollapseSubsystem::execDeriveGridFromTransforms },
			{ "InitializeWFC", &UWaveFunctionCollapseSubsystem::execInitializeWFC },
			{ "ObservationPropagation", &UWaveFunctionCollapseSubsystem::execObservationPropagation },
			{ "Observe", &UWaveFunctionCollapseSubsystem::execObserve },
			{ "Propagate", &UWaveFunctionCollapseSubsystem::execPropagate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Collapse_Statics
	{
		struct WaveFunctionCollapseSubsystem_eventCollapse_Parms
		{
			int32 TryCount;
			int32 RandomSeed;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TryCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Collapse_Statics::NewProp_TryCount = { "TryCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseSubsystem_eventCollapse_Parms, TryCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Collapse_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseSubsystem_eventCollapse_Parms, RandomSeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Collapse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseSubsystem_eventCollapse_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Collapse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Collapse_Statics::NewProp_TryCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Collapse_Statics::NewProp_RandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Collapse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Collapse_Statics::Function_MetaDataParams[] = {
		{ "Category", "WFCFunctions" },
		{ "Comment", "/**\n\x09* Solve a grid using a WFC model.  If successful, spawn an actor.\n\x09* @param TryCount Amount of times to attempt a successful solve\n\x09* @param RandomSeed Seed for deterministic results.  When this value is 0 the seed will be generated. Seed value will be logged during the solve.\n\x09*/" },
		{ "CPP_Default_RandomSeed", "0" },
		{ "CPP_Default_TryCount", "1" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseSubsystem.h" },
		{ "ToolTip", "Solve a grid using a WFC model.  If successful, spawn an actor.\n@param TryCount Amount of times to attempt a successful solve\n@param RandomSeed Seed for deterministic results.  When this value is 0 the seed will be generated. Seed value will be logged during the solve." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Collapse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseSubsystem, nullptr, "Collapse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Collapse_Statics::WaveFunctionCollapseSubsystem_eventCollapse_Parms), Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Collapse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Collapse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Collapse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Collapse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Collapse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Collapse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransformBounds_Statics
	{
		struct WaveFunctionCollapseSubsystem_eventDeriveGridFromTransformBounds_Parms
		{
			TArray<FTransform> Transforms;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransformBounds_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransformBounds_Statics::NewProp_Transforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransformBounds_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseSubsystem_eventDeriveGridFromTransformBounds_Parms, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransformBounds_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransformBounds_Statics::NewProp_Transforms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransformBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransformBounds_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransformBounds_Statics::NewProp_Transforms,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransformBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "WFCFunctions" },
		{ "Comment", "/**\n\x09* Derive grid from the bounds of an array of transforms\n\x09* Assumptions:\n\x09*\x09-Transforms can only represent a single grid\n\x09*   -Sets empty starter option if there is a valid grid position with no transform\n\x09*   -Orientation is determined by the yaw of the first transform in the array\n\x09* @param Transforms Array of transforms (by ref)\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseSubsystem.h" },
		{ "ToolTip", "Derive grid from the bounds of an array of transforms\nAssumptions:\n      -Transforms can only represent a single grid\n  -Sets empty starter option if there is a valid grid position with no transform\n  -Orientation is determined by the yaw of the first transform in the array\n@param Transforms Array of transforms (by ref)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransformBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseSubsystem, nullptr, "DeriveGridFromTransformBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransformBounds_Statics::WaveFunctionCollapseSubsystem_eventDeriveGridFromTransformBounds_Parms), Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransformBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransformBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransformBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransformBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransformBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransformBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransforms_Statics
	{
		struct WaveFunctionCollapseSubsystem_eventDeriveGridFromTransforms_Parms
		{
			TArray<FTransform> Transforms;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransforms_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransforms_Statics::NewProp_Transforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransforms_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseSubsystem_eventDeriveGridFromTransforms_Parms, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransforms_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransforms_Statics::NewProp_Transforms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransforms_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransforms_Statics::NewProp_Transforms,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "WFCFunctions" },
		{ "Comment", "/**\n\x09* Derive grid from an array of transforms\n\x09* Assumptions:\n\x09*   -Every transform represents the center point of a tile position\n\x09*   -Sets empty starter option if there is a valid grid position with no transform\n\x09*   -Orientation is determined by the yaw of the first transform in the array\n\x09* @param Transforms Array of transforms (by ref)\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseSubsystem.h" },
		{ "ToolTip", "Derive grid from an array of transforms\nAssumptions:\n  -Every transform represents the center point of a tile position\n  -Sets empty starter option if there is a valid grid position with no transform\n  -Orientation is determined by the yaw of the first transform in the array\n@param Transforms Array of transforms (by ref)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseSubsystem, nullptr, "DeriveGridFromTransforms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransforms_Statics::WaveFunctionCollapseSubsystem_eventDeriveGridFromTransforms_Parms), Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_InitializeWFC_Statics
	{
		struct WaveFunctionCollapseSubsystem_eventInitializeWFC_Parms
		{
			TArray<FWaveFunctionCollapseTile> Tiles;
			TArray<int32> RemainingTiles;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tiles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tiles;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingTiles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemainingTiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_InitializeWFC_Statics::NewProp_Tiles_Inner = { "Tiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWaveFunctionCollapseTile, METADATA_PARAMS(nullptr, 0) }; // 609973873
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_InitializeWFC_Statics::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseSubsystem_eventInitializeWFC_Parms, Tiles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 609973873
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_InitializeWFC_Statics::NewProp_RemainingTiles_Inner = { "RemainingTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_InitializeWFC_Statics::NewProp_RemainingTiles = { "RemainingTiles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseSubsystem_eventInitializeWFC_Parms, RemainingTiles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_InitializeWFC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_InitializeWFC_Statics::NewProp_Tiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_InitializeWFC_Statics::NewProp_Tiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_InitializeWFC_Statics::NewProp_RemainingTiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_InitializeWFC_Statics::NewProp_RemainingTiles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_InitializeWFC_Statics::Function_MetaDataParams[] = {
		{ "Category", "WFCFunctions" },
		{ "Comment", "/**\n\x09* Initialize WFC process which sets up Tiles and RemainingTiles arrays\n\x09* Pre-populates Tiles with StarterOptions, BorderOptions and InitialTiles\n\x09* @param Tiles Array of tiles (by ref)\n\x09* @param RemainingTiles Array of remaining tile indices.  Semi-sorted: Min Entropy tiles at the front, the rest remains unsorted (by ref)\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseSubsystem.h" },
		{ "ToolTip", "Initialize WFC process which sets up Tiles and RemainingTiles arrays\nPre-populates Tiles with StarterOptions, BorderOptions and InitialTiles\n@param Tiles Array of tiles (by ref)\n@param RemainingTiles Array of remaining tile indices.  Semi-sorted: Min Entropy tiles at the front, the rest remains unsorted (by ref)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_InitializeWFC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseSubsystem, nullptr, "InitializeWFC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_InitializeWFC_Statics::WaveFunctionCollapseSubsystem_eventInitializeWFC_Parms), Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_InitializeWFC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_InitializeWFC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_InitializeWFC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_InitializeWFC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_InitializeWFC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_InitializeWFC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics
	{
		struct WaveFunctionCollapseSubsystem_eventObservationPropagation_Parms
		{
			TArray<FWaveFunctionCollapseTile> Tiles;
			TArray<int32> RemainingTiles;
			TMap<int32,FWaveFunctionCollapseQueueElement> ObservationQueue;
			int32 RandomSeed;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tiles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tiles;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingTiles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemainingTiles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObservationQueue_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ObservationQueue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ObservationQueue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::NewProp_Tiles_Inner = { "Tiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWaveFunctionCollapseTile, METADATA_PARAMS(nullptr, 0) }; // 609973873
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseSubsystem_eventObservationPropagation_Parms, Tiles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 609973873
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::NewProp_RemainingTiles_Inner = { "RemainingTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::NewProp_RemainingTiles = { "RemainingTiles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseSubsystem_eventObservationPropagation_Parms, RemainingTiles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::NewProp_ObservationQueue_ValueProp = { "ObservationQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement, METADATA_PARAMS(nullptr, 0) }; // 1751827437
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::NewProp_ObservationQueue_Key_KeyProp = { "ObservationQueue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::NewProp_ObservationQueue = { "ObservationQueue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseSubsystem_eventObservationPropagation_Parms, ObservationQueue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1751827437
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseSubsystem_eventObservationPropagation_Parms, RandomSeed), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WaveFunctionCollapseSubsystem_eventObservationPropagation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaveFunctionCollapseSubsystem_eventObservationPropagation_Parms), &Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::NewProp_Tiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::NewProp_Tiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::NewProp_RemainingTiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::NewProp_RemainingTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::NewProp_ObservationQueue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::NewProp_ObservationQueue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::NewProp_ObservationQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::NewProp_RandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::Function_MetaDataParams[] = {
		{ "Category", "WFCFunctions" },
		{ "Comment", "/**\n\x09* Recursive Observation and Propagation cycle\n\x09* @param Tiles Array of tiles (by ref)\n\x09* @param RemainingTiles Array of remaining tile indices (by ref)\n\x09* @param ObservationQueue Array to store tiles that need to be checked whether remaining options are affected (by ref)\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseSubsystem.h" },
		{ "ToolTip", "Recursive Observation and Propagation cycle\n@param Tiles Array of tiles (by ref)\n@param RemainingTiles Array of remaining tile indices (by ref)\n@param ObservationQueue Array to store tiles that need to be checked whether remaining options are affected (by ref)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseSubsystem, nullptr, "ObservationPropagation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::WaveFunctionCollapseSubsystem_eventObservationPropagation_Parms), Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics
	{
		struct WaveFunctionCollapseSubsystem_eventObserve_Parms
		{
			TArray<FWaveFunctionCollapseTile> Tiles;
			TArray<int32> RemainingTiles;
			TMap<int32,FWaveFunctionCollapseQueueElement> ObservationQueue;
			int32 RandomSeed;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tiles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tiles;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingTiles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemainingTiles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObservationQueue_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ObservationQueue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ObservationQueue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::NewProp_Tiles_Inner = { "Tiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWaveFunctionCollapseTile, METADATA_PARAMS(nullptr, 0) }; // 609973873
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseSubsystem_eventObserve_Parms, Tiles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 609973873
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::NewProp_RemainingTiles_Inner = { "RemainingTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::NewProp_RemainingTiles = { "RemainingTiles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseSubsystem_eventObserve_Parms, RemainingTiles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::NewProp_ObservationQueue_ValueProp = { "ObservationQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement, METADATA_PARAMS(nullptr, 0) }; // 1751827437
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::NewProp_ObservationQueue_Key_KeyProp = { "ObservationQueue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::NewProp_ObservationQueue = { "ObservationQueue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseSubsystem_eventObserve_Parms, ObservationQueue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1751827437
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseSubsystem_eventObserve_Parms, RandomSeed), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WaveFunctionCollapseSubsystem_eventObserve_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaveFunctionCollapseSubsystem_eventObserve_Parms), &Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::NewProp_Tiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::NewProp_Tiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::NewProp_RemainingTiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::NewProp_RemainingTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::NewProp_ObservationQueue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::NewProp_ObservationQueue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::NewProp_ObservationQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::NewProp_RandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::Function_MetaDataParams[] = {
		{ "Category", "WFCFunctions" },
		{ "Comment", "/**\n\x09* Observation phase: \n\x09* This process randomly selects one tile from minimum entropy tiles\n\x09* then randomly selects a valid option for that tile\n\x09* @param Tiles Array of tiles (by ref)\n\x09* @param RemainingTiles Array of remaining tile indices.  Semi-sorted: Min Entropy tiles at the front, the rest remains unsorted (by ref)\n\x09* @param ObservationQueue Array to store tiles that need to be checked whether remaining options are affected during propagation phase (by ref)\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseSubsystem.h" },
		{ "ToolTip", "Observation phase:\nThis process randomly selects one tile from minimum entropy tiles\nthen randomly selects a valid option for that tile\n@param Tiles Array of tiles (by ref)\n@param RemainingTiles Array of remaining tile indices.  Semi-sorted: Min Entropy tiles at the front, the rest remains unsorted (by ref)\n@param ObservationQueue Array to store tiles that need to be checked whether remaining options are affected during propagation phase (by ref)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseSubsystem, nullptr, "Observe", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::WaveFunctionCollapseSubsystem_eventObserve_Parms), Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics
	{
		struct WaveFunctionCollapseSubsystem_eventPropagate_Parms
		{
			TArray<FWaveFunctionCollapseTile> Tiles;
			TArray<int32> RemainingTiles;
			TMap<int32,FWaveFunctionCollapseQueueElement> ObservationQueue;
			int32 PropagationCount;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tiles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tiles;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingTiles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemainingTiles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObservationQueue_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ObservationQueue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ObservationQueue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropagationCount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::NewProp_Tiles_Inner = { "Tiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWaveFunctionCollapseTile, METADATA_PARAMS(nullptr, 0) }; // 609973873
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseSubsystem_eventPropagate_Parms, Tiles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 609973873
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::NewProp_RemainingTiles_Inner = { "RemainingTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::NewProp_RemainingTiles = { "RemainingTiles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseSubsystem_eventPropagate_Parms, RemainingTiles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::NewProp_ObservationQueue_ValueProp = { "ObservationQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement, METADATA_PARAMS(nullptr, 0) }; // 1751827437
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::NewProp_ObservationQueue_Key_KeyProp = { "ObservationQueue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::NewProp_ObservationQueue = { "ObservationQueue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseSubsystem_eventPropagate_Parms, ObservationQueue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1751827437
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::NewProp_PropagationCount = { "PropagationCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseSubsystem_eventPropagate_Parms, PropagationCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WaveFunctionCollapseSubsystem_eventPropagate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaveFunctionCollapseSubsystem_eventPropagate_Parms), &Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::NewProp_Tiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::NewProp_Tiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::NewProp_RemainingTiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::NewProp_RemainingTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::NewProp_ObservationQueue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::NewProp_ObservationQueue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::NewProp_ObservationQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::NewProp_PropagationCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::Function_MetaDataParams[] = {
		{ "Category", "WFCFunctions" },
		{ "Comment", "/**\n\x09* Propagation phase: \n\x09* This process checks if the selection made during the observation is valid by checking constraint validity with neighboring tiles. \n\x09* Neighboring tiles may reduce their remaining options to include only valid options.\n\x09* If the remaining options of a tile were modified, the neighboring tiles of the modified tile will be added to a queue.\n\x09* During this process, if any contradiction (a tile with zero remaining options) is encountered, the current solve will fail.\n\x09* @param Tiles Array of tiles (by ref)\n\x09* @param RemainingTiles Array of remaining tile indices.  Semi-sorted: Min Entropy tiles at the front, the rest remains unsorted (by ref)\n\x09* @param ObservationQueue Array to store tiles that need to be checked whether remaining options are affected (by ref)\n\x09* @param PropagationCount Counter for propagation passes\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseSubsystem.h" },
		{ "ToolTip", "Propagation phase:\nThis process checks if the selection made during the observation is valid by checking constraint validity with neighboring tiles.\nNeighboring tiles may reduce their remaining options to include only valid options.\nIf the remaining options of a tile were modified, the neighboring tiles of the modified tile will be added to a queue.\nDuring this process, if any contradiction (a tile with zero remaining options) is encountered, the current solve will fail.\n@param Tiles Array of tiles (by ref)\n@param RemainingTiles Array of remaining tile indices.  Semi-sorted: Min Entropy tiles at the front, the rest remains unsorted (by ref)\n@param ObservationQueue Array to store tiles that need to be checked whether remaining options are affected (by ref)\n@param PropagationCount Counter for propagation passes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseSubsystem, nullptr, "Propagate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::WaveFunctionCollapseSubsystem_eventPropagate_Parms), Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveFunctionCollapseSubsystem);
	UClass* Z_Construct_UClass_UWaveFunctionCollapseSubsystem_NoRegister()
	{
		return UWaveFunctionCollapseSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WFCModel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WFCModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseEmptyBorder_MetaData[];
#endif
		static void NewProp_bUseEmptyBorder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEmptyBorder;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StarterOptions_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StarterOptions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarterOptions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StarterOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_WaveFunctionCollapse,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Collapse, "Collapse" }, // 257266509
		{ &Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransformBounds, "DeriveGridFromTransformBounds" }, // 1237094939
		{ &Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_DeriveGridFromTransforms, "DeriveGridFromTransforms" }, // 2079874713
		{ &Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_InitializeWFC, "InitializeWFC" }, // 1630103894
		{ &Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_ObservationPropagation, "ObservationPropagation" }, // 3034220290
		{ &Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Observe, "Observe" }, // 1546865042
		{ &Z_Construct_UFunction_UWaveFunctionCollapseSubsystem_Propagate, "Propagate" }, // 1971818126
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WaveFunctionCollapseSubsystem.h" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_WFCModel_MetaData[] = {
		{ "Category", "WFCSettings" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_WFCModel = { "WFCModel", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveFunctionCollapseSubsystem, WFCModel), Z_Construct_UClass_UWaveFunctionCollapseModel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_WFCModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_WFCModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "WFCSettings" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveFunctionCollapseSubsystem, Resolution), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_Resolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_OriginLocation_MetaData[] = {
		{ "Category", "WFCSettings" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_OriginLocation = { "OriginLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveFunctionCollapseSubsystem, OriginLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_OriginLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_OriginLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "WFCSettings" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveFunctionCollapseSubsystem, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_bUseEmptyBorder_MetaData[] = {
		{ "Category", "WFCSettings" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseSubsystem.h" },
	};
#endif
	void Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_bUseEmptyBorder_SetBit(void* Obj)
	{
		((UWaveFunctionCollapseSubsystem*)Obj)->bUseEmptyBorder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_bUseEmptyBorder = { "bUseEmptyBorder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaveFunctionCollapseSubsystem), &Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_bUseEmptyBorder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_bUseEmptyBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_bUseEmptyBorder_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_StarterOptions_ValueProp = { "StarterOptions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWaveFunctionCollapseOption, METADATA_PARAMS(nullptr, 0) }; // 919664607
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_StarterOptions_Key_KeyProp = { "StarterOptions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_StarterOptions_MetaData[] = {
		{ "Category", "WFCSettings" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_StarterOptions = { "StarterOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveFunctionCollapseSubsystem, StarterOptions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_StarterOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_StarterOptions_MetaData)) }; // 919664607
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_WFCModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_OriginLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_bUseEmptyBorder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_StarterOptions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_StarterOptions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::NewProp_StarterOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveFunctionCollapseSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::ClassParams = {
		&UWaveFunctionCollapseSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaveFunctionCollapseSubsystem()
	{
		if (!Z_Registration_Info_UClass_UWaveFunctionCollapseSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveFunctionCollapseSubsystem.OuterSingleton, Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaveFunctionCollapseSubsystem.OuterSingleton;
	}
	template<> WAVEFUNCTIONCOLLAPSE_API UClass* StaticClass<UWaveFunctionCollapseSubsystem>()
	{
		return UWaveFunctionCollapseSubsystem::StaticClass();
	}
	UWaveFunctionCollapseSubsystem::UWaveFunctionCollapseSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveFunctionCollapseSubsystem);
	UWaveFunctionCollapseSubsystem::~UWaveFunctionCollapseSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaveFunctionCollapseSubsystem, UWaveFunctionCollapseSubsystem::StaticClass, TEXT("UWaveFunctionCollapseSubsystem"), &Z_Registration_Info_UClass_UWaveFunctionCollapseSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveFunctionCollapseSubsystem), 4022267737U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_1792823272(TEXT("/Script/WaveFunctionCollapse"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
