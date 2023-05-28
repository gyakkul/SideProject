// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLDeformerMorphModel.h"
#include "MLDeformerMorphModelQualityLevel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLDeformerMorphModel() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerGeomCacheModel();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerMorphModel();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerMorphModel_NoRegister();
	MLDEFORMERFRAMEWORK_API UEnum* Z_Construct_UEnum_MLDeformerFramework_EMLDeformerMaskChannel();
	MLDEFORMERFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FMLDeformerMorphModelQualityLevel();
	UPackage* Z_Construct_UPackage__Script_MLDeformerFramework();
// End Cross Module References
	DEFINE_FUNCTION(UMLDeformerMorphModel::execSetMorphTargetsMaxWeights)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_MaxWeights);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMorphTargetsMaxWeights(Z_Param_Out_MaxWeights);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMLDeformerMorphModel::execSetMorphTargetsErrorOrder)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_MorphTargetOrder);
		P_GET_TARRAY_REF(float,Z_Param_Out_ErrorValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMorphTargetsErrorOrder(Z_Param_Out_MorphTargetOrder,Z_Param_Out_ErrorValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMLDeformerMorphModel::execSetMorphTargetDeltas)
	{
		P_GET_TARRAY_REF(FVector3f,Z_Param_Out_Deltas);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMorphTargetDeltas(Z_Param_Out_Deltas);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMLDeformerMorphModel::execSetMorphTargetDeltaFloats)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_Deltas);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMorphTargetDeltaFloats(Z_Param_Out_Deltas);
		P_NATIVE_END;
	}
	void UMLDeformerMorphModel::StaticRegisterNativesUMLDeformerMorphModel()
	{
		UClass* Class = UMLDeformerMorphModel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMorphTargetDeltaFloats", &UMLDeformerMorphModel::execSetMorphTargetDeltaFloats },
			{ "SetMorphTargetDeltas", &UMLDeformerMorphModel::execSetMorphTargetDeltas },
			{ "SetMorphTargetsErrorOrder", &UMLDeformerMorphModel::execSetMorphTargetsErrorOrder },
			{ "SetMorphTargetsMaxWeights", &UMLDeformerMorphModel::execSetMorphTargetsMaxWeights },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltaFloats_Statics
	{
		struct MLDeformerMorphModel_eventSetMorphTargetDeltaFloats_Parms
		{
			TArray<float> Deltas;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Deltas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Deltas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Deltas;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltaFloats_Statics::NewProp_Deltas_Inner = { "Deltas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltaFloats_Statics::NewProp_Deltas_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltaFloats_Statics::NewProp_Deltas = { "Deltas", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLDeformerMorphModel_eventSetMorphTargetDeltaFloats_Parms, Deltas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltaFloats_Statics::NewProp_Deltas_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltaFloats_Statics::NewProp_Deltas_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltaFloats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltaFloats_Statics::NewProp_Deltas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltaFloats_Statics::NewProp_Deltas,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltaFloats_Statics::Function_MetaDataParams[] = {
		{ "Category", "MLDeformerMorphModel" },
		{ "Comment", "/**\n\x09 * Set the per vertex deltas, as a set of floats. Each vertex delta must have 3 floats.\n\x09 * These deltas are used to generate compressed morph targets internally. You typically call this method from inside\n\x09 * the python training script once your morph target deltas have been generated there.\n\x09 * Concatenate all deltas into one buffer, so like this [morphdeltas_target0, morphdeltas_target1, ..., morphdeltas_targetN].\n\x09 * The vertex ordering should be: [(x, y, z), (x, y, z), (x, y, z)].\n\x09 * This is the same as SetMorphTargetDeltas, except that this takes an array of floats instead of vectors.\n\x09 * @param Deltas The array of floats that contains the deltas. The number of items in the array must be equal to (NumMorphs * NumBaseMeshVerts * 3).\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModel.h" },
		{ "ToolTip", "Set the per vertex deltas, as a set of floats. Each vertex delta must have 3 floats.\nThese deltas are used to generate compressed morph targets internally. You typically call this method from inside\nthe python training script once your morph target deltas have been generated there.\nConcatenate all deltas into one buffer, so like this [morphdeltas_target0, morphdeltas_target1, ..., morphdeltas_targetN].\nThe vertex ordering should be: [(x, y, z), (x, y, z), (x, y, z)].\nThis is the same as SetMorphTargetDeltas, except that this takes an array of floats instead of vectors.\n@param Deltas The array of floats that contains the deltas. The number of items in the array must be equal to (NumMorphs * NumBaseMeshVerts * 3)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltaFloats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLDeformerMorphModel, nullptr, "SetMorphTargetDeltaFloats", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltaFloats_Statics::MLDeformerMorphModel_eventSetMorphTargetDeltaFloats_Parms), Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltaFloats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltaFloats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltaFloats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltaFloats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltaFloats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltaFloats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltas_Statics
	{
		struct MLDeformerMorphModel_eventSetMorphTargetDeltas_Parms
		{
			TArray<FVector3f> Deltas;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Deltas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Deltas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Deltas;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltas_Statics::NewProp_Deltas_Inner = { "Deltas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltas_Statics::NewProp_Deltas_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltas_Statics::NewProp_Deltas = { "Deltas", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLDeformerMorphModel_eventSetMorphTargetDeltas_Parms, Deltas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltas_Statics::NewProp_Deltas_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltas_Statics::NewProp_Deltas_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltas_Statics::NewProp_Deltas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltas_Statics::NewProp_Deltas,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltas_Statics::Function_MetaDataParams[] = {
		{ "Category", "MLDeformerMorphModel" },
		{ "Comment", "/**\n\x09 * Set the morph target model deltas as an array of 3D vectors.\n\x09 * These deltas are used to generate compressed morph targets internally. You typically call this method from inside\n\x09 * the python training script once your morph target deltas have been generated there.\n\x09 * Concatenate all deltas into one buffer, so like this [morphdeltas_target0, morphdeltas_target1, ..., morphdeltas_targetN].\n\x09 * This is the same as SetMorphTargetDeltaFloats, except that it takes vectors instead of floats.\n\x09 * @param Deltas The array of 3D vectors that contains the vertex deltas. The number of items in the array must be equal to (NumMorphs * NumBaseMeshVerts).\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModel.h" },
		{ "ToolTip", "Set the morph target model deltas as an array of 3D vectors.\nThese deltas are used to generate compressed morph targets internally. You typically call this method from inside\nthe python training script once your morph target deltas have been generated there.\nConcatenate all deltas into one buffer, so like this [morphdeltas_target0, morphdeltas_target1, ..., morphdeltas_targetN].\nThis is the same as SetMorphTargetDeltaFloats, except that it takes vectors instead of floats.\n@param Deltas The array of 3D vectors that contains the vertex deltas. The number of items in the array must be equal to (NumMorphs * NumBaseMeshVerts)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLDeformerMorphModel, nullptr, "SetMorphTargetDeltas", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltas_Statics::MLDeformerMorphModel_eventSetMorphTargetDeltas_Parms), Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics
	{
		struct MLDeformerMorphModel_eventSetMorphTargetsErrorOrder_Parms
		{
			TArray<int32> MorphTargetOrder;
			TArray<float> ErrorValues;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MorphTargetOrder_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetOrder_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MorphTargetOrder;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ErrorValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ErrorValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::NewProp_MorphTargetOrder_Inner = { "MorphTargetOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::NewProp_MorphTargetOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::NewProp_MorphTargetOrder = { "MorphTargetOrder", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLDeformerMorphModel_eventSetMorphTargetsErrorOrder_Parms, MorphTargetOrder), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::NewProp_MorphTargetOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::NewProp_MorphTargetOrder_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::NewProp_ErrorValues_Inner = { "ErrorValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::NewProp_ErrorValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::NewProp_ErrorValues = { "ErrorValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLDeformerMorphModel_eventSetMorphTargetsErrorOrder_Parms, ErrorValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::NewProp_ErrorValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::NewProp_ErrorValues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::NewProp_MorphTargetOrder_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::NewProp_MorphTargetOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::NewProp_ErrorValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::NewProp_ErrorValues,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "MLDeformerMorphModel" },
		{ "Comment", "/**\n\x09 * Set the order of importance during LOD, for the morph targets.\n\x09 * Basically this specifies the sorted order of the morph targets, based on the error they introduce when disabling them.\n\x09 * @param MorphTargetOrder The array of morph target indices, starting with the most important morph target, and ending with the least important morph target's index.\n\x09 * @param ErrorValues The error value for each morph target (not sorted), so index 0 contains the error value of the first morph target, which isn't necesarrily the one with highest error.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModel.h" },
		{ "ToolTip", "Set the order of importance during LOD, for the morph targets.\nBasically this specifies the sorted order of the morph targets, based on the error they introduce when disabling them.\n@param MorphTargetOrder The array of morph target indices, starting with the most important morph target, and ending with the least important morph target's index.\n@param ErrorValues The error value for each morph target (not sorted), so index 0 contains the error value of the first morph target, which isn't necesarrily the one with highest error." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLDeformerMorphModel, nullptr, "SetMorphTargetsErrorOrder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::MLDeformerMorphModel_eventSetMorphTargetsErrorOrder_Parms), Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsMaxWeights_Statics
	{
		struct MLDeformerMorphModel_eventSetMorphTargetsMaxWeights_Parms
		{
			TArray<float> MaxWeights;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaxWeights;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsMaxWeights_Statics::NewProp_MaxWeights_Inner = { "MaxWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsMaxWeights_Statics::NewProp_MaxWeights_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsMaxWeights_Statics::NewProp_MaxWeights = { "MaxWeights", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLDeformerMorphModel_eventSetMorphTargetsMaxWeights_Parms, MaxWeights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsMaxWeights_Statics::NewProp_MaxWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsMaxWeights_Statics::NewProp_MaxWeights_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsMaxWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsMaxWeights_Statics::NewProp_MaxWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsMaxWeights_Statics::NewProp_MaxWeights,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsMaxWeights_Statics::Function_MetaDataParams[] = {
		{ "Category", "MLDeformerMorphModel" },
		{ "Comment", "/**\n\x09 * Set the maximum weights for each morph target when we pass the training inputs into the trained neural network.\n\x09 * After training we run the inputs through the trained network, and get the weights for each morph target.\n\x09 * The array passed to this function must be the maximum of the absolute weight value over all training samples for each specific morph.\n\x09 * We use this to scale the morph target deltas to get an estimate of the maximum length they will ever have, which we can in turn use\n\x09 * to estimate how important a given morph target is.\n\x09 * Keep in mind that these are the maximum of the absolute weights. As weights can be negative, we first take the absolute value of them.\n\x09 * Training python scripts mostly will call this function to set the values.\n\x09 * @param MaxWeights The maximum of the absolute weight values.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModel.h" },
		{ "ToolTip", "Set the maximum weights for each morph target when we pass the training inputs into the trained neural network.\nAfter training we run the inputs through the trained network, and get the weights for each morph target.\nThe array passed to this function must be the maximum of the absolute weight value over all training samples for each specific morph.\nWe use this to scale the morph target deltas to get an estimate of the maximum length they will ever have, which we can in turn use\nto estimate how important a given morph target is.\nKeep in mind that these are the maximum of the absolute weights. As weights can be negative, we first take the absolute value of them.\nTraining python scripts mostly will call this function to set the values.\n@param MaxWeights The maximum of the absolute weight values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsMaxWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLDeformerMorphModel, nullptr, "SetMorphTargetsMaxWeights", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsMaxWeights_Statics::MLDeformerMorphModel_eventSetMorphTargetsMaxWeights_Parms), Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsMaxWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsMaxWeights_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsMaxWeights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsMaxWeights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsMaxWeights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsMaxWeights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLDeformerMorphModel);
	UClass* Z_Construct_UClass_UMLDeformerMorphModel_NoRegister()
	{
		return UMLDeformerMorphModel::StaticClass();
	}
	struct Z_Construct_UClass_UMLDeformerMorphModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MorphTargetDeltas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetDeltas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MorphTargetDeltas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumMorphTargets_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumMorphTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressedMorphDataSizeInBytes_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_CompressedMorphDataSizeInBytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UncompressedMorphDataSizeInBytes_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_UncompressedMorphDataSizeInBytes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MorphTargetErrorOrder_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetErrorOrder_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MorphTargetErrorOrder;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MorphTargetErrors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetErrors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MorphTargetErrors;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMorphWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMorphWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaxMorphWeights;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QualityLevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QualityLevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QualityLevels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeNormals_MetaData[];
#endif
		static void NewProp_bIncludeNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphDeltaZeroThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MorphDeltaZeroThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphCompressionLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MorphCompressionLevel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaskChannel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskChannel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaskChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertMaskChannel_MetaData[];
#endif
		static void NewProp_bInvertMaskChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertMaskChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLDeformerMorphModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerGeomCacheModel,
		(UObject* (*)())Z_Construct_UPackage__Script_MLDeformerFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMLDeformerMorphModel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltaFloats, "SetMorphTargetDeltaFloats" }, // 4105602556
		{ &Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetDeltas, "SetMorphTargetDeltas" }, // 472398759
		{ &Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsErrorOrder, "SetMorphTargetsErrorOrder" }, // 4077101141
		{ &Z_Construct_UFunction_UMLDeformerMorphModel_SetMorphTargetsMaxWeights, "SetMorphTargetsMaxWeights" }, // 162408304
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerMorphModel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MLDeformerMorphModel.h" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphTargetDeltas_Inner = { "MorphTargetDeltas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphTargetDeltas_MetaData[] = {
		{ "Comment", "/**\n\x09 * The entire set of uncompressed morph target deltas, 3 per vertex, for each morph target, as one flattened buffer.\n\x09 * So the size of this buffer is: (NumVertsPerMorphTarget * 3 * NumMorphTargets).\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModel.h" },
		{ "ToolTip", "The entire set of uncompressed morph target deltas, 3 per vertex, for each morph target, as one flattened buffer.\nSo the size of this buffer is: (NumVertsPerMorphTarget * 3 * NumMorphTargets)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphTargetDeltas = { "MorphTargetDeltas", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerMorphModel, MorphTargetDeltas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphTargetDeltas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphTargetDeltas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_NumMorphTargets_MetaData[] = {
		{ "Comment", "/** The number of morph targets. */" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModel.h" },
		{ "ToolTip", "The number of morph targets." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_NumMorphTargets = { "NumMorphTargets", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerMorphModel, NumMorphTargets), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_NumMorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_NumMorphTargets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_CompressedMorphDataSizeInBytes_MetaData[] = {
		{ "Comment", "/** The compressed memory usage of the morph targets. This is approximately what this MLD asset will use in your packaged project. */" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModel.h" },
		{ "ToolTip", "The compressed memory usage of the morph targets. This is approximately what this MLD asset will use in your packaged project." },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_CompressedMorphDataSizeInBytes = { "CompressedMorphDataSizeInBytes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerMorphModel, CompressedMorphDataSizeInBytes), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_CompressedMorphDataSizeInBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_CompressedMorphDataSizeInBytes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_UncompressedMorphDataSizeInBytes_MetaData[] = {
		{ "Comment", "/** The uncompressed memory usage of the morph targets. Please note that your packaged project will use the compressed amount of memory, and not the uncompresed amount of memory. */" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModel.h" },
		{ "ToolTip", "The uncompressed memory usage of the morph targets. Please note that your packaged project will use the compressed amount of memory, and not the uncompresed amount of memory." },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_UncompressedMorphDataSizeInBytes = { "UncompressedMorphDataSizeInBytes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerMorphModel, UncompressedMorphDataSizeInBytes), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_UncompressedMorphDataSizeInBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_UncompressedMorphDataSizeInBytes_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphTargetErrorOrder_Inner = { "MorphTargetErrorOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphTargetErrorOrder_MetaData[] = {
		{ "Comment", "/** \n\x09 * An array of integers where the first element is the most important morph target and the last element is the least important one.\n\x09 * The number of elements in the array is equal to the total number of morph targets.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModel.h" },
		{ "ToolTip", "An array of integers where the first element is the most important morph target and the last element is the least important one.\nThe number of elements in the array is equal to the total number of morph targets." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphTargetErrorOrder = { "MorphTargetErrorOrder", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerMorphModel, MorphTargetErrorOrder), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphTargetErrorOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphTargetErrorOrder_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphTargetErrors_Inner = { "MorphTargetErrors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphTargetErrors_MetaData[] = {
		{ "Comment", "/** An error value, for each morph target. */" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModel.h" },
		{ "ToolTip", "An error value, for each morph target." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphTargetErrors = { "MorphTargetErrors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerMorphModel, MorphTargetErrors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphTargetErrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphTargetErrors_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MaxMorphWeights_Inner = { "MaxMorphWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MaxMorphWeights_MetaData[] = {
		{ "Comment", "/** The maximum absolute weight values of the morph targets, during training. One value for each morph target. */" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModel.h" },
		{ "ToolTip", "The maximum absolute weight values of the morph targets, during training. One value for each morph target." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MaxMorphWeights = { "MaxMorphWeights", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerMorphModel, MaxMorphWeights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MaxMorphWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MaxMorphWeights_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_QualityLevels_Inner = { "QualityLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMLDeformerMorphModelQualityLevel, METADATA_PARAMS(nullptr, 0) }; // 862868317
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_QualityLevels_MetaData[] = {
		{ "Category", "Deformer Quality" },
		{ "ClampMin", "1" },
		{ "Comment", "/** \n\x09 * The list of quality levels, where the first item represents the highest quality and the last element the lowest quality level.\n\x09 * The number in each quality level represents the number of active morph targets for that quality level.\n\x09 * These numbers will be clamped internally to be within valid ranges in case they go beyond the amount of morphs that exist.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModel.h" },
		{ "ToolTip", "The list of quality levels, where the first item represents the highest quality and the last element the lowest quality level.\nThe number in each quality level represents the number of active morph targets for that quality level.\nThese numbers will be clamped internally to be within valid ranges in case they go beyond the amount of morphs that exist." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_QualityLevels = { "QualityLevels", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerMorphModel, QualityLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_QualityLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_QualityLevels_MetaData)) }; // 862868317
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_bIncludeNormals_MetaData[] = {
		{ "Category", "Morph Targets" },
		{ "Comment", "/**\n\x09 * Include vertex normals in the morph targets?\n\x09 * The advantage of this can be that it is higher performance than recomputing the normals.\n\x09 * The disadvantage is it can result in lower quality and uses more memory for the stored morph targets.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModel.h" },
		{ "ToolTip", "Include vertex normals in the morph targets?\nThe advantage of this can be that it is higher performance than recomputing the normals.\nThe disadvantage is it can result in lower quality and uses more memory for the stored morph targets." },
	};
#endif
	void Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_bIncludeNormals_SetBit(void* Obj)
	{
		((UMLDeformerMorphModel*)Obj)->bIncludeNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_bIncludeNormals = { "bIncludeNormals", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMLDeformerMorphModel), &Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_bIncludeNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_bIncludeNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_bIncludeNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphDeltaZeroThreshold_MetaData[] = {
		{ "Category", "Morph Targets" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Morph target delta values that are smaller than or equal to this threshold will be zeroed out.\n\x09 * This essentially removes small deltas from morph targets, which will lower the memory usage at runtime, however when set too high it can also introduce visual artifacts.\n\x09 * A value of 0 will result in the highest quality morph targets, at the cost of higher runtime memory usage.\n\x09 */" },
		{ "DisplayName", "Delta Zero Threshold" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModel.h" },
		{ "ToolTip", "Morph target delta values that are smaller than or equal to this threshold will be zeroed out.\nThis essentially removes small deltas from morph targets, which will lower the memory usage at runtime, however when set too high it can also introduce visual artifacts.\nA value of 0 will result in the highest quality morph targets, at the cost of higher runtime memory usage." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphDeltaZeroThreshold = { "MorphDeltaZeroThreshold", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerMorphModel, MorphDeltaZeroThreshold), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphDeltaZeroThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphDeltaZeroThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphCompressionLevel_MetaData[] = {
		{ "Category", "Morph Targets" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** \n\x09 * The morph target compression level. Higher values result in larger compression, but could result in visual artifacts.\n\x09 * Most of the times this is a value between 20 and 200.\n\x09 */" },
		{ "DisplayName", "Compression Level" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModel.h" },
		{ "ToolTip", "The morph target compression level. Higher values result in larger compression, but could result in visual artifacts.\nMost of the times this is a value between 20 and 200." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphCompressionLevel = { "MorphCompressionLevel", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerMorphModel, MorphCompressionLevel), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphCompressionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphCompressionLevel_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MaskChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MaskChannel_MetaData[] = {
		{ "Category", "Morph Targets" },
		{ "Comment", "/**\n\x09 * The channel data that represents the delta mask multipliers.\n\x09 * You can use this feather out influence of the ML Deformer in specific areas, such as neck line seams, where the head mesh connects with the body.\n\x09 * The painted vertex color values will be like a weight multiplier on the ML deformer deltas applied to that vertex. You can invert the mask as well.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModel.h" },
		{ "ToolTip", "The channel data that represents the delta mask multipliers.\nYou can use this feather out influence of the ML Deformer in specific areas, such as neck line seams, where the head mesh connects with the body.\nThe painted vertex color values will be like a weight multiplier on the ML deformer deltas applied to that vertex. You can invert the mask as well." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MaskChannel = { "MaskChannel", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerMorphModel, MaskChannel), Z_Construct_UEnum_MLDeformerFramework_EMLDeformerMaskChannel, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MaskChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MaskChannel_MetaData)) }; // 1246414552
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_bInvertMaskChannel_MetaData[] = {
		{ "Category", "Morph Targets" },
		{ "Comment", "/** \n\x09 * Enable this if you want to invert the mask channel values. For example if you painted the neck seam vertices in red, and you wish the vertices that got painted to NOT move, you have to invert the mask.\n\x09 * On default you paint areas where the deformer should be active. If you enable the invert option, you paint areas where the deformer will not be active.\n\x09 */" },
		{ "EditCondition", "MaskChannel != EMLDeformerMaskChannel::Disabled" },
		{ "ModuleRelativePath", "Public/MLDeformerMorphModel.h" },
		{ "ToolTip", "Enable this if you want to invert the mask channel values. For example if you painted the neck seam vertices in red, and you wish the vertices that got painted to NOT move, you have to invert the mask.\nOn default you paint areas where the deformer should be active. If you enable the invert option, you paint areas where the deformer will not be active." },
	};
#endif
	void Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_bInvertMaskChannel_SetBit(void* Obj)
	{
		((UMLDeformerMorphModel*)Obj)->bInvertMaskChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_bInvertMaskChannel = { "bInvertMaskChannel", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMLDeformerMorphModel), &Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_bInvertMaskChannel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_bInvertMaskChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_bInvertMaskChannel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLDeformerMorphModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphTargetDeltas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphTargetDeltas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_NumMorphTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_CompressedMorphDataSizeInBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_UncompressedMorphDataSizeInBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphTargetErrorOrder_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphTargetErrorOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphTargetErrors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphTargetErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MaxMorphWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MaxMorphWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_QualityLevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_QualityLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_bIncludeNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphDeltaZeroThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MorphCompressionLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MaskChannel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_MaskChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerMorphModel_Statics::NewProp_bInvertMaskChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLDeformerMorphModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLDeformerMorphModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLDeformerMorphModel_Statics::ClassParams = {
		&UMLDeformerMorphModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMLDeformerMorphModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLDeformerMorphModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerMorphModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLDeformerMorphModel()
	{
		if (!Z_Registration_Info_UClass_UMLDeformerMorphModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLDeformerMorphModel.OuterSingleton, Z_Construct_UClass_UMLDeformerMorphModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLDeformerMorphModel.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORK_API UClass* StaticClass<UMLDeformerMorphModel>()
	{
		return UMLDeformerMorphModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLDeformerMorphModel);
	UMLDeformerMorphModel::~UMLDeformerMorphModel() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMLDeformerMorphModel)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLDeformerMorphModel, UMLDeformerMorphModel::StaticClass, TEXT("UMLDeformerMorphModel"), &Z_Registration_Info_UClass_UMLDeformerMorphModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLDeformerMorphModel), 83349479U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_2025927965(TEXT("/Script/MLDeformerFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerMorphModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
