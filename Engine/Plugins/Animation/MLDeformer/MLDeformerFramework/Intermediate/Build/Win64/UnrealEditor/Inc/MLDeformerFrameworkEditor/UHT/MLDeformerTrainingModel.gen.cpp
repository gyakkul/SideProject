// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLDeformerTrainingModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLDeformerTrainingModel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerModel_NoRegister();
	MLDEFORMERFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UMLDeformerTrainingModel();
	MLDEFORMERFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UMLDeformerTrainingModel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLDeformerFrameworkEditor();
// End Cross Module References
	DEFINE_FUNCTION(UMLDeformerTrainingModel::execSetNumFloatsPerCurve)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumFloatsPerCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumFloatsPerCurve(Z_Param_NumFloatsPerCurve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMLDeformerTrainingModel::execSetNeedsResampling)
	{
		P_GET_UBOOL(Z_Param_bNeedsResampling);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNeedsResampling(Z_Param_bNeedsResampling);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMLDeformerTrainingModel::execGetNeedsResampling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNeedsResampling();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMLDeformerTrainingModel::execSetCurrentSampleIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCurrentSampleIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMLDeformerTrainingModel::execNumSamples)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->NumSamples();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMLDeformerTrainingModel::execGetNumberSampleDeltas)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberSampleDeltas();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMLDeformerTrainingModel::execGetNumberSampleCurves)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberSampleCurves();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMLDeformerTrainingModel::execGetNumberSampleTransforms)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberSampleTransforms();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMLDeformerTrainingModel::execGetModel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMLDeformerModel**)Z_Param__Result=P_THIS->GetModel();
		P_NATIVE_END;
	}
	void UMLDeformerTrainingModel::StaticRegisterNativesUMLDeformerTrainingModel()
	{
		UClass* Class = UMLDeformerTrainingModel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetModel", &UMLDeformerTrainingModel::execGetModel },
			{ "GetNeedsResampling", &UMLDeformerTrainingModel::execGetNeedsResampling },
			{ "GetNumberSampleCurves", &UMLDeformerTrainingModel::execGetNumberSampleCurves },
			{ "GetNumberSampleDeltas", &UMLDeformerTrainingModel::execGetNumberSampleDeltas },
			{ "GetNumberSampleTransforms", &UMLDeformerTrainingModel::execGetNumberSampleTransforms },
			{ "NumSamples", &UMLDeformerTrainingModel::execNumSamples },
			{ "SetCurrentSampleIndex", &UMLDeformerTrainingModel::execSetCurrentSampleIndex },
			{ "SetNeedsResampling", &UMLDeformerTrainingModel::execSetNeedsResampling },
			{ "SetNumFloatsPerCurve", &UMLDeformerTrainingModel::execSetNumFloatsPerCurve },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMLDeformerTrainingModel_GetModel_Statics
	{
		struct MLDeformerTrainingModel_eventGetModel_Parms
		{
			UMLDeformerModel* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMLDeformerTrainingModel_GetModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLDeformerTrainingModel_eventGetModel_Parms, ReturnValue), Z_Construct_UClass_UMLDeformerModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLDeformerTrainingModel_GetModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerTrainingModel_GetModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerTrainingModel_GetModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Training Data" },
		{ "Comment", "/** Get the runtime ML Deformer model object. */" },
		{ "ModuleRelativePath", "Public/MLDeformerTrainingModel.h" },
		{ "ToolTip", "Get the runtime ML Deformer model object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLDeformerTrainingModel_GetModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLDeformerTrainingModel, nullptr, "GetModel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLDeformerTrainingModel_GetModel_Statics::MLDeformerTrainingModel_eventGetModel_Parms), Z_Construct_UFunction_UMLDeformerTrainingModel_GetModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerTrainingModel_GetModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerTrainingModel_GetModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerTrainingModel_GetModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLDeformerTrainingModel_GetModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLDeformerTrainingModel_GetModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMLDeformerTrainingModel_GetNeedsResampling_Statics
	{
		struct MLDeformerTrainingModel_eventGetNeedsResampling_Parms
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
	void Z_Construct_UFunction_UMLDeformerTrainingModel_GetNeedsResampling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MLDeformerTrainingModel_eventGetNeedsResampling_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMLDeformerTrainingModel_GetNeedsResampling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MLDeformerTrainingModel_eventGetNeedsResampling_Parms), &Z_Construct_UFunction_UMLDeformerTrainingModel_GetNeedsResampling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLDeformerTrainingModel_GetNeedsResampling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerTrainingModel_GetNeedsResampling_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerTrainingModel_GetNeedsResampling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Training Data" },
		{ "Comment", "/** \n\x09 * Check whether we need to resample the inputs and outputs, or if we can use a cached version. \n\x09 * This will return true if any inputs changed, that indicate that we should regenerate any cached data.\n\x09 * @return Returns true when we need to regenerate any cached data, otherwise false is returned.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerTrainingModel.h" },
		{ "ToolTip", "Check whether we need to resample the inputs and outputs, or if we can use a cached version.\nThis will return true if any inputs changed, that indicate that we should regenerate any cached data.\n@return Returns true when we need to regenerate any cached data, otherwise false is returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLDeformerTrainingModel_GetNeedsResampling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLDeformerTrainingModel, nullptr, "GetNeedsResampling", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLDeformerTrainingModel_GetNeedsResampling_Statics::MLDeformerTrainingModel_eventGetNeedsResampling_Parms), Z_Construct_UFunction_UMLDeformerTrainingModel_GetNeedsResampling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerTrainingModel_GetNeedsResampling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerTrainingModel_GetNeedsResampling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerTrainingModel_GetNeedsResampling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLDeformerTrainingModel_GetNeedsResampling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLDeformerTrainingModel_GetNeedsResampling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleCurves_Statics
	{
		struct MLDeformerTrainingModel_eventGetNumberSampleCurves_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLDeformerTrainingModel_eventGetNumberSampleCurves_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleCurves_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleCurves_Statics::Function_MetaDataParams[] = {
		{ "Category", "Training Data" },
		{ "Comment", "/** Get number of input curves. */" },
		{ "ModuleRelativePath", "Public/MLDeformerTrainingModel.h" },
		{ "ToolTip", "Get number of input curves." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLDeformerTrainingModel, nullptr, "GetNumberSampleCurves", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleCurves_Statics::MLDeformerTrainingModel_eventGetNumberSampleCurves_Parms), Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleCurves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleCurves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleCurves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleCurves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleDeltas_Statics
	{
		struct MLDeformerTrainingModel_eventGetNumberSampleDeltas_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleDeltas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLDeformerTrainingModel_eventGetNumberSampleDeltas_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleDeltas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleDeltas_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleDeltas_Statics::Function_MetaDataParams[] = {
		{ "Category", "Training Data" },
		{ "Comment", "/** Get the number of vertex deltas. */" },
		{ "ModuleRelativePath", "Public/MLDeformerTrainingModel.h" },
		{ "ToolTip", "Get the number of vertex deltas." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleDeltas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLDeformerTrainingModel, nullptr, "GetNumberSampleDeltas", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleDeltas_Statics::MLDeformerTrainingModel_eventGetNumberSampleDeltas_Parms), Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleDeltas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleDeltas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleDeltas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleDeltas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleDeltas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleDeltas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleTransforms_Statics
	{
		struct MLDeformerTrainingModel_eventGetNumberSampleTransforms_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleTransforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLDeformerTrainingModel_eventGetNumberSampleTransforms_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleTransforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleTransforms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleTransforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "Training Data" },
		{ "Comment", "/** Get the number of input transforms. This is the number of bones. */" },
		{ "ModuleRelativePath", "Public/MLDeformerTrainingModel.h" },
		{ "ToolTip", "Get the number of input transforms. This is the number of bones." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLDeformerTrainingModel, nullptr, "GetNumberSampleTransforms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleTransforms_Statics::MLDeformerTrainingModel_eventGetNumberSampleTransforms_Parms), Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleTransforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleTransforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleTransforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMLDeformerTrainingModel_NumSamples_Statics
	{
		struct MLDeformerTrainingModel_eventNumSamples_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMLDeformerTrainingModel_NumSamples_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLDeformerTrainingModel_eventNumSamples_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLDeformerTrainingModel_NumSamples_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerTrainingModel_NumSamples_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerTrainingModel_NumSamples_Statics::Function_MetaDataParams[] = {
		{ "Category", "Training Data" },
		{ "Comment", "/** Get the number of samples in this data set. This is the number of sample frames we want to train on. */" },
		{ "ModuleRelativePath", "Public/MLDeformerTrainingModel.h" },
		{ "ToolTip", "Get the number of samples in this data set. This is the number of sample frames we want to train on." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLDeformerTrainingModel_NumSamples_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLDeformerTrainingModel, nullptr, "NumSamples", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLDeformerTrainingModel_NumSamples_Statics::MLDeformerTrainingModel_eventNumSamples_Parms), Z_Construct_UFunction_UMLDeformerTrainingModel_NumSamples_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerTrainingModel_NumSamples_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerTrainingModel_NumSamples_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerTrainingModel_NumSamples_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLDeformerTrainingModel_NumSamples()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLDeformerTrainingModel_NumSamples_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMLDeformerTrainingModel_SetCurrentSampleIndex_Statics
	{
		struct MLDeformerTrainingModel_eventSetCurrentSampleIndex_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMLDeformerTrainingModel_SetCurrentSampleIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLDeformerTrainingModel_eventSetCurrentSampleIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMLDeformerTrainingModel_SetCurrentSampleIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MLDeformerTrainingModel_eventSetCurrentSampleIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMLDeformerTrainingModel_SetCurrentSampleIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MLDeformerTrainingModel_eventSetCurrentSampleIndex_Parms), &Z_Construct_UFunction_UMLDeformerTrainingModel_SetCurrentSampleIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLDeformerTrainingModel_SetCurrentSampleIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerTrainingModel_SetCurrentSampleIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerTrainingModel_SetCurrentSampleIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerTrainingModel_SetCurrentSampleIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Training Data" },
		{ "Comment", "/** \n\x09 * Set the current sample frame. This will internally call the SampleFrame method, which will update the deltas, curve values and bone rotations. \n\x09 * You call this before getting the input bone/curve and vertex delta values.\n\x09 * @param Index The training data frame/sample number.\n\x09 * @return Returns true when successful, or false when the specified sample index is out of range.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerTrainingModel.h" },
		{ "ToolTip", "Set the current sample frame. This will internally call the SampleFrame method, which will update the deltas, curve values and bone rotations.\nYou call this before getting the input bone/curve and vertex delta values.\n@param Index The training data frame/sample number.\n@return Returns true when successful, or false when the specified sample index is out of range." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLDeformerTrainingModel_SetCurrentSampleIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLDeformerTrainingModel, nullptr, "SetCurrentSampleIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLDeformerTrainingModel_SetCurrentSampleIndex_Statics::MLDeformerTrainingModel_eventSetCurrentSampleIndex_Parms), Z_Construct_UFunction_UMLDeformerTrainingModel_SetCurrentSampleIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerTrainingModel_SetCurrentSampleIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerTrainingModel_SetCurrentSampleIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerTrainingModel_SetCurrentSampleIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLDeformerTrainingModel_SetCurrentSampleIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLDeformerTrainingModel_SetCurrentSampleIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMLDeformerTrainingModel_SetNeedsResampling_Statics
	{
		struct MLDeformerTrainingModel_eventSetNeedsResampling_Parms
		{
			bool bNeedsResampling;
		};
		static void NewProp_bNeedsResampling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsResampling;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMLDeformerTrainingModel_SetNeedsResampling_Statics::NewProp_bNeedsResampling_SetBit(void* Obj)
	{
		((MLDeformerTrainingModel_eventSetNeedsResampling_Parms*)Obj)->bNeedsResampling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMLDeformerTrainingModel_SetNeedsResampling_Statics::NewProp_bNeedsResampling = { "bNeedsResampling", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MLDeformerTrainingModel_eventSetNeedsResampling_Parms), &Z_Construct_UFunction_UMLDeformerTrainingModel_SetNeedsResampling_Statics::NewProp_bNeedsResampling_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLDeformerTrainingModel_SetNeedsResampling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerTrainingModel_SetNeedsResampling_Statics::NewProp_bNeedsResampling,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerTrainingModel_SetNeedsResampling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Training Data" },
		{ "Comment", "/** Specify whether we need to resample any cached data or not, because our input assets, or any other relevant settings changed that would invalidate the cached data. */" },
		{ "ModuleRelativePath", "Public/MLDeformerTrainingModel.h" },
		{ "ToolTip", "Specify whether we need to resample any cached data or not, because our input assets, or any other relevant settings changed that would invalidate the cached data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLDeformerTrainingModel_SetNeedsResampling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLDeformerTrainingModel, nullptr, "SetNeedsResampling", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLDeformerTrainingModel_SetNeedsResampling_Statics::MLDeformerTrainingModel_eventSetNeedsResampling_Parms), Z_Construct_UFunction_UMLDeformerTrainingModel_SetNeedsResampling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerTrainingModel_SetNeedsResampling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerTrainingModel_SetNeedsResampling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerTrainingModel_SetNeedsResampling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLDeformerTrainingModel_SetNeedsResampling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLDeformerTrainingModel_SetNeedsResampling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMLDeformerTrainingModel_SetNumFloatsPerCurve_Statics
	{
		struct MLDeformerTrainingModel_eventSetNumFloatsPerCurve_Parms
		{
			int32 NumFloatsPerCurve;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumFloatsPerCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMLDeformerTrainingModel_SetNumFloatsPerCurve_Statics::NewProp_NumFloatsPerCurve = { "NumFloatsPerCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLDeformerTrainingModel_eventSetNumFloatsPerCurve_Parms, NumFloatsPerCurve), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLDeformerTrainingModel_SetNumFloatsPerCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLDeformerTrainingModel_SetNumFloatsPerCurve_Statics::NewProp_NumFloatsPerCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLDeformerTrainingModel_SetNumFloatsPerCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "Training Data" },
		{ "Comment", "/** Set the number of floats per curve. On default this is one. */" },
		{ "ModuleRelativePath", "Public/MLDeformerTrainingModel.h" },
		{ "ToolTip", "Set the number of floats per curve. On default this is one." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLDeformerTrainingModel_SetNumFloatsPerCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLDeformerTrainingModel, nullptr, "SetNumFloatsPerCurve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLDeformerTrainingModel_SetNumFloatsPerCurve_Statics::MLDeformerTrainingModel_eventSetNumFloatsPerCurve_Parms), Z_Construct_UFunction_UMLDeformerTrainingModel_SetNumFloatsPerCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerTrainingModel_SetNumFloatsPerCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLDeformerTrainingModel_SetNumFloatsPerCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLDeformerTrainingModel_SetNumFloatsPerCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLDeformerTrainingModel_SetNumFloatsPerCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLDeformerTrainingModel_SetNumFloatsPerCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLDeformerTrainingModel);
	UClass* Z_Construct_UClass_UMLDeformerTrainingModel_NoRegister()
	{
		return UMLDeformerTrainingModel::StaticClass();
	}
	struct Z_Construct_UClass_UMLDeformerTrainingModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleDeltas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleDeltas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SampleDeltas;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleCurveValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleCurveValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SampleCurveValues;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleBoneRotations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleBoneRotations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SampleBoneRotations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLDeformerTrainingModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MLDeformerFrameworkEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMLDeformerTrainingModel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMLDeformerTrainingModel_GetModel, "GetModel" }, // 4023684399
		{ &Z_Construct_UFunction_UMLDeformerTrainingModel_GetNeedsResampling, "GetNeedsResampling" }, // 2910685644
		{ &Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleCurves, "GetNumberSampleCurves" }, // 3125256287
		{ &Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleDeltas, "GetNumberSampleDeltas" }, // 2123801839
		{ &Z_Construct_UFunction_UMLDeformerTrainingModel_GetNumberSampleTransforms, "GetNumberSampleTransforms" }, // 517685513
		{ &Z_Construct_UFunction_UMLDeformerTrainingModel_NumSamples, "NumSamples" }, // 2456095561
		{ &Z_Construct_UFunction_UMLDeformerTrainingModel_SetCurrentSampleIndex, "SetCurrentSampleIndex" }, // 2361656825
		{ &Z_Construct_UFunction_UMLDeformerTrainingModel_SetNeedsResampling, "SetNeedsResampling" }, // 2641671273
		{ &Z_Construct_UFunction_UMLDeformerTrainingModel_SetNumFloatsPerCurve, "SetNumFloatsPerCurve" }, // 3241835739
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerTrainingModel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The training model base class.\n * This class is used to interface with Python by providing some methods you can call inside your python training code.\n * For example it allows you to get all the sampled data, such as the deltas, bones and curve values.\n * When you create a new model you need to create a class inherited from this base class, and define a Train method inside it as follows:\n *\n * @code{.cpp}\n * // Doesn't need an implementation inside cpp, just a declaration in the header file.\n * UFUNCTION(BlueprintImplementableEvent, Category = \"Training Model\")\n * int32 Train() const;\n * @endcode\n * \n * Now inside your Python class you do something like:\n * \n * @code{.py}\n * @unreal.uclass()\n * class YourModelPythonTrainingModel(unreal.YourTrainingModel):\n *     @unreal.ufunction(override=True)\n *     def train(self):\n *         # ...do training here...\n *         return 0   # A value of 0 is success, 1 means aborted, see ETrainingResult.\n * @endcode\n * \n * The editor will execute the Train method, which will trigger the \"train\" method in your Python class to be executed.\n * Keep in mind that in Unreal Engine all python code is lower case. So a \"Train\" method inside c++ will need to be called \"train\" inside the python code.\n * Or if you have something called \"PerformMyTraining\" it will need to be called \"perform_my_training\" inside Python.\n */" },
		{ "IncludePath", "MLDeformerTrainingModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MLDeformerTrainingModel.h" },
		{ "ToolTip", "The training model base class.\nThis class is used to interface with Python by providing some methods you can call inside your python training code.\nFor example it allows you to get all the sampled data, such as the deltas, bones and curve values.\nWhen you create a new model you need to create a class inherited from this base class, and define a Train method inside it as follows:\n\n@code{.cpp}\n// Doesn't need an implementation inside cpp, just a declaration in the header file.\nUFUNCTION(BlueprintImplementableEvent, Category = \"Training Model\")\nint32 Train() const;\n@endcode\n\nNow inside your Python class you do something like:\n\n@code{.py}\n@unreal.uclass()\nclass YourModelPythonTrainingModel(unreal.YourTrainingModel):\n    @unreal.ufunction(override=True)\n    def train(self):\n        # ...do training here...\n        return 0   # A value of 0 is success, 1 means aborted, see ETrainingResult.\n@endcode\n\nThe editor will execute the Train method, which will trigger the \"train\" method in your Python class to be executed.\nKeep in mind that in Unreal Engine all python code is lower case. So a \"Train\" method inside c++ will need to be called \"train\" inside the python code.\nOr if you have something called \"PerformMyTraining\" it will need to be called \"perform_my_training\" inside Python." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMLDeformerTrainingModel_Statics::NewProp_SampleDeltas_Inner = { "SampleDeltas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerTrainingModel_Statics::NewProp_SampleDeltas_MetaData[] = {
		{ "Category", "Training Data" },
		{ "Comment", "// The delta values per vertex for this sample. This is updated after SetCurrentSampleIndex is called. Contains an xyz (3 floats) for each vertex.\n" },
		{ "ModuleRelativePath", "Public/MLDeformerTrainingModel.h" },
		{ "ToolTip", "The delta values per vertex for this sample. This is updated after SetCurrentSampleIndex is called. Contains an xyz (3 floats) for each vertex." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMLDeformerTrainingModel_Statics::NewProp_SampleDeltas = { "SampleDeltas", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerTrainingModel, SampleDeltas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerTrainingModel_Statics::NewProp_SampleDeltas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerTrainingModel_Statics::NewProp_SampleDeltas_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMLDeformerTrainingModel_Statics::NewProp_SampleCurveValues_Inner = { "SampleCurveValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerTrainingModel_Statics::NewProp_SampleCurveValues_MetaData[] = {
		{ "Category", "Training Data" },
		{ "Comment", "// The curve weights. This is updated after SetCurrentSampleIndex is called.\n" },
		{ "ModuleRelativePath", "Public/MLDeformerTrainingModel.h" },
		{ "ToolTip", "The curve weights. This is updated after SetCurrentSampleIndex is called." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMLDeformerTrainingModel_Statics::NewProp_SampleCurveValues = { "SampleCurveValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerTrainingModel, SampleCurveValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerTrainingModel_Statics::NewProp_SampleCurveValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerTrainingModel_Statics::NewProp_SampleCurveValues_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMLDeformerTrainingModel_Statics::NewProp_SampleBoneRotations_Inner = { "SampleBoneRotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerTrainingModel_Statics::NewProp_SampleBoneRotations_MetaData[] = {
		{ "Category", "Training Data" },
		{ "Comment", "// The bone rotations in bone (local) space for this sample. This is updated after SetCurrentSampleIndex is called and is 6 floats per bone (2 columns of 3x3 rotation matrix).\n" },
		{ "ModuleRelativePath", "Public/MLDeformerTrainingModel.h" },
		{ "ToolTip", "The bone rotations in bone (local) space for this sample. This is updated after SetCurrentSampleIndex is called and is 6 floats per bone (2 columns of 3x3 rotation matrix)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMLDeformerTrainingModel_Statics::NewProp_SampleBoneRotations = { "SampleBoneRotations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerTrainingModel, SampleBoneRotations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerTrainingModel_Statics::NewProp_SampleBoneRotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerTrainingModel_Statics::NewProp_SampleBoneRotations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLDeformerTrainingModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerTrainingModel_Statics::NewProp_SampleDeltas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerTrainingModel_Statics::NewProp_SampleDeltas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerTrainingModel_Statics::NewProp_SampleCurveValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerTrainingModel_Statics::NewProp_SampleCurveValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerTrainingModel_Statics::NewProp_SampleBoneRotations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerTrainingModel_Statics::NewProp_SampleBoneRotations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLDeformerTrainingModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLDeformerTrainingModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLDeformerTrainingModel_Statics::ClassParams = {
		&UMLDeformerTrainingModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMLDeformerTrainingModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerTrainingModel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLDeformerTrainingModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerTrainingModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLDeformerTrainingModel()
	{
		if (!Z_Registration_Info_UClass_UMLDeformerTrainingModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLDeformerTrainingModel.OuterSingleton, Z_Construct_UClass_UMLDeformerTrainingModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLDeformerTrainingModel.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORKEDITOR_API UClass* StaticClass<UMLDeformerTrainingModel>()
	{
		return UMLDeformerTrainingModel::StaticClass();
	}
	UMLDeformerTrainingModel::UMLDeformerTrainingModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLDeformerTrainingModel);
	UMLDeformerTrainingModel::~UMLDeformerTrainingModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLDeformerTrainingModel, UMLDeformerTrainingModel::StaticClass, TEXT("UMLDeformerTrainingModel"), &Z_Registration_Info_UClass_UMLDeformerTrainingModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLDeformerTrainingModel), 3760425187U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_3060578659(TEXT("/Script/MLDeformerFrameworkEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerTrainingModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
